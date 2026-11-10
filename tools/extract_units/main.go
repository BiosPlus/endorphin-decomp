package main

import (
	"bufio"
	"bytes"
	"crypto/sha256"
	"debug/pe"
	"encoding/binary"
	"encoding/hex"
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
	"sync"

	"endorphin_decomp/internal/unitstore"
)

type TargetConfig struct {
	BinaryName string `json:"binary_name"`
	Version    string `json:"version"`
	SHA256     string `json:"sha256"`
	ImageBase  string `json:"image_base"`
	Sections   map[string]struct {
		VA          string `json:"va"`
		RVA         string `json:"rva"`
		VirtualSize uint32 `json:"virtual_size"`
		RawSize     uint32 `json:"raw_size"`
	} `json:"sections"`
}

type ClassEntry struct {
	DemangledName  string   `json:"demangled_name"`
	ShortName      string   `json:"short_name"`
	VTableVA       string   `json:"vtable_va"`
	VirtualMethods []string `json:"virtual_methods"`
	VTables        []struct {
		VTableVA       string   `json:"vtable_va"`
		Offset         uint32   `json:"offset"`
		VirtualMethods []string `json:"virtual_methods"`
	} `json:"vtables"`
}

type SectionMem struct {
	Name  string
	VA    uint32
	VSize uint32
	Data  []byte
}

type PEImage struct {
	ImageBase   uint32
	EntryPoint  uint32
	ImportRVA   uint32
	ImportSize  uint32
	Sections    []SectionMem
}

func loadPEImage(path string, expectedSHA256 string) (*PEImage, error) {
	raw, err := os.ReadFile(path)
	if err != nil {
		return nil, err
	}
	sum := sha256.Sum256(raw)
	actualHex := hex.EncodeToString(sum[:])
	if !strings.EqualFold(actualHex, expectedSHA256) {
		return nil, fmt.Errorf("SHA-256 mismatch: got %s, expected %s", actualHex, expectedSHA256)
	}
	fmt.Printf("Verified %s SHA-256: %s\n", path, actualHex)

	f, err := pe.NewFile(bytes.NewReader(raw))
	if err != nil {
		return nil, err
	}
	defer f.Close()

	img := &PEImage{ImageBase: 0x00400000}
	if opt, ok := f.OptionalHeader.(*pe.OptionalHeader32); ok {
		img.ImageBase = opt.ImageBase
		img.EntryPoint = opt.ImageBase + opt.AddressOfEntryPoint
		if len(opt.DataDirectory) > 1 {
			img.ImportRVA = opt.DataDirectory[1].VirtualAddress
			img.ImportSize = opt.DataDirectory[1].Size
		}
	}

	for _, s := range f.Sections {
		data, err := s.Data()
		if err != nil {
			continue
		}
		img.Sections = append(img.Sections, SectionMem{
			Name:  s.Name,
			VA:    img.ImageBase + s.VirtualAddress,
			VSize: s.VirtualSize,
			Data:  data,
		})
	}
	return img, nil
}

func (img *PEImage) FindSection(name string) *SectionMem {
	for i := range img.Sections {
		if img.Sections[i].Name == name {
			return &img.Sections[i]
		}
	}
	return nil
}

func (img *PEImage) ReadU32(va uint32) (uint32, bool) {
	for i := range img.Sections {
		s := &img.Sections[i]
		limit := uint32(len(s.Data))
		if s.VSize < limit {
			limit = s.VSize
		}
		if va >= s.VA && va < s.VA+limit && (s.VA+limit)-va >= 4 {
			off := va - s.VA
			return binary.LittleEndian.Uint32(s.Data[off : off+4]), true
		}
	}
	return 0, false
}

func (img *PEImage) ReadU16(va uint32) (uint16, bool) {
	for i := range img.Sections {
		s := &img.Sections[i]
		limit := uint32(len(s.Data))
		if s.VSize < limit {
			limit = s.VSize
		}
		if va >= s.VA && va < s.VA+limit && (s.VA+limit)-va >= 2 {
			off := va - s.VA
			return binary.LittleEndian.Uint16(s.Data[off : off+2]), true
		}
	}
	return 0, false
}

func (img *PEImage) ReadCString(va uint32, maxLen int) (string, bool) {
	for i := range img.Sections {
		s := &img.Sections[i]
		limit := uint32(len(s.Data))
		if va >= s.VA && va < s.VA+limit {
			off := va - s.VA
			end := off
			for end < limit && int(end-off) < maxLen && s.Data[end] != 0 {
				end++
			}
			if end < limit && s.Data[end] == 0 {
				return string(s.Data[off:end]), true
			}
		}
	}
	return "", false
}

func (img *PEImage) ParseImportTable() map[uint32]string {
	iatMap := make(map[uint32]string)
	if img.ImportRVA == 0 {
		return iatMap
	}
	impVA := img.ImageBase + img.ImportRVA
	for off := uint32(0); off+20 <= img.ImportSize; off += 20 {
		iltRVA, ok := img.ReadU32(impVA + off)
		if !ok {
			break
		}
		nameRVA, _ := img.ReadU32(impVA + off + 12)
		iatRVA, _ := img.ReadU32(impVA + off + 16)
		if iltRVA == 0 && nameRVA == 0 && iatRVA == 0 {
			break
		}
		dllName, ok := img.ReadCString(img.ImageBase+nameRVA, 256)
		if !ok {
			dllName = "UNKNOWN.dll"
		}
		dllShort := strings.TrimSuffix(strings.TrimSuffix(dllName, ".dll"), ".DLL")

		lookupBase := iltRVA
		if lookupBase == 0 {
			lookupBase = iatRVA
		}
		for idx := uint32(0); idx < 4096; idx++ {
			entry, ok := img.ReadU32(img.ImageBase + lookupBase + idx*4)
			if !ok || entry == 0 {
				break
			}
			slotVA := img.ImageBase + iatRVA + idx*4
			if (entry & 0x80000000) != 0 {
				ord := entry & 0xFFFF
				iatMap[slotVA] = fmt.Sprintf("%s!ord_%d", dllShort, ord)
			} else {
				fnName, ok := img.ReadCString(img.ImageBase+entry+2, 512)
				if !ok || fnName == "" {
					ord, _ := img.ReadU16(img.ImageBase + entry)
					fnName = fmt.Sprintf("hint_%d", ord)
				}
				iatMap[slotVA] = fmt.Sprintf("%s!%s", dllShort, fnName)
			}
		}
	}
	return iatMap
}

type Inst struct {
	VA           uint32
	Bytes        []byte
	RawHex       string
	Disasm       string
	IsInt3       bool
	IsNop        bool
	IsRet        bool
	IsUncondJmp  bool
	JmpIATTarget uint32
	CallTarget   uint32
	BranchTarget uint32
	IATRef       uint32
	RelocVAs     []uint32
}

type UnitEntry struct {
	VA          string   `json:"va"`
	Size        uint32   `json:"size"`
	SHA256      string   `json:"sha256"`
	Symbol      string   `json:"symbol"`
	Callees     []string `json:"callees"`
	NumCallees  int      `json:"num_callees"`
	IsLeaf      bool     `json:"is_leaf"`
	IsThunk     bool     `json:"is_thunk"`
	Relocations []string `json:"relocations"`
	Status      string   `json:"status"`
}

func parseHexByteSlice(rawHex string) []byte {
	fields := strings.Fields(rawHex)
	out := make([]byte, 0, len(fields))
	for _, f := range fields {
		if len(f) == 2 {
			v, err := strconv.ParseUint(f, 16, 8)
			if err == nil {
				out = append(out, byte(v))
			}
		}
	}
	return out
}

func main() {
	runGhidra := flag.Bool("ghidra", false, "Run Ghidra headless with tools/ghidra/ExportFunctions.java after objdump extraction")
	flag.Parse()

	cfgBytes, err := os.ReadFile("build/target.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/target.json: %v\n", err)
		os.Exit(1)
	}
	var cfg TargetConfig
	if err := json.Unmarshal(cfgBytes, &cfg); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/target.json: %v\n", err)
		os.Exit(1)
	}

	img, err := loadPEImage(".local/bin/endorphin.exe", cfg.SHA256)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error loading PE: %v\n", err)
		os.Exit(1)
	}

	textSec := img.FindSection(".text")
	if textSec == nil {
		fmt.Fprintf(os.Stderr, "Missing .text section\n")
		os.Exit(1)
	}
	textStart := textSec.VA
	textEnd := textSec.VA + textSec.VSize // 0x00401000 .. 0x009221CA
	imageEnd := uint32(0x00BDC000)

	iatSymbols := img.ParseImportTable()
	fmt.Printf("Parsed %d IAT import symbols across DLLs\n", len(iatSymbols))

	// Load vtable methods from build/classes.json if available
	vtableSymbols := make(map[uint32]string)
	if classData, err := os.ReadFile("build/classes.json"); err == nil {
		var classes []ClassEntry
		if err := json.Unmarshal(classData, &classes); err == nil {
			for _, cls := range classes {
				for idx, mHex := range cls.VirtualMethods {
					va64, err := strconv.ParseUint(strings.TrimPrefix(mHex, "0x"), 16, 32)
					if err == nil {
						va := uint32(va64)
						if _, exists := vtableSymbols[va]; !exists {
							vtableSymbols[va] = fmt.Sprintf("%s::vfunc_%d", cls.DemangledName, idx)
						}
					}
				}
				for _, vt := range cls.VTables {
					for idx, mHex := range vt.VirtualMethods {
						va64, err := strconv.ParseUint(strings.TrimPrefix(mHex, "0x"), 16, 32)
						if err == nil {
							va := uint32(va64)
							if _, exists := vtableSymbols[va]; !exists {
								vtableSymbols[va] = fmt.Sprintf("%s::vfunc_%d_off_%X", cls.DemangledName, idx, vt.Offset)
							}
						}
					}
				}
			}
		}
	}
	fmt.Printf("Loaded %d unique virtual method entry points from build/classes.json\n", len(vtableSymbols))

	// Step 1: Run /usr/bin/llvm-objdump to disassemble .text
	fmt.Printf("Disassembling .text (0x%08X..0x%08X) via /usr/bin/llvm-objdump...\n", textStart, textEnd)
	cmd := exec.Command("/usr/bin/llvm-objdump",
		"-d",
		"--x86-asm-syntax=intel",
		"--section=.text",
		fmt.Sprintf("--start-address=0x%08x", textStart),
		fmt.Sprintf("--stop-address=0x%08x", textEnd),
		".local/bin/endorphin.exe",
	)
	stdout, err := cmd.StdoutPipe()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error creating stdout pipe: %v\n", err)
		os.Exit(1)
	}
	if err := cmd.Start(); err != nil {
		fmt.Fprintf(os.Stderr, "Error starting llvm-objdump: %v\n", err)
		os.Exit(1)
	}

	insts := make([]Inst, 0, 1800000)
	vaToInstIdx := make(map[uint32]int, 1800000)
	knownStarts := make(map[uint32]bool)
	knownStarts[textStart] = true
	if img.EntryPoint >= textStart && img.EntryPoint < textEnd {
		knownStarts[img.EntryPoint] = true
	}
	for va := range vtableSymbols {
		if va >= textStart && va < textEnd {
			knownStarts[va] = true
		}
	}

	scanner := bufio.NewScanner(stdout)
	scanner.Buffer(make([]byte, 1024*1024), 1024*1024)
	for scanner.Scan() {
		line := scanner.Text()
		// Match instruction lines like: "  401000: 57                            push    edi"
		colonIdx := strings.IndexByte(line, ':')
		if colonIdx <= 0 || colonIdx > 12 {
			continue
		}
		addrStr := strings.TrimSpace(line[:colonIdx])
		va64, err := strconv.ParseUint(addrStr, 16, 32)
		if err != nil {
			continue
		}
		va := uint32(va64)
		if va < textStart || va >= textEnd {
			continue
		}

		rest := line[colonIdx+1:]
		tabIdx := strings.IndexByte(rest, '\t')
		var rawHex, disasm string
		if tabIdx != -1 {
			rawHex = strings.TrimSpace(rest[:tabIdx])
			disasm = strings.TrimSpace(rest[tabIdx+1:])
		} else {
			rawHex = strings.TrimSpace(rest)
		}

		b := parseHexByteSlice(rawHex)
		if len(b) == 0 {
			continue
		}

		// Continuation line for >8-byte instruction if no disasm text
		if disasm == "" && len(insts) > 0 {
			prev := &insts[len(insts)-1]
			if prev.VA+uint32(len(prev.Bytes)) == va {
				prev.Bytes = append(prev.Bytes, b...)
				prev.RawHex = prev.RawHex + " " + rawHex
				// Re-scan 32-bit relocations on extended bytes if needed
				continue
			}
		}

		inst := Inst{
			VA:     va,
			Bytes:  b,
			RawHex: rawHex,
			Disasm: disasm,
		}

		if len(b) == 1 && b[0] == 0xCC {
			inst.IsInt3 = true
		} else if (len(b) == 1 && b[0] == 0x90) || strings.HasPrefix(disasm, "nop") || strings.HasPrefix(disasm, "lea\tesp, [esp]") || strings.HasPrefix(disasm, "lea\tecx, [ecx]") || strings.HasPrefix(disasm, "lea\tebx, [ebx]") {
			inst.IsNop = true
		}

		// Detect ret / ret imm16
		if b[0] == 0xC3 || b[0] == 0xC2 {
			inst.IsRet = true
		}

		// Detect direct call rel32 (E8 xx xx xx xx)
		if len(b) == 5 && b[0] == 0xE8 {
			rel := int32(binary.LittleEndian.Uint32(b[1:5]))
			target := uint32(int64(va) + 5 + int64(rel))
			if target >= textStart && target < textEnd {
				inst.CallTarget = target
				knownStarts[target] = true
			}
			inst.RelocVAs = append(inst.RelocVAs, va+1)
		}

		// Detect direct jmp rel32 (E9 xx xx xx xx) or jmp rel8 (EB xx)
		if len(b) == 5 && b[0] == 0xE9 {
			inst.IsUncondJmp = true
			rel := int32(binary.LittleEndian.Uint32(b[1:5]))
			target := uint32(int64(va) + 5 + int64(rel))
			if target >= textStart && target < textEnd {
				inst.BranchTarget = target
			}
			inst.RelocVAs = append(inst.RelocVAs, va+1)
		} else if len(b) == 2 && b[0] == 0xEB {
			inst.IsUncondJmp = true
			rel := int8(b[1])
			target := uint32(int64(va) + 2 + int64(rel))
			if target >= textStart && target < textEnd {
				inst.BranchTarget = target
			}
		}

		// Detect conditional jumps: 70..7F (rel8) and 0F 80..8F (rel32)
		if len(b) == 2 && b[0] >= 0x70 && b[0] <= 0x7F {
			rel := int8(b[1])
			target := uint32(int64(va) + 2 + int64(rel))
			if target >= textStart && target < textEnd {
				inst.BranchTarget = target
			}
		} else if len(b) == 6 && b[0] == 0x0F && b[1] >= 0x80 && b[1] <= 0x8F {
			rel := int32(binary.LittleEndian.Uint32(b[2:6]))
			target := uint32(int64(va) + 6 + int64(rel))
			if target >= textStart && target < textEnd {
				inst.BranchTarget = target
			}
		}

		// Detect indirect jump via IAT: FF 25 xx xx xx xx
		if len(b) == 6 && b[0] == 0xFF && b[1] == 0x25 {
			inst.IsUncondJmp = true
			targetMem := binary.LittleEndian.Uint32(b[2:6])
			if _, isIAT := iatSymbols[targetMem]; isIAT {
				inst.JmpIATTarget = targetMem
				inst.IATRef = targetMem
			}
			inst.RelocVAs = append(inst.RelocVAs, va+2)
		} else if len(b) == 6 && b[0] == 0xFF && b[1] == 0x15 {
			// Indirect call via IAT: FF 15 xx xx xx xx
			targetMem := binary.LittleEndian.Uint32(b[2:6])
			if _, isIAT := iatSymbols[targetMem]; isIAT {
				inst.IATRef = targetMem
			}
			inst.RelocVAs = append(inst.RelocVAs, va+2)
		} else if len(b) >= 5 && len(inst.RelocVAs) == 0 {
			// Scan last 4 bytes of instruction for absolute VAs in image range [0x00401000, 0x00BDC000)
			off := len(b) - 4
			cand := binary.LittleEndian.Uint32(b[off : off+4])
			if cand >= textStart && cand < imageEnd {
				inst.RelocVAs = append(inst.RelocVAs, va+uint32(off))
				if _, isIAT := iatSymbols[cand]; isIAT {
					inst.IATRef = cand
				}
			}
		}

		vaToInstIdx[va] = len(insts)
		insts = append(insts, inst)
	}
	if err := cmd.Wait(); err != nil {
		fmt.Fprintf(os.Stderr, "llvm-objdump wait error: %v\n", err)
		os.Exit(1)
	}
	fmt.Printf("Parsed %d instructions in .text\n", len(insts))

	// Step 2: Partition instructions into functions
	type FuncRange struct {
		StartIdx int
		EndIdx   int // inclusive index of last non-padding instruction
	}
	var funcs []FuncRange

	n := len(insts)
	i := 0
	for i < n {
		// Skip inter-function int3 padding
		for i < n && insts[i].IsInt3 {
			i++
		}
		if i >= n {
			break
		}

		startIdx := i
		startVA := insts[startIdx].VA

		// Special case: 6-byte import thunk (FF 25 <IAT_VA>)
		if insts[startIdx].JmpIATTarget != 0 {
			funcs = append(funcs, FuncRange{StartIdx: startIdx, EndIdx: startIdx})
			i = startIdx + 1
			continue
		}

		maxBranchTarget := startVA
		j := startIdx
		for j < n {
			cur := &insts[j]
			if j > startIdx {
				prev := &insts[j-1]
				// If previous instruction was a tail-call jmp to an IAT import, that ended the function
				if prev.JmpIATTarget != 0 {
					break
				}
				// If we hit a known function start (from call target or vtable)
				if knownStarts[cur.VA] {
					if cur.JmpIATTarget != 0 || prev.IsInt3 || prev.IsRet || prev.IsUncondJmp || (cur.VA%16 == 0 && cur.VA >= maxBranchTarget) {
						break
					}
				}
				// If preceded by one or more int3 padding bytes and we reached a non-int3 instruction
				if !cur.IsInt3 && prev.IsInt3 && (cur.VA%16 == 0 || cur.VA >= maxBranchTarget) {
					break
				}
				// If at a 16-byte boundary immediately after a ret (with 0 int3 padding bytes) and no pending forward branches
				if !cur.IsInt3 && cur.VA%16 == 0 && prev.IsRet && cur.VA > maxBranchTarget {
					break
				}
			}

			// Update maxBranchTarget for intra-function forward branches (within reasonable 32KB bound)
			if cur.BranchTarget > cur.VA && cur.BranchTarget-startVA < 0x8000 && !knownStarts[cur.BranchTarget] {
				if cur.BranchTarget > maxBranchTarget {
					maxBranchTarget = cur.BranchTarget
				}
			}
			j++
		}

		// Trim trailing int3 (0xCC) and alignment nop instructions after ret/jmp
		endIdx := j - 1
		for endIdx > startIdx && insts[endIdx].IsInt3 {
			endIdx--
		}
		for endIdx > startIdx && insts[endIdx].IsNop && (insts[endIdx-1].IsRet || insts[endIdx-1].IsUncondJmp) {
			endIdx--
		}

		funcs = append(funcs, FuncRange{StartIdx: startIdx, EndIdx: endIdx})
		i = j
	}

	fmt.Printf("Identified %d functions in .text\n", len(funcs))

	// Step 3: Build symbol table for all identified functions
	funcSymbol := make(map[uint32]string, len(funcs))
	for _, fr := range funcs {
		first := &insts[fr.StartIdx]
		va := first.VA
		if va == img.EntryPoint {
			funcSymbol[va] = "WinMainCRTStartup"
		} else if first.JmpIATTarget != 0 {
			sym := iatSymbols[first.JmpIATTarget]
			symClean := strings.NewReplacer(".dll!", "_", ".DLL!", "_", "!", "_").Replace(sym)
			funcSymbol[va] = "thunk_" + symClean
		} else if vSym, ok := vtableSymbols[va]; ok {
			funcSymbol[va] = vSym
		} else {
			funcSymbol[va] = fmt.Sprintf("sub_%08X", va)
		}
	}

	// Step 4: Build UnitEntry list and cache per-function disassembly in .local/cache/funcs/
	cacheDir := filepath.Join(".local", "cache", "funcs")
	_ = os.RemoveAll(cacheDir)
	if err := os.MkdirAll(cacheDir, 0755); err != nil {
		fmt.Fprintf(os.Stderr, "Error creating %s: %v\n", cacheDir, err)
		os.Exit(1)
	}

	units := make([]UnitEntry, len(funcs))
	leafCount := 0
	thunkCount := 0

	// Use worker pool to write .local/cache/funcs/<address>.txt concurrently
	type writeJob struct {
		idx int
		fr  FuncRange
	}
	jobs := make(chan writeJob, 256)
	var wg sync.WaitGroup
	var mu sync.Mutex

	numWorkers := 16
	for w := 0; w < numWorkers; w++ {
		wg.Add(1)
		go func() {
			defer wg.Done()
			for job := range jobs {
				fr := job.fr
				first := &insts[fr.StartIdx]
				last := &insts[fr.EndIdx]
				startVA := first.VA
				endVA := last.VA + uint32(len(last.Bytes))
				size := endVA - startVA

				startOff := startVA - textStart
				endOff := endVA - textStart
				fnBytes := textSec.Data[startOff:endOff]
				sum := sha256.Sum256(fnBytes)
				hashHex := hex.EncodeToString(sum[:])

				calleeSet := make(map[uint32]bool)
				var relocs []string
				isThunk := first.JmpIATTarget != 0 || (fr.StartIdx == fr.EndIdx && first.IsUncondJmp)

				for k := fr.StartIdx; k <= fr.EndIdx; k++ {
					ins := &insts[k]
					if ins.CallTarget != 0 {
						calleeSet[ins.CallTarget] = true
					}
					for _, rva := range ins.RelocVAs {
						relocs = append(relocs, fmt.Sprintf("0x%08X", rva))
					}
				}

				var calleeVAs []uint32
				for c := range calleeSet {
					calleeVAs = append(calleeVAs, c)
				}
				sort.Slice(calleeVAs, func(a, b int) bool { return calleeVAs[a] < calleeVAs[b] })

				calleesHex := make([]string, 0, len(calleeVAs))
				for _, c := range calleeVAs {
					calleesHex = append(calleesHex, fmt.Sprintf("0x%08X", c))
				}
				if relocs == nil {
					relocs = []string{}
				}

				isLeaf := len(calleesHex) == 0 && !isThunk
				sym := funcSymbol[startVA]
				vaHex := fmt.Sprintf("0x%08X", startVA)

				unit := UnitEntry{
					VA:          vaHex,
					Size:        size,
					SHA256:      hashHex,
					Symbol:      sym,
					Callees:     calleesHex,
					NumCallees:  len(calleesHex),
					IsLeaf:      isLeaf,
					IsThunk:     isThunk,
					Relocations: relocs,
					Status:      "todo",
				}
				units[job.idx] = unit

				mu.Lock()
				if isLeaf {
					leafCount++
				}
				if isThunk {
					thunkCount++
				}
				mu.Unlock()

				// Format .local/cache/funcs/<vaHex>.txt
				var sb strings.Builder
				sb.WriteString(fmt.Sprintf("// Function: %s (%s - 0x%08X)\n", sym, vaHex, endVA))
				sb.WriteString(fmt.Sprintf("// Size: %d bytes | SHA-256: %s\n", size, hashHex))
				sb.WriteString(fmt.Sprintf("// IsLeaf: %v | IsThunk: %v | Callees (%d): %s\n",
					isLeaf, isThunk, len(calleesHex), strings.Join(calleesHex, ", ")))
				if len(relocs) > 0 {
					sb.WriteString(fmt.Sprintf("// Relocations (%d): %s\n", len(relocs), strings.Join(relocs, ", ")))
				}
				sb.WriteString("\n")

				for k := fr.StartIdx; k <= fr.EndIdx; k++ {
					ins := &insts[k]
					comment := ""
					if ins.CallTarget != 0 {
						if targetSym, ok := funcSymbol[ins.CallTarget]; ok {
							comment = " ; " + targetSym
						}
					} else if ins.IATRef != 0 {
						if iatSym, ok := iatSymbols[ins.IATRef]; ok {
							comment = " ; " + iatSym
						}
					}
					sb.WriteString(fmt.Sprintf("  %08X: %-24s\t%s%s\n", ins.VA, ins.RawHex, ins.Disasm, comment))
				}

				outPath := filepath.Join(cacheDir, vaHex+".txt")
				_ = os.WriteFile(outPath, []byte(sb.String()), 0644)
			}
		}()
	}

	for idx, fr := range funcs {
		jobs <- writeJob{idx: idx, fr: fr}
	}
	close(jobs)
	wg.Wait()

	// Step 5: Write the per-function unit ledger (build/units/)
	outJSON, err := json.MarshalIndent(units, "", "  ")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error marshaling unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	if err := unitstore.WriteAll(outJSON); err != nil {
		fmt.Fprintf(os.Stderr, "Error writing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	fmt.Printf("Wrote build/units/ (%d functions: %d leaf functions, %d thunks)\n", len(units), leafCount, thunkCount)
	fmt.Printf("Cached %d function disassembly files in %s/\n", len(units), cacheDir)

	if *runGhidra {
		projDir := filepath.Join(".local", "ghidra_proj")
		if err := os.MkdirAll(projDir, 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating %s: %v\n", projDir, err)
			os.Exit(1)
		}
		fmt.Println("Running /usr/bin/ghidra-analyzeHeadless with tools/ghidra/ExportFunctions.java...")
		gCmd := exec.Command("/usr/bin/ghidra-analyzeHeadless",
			projDir, "endorphin",
			"-import", ".local/bin/endorphin.exe",
			"-overwrite",
			"-scriptPath", "tools/ghidra",
			"-postScript", "ExportFunctions.java",
		)
		gCmd.Stdout = os.Stdout
		gCmd.Stderr = os.Stderr
		if err := gCmd.Run(); err != nil {
			fmt.Fprintf(os.Stderr, "Ghidra headless error: %v\n", err)
			os.Exit(1)
		}
	}
}
