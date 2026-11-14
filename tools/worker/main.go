package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strings"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

func main() {
	subcmd := "next"
	args := os.Args[1:]
	if len(args) > 0 && !strings.HasPrefix(args[0], "-") {
		subcmd = args[0]
		args = args[1:]
	}

	fs := flag.NewFlagSet("worker", flag.ExitOnError)
	countFlag := fs.Int("n", 20, "Number of next smallest unmatched leaf functions to display")
	_ = fs.Parse(args)

	if subcmd != "next" {
		fmt.Fprintf(os.Stderr, "Unknown subcommand %q (supported: next)\n", subcmd)
		os.Exit(1)
	}

	unitsBytes, err := unitstore.ReadAll()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	var units []decomp.UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}

	classesBytes, err := os.ReadFile("build/classes.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/classes.json: %v\n", err)
		os.Exit(1)
	}
	var classes []decomp.ClassEntry
	if err := json.Unmarshal(classesBytes, &classes); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/classes.json: %v\n", err)
		os.Exit(1)
	}

	classByName := make(map[string]*decomp.ClassEntry, len(classes))
	mfcClasses := make(map[string]bool)
	for i := range classes {
		c := &classes[i]
		classByName[c.DemangledName] = c
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
		}
	}

	var candidates []decomp.UnitEntry
	for _, u := range units {
		if decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses) || decomp.IsCompleted(u.Status) || u.Status == "deferred" || u.Status == "skipped" {
			continue
		}
		if decomp.IsValidCodeUnit(u.VA) {
			candidates = append(candidates, u)
		}
	}

	sort.Slice(candidates, func(i, j int) bool {
		if candidates[i].Size != candidates[j].Size {
			return candidates[i].Size < candidates[j].Size
		}
		if candidates[i].NumCallees != candidates[j].NumCallees {
			return candidates[i].NumCallees < candidates[j].NumCallees
		}
		return candidates[i].VA < candidates[j].VA
	})

	limit := *countFlag
	if limit > len(candidates) {
		limit = len(candidates)
	}

	fmt.Printf("=== Endorphin Worker Queue: Next %d Unmatched Leaf Functions (out of %d remaining leaves) ===\n\n",
		limit, len(candidates))

	for i := 0; i < limit; i++ {
		u := candidates[i]
		fmt.Printf("--------------------------------------------------------------------------------\n")
		fmt.Printf("[%d/%d] VA: %s | Symbol: %s | Size: %d bytes | Status: %s\n",
			i+1, limit, u.VA, u.Symbol, u.Size, u.Status)
		fmt.Printf("--------------------------------------------------------------------------------\n")

		// Check if associated with a class header in include/
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			clsName := u.Symbol[:idx]
			if cls, ok := classByName[clsName]; ok && cls.HeaderPath != "" {
				fmt.Printf("// Class Header: %s (%s)\n", cls.HeaderPath, cls.DemangledName)
				if hdrBytes, err := os.ReadFile(cls.HeaderPath); err == nil {
					hdrLines := strings.Split(strings.TrimSpace(string(hdrBytes)), "\n")
					if len(hdrLines) > 35 {
						hdrLines = append(hdrLines[:35], "    // ... (truncated) ...", "};")
					}
					for _, hl := range hdrLines {
						fmt.Println(hl)
					}
					fmt.Println()
				}
			}
		}

		cachePath := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
		if disasmBytes, err := os.ReadFile(cachePath); err == nil {
			fmt.Print(string(disasmBytes))
		} else {
			fmt.Printf("  (Disassembly cache not found at %s)\n", cachePath)
		}
		fmt.Println()
	}
}
