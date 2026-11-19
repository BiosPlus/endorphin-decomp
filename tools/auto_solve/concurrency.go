package main

// Helpers that make auto_solve safe to run while grind agents are working: it skips functions an agent
// has claimed, re-reads unit state under the work lock before writing, never emits a second definition
// for a VA, and writes the ledger one unit at a time (read-modify-write) instead of rewriting it whole.

import (
	"encoding/json"
	"os"
	"path/filepath"
	"regexp"
	"strings"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

func decompNormVA(va string) string {
	return "0x" + strings.ToUpper(strings.TrimPrefix(strings.TrimPrefix(va, "0x"), "0X"))
}

// isClaimedByAgent reports whether a grind agent currently has a WIP file for va (parallel mode).
func isClaimedByAgent(va string) bool {
	short := strings.TrimPrefix(decompNormVA(va), "0x")
	_, err := os.Stat(filepath.Join("src", "wip", "fn_"+short+".cpp"))
	return err == nil
}

// readUnitStatus returns the unit's status as it is on disk right now.
func readUnitStatus(va string) (string, bool) {
	b, err := unitstore.ReadOne(va)
	if err != nil {
		return "", false
	}
	var u struct {
		Status string `json:"status"`
	}
	if json.Unmarshal(b, &u) != nil {
		return "", false
	}
	return u.Status, true
}

// updateUnitFields writes u's status/skip_reason/matched_by/matched_at into the on-disk unit, keeping every
// other field (including ones this tool's struct does not know about) exactly as stored.
func updateUnitFields(u *decomp.UnitEntry) error {
	b, err := unitstore.ReadOne(u.VA)
	if err != nil {
		return err
	}
	var obj map[string]json.RawMessage
	if err := json.Unmarshal(b, &obj); err != nil {
		return err
	}
	set := func(k, v string) {
		if v == "" {
			delete(obj, k)
			return
		}
		raw, _ := json.Marshal(v)
		obj[k] = raw
	}
	set("status", u.Status)
	set("skip_reason", u.SkipReason)
	set("matched_by", u.MatchedBy)
	set("matched_at", u.MatchedAt)
	out, err := json.Marshal(obj)
	if err != nil {
		return err
	}
	return unitstore.WriteOne(u.VA, out)
}

func filterSolved(in []*SolvedFunc, keep func(*SolvedFunc) bool) []*SolvedFunc {
	var out []*SolvedFunc
	for _, sf := range in {
		if keep(sf) {
			out = append(out, sf)
		}
	}
	return out
}

func filterCandidates(in []*cloneCandidate, keep func(*SolvedFunc) bool) []*cloneCandidate {
	var out []*cloneCandidate
	for _, c := range in {
		if keep(c.solved) {
			out = append(out, c)
		}
	}
	return out
}

var srcMarkerRe = regexp.MustCompile(`(?m)^// \[(0x[0-9A-Fa-f]{8})\]`)

// existingSourceVAs returns every VA that already has a `// [0x...]` block in src/ (WIP files excluded).
func existingSourceVAs() map[string]bool {
	have := make(map[string]bool)
	_ = filepath.Walk("src", func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return nil
		}
		if info.IsDir() {
			if filepath.ToSlash(path) == "src/wip" {
				return filepath.SkipDir
			}
			return nil
		}
		if !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		raw, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		for _, m := range srcMarkerRe.FindAllSubmatch(raw, -1) {
			have[decompNormVA(string(m[1]))] = true
		}
		return nil
	})
	return have
}
