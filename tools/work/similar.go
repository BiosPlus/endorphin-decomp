package main

// Byte-shape similarity: finds already-matched functions whose instruction
// stream looks like the target's once immediates, displacements and branch/call
// targets are wildcarded, and prints their C++ source as a hint.

import (
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
)

var (
	shapeHexRe  = regexp.MustCompile(`-?0x[0-9a-fA-F]+`)
	shapeWSRe   = regexp.MustCompile(`\s+`)
	shapeBrRe   = regexp.MustCompile(`^(call|jmp|j[a-z]+|loop[a-z]*)$`)
	shapeMaxPos = 200 // ignore n-grams present in more solved functions than this
)

const (
	shapeMinFuzzy   = 0.5
	shapeMaxHints   = 3
	shapeCandidates = 10 // re-ranked after source lookup so C++ beats __asm
	shapeAsmPenalty = 0.1
	shapeMaxLines   = 40
)

type shapeFn struct {
	unit  UnitEntry
	va    uint32
	ins   []string
	key   string
	grams map[string]bool
}

type shapeHit struct {
	fn    *shapeFn
	score float64
	exact bool
}

// loadShape reads the cached disassembly for a unit and returns its normalized
// instruction list.
func loadShape(u UnitEntry) *shapeFn {
	b, err := os.ReadFile(filepath.Join(".local", "cache", "funcs", u.VA+".txt"))
	if err != nil {
		return nil
	}
	f := &shapeFn{unit: u}
	if v, err := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32); err == nil {
		f.va = uint32(v)
	}
	for _, line := range strings.Split(string(b), "\n") {
		m := cacheInstRe.FindStringSubmatch(line)
		if len(m) != 4 {
			continue
		}
		text := m[3]
		if i := strings.Index(text, ";"); i >= 0 {
			text = text[:i]
		}
		text = strings.TrimSpace(text)
		if text == "" {
			continue
		}
		parts := strings.SplitN(text, "\t", 2)
		if len(parts) == 1 {
			parts = strings.SplitN(text, " ", 2)
		}
		mn := strings.TrimSpace(parts[0])
		ops := ""
		if len(parts) > 1 {
			ops = strings.TrimSpace(parts[1])
		}
		if shapeBrRe.MatchString(mn) && strings.HasPrefix(ops, "0x") {
			ops = "T"
		} else {
			ops = shapeHexRe.ReplaceAllString(ops, "N")
		}
		f.ins = append(f.ins, shapeWSRe.ReplaceAllString(mn+" "+ops, " "))
	}
	if len(f.ins) == 0 {
		return nil
	}
	f.key = strings.Join(f.ins, "|")
	f.grams = map[string]bool{}
	for i := 0; i+3 <= len(f.ins); i++ {
		f.grams[strings.Join(f.ins[i:i+3], ";")] = true
	}
	if len(f.grams) == 0 {
		f.grams[f.key] = true
	}
	return f
}

func classPrefix(sym string) string {
	if i := strings.LastIndex(sym, "::vfunc_"); i >= 0 {
		return sym[:i]
	}
	return ""
}

// findSimilarMatched returns up to shapeMaxHints solved neighbors for target.
func findSimilarMatched(target UnitEntry, units []UnitEntry) []shapeHit {
	t := loadShape(target)
	if t == nil || len(t.ins) < 3 {
		return nil
	}
	var solved []*shapeFn
	for _, u := range units {
		if u.Status != "matched" || u.VA == target.VA {
			continue
		}
		if f := loadShape(u); f != nil {
			solved = append(solved, f)
		}
	}
	inv := map[string][]int{}
	for i, f := range solved {
		for g := range f.grams {
			inv[g] = append(inv[g], i)
		}
	}
	hits := map[int]int{}
	for g := range t.grams {
		if len(inv[g]) > shapeMaxPos {
			continue
		}
		for _, i := range inv[g] {
			hits[i]++
		}
	}
	tcls := classPrefix(target.Symbol)
	var out []shapeHit
	for i, f := range solved {
		if f.key == t.key {
			out = append(out, shapeHit{f, 1.0, true})
			continue
		}
		h := hits[i]
		if h == 0 || len(t.ins) < 4 {
			continue
		}
		j := float64(h) / float64(len(t.grams)+len(f.grams)-h)
		lo, hi := len(t.ins), len(f.ins)
		if lo > hi {
			lo, hi = hi, lo
		}
		j *= float64(lo) / float64(hi) // penalize very different lengths
		if j >= shapeMinFuzzy {
			out = append(out, shapeHit{f, j, false})
		}
	}
	rank := func(h shapeHit) float64 {
		s := h.score
		if tcls != "" && classPrefix(h.fn.unit.Symbol) == tcls {
			s += 0.05
		}
		return s
	}
	dist := func(h shapeHit) uint32 {
		if h.fn.va > t.va {
			return h.fn.va - t.va
		}
		return t.va - h.fn.va
	}
	sort.Slice(out, func(a, b int) bool {
		ra, rb := rank(out[a]), rank(out[b])
		if ra != rb {
			return ra > rb
		}
		return dist(out[a]) < dist(out[b])
	})
	if len(out) > shapeCandidates {
		out = out[:shapeCandidates]
	}
	return out
}

// extractUnitSource returns the source block that follows the // [VA] marker.
func extractUnitSource(vaHex string) string {
	cpp := findCppFileForVA(vaHex)
	if cpp == "" {
		return ""
	}
	b, err := os.ReadFile(cpp)
	if err != nil {
		return ""
	}
	want := "0x" + strings.ToUpper(strings.TrimPrefix(vaHex, "0x"))
	var body []string
	in := false
	for _, l := range strings.Split(string(b), "\n") {
		if m := unitMarkerLineRe.FindStringSubmatch(strings.TrimSpace(l)); len(m) == 2 {
			if in {
				break
			}
			in = "0x"+strings.ToUpper(strings.TrimPrefix(m[1], "0x")) == want
		}
		if in {
			body = append(body, l)
		}
	}
	for len(body) > 0 && strings.TrimSpace(body[len(body)-1]) == "" {
		body = body[:len(body)-1]
	}
	if len(body) > shapeMaxLines {
		body = append(body[:shapeMaxLines], "    // ... (truncated) ...")
	}
	return strings.Join(body, "\n")
}

func printSimilarMatched(target UnitEntry, units []UnitEntry) {
	type cand struct {
		h    shapeHit
		src  string
		rank float64
	}
	var cands []cand
	for _, h := range findSimilarMatched(target, units) {
		src := extractUnitSource(h.fn.unit.VA)
		if src == "" {
			continue
		}
		r := h.score
		if strings.Contains(src, "__asm") {
			r -= shapeAsmPenalty
		}
		cands = append(cands, cand{h, src, r})
	}
	sort.SliceStable(cands, func(a, b int) bool { return cands[a].rank > cands[b].rank })
	if len(cands) > shapeMaxHints {
		cands = cands[:shapeMaxHints]
	}
	var printed int
	for _, c := range cands {
		h, src := c.h, c.src
		if printed == 0 {
			fmt.Println("SIMILAR_MATCHED: (solved functions with similar instruction shape; a hint, not a template)")
		}
		printed++
		kind := fmt.Sprintf("similarity %.2f", h.score)
		if h.exact {
			kind = "identical shape (only constants/offsets/call targets differ)"
		}
		note := ""
		if strings.Contains(src, "__asm") {
			note = " [uses __asm]"
		}
		fmt.Printf("  --- %s %s | %d bytes (target %d) | %s%s\n",
			h.fn.unit.VA, h.fn.unit.Symbol, h.fn.unit.Size, target.Size, kind, note)
		for _, l := range strings.Split(src, "\n") {
			fmt.Println("  | " + l)
		}
	}
}

func cmdSimilar(args []string) {
	if len(args) < 1 {
		fmt.Fprintln(os.Stderr, "Usage: ./.local/bin/work similar <address>")
		os.Exit(1)
	}
	vaHex, _, err := normalizeVA(args[0])
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}
	units, idx, _, _, _ := loadUnitsAndClasses()
	i, ok := idx[vaHex]
	if !ok {
		fmt.Fprintf(os.Stderr, "Error: unit %s not found\n", vaHex)
		os.Exit(1)
	}
	printSimilarMatched(units[i], units)
}
