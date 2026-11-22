package main

import (
	"flag"
	"fmt"
	"os"
	"sort"
	"strings"

	"endorphin_decomp/internal/decomp"
)

// hiddenReason explains why `work next` will never hand out an open (not completed) unit, or "" if it will.
// Keep this in sync with the filters in cmdNext.
func hiddenReason(u UnitEntry, mfcClasses map[string]bool, validCode map[string]bool, retryDeferred, retrySkipped bool) string {
	if decomp.IsCompleted(u.Status) {
		return ""
	}
	switch {
	case u.Status == "out_of_scope":
		return "" // deliberately excluded and recorded as such; not "hidden"
	case u.IsThunk:
		return "import/jmp thunk (auto_solve's job)"
	case decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses):
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 && mfcClasses[u.Symbol[:idx]] {
			return "method of an MFC/std class"
		}
		return "inside the CRT/MFC address range"
	case u.Status == "skipped" && !retrySkipped:
		return "skipped: " + u.SkipReason
	case u.Status == "deferred" && !retryDeferred:
		return "deferred (every model failed; grind RETRY_DEFERRED=1 retries)"
	case !validCode[u.VA] && !(u.Status == "skipped" && retrySkipped):
		return "cached disassembly is not one clean function (run tools/resplit)"
	}
	return ""
}

// cmdHidden lists open units that `work next` will not hand out, grouped by reason, so nothing is silently dropped.
func cmdHidden(args []string) {
	fs := flag.NewFlagSet("work hidden", flag.ExitOnError)
	list := fs.Bool("list", false, "list every hidden unit, not just the counts")
	retryDeferred := fs.Bool("retry-deferred", false, "treat deferred units as queueable (as grind RETRY_DEFERRED=1 does)")
	retrySkipped := fs.Bool("retry-skipped", false, "treat skipped units as queueable (as grind RETRY_SKIPPED=1 does)")
	_ = fs.Parse(args)

	units, _, validCode, err := loadUnitsSummary()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	_, _, mfcClasses := loadClasses()

	type group struct {
		n     int
		bytes uint64
		vas   []string
	}
	groups := map[string]*group{}
	for _, u := range units {
		r := hiddenReason(u, mfcClasses, validCode, *retryDeferred, *retrySkipped)
		if r == "" {
			continue
		}
		key := r
		if strings.HasPrefix(r, "skipped: ") {
			key = "skipped"
		}
		g := groups[key]
		if g == nil {
			g = &group{}
			groups[key] = g
		}
		g.n++
		g.bytes += uint64(u.Size)
		g.vas = append(g.vas, fmt.Sprintf("%s %6dB %s  %s", u.VA, u.Size, u.Symbol, strings.TrimPrefix(r, "skipped: ")))
	}
	var keys []string
	total := 0
	for k, g := range groups {
		keys = append(keys, k)
		total += g.n
	}
	sort.Slice(keys, func(i, j int) bool { return groups[keys[i]].n > groups[keys[j]].n })
	fmt.Printf("Open units that `work next` will not hand out: %d\n", total)
	for _, k := range keys {
		g := groups[k]
		fmt.Printf("  %5d  %8d bytes  %s\n", g.n, g.bytes, k)
		if *list {
			sort.Strings(g.vas)
			for _, v := range g.vas {
				fmt.Println("           " + v)
			}
		}
	}
}
