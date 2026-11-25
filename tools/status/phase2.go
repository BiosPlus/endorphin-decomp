package main

import (
	"encoding/json"
	"io/fs"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"sort"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

// Phase2Options configures filesystem inputs for Phase 2 status collection (defaults to repo paths).
type Phase2Options struct {
	SrcDir          string
	LiftedLedgerDir string
	SymbolsPath     string
	IncludeDir      string
	UseGitLog       bool
}

func defaultPhase2Options() Phase2Options {
	return Phase2Options{
		SrcDir:          "src",
		LiftedLedgerDir: filepath.Join("build", "lifted"),
		SymbolsPath:     filepath.Join("lifted", "symbols.json"),
		IncludeDir:      filepath.Join("lifted", "include"),
		UseGitLog:       true,
	}
}

// FieldSpec mirrors build/lifted/<shard>/<VA>.json field annotations.
type FieldSpec struct {
	Class  string `json:"class"`
	Offset string `json:"offset"`
	Type   string `json:"type"`
	Name   string `json:"name"`
}

// LiftEntry mirrors build/lifted/<shard>/<VA>.json records produced by tools/liftwork.
type LiftEntry struct {
	VA         string      `json:"va"`
	Size       uint32      `json:"size"`
	OrigSymbol string      `json:"orig_symbol"`
	SrcPath    string      `json:"src_path"`
	LiftedPath string      `json:"lifted_path"`
	Name       string      `json:"name,omitempty"`
	Class      string      `json:"class,omitempty"`
	Signature  string      `json:"signature,omitempty"`
	Summary    string      `json:"summary,omitempty"`
	Fields     []FieldSpec `json:"fields,omitempty"`
	Status     string      `json:"status"` // "lifted" | "skipped"
	SkipReason string      `json:"skip_reason,omitempty"`
	LiftedBy   string      `json:"lifted_by,omitempty"`
	LiftedAt   string      `json:"lifted_at,omitempty"`
}

// SymbolEntry mirrors lifted/symbols.json entries keyed by normalized VA.
type SymbolEntry struct {
	Name       string `json:"name"`
	Class      string `json:"class,omitempty"`
	Signature  string `json:"signature,omitempty"`
	Summary    string `json:"summary,omitempty"`
	LiftedPath string `json:"lifted_path,omitempty"`
}

// LiftScopeStats aggregates Phase 2 lifting and portable C++ coverage for a scope (all or core).
type LiftScopeStats struct {
	TotalFuncs          int
	TotalBytes          uint64
	AlreadyPureCppFuncs int
	AlreadyPureCppBytes uint64
	AsmFuncs            int
	AsmBytes            uint64
	LiftedFuncs         int
	LiftedBytes         uint64
	LiftedAsmFuncs      int
	LiftedAsmBytes      uint64
	RemainAsmFuncs      int
	RemainAsmBytes      uint64
	SkippedFuncs        int
	SkippedBytes        uint64
	PortableCppFuncs    int
	PortableCppBytes    uint64
}

// SubsystemStats tracks Phase 2 progress for a single logical subsystem.
type SubsystemStats struct {
	Name       string
	Category   string
	IsCore     bool
	Stats      LiftScopeStats
	NamedFuncs int
	FieldCount int
}

// LiftModelStats aggregates Phase 2 lifting output per model (lifted_by).
type LiftModelStats struct {
	Model           string
	LiftedFuncs     int
	LiftedBytes     uint64
	FieldsRecovered int
	NamedFuncs      int
	Sizes           []uint32
}

func (m LiftModelStats) sizeStats() (avg float64, median, largest uint32) {
	if len(m.Sizes) == 0 {
		return 0, 0, 0
	}
	sorted := append([]uint32(nil), m.Sizes...)
	sort.Slice(sorted, func(i, j int) bool { return sorted[i] < sorted[j] })
	return float64(m.LiftedBytes) / float64(len(sorted)), sorted[len(sorted)/2], sorted[len(sorted)-1]
}

// ClassFieldSummary summarizes recovered fields for a single class.
type ClassFieldSummary struct {
	Class        string
	HeaderFile   string
	FieldCount   int
	UniqueFields int
}

// LiftSummaryRow captures a single lifted function for dashboard display.
type LiftSummaryRow struct {
	VA         string
	Name       string
	Class      string
	Signature  string
	Summary    string
	LiftedPath string
	Size       uint32
	Fields     int
	Model      string
	LiftedAt   string
}

// Phase2Stats holds all collected Phase 2 (Portable C++ Lift & Struct/Naming Recovery) metrics.
type Phase2Stats struct {
	ScopeAll                LiftScopeStats
	ScopeCore               LiftScopeStats
	InScopeUnitsTotal       int
	InitialRTTINamedFuncs   int
	NewlyNamedFromAnonFuncs int // previously unnamed (sub_/fn_) functions now given a name
	RenamedRTTIFuncs        int // previously RTTI-named functions given a more specific lifted name
	TotalNamedFuncs         int // always == InitialRTTINamedFuncs + NewlyNamedFromAnonFuncs
	SymbolsCataloged        int
	TotalFieldAnnotations   int
	CoreFieldAnnotations    int
	CoreNamedFuncs          int
	UniqueFields            int
	ClassesWithFields       int
	GeneratedHeaders        int
	Subsystems              []SubsystemStats
	OtherSubsystem          SubsystemStats
	Leaderboard             []LiftModelStats
	Timeline                ChartSeries
	ClassFields             []ClassFieldSummary
	RecentLifts             []LiftSummaryRow
}

type srcFuncInfo struct {
	VA      string
	RelPath string // slash-separated relative to srcRoot
	HasAsm  bool
}

var (
	p2MarkerLineRe = regexp.MustCompile(`^//\s*\[(0x[0-9A-Fa-f]{8})\]`)
	p2FnDefRe      = regexp.MustCompile(`(?i)\bextern\s+"C"\s+.*\bfn_([0-9A-Fa-f]{8})\s*\(`)
	p2AsmBodyRe    = regexp.MustCompile(`\b__asm\b|__declspec\s*\(\s*naked\s*\)|\b_emit\b`)
)

type subsystemDef struct {
	Name     string
	Category string
	Patterns []string
}

// coreSubsystemDefs mirrors coreScopePatterns in tools/liftwork/scan.go, grouped by subsystem.
var coreSubsystemDefs = []subsystemDef{
	// Exporters & IO
	{Name: "BVHIO", Category: "Exporters & IO", Patterns: []string{"BVHIO"}},
	{Name: "AcclaimIO / Acclaim2*", Category: "Exporters & IO", Patterns: []string{"AcclaimIO", "Acclaim2*"}},
	{Name: "FBXIO", Category: "Exporters & IO", Patterns: []string{"FBXIO"}},
	{Name: "NMFileIO", Category: "Exporters & IO", Patterns: []string{"NMFileIO"}},
	{Name: "OBJIO", Category: "Exporters & IO", Patterns: []string{"OBJIO"}},
	{Name: "CDLCharacterIO", Category: "Exporters & IO", Patterns: []string{"CDLCharacterIO"}},
	{Name: "CSMMotionIO", Category: "Exporters & IO", Patterns: []string{"CSMMotionIO"}},
	{Name: "NMCIO", Category: "Exporters & IO", Patterns: []string{"NMCIO"}},
	{Name: "ExportDialog / Unavailable", Category: "Exporters & IO", Patterns: []string{"ExportDialog", "ExportUnavailableDialog"}},
	// Physics, Sim & Engine Core
	{Name: "MdtArthur", Category: "Physics, Sim & Engine Core", Patterns: []string{"MdtArthur"}},
	{Name: "RuntimeEngine", Category: "Physics, Sim & Engine Core", Patterns: []string{"RuntimeEngine"}},
	{Name: "Geometry", Category: "Physics, Sim & Engine Core", Patterns: []string{"Geometry"}},
	{Name: "Sensors", Category: "Physics, Sim & Engine Core", Patterns: []string{"Sensors"}},
	{Name: "StateMachine", Category: "Physics, Sim & Engine Core", Patterns: []string{"StateMachine"}},
	{Name: "Interpolator", Category: "Physics, Sim & Engine Core", Patterns: []string{"Interpolator"}},
	{Name: "ExprParser", Category: "Physics, Sim & Engine Core", Patterns: []string{"ExprParser"}},
	{Name: "NMData", Category: "Physics, Sim & Engine Core", Patterns: []string{"NMData"}},
	{Name: "Primitives", Category: "Physics, Sim & Engine Core", Patterns: []string{"Primitives"}},
	{Name: "NMCamera", Category: "Physics, Sim & Engine Core", Patterns: []string{"NMCamera"}},
	{Name: "Chromosome", Category: "Physics, Sim & Engine Core", Patterns: []string{"Chromosome"}},
	{Name: "MultiTrackView", Category: "Physics, Sim & Engine Core", Patterns: []string{"MultiTrackView"}},
}

func scanSrcDirForStatus(srcRoot string) map[string]*srcFuncInfo {
	out := make(map[string]*srcFuncInfo, 25000)
	if srcRoot == "" {
		return out
	}
	if _, err := os.Stat(srcRoot); err != nil {
		return out
	}
	cleanRoot := filepath.ToSlash(filepath.Clean(srcRoot))
	_ = filepath.WalkDir(srcRoot, func(path string, d fs.DirEntry, err error) error {
		if err != nil {
			return nil
		}
		slash := filepath.ToSlash(path)
		if d.IsDir() {
			if slash == cleanRoot+"/wip" || strings.HasPrefix(slash, cleanRoot+"/wip/") || strings.HasSuffix(slash, "/wip") {
				return filepath.SkipDir
			}
			return nil
		}
		if !strings.HasSuffix(strings.ToLower(path), ".cpp") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		rel := slash
		if relPath, err := filepath.Rel(srcRoot, path); err == nil {
			rel = filepath.ToSlash(relPath)
		}
		parseSrcFileForStatus(rel, string(b), out)
		return nil
	})
	return out
}

func parseSrcFileForStatus(relPath, content string, out map[string]*srcFuncInfo) {
	lines := strings.Split(strings.ReplaceAll(content, "\r\n", "\n"), "\n")

	type span struct {
		va    string
		start int
	}
	var spans []span
	seenStart := map[string]bool{}

	for i, l := range lines {
		t := strings.TrimSpace(l)
		if m := p2MarkerLineRe.FindStringSubmatch(t); len(m) == 2 {
			va := unitstore.NormVA(m[1])
			spans = append(spans, span{va: va, start: i})
			seenStart[va] = true
			continue
		}
		if m := p2FnDefRe.FindStringSubmatch(t); len(m) == 2 {
			va := unitstore.NormVA("0x" + m[1])
			if len(spans) > 0 && spans[len(spans)-1].va == va && i-spans[len(spans)-1].start <= 4 {
				continue
			}
			if !seenStart[va] {
				spans = append(spans, span{va: va, start: i})
				seenStart[va] = true
			}
		}
	}

	for idx, sp := range spans {
		end := len(lines)
		if idx+1 < len(spans) {
			end = spans[idx+1].start
		}
		body := strings.TrimSpace(strings.Join(lines[sp.start:end], "\n"))
		out[sp.va] = &srcFuncInfo{
			VA:      sp.va,
			RelPath: filepath.ToSlash(relPath),
			HasAsm:  p2AsmBodyRe.MatchString(body),
		}
	}
}

func matchPatternStatus(pat, target string) bool {
	if target == "" || pat == "" {
		return false
	}
	if strings.ContainsAny(pat, "*?[") {
		if ok, _ := filepath.Match(strings.ToLower(pat), strings.ToLower(target)); ok {
			return true
		}
		if strings.HasSuffix(pat, "*") {
			pfx := strings.ToLower(strings.TrimSuffix(pat, "*"))
			if strings.HasPrefix(strings.ToLower(target), pfx) {
				return true
			}
		}
		return false
	}
	lp, lt := strings.ToLower(pat), strings.ToLower(target)
	if lt == lp {
		return true
	}
	return strings.HasPrefix(lt, lp+"::") || strings.HasPrefix(lt, lp+"/") || strings.HasPrefix(lt, lp+"_")
}

func matchesPatternsStatus(patterns []string, relPath, symbol string) bool {
	rel := strings.TrimPrefix(filepath.ToSlash(relPath), "src/")
	base := strings.TrimSuffix(filepath.Base(rel), ".cpp")
	topDir := ""
	if i := strings.IndexByte(rel, '/'); i != -1 {
		topDir = rel[:i]
	}
	symClass := symbol
	if i := strings.LastIndex(symbol, "::"); i != -1 {
		symClass = symbol[:i]
	}
	for _, pat := range patterns {
		if matchPatternStatus(pat, base) || matchPatternStatus(pat, topDir) || matchPatternStatus(pat, rel) || matchPatternStatus(pat, symClass) || matchPatternStatus(pat, symbol) {
			return true
		}
	}
	return false
}

func classifySubsystem(relPath, symbol string) int {
	for idx, def := range coreSubsystemDefs {
		if matchesPatternsStatus(def.Patterns, relPath, symbol) {
			return idx
		}
	}
	return -1
}

func isPlaceholderSymbol(sym string) bool {
	s := strings.TrimSpace(sym)
	if s == "" {
		return true
	}
	ls := strings.ToLower(s)
	return strings.HasPrefix(ls, "sub_") || strings.HasPrefix(ls, "fn_")
}

func readLiftEntriesDir(dir string) map[string]LiftEntry {
	out := make(map[string]LiftEntry)
	if dir == "" {
		return out
	}
	if _, err := os.Stat(dir); err != nil {
		return out
	}
	_ = filepath.WalkDir(dir, func(path string, d fs.DirEntry, err error) error {
		if err != nil || d.IsDir() || !strings.HasSuffix(strings.ToLower(d.Name()), ".json") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		var e LiftEntry
		if err := json.Unmarshal(b, &e); err != nil {
			return nil
		}
		if e.VA != "" {
			e.VA = unitstore.NormVA(e.VA)
			out[e.VA] = e
		}
		return nil
	})
	return out
}

func readSymbolsFile(path string) map[string]SymbolEntry {
	out := make(map[string]SymbolEntry)
	if path == "" {
		return out
	}
	b, err := os.ReadFile(path)
	if err != nil {
		return out
	}
	raw := make(map[string]SymbolEntry)
	if err := json.Unmarshal(b, &raw); err != nil {
		return out
	}
	for k, v := range raw {
		out[unitstore.NormVA(k)] = v
	}
	return out
}

func countGeneratedHeaders(dir string) int {
	if dir == "" {
		return 0
	}
	entries, err := os.ReadDir(dir)
	if err != nil {
		return 0
	}
	n := 0
	for _, e := range entries {
		if e.IsDir() {
			continue
		}
		name := e.Name()
		if strings.HasSuffix(strings.ToLower(name), ".h") && !strings.EqualFold(name, "lift_compat.h") {
			n++
		}
	}
	return n
}

func extractGitLiftTimestamps() map[string]string {
	out, err := exec.Command("git", "log", "--reverse", "--grep=^Lift 0x", "--pretty=format:%cI|%s").Output()
	if err != nil {
		return nil
	}
	byVA := make(map[string]string)
	trimmed := strings.TrimSpace(string(out))
	if trimmed == "" {
		return byVA
	}
	for _, line := range strings.Split(trimmed, "\n") {
		parts := strings.SplitN(line, "|", 2)
		if len(parts) != 2 {
			continue
		}
		t, err := time.Parse(time.RFC3339, strings.TrimSpace(parts[0]))
		if err != nil {
			continue
		}
		utcISO := t.UTC().Format(time.RFC3339)
		for _, m := range gitMatchVARe.FindAllString(parts[1], -1) {
			byVA[unitstore.NormVA(m)] = utcISO
		}
	}
	return byVA
}

func addToScopeStats(s *LiftScopeStats, size uint64, hasAsm, isLifted, isSkipped bool) {
	s.TotalFuncs++
	s.TotalBytes += size
	if hasAsm {
		s.AsmFuncs++
		s.AsmBytes += size
		if isLifted {
			s.LiftedAsmFuncs++
			s.LiftedAsmBytes += size
		} else {
			s.RemainAsmFuncs++
			s.RemainAsmBytes += size
		}
	} else {
		s.AlreadyPureCppFuncs++
		s.AlreadyPureCppBytes += size
	}
	if isLifted {
		s.LiftedFuncs++
		s.LiftedBytes += size
	} else if isSkipped {
		s.SkippedFuncs++
		s.SkippedBytes += size
	}
	if !hasAsm || isLifted {
		s.PortableCppFuncs++
		s.PortableCppBytes += size
	}
}

// collectPhase2Stats computes all Phase 2 metrics in a single coherent pass over in-scope units
// backed by src/, matching `liftwork status` so scope totals and leaderboards always reconcile.
func collectPhase2Stats(units []decomp.UnitEntry, mfcClasses map[string]bool, opts Phase2Options) Phase2Stats {
	srcIdx := scanSrcDirForStatus(opts.SrcDir)
	lifted := readLiftEntriesDir(opts.LiftedLedgerDir)
	syms := readSymbolsFile(opts.SymbolsPath)

	var gitLiftTS map[string]string
	if opts.UseGitLog && len(lifted) > 0 {
		for _, e := range lifted {
			if e.Status == "lifted" && strings.TrimSpace(e.LiftedAt) == "" {
				gitLiftTS = extractGitLiftTimestamps()
				break
			}
		}
	}

	stats := Phase2Stats{
		SymbolsCataloged: len(syms),
		GeneratedHeaders: countGeneratedHeaders(opts.IncludeDir),
		Subsystems:       make([]SubsystemStats, len(coreSubsystemDefs)),
		OtherSubsystem: SubsystemStats{
			Name:     "Other (Non-Core)",
			Category: "Non-Core",
			IsCore:   false,
		},
	}
	for i, def := range coreSubsystemDefs {
		stats.Subsystems[i] = SubsystemStats{
			Name:     def.Name,
			Category: def.Category,
			IsCore:   true,
		}
	}

	modelMap := make(map[string]*LiftModelStats)
	uniqueFieldKeys := make(map[string]bool)
	type classAgg struct {
		count  int
		unique map[string]bool
	}
	classMap := make(map[string]*classAgg)
	var events []TimelineEvent

	for _, u := range units {
		va := unitstore.NormVA(u.VA)
		u.VA = va
		if oos, _ := isOutOfScope(u, mfcClasses); oos || !decomp.IsCompleted(u.Status) {
			continue
		}
		stats.InScopeUnitsTotal++

		hasInitialName := !isPlaceholderSymbol(u.Symbol)
		if hasInitialName {
			stats.InitialRTTINamedFuncs++
		}

		le, hasLE := lifted[va]
		isLifted := hasLE && le.Status == "lifted"
		isSkipped := hasLE && le.Status == "skipped"

		liftedName := ""
		if isLifted {
			liftedName = strings.TrimSpace(le.Name)
		}
		if liftedName == "" {
			if se, ok := syms[va]; ok {
				liftedName = strings.TrimSpace(se.Name)
			}
		}
		hasLiftedName := !isPlaceholderSymbol(liftedName)
		if hasLiftedName {
			if !hasInitialName {
				stats.NewlyNamedFromAnonFuncs++
			} else if liftedName != u.Symbol {
				stats.RenamedRTTIFuncs++
			}
		}
		if hasInitialName || hasLiftedName {
			stats.TotalNamedFuncs++
		}

		sf := srcIdx[va]
		if sf == nil {
			continue
		}

		sz := uint64(u.Size)
		addToScopeStats(&stats.ScopeAll, sz, sf.HasAsm, isLifted, isSkipped)

		subIdx := classifySubsystem(sf.RelPath, u.Symbol)
		if subIdx >= 0 {
			addToScopeStats(&stats.ScopeCore, sz, sf.HasAsm, isLifted, isSkipped)
			addToScopeStats(&stats.Subsystems[subIdx].Stats, sz, sf.HasAsm, isLifted, isSkipped)
			if hasInitialName || hasLiftedName {
				stats.Subsystems[subIdx].NamedFuncs++
				stats.CoreNamedFuncs++
			}
			if isLifted {
				stats.Subsystems[subIdx].FieldCount += len(le.Fields)
				stats.CoreFieldAnnotations += len(le.Fields)
			}
		} else {
			addToScopeStats(&stats.OtherSubsystem.Stats, sz, sf.HasAsm, isLifted, isSkipped)
			if hasInitialName || hasLiftedName {
				stats.OtherSubsystem.NamedFuncs++
			}
			if isLifted {
				stats.OtherSubsystem.FieldCount += len(le.Fields)
			}
		}

		if !isLifted {
			continue
		}

		// Record leaderboard, struct fields, timeline, and recent lifts for this in-scope src/-backed lift.
		model := strings.TrimSpace(le.LiftedBy)
		if model == "" {
			model = "unknown"
		}
		ms, ok := modelMap[model]
		if !ok {
			ms = &LiftModelStats{Model: model}
			modelMap[model] = ms
		}
		ms.LiftedFuncs++
		ms.LiftedBytes += sz
		ms.FieldsRecovered += len(le.Fields)
		if !isPlaceholderSymbol(le.Name) {
			ms.NamedFuncs++
		}
		ms.Sizes = append(ms.Sizes, u.Size)

		stats.TotalFieldAnnotations += len(le.Fields)
		for _, f := range le.Fields {
			cls := strings.TrimSpace(f.Class)
			if cls == "" {
				continue
			}
			key := cls + "|" + strings.TrimSpace(f.Offset) + "|" + strings.TrimSpace(f.Type) + "|" + strings.TrimSpace(f.Name)
			uniqueFieldKeys[key] = true
			ca := classMap[cls]
			if ca == nil {
				ca = &classAgg{unique: make(map[string]bool)}
				classMap[cls] = ca
			}
			ca.count++
			ca.unique[key] = true
		}

		liftedAt := strings.TrimSpace(le.LiftedAt)
		if liftedAt == "" && gitLiftTS != nil {
			liftedAt = gitLiftTS[va]
		}
		name := liftedName
		if name == "" {
			name = u.Symbol
		}
		if ts, ok := parseFlexibleTimestamp(liftedAt); ok {
			events = append(events, TimelineEvent{
				UnixSec: ts.Unix(),
				Size:    u.Size,
				Fields:  len(le.Fields),
				Model:   model,
				Label:   va + " (" + name + ")",
			})
		}

		cls := strings.TrimSpace(le.Class)
		if cls == "" && strings.Contains(name, "::") {
			if idx := strings.LastIndex(name, "::"); idx != -1 {
				cls = name[:idx]
			}
		}
		stats.RecentLifts = append(stats.RecentLifts, LiftSummaryRow{
			VA:         va,
			Name:       name,
			Class:      cls,
			Signature:  le.Signature,
			Summary:    le.Summary,
			LiftedPath: le.LiftedPath,
			Size:       u.Size,
			Fields:     len(le.Fields),
			Model:      model,
			LiftedAt:   liftedAt,
		})
	}

	stats.UniqueFields = len(uniqueFieldKeys)
	stats.ClassesWithFields = len(classMap)

	for cls, ca := range classMap {
		stats.ClassFields = append(stats.ClassFields, ClassFieldSummary{
			Class:        cls,
			HeaderFile:   "lifted/include/" + decomp.SanitizeFilename(cls) + ".h",
			FieldCount:   ca.count,
			UniqueFields: len(ca.unique),
		})
	}
	sort.Slice(stats.ClassFields, func(i, j int) bool {
		if stats.ClassFields[i].UniqueFields != stats.ClassFields[j].UniqueFields {
			return stats.ClassFields[i].UniqueFields > stats.ClassFields[j].UniqueFields
		}
		return stats.ClassFields[i].Class < stats.ClassFields[j].Class
	})

	for _, ms := range modelMap {
		stats.Leaderboard = append(stats.Leaderboard, *ms)
	}
	sort.Slice(stats.Leaderboard, func(i, j int) bool {
		if stats.Leaderboard[i].LiftedFuncs != stats.Leaderboard[j].LiftedFuncs {
			return stats.Leaderboard[i].LiftedFuncs > stats.Leaderboard[j].LiftedFuncs
		}
		if stats.Leaderboard[i].LiftedBytes != stats.Leaderboard[j].LiftedBytes {
			return stats.Leaderboard[i].LiftedBytes > stats.Leaderboard[j].LiftedBytes
		}
		return stats.Leaderboard[i].Model < stats.Leaderboard[j].Model
	})

	sort.Slice(stats.RecentLifts, func(i, j int) bool {
		if stats.RecentLifts[i].LiftedAt != stats.RecentLifts[j].LiftedAt {
			return stats.RecentLifts[i].LiftedAt > stats.RecentLifts[j].LiftedAt
		}
		return stats.RecentLifts[i].VA < stats.RecentLifts[j].VA
	})

	stats.Timeline = buildChartSeries(events, stats.ScopeAll.RemainAsmBytes)
	return stats
}
