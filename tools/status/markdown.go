package main

import (
	"fmt"
	"strings"
)

func renderCISummary(r DashboardReport) string {
	p1 := r.Phase1
	p2 := r.Phase2
	var sb strings.Builder

	// Active Phase 2 scoreboard first
	sb.WriteString("## Phase 2: Portable C++20 Lifting & Struct Recovery\n\n")
	sb.WriteString(fmt.Sprintf("- **Core Scope ASM Lifted:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**)\n",
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes)))
	sb.WriteString(fmt.Sprintf("- **Full Binary ASM Lifted:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**)\n",
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
		p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes)))
	sb.WriteString(fmt.Sprintf("- **Total Portable C++ Coverage:** `%d / %d` funcs (**%.2f%%**) | `%d / %d bytes` (**%.2f%%**) — `%d` pure-C++ baseline + `%d` lifted\n",
		p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
		p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes, pct(p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes),
		p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.LiftedAsmFuncs))
	sb.WriteString(fmt.Sprintf("- **Named Functions:** `%d / %d` (**%.2f%%**) — `%d` RTTI + `%d` newly named (`%d` RTTI refined)\n",
		p2.TotalNamedFuncs, p2.InScopeUnitsTotal, pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal)),
		p2.InitialRTTINamedFuncs, p2.NewlyNamedFromAnonFuncs, p2.RenamedRTTIFuncs))
	sb.WriteString(fmt.Sprintf("- **Recovered Struct Fields:** `%d` unique (`%d` annotations across `%d` classes) | `%d` symbols in `lifted/symbols.json`\n\n",
		p2.UniqueFields, p2.TotalFieldAnnotations, p2.ClassesWithFields, p2.SymbolsCataloged))

	sb.WriteString("| Core Subsystem | Category | Pure C++ | Lifted / ASM | ASM Lift % | Portable C++ % | Fields |\n")
	sb.WriteString("| :--- | :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, sub := range p2.Subsystems {
		if sub.Stats.TotalFuncs == 0 {
			continue
		}
		sb.WriteString(fmt.Sprintf("| **%s** | %s | %d | %d / %d | %.2f%% | %.2f%% | %d |\n",
			sub.Name, sub.Category,
			sub.Stats.AlreadyPureCppFuncs,
			sub.Stats.LiftedAsmFuncs, sub.Stats.AsmFuncs,
			pct(uint64(sub.Stats.LiftedAsmFuncs), uint64(sub.Stats.AsmFuncs)),
			pct(uint64(sub.Stats.PortableCppFuncs), uint64(sub.Stats.TotalFuncs)),
			sub.FieldCount))
	}
	sb.WriteString(fmt.Sprintf("| **Core Scope Total** | *All Core* | %d | %d / %d | %.2f%% | %.2f%% | %d |\n",
		p2.ScopeCore.AlreadyPureCppFuncs,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs,
		pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs)),
		p2.CoreFieldAnnotations))

	sb.WriteString("\n### Phase 2 Lift Leaderboard (by Model)\n\n")
	sb.WriteString("| Model | Lifted Funcs | Lifted Bytes | Share | Recovered Fields |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: |\n")
	if len(p2.Leaderboard) == 0 {
		sb.WriteString("| *(no lifted functions yet)* | 0 | 0 | 0.00% | 0 |\n")
	} else {
		for _, m := range p2.Leaderboard {
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% | %d |\n",
				m.Model, m.LiftedFuncs, m.LiftedBytes,
				pct(uint64(m.LiftedFuncs), uint64(p2.ScopeAll.LiftedFuncs)),
				m.FieldsRecovered))
		}
	}

	// Compact Phase 1 archive
	funcPct := pct(uint64(p1.InScopeMatchedFuncs), uint64(p1.InScopeFuncs))
	bytePct := pct(p1.InScopeMatchedBytes, p1.InScopeBytes)

	sb.WriteString("\n## Endorphin 2.7.1 Decompilation Scoreboard (Phase 1: MSVC8 Byte-Match)\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**) — `%d` by AI models, `%d` by deterministic `auto_solve`\n",
		p1.InScopeMatchedFuncs, p1.InScopeFuncs, funcPct, p1.AIMatchedFuncs, p1.AutoSolveFuncs))
	sb.WriteString(fmt.Sprintf("- **In-Scope Code Bytes Matched:** `%d / %d bytes` (**%.2f%%** of %.2f MB)\n",
		p1.InScopeMatchedBytes, p1.InScopeBytes, bytePct, float64(p1.InScopeBytes)/(1024.0*1024.0)))
	sb.WriteString(fmt.Sprintf("- **RTTI Classes Extracted:** `%d` total (`%d` in-scope, `%d` MFC/ATL/std) | **Out-of-Scope:** `%d` (`%d` thunks, `%d` CRT/MFC/SEH)\n\n",
		p1.TotalClasses, p1.InScopeClasses, p1.MFCClasses, p1.OutOfScopeFuncs, p1.OutThunkFuncs, p1.OutCRTMFCFuncs))

	sb.WriteString("<details>\n<summary>Phase 1 Size Tiers &amp; AI Model Leaderboard</summary>\n\n")
	sb.WriteString("| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, t := range p1.Tiers {
		sb.WriteString(fmt.Sprintf("| **%s** | %d / %d | %.2f%% | %d / %d | %.2f%% | %d fn |\n",
			t.ShortName, t.MatchedFuncs, t.TotalFuncs, pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs)),
			t.MatchedBytes, t.TotalBytes, pct(t.MatchedBytes, t.TotalBytes), t.RemainFuncs))
	}

	sb.WriteString("\n### Squad Leaderboard (AI Model Matches)\n\n")
	sb.WriteString("| Model | Matched Functions | Matched Bytes | Share of AI Matches |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	if len(p1.Leaderboard) == 0 {
		sb.WriteString("| *(no AI matches yet)* | 0 | 0 | 0.00% |\n")
	} else {
		for _, m := range p1.Leaderboard {
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n",
				m.Model, m.MatchedFuncs, m.MatchedBytes, pct(uint64(m.MatchedFuncs), uint64(p1.AIMatchedFuncs))))
		}
	}
	sb.WriteString("\n</details>\n")

	return sb.String()
}

func renderReadme(r DashboardReport) string {
	p1 := r.Phase1
	p2 := r.Phase2
	var sb strings.Builder
	funcPct := pct(uint64(p1.InScopeMatchedFuncs), uint64(p1.InScopeFuncs))
	bytePct := pct(p1.InScopeMatchedBytes, p1.InScopeBytes)

	sb.WriteString("# Endorphin 2.7.1 Decompilation Project\n\n")
	sb.WriteString("A byte-matching C++ decompilation and portable C++20 lifting project for **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`, MSVC 2005 RTM `14.00.50727.42`, x86).\n\n")
	sb.WriteString("## Status\n\n")
	sb.WriteString(fmt.Sprintf("- **Phase 1 — MSVC8 Byte-Match (`src/`):** **%.2f%% Complete** (`%d / %d` in-scope functions, `%.2f MB`)\n",
		funcPct, p1.InScopeMatchedFuncs, p1.InScopeFuncs, float64(p1.InScopeMatchedBytes)/(1024.0*1024.0)))
	if p2.ScopeAll.TotalFuncs > 0 {
		coreLiftPct := pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs))
		portablePct := pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs))
		sb.WriteString(fmt.Sprintf("- **Phase 2 — Portable C++20 Lift & Struct Recovery (`lifted/`):** `%d / %d` core ASM functions lifted (**%.2f%%**), `%d / %d` total portable C++ (**%.2f%%**), `%d` unique struct fields recovered across `%d` classes\n",
			p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, coreLiftPct,
			p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, portablePct,
			p2.UniqueFields, p2.ClassesWithFields))
	}
	sb.WriteString("\n")

	sb.WriteString("## Contributing to Phase 2 (Portable C++20 Lifting)\n\n")
	sb.WriteString("Phase 1 matched 100% of in-scope functions byte-for-byte, but ~96% of `src/` is x86 `__declspec(naked) __asm`. **Phase 2** lifts those functions into clean, portable C++20 in `lifted/` while recovering human-readable names (`lifted/symbols.json`) and struct layouts (`lifted/include/*.h`) — without touching the verified byte-match in `src/`.\n\n")
	sb.WriteString("### Prerequisites\n\n")
	sb.WriteString("- **macOS or Linux** (no Windows, Wine, or MSVC 2005 required)\n")
	sb.WriteString("- **Go 1.22+** and **clang++ or g++** with C++20 support (used for instant `-std=c++20 -c` verification)\n")
	sb.WriteString("- An AI coding CLI (**`claude`**, **`agy`**, or a local LLM via **MLX**)\n")
	sb.WriteString("- *(Optional, recommended)* Your own legal copy of `endorphin.exe` at `.local/bin/endorphin.exe` so `liftwork claim` can decode `.rdata` strings and float constants into briefings\n\n")

	sb.WriteString("### 1. Setup\n\n")
	sb.WriteString("```bash\n")
	sb.WriteString("git clone https://github.com/BiosPlus/endorphin-decomp.git\n")
	sb.WriteString("cd endorphin-decomp\n")
	sb.WriteString("mkdir -p .local/bin && go build -o .local/bin/liftwork ./tools/liftwork\n")
	sb.WriteString("./.local/bin/liftwork status\n")
	sb.WriteString("```\n\n")

	sb.WriteString("### 2. Autonomous Lifting (Cloud CLIs: `claude` / `agy`)\n\n")
	sb.WriteString("```bash\n")
	sb.WriteString("# Lift core engine subsystems leaf-first (Args: [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY])\n")
	sb.WriteString("LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5\n\n")
	sb.WriteString("# Working on a fork? Disable auto-push (PUSH_EVERY=0) before opening a PR\n")
	sb.WriteString("LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 25 5 0\n\n")
	sb.WriteString("# Target specific subsystems (e.g. animation exporters & file I/O) or the full binary\n")
	sb.WriteString("LIFT_SCOPE=BVHIO,AcclaimIO,FBXIO,NMFileIO LIFT_DEPS_FIRST=1 tools/lift.sh 20 5 0\n")
	sb.WriteString("LIFT_SCOPE=all LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 0\n")
	sb.WriteString("```\n\n")

	sb.WriteString("### Contribution Rules\n\n")
	sb.WriteString("- Never edit `src/`, `build/units/`, `build/classes.json`, or `README.md` by hand.\n")
	sb.WriteString("- Never commit `.local/`, `docs/`, `*_PLAN.md`, or binary files (`.exe`, `.dll`, `.obj`).\n")
	sb.WriteString("- Always let `liftwork check` validate, compile-check, merge, and commit your lifted functions, then open a PR against `main`.\n\n")

	sb.WriteString("## Phase 1: Verified Byte-Match Scoreboard\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**) — `%d` by AI models, `%d` by deterministic `auto_solve`\n", p1.InScopeMatchedFuncs, p1.InScopeFuncs, funcPct, p1.AIMatchedFuncs, p1.AutoSolveFuncs))
	sb.WriteString(fmt.Sprintf("- **In-Scope Code Bytes Matched:** `%d / %d bytes` (**%.2f%%** of %.2f MB)\n", p1.InScopeMatchedBytes, p1.InScopeBytes, bytePct, float64(p1.InScopeBytes)/(1024.0*1024.0)))
	sb.WriteString(fmt.Sprintf("- **RTTI Classes Extracted:** `%d` total (`%d` in-scope application/engine classes, `%d` MFC/ATL/std classes)\n", p1.TotalClasses, p1.InScopeClasses, p1.MFCClasses))
	sb.WriteString(fmt.Sprintf("- **Out-of-Scope Boilerplate:** `%d` units (`%d` jump/adjustor thunks, `%d` CRT/MFC/SEH funclets)\n\n", p1.OutOfScopeFuncs, p1.OutThunkFuncs, p1.OutCRTMFCFuncs))

	sb.WriteString("<details>\n<summary>Phase 1 Size Tiers &amp; AI Model Leaderboard</summary>\n\n")
	sb.WriteString("### Progress by Function Size Tier\n\n")
	sb.WriteString("| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, t := range p1.Tiers {
		sb.WriteString(fmt.Sprintf("| **%s** | %d / %d | %.2f%% | %d / %d | %.2f%% | %d fn |\n",
			t.ShortName, t.MatchedFuncs, t.TotalFuncs, pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs)),
			t.MatchedBytes, t.TotalBytes, pct(t.MatchedBytes, t.TotalBytes), t.RemainFuncs))
	}

	sb.WriteString("\n### Squad Leaderboard (AI Model Matches)\n\n")
	sb.WriteString("| Model | Matched Functions | Matched Bytes | Share of AI Matches |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	if len(p1.Leaderboard) == 0 {
		sb.WriteString("| *(no AI matches yet)* | 0 | 0 | 0.00% |\n")
	} else {
		for _, m := range p1.Leaderboard {
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n",
				m.Model, m.MatchedFuncs, m.MatchedBytes, pct(uint64(m.MatchedFuncs), uint64(p1.AIMatchedFuncs))))
		}
	}
	sb.WriteString("\n</details>\n")

	sb.WriteString("\n## Tooling & Workflow\n\n")
	sb.WriteString("- `tools/lift.sh [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]`: Autonomous parallel Phase 2 C++20 lifting & struct/naming recovery orchestrator.\n")
	sb.WriteString("- `./.local/bin/liftwork status`: Live Phase 2 lift, naming, and struct-field recovery scoreboard.\n")
	sb.WriteString("- `./.local/bin/liftwork merge-structs`: Rebuilds `lifted/symbols.json` and `lifted/include/*.h` from `build/lifted/`.\n")
	sb.WriteString("- `go run ./tools/build_and_match -all`: Verifies 100% MSVC 2005 byte-for-byte parity in `src/` against `.local/bin/endorphin.exe`.\n")
	sb.WriteString("- `go run ./tools/status -readme`: Regenerates `README.md` with the latest verified Phase 1 & Phase 2 metrics.\n")
	return sb.String()
}
