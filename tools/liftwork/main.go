// Command liftwork is the worker CLI for the De-ASM & Struct/Naming Lift pipeline.
//
// Subcommands:
//
//	liftwork next [--scope core|all|<list>] [--deps-first] [--include-cpp] [--max-size N] [--limit N] [--json] [--addrs-only]
//	liftwork claim <VA> [--isolated]
//	liftwork check <VA> [--model <model@effort>] [--dry-run] [--no-commit]
//	liftwork skip <VA> "<reason>"
//	liftwork merge-structs
//	liftwork status [--scope <scope>]
//	liftwork is-lifted <VA>
//	liftwork commit-pending
//	liftwork clean [VA]
package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
	"endorphin_decomp/internal/worklock"
)

func main() {
	if len(os.Args) < 2 {
		usage()
		os.Exit(2)
	}
	sub := os.Args[1]
	args := os.Args[2:]
	switch sub {
	case "next":
		cmdNext(args)
	case "claim":
		cmdClaim(args)
	case "check":
		cmdCheck(args)
	case "skip":
		cmdSkip(args)
	case "merge-structs":
		cmdMergeStructs(args)
	case "status":
		cmdStatus(args)
	case "is-lifted":
		cmdIsLifted(args)
	case "commit-pending":
		cmdCommitPending(args)
	case "clean":
		cmdClean(args)
	case "auto-lift":
		cmdAutoLift(args)
	case "audit":
		cmdAudit(args)
	case "verify":
		cmdVerify(args)
	case "-h", "--help", "help":
		usage()
	default:
		fmt.Fprintf(os.Stderr, "liftwork: unknown subcommand %q\n", sub)
		usage()
		os.Exit(2)
	}
}

func usage() {
	fmt.Fprintln(os.Stderr, `usage: liftwork <command> [options]

Commands:
  next           List next functions needing lifting
  claim <VA>     Print enriched lift briefing and prepare lifted/wip/fn_<VA>.cpp
  check <VA>     Validate, compile-check, merge, update structs/symbols, and commit
  skip <VA> msg  Record function as skipped in build/lifted/ and remove WIP file
  merge-structs  Rebuild lifted/symbols.json and lifted/include/*.h from build/lifted/
  status         Print lift progress scoreboard
  is-lifted <VA> Exit 0 if VA is lifted, 1 otherwise
  commit-pending Commit any uncommitted lifted files and ledger entries
  clean [VA]     Remove stale lifted/wip/ files
  auto-lift      Deterministically lift boilerplate patterns & identical-shape clones
  audit          Run static equivalence checks across already-lifted functions
  verify [VA]    Run native 32-bit differential execution against endorphin.exe`)
}

func loadUnits() ([]decomp.UnitEntry, map[string]decomp.UnitEntry, error) {
	raw, err := unitstore.ReadAll()
	if err != nil {
		return nil, nil, err
	}
	var units []decomp.UnitEntry
	if err := json.Unmarshal(raw, &units); err != nil {
		return nil, nil, err
	}
	byVA := make(map[string]decomp.UnitEntry, len(units))
	for i := range units {
		units[i].VA = unitstore.NormVA(units[i].VA)
		byVA[units[i].VA] = units[i]
	}
	return units, byVA, nil
}

// ---- next ------------------------------------------------------------------------------------------------

type nextItem struct {
	VA              string `json:"va"`
	Size            uint32 `json:"size"`
	Symbol          string `json:"symbol"`
	SrcPath         string `json:"src_path"`
	LiftedPath      string `json:"lifted_path"`
	HasAsm          bool   `json:"has_asm"`
	UnliftedCallees int    `json:"unlifted_callees"`
}

func cmdNext(args []string) {
	fs := flag.NewFlagSet("next", flag.ExitOnError)
	scope := fs.String("scope", "core", "Scope filter: core, all, or comma-separated prefixes/globs")
	depsFirst := fs.Bool("deps-first", false, "Order leaf functions first based on ext_XXXXXXXX call graph")
	includeCpp := fs.Bool("include-cpp", false, "Include pure-C++ functions (not only __asm/naked)")
	maxSize := fs.Int("max-size", 65535, "Maximum function size in bytes")
	limit := fs.Int("limit", 20, "Maximum number of results")
	shortN := fs.Int("n", 0, "Alias for --limit")
	asJSON := fs.Bool("json", false, "Output JSON array")
	addrsOnly := fs.Bool("addrs-only", false, "Output pipe-delimited VA|size|lifted_path|symbol lines for orchestrator")
	_ = fs.Parse(args)
	if *shortN > 0 {
		*limit = *shortN
	}

	units, _, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork next: %v\n", err)
		os.Exit(1)
	}
	lifted, err := readAllLiftEntries()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork next: %v\n", err)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()

	// Collect candidate pool.
	type cand struct {
		item    nextItem
		callees []string
	}
	var cands []cand
	for _, u := range units {
		if !decomp.IsCompleted(u.Status) {
			continue
		}
		if int(u.Size) > *maxSize {
			continue
		}
		if le, ok := lifted[u.VA]; ok && (le.Status == "lifted" || le.Status == "skipped") {
			continue
		}
		sf := srcIdx[u.VA]
		if sf == nil {
			continue
		}
		if !*includeCpp && !sf.HasAsm {
			continue
		}
		if !matchesScope(*scope, sf.SrcPath, u.Symbol) {
			continue
		}
		callees := sf.Callees
		if len(callees) == 0 && len(u.Callees) > 0 {
			for _, c := range u.Callees {
				callees = append(callees, unitstore.NormVA(c))
			}
		}
		cands = append(cands, cand{
			item: nextItem{
				VA:         u.VA,
				Size:       u.Size,
				Symbol:     u.Symbol,
				SrcPath:    sf.SrcPath,
				LiftedPath: liftedPathForSrc(sf.SrcPath),
				HasAsm:     sf.HasAsm,
			},
			callees: callees,
		})
	}

	if *depsFirst {
		for i := range cands {
			unlifted := 0
			for _, cal := range cands[i].callees {
				if cal == cands[i].item.VA {
					continue
				}
				if le, ok := lifted[cal]; ok && le.Status == "lifted" {
					continue
				}
				if csf := srcIdx[cal]; csf != nil && (*includeCpp || csf.HasAsm) {
					unlifted++
				}
			}
			cands[i].item.UnliftedCallees = unlifted
		}
	}

	sort.Slice(cands, func(i, j int) bool {
		if *depsFirst && cands[i].item.UnliftedCallees != cands[j].item.UnliftedCallees {
			return cands[i].item.UnliftedCallees < cands[j].item.UnliftedCallees
		}
		if cands[i].item.Size != cands[j].item.Size {
			return cands[i].item.Size < cands[j].item.Size
		}
		return vaSortVal(cands[i].item.VA) < vaSortVal(cands[j].item.VA)
	})

	if *limit > 0 && len(cands) > *limit {
		cands = cands[:*limit]
	}

	if *asJSON {
		items := make([]nextItem, len(cands))
		for i, c := range cands {
			items[i] = c.item
		}
		b, _ := json.MarshalIndent(items, "", "  ")
		fmt.Println(string(b))
		return
	}
	if *addrsOnly {
		for _, c := range cands {
			fmt.Printf("%s|%d|%s|%s\n", c.item.VA, c.item.Size, c.item.LiftedPath, c.item.Symbol)
		}
		return
	}
	for _, c := range cands {
		kind := "asm"
		if !c.item.HasAsm {
			kind = "cpp"
		}
		fmt.Printf("%s  %5dB  [%s]  deps=%-2d  %-36s  %s\n",
			c.item.VA, c.item.Size, kind, c.item.UnliftedCallees, c.item.Symbol, c.item.SrcPath)
	}
}

// ---- claim -----------------------------------------------------------------------------------------------

func cmdClaim(args []string) {
	fs := flag.NewFlagSet("claim", flag.ExitOnError)
	isolated := fs.Bool("isolated", false, "Create isolated lifted/wip/fn_<VA>.cpp scratch file")
	// Allow `claim <VA> --isolated` as well as `claim --isolated <VA>`.
	var vaArg string
	var flagArgs []string
	for _, a := range args {
		if strings.HasPrefix(a, "-") {
			flagArgs = append(flagArgs, a)
		} else if vaArg == "" {
			vaArg = a
		}
	}
	_ = fs.Parse(flagArgs)
	if vaArg == "" {
		fmt.Fprintln(os.Stderr, "usage: liftwork claim <VA> [--isolated]")
		os.Exit(2)
	}
	va, _, err := normVA(vaArg)
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork claim: %v\n", err)
		os.Exit(1)
	}

	_, byVA, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork claim: %v\n", err)
		os.Exit(1)
	}
	u, ok := byVA[va]
	if !ok {
		fmt.Fprintf(os.Stderr, "liftwork claim: unit %s not found in build/units\n", va)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()
	sf := srcIdx[va]
	srcPath := ""
	srcBody := ""
	var callees, memRefs []string
	if sf != nil {
		srcPath = sf.SrcPath
		srcBody = sf.Body
		callees = sf.Callees
		memRefs = sf.MemRefs
	}
	if len(callees) == 0 && len(u.Callees) > 0 {
		for _, c := range u.Callees {
			callees = append(callees, unitstore.NormVA(c))
		}
	}
	liftedPath := ""
	if srcPath != "" {
		liftedPath = liftedPathForSrc(srcPath)
	} else {
		liftedPath = filepath.ToSlash(filepath.Join(liftedRootDir, "misc", "fn_"+strings.TrimPrefix(va, "0x")+".cpp"))
	}

	clsName := inferClassFromSymbol(u.Symbol)
	syms := readSymbolsJSON()
	classes := loadClassesMap()

	useIso := *isolated || isIsolatedEnv()
	targetFile := liftedPath
	if useIso {
		targetFile = wipPathForVA(va)
		wipContent := buildLiftWipTemplate(va, u.Symbol, clsName, u.Size, liftedPath, callees, memRefs, syms)
		if err := writeFileAtomic(targetFile, []byte(wipContent), 0o644); err != nil {
			fmt.Fprintf(os.Stderr, "liftwork claim: writing %s: %v\n", targetFile, err)
			os.Exit(1)
		}
	}

	brief := renderBriefing(u, clsName, srcPath, liftedPath, targetFile, srcBody, callees, memRefs, syms, classes, byVA)
	fmt.Print(brief)
}

func buildLiftWipTemplate(va, origSym, clsName string, size uint32, liftedPath string, callees, memRefs []string, syms map[string]SymbolEntry) string {
	var sb strings.Builder
	fmt.Fprintf(&sb, "%s %s -> %s\n", liftWipBannerPrefix, wipPathForVA(va), liftedPath)
	sb.WriteString("#include \"lift_compat.h\"\n\n")
	for _, c := range callees {
		h := strings.TrimPrefix(c, "0x")
		if se, ok := syms[c]; ok && se.Signature != "" {
			fmt.Fprintf(&sb, "// Known callee %s: %s (%s)\n", c, se.Name, se.Summary)
		}
		fmt.Fprintf(&sb, "extern \"C\" void ext_%s();\n", h)
	}
	for _, m := range memRefs {
		h := strings.TrimPrefix(m, "0x")
		fmt.Fprintf(&sb, "extern \"C\" int mem_%s;\n", h)
	}
	if len(callees) > 0 || len(memRefs) > 0 {
		sb.WriteString("\n")
	}
	fmt.Fprintf(&sb, "// [%s] %s (%d bytes)\n", va, origSym, size)
	sb.WriteString("// @name <ClassName::methodName or descriptiveFunctionName>\n")
	if clsName != "" {
		fmt.Fprintf(&sb, "// @class %s\n", clsName)
	} else {
		sb.WriteString("// @class <ClassName> (optional)\n")
	}
	sb.WriteString("// @summary <One-line description of what this function does>\n")
	sb.WriteString("// @field <ClassName> +0x00 <type> <fieldName>\n")
	fmt.Fprintf(&sb, "void fn_%s(void* self) {\n", strings.TrimPrefix(va, "0x"))
	sb.WriteString("    // Replace with clean, portable C++ (zero __asm / naked / _emit / TODO)\n")
	sb.WriteString("}\n")
	return sb.String()
}

func stripDisasmHeader(raw string) string {
	lines := strings.Split(strings.ReplaceAll(raw, "\r\n", "\n"), "\n")
	i := 0
	for i < len(lines) {
		t := strings.TrimSpace(lines[i])
		if t == "" || strings.HasPrefix(t, "//") {
			i++
			continue
		}
		break
	}
	return strings.TrimSpace(strings.Join(lines[i:], "\n"))
}

func renderBriefing(
	u decomp.UnitEntry,
	clsName, srcPath, liftedPath, targetFile, srcBody string,
	callees, memRefs []string,
	syms map[string]SymbolEntry,
	classes map[string]decomp.ClassEntry,
	byVA map[string]decomp.UnitEntry,
) string {
	var sb strings.Builder
	fmt.Fprintf(&sb, "VA: %s (%dB) | SYMBOL: %s\n", u.VA, u.Size, u.Symbol)
	fmt.Fprintf(&sb, "TARGET_CPP: %s\n", targetFile)

	// RTTI hierarchy from build/classes.json
	if clsName != "" {
		if ci, ok := classes[clsName]; ok {
			sb.WriteString("\n--- RTTI_HIERARCHY ---\n")
			fmt.Fprintf(&sb, "Class: %s (vtable=%s, vmethods=%d)\n", ci.DemangledName, ci.VTableVA, len(ci.VirtualMethods))
			for _, b := range ci.BaseClasses {
				fmt.Fprintf(&sb, "  base +0x%X: %s\n", b.Offset, b.DemangledName)
			}
		}
		if hdr := readLiftedClassHeader(clsName); hdr != "" {
			sb.WriteString("\n--- KNOWN_STRUCT_FIELDS ---\n")
			sb.WriteString(hdr + "\n")
		}
	}

	// Known callees from lifted/symbols.json (or unitstore symbol fallback)
	if len(callees) > 0 {
		sb.WriteString("\n--- CALLEES ---\n")
		for _, c := range callees {
			if se, ok := syms[c]; ok {
				fmt.Fprintf(&sb, "  ext_%s: [LIFTED] %s | %s | %s\n",
					strings.TrimPrefix(c, "0x"), se.Name, se.Signature, se.Summary)
			} else if cu, ok := byVA[c]; ok {
				fmt.Fprintf(&sb, "  ext_%s: %s (%dB)\n",
					strings.TrimPrefix(c, "0x"), cu.Symbol, cu.Size)
			} else {
				fmt.Fprintf(&sb, "  ext_%s: <external>\n",
					strings.TrimPrefix(c, "0x"))
			}
		}
	}

	// Referenced .rdata/.data constants decoded from endorphin.exe
	if len(memRefs) > 0 {
		sb.WriteString("\n--- RDATA_CONSTANTS ---\n")
		for _, m := range memRefs {
			_, mU32, err := normVA(m)
			if err != nil {
				continue
			}
			desc := decodeMemRef(mU32)
			if desc == "" {
				desc = "(global)"
			}
			fmt.Fprintf(&sb, "  mem_%s: %s\n", strings.TrimPrefix(m, "0x"), desc)
		}
	}

	// Cached disassembly if present; omit redundant __asm SRC_BODY when disassembly is available.
	disasm := ""
	cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
	if b, err := os.ReadFile(cachePath); err == nil {
		disasm = stripDisasmHeader(string(b))
	}
	isAsmSrc := strings.Contains(srcBody, "__asm") || strings.Contains(srcBody, "naked")
	if srcBody != "" && (disasm == "" || !isAsmSrc) {
		sb.WriteString("\n--- SRC_BODY ---\n")
		sb.WriteString(srcBody + "\n")
	}
	if disasm != "" {
		sb.WriteString("\n--- DISASSEMBLY ---\n")
		sb.WriteString(disasm + "\n")
	}

	return sb.String()
}

// ---- check -----------------------------------------------------------------------------------------------

func cmdCheck(args []string) {
	fs := flag.NewFlagSet("check", flag.ExitOnError)
	model := fs.String("model", "", "Model@effort identifier (or LIFT_MODEL / DECOMP_MODEL env)")
	dryRun := fs.Bool("dry-run", false, "Validate and compile-check without merging or committing")
	noCommit := fs.Bool("no-commit", false, "Merge and update ledger/headers without running git commit")
	noExec := fs.Bool("no-exec", false, "Skip native 32-bit differential execution check for eligible leaf functions")

	var vaArg string
	var flagArgs []string
	for i := 0; i < len(args); i++ {
		a := args[i]
		if strings.HasPrefix(a, "-") {
			flagArgs = append(flagArgs, a)
			if (a == "--model" || a == "-model") && i+1 < len(args) {
				i++
				flagArgs = append(flagArgs, args[i])
			}
		} else if vaArg == "" {
			vaArg = a
		}
	}
	_ = fs.Parse(flagArgs)
	if vaArg == "" {
		fmt.Fprintln(os.Stderr, "usage: liftwork check <VA> [--model <model@effort>] [--dry-run] [--no-commit]")
		os.Exit(2)
	}
	va, _, err := normVA(vaArg)
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork check: %v\n", err)
		os.Exit(1)
	}
	liftedBy := strings.TrimSpace(*model)
	if liftedBy == "" {
		liftedBy = strings.TrimSpace(os.Getenv("LIFT_MODEL"))
	}
	if liftedBy == "" {
		liftedBy = strings.TrimSpace(os.Getenv("DECOMP_MODEL"))
	}
	if liftedBy == "" {
		liftedBy = "manual"
	}

	_, byVA, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork check: %v\n", err)
		os.Exit(1)
	}
	u, ok := byVA[va]
	if !ok {
		fmt.Fprintf(os.Stderr, "liftwork check: unit %s not found\n", va)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()
	srcPath := ""
	if sf := srcIdx[va]; sf != nil {
		srcPath = sf.SrcPath
	}
	liftedPath := liftedPathForSrc(srcPath)
	if srcPath == "" {
		liftedPath = filepath.ToSlash(filepath.Join(liftedRootDir, "misc", "fn_"+strings.TrimPrefix(va, "0x")+".cpp"))
	}

	wipPath := wipPathForVA(va)
	checkPath := wipPath
	usingWip := true
	if _, err := os.Stat(wipPath); err != nil {
		usingWip = false
		checkPath = liftedPath
		if _, err2 := os.Stat(checkPath); err2 != nil {
			fmt.Fprintf(os.Stderr, "liftwork check: neither %s nor %s exists\n", wipPath, liftedPath)
			os.Exit(1)
		}
	}

	rawBytes, err := os.ReadFile(checkPath)
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork check: reading %s: %v\n", checkPath, err)
		os.Exit(1)
	}
	rawSrc := string(rawBytes)

	// 1. Hard-reject __asm, __declspec(naked), _emit, TODO
	if err := validateLiftedSource(rawSrc); err != nil {
		recordLiftCheckRun(va, liftedBy, "reject:source")
		fmt.Fprintf(os.Stderr, "FAIL [validation] %s: %v\n", va, err)
		os.Exit(1)
	}

	// 2. Parse metadata tags (@name, @class, @summary, @field)
	meta, err := parseMetadata(rawSrc)
	if err != nil {
		recordLiftCheckRun(va, liftedBy, "reject:metadata")
		fmt.Fprintf(os.Stderr, "FAIL [metadata] %s: %v\n", va, err)
		os.Exit(1)
	}

	// 3. Static semantic equivalence check (callees, globals, undefined helpers, empty body)
	syms := readSymbolsJSON()
	semIssues := validateLiftedSemantics(rawSrc, u, srcIdx[va], byVA, syms)
	if errs := semanticErrors(semIssues); len(errs) > 0 {
		recordLiftCheckRun(va, liftedBy, "reject:semantics")
		for _, e := range errs {
			fmt.Fprintf(os.Stderr, "FAIL [%s] %s: %s\n", e.Code, va, e.Message)
		}
		os.Exit(1)
	}
	for _, is := range semIssues {
		if is.Severity == "warn" {
			fmt.Fprintf(os.Stderr, "WARN [%s] %s: %s\n", is.Code, va, is.Message)
		}
	}

	// 4. Compile check with native g++ / clang++ (-c -o /dev/null)
	compOut, err := syntaxCheckCpp(checkPath)
	if err != nil {
		recordLiftCheckRun(va, liftedBy, "reject:compile")
		fmt.Fprintf(os.Stderr, "FAIL [compile] %s (%s):\n%s\n", va, checkPath, compOut)
		os.Exit(1)
	}

	// 5. Native 32-bit differential execution check for eligible pure leaf functions
	if !*noExec {
		res := runDiffExecVerify(va, rawSrc, u, srcIdx[va], 32)
		if res.Status == "fail" {
			recordLiftCheckRun(va, liftedBy, "reject:diff")
			fmt.Fprintf(os.Stderr, "FAIL [diff-exec] %s: %s (%s)\n", va, res.Reason, res.Details)
			os.Exit(1)
		}
	}

	if *dryRun {
		recordLiftCheckRun(va, liftedBy, "pass")
		fmt.Printf("DRY-RUN PASS: %s -> %s\n", va, meta.Name)
		fmt.Printf("  class:     %s\n", meta.Class)
		fmt.Printf("  signature: %s\n", meta.Signature)
		fmt.Printf("  summary:   %s\n", meta.Summary)
		fmt.Printf("  fields:    %d\n", len(meta.Fields))
		return
	}

	entry := LiftEntry{
		VA:         va,
		Size:       u.Size,
		OrigSymbol: u.Symbol,
		SrcPath:    srcPath,
		LiftedPath: liftedPath,
		Name:       meta.Name,
		Class:      meta.Class,
		Signature:  meta.Signature,
		Summary:    meta.Summary,
		Fields:     meta.Fields,
		Status:     "lifted",
		LiftedBy:   liftedBy,
		LiftedAt:   time.Now().UTC().Format(time.RFC3339),
	}

	var mergeErr error
	worklock.With(func() {
		if usingWip {
			origBytes, origErr := os.ReadFile(liftedPath)
			rollback := func() {
				if origErr == nil {
					_ = writeFileAtomic(liftedPath, origBytes, 0o644)
				} else {
					_ = os.Remove(liftedPath)
				}
			}
			if err := mergeLiftedFile(wipPath, liftedPath, va); err != nil {
				rollback()
				mergeErr = fmt.Errorf("merging %s into %s: %w", wipPath, liftedPath, err)
				return
			}
			// Re-verify the merged destination file compiles cleanly; roll back on failure
			// so a broken merge can never poison liftedPath for subsequent workers.
			if out, err := syntaxCheckCpp(liftedPath); err != nil {
				rollback()
				mergeErr = fmt.Errorf("merged file %s failed compile check:\n%s", liftedPath, out)
				return
			}
		}
		if err := writeLiftEntry(entry); err != nil {
			mergeErr = fmt.Errorf("writing ledger: %w", err)
			return
		}
		if _, _, _, err := rebuildStructsAndSymbols(); err != nil {
			mergeErr = fmt.Errorf("rebuilding structs/symbols: %w", err)
			return
		}
		if usingWip {
			_ = os.Remove(wipPath)
		}
		if !*noCommit {
			commitLifted(entry)
		}
	})
	if mergeErr != nil {
		recordLiftCheckRun(va, liftedBy, "reject:merge")
		fmt.Fprintf(os.Stderr, "FAIL [merge] %s: %v\n", va, mergeErr)
		os.Exit(1)
	}

	recordLiftCheckRun(va, liftedBy, "pass")
	fmt.Printf("LIFTED %s -> %s (%d fields) [%s]\n", va, entry.Name, len(entry.Fields), entry.LiftedBy)
}

func coAuthorForModel(model string) string {
	m := strings.ToLower(strings.TrimSpace(model))
	switch {
	case strings.Contains(m, "gemini") || strings.Contains(m, "agy") || strings.Contains(m, "antigravity"):
		return "Co-authored-by: Antigravity <noreply@google.com>"
	case strings.Contains(m, "claude") || strings.Contains(m, "haiku") || strings.Contains(m, "sonnet") || strings.Contains(m, "opus"):
		return "Co-authored-by: Claude <noreply@anthropic.com>"
	default:
		return ""
	}
}

func commitLifted(e LiftEntry) {
	paths := []string{e.LiftedPath, liftLedgerPath(e.VA), symbolsPath}
	seenCls := map[string]bool{}
	for _, f := range e.Fields {
		cls := f.Class
		if cls == "?" || strings.Trim(decomp.SanitizeFilename(cls), "_.") == "" {
			cls = "Unknown"
		}
		if cls != "" && !seenCls[cls] {
			seenCls[cls] = true
			p := filepath.Join(liftedIncDir, decomp.SanitizeFilename(cls)+".h")
			if _, err := os.Stat(p); err == nil {
				paths = append(paths, p)
			}
		}
	}
	if err := exec.Command("git", append([]string{"add", "--"}, paths...)...).Run(); err != nil {
		fmt.Fprintf(os.Stderr, "[warn] git add failed (sandboxed .git?): %v\n", err)
		return
	}
	if exec.Command("git", "diff", "--cached", "--quiet").Run() == nil {
		return
	}
	msg := fmt.Sprintf("Lift %s (%s) [model: %s]", e.VA, e.Name, e.LiftedBy)
	if trailer := coAuthorForModel(e.LiftedBy); trailer != "" {
		msg += "\n\n" + trailer
	}
	if out, err := exec.Command("git", "commit", "-m", msg).CombinedOutput(); err != nil {
		fmt.Fprintf(os.Stderr, "[warn] git commit skipped/failed: %s\n", strings.TrimSpace(string(out)))
	}
}

// ---- skip ------------------------------------------------------------------------------------------------

func cmdSkip(args []string) {
	if len(args) < 2 {
		fmt.Fprintln(os.Stderr, "usage: liftwork skip <VA> \"<reason>\"")
		os.Exit(2)
	}
	va, _, err := normVA(args[0])
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork skip: %v\n", err)
		os.Exit(1)
	}
	reason := strings.TrimSpace(strings.Join(args[1:], " "))
	_, byVA, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork skip: %v\n", err)
		os.Exit(1)
	}
	u := byVA[va]
	srcIdx := getSrcIndex()
	srcPath := ""
	if sf := srcIdx[va]; sf != nil {
		srcPath = sf.SrcPath
	}
	entry := LiftEntry{
		VA:         va,
		Size:       u.Size,
		OrigSymbol: u.Symbol,
		SrcPath:    srcPath,
		LiftedPath: liftedPathForSrc(srcPath),
		Status:     "skipped",
		SkipReason: reason,
		LiftedAt:   time.Now().UTC().Format(time.RFC3339),
	}
	worklock.With(func() {
		if err := writeLiftEntry(entry); err != nil {
			fmt.Fprintf(os.Stderr, "liftwork skip: %v\n", err)
			os.Exit(1)
		}
		_ = os.Remove(wipPathForVA(va))
	})
	fmt.Printf("SKIPPED %s: %s\n", va, reason)
}

// ---- merge-structs ---------------------------------------------------------------------------------------

func cmdMergeStructs(args []string) {
	var syms, hdrs, conflicts int
	var err error
	worklock.With(func() {
		syms, hdrs, conflicts, err = rebuildStructsAndSymbols()
	})
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork merge-structs: %v\n", err)
		os.Exit(1)
	}
	fmt.Printf("Rebuilt %s (%d symbols) and %d class headers in %s (offset conflicts: %d)\n",
		symbolsPath, syms, hdrs, liftedIncDir, conflicts)
}

// ---- status ----------------------------------------------------------------------------------------------

func cmdStatus(args []string) {
	fs := flag.NewFlagSet("status", flag.ExitOnError)
	scope := fs.String("scope", "all", "Scope filter for detailed view")
	_ = fs.Parse(args)

	units, _, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork status: %v\n", err)
		os.Exit(1)
	}
	lifted, err := readAllLiftEntries()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork status: %v\n", err)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()

	var (
		totalMatched, asmTotal, asmRemaining int
		liftedCount, skippedCount, namedCount, fieldCount int
		liftedBytes, asmTotalBytes, asmRemBytes uint64
		coreAsmTotal, coreLifted int
		coreAsmBytes, coreLiftedBytes uint64
		byModel = map[string]int{}
	)

	for _, u := range units {
		if !decomp.IsCompleted(u.Status) {
			continue
		}
		sf := srcIdx[u.VA]
		if sf == nil {
			continue
		}
		if *scope != "all" && !matchesScope(*scope, sf.SrcPath, u.Symbol) {
			continue
		}
		totalMatched++
		isCore := matchesScope("core", sf.SrcPath, u.Symbol)
		le, hasLE := lifted[u.VA]
		isLifted := hasLE && le.Status == "lifted"
		isSkipped := hasLE && le.Status == "skipped"

		if sf.HasAsm {
			asmTotal++
			asmTotalBytes += uint64(u.Size)
			if isCore {
				coreAsmTotal++
				coreAsmBytes += uint64(u.Size)
			}
			if !isLifted {
				asmRemaining++
				asmRemBytes += uint64(u.Size)
			}
		}
		if isLifted {
			liftedCount++
			liftedBytes += uint64(u.Size)
			if isCore {
				coreLifted++
				coreLiftedBytes += uint64(u.Size)
			}
			if le.Name != "" {
				namedCount++
			}
			fieldCount += len(le.Fields)
			m := le.LiftedBy
			if m == "" {
				m = "unknown"
			}
			byModel[m]++
		} else if isSkipped {
			skippedCount++
		}
	}

	pct := func(a, b uint64) float64 {
		if b == 0 {
			return 0
		}
		return float64(a) * 100.0 / float64(b)
	}

	fmt.Println("=== Endorphin De-ASM & Lift Scoreboard ===")
	fmt.Printf("Matched funcs in src/: %d (with __asm/naked: %d, %d bytes)\n", totalMatched, asmTotal, asmTotalBytes)
	fmt.Printf("Lifted functions:      %d / %d asm (%.2f%%) | %d / %d bytes (%.2f%%)\n",
		liftedCount, asmTotal, pct(uint64(liftedCount), uint64(asmTotal)),
		liftedBytes, asmTotalBytes, pct(liftedBytes, asmTotalBytes))
	fmt.Printf("Remaining __asm:       %d funcs (%d bytes) | Skipped: %d\n", asmRemaining, asmRemBytes, skippedCount)
	fmt.Printf("Core scope progress:   %d / %d asm (%.2f%%) | %d / %d bytes (%.2f%%)\n",
		coreLifted, coreAsmTotal, pct(uint64(coreLifted), uint64(coreAsmTotal)),
		coreLiftedBytes, coreAsmBytes, pct(coreLiftedBytes, coreAsmBytes))
	fmt.Printf("Named functions:       %d | Recovered @field annotations: %d\n", namedCount, fieldCount)

	if len(byModel) > 0 {
		fmt.Println("\nModel Leaderboard:")
		type kv struct {
			k string
			v int
		}
		var rows []kv
		for k, v := range byModel {
			rows = append(rows, kv{k, v})
		}
		sort.Slice(rows, func(i, j int) bool {
			if rows[i].v != rows[j].v {
				return rows[i].v > rows[j].v
			}
			return rows[i].k < rows[j].k
		})
		for _, r := range rows {
			fmt.Printf("  %-32s %d\n", r.k, r.v)
		}
	}
}

// ---- is-lifted / commit-pending / clean ------------------------------------------------------------------

func cmdIsLifted(args []string) {
	if len(args) < 1 {
		os.Exit(2)
	}
	va, _, err := normVA(args[0])
	if err != nil {
		os.Exit(1)
	}
	e, err := readLiftEntry(va)
	if err == nil && e.Status == "lifted" {
		os.Exit(0)
	}
	os.Exit(1)
}

func cmdCommitPending(args []string) {
	worklock.With(func() {
		if len(args) >= 1 {
			va, _, err := normVA(args[0])
			if err != nil {
				return
			}
			e, err := readLiftEntry(va)
			if err != nil || e.Status != "lifted" {
				return
			}
			commitLifted(*e)
			return
		}
		out, err := exec.Command("git", "status", "--porcelain", "--", liftLedgerDir).Output()
		if err != nil || strings.TrimSpace(string(out)) == "" {
			return
		}
		var pending []LiftEntry
		for _, line := range strings.Split(string(out), "\n") {
			if len(line) < 4 {
				continue
			}
			p := strings.TrimSpace(line[3:])
			if !strings.HasSuffix(p, ".json") {
				continue
			}
			base := strings.TrimSuffix(filepath.Base(p), ".json")
			va, _, err := normVA(base)
			if err != nil {
				continue
			}
			e, err := readLiftEntry(va)
			if err != nil || e.Status != "lifted" {
				continue
			}
			pending = append(pending, *e)
		}
		sort.Slice(pending, func(i, j int) bool {
			if pending[i].LiftedAt != pending[j].LiftedAt {
				return pending[i].LiftedAt < pending[j].LiftedAt
			}
			return pending[i].VA < pending[j].VA
		})
		for _, e := range pending {
			commitLifted(e)
		}
	})
}

func cmdClean(args []string) {
	if len(args) >= 1 {
		va, _, err := normVA(args[0])
		if err != nil {
			fmt.Fprintf(os.Stderr, "liftwork clean: %v\n", err)
			os.Exit(1)
		}
		p := wipPathForVA(va)
		if err := os.Remove(p); err == nil {
			fmt.Printf("Removed %s\n", p)
		}
		return
	}
	entries, err := os.ReadDir(liftedWipDir)
	if err != nil {
		fmt.Println("Cleaned 0 WIP files.")
		return
	}
	removed := 0
	for _, e := range entries {
		if e.IsDir() || !strings.HasSuffix(e.Name(), ".cpp") {
			continue
		}
		if err := os.Remove(filepath.Join(liftedWipDir, e.Name())); err == nil {
			removed++
		}
	}
	// Remove empty wip directory if desired? Keep or ignore; leaving empty dir is fine.
	fmt.Printf("Cleaned %d WIP file(s) from %s.\n", removed, liftedWipDir)
}

// Keep unused strconv import satisfied if needed
var _ = strconv.Atoi
