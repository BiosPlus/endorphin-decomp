package main

import (
	"encoding/json"
	"fmt"
	"os"
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
	IsMFCOrStd     bool     `json:"is_mfc_or_std"`
	IsTemplate     bool     `json:"is_template"`
	VTableVA       string   `json:"vtable_va"`
	VirtualMethods []string `json:"virtual_methods"`
}

type TierStats struct {
	Name          string
	TotalFuncs    int
	TotalBytes    uint64
	MatchedFuncs  int
	MatchedBytes  uint64
	RemainFuncs   int
	RemainBytes   uint64
}

func isOutOfScope(u UnitEntry, mfcClasses map[string]bool) (bool, string) {
	if u.Status == "out_of_scope" {
		if u.IsThunk {
			return true, "thunk"
		}
		return true, "crt_mfc"
	}
	if u.IsThunk {
		return true, "thunk"
	}
	va64, err := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
	if err == nil {
		va := uint32(va64)
		// MSVC 2005 CRT startup/import thunk block and compiler-generated SEH (.text$x) / atexit (.text$y) block
		if (va >= 0x006A5C5C && va <= 0x006A7943) || (va >= 0x008728F0 && va <= 0x009221CA) {
			return true, "crt_mfc"
		}
	}
	if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
		clsName := u.Symbol[:idx]
		if mfcClasses[clsName] {
			return true, "crt_mfc"
		}
	}
	return false, ""
}

func isCompleted(status string) bool {
	return status == "decompiled" || status == "matched" || status == "solved"
}

func pct(part, total uint64) float64 {
	if total == 0 {
		return 0.0
	}
	return (float64(part) * 100.0) / float64(total)
}

func main() {
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

	mfcClasses := make(map[string]bool)
	mfcClassCount := 0
	inScopeClassCount := 0
	for _, c := range classes {
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
			mfcClassCount++
		} else {
			inScopeClassCount++
		}
	}

	var totalFuncs int
	var totalBytes uint64

	var outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs int
	var outOfScopeBytes, outThunkBytes, outCRTMFCBytes uint64

	var inScopeFuncs, inScopeMatchedFuncs, inScopeRemainFuncs int
	var inScopeBytes, inScopeMatchedBytes, inScopeRemainBytes uint64

	tiers := []*TierStats{
		{Name: "Tiny   (<32B)    "},
		{Name: "Small  (32-256B) "},
		{Name: "Medium (256-512B)"},
		{Name: "Large  (>512B)   "},
	}

	for _, u := range units {
		totalFuncs++
		totalBytes += uint64(u.Size)

		if oos, reason := isOutOfScope(u, mfcClasses); oos {
			outOfScopeFuncs++
			outOfScopeBytes += uint64(u.Size)
			if reason == "thunk" {
				outThunkFuncs++
				outThunkBytes += uint64(u.Size)
			} else {
				outCRTMFCFuncs++
				outCRTMFCBytes += uint64(u.Size)
			}
			continue
		}

		inScopeFuncs++
		inScopeBytes += uint64(u.Size)

		var tier *TierStats
		switch {
		case u.Size < 32:
			tier = tiers[0]
		case u.Size <= 256:
			tier = tiers[1]
		case u.Size <= 512:
			tier = tiers[2]
		default:
			tier = tiers[3]
		}

		tier.TotalFuncs++
		tier.TotalBytes += uint64(u.Size)

		if isCompleted(u.Status) {
			inScopeMatchedFuncs++
			inScopeMatchedBytes += uint64(u.Size)
			tier.MatchedFuncs++
			tier.MatchedBytes += uint64(u.Size)
		} else {
			inScopeRemainFuncs++
			inScopeRemainBytes += uint64(u.Size)
			tier.RemainFuncs++
			tier.RemainBytes += uint64(u.Size)
		}
	}

	fmt.Println("================================================================================")
	fmt.Println("               ENDORPHIN 2.7.1 DECOMPILATION PROGRESS DASHBOARD                 ")
	fmt.Println("================================================================================")
	fmt.Printf("RTTI Classes : %5d total | %5d in-scope | %5d out-of-scope (MFC/ATL/std)\n",
		len(classes), inScopeClassCount, mfcClassCount)
	fmt.Printf("All Units    : %5d funcs | %9d bytes (%.2f MB)\n",
		totalFuncs, totalBytes, float64(totalBytes)/(1024.0*1024.0))
	fmt.Println("--------------------------------------------------------------------------------")
	fmt.Printf("Out-of-Scope : %5d funcs (%5.1f%%) | %9d bytes (%5.1f%%)\n",
		outOfScopeFuncs, pct(uint64(outOfScopeFuncs), uint64(totalFuncs)),
		outOfScopeBytes, pct(outOfScopeBytes, totalBytes))
	fmt.Printf("  - Thunks   : %5d funcs          | %9d bytes\n", outThunkFuncs, outThunkBytes)
	fmt.Printf("  - CRT/MFC  : %5d funcs          | %9d bytes (CRT/MFC/SEH funclets)\n", outCRTMFCFuncs, outCRTMFCBytes)
	fmt.Printf("In-Scope     : %5d funcs (%5.1f%%) | %9d bytes (%5.1f%%)\n",
		inScopeFuncs, pct(uint64(inScopeFuncs), uint64(totalFuncs)),
		inScopeBytes, pct(inScopeBytes, totalBytes))
	fmt.Println("--------------------------------------------------------------------------------")
	fmt.Printf("IN-SCOPE PROGRESS: %d / %d funcs (%.2f%%) | %d / %d bytes (%.2f%%)\n",
		inScopeMatchedFuncs, inScopeFuncs, pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs)),
		inScopeMatchedBytes, inScopeBytes, pct(inScopeMatchedBytes, inScopeBytes))
	fmt.Println("--------------------------------------------------------------------------------")
	fmt.Println("Size Tier         |   Decompiled / Total Funcs   |     Decompiled / Total Bytes     | Remaining")
	fmt.Println("------------------+------------------------------+----------------------------------+----------")
	for _, t := range tiers {
		fmt.Printf("%s | %6d / %6d (%6.2f%%)  | %8d / %8d (%6.2f%%)  | %6d fn\n",
			t.Name,
			t.MatchedFuncs, t.TotalFuncs, pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs)),
			t.MatchedBytes, t.TotalBytes, pct(t.MatchedBytes, t.TotalBytes),
			t.RemainFuncs,
		)
	}
	fmt.Println("================================================================================")
}
