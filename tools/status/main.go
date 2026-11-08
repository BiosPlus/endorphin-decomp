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
	SkipReason  string   `json:"skip_reason,omitempty"`
	MatchedBy   string   `json:"matched_by,omitempty"`
	MatchedAt   string   `json:"matched_at,omitempty"`
}

type ModelStats struct {
	Model        string
	MatchedFuncs int
	MatchedBytes uint64
}

type ClassEntry struct {
	DemangledName  string   `json:"demangled_name"`
	Namespace      string   `json:"namespace"`
	IsMFCOrStd     bool     `json:"is_mfc_or_std"`
	IsTemplate     bool     `json:"is_template"`
	VTableVA       string   `json:"vtable_va"`
	VirtualMethods []string `json:"virtual_methods"`
}

type TierStats struct {
	Name         string
	ShortName    string
	TotalFuncs   int
	TotalBytes   uint64
	MatchedFuncs int
	MatchedBytes uint64
	RemainFuncs  int
	RemainBytes  uint64
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

func renderHTMLDashboard(
	totalClasses, inScopeClasses, mfcClasses int,
	totalFuncs int, totalBytes uint64,
	outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs int,
	outOfScopeBytes, outThunkBytes, outCRTMFCBytes uint64,
	inScopeFuncs, inScopeMatchedFuncs int,
	inScopeBytes, inScopeMatchedBytes uint64,
	tiers []*TierStats,
	leaderboard []ModelStats,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	sb.WriteString(`<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Endorphin 2.7.1 Decompilation Dashboard</title>
  <style>
    :root {
      --bg: #0d1117;
      --panel: #161b22;
      --border: #30363d;
      --text: #e6edf3;
      --muted: #8b949e;
      --accent: #2ea043;
      --accent-bright: #3fb950;
      --blue: #58a6ff;
    }
    * { box-sizing: border-box; }
    body {
      margin: 0;
      padding: 32px 20px;
      font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, Arial, sans-serif;
      background: var(--bg);
      color: var(--text);
      line-height: 1.5;
    }
    .container {
      max-width: 980px;
      margin: 0 auto;
    }
    h1 {
      margin: 0 0 4px 0;
      font-size: 28px;
    }
    .subtitle {
      color: var(--muted);
      margin-bottom: 24px;
      font-size: 14px;
    }
    .cards {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(210px, 1fr));
      gap: 16px;
      margin-bottom: 24px;
    }
    .card {
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 16px;
    }
    .card-label {
      color: var(--muted);
      font-size: 12px;
      text-transform: uppercase;
      letter-spacing: 0.05em;
    }
    .card-value {
      font-size: 24px;
      font-weight: 700;
      margin-top: 4px;
    }
    .card-sub {
      color: var(--muted);
      font-size: 13px;
      margin-top: 4px;
    }
    .panel {
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 20px;
      margin-bottom: 24px;
    }
    .progress-bar {
      width: 100%;
      height: 12px;
      background: #21262d;
      border-radius: 6px;
      overflow: hidden;
      margin: 8px 0 4px 0;
    }
    .progress-fill {
      height: 100%;
      background: linear-gradient(90deg, var(--accent), var(--accent-bright));
    }
    table {
      width: 100%;
      border-collapse: collapse;
      font-size: 14px;
    }
    th, td {
      padding: 10px 12px;
      text-align: left;
      border-bottom: 1px solid var(--border);
    }
    th {
      color: var(--muted);
      font-weight: 600;
    }
    .num {
      text-align: right;
      font-variant-numeric: tabular-nums;
      font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, monospace;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>Endorphin 2.7.1 Decompilation Progress</h1>
    <div class="subtitle">Target: <code>endorphin.exe</code> (MSVC 2005 RTM 14.00.50727.42) &bull; SHA-256: <code>7a1274d9...efbd505</code></div>
`)

	sb.WriteString(fmt.Sprintf(`    <div class="cards">
      <div class="card">
        <div class="card-label">In-Scope Functions Matched</div>
        <div class="card-value">%.2f%%</div>
        <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
        <div class="card-sub">%d / %d functions</div>
      </div>
      <div class="card">
        <div class="card-label">In-Scope Code Bytes</div>
        <div class="card-value">%.2f%%</div>
        <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
        <div class="card-sub">%d / %d bytes (%.2f MB)</div>
      </div>
      <div class="card">
        <div class="card-label">RTTI Classes Extracted</div>
        <div class="card-value">%d</div>
        <div class="card-sub">%d in-scope &bull; %d MFC/ATL/std</div>
      </div>
      <div class="card">
        <div class="card-label">Out-of-Scope Boilerplate</div>
        <div class="card-value">%d</div>
        <div class="card-sub">%d thunks &bull; %d CRT/MFC/SEH</div>
      </div>
    </div>
`,
		funcPct, funcPct, inScopeMatchedFuncs, inScopeFuncs,
		bytePct, bytePct, inScopeMatchedBytes, inScopeBytes, float64(inScopeBytes)/(1024.0*1024.0),
		totalClasses, inScopeClasses, mfcClasses,
		outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
	))

	sb.WriteString(`    <div class="panel">
      <h2 style="margin-top:0;font-size:18px;">In-Scope Progress by Size Tier</h2>
      <table>
        <thead>
          <tr>
            <th>Size Tier</th>
            <th class="num">Matched / Total Funcs</th>
            <th class="num">Func %</th>
            <th class="num">Matched / Total Bytes</th>
            <th class="num">Byte %</th>
            <th class="num">Remaining</th>
          </tr>
        </thead>
        <tbody>
`)

	for _, t := range tiers {
		fPct := pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs))
		bPct := pct(t.MatchedBytes, t.TotalBytes)
		sb.WriteString(fmt.Sprintf(`          <tr>
            <td><strong>%s</strong></td>
            <td class="num">%d / %d</td>
            <td class="num">%.2f%%</td>
            <td class="num">%d / %d</td>
            <td class="num">%.2f%%</td>
            <td class="num">%d fn</td>
          </tr>
`, t.ShortName, t.MatchedFuncs, t.TotalFuncs, fPct, t.MatchedBytes, t.TotalBytes, bPct, t.RemainFuncs))
	}

	sb.WriteString(`        </tbody>
      </table>
    </div>
    <div class="panel">
      <h2 style="margin-top:0;font-size:18px;">Squad Leaderboard (Matches by Model)</h2>
      <table>
        <thead>
          <tr>
            <th>Model / Solver</th>
            <th class="num">Matched Functions</th>
            <th class="num">Matched Bytes</th>
            <th class="num">Share of Matched</th>
          </tr>
        </thead>
        <tbody>
`)

	for _, m := range leaderboard {
		sharePct := pct(uint64(m.MatchedFuncs), uint64(inScopeMatchedFuncs))
		sb.WriteString(fmt.Sprintf(`          <tr>
            <td><code>%s</code></td>
            <td class="num">%d</td>
            <td class="num">%d</td>
            <td class="num">%.2f%%</td>
          </tr>
`, m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
	}

	sb.WriteString(fmt.Sprintf(`        </tbody>
      </table>
    </div>
    <div class="panel">
      <h2 style="margin-top:0;font-size:18px;">Binary Scope Breakdown</h2>
      <table>
        <tbody>
          <tr><td>Total Functions in <code>.text</code></td><td class="num">%d funcs</td><td class="num">%d bytes (%.2f MB)</td></tr>
          <tr><td>In-Scope Application &amp; Engine Code</td><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
          <tr><td>Out-of-Scope (Thunks + CRT/MFC/SEH)</td><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
        </tbody>
      </table>
    </div>
  </div>
</body>
</html>
`,
		totalFuncs, totalBytes, float64(totalBytes)/(1024.0*1024.0),
		inScopeFuncs, pct(uint64(inScopeFuncs), uint64(totalFuncs)), inScopeBytes, pct(inScopeBytes, totalBytes),
		outOfScopeFuncs, pct(uint64(outOfScopeFuncs), uint64(totalFuncs)), outOfScopeBytes, pct(outOfScopeBytes, totalBytes),
	))

	return sb.String()
}

func renderReadme(
	totalClasses, inScopeClasses, mfcClasses int,
	totalFuncs int, totalBytes uint64,
	outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs int,
	outOfScopeBytes, outThunkBytes, outCRTMFCBytes uint64,
	inScopeFuncs, inScopeMatchedFuncs int,
	inScopeBytes, inScopeMatchedBytes uint64,
	tiers []*TierStats,
	leaderboard []ModelStats,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	sb.WriteString("# Endorphin 2.7.1 Decompilation Project\n\n")
	sb.WriteString("A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.\n\n")
	sb.WriteString("## Verified Byte-Match Scoreboard\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**)\n", inScopeMatchedFuncs, inScopeFuncs, funcPct))
	sb.WriteString(fmt.Sprintf("- **In-Scope Code Bytes Matched:** `%d / %d bytes` (**%.2f%%** of %.2f MB)\n", inScopeMatchedBytes, inScopeBytes, bytePct, float64(inScopeBytes)/(1024.0*1024.0)))
	sb.WriteString(fmt.Sprintf("- **RTTI Classes Extracted:** `%d` total (`%d` in-scope application/engine classes, `%d` MFC/ATL/std classes)\n", totalClasses, inScopeClasses, mfcClasses))
	sb.WriteString(fmt.Sprintf("- **Out-of-Scope Boilerplate:** `%d` units (`%d` jump/adjustor thunks, `%d` CRT/MFC/SEH funclets)\n\n", outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs))

	sb.WriteString("### Progress by Function Size Tier\n\n")
	sb.WriteString("| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, t := range tiers {
		fPct := pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs))
		bPct := pct(t.MatchedBytes, t.TotalBytes)
		sb.WriteString(fmt.Sprintf("| **%s** | %d / %d | %.2f%% | %d / %d | %.2f%% | %d fn |\n",
			t.ShortName, t.MatchedFuncs, t.TotalFuncs, fPct, t.MatchedBytes, t.TotalBytes, bPct, t.RemainFuncs))
	}

	sb.WriteString("\n### Squad Leaderboard (Matches by Model)\n\n")
	sb.WriteString("| Model / Solver | Matched Functions | Matched Bytes | Share of Matched |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	for _, m := range leaderboard {
		sharePct := pct(uint64(m.MatchedFuncs), uint64(inScopeMatchedFuncs))
		sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n", m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
	}

	sb.WriteString("\n## Tooling & Workflow\n\n")
	sb.WriteString("- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.\n")
	sb.WriteString("- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.\n")
	sb.WriteString("- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.\n")
	sb.WriteString("- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.\n")
	return sb.String()
}

func renderCISummary(
	totalClasses, inScopeClasses, mfcClasses int,
	totalFuncs int, totalBytes uint64,
	outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs int,
	outOfScopeBytes, outThunkBytes, outCRTMFCBytes uint64,
	inScopeFuncs, inScopeMatchedFuncs int,
	inScopeBytes, inScopeMatchedBytes uint64,
	tiers []*TierStats,
	leaderboard []ModelStats,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	sb.WriteString("## Endorphin 2.7.1 Decompilation Scoreboard\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**)\n", inScopeMatchedFuncs, inScopeFuncs, funcPct))
	sb.WriteString(fmt.Sprintf("- **In-Scope Code Bytes Matched:** `%d / %d bytes` (**%.2f%%** of %.2f MB)\n", inScopeMatchedBytes, inScopeBytes, bytePct, float64(inScopeBytes)/(1024.0*1024.0)))
	sb.WriteString(fmt.Sprintf("- **RTTI Classes Extracted:** `%d` total (`%d` in-scope, `%d` MFC/ATL/std)\n", totalClasses, inScopeClasses, mfcClasses))
	sb.WriteString(fmt.Sprintf("- **Out-of-Scope Boilerplate:** `%d` units (`%d` thunks, `%d` CRT/MFC/SEH)\n\n", outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs))

	sb.WriteString("| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: | ---: | ---: |\n")
	for _, t := range tiers {
		fPct := pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs))
		bPct := pct(t.MatchedBytes, t.TotalBytes)
		sb.WriteString(fmt.Sprintf("| **%s** | %d / %d | %.2f%% | %d / %d | %.2f%% | %d fn |\n",
			t.ShortName, t.MatchedFuncs, t.TotalFuncs, fPct, t.MatchedBytes, t.TotalBytes, bPct, t.RemainFuncs))
	}

	sb.WriteString("\n### Squad Leaderboard (Matches by Model)\n\n")
	sb.WriteString("| Model / Solver | Matched Functions | Matched Bytes | Share of Matched |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	for _, m := range leaderboard {
		sharePct := pct(uint64(m.MatchedFuncs), uint64(inScopeMatchedFuncs))
		sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n", m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
	}
	return sb.String()
}

func main() {
	htmlOut := flag.String("html", "", "Optional path to write HTML dashboard (e.g. docs/index.html, CI only)")
	readmeFlag := flag.Bool("readme", false, "Update only the progress section in README.md")
	ciFlag := flag.Bool("ci", false, "Print GitHub Actions Markdown step summary")
	flag.Parse()

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
		{Name: "Tiny   (<32B)    ", ShortName: "Tiny (<32B)"},
		{Name: "Small  (32-256B) ", ShortName: "Small (32-256B)"},
		{Name: "Medium (256-512B)", ShortName: "Medium (256-512B)"},
		{Name: "Large  (>512B)   ", ShortName: "Large (>512B)"},
	}

	modelStatsMap := make(map[string]*ModelStats)
	unitsUpdated := false

	for i := range units {
		u := &units[i]
		totalFuncs++
		totalBytes += uint64(u.Size)

		if oos, reason := isOutOfScope(*u, mfcClasses); oos {
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
			if u.MatchedBy == "" {
				u.MatchedBy = "script:auto_solve"
				unitsUpdated = true
			}
			inScopeMatchedFuncs++
			inScopeMatchedBytes += uint64(u.Size)
			tier.MatchedFuncs++
			tier.MatchedBytes += uint64(u.Size)

			ms, ok := modelStatsMap[u.MatchedBy]
			if !ok {
				ms = &ModelStats{Model: u.MatchedBy}
				modelStatsMap[u.MatchedBy] = ms
			}
			ms.MatchedFuncs++
			ms.MatchedBytes += uint64(u.Size)
		} else {
			inScopeRemainFuncs++
			inScopeRemainBytes += uint64(u.Size)
			tier.RemainFuncs++
			tier.RemainBytes += uint64(u.Size)
		}
	}

	if unitsUpdated {
		if outJSON, err := json.MarshalIndent(units, "", "  "); err == nil {
			_ = os.WriteFile("build/units.json", append(outJSON, '\n'), 0644)
		}
	}

	var leaderboard []ModelStats
	for _, ms := range modelStatsMap {
		leaderboard = append(leaderboard, *ms)
	}
	sort.Slice(leaderboard, func(i, j int) bool {
		if leaderboard[i].MatchedFuncs != leaderboard[j].MatchedFuncs {
			return leaderboard[i].MatchedFuncs > leaderboard[j].MatchedFuncs
		}
		if leaderboard[i].MatchedBytes != leaderboard[j].MatchedBytes {
			return leaderboard[i].MatchedBytes > leaderboard[j].MatchedBytes
		}
		return leaderboard[i].Model < leaderboard[j].Model
	})

	if *ciFlag {
		fmt.Print(renderCISummary(
			len(classes), inScopeClassCount, mfcClassCount,
			totalFuncs, totalBytes,
			outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
			outOfScopeBytes, outThunkBytes, outCRTMFCBytes,
			inScopeFuncs, inScopeMatchedFuncs,
			inScopeBytes, inScopeMatchedBytes,
			tiers,
			leaderboard,
		))
	} else {
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
		fmt.Println("--------------------------------------------------------------------------------")
		fmt.Println("Squad Leaderboard (Matches by Model)")
		fmt.Println("Model / Solver              | Matched Funcs | Matched Bytes | Share of Matched")
		fmt.Println("----------------------------+---------------+---------------+-----------------")
		for _, m := range leaderboard {
			fmt.Printf("%-27s | %13d | %13d | %14.2f%%\n",
				m.Model, m.MatchedFuncs, m.MatchedBytes,
				pct(uint64(m.MatchedFuncs), uint64(inScopeMatchedFuncs)),
			)
		}
		fmt.Println("================================================================================")
	}

	if *htmlOut != "" {
		if err := os.MkdirAll(filepath.Dir(*htmlOut), 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", *htmlOut, err)
			os.Exit(1)
		}
		html := renderHTMLDashboard(
			len(classes), inScopeClassCount, mfcClassCount,
			totalFuncs, totalBytes,
			outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
			outOfScopeBytes, outThunkBytes, outCRTMFCBytes,
			inScopeFuncs, inScopeMatchedFuncs,
			inScopeBytes, inScopeMatchedBytes,
			tiers,
			leaderboard,
		)
		if err := os.WriteFile(*htmlOut, []byte(html), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing %s: %v\n", *htmlOut, err)
			os.Exit(1)
		}
		fmt.Printf("Wrote HTML dashboard to %s\n", *htmlOut)
	}

	if *readmeFlag {
		readme := renderReadme(
			len(classes), inScopeClassCount, mfcClassCount,
			totalFuncs, totalBytes,
			outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
			outOfScopeBytes, outThunkBytes, outCRTMFCBytes,
			inScopeFuncs, inScopeMatchedFuncs,
			inScopeBytes, inScopeMatchedBytes,
			tiers,
			leaderboard,
		)
		if err := os.WriteFile("README.md", []byte(readme), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing README.md: %v\n", err)
			os.Exit(1)
		}
		fmt.Println("Updated README.md")
	}
}
