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
	"time"
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
	MatchedBy   string   `json:"matched_by,omitempty"`
	MatchedAt   string   `json:"matched_at,omitempty"`
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

func inferCallingConvention(va string) string {
	cachePath := filepath.Join(".local", "cache", "funcs", va+".txt")
	b, err := os.ReadFile(cachePath)
	if err != nil {
		return "__fastcall / __cdecl"
	}
	s := string(b)
	var retImm string
	lines := strings.Split(strings.TrimSpace(s), "\n")
	for i := len(lines) - 1; i >= 0; i-- {
		l := strings.TrimSpace(lines[i])
		if idx := strings.Index(l, "\tret\t"); idx != -1 {
			retImm = strings.TrimSpace(l[idx+5:])
			break
		} else if strings.HasSuffix(l, "\tret") {
			retImm = "0"
			break
		}
	}
	usesECX := strings.Contains(s, "ecx")
	if retImm != "" && retImm != "0" {
		if usesECX {
			return fmt.Sprintf("__thiscall (ret %s -> use __fastcall with self in ecx, dummy edx, plus %s bytes of stack args)", retImm, retImm)
		}
		return fmt.Sprintf("__stdcall / __thiscall (ret %s)", retImm)
	}
	if usesECX {
		return "__thiscall / __fastcall (ret 0 -> use extern \"C\" ... __fastcall fn_XXXX(Class* self))"
	}
	return "__cdecl (ret 0 -> use extern \"C\" ... __cdecl fn_XXXX(...))"
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
	maxSize := fs.Int("max-size", 256, "Maximum function byte size (default 256 for Haiku Tiny/Small tier)")
	tierFlag := fs.String("tier", "small", "Function size tier filter (tiny, small, all)")
	_ = fs.Parse(args)

	maxBytes := uint32(*maxSize)
	if strings.EqualFold(*tierFlag, "tiny") && *maxSize == 256 {
		maxBytes = 32
	} else if strings.EqualFold(*tierFlag, "all") && *maxSize == 256 {
		maxBytes = 0xFFFFFFFF
	}

	units, unitIdxByVA, _, classByName, mfcClasses := loadUnitsAndClasses()

	var ready []UnitEntry
	for _, u := range units {
		if u.Size > maxBytes {
			continue
		}
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
		fmt.Printf("No unmatched ready functions (size <= %d) remaining in queue!\n", maxBytes)
		return
	}

	for i := 0; i < limit; i++ {
		u := ready[i]
		var cls *ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			cls = classByName[u.Symbol[:idx]]
		}

		cppPath := findCppFileForVA(u.VA)
		stubAdded := false
		if cppPath == "" {
			cppPath = defaultCppFileForUnit(u, cls)
			_ = os.MkdirAll(filepath.Dir(cppPath), 0755)
			if _, err := os.Stat(cppPath); os.IsNotExist(err) {
				header := fmt.Sprintf("// Decompiled translation unit: %s\n", cppPath)
				_ = os.WriteFile(cppPath, []byte(header), 0644)
			}
			stub := fmt.Sprintf("\n// [%s] %s (%d bytes)\nextern \"C\" void __fastcall fn_%s(void* self) {\n    // TODO: implement\n}\n",
				u.VA, u.Symbol, u.Size, strings.TrimPrefix(u.VA, "0x"))
			f, err := os.OpenFile(cppPath, os.O_APPEND|os.O_WRONLY, 0644)
			if err == nil {
				_, _ = f.WriteString(stub)
				_ = f.Close()
				stubAdded = true
			}
		}

		fmt.Printf("FUNCTION: %s | Symbol: %s | Size: %d bytes\n", u.VA, u.Symbol, u.Size)
		fmt.Printf("CALLING_CONV: %s\n", inferCallingConvention(u.VA))
		if stubAdded {
			fmt.Printf("TARGET_CPP: %s (stub fn_%s created)\n", cppPath, strings.TrimPrefix(u.VA, "0x"))
		} else {
			fmt.Printf("TARGET_CPP: %s (fn_%s)\n", cppPath, strings.TrimPrefix(u.VA, "0x"))
		}

		if cls != nil {
			var bases []string
			for _, bc := range cls.BaseClasses {
				bases = append(bases, fmt.Sprintf("%s(+0x%X)", bc.DemangledName, bc.Offset))
			}
			baseStr := "none"
			if len(bases) > 0 {
				baseStr = strings.Join(bases, ", ")
			}
			fmt.Printf("CLASS_INFO: %s | VTable: %s (%d vfuncs) | Header: %s | Bases: %s\n",
				cls.DemangledName, cls.VTableVA, len(cls.VirtualMethods), cls.HeaderPath, baseStr)
		}

		if len(u.Callees) > 0 {
			fmt.Printf("CALLEES: %s\n", strings.Join(u.Callees, ", "))
		}
		if len(u.Relocations) > 0 {
			fmt.Printf("RELOCS: %s\n", strings.Join(u.Relocations, ", "))
		}

		fmt.Println("TARGET_ASM:")
		cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
		if b, err := os.ReadFile(cachePath); err == nil {
			for _, line := range strings.Split(strings.TrimSpace(string(b)), "\n") {
				if strings.HasPrefix(strings.TrimSpace(line), "//") {
					continue
				}
				fmt.Println(line)
			}
		}
		fmt.Printf("VERIFY_CMD: go run ./tools/work check %s --model <model>  |  SKIP_CMD: go run ./tools/work skip %s \"reason\"\n", u.VA, u.VA)
		if i+1 < limit {
			fmt.Println("---")
		}
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

func filterClOutput(raw string) string {
	var errs []string
	for _, line := range strings.Split(raw, "\n") {
		l := strings.TrimSpace(line)
		if l == "" {
			continue
		}
		if strings.Contains(l, ": error ") || strings.Contains(l, ": fatal error ") {
			errs = append(errs, l)
		}
	}
	if len(errs) > 0 {
		return strings.Join(errs, "\n")
	}
	return strings.TrimSpace(raw)
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
		return "", func() {}, fmt.Errorf("%s", filterClOutput(string(out)))
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

func generateHaikuHints(tgtInsts, compInsts []AsmInst, tgtLen, compLen int) []string {
	var hints []string
	if len(tgtInsts) > 0 && len(compInsts) > 0 {
		tLast := tgtInsts[len(tgtInsts)-1].Text
		cLast := compInsts[len(compInsts)-1].Text
		if strings.HasPrefix(tLast, "ret") && strings.HasPrefix(cLast, "ret") && tLast != cLast {
			hints = append(hints, fmt.Sprintf("Stack return mismatch: target has `%s` vs your `%s`. Adjust __fastcall/__stdcall/__cdecl or parameter count.", tLast, cLast))
		}
	}
	var tSubEsp, cSubEsp string
	var hasJccDiff, hasRegDiff bool
	maxLen := len(tgtInsts)
	if len(compInsts) < maxLen {
		maxLen = len(compInsts)
	}
	for i := 0; i < maxLen; i++ {
		tTxt := tgtInsts[i].Text
		cTxt := compInsts[i].Text
		if strings.HasPrefix(tTxt, "sub esp,") {
			tSubEsp = tTxt
		}
		if strings.HasPrefix(cTxt, "sub esp,") {
			cSubEsp = cTxt
		}
		if tTxt != cTxt {
			tFields := strings.Fields(tTxt)
			cFields := strings.Fields(cTxt)
			if len(tFields) > 0 && len(cFields) > 0 {
				tOp, cOp := tFields[0], cFields[0]
				if strings.HasPrefix(tOp, "j") && strings.HasPrefix(cOp, "j") && tOp != cOp {
					hasJccDiff = true
				} else if tOp == cOp {
					hasRegDiff = true
				}
			}
		}
	}
	if tSubEsp != cSubEsp && (tSubEsp != "" || cSubEsp != "") {
		hints = append(hints, fmt.Sprintf("Stack frame size mismatch: target `%s` vs your `%s`. Adjust local variables.", tSubEsp, cSubEsp))
	}
	if hasJccDiff {
		hints = append(hints, "Jump inversion detected: invert the `if (...)` condition or swap early-return / else branches.")
	}
	if hasRegDiff {
		hints = append(hints, "Register/offset order difference: check struct member offsets, pointer vs value types, or expression evaluation order.")
	}
	if compLen != tgtLen && len(hints) == 0 {
		hints = append(hints, fmt.Sprintf("Size difference: target is %d bytes vs your %d bytes.", tgtLen, compLen))
	}
	return hints
}

func parseCheckArgs(args []string) (string, string) {
	var addr, model string
	for i := 0; i < len(args); i++ {
		a := args[i]
		if a == "--model" || a == "-model" {
			if i+1 < len(args) {
				model = strings.TrimSpace(args[i+1])
				i++
			}
		} else if strings.HasPrefix(a, "--model=") {
			model = strings.TrimSpace(strings.TrimPrefix(a, "--model="))
		} else if strings.HasPrefix(a, "-model=") {
			model = strings.TrimSpace(strings.TrimPrefix(a, "-model="))
		} else if addr == "" && !strings.HasPrefix(a, "-") {
			addr = a
		}
	}
	if model == "" {
		model = strings.TrimSpace(os.Getenv("DECOMP_MODEL"))
	}
	if model == "" {
		model = "unknown"
	}
	return addr, model
}

func backfillAutoSolveModels(units []UnitEntry) bool {
	changed := false
	for i := range units {
		if (units[i].Status == "matched" || units[i].Status == "decompiled" || units[i].Status == "solved") && units[i].MatchedBy == "" {
			units[i].MatchedBy = "script:auto_solve"
			changed = true
		}
	}
	return changed
}

func coAuthorForModel(matchedBy string) string {
	m := strings.ToLower(strings.TrimSpace(matchedBy))
	switch {
	case strings.Contains(m, "gemini") || strings.Contains(m, "agy") || strings.Contains(m, "antigravity"):
		return "Co-authored-by: Antigravity <noreply@google.com>"
	case strings.Contains(m, "claude") || strings.Contains(m, "haiku") || strings.Contains(m, "sonnet") || strings.Contains(m, "opus"):
		return "Co-authored-by: Claude <noreply@anthropic.com>"
	default:
		return ""
	}
}

func autoCommitMatch(va, symbol, matchedBy string) {
	_ = exec.Command("go", "run", "./tools/status", "-readme").Run()

	_ = exec.Command("git", "add", "src/", "include/", "build/units.json", "README.md").Run()

	stagedOut, err := exec.Command("git", "diff", "--cached", "--name-only").Output()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Warning: failed to inspect staged files: %v\n", err)
		return
	}
	stagedLines := strings.Split(strings.TrimSpace(string(stagedOut)), "\n")
	if len(stagedLines) == 0 || stagedLines[0] == "" {
		return
	}

	var forbidden []string
	for _, f := range stagedLines {
		f = strings.TrimSpace(f)
		if f == "" {
			continue
		}
		lower := strings.ToLower(f)
		if strings.HasPrefix(lower, ".local/") ||
			strings.HasSuffix(lower, ".exe") ||
			strings.HasSuffix(lower, ".obj") ||
			strings.HasSuffix(lower, ".html") {
			forbidden = append(forbidden, f)
		}
	}
	if len(forbidden) > 0 {
		for _, f := range forbidden {
			_ = exec.Command("git", "reset", "HEAD", "--", f).Run()
		}
		fmt.Fprintf(os.Stderr, "Error: refused to commit forbidden staged files: %v\n", forbidden)
		return
	}

	msg := fmt.Sprintf("Match %s (%s) [model: %s]", va, symbol, matchedBy)
	if trailer := coAuthorForModel(matchedBy); trailer != "" {
		msg = msg + "\n\n" + trailer
	}
	if out, err := exec.Command("git", "commit", "-m", msg).CombinedOutput(); err != nil {
		fmt.Fprintf(os.Stderr, "Warning: git commit failed: %v (%s)\n", err, strings.TrimSpace(string(out)))
	}
}

func cmdCheck(args []string) {
	addrArg, modelName := parseCheckArgs(args)
	if addrArg == "" {
		fmt.Fprintln(os.Stderr, "Usage: go run ./tools/work check <address> [--model <name>]")
		os.Exit(1)
	}
	vaHex, startVA, err := normalizeVA(addrArg)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}

	units, unitIdxByVA, _, _, _ := loadUnitsAndClasses()
	_ = backfillAutoSolveModels(units)
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

	objPath, cleanup, err := compileCppToObj(cppPath)
	if err != nil {
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
		fmt.Printf("EXACT MATCH (100%%) | %s | %s (%d bytes)\n", u.VA, u.Symbol, len(tgtMasked))
		if u.Status != "matched" && !u.IsThunk && u.Status != "out_of_scope" {
			u.Status = "matched"
			u.SkipReason = ""
			u.MatchedBy = modelName
			u.MatchedAt = time.Now().UTC().Format("2006-01-02")
			if err := saveUnits(units); err != nil {
				fmt.Fprintf(os.Stderr, "Warning: failed to update build/units.json: %v\n", err)
			} else {
				autoCommitMatch(u.VA, u.Symbol, u.MatchedBy)
			}
		} else if u.Status == "matched" && (u.MatchedBy == "" || u.MatchedBy == "unknown") && modelName != "unknown" {
			u.MatchedBy = modelName
			if u.MatchedAt == "" {
				u.MatchedAt = time.Now().UTC().Format("2006-01-02")
			}
			_ = saveUnits(units)
		}
		return
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

	cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
	tgtInsts, _ := parseDisasmFile(cachePath, startVA)
	compInsts := disassembleCompiledObj(objPath, compFn.SymName)

	fmt.Printf("MISMATCH: %.1f%% match | Target: %dB vs Yours: %dB\n", pct, len(tgtMasked), len(compMasked))
	fmt.Printf("%-44s | %-44s\n", "TARGET ASM ("+u.VA+")", "YOUR ASM ("+compFn.SymName+")")
	fmt.Println(strings.Repeat("-", 94))

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
			marker = " <--"
		}
		fmt.Printf("%-44s | %-44s%s\n", left, right, marker)
	}
	for _, h := range generateHaikuHints(tgtInsts, compInsts, len(tgtMasked), len(compMasked)) {
		fmt.Printf("HINT: %s\n", h)
	}
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
		fmt.Fprintln(os.Stderr, "  go run ./tools/work next [--max-size 256]")
		fmt.Fprintln(os.Stderr, "  go run ./tools/work check <address> [--model <name>]")
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
