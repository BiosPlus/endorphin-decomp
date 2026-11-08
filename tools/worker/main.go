package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
)

type UnitEntry struct {
	VA          string   `json:"va"`
	Size        uint32   `json:"size"`
	SHA256      string   `json:"sha256"`
	Symbol      string   `json:"symbol"`
	Callees     []string `json:"callees"`
	NumCallees  int      `json:"num_callees"`
	IsLeaf      bool     `json:"is_leaf"`
	IsThunk     bool     `json:"is_thunk"`
	Relocations []string `json:"relocations"`
	Status      string   `json:"status"`
}

type ClassEntry struct {
	DemangledName  string   `json:"demangled_name"`
	Namespace      string   `json:"namespace"`
	ShortName      string   `json:"short_name"`
	HeaderPath     string   `json:"header_path"`
	IsTemplate     bool     `json:"is_template"`
	IsMFCOrStd     bool     `json:"is_mfc_or_std"`
	VTableVA       string   `json:"vtable_va"`
	VirtualMethods []string `json:"virtual_methods"`
}

func isOutOfScope(u UnitEntry, mfcClasses map[string]bool) bool {
	if u.Status == "out_of_scope" || u.IsThunk {
		return true
	}
	va64, err := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
	if err == nil {
		va := uint32(va64)
		if (va >= 0x006A5C5C && va <= 0x006A7943) || (va >= 0x008728F0 && va <= 0x009221CA) {
			return true
		}
	}
	if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
		clsName := u.Symbol[:idx]
		if mfcClasses[clsName] {
			return true
		}
	}
	return false
}

func isCompleted(status string) bool {
	return status == "decompiled" || status == "matched" || status == "solved"
}

func isValidCodeUnit(va string) bool {
	cachePath := filepath.Join(".local", "cache", "funcs", va+".txt")
	b, err := os.ReadFile(cachePath)
	if err != nil {
		return true
	}
	lines := strings.Split(strings.TrimSpace(string(b)), "\n")
	lastInst := ""
	for _, l := range lines {
		l = strings.TrimSpace(l)
		if l == "" || strings.HasPrefix(l, "//") {
			continue
		}
		if strings.Contains(l, "<unknown>") || strings.Contains(l, "\tretf") || strings.Contains(l, "\tinto") || strings.Contains(l, "\tin\t") || strings.Contains(l, "\tout\t") {
			return false
		}
		lastInst = l
	}
	if lastInst == "" {
		return false
	}
	return strings.Contains(lastInst, "\tret") || strings.Contains(lastInst, "\tjmp")
}

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

	unitsBytes, err := os.ReadFile("build/units.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/units.json: %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/units.json: %v\n", err)
		os.Exit(1)
	}

	classesBytes, err := os.ReadFile("build/classes.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/classes.json: %v\n", err)
		os.Exit(1)
	}
	var classes []ClassEntry
	if err := json.Unmarshal(classesBytes, &classes); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/classes.json: %v\n", err)
		os.Exit(1)
	}

	classByName := make(map[string]*ClassEntry, len(classes))
	mfcClasses := make(map[string]bool)
	for i := range classes {
		c := &classes[i]
		classByName[c.DemangledName] = c
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
		}
	}

	var candidates []UnitEntry
	for _, u := range units {
		if isOutOfScope(u, mfcClasses) || isCompleted(u.Status) || u.Status == "deferred" || u.Status == "skipped" {
			continue
		}
		if isValidCodeUnit(u.VA) {
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
