package main

import (
	"bufio"
	"bytes"
	"debug/pe"
	"encoding/binary"
	"fmt"
	"os/exec"
	"strconv"
	"strings"

	"endorphin_decomp/internal/decomp"
)

// image is the .text section of the target plus what we need to resolve IAT references.
type image struct {
	textVA   uint32
	text     []byte
	imageEnd uint32
	iat      map[uint32]string // IAT slot VA -> "DLL!Symbol"
	exePath  string
}

func loadImage(exePath string) (*image, error) {
	f, err := pe.Open(exePath)
	if err != nil {
		return nil, err
	}
	defer f.Close()
	oh, ok := f.OptionalHeader.(*pe.OptionalHeader32)
	if !ok {
		return nil, fmt.Errorf("%s is not a PE32 image", exePath)
	}
	img := &image{exePath: exePath, imageEnd: oh.ImageBase + oh.SizeOfImage, iat: map[uint32]string{}}
	for _, s := range f.Sections {
		if s.Name == ".text" {
			data, err := s.Data()
			if err != nil {
				return nil, err
			}
			img.textVA = oh.ImageBase + s.VirtualAddress
			if uint32(len(data)) > s.VirtualSize {
				data = data[:s.VirtualSize]
			}
			img.text = data
		}
	}
	if img.text == nil {
		return nil, fmt.Errorf("no .text section in %s", exePath)
	}
	// Import table: map every IAT slot to its symbol, like extract_units does.
	if err := img.parseIAT(f, oh); err != nil {
		return nil, err
	}
	return img, nil
}

func (img *image) parseIAT(f *pe.File, oh *pe.OptionalHeader32) error {
	dir := oh.DataDirectory[pe.IMAGE_DIRECTORY_ENTRY_IMPORT]
	if dir.VirtualAddress == 0 {
		return nil
	}
	read := func(rva uint32, n int) []byte {
		for _, s := range f.Sections {
			if rva >= s.VirtualAddress && rva < s.VirtualAddress+s.VirtualSize {
				data, err := s.Data()
				if err != nil {
					return nil
				}
				off := rva - s.VirtualAddress
				if int(off)+n > len(data) {
					return nil
				}
				return data[off : int(off)+n]
			}
		}
		return nil
	}
	cstr := func(rva uint32) string {
		var sb strings.Builder
		for i := uint32(0); i < 512; i++ {
			b := read(rva+i, 1)
			if b == nil || b[0] == 0 {
				break
			}
			sb.WriteByte(b[0])
		}
		return sb.String()
	}
	for d := dir.VirtualAddress; ; d += 20 {
		desc := read(d, 20)
		if desc == nil {
			break
		}
		origThunk := binary.LittleEndian.Uint32(desc[0:])
		nameRVA := binary.LittleEndian.Uint32(desc[12:])
		firstThunk := binary.LittleEndian.Uint32(desc[16:])
		if nameRVA == 0 && firstThunk == 0 {
			break
		}
		dll := cstr(nameRVA)
		lookup := origThunk
		if lookup == 0 {
			lookup = firstThunk
		}
		for i := uint32(0); ; i++ {
			e := read(lookup+i*4, 4)
			if e == nil {
				break
			}
			v := binary.LittleEndian.Uint32(e)
			if v == 0 {
				break
			}
			var sym string
			if v&0x80000000 != 0 {
				sym = fmt.Sprintf("%s!ord_%d", dll, v&0xFFFF)
			} else {
				sym = dll + "!" + cstr(v+2)
			}
			img.iat[oh.ImageBase+firstThunk+i*4] = sym
		}
	}
	return nil
}

func (img *image) inText(va uint32) bool {
	return va >= img.textVA && va < img.textVA+uint32(len(img.text))
}

func (img *image) bytesAt(va, n uint32) []byte {
	if !img.inText(va) || !img.inText(va+n-1) {
		return nil
	}
	off := va - img.textVA
	return img.text[off : off+n]
}

func (img *image) u32(va uint32) (uint32, bool) {
	b := img.bytesAt(va, 4)
	if b == nil {
		return 0, false
	}
	return binary.LittleEndian.Uint32(b), true
}

// inst is one decoded instruction, in the same shape extract_units caches.
type inst struct {
	VA     uint32
	Bytes  []byte
	RawHex string // objdump's byte column, e.g. "8b 44 24 04"
	Disasm string // objdump's text column, e.g. "mov\teax, dword ptr [esp + 0x4]"
}

func (in *inst) end() uint32 { return in.VA + uint32(len(in.Bytes)) }

func (in *inst) mnemonic() string {
	d := in.Disasm
	if i := strings.IndexAny(d, "\t "); i != -1 {
		return d[:i]
	}
	return d
}

// decode disassembles [start, stop) with the same llvm-objdump invocation extract_units uses.
func (img *image) decode(start, stop uint32) ([]inst, error) {
	cmd := exec.Command("/usr/bin/llvm-objdump", "-d", "--x86-asm-syntax=intel", "--section=.text",
		fmt.Sprintf("--start-address=0x%08x", start), fmt.Sprintf("--stop-address=0x%08x", stop), img.exePath)
	out, err := cmd.Output()
	if err != nil {
		return nil, fmt.Errorf("llvm-objdump %08X-%08X: %v", start, stop, err)
	}
	var insts []inst
	sc := bufio.NewScanner(bytes.NewReader(out))
	sc.Buffer(make([]byte, 1<<20), 1<<20)
	for sc.Scan() {
		line := sc.Text()
		colon := strings.IndexByte(line, ':')
		if colon <= 0 || colon > 12 {
			continue
		}
		v, err := strconv.ParseUint(strings.TrimSpace(line[:colon]), 16, 32)
		if err != nil {
			continue
		}
		va := uint32(v)
		if va < start || va >= stop {
			continue
		}
		rest := line[colon+1:]
		raw, dis := strings.TrimSpace(rest), ""
		if tab := strings.IndexByte(rest, '\t'); tab != -1 {
			raw = strings.TrimSpace(rest[:tab])
			dis = strings.TrimSpace(rest[tab+1:])
		}
		b := parseHex(raw)
		if len(b) == 0 {
			continue
		}
		if dis == "" && len(insts) > 0 && insts[len(insts)-1].end() == va {
			p := &insts[len(insts)-1] // continuation line of a long instruction
			p.Bytes = append(p.Bytes, b...)
			p.RawHex += " " + raw
			continue
		}
		insts = append(insts, inst{VA: va, Bytes: b, RawHex: raw, Disasm: dis})
	}
	return insts, sc.Err()
}

func parseHex(s string) []byte {
	var out []byte
	for _, f := range strings.Fields(s) {
		if len(f) != 2 {
			continue
		}
		if v, err := strconv.ParseUint(f, 16, 8); err == nil {
			out = append(out, byte(v))
		}
	}
	return out
}

// Control-flow facts about one instruction.
type flow struct {
	isRet      bool
	isJmp      bool   // any unconditional jmp
	isIndirect bool   // jmp through register/memory
	isCall     bool   // direct call rel32
	isJcc      bool   // conditional branch
	target     uint32 // direct branch/call target (0 if none)
	iatTarget  uint32 // jmp/call [IAT slot]
}

func (img *image) flowOf(in *inst) flow {
	b := in.Bytes
	var f flow
	if len(b) == 0 {
		return f
	}
	rel := func(off int, size int) uint32 {
		var r int64
		if size == 1 {
			r = int64(int8(b[off]))
		} else {
			r = int64(int32(binary.LittleEndian.Uint32(b[off:])))
		}
		return uint32(int64(in.end()) + r)
	}
	switch {
	case b[0] == 0xC3 || b[0] == 0xC2:
		f.isRet = true
	case b[0] == 0xE8 && len(b) == 5:
		f.isCall, f.target = true, rel(1, 4)
	case b[0] == 0xE9 && len(b) == 5:
		f.isJmp, f.target = true, rel(1, 4)
	case b[0] == 0xEB && len(b) == 2:
		f.isJmp, f.target = true, rel(1, 1)
	case b[0] >= 0x70 && b[0] <= 0x7F && len(b) == 2:
		f.isJcc, f.target = true, rel(1, 1)
	case b[0] == 0x0F && len(b) == 6 && b[1] >= 0x80 && b[1] <= 0x8F:
		f.isJcc, f.target = true, rel(2, 4)
	case (b[0] == 0xE3 || (b[0] >= 0xE0 && b[0] <= 0xE2)) && len(b) == 2: // jecxz/loop*
		f.isJcc, f.target = true, rel(1, 1)
	case b[0] == 0xFF && len(b) >= 2:
		if reg := (b[1] >> 3) & 7; reg == 4 || reg == 5 {
			f.isJmp, f.isIndirect = true, true
		}
		// FF 25 = jmp [disp32], FF 15 = call [disp32]: through an IAT slot when disp32 is one
		if len(b) == 6 && (b[1] == 0x25 || b[1] == 0x15) {
			slot := binary.LittleEndian.Uint32(b[2:])
			if _, ok := img.iat[slot]; ok {
				f.iatTarget = slot
			}
		}
	}
	return f
}

// suspicious reports instructions MSVC 2005 never emits in compiled C++: decoding data as code produces them.
func suspicious(in *inst) bool {
	d := in.Disasm
	if d == "" || strings.Contains(d, "<unknown>") || strings.Contains(d, "(bad)") {
		return true
	}
	switch in.mnemonic() {
	case "in", "out", "insb", "insd", "insw", "outsb", "outsd", "outsw", "retf", "lret", "into", "hlt",
		"cli", "sti", "iret", "iretd", "bound", "arpl", "les", "lds", "aaa", "aas", "daa", "das", "aam", "aad",
		"salc", "ljmp", "lcall", "sldt", "str", "lldt", "ltr", "verr", "verw", "lar", "lsl", "clts", "invd",
		"wbinvd", "rdmsr", "wrmsr", "rdpmc", "sysenter", "sysexit", "enter", "icebp", "int1", "ud1", "ud2":
		return true
	case "lock", "rep", "repne", "repe":
		// a bare prefix (nothing after it) means objdump could not attach it to a real instruction
		return strings.TrimSpace(strings.TrimPrefix(d, in.mnemonic())) == ""
	case "int":
		return true // int3 is decoded as "int3", never "int"
	case "push", "pop":
		ops := strings.TrimSpace(strings.TrimPrefix(d, in.mnemonic()))
		switch ops {
		case "es", "cs", "ss", "ds", "fs", "gs":
			return true
		}
	case "add":
		// 00 00: zero-filled data decoded as code
		if len(in.Bytes) == 2 && in.Bytes[0] == 0x00 && in.Bytes[1] == 0x00 {
			return true
		}
	}
	return false
}

// fillerLen: see decomp.FillerLen (shared with the queue's validity check).
func fillerLen(buf []byte) int { return decomp.FillerLen(buf) }
