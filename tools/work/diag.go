package main

// Failure-diagnosis handoff.
//
// Every mismatching `work check` appends one row to .local/diag/<VA>.tsv describing WHAT went wrong
// (match %, where the compiled output first diverges from the target, the heuristic hints). When a later
// worker claims the same function, printPriorAttempts summarizes those rows as facts. The failed SOURCE is
// deliberately never stored or shown: a model that reads a wrong attempt tends to patch it instead of
// rethinking it, so we hand over the diagnosis and withhold the code.

import (
	"bytes"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
)

const (
	diagDir            = ".local/diag"
	diagHintSep        = "||"
	diagStructurePct   = 90.0 // at/above this the overall structure is probably right
	diagMaxDivergences = 3
	diagMaxVariants    = 2
)

type diagRow struct {
	model string
	pct   float64
	off   uint32
	tgt   string
	mine  string
	hints []string
}

var diagClean = strings.NewReplacer("\t", " ", "\n", " ", "\r", " ")

func diagFile(va string) string {
	return filepath.Join(diagDir, strings.ToUpper(strings.TrimPrefix(va, "0x"))+".tsv")
}

// firstDivergence returns the first instruction row where target and compiled output differ
// (after relocation masking). ok is false if every row agrees.
func firstDivergence(tgt, comp []AsmInst, relocs map[uint32]bool) (off uint32, t, c string, ok bool) {
	n := len(tgt)
	if len(comp) > n {
		n = len(comp)
	}
	for i := 0; i < n; i++ {
		var ti, ci *AsmInst
		if i < len(tgt) {
			ti = &tgt[i]
		}
		if i < len(comp) {
			ci = &comp[i]
		}
		if ti != nil && ci != nil && bytes.Equal(maskInstBytes(*ti, relocs), maskInstBytes(*ci, relocs)) {
			continue
		}
		t, c = "(end of function)", "(end of function)"
		if ti != nil {
			t, off = ti.Text, ti.Offset
		}
		if ci != nil {
			c = ci.Text
			if ti == nil {
				off = ci.Offset
			}
		}
		return off, t, c, true
	}
	return 0, "", "", false
}

// recordDiagnosis appends one failed-check row. Best effort: never affects check's result.
func recordDiagnosis(va, model string, pct float64, tgt, comp []AsmInst, relocs map[uint32]bool, hints []string) {
	off, t, c, ok := firstDivergence(tgt, comp, relocs)
	if !ok {
		return
	}
	if strings.TrimSpace(model) == "" {
		model = "unknown"
	}
	if err := os.MkdirAll(diagDir, 0755); err != nil {
		return
	}
	f, err := os.OpenFile(diagFile(va), os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0644)
	if err != nil {
		return
	}
	defer f.Close()
	fmt.Fprintf(f, "%s\t%.1f\t%d\t%s\t%s\t%s\n",
		diagClean.Replace(model), pct, off, diagClean.Replace(t), diagClean.Replace(c),
		diagClean.Replace(strings.Join(hints, diagHintSep)))
}

// clearDiagnosis drops the notes once a function is solved.
func clearDiagnosis(va string) { _ = os.Remove(diagFile(va)) }

func readDiagnosis(va string) []diagRow {
	b, err := os.ReadFile(diagFile(va))
	if err != nil {
		return nil
	}
	var rows []diagRow
	for _, line := range strings.Split(string(b), "\n") {
		p := strings.Split(line, "\t")
		if len(p) != 6 {
			continue
		}
		pct, e1 := strconv.ParseFloat(p[1], 64)
		off, e2 := strconv.ParseUint(p[2], 10, 32)
		if e1 != nil || e2 != nil {
			continue
		}
		r := diagRow{model: p[0], pct: pct, off: uint32(off), tgt: p[3], mine: p[4]}
		if p[5] != "" {
			r.hints = strings.Split(p[5], diagHintSep)
		}
		rows = append(rows, r)
	}
	return rows
}

func printPriorAttempts(u UnitEntry) {
	rows := readDiagnosis(u.VA)
	if len(rows) == 0 {
		return
	}

	var order []string
	perModel := map[string]int{}
	best := rows[0]
	for _, r := range rows {
		if perModel[r.model] == 0 {
			order = append(order, r.model)
		}
		perModel[r.model]++
		if r.pct > best.pct {
			best = r
		}
	}
	var who []string
	for _, m := range order {
		who = append(who, fmt.Sprintf("%s x%d", m, perModel[m]))
	}

	type group struct {
		off      uint32
		tgt      string
		count    int
		variants []string
	}
	var groups []*group
	byKey := map[string]*group{}
	hintCount := map[string]int{}
	var hintOrder []string
	for _, r := range rows {
		k := fmt.Sprintf("%d|%s", r.off, r.tgt)
		g := byKey[k]
		if g == nil {
			g = &group{off: r.off, tgt: r.tgt}
			byKey[k] = g
			groups = append(groups, g)
		}
		g.count++
		seen := false
		for _, v := range g.variants {
			if v == r.mine {
				seen = true
			}
		}
		if !seen {
			g.variants = append(g.variants, r.mine)
		}
		for _, h := range r.hints {
			if hintCount[h] == 0 {
				hintOrder = append(hintOrder, h)
			}
			hintCount[h]++
		}
	}
	sort.SliceStable(groups, func(a, b int) bool {
		if groups[a].count != groups[b].count {
			return groups[a].count > groups[b].count
		}
		return groups[a].off < groups[b].off
	})
	sort.SliceStable(hintOrder, func(a, b int) bool { return hintCount[hintOrder[a]] > hintCount[hintOrder[b]] })

	fmt.Printf("PRIOR_ATTEMPTS: %d failed check(s): %s. Facts about earlier compiler output only; the earlier source is deliberately not shown.\n",
		len(rows), strings.Join(who, ", "))
	fmt.Printf("  best_match: %.1f%% (%s)\n", best.pct, best.model)
	for i, g := range groups {
		if i >= diagMaxDivergences {
			break
		}
		var alt []string
		for j, v := range g.variants {
			if j >= diagMaxVariants {
				break
			}
			alt = append(alt, "`"+v+"`")
		}
		fmt.Printf("  diverged_at: +0x%02X target `%s` in %d/%d tries; compiler emitted instead: %s\n",
			g.off, g.tgt, g.count, len(rows), strings.Join(alt, " / "))
	}
	for i, h := range hintOrder {
		if i >= 3 {
			break
		}
		fmt.Printf("  recurring_hint (%dx): %s\n", hintCount[h], h)
	}
	if best.pct >= diagStructurePct {
		fmt.Println("  advice: best try was >=90%, so the overall structure was probably right; focus on the divergence above.")
	} else {
		fmt.Println("  advice: best try was <90%, so treat the earlier approach as UNPROVEN; work from TARGET_ASM and do not assume the structure was close.")
	}
}
