package main

import (
	"encoding/json"
	"fmt"
	"io/fs"
	"os"
	"path/filepath"
	"sort"
	"strconv"
	"strings"

	"endorphin_decomp/internal/unitstore"
)

const (
	liftLedgerDir  = "build/lifted"
	liftedRootDir  = "lifted"
	liftedIncDir   = "lifted/include"
	liftedWipDir   = "lifted/wip"
	symbolsPath    = "lifted/symbols.json"
	liftChecksDir  = ".local/lift_checks"
)

// FieldSpec represents a recovered struct/class field annotation from `// @field`.
type FieldSpec struct {
	Class  string `json:"class"`
	Offset string `json:"offset"` // canonical "+0xNN"
	Type   string `json:"type"`
	Name   string `json:"name"`
}

// LiftEntry is the per-function ledger written to build/lifted/<shard>/<VA>.json.
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

// SymbolEntry is stored in lifted/symbols.json keyed by normalized VA.
type SymbolEntry struct {
	Name       string `json:"name"`
	Class      string `json:"class,omitempty"`
	Signature  string `json:"signature,omitempty"`
	Summary    string `json:"summary,omitempty"`
	LiftedPath string `json:"lifted_path,omitempty"`
}

func normVA(va string) (string, uint32, error) {
	s := strings.TrimSpace(va)
	s = strings.TrimPrefix(strings.TrimPrefix(s, "0x"), "0X")
	if s == "" || len(s) > 8 {
		return "", 0, fmt.Errorf("invalid VA %q", va)
	}
	v, err := strconv.ParseUint(s, 16, 32)
	if err != nil {
		return "", 0, fmt.Errorf("invalid VA %q: %w", va, err)
	}
	return fmt.Sprintf("0x%08X", uint32(v)), uint32(v), nil
}

func liftLedgerPath(va string) string {
	n := unitstore.NormVA(va)
	h := strings.TrimPrefix(n, "0x")
	return filepath.Join(liftLedgerDir, h[:4], h+".json")
}

func wipPathForVA(va string) string {
	n := unitstore.NormVA(va)
	h := strings.TrimPrefix(n, "0x")
	return filepath.ToSlash(filepath.Join(liftedWipDir, "fn_"+h+".cpp"))
}

func liftedPathForSrc(srcPath string) string {
	s := filepath.ToSlash(srcPath)
	s = strings.TrimPrefix(s, "src/")
	return filepath.ToSlash(filepath.Join(liftedRootDir, s))
}

func isIsolatedEnv() bool {
	return strings.TrimSpace(os.Getenv("LIFT_ISOLATED")) == "1"
}

func writeFileAtomic(path string, data []byte, perm os.FileMode) error {
	if err := os.MkdirAll(filepath.Dir(path), 0o755); err != nil {
		return err
	}
	tmp := path + ".tmp"
	if err := os.WriteFile(tmp, data, perm); err != nil {
		return err
	}
	return os.Rename(tmp, path)
}

func readLiftEntry(va string) (*LiftEntry, error) {
	b, err := os.ReadFile(liftLedgerPath(va))
	if err != nil {
		return nil, err
	}
	var e LiftEntry
	if err := json.Unmarshal(b, &e); err != nil {
		return nil, err
	}
	return &e, nil
}

func writeLiftEntry(e LiftEntry) error {
	e.VA = unitstore.NormVA(e.VA)
	b, err := json.MarshalIndent(e, "", "  ")
	if err != nil {
		return err
	}
	b = append(b, '\n')
	return writeFileAtomic(liftLedgerPath(e.VA), b, 0o644)
}

func readAllLiftEntries() (map[string]LiftEntry, error) {
	out := map[string]LiftEntry{}
	if _, err := os.Stat(liftLedgerDir); os.IsNotExist(err) {
		return out, nil
	}
	err := filepath.WalkDir(liftLedgerDir, func(path string, d fs.DirEntry, err error) error {
		if err != nil || d.IsDir() || !strings.HasSuffix(path, ".json") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return err
		}
		var e LiftEntry
		if err := json.Unmarshal(b, &e); err != nil {
			return fmt.Errorf("%s: %w", path, err)
		}
		if e.VA != "" {
			e.VA = unitstore.NormVA(e.VA)
			out[e.VA] = e
		}
		return nil
	})
	return out, err
}

func readSymbolsJSON() map[string]SymbolEntry {
	out := map[string]SymbolEntry{}
	b, err := os.ReadFile(symbolsPath)
	if err != nil {
		return out
	}
	_ = json.Unmarshal(b, &out)
	return out
}

func writeSymbolsJSON(syms map[string]SymbolEntry) error {
	// Marshal with sorted keys (encoding/json sorts map[string]... keys deterministically).
	b, err := json.MarshalIndent(syms, "", "  ")
	if err != nil {
		return err
	}
	b = append(b, '\n')
	return writeFileAtomic(symbolsPath, b, 0o644)
}

func vaSortVal(va string) uint64 {
	v, _ := strconv.ParseUint(strings.TrimPrefix(unitstore.NormVA(va), "0x"), 16, 64)
	return v
}

func sortedVAs(m map[string]LiftEntry) []string {
	vas := make([]string, 0, len(m))
	for va := range m {
		vas = append(vas, va)
	}
	sort.Slice(vas, func(i, j int) bool { return vaSortVal(vas[i]) < vaSortVal(vas[j]) })
	return vas
}

func recordLiftCheckRun(va, model, outcome string) {
	n := strings.TrimPrefix(unitstore.NormVA(va), "0x")
	_ = os.MkdirAll(liftChecksDir, 0o755)
	p := filepath.Join(liftChecksDir, n+".log")
	if f, err := os.OpenFile(p, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintf(f, "%s\t%s\n", model, outcome)
		f.Close()
	}
}
