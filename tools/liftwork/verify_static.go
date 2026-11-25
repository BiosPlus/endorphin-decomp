package main

import (
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strings"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

// SemanticIssue represents a static verification finding on a lifted function.
type SemanticIssue struct {
	Severity string // "error" or "warn"
	Code     string // e.g. "undef_helper", "missing_callee", "hallucinated_callee", "missing_global", "empty_body", "truncated_body"
	Message  string
}

var (
	// Matches function declarations (not definitions) ending with ';', e.g.:
	//   template <typename T> T mem_read(uint32_t addr);
	//   extern void helper_foo(int a);
	//   float read_f32(uintptr_t addr);
	funcDeclLineRe = regexp.MustCompile(`(?m)^\s*(?:template\s*<[^>]*>\s*)?(?:extern\s+(?:"C"\s+)?)?(?:static\s+)?(?:inline\s+)?(?:const\s+)?[A-Za-z_][A-Za-z0-9_:*&<> \t]*?\b([A-Za-z_][A-Za-z0-9_]*)\s*\([^;{}]*\)\s*(?:const\s*)?(?:noexcept\s*)?;\s*$`)

	// Matches function definitions `... name(...) {` to know which forward decls are actually defined.
	funcDefNameRe = regexp.MustCompile(`\b([A-Za-z_][A-Za-z0-9_]*)\s*\([^;{}]*\)\s*(?:const\s*)?(?:noexcept\s*)?\{`)

	// Matches hex address literals like 0x004BA2D0 or 0x4ba2d0u.
	hexAddrRe = regexp.MustCompile(`(?i)\b0x0*([0-9a-f]{6,8})u?\b`)

	// Matches any numeric literal (int or float) in C++ code.
	numLitRe = regexp.MustCompile(`\b[0-9]+(?:\.[0-9]+)?(?:[eE][+-]?[0-9]+)?[fFuUlL]*\b`)

	// Matches cast-to-void statements like `(void)self;`.
	voidCastStmtRe = regexp.MustCompile(`^\(\s*void\s*\)\s*[A-Za-z_][A-Za-z0-9_]*\s*;$`)
)

// compilerBoilerplateCallees are MSVC/CRT helper symbols that naturally disappear
// when lifting x86 assembly to portable C++ (stack cookies, FPU conversions, SEH prologs, etc.).
var compilerBoilerplateCallees = []string{
	"__security_check_cookie",
	"@__security_check_cookie",
	"_RTC_CheckEsp",
	"_RTC_CheckStackVars",
	"__chkstk",
	"_alloca_probe",
	"__EH_prolog",
	"__SEH_prolog",
	"__SEH_epilog",
	"__CxxFrameHandler",
	"_ftol",
	"_ftol2",
	"_ftol2_sse",
	"_allmul",
	"_alldiv",
	"_allrem",
	"_aulldiv",
	"_aullrem",
	"_allshl",
	"_allshr",
	"_aullshr",
	"_CIsqrt",
	"_CIsin",
	"_CIcos",
	"_CItan",
	"_CIatan",
	"_CIatan2",
	"_CIexp",
	"_CIlog",
	"_CIlog10",
	"_CIpow",
	"_CIfmod",
	"_CIacos",
	"_CIasin",
	"_purecall",
	"__report_gsfailure",
}

// knownStdFuncs are standard C/C++/Win32/GL symbols that are legal if forward-declared.
var knownStdFuncs = map[string]bool{
	"memcpy": true, "memmove": true, "memset": true, "memcmp": true,
	"strlen": true, "strcpy": true, "strncpy": true, "strcmp": true, "strncmp": true, "strcat": true,
	"sprintf": true, "snprintf": true, "printf": true, "fprintf": true, "sscanf": true,
	"malloc": true, "calloc": true, "realloc": true, "free": true, "abort": true, "exit": true,
	"sqrt": true, "sqrtf": true, "sin": true, "sinf": true, "cos": true, "cosf": true,
	"tan": true, "tanf": true, "atan": true, "atan2": true, "atan2f": true, "acos": true, "asin": true,
	"floor": true, "floorf": true, "ceil": true, "ceilf": true, "fabs": true, "fabsf": true,
	"pow": true, "powf": true, "exp": true, "log": true, "fmod": true, "fmodf": true,
	"qsort": true, "bsearch": true, "atexit": true,
}

// extractLiftedBlock extracts the `// [0xVA]` block from a lifted .cpp file.
// Falls back to locating `fn_<HEX>` / `sub_<HEX>` if the file predates marker enforcement.
func extractLiftedBlock(fileContent, va string) string {
	norm := unitstore.NormVA(va)
	hexUpper := strings.TrimPrefix(norm, "0x")
	lines := strings.Split(strings.ReplaceAll(fileContent, "\r\n", "\n"), "\n")
	start := -1
	end := len(lines)
	for i, l := range lines {
		if m := markerLineRe.FindStringSubmatch(l); len(m) == 2 {
			if start == -1 {
				if unitstore.NormVA(m[1]) == norm {
					start = i
				}
			} else {
				end = i
				break
			}
		}
	}
	if start == -1 {
		// Fallback for early lifted files without // [0xVA] marker: find fn_<HEX>( or sub_<HEX>(.
		fnPat := regexp.MustCompile(`(?i)\b(?:fn|sub)_` + hexUpper + `\s*\(`)
		for i, l := range lines {
			if fnPat.MatchString(l) && strings.Contains(l, "{") {
				// Walk back over adjacent // @name / // @summary / // @field comment lines.
				s := i
				for s > 0 {
					prev := strings.TrimSpace(lines[s-1])
					if strings.HasPrefix(prev, "//") || prev == "" {
						s--
					} else {
						break
					}
				}
				start = s
				// Find matching closing brace from line i.
				depth := 0
				for j := i; j < len(lines); j++ {
					code := stripCppComments(lines[j])
					depth += strings.Count(code, "{") - strings.Count(code, "}")
					if depth <= 0 && j >= i {
						end = j + 1
						break
					}
				}
				break
			}
		}
	}
	if start == -1 {
		return ""
	}
	return strings.TrimSpace(strings.Join(lines[start:end], "\n"))
}

// extractExecutableBodies extracts the concatenated C++ function body text (everything
// inside top-level / namespace-level function `{ ... }` blocks, excluding struct/class
// definitions, extern declarations, and comments).
func extractExecutableBodies(rawSrc string) string {
	code := stripCppComments(rawSrc)
	var bodies strings.Builder

	n := len(code)
	i := 0
	for i < n {
		// Find next '{'
		brace := strings.IndexByte(code[i:], '{')
		if brace == -1 {
			break
		}
		braceIdx := i + brace

		// Look backwards from braceIdx to see what construct owns this '{'.
		// Find the previous ';', '}', or start of string.
		hdrStart := braceIdx - 1
		for hdrStart >= 0 && code[hdrStart] != ';' && code[hdrStart] != '}' && code[hdrStart] != '{' {
			hdrStart--
		}
		hdr := strings.TrimSpace(code[hdrStart+1 : braceIdx])

		// If this is `namespace X {` or `extern "C" {`, step INSIDE it rather than treating it as a function body.
		if strings.HasPrefix(hdr, "namespace ") || strings.HasPrefix(hdr, "namespace\t") ||
			hdr == "namespace" || regexp.MustCompile(`^extern\s+"C"\s*$`).MatchString(hdr) {
			i = braceIdx + 1
			continue
		}

		// Find matching closing '}'
		endIdx := findMatchingBrace(code, braceIdx)
		if endIdx == -1 {
			break
		}

		// Skip struct/class/union/enum definitions.
		isTypeDef := regexp.MustCompile(`(?m)(?:^|\s)(?:struct|class|union|enum)\b`).MatchString(hdr) && !strings.Contains(hdr, "(")
		if !isTypeDef && strings.Contains(hdr, "(") {
			bodies.WriteString(code[braceIdx+1 : endIdx])
			bodies.WriteByte('\n')
		}
		i = endIdx + 1
	}
	return bodies.String()
}

func findMatchingBrace(code string, openIdx int) int {
	depth := 0
	n := len(code)
	for i := openIdx; i < n; i++ {
		c := code[i]
		if c == '"' || c == '\'' {
			q := c
			i++
			for i < n {
				if code[i] == '\\' && i+1 < n {
					i += 2
					continue
				}
				if code[i] == q {
					break
				}
				i++
			}
			continue
		}
		if c == '{' {
			depth++
		} else if c == '}' {
			depth--
			if depth == 0 {
				return i
			}
		}
	}
	return -1
}

// findUndefinedHelpers returns names of non-ext_ helper functions that are declared
// in rawSrc (e.g. `template <typename T> T mem_read(uint32_t);`) but never defined.
func findUndefinedHelpers(rawSrc string) []string {
	code := stripCppComments(rawSrc)

	// Collect all function names that have a `{` definition in this snippet.
	defined := map[string]bool{}
	for _, m := range funcDefNameRe.FindAllStringSubmatch(code, -1) {
		if len(m) >= 2 {
			defined[m[1]] = true
		}
	}

	var undef []string
	seen := map[string]bool{}
	// Only inspect lines outside function bodies (and outside struct/class bodies).
	fnPtrRe := regexp.MustCompile(`\(\s*(?:__cdecl|__stdcall|__thiscall|__fastcall)?\s*\*`)
	cppTypeNames := map[string]bool{
		"void": true, "bool": true, "char": true, "short": true, "int": true, "long": true,
		"float": true, "double": true, "unsigned": true, "signed": true, "auto": true,
		"int8_t": true, "uint8_t": true, "int16_t": true, "uint16_t": true,
		"int32_t": true, "uint32_t": true, "int64_t": true, "uint64_t": true,
		"uintptr_t": true, "intptr_t": true, "size_t": true, "ptrdiff_t": true,
		"BYTE": true, "WORD": true, "DWORD": true, "QWORD": true, "BOOL": true,
		"INT": true, "UINT": true, "LONG": true, "ULONG": true, "FLOAT": true, "DOUBLE": true,
		"HRESULT": true, "LRESULT": true, "WPARAM": true, "LPARAM": true, "HANDLE": true, "HWND": true,
	}
	for _, m := range funcDeclLineRe.FindAllStringSubmatchIndex(code, -1) {
		line := strings.TrimSpace(code[m[0]:m[1]])
		name := code[m[2]:m[3]]
		// Ignore function-pointer variable declarations like `extern uint32_t (__stdcall *mem_00925694)(...);`.
		if fnPtrRe.MatchString(line) || cppTypeNames[name] {
			continue
		}
		// Ignore control flow statements, return, typedefs, using, casts, function-pointer vars.
		if strings.HasPrefix(line, "return ") || strings.HasPrefix(line, "typedef ") ||
			strings.HasPrefix(line, "using ") || strings.HasPrefix(line, "delete ") ||
			strings.HasPrefix(line, "throw ") || strings.HasPrefix(line, "if ") ||
			strings.HasPrefix(line, "while ") || strings.HasPrefix(line, "for ") ||
			strings.HasPrefix(line, "switch ") {
			continue
		}
		// Must not be inside a function body: check brace depth before m[0] (ignoring namespace/extern "C").
		if isInsideFunctionBody(code, m[0]) {
			continue
		}
		if strings.HasPrefix(name, "ext_") || memRefRe.MatchString(name) || strings.HasPrefix(name, "fn_") || strings.HasPrefix(name, "sub_") {
			continue
		}
		if knownStdFuncs[name] || defined[name] {
			continue
		}
		if !seen[name] {
			seen[name] = true
			undef = append(undef, name)
		}
	}
	sort.Strings(undef)
	return undef
}

func isInsideFunctionBody(code string, pos int) bool {
	// Walk from 0..pos tracking braces; ignore `namespace ... {` and `extern "C" {`.
	depth := 0
	for i := 0; i < pos; i++ {
		c := code[i]
		if c == '"' || c == '\'' {
			q := c
			i++
			for i < pos {
				if code[i] == '\\' && i+1 < pos {
					i += 2
					continue
				}
				if code[i] == q {
					break
				}
				i++
			}
			continue
		}
		if c == '{' {
			hdrStart := i - 1
			for hdrStart >= 0 && code[hdrStart] != ';' && code[hdrStart] != '}' && code[hdrStart] != '{' {
				hdrStart--
			}
			hdr := strings.TrimSpace(code[hdrStart+1 : i])
			if strings.HasPrefix(hdr, "namespace ") || strings.HasPrefix(hdr, "namespace\t") ||
				hdr == "namespace" || regexp.MustCompile(`^extern\s+"C"\s*$`).MatchString(hdr) {
				continue
			}
			depth++
		} else if c == '}' {
			if depth > 0 {
				depth--
			}
		}
	}
	return depth > 0
}

func isBoilerplateCallee(va string, byVA map[string]decomp.UnitEntry) bool {
	if u, ok := byVA[va]; ok {
		sym := u.Symbol
		for _, bp := range compilerBoilerplateCallees {
			if strings.Contains(sym, bp) {
				return true
			}
		}
	}
	return false
}

// peSectionForVA returns the section name (".text", ".rdata", ".data", "CONST", or "") for va.
// Falls back to build/target.json's static PE layout when .local/bin/endorphin.exe is not present (e.g. CI).
func peSectionForVA(va uint32) string {
	peOnce.Do(initPESections)
	for _, sec := range peSections {
		if va >= sec.vaStart && va < sec.vaEnd {
			return sec.name
		}
	}
	switch {
	case va >= 0x00401000 && va < 0x00923000:
		return ".text"
	case va >= 0x00923000 && va < 0x00924000:
		return "CONST"
	case va >= 0x00924000 && va < 0x00A2E000:
		return ".rdata"
	case va >= 0x00A2E000 && va < 0x00BCE000:
		return ".data"
	}
	return ""
}

// validateLiftedSemantics runs static equivalence & quality checks comparing rawSrc
// against the byte-matched SrcFunc and UnitEntry.
func validateLiftedSemantics(
	rawSrc string,
	u decomp.UnitEntry,
	sf *SrcFunc,
	byVA map[string]decomp.UnitEntry,
	syms map[string]SymbolEntry,
) []SemanticIssue {
	var issues []SemanticIssue

	// 1. Check for undefined non-ext_ helper declarations (e.g. `template <typename T> T mem_read(uint32_t);`).
	if undef := findUndefinedHelpers(rawSrc); len(undef) > 0 {
		issues = append(issues, SemanticIssue{
			Severity: "error",
			Code:     "undef_helper",
			Message:  fmt.Sprintf("declares undefined helper function(s): %s (use real pointer casts / lift_field<T> instead)", strings.Join(undef, ", ")),
		})
	}

	body := extractExecutableBodies(rawSrc)
	rawCode := stripCppComments(rawSrc)

	// 2. Empty / severely truncated body checks.
	nonEmptyStmts := countExecutableStatements(body)
	if nonEmptyStmts == 0 && u.Size > 16 {
		// Allow empty body only if the original asm is genuinely a no-op / pure ret.
		if sf == nil || (len(sf.Callees) > 0 || len(sf.MemRefs) > 0 || !isTrivialNopAsm(sf.Body)) {
			issues = append(issues, SemanticIssue{
				Severity: "error",
				Code:     "empty_body",
				Message:  fmt.Sprintf("empty function body for %d-byte function %s", u.Size, u.VA),
			})
		}
	} else if u.Size >= 300 && nonEmptyStmts <= 2 && !hasControlFlow(body) {
		issues = append(issues, SemanticIssue{
			Severity: "warn",
			Code:     "truncated_body",
			Message:  fmt.Sprintf("suspiciously short body (%d stmts, no control flow) for %d-byte function %s", nonEmptyStmts, u.Size, u.VA),
		})
	}

	if sf == nil {
		return issues
	}

	// Collect all ext_XXXXXXXX, mem_XXXXXXXX, and raw 0xXXXXXXXX hex literals used in the executable body.
	bodyExts := refSet(extRefRe.FindAllStringSubmatch(body, -1))
	bodyMems := refSet(memRefRe.FindAllStringSubmatch(body, -1))
	bodyHexAddrs := refSet(hexAddrRe.FindAllStringSubmatch(rawCode, -1))

	// 3. Callee coverage: every non-boilerplate callee in sf.Callees should appear in the lifted body.
	srcCalleeSet := make(map[string]bool, len(sf.Callees))
	var missingCallees []string
	for _, cal := range sf.Callees {
		cal = unitstore.NormVA(cal)
		srcCalleeSet[cal] = true
		if cal == u.VA {
			// Self-recursion can be written as calling the lifted function's own name.
			continue
		}
		if bodyExts[cal] || bodyHexAddrs[cal] {
			continue
		}
		if isBoilerplateCallee(cal, byVA) {
			continue
		}
		// Also accept if the lifted code calls the callee by its recovered name from symbols.json.
		if se, ok := syms[cal]; ok && se.Name != "" {
			short := se.Name
			if idx := strings.LastIndex(short, "::"); idx != -1 {
				short = short[idx+2:]
			}
			if short != "" && strings.Contains(body, short+"(") {
				continue
			}
		}
		// Check if callee is a known CRT/math/alloc thunk that is legitimately replaced by C++ syntax.
		if isCrtOrStdlibReplaced(cal, body, byVA) {
			continue
		}
		missingCallees = append(missingCallees, cal)
	}
	if len(missingCallees) > 0 {
		sort.Strings(missingCallees)
		issues = append(issues, SemanticIssue{
			Severity: "error",
			Code:     "missing_callee",
			Message:  fmt.Sprintf("missing %d callee(s) from original asm: %s", len(missingCallees), strings.Join(missingCallees, ", ")),
		})
	}

	// 4. Hallucinated callees: ext_XXXXXXXX called in body that is NOT in sf.Callees.
	var extraCallees []string
	for cal := range bodyExts {
		if cal == u.VA || srcCalleeSet[cal] {
			continue
		}
		// Could it be a mem_ VA that the model declared as ext_? Check sf.MemRefs.
		inMem := false
		for _, m := range sf.MemRefs {
			if unitstore.NormVA(m) == cal {
				inMem = true
				break
			}
		}
		if !inMem {
			extraCallees = append(extraCallees, cal)
		}
	}
	if len(extraCallees) > 0 {
		sort.Strings(extraCallees)
		issues = append(issues, SemanticIssue{
			Severity: "error",
			Code:     "hallucinated_callee",
			Message:  fmt.Sprintf("calls ext_ target(s) not present in original asm: %s", strings.Join(extraCallees, ", ")),
		})
	}

	// 5. Global/constant coverage: every mutable .data global in sf.MemRefs must be referenced.
	// For .rdata constants (strings/floats/doubles), allow clean inlining as C++ literals.
	hasNumLit := numLitRe.MatchString(body)
	hasStrLit := strings.Contains(body, `"`)
	var missingGlobals []string
	for _, m := range sf.MemRefs {
		m = unitstore.NormVA(m)
		if bodyMems[m] || bodyHexAddrs[m] || bodyExts[m] {
			continue
		}
		_, mU32, err := normVA(m)
		if err != nil {
			continue
		}
		sec := peSectionForVA(mU32)
		// Jump tables live in .text and become switch statements in C++.
		if sec == ".text" {
			continue
		}
		// .rdata / CONST constants can be cleanly inlined as string or numeric literals.
		// Exclude the IAT range (0x00924000..0x00926000) which holds imported function pointers.
		if (sec == ".rdata" || sec == "CONST") && !(mU32 >= 0x00924000 && mU32 < 0x00926000) {
			desc := decodeMemRef(mU32)
			if strings.Contains(desc, " string ") && hasStrLit {
				continue
			}
			if (strings.Contains(desc, " float ") || strings.Contains(desc, " double ") || strings.Contains(desc, " u32 ")) && hasNumLit {
				continue
			}
			// When endorphin.exe is absent (e.g. CI), allow inlined .rdata constants if literals are present.
			if desc == "" {
				continue
			}
		}
		missingGlobals = append(missingGlobals, m)
	}
	if len(missingGlobals) > 0 {
		sort.Strings(missingGlobals)
		issues = append(issues, SemanticIssue{
			Severity: "error",
			Code:     "missing_global",
			Message:  fmt.Sprintf("missing %d global/data ref(s) from original asm: %s", len(missingGlobals), strings.Join(missingGlobals, ", ")),
		})
	}

	return issues
}

func refSet(matches [][]string) map[string]bool {
	out := make(map[string]bool, len(matches))
	for _, m := range matches {
		if len(m) >= 2 {
			out[unitstore.NormVA("0x"+m[1])] = true
		}
	}
	return out
}

func countExecutableStatements(body string) int {
	count := 0
	for _, raw := range strings.Split(body, "\n") {
		t := strings.TrimSpace(raw)
		if t == "" || t == "{" || t == "}" || t == "};" {
			continue
		}
		if voidCastStmtRe.MatchString(t) {
			continue
		}
		if strings.HasSuffix(t, ";") || strings.HasPrefix(t, "if") || strings.HasPrefix(t, "for") ||
			strings.HasPrefix(t, "while") || strings.HasPrefix(t, "switch") || strings.HasPrefix(t, "return") {
			count++
		}
	}
	return count
}

func hasControlFlow(body string) bool {
	return regexp.MustCompile(`\b(?:if|for|while|switch|do)\b`).MatchString(body)
}

func isTrivialNopAsm(srcBody string) bool {
	// Count instruction-like lines inside __asm { ... }.
	idx := strings.Index(srcBody, "__asm")
	if idx == -1 {
		return false
	}
	lines := strings.Split(srcBody[idx:], "\n")
	insts := 0
	for _, l := range lines {
		t := strings.TrimSpace(l)
		if t == "" || strings.HasPrefix(t, "//") || strings.HasPrefix(t, "__asm") || t == "{" || t == "}" {
			continue
		}
		if t == "ret" || strings.HasPrefix(t, "ret ") || t == "nop" || t == "int 3" {
			continue
		}
		insts++
	}
	return insts == 0
}

func isCrtOrStdlibReplaced(calleeVA, body string, byVA map[string]decomp.UnitEntry) bool {
	// Check cached disasm or unit symbol for CRT/math/alloc functions.
	sym := ""
	if u, ok := byVA[calleeVA]; ok {
		sym = strings.ToLower(u.Symbol)
	}
	if sym == "" {
		return false
	}
	if (strings.Contains(sym, "memcpy") || strings.Contains(sym, "memmove")) &&
		(strings.Contains(body, "memcpy") || strings.Contains(body, "memmove") || strings.Contains(body, "std::copy")) {
		return true
	}
	if strings.Contains(sym, "memset") && (strings.Contains(body, "memset") || strings.Contains(body, "std::fill")) {
		return true
	}
	if strings.Contains(sym, "strlen") && strings.Contains(body, "strlen") {
		return true
	}
	if strings.Contains(sym, "strcmp") && strings.Contains(body, "strcmp") {
		return true
	}
	if strings.Contains(sym, "sqrt") && strings.Contains(body, "sqrt") {
		return true
	}
	if strings.Contains(sym, "throw") && strings.Contains(body, "throw") {
		return true
	}
	return false
}

// semanticErrors returns only error-severity issues.
func semanticErrors(issues []SemanticIssue) []SemanticIssue {
	var out []SemanticIssue
	for _, is := range issues {
		if is.Severity == "error" {
			out = append(out, is)
		}
	}
	return out
}

// cmdAudit scans already-lifted functions and reports static verification issues.
func cmdAudit(args []string) {
	scope := "all"
	showSamples := 20
	filterCode := ""
	resetFailed := false
	strict := false
	for i := 0; i < len(args); i++ {
		switch args[i] {
		case "--scope":
			if i+1 < len(args) {
				i++
				scope = args[i]
			}
		case "--samples":
			if i+1 < len(args) {
				i++
				fmt.Sscanf(args[i], "%d", &showSamples)
			}
		case "--code":
			if i+1 < len(args) {
				i++
				filterCode = args[i]
			}
		case "--reset-failed":
			resetFailed = true
		case "--strict":
			strict = true
		}
	}

	_, byVA, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork audit: %v\n", err)
		os.Exit(1)
	}
	lifted, err := readAllLiftEntries()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork audit: %v\n", err)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()
	syms := readSymbolsJSON()

	// Cache file contents by lifted path.
	fileCache := map[string]string{}
	readLifted := func(p string) string {
		if s, ok := fileCache[p]; ok {
			return s
		}
		b, err := os.ReadFile(p)
		if err != nil {
			fileCache[p] = ""
			return ""
		}
		s := string(b)
		fileCache[p] = s
		return s
	}

	type finding struct {
		va     string
		name   string
		model  string
		path   string
		issues []SemanticIssue
	}

	totalChecked := 0
	totalErrors := 0
	totalWarns := 0
	byCode := map[string]int{}
	byModel := map[string]int{}
	var findings []finding

	for _, va := range sortedVAs(lifted) {
		le := lifted[va]
		if le.Status != "lifted" {
			continue
		}
		sf := srcIdx[va]
		if sf == nil {
			continue
		}
		if !matchesScope(scope, sf.SrcPath, le.OrigSymbol) {
			continue
		}
		totalChecked++
		content := readLifted(le.LiftedPath)
		block := extractLiftedBlock(content, va)
		if block == "" {
			iss := []SemanticIssue{{Severity: "error", Code: "missing_block", Message: fmt.Sprintf("block // [%s] not found in %s", va, le.LiftedPath)}}
			byCode["missing_block"]++
			byModel[le.LiftedBy]++
			totalErrors++
			findings = append(findings, finding{va, le.Name, le.LiftedBy, le.LiftedPath, iss})
			continue
		}

		u := byVA[va]
		issues := validateLiftedSemantics(block, u, sf, byVA, syms)
		if filterCode != "" {
			var filtered []SemanticIssue
			for _, is := range issues {
				if is.Code == filterCode {
					filtered = append(filtered, is)
				}
			}
			issues = filtered
		}
		if len(issues) == 0 {
			continue
		}
		hasErr := false
		for _, is := range issues {
			byCode[is.Code]++
			if is.Severity == "error" {
				hasErr = true
			}
		}
		if hasErr {
			totalErrors++
			byModel[le.LiftedBy]++
		} else {
			totalWarns++
		}
		findings = append(findings, finding{va, le.Name, le.LiftedBy, le.LiftedPath, issues})
	}

	fmt.Printf("=== Lift Static Audit (scope=%s) ===\n", scope)
	fmt.Printf("Checked: %d | Clean: %d | With errors: %d | Warnings only: %d\n",
		totalChecked, totalChecked-totalErrors-totalWarns, totalErrors, totalWarns)

	if len(byCode) > 0 {
		fmt.Println("\nBy issue code:")
		var codes []string
		for k := range byCode {
			codes = append(codes, k)
		}
		sort.Slice(codes, func(i, j int) bool { return byCode[codes[i]] > byCode[codes[j]] })
		for _, c := range codes {
			fmt.Printf("  %-24s %d\n", c, byCode[c])
		}
	}

	if len(byModel) > 0 {
		fmt.Println("\nErrors by model:")
		var models []string
		for k := range byModel {
			models = append(models, k)
		}
		sort.Slice(models, func(i, j int) bool { return byModel[models[i]] > byModel[models[j]] })
		for _, m := range models {
			fmt.Printf("  %-32s %d\n", m, byModel[m])
		}
	}

	shown := 0
	if len(findings) > 0 && showSamples > 0 {
		fmt.Printf("\nSample findings (first %d):\n", showSamples)
		for _, f := range findings {
			if shown >= showSamples {
				break
			}
			var msgs []string
			for _, is := range f.issues {
				msgs = append(msgs, fmt.Sprintf("[%s:%s] %s", is.Severity, is.Code, is.Message))
			}
			fmt.Printf("  %s %-34s (%s) %s\n", f.va, f.name, f.model, strings.Join(msgs, "; "))
			shown++
		}
	}

	if resetFailed && totalErrors > 0 {
		removed := 0
		modifiedFiles := map[string][]string{}
		for _, f := range findings {
			hasErr := false
			for _, is := range f.issues {
				if is.Severity == "error" {
					hasErr = true
					break
				}
			}
			if !hasErr {
				continue
			}
			p := liftLedgerPath(f.va)
			if err := os.Remove(p); err == nil {
				removed++
				if f.path != "" {
					modifiedFiles[f.path] = append(modifiedFiles[f.path], f.va)
				}
			}
		}
		stripped := 0
		for path, vas := range modifiedFiles {
			b, err := os.ReadFile(path)
			if err != nil {
				continue
			}
			updated := string(b)
			for _, va := range vas {
				updated = stripLiftedFunc(updated, va)
			}
			if updated != string(b) {
				if err := writeFileAtomic(path, []byte(updated), 0o644); err == nil {
					stripped++
				}
			}
		}
		fmt.Printf("\nReset %d failed ledger entries and stripped blocks from %d lifted .cpp files.\n", removed, stripped)
		if _, _, _, err := rebuildStructsAndSymbols(); err != nil {
			fmt.Fprintf(os.Stderr, "warn: rebuildStructsAndSymbols: %v\n", err)
		}
	}
	if strict && totalErrors > 0 {
		os.Exit(1)
	}
	_ = filepath.Base
}
