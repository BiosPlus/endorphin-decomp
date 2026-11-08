package main

import (
	"bufio"
	"bytes"
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
	SkipReason  string   `json:"skip_reason,omitempty"`
}

type BaseClassInfo struct {
	DemangledName string `json:"demangled_name"`
	Offset        int    `json:"offset"`
}

type ClassEntry struct {
	MangledName        string          `json:"mangled_name"`
	DemangledName      string          `json:"demangled_name"`
	Namespace          string          `json:"namespace"`
	ShortName          string          `json:"short_name"`
	HeaderPath         string          `json:"header_path"`
	IsTemplate         bool            `json:"is_template"`
	IsMFCOrStd         bool            `json:"is_mfc_or_std"`
	VTableVA           string          `json:"vtable_va"`
	BaseClasses        []BaseClassInfo `json:"base_classes"`
	VirtualMethods     []string        `json:"virtual_methods"`
	VirtualMethodCount int             `json:"virtual_method_count"`
}

type ObjFunc struct {
	SymName string
	Bytes   []byte
	Relocs  []uint32
}

type AsmInst struct {
	Offset uint32
	Bytes  []byte
	Text   string
}

func normalizeVA(addr string) (string, uint32, error) {
	clean := strings.TrimSpace(addr)
	clean = strings.TrimPrefix(clean, "0x")
	clean = strings.TrimPrefix(clean, "0X")
	clean = strings.TrimPrefix(clean, "fn_")
	clean = strings.TrimPrefix(clean, "sub_")
	v, err := strconv.ParseUint(clean, 16, 32)
	if err != nil {
		return "", 0, fmt.Errorf("invalid hex address %q: %w", addr, err)
	}
	return fmt.Sprintf("0x%08X", uint32(v)), uint32(v), nil
}

func isOutOfScope(u UnitEntry, mfcClasses map[string]bool) bool {
	if u.Status == "out_of_scope" || u.IsThunk {
		return true
	}
	va64, err := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
	if err == nil {
		va := uint32(va64)
		if (va >= 0x006A5C5C && va <= 0x006A7943) || (va >= 0x008728F0 && va <= 0x009221CA) {
			return true
		}
	}
	if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
		clsName := u.Symbol[:idx]
		if mfcClasses[clsName] {
			return true
		}
	}
	return false
}

func isCompletedOrOutOfScope(u UnitEntry, mfcClasses map[string]bool) bool {
	if isOutOfScope(u, mfcClasses) {
		return true
	}
	return u.Status == "matched" || u.Status == "decompiled" || u.Status == "solved"
}

func isValidCodeUnit(va string) bool {
	cachePath := filepath.Join(".local", "cache", "funcs", va+".txt")
	b, err := os.ReadFile(cachePath)
	if err != nil {
		return true
	}
	lines := strings.Split(strings.TrimSpace(string(b)), "\n")
	lastInst := ""
	for _, l := range lines {
		l = strings.TrimSpace(l)
		if l == "" || strings.HasPrefix(l, "//") {
			continue
		}
		if strings.Contains(l, "<unknown>") || strings.Contains(l, "\tretf") || strings.Contains(l, "\tinto") || strings.Contains(l, "\tin\t") || strings.Contains(l, "\tout\t") {
			return false
		}
		lastInst = l
	}
	if lastInst == "" {
		return false
	}
	return strings.Contains(lastInst, "\tret") || strings.Contains(lastInst, "\tjmp")
}

func sanitizeFilename(s string) string {
	r := strings.NewReplacer("::", "_", "<", "_", ">", "_", " ", "_", "*", "ptr", "&", "ref", ",", "_", "/", "_")
	return r.Replace(s)
}

func findCppFileForVA(vaHex string) string {
	shortHex := strings.TrimPrefix(vaHex, "0x")
	marker1 := fmt.Sprintf("[%s]", vaHex)
	marker2 := fmt.Sprintf("fn_%s", shortHex)

	var found string
	_ = filepath.Walk("src", func(path string, info os.FileInfo, err error) error {
		if err != nil || found != "" || info.IsDir() || !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		s := string(b)
		if strings.Contains(s, marker1) || strings.Contains(s, marker2) {
			found = filepath.ToSlash(path)
		}
		return nil
	})
	return found
}

func defaultCppFileForUnit(u UnitEntry, cls *ClassEntry) string {
	if cls != nil {
		if cls.IsTemplate {
			base := sanitizeFilename(cls.ShortName)
			if idx := strings.IndexByte(cls.ShortName, '<'); idx != -1 {
				base = sanitizeFilename(cls.ShortName[:idx])
			}
			return filepath.ToSlash(filepath.Join("src", "templates", base+".cpp"))
		}
		if cls.Namespace != "" {
			nsPath := strings.ReplaceAll(cls.Namespace, "::", "/")
			return filepath.ToSlash(filepath.Join("src", nsPath, sanitizeFilename(cls.ShortName)+".cpp"))
		}
		return filepath.ToSlash(filepath.Join("src", "classes", sanitizeFilename(cls.ShortName)+".cpp"))
	}
	va64, _ := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
	bucket := (uint32(va64) >> 16) << 16
	return fmt.Sprintf("src/leaf/decompiled_%06X.cpp", bucket)
}

func loadUnitsAndClasses() ([]UnitEntry, map[string]int, []ClassEntry, map[string]*ClassEntry, map[string]bool) {
	unitsBytes, err := os.ReadFile("build/units.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/units.json: %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/units.json: %v\n", err)
		os.Exit(1)
	}

	unitIdxByVA := make(map[string]int, len(units))
	for i, u := range units {
		unitIdxByVA["0x"+strings.ToUpper(strings.TrimPrefix(u.VA, "0x"))] = i
	}

	classesBytes, err := os.ReadFile("build/classes.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/classes.json: %v\n", err)
		os.Exit(1)
	}
	var classes []ClassEntry
	if err := json.Unmarshal(classesBytes, &classes); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/classes.json: %v\n", err)
		os.Exit(1)
	}

	classByName := make(map[string]*ClassEntry, len(classes))
	mfcClasses := make(map[string]bool)
	for i := range classes {
		c := &classes[i]
		classByName[c.DemangledName] = c
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
		}
	}

	return units, unitIdxByVA, classes, classByName, mfcClasses
}

func saveUnits(units []UnitEntry) error {
	out, err := json.MarshalIndent(units, "", "  ")
	if err != nil {
		return err
	}
	return os.WriteFile("build/units.json", append(out, '\n'), 0644)
}

func cmdNext(args []string) {
	fs := flag.NewFlagSet("work next", flag.ExitOnError)
	nFlag := fs.Int("n", 1, "Number of next ready leaf functions to display")
	_ = fs.Parse(args)

	units, unitIdxByVA, _, classByName, mfcClasses := loadUnitsAndClasses()

	type candidate struct {
		unit           UnitEntry
		unmatchedCalls int
	}

	var ready []UnitEntry
	for _, u := range units {
		if isCompletedOrOutOfScope(u, mfcClasses) || u.Status == "deferred" || u.Status == "skipped" {
			continue
		}
		if !isValidCodeUnit(u.VA) {
			continue
		}
		allCalleesReady := true
		for _, calleeVA := range u.Callees {
			normVA := "0x" + strings.ToUpper(strings.TrimPrefix(calleeVA, "0x"))
			if cIdx, ok := unitIdxByVA[normVA]; ok {
				cu := units[cIdx]
				if !isCompletedOrOutOfScope(cu, mfcClasses) {
					allCalleesReady = false
					break
				}
			}
		}
		if allCalleesReady {
			ready = append(ready, u)
		}
	}

	sort.Slice(ready, func(i, j int) bool {
		if ready[i].NumCallees != ready[j].NumCallees {
			return ready[i].NumCallees < ready[j].NumCallees
		}
		if ready[i].Size != ready[j].Size {
			return ready[i].Size < ready[j].Size
		}
		return ready[i].VA < ready[j].VA
	})

	limit := *nFlag
	if limit > len(ready) {
		limit = len(ready)
	}
	if limit == 0 {
		fmt.Println("No unmatched ready functions remaining in queue!")
		return
	}

	for i := 0; i < limit; i++ {
		u := ready[i]
		var cls *ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			cls = classByName[u.Symbol[:idx]]
		}

		cppPath := findCppFileForVA(u.VA)
		isNewFile := false
		if cppPath == "" {
			cppPath = defaultCppFileForUnit(u, cls)
			if _, err := os.Stat(cppPath); os.IsNotExist(err) {
				isNewFile = true
				_ = os.MkdirAll(filepath.Dir(cppPath), 0755)
				header := fmt.Sprintf("// Decompiled translation unit: %s\n\n", cppPath)
				_ = os.WriteFile(cppPath, []byte(header), 0644)
			}
		}

		fmt.Println("================================================================================")
		fmt.Printf("WORK ITEM [%d/%d] | %s | %s | %d bytes\n", i+1, limit, u.VA, u.Symbol, u.Size)
		fmt.Println("================================================================================")
		fmt.Printf("Target C++ File : %s", cppPath)
		if isNewFile {
			fmt.Printf(" (created)")
		}
		fmt.Println()
		fmt.Printf("Symbol Convention: extern \"C\" ... fn_%s(...)  (accompanied by comment // [%s])\n",
			strings.TrimPrefix(u.VA, "0x"), u.VA)

		if len(u.Callees) > 0 {
			var calleeDescs []string
			for _, cva := range u.Callees {
				norm := "0x" + strings.ToUpper(strings.TrimPrefix(cva, "0x"))
				if cIdx, ok := unitIdxByVA[norm]; ok {
					cu := units[cIdx]
					calleeDescs = append(calleeDescs, fmt.Sprintf("%s (%s, %s)", cu.VA, cu.Symbol, cu.Status))
				} else {
					calleeDescs = append(calleeDescs, cva)
				}
			}
			fmt.Printf("Callees (%d)     : %s\n", len(u.Callees), strings.Join(calleeDescs, ", "))
		} else {
			fmt.Printf("Callees (0)     : Pure leaf function (no direct calls)\n")
		}

		if len(u.Relocations) > 0 {
			fmt.Printf("Relocations (%d) : %s\n", len(u.Relocations), strings.Join(u.Relocations, ", "))
		}

		if cls != nil {
			fmt.Println("--------------------------------------------------------------------------------")
			fmt.Printf("Class Context   : %s (Header: %s | VTable: %s | %d vfuncs)\n",
				cls.DemangledName, cls.HeaderPath, cls.VTableVA, len(cls.VirtualMethods))
			if len(cls.BaseClasses) > 0 {
				var bases []string
				for _, bc := range cls.BaseClasses {
					bases = append(bases, fmt.Sprintf("%s (+0x%X)", bc.DemangledName, bc.Offset))
				}
				fmt.Printf("Inheritance     : %s\n", strings.Join(bases, " -> "))
			}
			if cls.HeaderPath != "" {
				if hdrBytes, err := os.ReadFile(cls.HeaderPath); err == nil {
					fmt.Println()
					lines := strings.Split(strings.TrimSpace(string(hdrBytes)), "\n")
					if len(lines) > 35 {
						lines = append(lines[:35], "    // ... (truncated) ...", "};")
					}
					for _, l := range lines {
						fmt.Println(l)
					}
				}
			}
		}

		fmt.Println("--------------------------------------------------------------------------------")
		fmt.Printf("Target Disassembly (.local/cache/funcs/%s.txt):\n", u.VA)
		fmt.Println("--------------------------------------------------------------------------------")
		cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
		if b, err := os.ReadFile(cachePath); err == nil {
			fmt.Print(string(b))
		} else {
			fmt.Printf("  (Disassembly cache not found at %s)\n", cachePath)
		}
		fmt.Println("--------------------------------------------------------------------------------")
		fmt.Printf("Next step: Implement fn_%s in %s, then run:\n", strings.TrimPrefix(u.VA, "0x"), cppPath)
		fmt.Printf("  go run ./tools/work check %s\n", u.VA)
		fmt.Printf("If stuck after 15 attempts, defer with:\n")
		fmt.Printf("  go run ./tools/work skip %s \"<reason>\"\n", u.VA)
		fmt.Println("================================================================================")
	}
}

func findMSVCClExe() string {
	candidates := []string{
		filepath.Join(".local", "msvc8", "bin", "cl.exe"),
		filepath.Join(".local", "msvc8", "VC", "bin", "cl.exe"),
	}
	for _, c := range candidates {
		if _, err := os.Stat(c); err == nil {
			return c
		}
	}
	return ""
}

func compileCppToObj(cppPath string) (string, func(), error) {
	tmpDir, err := os.MkdirTemp("", "endorphin_work_*")
	if err != nil {
		return "", func() {}, err
	}
	cleanup := func() { _ = os.RemoveAll(tmpDir) }
	objPath := filepath.Join(tmpDir, "unit.obj")

	clExe := findMSVCClExe()
	if clExe == "" {
		cleanup()
		return "", func() {}, fmt.Errorf(".local/msvc8/bin/cl.exe not found (run go run ./tools/fetch_msvc8 first)")
	}

	var cmd *exec.Cmd
	if runtime.GOOS == "windows" {
		absCl, _ := filepath.Abs(clExe)
		absBin := filepath.Dir(absCl)
		absMSVC := filepath.Dir(absBin)
		cmd = exec.Command(absCl,
			"/nologo", "/c", "/O2", "/Ob2", "/Oy", "/Gy", "/EHsc", "/GR", "/Gd", "/W0",
			"/Iinclude",
			"/Fo"+objPath,
			cppPath,
		)
		var env []string
		for _, kv := range os.Environ() {
			k := strings.SplitN(kv, "=", 2)[0]
			switch strings.ToUpper(k) {
			case "PATH", "INCLUDE", "LIB":
				continue
			default:
				env = append(env, kv)
			}
		}
		env = append(env,
			fmt.Sprintf("INCLUDE=%s\\include;%s\\atlmfc\\include;%s\\PlatformSDK\\Include", absMSVC, absMSVC, absMSVC),
			fmt.Sprintf("LIB=%s\\lib;%s\\atlmfc\\lib;%s\\PlatformSDK\\Lib", absMSVC, absMSVC, absMSVC),
			fmt.Sprintf("PATH=%s;%s", absBin, os.Getenv("PATH")),
		)
		cmd.Env = env
	} else {
		cmd = exec.Command("./tools/cl_wine.sh",
			"/nologo", "/c", "/O2", "/Ob2", "/Oy", "/Gy", "/EHsc", "/GR", "/Gd", "/W0",
			"/Iinclude",
			"/Fo"+objPath,
			cppPath,
		)
	}

	out, err := cmd.CombinedOutput()
	if err != nil {
		cleanup()
		return "", func() {}, fmt.Errorf("%s", strings.TrimSpace(string(out)))
	}
	return objPath, cleanup, nil
}

func extractObjFunctions(objPath string) (map[string]ObjFunc, error) {
	rawObj, err := os.ReadFile(objPath)
	if err != nil {
		return nil, err
	}
	coff, err := pe.NewFile(bytes.NewReader(rawObj))
	if err != nil {
		return nil, err
	}
	defer coff.Close()

	type secSym struct {
		name  string
		value uint32
	}
	symsBySec := make(map[int16][]secSym)
	for _, sym := range coff.Symbols {
		if sym.SectionNumber <= 0 || int(sym.SectionNumber) > len(coff.Sections) {
			continue
		}
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
				SymName: s.name,
				Bytes:   fnBytes,
				Relocs:  relocs,
			}
		}
	}
	return fnMap, nil
}

func findCompiledFunc(fnMap map[string]ObjFunc, vaHex string) (ObjFunc, bool) {
	shortHex := strings.ToUpper(strings.TrimPrefix(vaHex, "0x"))
	targetSub := "fn_" + shortHex
	for name, fn := range fnMap {
		if strings.Contains(strings.ToUpper(name), strings.ToUpper(targetSub)) {
			return fn, true
		}
	}
	return ObjFunc{}, false
}

func loadTargetBytesForUnit(u UnitEntry, startVA uint32) ([]byte, error) {
	cfgBytes, err := os.ReadFile("build/target.json")
	if err == nil {
		var cfg TargetConfig
		if json.Unmarshal(cfgBytes, &cfg) == nil {
			exePath := filepath.Join(".local", "bin", cfg.BinaryName)
			if f, err := pe.Open(exePath); err == nil {
				defer f.Close()
				for _, s := range f.Sections {
					if s.Name == ".text" {
						if data, err := s.Data(); err == nil {
							imgBase, _ := strconv.ParseUint(strings.TrimPrefix(cfg.ImageBase, "0x"), 16, 32)
							textBase := uint32(imgBase) + s.VirtualAddress
							if startVA >= textBase && int(startVA-textBase+u.Size) <= len(data) {
								off := startVA - textBase
								return append([]byte(nil), data[off:off+u.Size]...), nil
							}
						}
					}
				}
			}
		}
	}
	// Fallback to .local/cache/funcs/<VA>.txt
	return loadCachedBytes(u.VA)
}

var cacheInstRe = regexp.MustCompile(`^\s*([0-9A-Fa-f]{1,8}):\s+((?:[0-9a-fA-F]{2}\s)+)\s*(.*)$`)

func loadCachedBytes(vaHex string) ([]byte, error) {
	p := filepath.Join(".local", "cache", "funcs", vaHex+".txt")
	insts, err := parseDisasmFile(p, 0)
	if err != nil {
		return nil, err
	}
	var out []byte
	for _, ins := range insts {
		out = append(out, ins.Bytes...)
	}
	return out, nil
}

func parseDisasmFile(path string, baseVA uint32) ([]AsmInst, error) {
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var insts []AsmInst
	var firstVA uint32
	hasFirst := false
	scanner := bufio.NewScanner(f)
	for scanner.Scan() {
		line := scanner.Text()
		m := cacheInstRe.FindStringSubmatch(line)
		if len(m) == 4 {
			v, _ := strconv.ParseUint(m[1], 16, 32)
			va := uint32(v)
			if !hasFirst {
				if baseVA != 0 {
					firstVA = baseVA
				} else {
					firstVA = va
				}
				hasFirst = true
			}
			var raw []byte
			for _, bh := range strings.Fields(m[2]) {
				b, _ := hex.DecodeString(bh)
				raw = append(raw, b...)
			}
			txt := strings.ReplaceAll(strings.TrimSpace(m[3]), "\t", " ")
			if lt := strings.Index(txt, " <"); lt != -1 {
				txt = strings.TrimSpace(txt[:lt])
			}
			insts = append(insts, AsmInst{
				Offset: va - firstVA,
				Bytes:  raw,
				Text:   txt,
			})
		}
	}
	return insts, scanner.Err()
}

func disassembleCompiledObj(objPath, symName string) []AsmInst {
	objdumpBin := "llvm-objdump"
	if _, err := exec.LookPath(objdumpBin); err != nil {
		objdumpBin = "objdump"
	}
	cmd := exec.Command(objdumpBin, "-d", "-M", "intel", objPath)
	out, err := cmd.Output()
	if err != nil {
		return nil
	}
	var insts []AsmInst
	var firstAddr uint32
	hasFirst := false
	inSym := false
	symHeader := "<" + symName + ">:"
	scanner := bufio.NewScanner(bytes.NewReader(out))
	for scanner.Scan() {
		line := scanner.Text()
		if strings.Contains(line, symHeader) {
			inSym = true
			continue
		}
		if inSym {
			if strings.HasSuffix(strings.TrimSpace(line), ">:") {
				break
			}
			m := cacheInstRe.FindStringSubmatch(line)
			if len(m) == 4 {
				v, _ := strconv.ParseUint(m[1], 16, 32)
				addr := uint32(v)
				if !hasFirst {
					firstAddr = addr
					hasFirst = true
				}
				var raw []byte
				for _, bh := range strings.Fields(m[2]) {
					b, _ := hex.DecodeString(bh)
					raw = append(raw, b...)
				}
				txt := strings.ReplaceAll(strings.TrimSpace(m[3]), "\t", " ")
				if lt := strings.Index(txt, " <"); lt != -1 {
					txt = strings.TrimSpace(txt[:lt])
				}
				insts = append(insts, AsmInst{
					Offset: addr - firstAddr,
					Bytes:  raw,
					Text:   txt,
				})
			}
		}
	}
	return insts
}

func maskAndCompare(compFn ObjFunc, targetBytes []byte, u UnitEntry, startVA uint32) (bool, float64, []byte, []byte) {
	compMasked := append([]byte(nil), compFn.Bytes...)
	tgtMasked := append([]byte(nil), targetBytes...)

	// Trim trailing alignment padding (0xCC / 0x90) if compiled section is slightly padded
	if len(compMasked) > len(tgtMasked) {
		allPad := true
		for i := len(tgtMasked); i < len(compMasked); i++ {
			if compMasked[i] != 0xCC && compMasked[i] != 0x90 {
				allPad = false
				break
			}
		}
		if allPad {
			compMasked = compMasked[:len(tgtMasked)]
		}
	}

	relocOffsets := make(map[uint32]bool)
	for _, off := range compFn.Relocs {
		relocOffsets[off] = true
	}
	for _, rHex := range u.Relocations {
		if rv, err := strconv.ParseUint(strings.TrimPrefix(rHex, "0x"), 16, 32); err == nil {
			rVA := uint32(rv)
			if rVA >= startVA && rVA+4 <= startVA+uint32(len(tgtMasked)) {
				relocOffsets[rVA-startVA] = true
			}
		}
	}

	for off := range relocOffsets {
		for k := uint32(0); k < 4; k++ {
			idx := int(off + k)
			if idx < len(compMasked) {
				compMasked[idx] = 0x00
			}
			if idx < len(tgtMasked) {
				tgtMasked[idx] = 0x00
			}
		}
	}

	if len(compMasked) == len(tgtMasked) && bytes.Equal(compMasked, tgtMasked) {
		return true, 100.0, compMasked, tgtMasked
	}

	maxLen := len(tgtMasked)
	if len(compMasked) > maxLen {
		maxLen = len(compMasked)
	}
	if maxLen == 0 {
		return false, 0.0, compMasked, tgtMasked
	}
	minLen := len(tgtMasked)
	if len(compMasked) < minLen {
		minLen = len(compMasked)
	}
	matching := 0
	for i := 0; i < minLen; i++ {
		if compMasked[i] == tgtMasked[i] {
			matching++
		}
	}
	pct := (float64(matching) / float64(maxLen)) * 100.0
	return false, pct, compMasked, tgtMasked
}

func maskInstBytes(inst AsmInst, relocOffsets map[uint32]bool) []byte {
	masked := append([]byte(nil), inst.Bytes...)
	for off := range relocOffsets {
		for k := uint32(0); k < 4; k++ {
			pos := off + k
			if pos >= inst.Offset && pos < inst.Offset+uint32(len(masked)) {
				masked[pos-inst.Offset] = 0x00
			}
		}
	}
	return masked
}

func formatInstColumn(inst *AsmInst) string {
	if inst == nil {
		return "(none)"
	}
	var bStr []string
	for _, b := range inst.Bytes {
		bStr = append(bStr, fmt.Sprintf("%02x", b))
	}
	hexPart := strings.Join(bStr, " ")
	if len(hexPart) > 17 {
		hexPart = hexPart[:17] + ".."
	}
	return fmt.Sprintf("+%02X: %-19s %s", inst.Offset, hexPart, inst.Text)
}

func cmdCheck(args []string) {
	if len(args) < 1 {
		fmt.Fprintln(os.Stderr, "Usage: go run ./tools/work check <address>")
		os.Exit(1)
	}
	vaHex, startVA, err := normalizeVA(args[0])
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}

	units, unitIdxByVA, _, _, _ := loadUnitsAndClasses()
	uIdx, ok := unitIdxByVA[vaHex]
	if !ok {
		fmt.Fprintf(os.Stderr, "Error: unit %s not found in build/units.json\n", vaHex)
		os.Exit(1)
	}
	u := &units[uIdx]

	cppPath := findCppFileForVA(vaHex)
	if cppPath == "" {
		fmt.Fprintf(os.Stderr, "Error: no .cpp file in src/ contains [%s] or fn_%s\n", vaHex, strings.TrimPrefix(vaHex, "0x"))
		os.Exit(1)
	}

	fmt.Printf("Compiling %s for %s (%s, %d bytes)...\n", cppPath, u.VA, u.Symbol, u.Size)
	objPath, cleanup, err := compileCppToObj(cppPath)
	if err != nil {
		fmt.Println("================================================================================")
		fmt.Printf("COMPILE FAILED (%s)\n", cppPath)
		fmt.Println("================================================================================")
		fmt.Println(err.Error())
		os.Exit(1)
	}
	defer cleanup()

	fnMap, err := extractObjFunctions(objPath)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing compiled .obj: %v\n", err)
		os.Exit(1)
	}

	compFn, ok := findCompiledFunc(fnMap, vaHex)
	if !ok {
		fmt.Fprintf(os.Stderr, "Error: compiled symbol fn_%s not found in %s\n", strings.TrimPrefix(vaHex, "0x"), cppPath)
		os.Exit(1)
	}

	targetBytes, err := loadTargetBytesForUnit(*u, startVA)
	if err != nil || len(targetBytes) == 0 {
		fmt.Fprintf(os.Stderr, "Error loading target bytes for %s: %v\n", vaHex, err)
		os.Exit(1)
	}

	exact, pct, compMasked, tgtMasked := maskAndCompare(compFn, targetBytes, *u, startVA)
	if exact {
		if u.Status != "matched" && !u.IsThunk && u.Status != "out_of_scope" {
			u.Status = "matched"
			u.SkipReason = ""
			if err := saveUnits(units); err != nil {
				fmt.Fprintf(os.Stderr, "Warning: failed to update build/units.json: %v\n", err)
			}
		}
		_ = exec.Command("go", "run", "./tools/status", "-update").Run()
		fmt.Println("================================================================================")
		fmt.Printf("EXACT MATCH (100%%) | %s | %s (%d / %d bytes)\n", u.VA, u.Symbol, len(compMasked), len(tgtMasked))
		fmt.Println("================================================================================")
		fmt.Printf("Updated build/units.json (\"status\": \"matched\"), README.md, and docs/index.html.\n")
		return
	}

	// Build side-by-side TARGET ASM vs COMPILED ASM diff
	relocOffsets := make(map[uint32]bool)
	for _, off := range compFn.Relocs {
		relocOffsets[off] = true
	}
	for _, rHex := range u.Relocations {
		if rv, err := strconv.ParseUint(strings.TrimPrefix(rHex, "0x"), 16, 32); err == nil {
			rVA := uint32(rv)
			if rVA >= startVA && rVA+4 <= startVA+uint32(len(tgtMasked)) {
				relocOffsets[rVA-startVA] = true
			}
		}
	}

	cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
	tgtInsts, _ := parseDisasmFile(cachePath, startVA)
	compInsts := disassembleCompiledObj(objPath, compFn.SymName)

	fmt.Println("================================================================================")
	fmt.Printf("MISMATCH: %.1f%% byte similarity | Target: %d bytes vs Compiled: %d bytes\n",
		pct, len(tgtMasked), len(compMasked))
	fmt.Println("================================================================================")
	fmt.Printf("%-46s | %-46s\n", "TARGET ASM ("+u.VA+")", "COMPILED ASM ("+compFn.SymName+")")
	fmt.Println(strings.Repeat("-", 98))

	maxRows := len(tgtInsts)
	if len(compInsts) > maxRows {
		maxRows = len(compInsts)
	}
	for i := 0; i < maxRows; i++ {
		var tPtr, cPtr *AsmInst
		if i < len(tgtInsts) {
			tPtr = &tgtInsts[i]
		}
		if i < len(compInsts) {
			cPtr = &compInsts[i]
		}
		left := formatInstColumn(tPtr)
		right := formatInstColumn(cPtr)

		rowMatch := false
		if tPtr != nil && cPtr != nil {
			tb := maskInstBytes(*tPtr, relocOffsets)
			cb := maskInstBytes(*cPtr, relocOffsets)
			rowMatch = bytes.Equal(tb, cb)
		}
		marker := ""
		if !rowMatch {
			marker = " <-- MISMATCH"
		}
		fmt.Printf("%-46s | %-46s%s\n", left, right, marker)
	}
	fmt.Println(strings.Repeat("-", 98))
	fmt.Printf("Target Masked Hex  : %x\n", tgtMasked)
	fmt.Printf("Compiled Masked Hex: %x\n", compMasked)
	os.Exit(1)
}

func cmdSkip(args []string) {
	if len(args) < 2 {
		fmt.Fprintln(os.Stderr, "Usage: go run ./tools/work skip <address> \"<reason>\"")
		os.Exit(1)
	}
	vaHex, _, err := normalizeVA(args[0])
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}
	reason := strings.TrimSpace(strings.Join(args[1:], " "))

	units, unitIdxByVA, _, _, _ := loadUnitsAndClasses()
	uIdx, ok := unitIdxByVA[vaHex]
	if !ok {
		fmt.Fprintf(os.Stderr, "Error: unit %s not found in build/units.json\n", vaHex)
		os.Exit(1)
	}

	units[uIdx].Status = "deferred"
	units[uIdx].SkipReason = reason
	if err := saveUnits(units); err != nil {
		fmt.Fprintf(os.Stderr, "Error saving build/units.json: %v\n", err)
		os.Exit(1)
	}

	fmt.Printf("Deferred %s (%s): %s\n", units[uIdx].VA, units[uIdx].Symbol, reason)
}

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "Usage:")
		fmt.Fprintln(os.Stderr, "  go run ./tools/work next [-n 1]")
		fmt.Fprintln(os.Stderr, "  go run ./tools/work check <address>")
		fmt.Fprintln(os.Stderr, "  go run ./tools/work skip <address> \"<reason>\"")
		os.Exit(1)
	}

	subcmd := os.Args[1]
	rest := os.Args[2:]
	switch subcmd {
	case "next":
		cmdNext(rest)
	case "check":
		cmdCheck(rest)
	case "skip":
		cmdSkip(rest)
	default:
		fmt.Fprintf(os.Stderr, "Unknown subcommand %q (expected: next, check, skip)\n", subcmd)
		os.Exit(1)
	}
}
