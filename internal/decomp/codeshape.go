package decomp

import (
	"bufio"
	"bytes"
	"os"
	"path/filepath"
	"strconv"
	"strings"
	"sync"
)

// FillerLen returns the length of the inter-function padding instruction at the start of buf (0 if none):
// int3, nop, and the multi-byte no-ops MSVC and the linker use to align the next function.
func FillerLen(buf []byte) int {
	if len(buf) == 0 {
		return 0
	}
	switch buf[0] {
	case 0xCC, 0x90:
		return 1
	}
	for _, f := range fillerSeqs {
		if bytes.HasPrefix(buf, f) {
			return len(f)
		}
	}
	return 0
}

var fillerSeqs = [][]byte{
	{0x8D, 0xA4, 0x24, 0x00, 0x00, 0x00, 0x00}, // lea esp, [esp+0]
	{0x8D, 0x9B, 0x00, 0x00, 0x00, 0x00},       // lea ebx, [ebx+0]
	{0x8D, 0x64, 0x24, 0x00},                   // lea esp, [esp+0]
	{0x8D, 0x49, 0x00},                         // lea ecx, [ecx+0]
	{0x8D, 0x40, 0x00},                         // lea eax, [eax+0]
	{0x8B, 0xFF},                               // mov edi, edi
	{0x8B, 0xC0},                               // mov eax, eax
	{0x8B, 0xC9},                               // mov ecx, ecx
	{0x66, 0x90},                               // xchg ax, ax
}

// NoreturnFile lists functions that never return, learned from the binary by tools/resplit.
const NoreturnFile = "build/noreturn.txt"

var (
	noreturnOnce  sync.Once
	noreturnVAs   map[uint32]bool
	noreturnSlots map[uint32]bool
)

func loadNoreturn() {
	noreturnVAs, noreturnSlots = map[uint32]bool{}, map[uint32]bool{}
	f, err := os.Open(filepath.FromSlash(NoreturnFile))
	if err != nil {
		return
	}
	defer f.Close()
	sc := bufio.NewScanner(f)
	for sc.Scan() {
		line := strings.TrimSpace(sc.Text())
		if line == "" || strings.HasPrefix(line, "#") {
			continue
		}
		fields := strings.Fields(line)
		v, err := strconv.ParseUint(strings.TrimPrefix(fields[0], "0x"), 16, 32)
		if err != nil {
			continue
		}
		if len(fields) > 1 && strings.HasPrefix(fields[1], "iat:") {
			noreturnSlots[uint32(v)] = true
		} else {
			noreturnVAs[uint32(v)] = true
		}
	}
}

// IsNoreturnCall reports whether a cached disassembly line is a call to a function that never returns:
// a direct call to a learned no-return VA, an indirect call through a no-return IAT slot, or (fallback
// when build/noreturn.txt is absent) a call whose symbol comment names a known no-return function.
func IsNoreturnCall(line string) bool {
	noreturnOnce.Do(loadNoreturn)
	parts := strings.Split(line, "\t")
	if len(parts) < 3 || strings.TrimSpace(parts[1]) != "call" {
		return false
	}
	ops := parts[2]
	if i := strings.Index(ops, " ;"); i != -1 {
		ops = ops[:i]
	}
	if i := strings.Index(ops, " <"); i != -1 {
		ops = ops[:i]
	}
	ops = strings.TrimSpace(ops)
	if strings.HasPrefix(ops, "dword ptr [0x") && strings.HasSuffix(ops, "]") {
		if v, err := strconv.ParseUint(ops[len("dword ptr [0x"):len(ops)-1], 16, 32); err == nil && noreturnSlots[uint32(v)] {
			return true
		}
	} else if strings.HasPrefix(ops, "0x") {
		if v, err := strconv.ParseUint(ops[2:], 16, 32); err == nil && noreturnVAs[uint32(v)] {
			return true
		}
	}
	for _, s := range noReturnCallees {
		if strings.Contains(line, s) {
			return true
		}
	}
	return false
}

// rawBytesOf parses the byte column of a cached disassembly line ("  ADDR: 8b ff   \tmov\tedi, edi").
func rawBytesOf(line string) []byte {
	colon := strings.IndexByte(line, ':')
	if colon == -1 {
		return nil
	}
	rest := line[colon+1:]
	if tab := strings.IndexByte(rest, '\t'); tab != -1 {
		rest = rest[:tab]
	}
	var out []byte
	for _, f := range strings.Fields(rest) {
		if v, err := strconv.ParseUint(f, 16, 8); err == nil && len(f) == 2 {
			out = append(out, byte(v))
		}
	}
	return out
}

// isPadLine reports whether a cached disassembly line is a whole padding/filler instruction.
func isPadLine(line string) bool {
	b := rawBytesOf(line)
	return len(b) > 0 && FillerLen(b) == len(b)
}
