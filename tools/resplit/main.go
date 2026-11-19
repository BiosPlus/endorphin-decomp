// Command resplit repairs function units the linear-sweep splitter in tools/extract_units got wrong.
//
// extract_units cuts .text into units by linear sweep. That breaks on MSVC switch statements (jump tables and
// byte index tables sit right after the function's code, so the table and the next function get glued into one
// unit that disassembles as garbage), on multi-byte alignment fillers (lea esp,[esp+0], mov edi,edi), and on
// functions that end in a call to a no-return function the splitter did not know about. `work next` silently
// dropped every such unit (IsValidCodeUnit), so ~800 real functions were never attempted.
//
// resplit re-cuts only open (todo/deferred) units that fail the validity check or overlap a known table:
//   - jump/index tables are found from each switch's `cmp R,K; ja; [movzx]; jmp [4*R+T]` sequence and become
//     out_of_scope data units (skip_reason says whose table they are)
//   - code is cut at the first exit (ret, jmp, call to a no-return function) with no forward branch pending
//   - no-return functions are learned from the binary and written to build/noreturn.txt
//   - pieces that still have no clean end are marked "skipped" with a reason, so they are visible
//
// Matched units are never modified. Run with -selftest first: it re-splits every matched unit and checks the
// result reproduces its known boundaries.
//
//	go run ./tools/resplit -selftest     # validate the splitter against matched units
//	go run ./tools/resplit               # dry run: report what would change
//	go run ./tools/resplit -va 0x00714010 # explain one unit
//	go run ./tools/resplit -apply        # write build/units/, build/noreturn.txt and .local/cache/funcs/
package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"runtime"
	"sort"
	"strconv"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
	"endorphin_decomp/internal/worklock"
)

type classFile struct {
	DemangledName  string   `json:"demangled_name"`
	VirtualMethods []string `json:"virtual_methods"`
	VTables        []struct {
		Offset         uint32   `json:"offset"`
		VirtualMethods []string `json:"virtual_methods"`
	} `json:"vtables"`
}

func parseVA(s string) uint32 {
	v, _ := strconv.ParseUint(strings.TrimPrefix(strings.TrimPrefix(s, "0x"), "0X"), 16, 32)
	return uint32(v)
}

func main() {
	apply := flag.Bool("apply", false, "write the changes (default: dry run)")
	selftest := flag.Bool("selftest", false, "re-split every matched unit and report any whose boundaries change")
	oneVA := flag.String("va", "", "explain the split of a single unit")
	workers := flag.Int("workers", runtime.NumCPU(), "parallel llvm-objdump workers")
	verbose := flag.Bool("v", false, "list every planned change")
	flag.Parse()

	var cfg decomp.TargetConfig
	if b, err := os.ReadFile("build/target.json"); err == nil {
		_ = json.Unmarshal(b, &cfg)
	}
	img, err := loadImage(filepath.Join(".local", "bin", cfg.BinaryName))
	die(err)

	raw, err := unitstore.ReadAll()
	die(err)
	var units []decomp.UnitEntry
	die(json.Unmarshal(raw, &units))
	byVA := make(map[uint32]*decomp.UnitEntry, len(units))
	symbols := make(map[uint32]string, len(units))
	known := make(map[uint32]bool, len(units)*2)
	for i := range units {
		va := parseVA(units[i].VA)
		byVA[va] = &units[i]
		symbols[va] = units[i].Symbol
		known[va] = true
		for _, c := range units[i].Callees {
			known[parseVA(c)] = true
		}
	}
	vtableSyms := loadVtableSymbols()
	for va := range vtableSyms {
		known[va] = true
	}

	fmt.Fprintf(os.Stderr, "Reading cached disassembly for %d units...\n", len(units))
	cached := readAllCached(units, *workers)

	s := &splitter{img: img, tables: &tableSet{}, known: known}
	nr := learnNoreturn(img, cached, known, symbols)
	s.noreturn = map[uint32]bool{}
	for va := range nr.funcs {
		s.noreturn[va] = true
	}
	s.noreturnIAT = nr.slots
	fmt.Fprintf(os.Stderr, "No-return: %d functions, %d imports\n", len(nr.funcs), len(nr.slots))

	// Global switch tables, from every unit whose cached decode is in sync at the dispatch.
	for _, cu := range cached {
		for i := range cu.insts {
			if strings.HasPrefix(cu.insts[i].Disasm, "jmp\tdword ptr [4*") {
				if tbls, _, ok := img.switchAt(cu.insts, i, cu.va); ok {
					for _, t := range tbls {
						s.tables.add(t)
					}
				}
			}
		}
	}
	fmt.Fprintf(os.Stderr, "Switch tables found: %d\n", len(s.tables.ranges))

	if *oneVA != "" {
		explain(s, byVA[parseVA(*oneVA)])
		return
	}
	if *selftest {
		os.Exit(runSelftest(s, units, *workers))
	}

	plan := planChanges(s, units, byVA, vtableSyms, *workers)
	plan.report(*verbose)
	if !*apply {
		fmt.Println("\nDry run. Re-run with -apply to write build/units/, build/noreturn.txt and .local/cache/funcs/.")
		return
	}
	worklock.With(func() { plan.apply(s, nr, symbols) })
}

func die(err error) {
	if err != nil {
		fmt.Fprintf(os.Stderr, "resplit: %v\n", err)
		os.Exit(1)
	}
}

func loadVtableSymbols() map[uint32]string {
	out := map[uint32]string{}
	b, err := os.ReadFile("build/classes.json")
	if err != nil {
		return out
	}
	var classes []classFile
	if json.Unmarshal(b, &classes) != nil {
		return out
	}
	// Same naming and precedence as tools/extract_units.
	for _, c := range classes {
		for i, m := range c.VirtualMethods {
			if va := parseVA(m); out[va] == "" {
				out[va] = fmt.Sprintf("%s::vfunc_%d", c.DemangledName, i)
			}
		}
		for _, vt := range c.VTables {
			for i, m := range vt.VirtualMethods {
				if va := parseVA(m); out[va] == "" {
					out[va] = fmt.Sprintf("%s::vfunc_%d_off_%X", c.DemangledName, i, vt.Offset)
				}
			}
		}
	}
	return out
}

func readAllCached(units []decomp.UnitEntry, workers int) []*cachedUnit {
	out := make([]*cachedUnit, len(units))
	parallel(len(units), workers, func(i int) {
		if cu, err := readCachedUnit(parseVA(units[i].VA)); err == nil {
			out[i] = cu
		}
	})
	var kept []*cachedUnit
	for _, cu := range out {
		if cu != nil {
			kept = append(kept, cu)
		}
	}
	return kept
}

func parallel(n, workers int, fn func(i int)) {
	if workers < 1 {
		workers = 1
	}
	next := make(chan int)
	var wg sync.WaitGroup
	for w := 0; w < workers; w++ {
		wg.Add(1)
		go func() {
			defer wg.Done()
			for i := range next {
				fn(i)
			}
		}()
	}
	for i := 0; i < n; i++ {
		next <- i
	}
	close(next)
	wg.Wait()
}

func explain(s *splitter, u *decomp.UnitEntry) {
	if u == nil {
		die(fmt.Errorf("unit not found"))
	}
	start := parseVA(u.VA)
	pieces, err := s.partition(start, start+u.Size)
	die(err)
	fmt.Printf("%s %s (%d bytes, status %s, valid=%v)\n", u.VA, u.Symbol, u.Size, u.Status, decomp.IsValidCodeUnit(u.VA))
	for _, p := range pieces {
		fmt.Printf("  %s-%s %5dB %-6s %s\n", hex8(p.start), hex8(p.end), p.end-p.start, p.kind, p.reason)
		if p.kind != "data" {
			for _, in := range p.insts {
				fmt.Printf("      %08X: %-24s %s\n", in.VA, in.RawHex, in.Disasm)
			}
		}
	}
}

// runSelftest re-splits every matched, non-thunk unit and checks it comes back as exactly one code piece with
// the same boundaries. Matched units are known-correct functions, so any deviation is a splitter bug.
func runSelftest(s *splitter, units []decomp.UnitEntry, workers int) int {
	var idx []int
	for i, u := range units {
		if u.Status == "matched" && !u.IsThunk {
			idx = append(idx, i)
		}
	}
	var mu sync.Mutex
	var bad []string
	paddingOnly, gluedTable, gluedFuncs := 0, 0, 0
	parallel(len(idx), workers, func(k int) {
		u := units[idx[k]]
		start := parseVA(u.VA)
		pieces, err := s.partition(start, start+u.Size)
		var why string
		hasData := false
		for _, p := range pieces {
			if p.kind == "data" {
				hasData = true
			}
		}
		switch {
		case err == nil && len(pieces) == 1 && pieces[0].kind == "code" && pieces[0].start == start &&
			pieces[0].end < start+u.Size && s.allPadding(pieces[0].end, start+u.Size):
			// The matched unit includes its trailing alignment padding; comparisons trim padding anyway.
			mu.Lock()
			paddingOnly++
			mu.Unlock()
			return
		case err == nil && hasData:
			// A switch table (and often the next function) glued into a unit that an agent nonetheless
			// matched, usually with naked asm. Pre-existing; matched units are never modified.
			mu.Lock()
			gluedTable++
			mu.Unlock()
			return
		case err == nil && len(pieces) > 1 && s.paddedApart(pieces):
			// Several complete functions separated by padding, matched together as one unit.
			mu.Lock()
			gluedFuncs++
			mu.Unlock()
			return
		case err != nil:
			why = err.Error()
		case len(pieces) != 1:
			var parts []string
			for _, p := range pieces {
				parts = append(parts, fmt.Sprintf("%s+%d:%s", hex8(p.start), p.end-p.start, p.kind))
			}
			why = fmt.Sprintf("split into %d pieces: %s", len(pieces), strings.Join(parts, " "))
		case pieces[0].start != start || pieces[0].end != start+u.Size:
			why = fmt.Sprintf("boundary %s-%s, expected %s-%s", hex8(pieces[0].start), hex8(pieces[0].end), u.VA, hex8(start+u.Size))
		case pieces[0].kind != "code":
			why = pieces[0].kind + ": " + pieces[0].reason
		}
		if why != "" {
			mu.Lock()
			bad = append(bad, fmt.Sprintf("%s %-40.40s %s", u.VA, u.Symbol, why))
			mu.Unlock()
		}
	})
	sort.Strings(bad)
	fmt.Printf("Selftest over %d matched units:\n", len(idx))
	fmt.Printf("  exact boundaries               : %d\n", len(idx)-len(bad)-paddingOnly-gluedTable-gluedFuncs)
	fmt.Printf("  same, minus trailing padding   : %d\n", paddingOnly)
	fmt.Printf("  unit already holds a glued table (pre-existing, untouched): %d\n", gluedTable)
	fmt.Printf("  unit already holds several padded functions (pre-existing, untouched): %d\n", gluedFuncs)
	fmt.Printf("  DISAGREE                       : %d\n", len(bad))
	for i, b := range bad {
		if i == 40 {
			fmt.Printf("  ... %d more\n", len(bad)-40)
			break
		}
		fmt.Println("  " + b)
	}
	if len(bad) > 0 {
		return 1
	}
	return 0
}
