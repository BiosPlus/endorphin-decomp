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
	"regexp"
	"runtime"
	"sort"
	"strconv"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

type ObjFunc struct {
	Name   string
	Bytes  []byte
	Relocs []uint32 // byte offsets relative to start of function where 32-bit relocations apply
}

var vaCommentRe = regexp.MustCompile(`^// \[(0x[0-9A-Fa-f]{8})\]`)

func discoverCppFiles(onlyModified bool, args []string) ([]string, error) {
	if len(args) > 0 {
		return args, nil
	}
	if onlyModified {
		cmd := exec.Command("git", "diff", "--name-only", "HEAD~1", "HEAD", "--", "src/")
		if out, err := cmd.Output(); err == nil {
			var modified []string
			for _, line := range strings.Split(strings.TrimSpace(string(out)), "\n") {
				line = strings.TrimSpace(line)
				if strings.HasSuffix(line, ".cpp") {
					if _, err := os.Stat(line); err == nil {
						modified = append(modified, line)
					}
				}
			}
			if len(modified) > 0 {
				return modified, nil
			}
		}
	}

	var files []string
	err := filepath.Walk("src", func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if !info.IsDir() && strings.HasSuffix(path, ".cpp") {
			files = append(files, filepath.ToSlash(path))
		}
		return nil
	})
	return files, err
}

func extractUnitVAsFromCpp(path string) ([]string, error) {
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var vas []string
	scanner := bufio.NewScanner(f)
	for scanner.Scan() {
		line := strings.TrimSpace(scanner.Text())
		if m := vaCommentRe.FindStringSubmatch(line); len(m) == 2 {
			vas = append(vas, "0x"+strings.ToUpper(m[1][2:]))
		}
	}
	return vas, scanner.Err()
}

func compileAndExtractObjFunctions(cppPath string) (map[string]ObjFunc, error) {
	tmpDir, err := os.MkdirTemp("", "endorphin_obj_*")
	if err != nil {
		return nil, err
	}
	defer os.RemoveAll(tmpDir)

	objPath := filepath.Join(tmpDir, "unit.obj")
	clExe := decomp.FindMSVCClExe()
	cmd, err := decomp.DirectWineClArgs(clExe, []string{
		"/c", "/O2", "/Ob2", "/Oy", "/Gy", "/EHsc", "/GR", "/Gd", "/W0",
		"/Iinclude",
		"/Fo" + objPath,
		cppPath,
	})
	if err != nil {
		return nil, err
	}
	out, err := cmd.CombinedOutput()
	if err != nil {
		return nil, fmt.Errorf("MSVC8 compile failed on %s: %v\n%s", cppPath, err, string(out))
	}

	rawObj, err := os.ReadFile(objPath)
	if err != nil {
		return nil, err
	}

	coff, err := pe.NewFile(bytes.NewReader(rawObj))
	if err != nil {
		return nil, err
	}
	defer coff.Close()

	// Group symbols by section to know each symbol's end offset within the section
	type secSym struct {
		name  string
		value uint32
	}
	symsBySec := make(map[int16][]secSym)
	for _, sym := range coff.Symbols {
		if sym.SectionNumber <= 0 || int(sym.SectionNumber) > len(coff.Sections) {
			continue
		}
		// Skip section-name symbols (StorageClass == 3 and Value == 0 and Name starts with .text)
		if strings.HasPrefix(sym.Name, ".") {
			continue
		}
		symsBySec[sym.SectionNumber] = append(symsBySec[sym.SectionNumber], secSym{
			name:  sym.Name,
			value: sym.Value,
		})
	}

	fnMap := make(map[string]ObjFunc)
	for secNum, syms := range symsBySec {
		sec := coff.Sections[secNum-1]
		if !strings.HasPrefix(sec.Name, ".text") {
			continue
		}
		data, err := sec.Data()
		if err != nil {
			continue
		}
		sort.Slice(syms, func(i, j int) bool { return syms[i].value < syms[j].value })
		for idx, s := range syms {
			if s.value >= uint32(len(data)) {
				continue
			}
			endOff := uint32(len(data))
			if idx+1 < len(syms) && syms[idx+1].value <= endOff {
				endOff = syms[idx+1].value
			}
			fnBytes := append([]byte(nil), data[s.value:endOff]...)
			var relocs []uint32
			if sec.PointerToRelocations > 0 && sec.NumberOfRelocations > 0 {
				relOff := int(sec.PointerToRelocations)
				for r := 0; r < int(sec.NumberOfRelocations); r++ {
					pos := relOff + r*10
					if pos+10 <= len(rawObj) {
						vaddr := binary.LittleEndian.Uint32(rawObj[pos : pos+4])
						if vaddr >= s.value && vaddr+4 <= endOff {
							relocs = append(relocs, vaddr-s.value)
						}
					}
				}
			}
			fnMap[s.name] = ObjFunc{
				Name:   s.name,
				Bytes:  fnBytes,
				Relocs: relocs,
			}
		}
	}
	return fnMap, nil
}

func loadTargetTextSection() ([]byte, uint32, error) {
	exePath := filepath.Join(".local", "bin", "endorphin.exe")
	rawExe, err := os.ReadFile(exePath)
	if err != nil {
		return nil, 0, err
	}
	if cfgBytes, err := os.ReadFile("build/target.json"); err == nil {
		var cfg decomp.TargetConfig
		if json.Unmarshal(cfgBytes, &cfg) == nil && cfg.SHA256 != "" {
			sum := sha256.Sum256(rawExe)
			actualHex := hex.EncodeToString(sum[:])
			if !strings.EqualFold(actualHex, cfg.SHA256) {
				return nil, 0, fmt.Errorf("endorphin.exe SHA-256 mismatch: got %s, expected %s", actualHex, cfg.SHA256)
			}
		}
	}
	f, err := pe.NewFile(bytes.NewReader(rawExe))
	if err != nil {
		return nil, 0, err
	}
	defer f.Close()
	var imageBase uint32 = 0x00400000
	if opt, ok := f.OptionalHeader.(*pe.OptionalHeader32); ok {
		imageBase = opt.ImageBase
	}
	for _, s := range f.Sections {
		if s.Name == ".text" {
			data, err := s.Data()
			if err != nil {
				return nil, 0, err
			}
			return data, imageBase + s.VirtualAddress, nil
		}
	}
	return nil, 0, fmt.Errorf(".text section not found in %s", exePath)
}

func loadCachedFuncBytes(vaHex string) ([]byte, error) {
	cacheFile := filepath.Join(".local", "cache", "funcs", vaHex+".txt")
	rawCache, err := os.ReadFile(cacheFile)
	if err != nil {
		return nil, err
	}
	var rawBytes []byte
	for _, line := range strings.Split(string(rawCache), "\n") {
		if !strings.HasPrefix(line, "  ") {
			continue
		}
		colonIdx := strings.IndexByte(line, ':')
		tabIdx := strings.IndexByte(line, '\t')
		if colonIdx != -1 && tabIdx > colonIdx {
			for _, hx := range strings.Fields(line[colonIdx+1 : tabIdx]) {
				if len(hx) == 2 {
					if b, err := hex.DecodeString(hx); err == nil {
						rawBytes = append(rawBytes, b...)
					}
				}
			}
		}
	}
	return rawBytes, nil
}

func findCompiledFuncForVA(objMap map[string]ObjFunc, vaHex string) (ObjFunc, bool) {
	shortHex := strings.TrimPrefix(strings.ToUpper(vaHex), "0X")
	tag := "fn_" + shortHex
	for symName, fn := range objMap {
		if strings.Contains(strings.ToUpper(symName), strings.ToUpper(tag)) {
			return fn, true
		}
	}
	return ObjFunc{}, false
}

func compareMaskedBytes(compiled ObjFunc, targetBytes []byte, unit decomp.UnitEntry, startVA uint32) (bool, string) {
	// Trim trailing alignment padding (0xCC int3 or 0x90 nop) if compiled section was padded by COFF alignment
	compBytes := append([]byte(nil), compiled.Bytes...)
	for len(compBytes) > len(targetBytes) {
		last := compBytes[len(compBytes)-1]
		if last == 0xCC || last == 0x90 {
			compBytes = compBytes[:len(compBytes)-1]
		} else {
			break
		}
	}

	if len(compBytes) != len(targetBytes) {
		return false, fmt.Sprintf("size mismatch: compiled=%d bytes (%x), target=%d bytes (%x)",
			len(compBytes), compBytes, len(targetBytes), targetBytes)
	}

	tgtMasked := append([]byte(nil), targetBytes...)

	// Mask 32-bit relocations from COFF .obj relocations
	for _, off := range compiled.Relocs {
		if int(off)+4 <= len(compBytes) {
			binary.LittleEndian.PutUint32(compBytes[off:off+4], 0)
			binary.LittleEndian.PutUint32(tgtMasked[off:off+4], 0)
		}
	}

	// Mask 32-bit relocations recorded on the target unit in the unit ledger (build/units/)
	for _, rHex := range unit.Relocations {
		if rVA64, err := strconv.ParseUint(strings.TrimPrefix(rHex, "0x"), 16, 32); err == nil {
			rVA := uint32(rVA64)
			if rVA >= startVA && int(rVA-startVA)+4 <= len(compBytes) {
				off := rVA - startVA
				binary.LittleEndian.PutUint32(compBytes[off:off+4], 0)
				binary.LittleEndian.PutUint32(tgtMasked[off:off+4], 0)
			}
		}
	}

	if !bytes.Equal(compBytes, tgtMasked) {
		return false, fmt.Sprintf("byte mismatch:\n  compiled (masked): %x\n  target   (masked): %x", compBytes, tgtMasked)
	}
	return true, ""
}

func main() {
	allFlag := flag.Bool("all", false, "Compile and verify all .cpp translation units in src/")
	modifiedOnly := flag.Bool("modified", false, "Only check .cpp files modified in the latest commit")
	requireCompiler := flag.Bool("require-compiler", false, "Fail if .local/msvc8/bin/cl.exe is not installed")
	flag.Parse()
	if *allFlag {
		*modifiedOnly = false
	}

	unitsBytes, err := unitstore.ReadAll()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	var units []decomp.UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}

	unitIdxByVA := make(map[string]int, len(units))
	for idx, u := range units {
		unitIdxByVA["0x"+strings.ToUpper(strings.TrimPrefix(u.VA, "0x"))] = idx
	}

	cppFiles, err := discoverCppFiles(*modifiedOnly, flag.Args())
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error discovering .cpp files: %v\n", err)
		os.Exit(1)
	}

	hasCompiler := decomp.FindMSVCClExe() != ""
	if *requireCompiler && !hasCompiler {
		fmt.Fprintf(os.Stderr, "Error: MSVC8 compiler (.local/msvc8/bin/cl.exe) not found\n")
		os.Exit(1)
	}

	textData, textBaseVA, err := loadTargetTextSection()
	hasTargetExe := err == nil

	totalTUs := len(cppFiles)
	totalChecked := 0
	totalMatched := 0
	var totalBytesMatched uint64
	unitsUpdated := false
	var failures []string

	type tuCompileResult struct {
		vas    []string
		objMap map[string]ObjFunc
		err    error
	}
	results := make([]tuCompileResult, len(cppFiles))
	workers := runtime.NumCPU()
	if workers > 8 {
		workers = 8
	}
	if workers < 1 {
		workers = 1
	}
	sem := make(chan struct{}, workers)
	var wg sync.WaitGroup
	for i, cppPath := range cppFiles {
		wg.Add(1)
		go func(idx int, path string) {
			defer wg.Done()
			sem <- struct{}{}
			defer func() { <-sem }()

			vas, err := extractUnitVAsFromCpp(path)
			if err != nil {
				results[idx] = tuCompileResult{err: fmt.Errorf("%s: read error: %v", path, err)}
				return
			}
			var objMap map[string]ObjFunc
			if hasCompiler {
				objMap, err = compileAndExtractObjFunctions(path)
				if err != nil {
					results[idx] = tuCompileResult{vas: vas, err: err}
					return
				}
			}
			results[idx] = tuCompileResult{vas: vas, objMap: objMap}
		}(i, cppPath)
	}
	wg.Wait()

	for i, cppPath := range cppFiles {
		res := results[i]
		if res.err != nil {
			failures = append(failures, res.err.Error())
			continue
		}
		vas := res.vas
		objMap := res.objMap

		for _, va := range vas {
			totalChecked++
			uIdx, ok := unitIdxByVA[va]
			if !ok {
				failures = append(failures, fmt.Sprintf("%s: unknown unit VA %s", cppPath, va))
				continue
			}
			u := &units[uIdx]
			if len(u.SHA256) != 64 || u.Size == 0 {
				failures = append(failures, fmt.Sprintf("%s: unit %s has invalid metadata in the unit ledger (build/units/)", cppPath, va))
				continue
			}

			va64, _ := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
			startVA := uint32(va64)

			var targetBytes []byte
			if hasTargetExe && startVA >= textBaseVA && int(startVA-textBaseVA+u.Size) <= len(textData) {
				off := startVA - textBaseVA
				targetBytes = textData[off : off+u.Size]
			} else if cached, err := loadCachedFuncBytes(u.VA); err == nil {
				targetBytes = cached
			}

			if len(targetBytes) > 0 {
				sum := sha256.Sum256(targetBytes)
				actualHex := hex.EncodeToString(sum[:])
				if !strings.EqualFold(actualHex, u.SHA256) {
					failures = append(failures, fmt.Sprintf("%s [%s]: target SHA-256 mismatch (got %s, expected %s)", cppPath, va, actualHex, u.SHA256))
					continue
				}
			}

			if hasCompiler {
				compFn, ok := findCompiledFuncForVA(objMap, u.VA)
				if !ok {
					failures = append(failures, fmt.Sprintf("%s [%s]: compiled symbol fn_%s not found in .obj", cppPath, va, strings.TrimPrefix(u.VA, "0x")))
					continue
				}
				if len(targetBytes) > 0 {
					okMatch, reason := compareMaskedBytes(compFn, targetBytes, *u, startVA)
					if !okMatch {
						failures = append(failures, fmt.Sprintf("%s [%s %s]: %s", cppPath, va, u.Symbol, reason))
						continue
					}
				}
			}

			if !u.IsThunk && u.Status != "out_of_scope" && u.Status != "matched" {
				u.Status = "matched"
				unitsUpdated = true
			}
			totalMatched++
			totalBytesMatched += uint64(u.Size)
		}
	}

	if unitsUpdated {
		outJSON, err := json.MarshalIndent(units, "", "  ")
		if err == nil {
			_ = unitstore.WriteAll(outJSON)
		}
	}

	fmt.Printf("Verified %d / %d function units (%d bytes) across %d translation units (MSVC8 compiler active: %v, target exe loaded: %v)\n",
		totalMatched, totalChecked, totalBytesMatched, totalTUs, hasCompiler, hasTargetExe)

	if len(failures) > 0 {
		// Per-file summary first so a single badly broken file can't hide others behind the detail cap.
		perFile := make(map[string]int)
		for _, f := range failures {
			if i := strings.Index(f, " ["); i > 0 {
				perFile[f[:i]]++
			}
		}
		files := make([]string, 0, len(perFile))
		for f := range perFile {
			files = append(files, f)
		}
		sort.Strings(files)
		fmt.Fprintf(os.Stderr, "%d failure(s) in %d file(s):\n", len(failures), len(files))
		for _, f := range files {
			fmt.Fprintf(os.Stderr, "  %4d  %s\n", perFile[f], f)
		}
		for idx, f := range failures {
			if idx >= 40 {
				fmt.Fprintf(os.Stderr, "... and %d more failures\n", len(failures)-40)
				break
			}
			fmt.Fprintf(os.Stderr, "FAIL: %s\n", f)
		}
		os.Exit(1)
	}
}
