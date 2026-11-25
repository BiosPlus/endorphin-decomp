package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"path/filepath"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

func printTerminalDashboard(r DashboardReport) {
	p1 := r.Phase1
	p2 := r.Phase2

	fmt.Println("================================================================================")
	fmt.Println("               ENDORPHIN 2.7.1 DECOMPILATION PROGRESS DASHBOARD                 ")
	fmt.Println("================================================================================")
	fmt.Println("PHASE 2: PORTABLE C++20 LIFTING & STRUCT RECOVERY")
	fmt.Printf("Core Scope ASM Lifted : %5d / %5d (%6.2f%%) | %8d / %8d bytes (%6.2f%%)\n",
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes))
	fmt.Printf("Full Binary ASM Lifted: %5d / %5d (%6.2f%%) | %8d / %8d bytes (%6.2f%%)\n",
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
		p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes))
	fmt.Printf("Portable C++ (All)    : %5d / %5d (%6.2f%%) | %d pure-C++ + %d lifted\n",
		p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
		p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.LiftedAsmFuncs)
	fmt.Printf("Named Functions       : %5d / %5d (%6.2f%%) | %d RTTI + %d newly named\n",
		p2.TotalNamedFuncs, p2.InScopeUnitsTotal, pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal)),
		p2.InitialRTTINamedFuncs, p2.NewlyNamedFromAnonFuncs)
	fmt.Printf("Recovered Fields      : %5d unique (%d annotations across %d classes, %d symbols)\n",
		p2.UniqueFields, p2.TotalFieldAnnotations, p2.ClassesWithFields, p2.SymbolsCataloged)
	fmt.Println("--------------------------------------------------------------------------------")
	fmt.Println("PHASE 1: MSVC 2005 BYTE-MATCH ARCHIVE")
	fmt.Printf("RTTI Classes          : %5d total | %5d in-scope | %5d out-of-scope (MFC/ATL/std)\n",
		p1.TotalClasses, p1.InScopeClasses, p1.MFCClasses)
	fmt.Printf("In-Scope Matched      : %5d / %5d (%6.2f%%) | %d / %d bytes (%.2f MB)\n",
		p1.InScopeMatchedFuncs, p1.InScopeFuncs, pct(uint64(p1.InScopeMatchedFuncs), uint64(p1.InScopeFuncs)),
		p1.InScopeMatchedBytes, p1.InScopeBytes, float64(p1.InScopeBytes)/(1024.0*1024.0))
	fmt.Printf("  - AI Matched        : %5d funcs | %d deterministic auto_solve stubs\n",
		p1.AIMatchedFuncs, p1.AutoSolveFuncs)
	if p1.NotQueueableFuncs > 0 {
		fmt.Printf("  - Not queued        : %5d funcs | %d bytes skipped/deferred/unparseable\n",
			p1.NotQueueableFuncs, p1.NotQueueableBytes)
	}
	fmt.Println("================================================================================")
}

func main() {
	htmlOut := flag.String("html", "", "Optional path to write HTML dashboard (e.g. docs/index.html, CI only)")
	readmeFlag := flag.Bool("readme", false, "Update README.md with the latest verified metrics")
	ciFlag := flag.Bool("ci", false, "Print GitHub Actions Markdown step summary")
	flag.Parse()

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

	p1, mfcClasses := collectPhase1Stats(units, classes, true)
	p2 := collectPhase2Stats(units, mfcClasses, defaultPhase2Options())
	report := DashboardReport{Phase1: p1, Phase2: p2}

	if *ciFlag {
		fmt.Print(renderCISummary(report))
	} else {
		printTerminalDashboard(report)
	}

	if *htmlOut != "" {
		if err := os.MkdirAll(filepath.Dir(*htmlOut), 0o755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", *htmlOut, err)
			os.Exit(1)
		}
		if err := os.WriteFile(*htmlOut, []byte(renderHTMLDashboard(report)), 0o644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing %s: %v\n", *htmlOut, err)
			os.Exit(1)
		}
		fmt.Printf("Wrote HTML dashboard to %s\n", *htmlOut)
	}

	if *readmeFlag {
		if err := os.WriteFile("README.md", []byte(renderReadme(report)), 0o644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing README.md: %v\n", err)
			os.Exit(1)
		}
		fmt.Println("Updated README.md")
	}
}
