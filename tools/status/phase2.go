package main

import (
	"encoding/json"
	"fmt"
	"html"
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

// LiftEvent represents one timestamped Phase 2 lift for the velocity chart.
type LiftEvent struct {
	UnixSec    int64  `json:"t"`
	TimeISO    string `json:"iso"`
	VA         string `json:"va"`
	Name       string `json:"name"`
	OrigSymbol string `json:"orig"`
	Size       uint32 `json:"b"`
	Model      string `json:"m"`
	Fields     int    `json:"f"`
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
	NewlyInferredNamedFuncs int
	TotalNamedFuncs         int
	SymbolsCataloged        int
	TotalFieldAnnotations   int
	UniqueFields            int
	ClassesWithFields       int
	GeneratedHeaders        int
	Subsystems              []SubsystemStats
	OtherSubsystem          SubsystemStats
	Leaderboard             []LiftModelStats
	Events                  []LiftEvent
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

func collectPhase2Stats(units []decomp.UnitEntry, mfcClasses map[string]bool, opts Phase2Options) Phase2Stats {
	srcIdx := scanSrcDirForStatus(opts.SrcDir)
	lifted := readLiftEntriesDir(opts.LiftedLedgerDir)
	syms := readSymbolsFile(opts.SymbolsPath)

	var gitLiftTS map[string]string
	if opts.UseGitLog && len(lifted) > 0 {
		needGit := false
		for _, e := range lifted {
			if e.Status == "lifted" && strings.TrimSpace(e.LiftedAt) == "" {
				needGit = true
				break
			}
		}
		if needGit {
			gitLiftTS = extractGitLiftTimestamps()
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

	unitByVA := make(map[string]decomp.UnitEntry, len(units))
	inScopeSeen := make(map[string]bool, len(units))

	for _, u := range units {
		va := unitstore.NormVA(u.VA)
		u.VA = va
		unitByVA[va] = u
		if oos, _ := isOutOfScope(u, mfcClasses); oos || !decomp.IsCompleted(u.Status) {
			continue
		}
		stats.InScopeUnitsTotal++
		inScopeSeen[va] = true

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
		if hasLiftedName && (!hasInitialName || liftedName != u.Symbol) {
			stats.NewlyInferredNamedFuncs++
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
			}
			if isLifted {
				stats.Subsystems[subIdx].FieldCount += len(le.Fields)
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
	}

	// Process lifted ledger entries for leaderboard, field recovery, timeline, and recent lifts.
	modelMap := make(map[string]*LiftModelStats)
	uniqueFieldKeys := make(map[string]bool)
	type classAgg struct {
		count  int
		unique map[string]bool
	}
	classMap := make(map[string]*classAgg)

	for va, le := range lifted {
		if le.Status != "lifted" {
			continue
		}
		u, hasUnit := unitByVA[va]
		sz := le.Size
		if sz == 0 && hasUnit {
			sz = u.Size
		}
		// If lifted entry corresponds to a VA not counted in src/ above (e.g. direct test fixture),
		// still include its naming/fields/model stats cleanly.
		if hasUnit && !inScopeSeen[va] {
			if !isPlaceholderSymbol(le.Name) {
				stats.NewlyInferredNamedFuncs++
				stats.TotalNamedFuncs++
			}
		}

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
		ms.LiftedBytes += uint64(sz)
		ms.FieldsRecovered += len(le.Fields)
		if !isPlaceholderSymbol(le.Name) {
			ms.NamedFuncs++
		}
		ms.Sizes = append(ms.Sizes, sz)

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
		name := strings.TrimSpace(le.Name)
		if name == "" {
			if se, ok := syms[va]; ok {
				name = se.Name
			}
		}
		if name == "" {
			name = le.OrigSymbol
		}
		if ts, ok := parseFlexibleTimestamp(liftedAt); ok {
			stats.Events = append(stats.Events, LiftEvent{
				UnixSec:    ts.Unix(),
				TimeISO:    ts.Format(time.RFC3339),
				VA:         va,
				Name:       name,
				OrigSymbol: le.OrigSymbol,
				Size:       sz,
				Model:      model,
				Fields:     len(le.Fields),
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
			Size:       sz,
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

	sort.Slice(stats.Events, func(i, j int) bool {
		if stats.Events[i].UnixSec != stats.Events[j].UnixSec {
			return stats.Events[i].UnixSec < stats.Events[j].UnixSec
		}
		return stats.Events[i].VA < stats.Events[j].VA
	})

	sort.Slice(stats.RecentLifts, func(i, j int) bool {
		if stats.RecentLifts[i].LiftedAt != stats.RecentLifts[j].LiftedAt {
			return stats.RecentLifts[i].LiftedAt > stats.RecentLifts[j].LiftedAt
		}
		return stats.RecentLifts[i].VA < stats.RecentLifts[j].VA
	})

	return stats
}

func renderPhase2CISummary(p2 Phase2Stats) string {
	var sb strings.Builder
	sb.WriteString("\n## Phase 2: Portable C++ Lifting & Struct Recovery\n\n")
	sb.WriteString(fmt.Sprintf("- **Core Scope ASM Lifted:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**)\n",
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes)))
	sb.WriteString(fmt.Sprintf("- **Full Binary ASM Lifted:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**)\n",
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
		p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes)))
	sb.WriteString(fmt.Sprintf("- **Total Portable C++ Coverage:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**) — `%d` pure-C++ baseline + `%d` lifted\n",
		p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
		p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes, pct(p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes),
		p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.LiftedAsmFuncs))
	sb.WriteString(fmt.Sprintf("- **Named Functions:** `%d / %d` (**%.2f%%**) — `%d` RTTI/initial + `%d` newly inferred\n",
		p2.TotalNamedFuncs, p2.InScopeUnitsTotal, pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal)),
		p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs))
	sb.WriteString(fmt.Sprintf("- **Recovered Struct Fields:** `%d` annotations (`%d` unique across `%d` classes) | `%d` symbols in `lifted/symbols.json`\n\n",
		p2.TotalFieldAnnotations, p2.UniqueFields, p2.ClassesWithFields, p2.SymbolsCataloged))

	sb.WriteString("| Core Subsystem | Category | Pure C++ | Lifted / ASM | ASM Lift % | Portable C++ % | Fields |\n")
	sb.WriteString("| :--- | :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, sub := range p2.Subsystems {
		if sub.Stats.TotalFuncs == 0 {
			continue
		}
		sb.WriteString(fmt.Sprintf("| **%s** | %s | %d | %d / %d | %.2f%% | %.2f%% | %d |\n",
			sub.Name, sub.Category,
			sub.Stats.AlreadyPureCppFuncs,
			sub.Stats.LiftedAsmFuncs, sub.Stats.AsmFuncs,
			pct(uint64(sub.Stats.LiftedAsmFuncs), uint64(sub.Stats.AsmFuncs)),
			pct(uint64(sub.Stats.PortableCppFuncs), uint64(sub.Stats.TotalFuncs)),
			sub.FieldCount))
	}
	sb.WriteString(fmt.Sprintf("| **Core Scope Total** | *All Core* | %d | %d / %d | %.2f%% | %.2f%% | %d |\n",
		p2.ScopeCore.AlreadyPureCppFuncs,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs,
		pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs)),
		p2.TotalFieldAnnotations))

	sb.WriteString("\n### Phase 2 Lift Leaderboard (by Model)\n\n")
	sb.WriteString("| Model | Lifted Funcs | Lifted Bytes | Share | Recovered Fields |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: |\n")
	if len(p2.Leaderboard) == 0 {
		sb.WriteString("| *(no lifted functions yet)* | 0 | 0 | 0.00% | 0 |\n")
	} else {
		totalLifted := p2.ScopeAll.LiftedFuncs
		if totalLifted == 0 {
			for _, m := range p2.Leaderboard {
				totalLifted += m.LiftedFuncs
			}
		}
		for _, m := range p2.Leaderboard {
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% | %d |\n",
				m.Model, m.LiftedFuncs, m.LiftedBytes, pct(uint64(m.LiftedFuncs), uint64(totalLifted)), m.FieldsRecovered))
		}
	}
	return sb.String()
}

func renderPhase2ChartPanel(p2 Phase2Stats) string {
	eventsJSON, err := json.Marshal(p2.Events)
	if err != nil {
		eventsJSON = []byte("[]")
	}

	var sb strings.Builder
	sb.WriteString(`    <div class="panel">
      <div class="chart-header">
        <div>
          <h2 style="margin:0;font-size:18px;">Phase 2 Lift Velocity &amp; Portable C++ Curve</h2>
          <div style="color:var(--muted);font-size:13px;margin-top:2px;">Tracks lifted <code>__asm</code>/naked functions, bytes converted, and struct fields recovered over time</div>
        </div>
        <div class="chart-controls">
          <div class="btn-group" id="p2-metric-group" role="group" aria-label="Phase 2 Metric">
            <button type="button" class="chart-btn active" data-p2metric="funcs">Lifted Funcs</button>
            <button type="button" class="chart-btn" data-p2metric="bytes">Lifted Bytes</button>
            <button type="button" class="chart-btn" data-p2metric="fields">Struct Fields</button>
          </div>
        </div>
      </div>
`)

	if len(p2.Events) == 0 {
		sb.WriteString(`      <div class="zero-state">
        <div class="zero-state-title">Ready for Phase 2 Lifting</div>
        <p>No lifted functions recorded in <code>build/lifted/</code> yet. Run <code>go run ./tools/liftwork next</code> or <code>go run ./tools/lift</code> to begin converting <code>__asm</code>/naked stubs into portable C++ and recovering struct layouts.</p>
      </div>
    </div>
`)
		return sb.String()
	}

	sb.WriteString(`      <div class="chart-wrap">
        <svg id="p2-velocity-svg" viewBox="0 0 1600 260" role="img" aria-label="Phase 2 lift velocity chart">
          <defs>
            <linearGradient id="p2AreaGrad" x1="0" y1="0" x2="0" y2="1">
              <stop offset="0%" stop-color="#58a6ff" stop-opacity="0.34"/>
              <stop offset="100%" stop-color="#58a6ff" stop-opacity="0.02"/>
            </linearGradient>
          </defs>
          <g id="p2-chart-grid">
            <line x1="56" y1="20" x2="1546" y2="20" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="71.5" x2="1546" y2="71.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="123" x2="1546" y2="123" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="174.5" x2="1546" y2="174.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="226" x2="1546" y2="226" stroke="#30363d"/>
          </g>
          <g id="p2-chart-bars"></g>
          <polygon id="p2-chart-area" points="" fill="url(#p2AreaGrad)"/>
          <polyline id="p2-chart-line" points="" fill="none" stroke="#58a6ff" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
          <g id="p2-chart-dots"></g>
          <g id="p2-chart-axes"></g>
        </svg>
      </div>
      <div class="chart-legend">
        <span><span class="legend-swatch" style="background:#58a6ff;"></span> Cumulative Phase 2 Progress</span>
        <span><span class="legend-swatch" style="background:rgba(163,113,247,0.65);"></span> Interval Lifts</span>
        <span id="p2-chart-note" style="margin-inline-start:auto;color:var(--muted);"></span>
      </div>
      <script>
      (function() {
        const P2_EVENTS = ` + string(eventsJSON) + `;
        let p2Metric = 'funcs';
        const svg = document.getElementById('p2-velocity-svg');
        if (!svg || !P2_EVENTS.length) return;
        const gridLines = document.querySelectorAll('#p2-chart-grid line');
        const gBars = document.getElementById('p2-chart-bars');
        const polyArea = document.getElementById('p2-chart-area');
        const polyLine = document.getElementById('p2-chart-line');
        const gDots = document.getElementById('p2-chart-dots');
        const gAxes = document.getElementById('p2-chart-axes');
        const note = document.getElementById('p2-chart-note');
        const H = 260, PAD_L = 56, PAD_R = 54, PAD_T = 20, PAD_B = 34, PH = H - PAD_T - PAD_B;

        function fmtTime(sec) {
          const d = new Date(sec * 1000);
          return String(d.getMonth()+1).padStart(2,'0') + '-' + String(d.getDate()).padStart(2,'0') + ' ' +
                 String(d.getHours()).padStart(2,'0') + ':' + String(d.getMinutes()).padStart(2,'0');
        }

        function renderP2() {
          const cw = Math.round(svg.clientWidth || 1600);
          const W = Math.max(640, cw);
          const PW = W - PAD_L - PAD_R;
          svg.setAttribute('viewBox', '0 0 ' + W + ' ' + H);
          gridLines.forEach(line => line.setAttribute('x2', String(W - PAD_R)));

          const bMap = new Map();
          let cFuncs = 0, cBytes = 0, cFields = 0;
          for (const ev of P2_EVENTS) {
            cFuncs++;
            cBytes += ev.b;
            cFields += ev.f;
            const k = Math.floor(ev.t / 300) * 300;
            let b = bMap.get(k);
            if (!b) {
              b = { t: k, dFuncs: 0, dBytes: 0, dFields: 0, cFuncs: 0, cBytes: 0, cFields: 0 };
              bMap.set(k, b);
            }
            b.dFuncs++;
            b.dBytes += ev.b;
            b.dFields += ev.f;
            b.cFuncs = cFuncs;
            b.cBytes = cBytes;
            b.cFields = cFields;
          }
          const bks = Array.from(bMap.values()).sort((a,b) => a.t - b.t);
          const valOf = (b) => p2Metric === 'bytes' ? b.cBytes : (p2Metric === 'fields' ? b.cFields : b.cFuncs);
          const delOf = (b) => p2Metric === 'bytes' ? b.dBytes : (p2Metric === 'fields' ? b.dFields : b.dFuncs);
          const maxY = Math.max(1, valOf(bks[bks.length - 1]));
          let maxD = 1;
          for (const b of bks) if (delOf(b) > maxD) maxD = delOf(b);

          const n = bks.length;
          const xAt = (i) => n === 1 ? PAD_L + PW / 2 : PAD_L + (i / (n - 1)) * PW;
          const yAt = (v) => PAD_T + PH - (v / maxY) * PH;
          const barW = Math.max(6, Math.min(28, (PW / Math.max(1, n)) * 0.56));
          const pts = [], areaPts = [xAt(0).toFixed(1) + ',' + (PAD_T + PH).toFixed(1)];
          let barsHTML = '', dotsHTML = '';
          for (let i = 0; i < n; i++) {
            const b = bks[i], x = xAt(i), y = yAt(valOf(b));
            pts.push(x.toFixed(1) + ',' + y.toFixed(1));
            areaPts.push(x.toFixed(1) + ',' + y.toFixed(1));
            const d = delOf(b);
            if (d > 0) {
              const bh = (d / maxD) * (PH * 0.42);
              barsHTML += '<rect x="' + (x - barW/2).toFixed(1) + '" y="' + (PAD_T + PH - bh).toFixed(1) + '" width="' + barW.toFixed(1) + '" height="' + bh.toFixed(1) + '" rx="2" fill="rgba(163,113,247,0.35)"/>';
            }
            dotsHTML += '<circle cx="' + x.toFixed(1) + '" cy="' + y.toFixed(1) + '" r="3.5" fill="#58a6ff"/>';
          }
          areaPts.push(xAt(n - 1).toFixed(1) + ',' + (PAD_T + PH).toFixed(1));
          gBars.innerHTML = barsHTML;
          polyArea.setAttribute('points', areaPts.join(' '));
          polyLine.setAttribute('points', pts.join(' '));
          gDots.innerHTML = dotsHTML;

          let axesHTML = '';
          for (let s = 0; s <= 4; s++) {
            const v = Math.round((maxY * (4 - s)) / 4);
            const y = PAD_T + (PH * s) / 4 + 4;
            axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + y.toFixed(1) + '" fill="#8b949e" font-size="11" text-anchor="end">' + v.toLocaleString() + '</text>';
          }
          const ticks = Math.min(n, 6);
          for (let t = 0; t < ticks; t++) {
            const idx = ticks === 1 ? 0 : Math.round((t * (n - 1)) / (ticks - 1));
            const anchor = t === 0 ? 'start' : (t === ticks - 1 ? 'end' : 'middle');
            axesHTML += '<text x="' + xAt(idx).toFixed(1) + '" y="' + (H - 8) + '" fill="#8b949e" font-size="11" text-anchor="' + anchor + '">' + fmtTime(bks[idx].t) + '</text>';
          }
          gAxes.innerHTML = axesHTML;
          note.textContent = P2_EVENTS.length.toLocaleString() + ' lifted functions logged across ' + n + ' active window(s)';
        }

        document.querySelectorAll('#p2-metric-group .chart-btn').forEach(btn => {
          btn.addEventListener('click', () => {
            document.querySelectorAll('#p2-metric-group .chart-btn').forEach(b => b.classList.remove('active'));
            btn.classList.add('active');
            p2Metric = btn.getAttribute('data-p2metric');
            renderP2();
          });
        });
        window.addEventListener('resize', () => requestAnimationFrame(renderP2));
        renderP2();
      })();
      </script>
    </div>
`)
	return sb.String()
}

func renderSubsystemTableRows(p2 Phase2Stats, coreOnly bool) string {
	var sb strings.Builder
	lastCat := ""
	for _, sub := range p2.Subsystems {
		if sub.Stats.TotalFuncs == 0 {
			continue
		}
		if sub.Category != lastCat {
			lastCat = sub.Category
			sb.WriteString(fmt.Sprintf(`            <tr class="cat-row"><th scope="row" colspan="9">%s</th></tr>
`, html.EscapeString(sub.Category)))
		}
		asmLiftPct := pct(uint64(sub.Stats.LiftedAsmFuncs), uint64(sub.Stats.AsmFuncs))
		portablePct := pct(uint64(sub.Stats.PortableCppFuncs), uint64(sub.Stats.TotalFuncs))
		sb.WriteString(fmt.Sprintf(`            <tr>
              <th scope="row">%s</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
`,
			html.EscapeString(sub.Name),
			sub.Stats.TotalFuncs,
			sub.Stats.AlreadyPureCppFuncs,
			sub.Stats.LiftedAsmFuncs, sub.Stats.AsmFuncs,
			sub.Stats.RemainAsmBytes,
			asmLiftPct,
			portablePct,
			sub.NamedFuncs,
			sub.FieldCount,
		))
	}

	sb.WriteString(fmt.Sprintf(`            <tr class="total-row">
              <th scope="row">Core Scope Total</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
`,
		p2.ScopeCore.TotalFuncs,
		p2.ScopeCore.AlreadyPureCppFuncs,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs,
		p2.ScopeCore.RemainAsmBytes,
		pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs)),
		sumCoreNamed(p2),
		sumCoreFields(p2),
	))

	if !coreOnly {
		sb.WriteString(fmt.Sprintf(`            <tr>
              <th scope="row">Other (Non-Core)</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
            <tr class="total-row">
              <th scope="row">All Tracked in <code>src/</code></th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
`,
			p2.OtherSubsystem.Stats.TotalFuncs,
			p2.OtherSubsystem.Stats.AlreadyPureCppFuncs,
			p2.OtherSubsystem.Stats.LiftedAsmFuncs, p2.OtherSubsystem.Stats.AsmFuncs,
			p2.OtherSubsystem.Stats.RemainAsmBytes,
			pct(uint64(p2.OtherSubsystem.Stats.LiftedAsmFuncs), uint64(p2.OtherSubsystem.Stats.AsmFuncs)),
			pct(uint64(p2.OtherSubsystem.Stats.PortableCppFuncs), uint64(p2.OtherSubsystem.Stats.TotalFuncs)),
			p2.OtherSubsystem.NamedFuncs,
			p2.OtherSubsystem.FieldCount,
			p2.ScopeAll.TotalFuncs,
			p2.ScopeAll.AlreadyPureCppFuncs,
			p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs,
			p2.ScopeAll.RemainAsmBytes,
			pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
			pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
			p2.TotalNamedFuncs,
			p2.TotalFieldAnnotations,
		))
	}
	return sb.String()
}

func sumCoreNamed(p2 Phase2Stats) int {
	n := 0
	for _, s := range p2.Subsystems {
		n += s.NamedFuncs
	}
	return n
}

func sumCoreFields(p2 Phase2Stats) int {
	n := 0
	for _, s := range p2.Subsystems {
		n += s.FieldCount
	}
	return n
}

func renderPhase2LeaderboardRows(p2 Phase2Stats) string {
	var sb strings.Builder
	if len(p2.Leaderboard) == 0 {
		sb.WriteString(`            <tr>
              <th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">No lifted functions yet</th>
              <td class="num">0</td>
              <td class="num">0</td>
              <td class="num">0.00%</td>
              <td class="num">-</td>
              <td class="num">-</td>
              <td class="num">-</td>
              <td class="num">0</td>
            </tr>
`)
		return sb.String()
	}
	totalLifted := 0
	for _, m := range p2.Leaderboard {
		totalLifted += m.LiftedFuncs
	}
	for _, m := range p2.Leaderboard {
		avg, med, largest := m.sizeStats()
		sb.WriteString(fmt.Sprintf(`            <tr>
              <th scope="row"><code class="model-badge">%s</code></th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.0f B</td>
              <td class="num">%d B</td>
              <td class="num">%d B</td>
              <td class="num">%d</td>
            </tr>
`,
			html.EscapeString(m.Model),
			m.LiftedFuncs,
			m.LiftedBytes,
			pct(uint64(m.LiftedFuncs), uint64(totalLifted)),
			avg, med, largest,
			m.FieldsRecovered,
		))
	}
	return sb.String()
}
