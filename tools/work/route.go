package main

// Yield-based routing for the model escalation chain.
//
// Instead of predicting difficulty up front (the data shows callee/reloc counts don't predict failure, and the
// log only covers small functions so far), measure what each model actually delivers per size band from
// .local/grind_results.log (wins) and .local/grind_attempts.tsv (failures), and let the grinder skip a stage whose
// measured yield is too low to be worth its wall-clock time. Stats come from the user's own history, so the
// policy adapts as larger functions enter the queue.

import (
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
)

// Upper bounds (exclusive) of the size bands in bytes; the last band is open-ended.
var routeBandBounds = []uint32{64, 128, 256, 512}

const routeOpenEnd = uint32(0xFFFFFFFF)

type routeStat struct{ wins, trials int }

func routeBand(size uint32) int {
	for i, hi := range routeBandBounds {
		if size < hi {
			return i
		}
	}
	return len(routeBandBounds)
}

func routeBandRange(b int) (lo, hi uint32) {
	if b > 0 {
		lo = routeBandBounds[b-1]
	}
	hi = routeOpenEnd
	if b < len(routeBandBounds) {
		hi = routeBandBounds[b]
	}
	return
}

func routeBandLabel(b int) string {
	lo, hi := routeBandRange(b)
	if hi == routeOpenEnd {
		return fmt.Sprintf("%dB+", lo)
	}
	return fmt.Sprintf("%d-%dB", lo, hi-1)
}

func envOr(key, def string) string {
	if v := os.Getenv(key); v != "" {
		return v
	}
	return def
}

// loadRouteStats returns stats[model][band] plus the model names seen.
func loadRouteStats(units []UnitEntry) (map[string][]routeStat, []string) {
	stats := map[string][]routeStat{}
	var models []string
	get := func(m string) []routeStat {
		s, ok := stats[m]
		if !ok {
			s = make([]routeStat, len(routeBandBounds)+1)
			stats[m] = s
			models = append(models, m)
		}
		return s
	}

	// Wins: finished functions with outcome "matched" (time, addr, size, outcome, model, secs).
	resultsPath := envOr("GRIND_RESULTS_LOG", filepath.Join(".local", "grind_results.log"))
	if b, err := os.ReadFile(resultsPath); err == nil {
		for _, line := range strings.Split(string(b), "\n") {
			p := strings.Split(line, "\t")
			if len(p) < 5 || p[3] != "matched" {
				continue
			}
			sz, err := strconv.ParseUint(strings.TrimSuffix(p[2], "B"), 10, 32)
			if err != nil {
				continue
			}
			s := get(p[4])[routeBand(uint32(sz))]
			s.wins++
			s.trials++
			stats[p[4]][routeBand(uint32(sz))] = s
		}
	}

	// Failures: each distinct (addr, model) pair recorded by the grinder.
	sizeOf := map[string]uint32{}
	for _, u := range units {
		sizeOf[strings.ToUpper(u.VA)] = u.Size
	}
	attemptsPath := envOr("GRIND_ATTEMPTS_FILE", filepath.Join(".local", "grind_attempts.tsv"))
	if b, err := os.ReadFile(attemptsPath); err == nil {
		seen := map[string]bool{}
		for _, line := range strings.Split(string(b), "\n") {
			p := strings.Split(line, "\t")
			if len(p) < 2 || seen[line] {
				continue
			}
			seen[line] = true
			sz, ok := sizeOf[strings.ToUpper(p[0])]
			if !ok {
				continue
			}
			band := routeBand(sz)
			s := get(p[1])[band]
			s.trials++
			stats[p[1]][band] = s
		}
	}
	sort.Strings(models)
	return stats, models
}

// routeSkip decides whether a model should be skipped for a band. It uses the band's own evidence when there
// is enough, else the model's evidence across all bands, else keeps the model (no evidence, no judgment).
func routeSkip(stats []routeStat, band, minTrials int, minYield float64) (skip bool, w, t int, scope string) {
	if stats[band].trials >= minTrials {
		w, t, scope = stats[band].wins, stats[band].trials, "band"
	} else {
		for _, s := range stats {
			w += s.wins
			t += s.trials
		}
		scope = "all sizes"
		if t < minTrials {
			return false, w, t, "too little data"
		}
	}
	return float64(w)/float64(t) < minYield, w, t, scope
}

// cmdRoute: `work route [--machine|--table] [--min-trials N] [--min-yield F]`
//
//	--machine  one line per model and band: "<model> <lo> <hi> skip|keep"  (consumed by tools/grind.sh)
//	--table    human-readable yield table (default)
func cmdRoute(args []string) {
	machine := false
	minTrials := 20
	minYield := 0.05
	for i := 0; i < len(args); i++ {
		switch args[i] {
		case "--machine":
			machine = true
		case "--table":
			machine = false
		case "--min-trials":
			if i+1 < len(args) {
				if n, err := strconv.Atoi(args[i+1]); err == nil && n > 0 {
					minTrials = n
				}
				i++
			}
		case "--min-yield":
			if i+1 < len(args) {
				if f, err := strconv.ParseFloat(args[i+1], 64); err == nil && f >= 0 {
					minYield = f
				}
				i++
			}
		}
	}

	units, _, _, _, _ := loadUnitsAndClasses()
	stats, models := loadRouteStats(units)

	if machine {
		for _, m := range models {
			for b := range stats[m] {
				skip, _, _, _ := routeSkip(stats[m], b, minTrials, minYield)
				lo, hi := routeBandRange(b)
				d := "keep"
				if skip {
					d = "skip"
				}
				fmt.Printf("%s %d %d %s\n", m, lo, hi, d)
			}
		}
		return
	}

	fmt.Printf("Model yield by function size (win = matched on that model; trial = a win or a recorded failure)\n")
	fmt.Printf("Skip rule: yield < %.0f%% with >= %d trials (band first, else all sizes)\n\n", minYield*100, minTrials)
	fmt.Printf("%-20s", "model")
	for b := 0; b <= len(routeBandBounds); b++ {
		fmt.Printf(" %-14s", routeBandLabel(b))
	}
	fmt.Println()
	for _, m := range models {
		fmt.Printf("%-20s", m)
		for b := range stats[m] {
			skip, w, t, scope := routeSkip(stats[m], b, minTrials, minYield)
			cell := "-"
			switch {
			case t == 0:
			case scope == "too little data":
				cell = fmt.Sprintf("%d/%d", w, t)
			default:
				cell = fmt.Sprintf("%d/%d", w, t)
				if scope != "band" {
					cell += "*"
				}
				if skip {
					cell += " SKIP"
				}
			}
			fmt.Printf(" %-14s", cell)
		}
		fmt.Println()
	}
	fmt.Println("\n* = band has too few trials; decision uses this model's results across all sizes")
}
