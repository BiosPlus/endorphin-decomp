package main

import (
	"encoding/json"
	"fmt"
	"html"
	"strings"
)

type chartPayload struct {
	Active      []TimeBucket `json:"active"`
	Latest      []TimeBucket `json:"latest"`
	Wall        []TimeBucket `json:"wall"`
	BaseFuncs   int          `json:"baseFuncs"`
	BaseBytes   uint64       `json:"baseBytes"`
	TotalFuncs  int          `json:"totalFuncs"`
	TotalBytes  uint64       `json:"totalBytes"`
	RateBps     float64      `json:"rateBps"`
	NowSec      int64        `json:"nowSec"`
	ETASec      int64        `json:"etaSec"`
	AccentColor string       `json:"accent"`
	BarColor    string       `json:"bar"`
	ShowFields  bool         `json:"showFields"`
}

func renderVelocityPanel(
	idPrefix, title, subtitle string,
	series ChartSeries,
	completedFuncs, totalFuncs int,
	completedBytes, totalBytes uint64,
	baseFuncs int, baseBytes uint64,
	accentColor, barColor string,
	showFields bool,
) string {
	v := series.Velocity
	remainBytes := uint64(0)
	if totalBytes > completedBytes {
		remainBytes = totalBytes - completedBytes
	}
	etaVal, etaSub := formatETA(v.Projection, remainBytes, v.ActiveBytesPerHr)
	var etaUnix int64
	if v.Projection.Valid && !v.Projection.Done {
		etaUnix = v.Projection.ETA.Unix()
	}

	var sb strings.Builder
	sb.WriteString(fmt.Sprintf(`      <div class="panel">
        <div class="chart-header">
          <div>
            <h2 style="margin:0;font-size:18px;">%s</h2>
            <div style="color:var(--muted);font-size:13px;margin-top:2px;">%s</div>
          </div>
`, title, subtitle))

	if v.EventCount == 0 {
		sb.WriteString(`        </div>
        <div class="zero-state">
          <div class="zero-state-title">Ready for Phase 2 Lifting</div>
          <p>No lifted functions recorded in <code>build/lifted/</code> yet. Run <code>go run ./tools/liftwork next</code> or <code>tools/lift.sh</code> to begin lifting <code>__asm</code>/naked stubs into portable C++20.</p>
        </div>
      </div>
`)
		return sb.String()
	}

	payload := chartPayload{
		Active:      series.Active,
		Latest:      series.Latest,
		Wall:        series.Wall,
		BaseFuncs:   baseFuncs,
		BaseBytes:   baseBytes,
		TotalFuncs:  totalFuncs,
		TotalBytes:  totalBytes,
		RateBps:     v.Projection.RateBps,
		NowSec:      v.Projection.Now.Unix(),
		ETASec:      etaUnix,
		AccentColor: accentColor,
		BarColor:    barColor,
		ShowFields:  showFields,
	}
	payloadJSON, err := json.Marshal(payload)
	if err != nil {
		payloadJSON = []byte("{}")
	}

	fieldsBtn := ""
	if showFields {
		fieldsBtn = `<button type="button" class="chart-btn" data-metric="fields">Struct Fields</button>`
	}

	sb.WriteString(fmt.Sprintf(`          <div class="chart-controls">
            <div class="btn-group" id="%s-mode-group" role="group" aria-label="Timeline mode">
              <button type="button" class="chart-btn active" data-mode="active">Active Sessions</button>
              <button type="button" class="chart-btn" data-mode="latest">Latest Session</button>
              <button type="button" class="chart-btn" data-mode="wall">Wall Clock</button>
            </div>
            <div class="btn-group" id="%s-metric-group" role="group" aria-label="Metric">
              <button type="button" class="chart-btn active" data-metric="funcs">Funcs</button>
              <button type="button" class="chart-btn" data-metric="bytes">Bytes</button>
              %s
              <button type="button" class="chart-btn" data-metric="pct">%% &amp; ETA</button>
            </div>
          </div>
        </div>

        <div class="velocity-kpis">
          <div class="vkpi">
            <span class="vkpi-label">Completion</span>
            <span class="vkpi-val">%.2f%%</span>
            <span class="vkpi-sub">bytes &bull; %.2f%% of functions</span>
          </div>
          <div class="vkpi">
            <span class="vkpi-label">Projected Completion (ETA)</span>
            <span class="vkpi-val">%s</span>
            <span class="vkpi-sub">%s</span>
          </div>
          <div class="vkpi">
            <span class="vkpi-label">Active Wave Velocity</span>
            <span class="vkpi-val">%.0f fn/hr</span>
            <span class="vkpi-sub">%.1f KB/hr across %.1f active hrs</span>
          </div>
          <div class="vkpi">
            <span class="vkpi-label">Latest Session Pace</span>
            <span class="vkpi-val">+%d funcs</span>
            <span class="vkpi-sub">%.0f fn/hr (+%d B in latest run)</span>
          </div>
          <div class="vkpi">
            <span class="vkpi-label">Peak 10-Min Burst</span>
            <span class="vkpi-val">%d funcs</span>
            <span class="vkpi-sub">%d fn/hr eq. (+%d B / 10m)</span>
          </div>
          <div class="vkpi">
            <span class="vkpi-label">Events Logged</span>
            <span class="vkpi-val">%d funcs</span>
            <span class="vkpi-sub">%d bytes across %d active intervals</span>
          </div>
        </div>

        <div class="chart-wrap">
          <svg id="%s-svg" class="velocity-svg" viewBox="0 0 1600 270" role="img" aria-label="%s">
            <defs>
              <linearGradient id="%s-grad" x1="0" y1="0" x2="0" y2="1">
                <stop offset="0%%" stop-color="%s" stop-opacity="0.32"/>
                <stop offset="100%%" stop-color="%s" stop-opacity="0.02"/>
              </linearGradient>
            </defs>
            <g class="chart-grid">
              <line x1="56" y1="20" x2="1546" y2="20" stroke="#21262d" stroke-dasharray="3,3"/>
              <line x1="56" y1="74" x2="1546" y2="74" stroke="#21262d" stroke-dasharray="3,3"/>
              <line x1="56" y1="128" x2="1546" y2="128" stroke="#21262d" stroke-dasharray="3,3"/>
              <line x1="56" y1="182" x2="1546" y2="182" stroke="#21262d" stroke-dasharray="3,3"/>
              <line x1="56" y1="236" x2="1546" y2="236" stroke="#30363d"/>
            </g>
            <g class="chart-bars"></g>
            <polygon class="chart-area" points="" fill="url(#%s-grad)"/>
            <polyline class="chart-line" points="" fill="none" stroke="%s" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
            <polyline class="chart-proj" points="" fill="none" stroke="#d29922" stroke-width="2" stroke-dasharray="6,5" stroke-linecap="round"/>
            <g class="chart-gaps"></g>
            <g class="chart-dots"></g>
            <g class="chart-axes"></g>
            <line class="chart-hover-line" x1="0" y1="20" x2="0" y2="236" stroke="#8b949e" stroke-width="1" stroke-dasharray="4,3" visibility="hidden"/>
          </svg>
          <div id="%s-tooltip" class="chart-tooltip" hidden></div>
        </div>
        <div class="chart-legend">
          <span><span class="legend-swatch" style="background:%s;"></span> Cumulative Progress (left axis)</span>
          <span><span class="legend-swatch" style="background:%s;"></span> Interval Throughput (right axis)</span>
          <span><span class="legend-swatch" style="background:#d29922;"></span> Run-rate ETA (%% &amp; ETA view)</span>
          <span id="%s-note" style="margin-inline-start:auto;color:var(--muted);"></span>
        </div>
        <script type="application/json" id="%s-data">%s</script>
      </div>
`,
		idPrefix, idPrefix, fieldsBtn,
		pct(completedBytes, totalBytes), pct(uint64(completedFuncs), uint64(totalFuncs)),
		etaVal, etaSub,
		v.ActiveFuncsPerHr, v.ActiveBytesPerHr/1024.0, v.ActiveHours,
		v.RecentSessionFuncs, v.RecentSessionRateHr, v.RecentSessionBytes,
		v.Peak10mFuncs, v.Peak10mFuncs*6, v.Peak10mBytes,
		v.EventCount, v.TotalBytes, len(series.Active),
		idPrefix, html.EscapeString(title),
		idPrefix, accentColor, accentColor,
		idPrefix, accentColor,
		idPrefix,
		accentColor, barColor,
		idPrefix,
		idPrefix, string(payloadJSON),
	))
	return sb.String()
}

func renderSubsystemTableRows(p2 Phase2Stats) string {
	var sb strings.Builder
	lastCat := ""
	for _, sub := range p2.Subsystems {
		if sub.Stats.TotalFuncs == 0 {
			continue
		}
		if sub.Category != lastCat {
			lastCat = sub.Category
			sb.WriteString(fmt.Sprintf(`            <tr class="cat-row"><th scope="row" colspan="9">%s</th></tr>
`, html.EscapeString(sub.Category)))
		}
		asmLiftPct := pct(uint64(sub.Stats.LiftedAsmFuncs), uint64(sub.Stats.AsmFuncs))
		portablePct := pct(uint64(sub.Stats.PortableCppFuncs), uint64(sub.Stats.TotalFuncs))
		sb.WriteString(fmt.Sprintf(`            <tr>
              <th scope="row">%s</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
`,
			html.EscapeString(sub.Name),
			sub.Stats.TotalFuncs,
			sub.Stats.AlreadyPureCppFuncs,
			sub.Stats.LiftedAsmFuncs, sub.Stats.AsmFuncs,
			sub.Stats.RemainAsmBytes,
			asmLiftPct,
			portablePct,
			sub.NamedFuncs,
			sub.FieldCount,
		))
	}

	sb.WriteString(fmt.Sprintf(`            <tr class="total-row">
              <th scope="row">Core Scope Total</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
            <tr>
              <th scope="row">Other (Non-Core)</th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
            <tr class="total-row">
              <th scope="row">All Tracked in <code>src/</code></th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%d / %d</td>
              <td class="num">%d B</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.2f%%</td>
              <td class="num">%d</td>
              <td class="num">%d</td>
            </tr>
`,
		p2.ScopeCore.TotalFuncs, p2.ScopeCore.AlreadyPureCppFuncs,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, p2.ScopeCore.RemainAsmBytes,
		pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
		pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs)),
		p2.CoreNamedFuncs, p2.CoreFieldAnnotations,

		p2.OtherSubsystem.Stats.TotalFuncs, p2.OtherSubsystem.Stats.AlreadyPureCppFuncs,
		p2.OtherSubsystem.Stats.LiftedAsmFuncs, p2.OtherSubsystem.Stats.AsmFuncs, p2.OtherSubsystem.Stats.RemainAsmBytes,
		pct(uint64(p2.OtherSubsystem.Stats.LiftedAsmFuncs), uint64(p2.OtherSubsystem.Stats.AsmFuncs)),
		pct(uint64(p2.OtherSubsystem.Stats.PortableCppFuncs), uint64(p2.OtherSubsystem.Stats.TotalFuncs)),
		p2.OtherSubsystem.NamedFuncs, p2.OtherSubsystem.FieldCount,

		p2.ScopeAll.TotalFuncs, p2.ScopeAll.AlreadyPureCppFuncs,
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, p2.ScopeAll.RemainAsmBytes,
		pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
		pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
		p2.CoreNamedFuncs+p2.OtherSubsystem.NamedFuncs, p2.TotalFieldAnnotations,
	))
	return sb.String()
}

func renderPhase2LeaderboardRows(p2 Phase2Stats) string {
	var sb strings.Builder
	if len(p2.Leaderboard) == 0 {
		sb.WriteString(`            <tr>
              <th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">No lifted functions yet</th>
              <td class="num">0</td>
              <td class="num">0</td>
              <td class="num">0.00%</td>
              <td class="num">-</td>
              <td class="num">-</td>
              <td class="num">-</td>
              <td class="num">0</td>
            </tr>
`)
		return sb.String()
	}
	totalLifted := p2.ScopeAll.LiftedFuncs
	for _, m := range p2.Leaderboard {
		avg, med, largest := m.sizeStats()
		sb.WriteString(fmt.Sprintf(`            <tr>
              <th scope="row"><code class="model-badge">%s</code></th>
              <td class="num">%d</td>
              <td class="num">%d</td>
              <td class="num">%.2f%%</td>
              <td class="num">%.0f B</td>
              <td class="num">%d B</td>
              <td class="num">%d B</td>
              <td class="num">%d</td>
            </tr>
`,
			html.EscapeString(m.Model),
			m.LiftedFuncs,
			m.LiftedBytes,
			pct(uint64(m.LiftedFuncs), uint64(totalLifted)),
			avg, med, largest,
			m.FieldsRecovered,
		))
	}
	return sb.String()
}

func renderHTMLDashboard(r DashboardReport) string {
	p1 := r.Phase1
	p2 := r.Phase2

	var sb strings.Builder
	funcPct := pct(uint64(p1.InScopeMatchedFuncs), uint64(p1.InScopeFuncs))
	bytePct := pct(p1.InScopeMatchedBytes, p1.InScopeBytes)

	coreLiftFuncPct := pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs))
	coreLiftBytePct := pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes)
	allLiftFuncPct := pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs))
	allLiftBytePct := pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes)
	portableFuncPct := pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs))
	portableBytePct := pct(p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes)
	corePortableFuncPct := pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs))
	namedPct := pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal))

	phase1StatusBadge := fmt.Sprintf("Phase 1: MSVC8 Byte-Match &mdash; %.2f%%", bytePct)
	if p1.InScopeFuncs > 0 && p1.InScopeMatchedFuncs == p1.InScopeFuncs && p1.InScopeMatchedBytes == p1.InScopeBytes {
		phase1StatusBadge = "Phase 1: MSVC8 Byte-Match &mdash; 100.00% Complete"
	}

	sb.WriteString(`<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Endorphin 2.7.1 Decompilation &amp; Lifting Dashboard</title>
  <style>
    :root {
      --bg: #0d1117;
      --panel: #161b22;
      --panel-hover: #1c2128;
      --border: #30363d;
      --text: #e6edf3;
      --muted: #8b949e;
      --accent: #2ea043;
      --accent-bright: #3fb950;
      --blue: #58a6ff;
      --blue-deep: #1f6feb;
      --purple: #a371f7;
      --cyan: #39c5cf;
      --gold: #d29922;
    }
    * { box-sizing: border-box; }
    body {
      margin: 0;
      padding-block: 28px;
      padding-inline: clamp(16px, 2vw, 32px);
      font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, Arial, sans-serif;
      background: var(--bg);
      color: var(--text);
      line-height: 1.5;
    }
    .container { inline-size: 100%; max-inline-size: 1860px; margin-inline: auto; }
    h1 { margin: 0 0 4px 0; font-size: 28px; }
    .subtitle { color: var(--muted); margin-block-end: 16px; font-size: 14px; }
    .phase-banner {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(320px, 1fr));
      gap: 14px;
      margin-block-end: 18px;
    }
    .phase-pill {
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 14px 18px;
      display: flex;
      flex-direction: column;
      gap: 6px;
    }
    .phase-pill.p1 { border-inline-start: 4px solid var(--accent-bright); }
    .phase-pill.p2 { border-inline-start: 4px solid var(--blue); }
    .phase-pill-head { display: flex; align-items: center; justify-content: space-between; gap: 10px; flex-wrap: wrap; }
    .phase-badge {
      display: inline-flex; align-items: center; gap: 6px;
      font-size: 12px; font-weight: 700; letter-spacing: 0.03em;
      padding: 3px 10px; border-radius: 999px; text-transform: uppercase;
    }
    .phase-badge.done { background: rgba(63, 185, 80, 0.16); color: var(--accent-bright); border: 1px solid rgba(63, 185, 80, 0.45); }
    .phase-badge.active { background: rgba(88, 166, 255, 0.14); color: var(--blue); border: 1px solid rgba(88, 166, 255, 0.42); }
    .phase-pill-meta { font-size: 13px; color: var(--muted); }
    .tabs {
      display: flex; gap: 8px; flex-wrap: wrap;
      border-bottom: 1px solid var(--border);
      margin-block-end: 22px; padding-block-end: 10px;
    }
    .tab-btn {
      background: var(--panel); color: var(--muted);
      border: 1px solid var(--border); border-radius: 6px;
      padding: 8px 16px; font-size: 14px; font-weight: 600; cursor: pointer;
    }
    .tab-btn:hover { color: var(--text); background: var(--panel-hover); }
    .tab-btn.active { color: #ffffff; background: #1f6feb; border-color: #388bfd; }
    .tab-panel[hidden] { display: none; }
    .cards {
      inline-size: 100%;
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
      gap: 16px;
      margin-block-end: 24px;
    }
    .card { background: var(--panel); border: 1px solid var(--border); border-radius: 8px; padding: 16px 18px; }
    .card-label { color: var(--muted); font-size: 12px; text-transform: uppercase; letter-spacing: 0.05em; }
    .card-value { font-size: 24px; font-weight: 700; margin-block-start: 4px; font-variant-numeric: tabular-nums; }
    .card-sub { color: var(--muted); font-size: 13px; margin-block-start: 4px; }
    .panel { background: var(--panel); border: 1px solid var(--border); border-radius: 8px; padding: 20px 24px; margin-block-end: 24px; }
    .panels-split { inline-size: 100%; display: grid; grid-template-columns: 1fr; gap: 24px; margin-block-end: 24px; }
    .panels-split > .panel { margin-block-end: 0; }
    @media (min-width: 1360px) {
      .panels-split { grid-template-columns: minmax(0, 1.45fr) minmax(0, 1fr); align-items: start; }
    }
    .progress-bar { inline-size: 100%; block-size: 10px; background: #21262d; border-radius: 6px; overflow: clip; margin: 8px 0 4px 0; }
    .progress-fill { block-size: 100%; background: linear-gradient(90deg, var(--accent), var(--accent-bright)); }
    .progress-fill.blue { background: linear-gradient(90deg, var(--blue-deep), var(--blue)); }
    .progress-fill.cyan { background: linear-gradient(90deg, var(--blue), var(--cyan)); }
    .table-wrapper { inline-size: 100%; max-inline-size: 100%; overflow-x: auto; scrollbar-gutter: stable; overscroll-behavior-x: contain; }
    table { inline-size: 100%; border-collapse: separate; border-spacing: 0; font-size: 14px; }
    th, td { padding: 9px 14px; text-align: left; border-bottom: 1px solid var(--border); vertical-align: middle; }
    thead th { background: var(--panel); color: var(--muted); font-weight: 600; white-space: nowrap; }
    tbody th { color: var(--text); font-weight: 600; white-space: nowrap; }
    tbody tr:hover th, tbody tr:hover td { background: var(--panel-hover); }
    tbody tr:last-child th, tbody tr:last-child td { border-bottom: none; }
    tr.cat-row th { background: #12171f; color: var(--blue); font-size: 12px; text-transform: uppercase; letter-spacing: 0.06em; padding-block: 7px; }
    tr.total-row th, tr.total-row td { background: #121820; font-weight: 700; border-top: 1px solid var(--border); }
    .num { text-align: right; white-space: nowrap; font-variant-numeric: tabular-nums; font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, monospace; }
    .model-badge {
      display: inline-block; font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, monospace;
      font-size: 13px; font-weight: 500; padding: 2px 8px; border-radius: 4px;
      background: #0d1117; border: 1px solid var(--border); white-space: nowrap;
    }
    .sub-row th { padding-inline-start: 28px; color: var(--muted); font-weight: 500; }
    .decile-strip { display: flex; gap: 3px; min-inline-size: 220px; inline-size: 100%; max-inline-size: 360px; }
    .decile-cell { flex: 1 1 20px; block-size: 18px; border-radius: 3px; }
    .chart-header { display: flex; justify-content: space-between; align-items: flex-start; flex-wrap: wrap; gap: 12px; margin-block-end: 16px; }
    .chart-controls { display: flex; gap: 8px; flex-wrap: wrap; }
    .btn-group { display: inline-flex; background: #0d1117; border: 1px solid var(--border); border-radius: 6px; overflow: clip; }
    .chart-btn {
      background: transparent; color: var(--muted); border: none;
      padding: 5px 10px; font-size: 12px; font-weight: 600; cursor: pointer;
      border-inline-end: 1px solid var(--border);
    }
    .chart-btn:last-child { border-inline-end: none; }
    .chart-btn:hover { color: var(--text); background: #21262d; }
    .chart-btn.active { color: #ffffff; background: #1f6feb; }
    .velocity-kpis { inline-size: 100%; display: grid; grid-template-columns: repeat(auto-fit, minmax(200px, 1fr)); gap: 12px; margin-block-end: 16px; }
    .vkpi { background: #0d1117; border: 1px solid var(--border); border-radius: 6px; padding: 10px 14px; display: flex; flex-direction: column; }
    .vkpi-label { color: var(--muted); font-size: 11px; text-transform: uppercase; letter-spacing: 0.04em; }
    .vkpi-val { font-size: 18px; font-weight: 700; margin-block-start: 2px; font-variant-numeric: tabular-nums; }
    .vkpi-sub { color: var(--muted); font-size: 12px; margin-block-start: 2px; }
    .chart-wrap { position: relative; background: #0d1117; border: 1px solid var(--border); border-radius: 6px; padding: 8px 4px 4px 4px; }
    .velocity-svg { inline-size: 100%; block-size: 270px; display: block; cursor: crosshair; }
    .chart-tooltip {
      position: absolute; inset-block-start: 14px; inset-inline-start: 68px;
      background: rgba(22, 27, 34, 0.96); border: 1px solid var(--border); border-radius: 6px;
      padding: 8px 12px; font-size: 12px; line-height: 1.45; pointer-events: none;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.45); max-inline-size: 380px; z-index: 10;
    }
    .chart-legend { display: flex; align-items: center; gap: 18px; flex-wrap: wrap; font-size: 12px; color: var(--muted); margin-block-start: 10px; }
    .legend-swatch { display: inline-block; inline-size: 10px; block-size: 10px; border-radius: 2px; margin-inline-end: 5px; vertical-align: middle; }
    .zero-state { background: #0d1117; border: 1px dashed var(--border); border-radius: 6px; padding: 20px 22px; color: var(--muted); }
    .zero-state-title { color: var(--text); font-weight: 600; margin-block-end: 4px; }
  </style>
</head>
<body>
  <div class="container">
    <h1>Endorphin 2.7.1 Decompilation &amp; Lifting Dashboard</h1>
    <div class="subtitle">Target: <code>endorphin.exe</code> (MSVC 2005 RTM 14.00.50727.42) &bull; SHA-256: <code>7a1274d9...efbd505</code></div>
`)

	// Two-phase banner
	sb.WriteString(fmt.Sprintf(`    <div class="phase-banner">
      <div class="phase-pill p2">
        <div class="phase-pill-head">
          <span class="phase-badge active">Phase 2: Portable C++20 Lifting &amp; Structs</span>
          <span class="num" style="font-size:13px;color:var(--blue);">Core ASM: %.2f%% &bull; All ASM: %.2f%% &bull; Portable: %.2f%%</span>
        </div>
        <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
        <div class="phase-pill-meta">%d / %d core <code>__asm</code> lifted &bull; %d / %d total <code>__asm</code> &bull; %d named funcs &bull; %d unique struct fields (%d classes)</div>
      </div>
      <div class="phase-pill p1">
        <div class="phase-pill-head">
          <span class="phase-badge done">%s</span>
          <span class="num" style="font-size:13px;color:var(--accent-bright);">%d / %d funcs &bull; %.2f MB</span>
        </div>
        <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
        <div class="phase-pill-meta">%d AI matches + %d <code>auto_solve</code> stubs verified bit-for-bit against MSVC 2005</div>
      </div>
    </div>

    <nav class="tabs" role="tablist" aria-label="Dashboard Views">
      <button type="button" class="tab-btn active" role="tab" aria-selected="true" data-tab="phase2">Phase 2: C++20 Lift &amp; Structs</button>
      <button type="button" class="tab-btn" role="tab" aria-selected="false" data-tab="phase1">Phase 1: Byte-Match Archive</button>
    </nav>
`,
		coreLiftFuncPct, allLiftFuncPct, portableFuncPct,
		coreLiftFuncPct,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs,
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs,
		p2.TotalNamedFuncs, p2.UniqueFields, p2.ClassesWithFields,
		phase1StatusBadge,
		p1.InScopeMatchedFuncs, p1.InScopeFuncs, float64(p1.InScopeMatchedBytes)/(1024.0*1024.0),
		bytePct,
		p1.AIMatchedFuncs, p1.AutoSolveFuncs,
	))

	// ---- TAB 1: PHASE 2 (ACTIVE) ----
	sb.WriteString(fmt.Sprintf(`    <section id="tab-phase2" class="tab-panel" role="tabpanel">
      <div class="cards">
        <div class="card">
          <div class="card-label">Core Scope ASM Lift</div>
          <div class="card-value" style="color:var(--blue);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d funcs &bull; %d / %d B (%.2f%%)</div>
        </div>
        <div class="card">
          <div class="card-label">Full Binary ASM Lift</div>
          <div class="card-value">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d funcs &bull; %d / %d B (%.2f%%)</div>
        </div>
        <div class="card">
          <div class="card-label">Portable C++ Coverage</div>
          <div class="card-value" style="color:var(--cyan);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill cyan" style="width: %.2f%%"></div></div>
          <div class="card-sub">All: %d/%d (%.2f%% B) &bull; Core: %.2f%%</div>
        </div>
        <div class="card">
          <div class="card-label">Named Functions</div>
          <div class="card-value">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d (%d RTTI + %d newly named)</div>
        </div>
        <div class="card">
          <div class="card-label">Recovered Struct Fields</div>
          <div class="card-value">%d</div>
          <div class="card-sub">%d annotations across %d classes &bull; %d headers</div>
        </div>
        <div class="card">
          <div class="card-label">Cataloged &amp; Skipped</div>
          <div class="card-value">%d</div>
          <div class="card-sub"><code>lifted/symbols.json</code> entries &bull; %d skipped</div>
        </div>
      </div>
`,
		coreLiftFuncPct, coreLiftFuncPct, p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, coreLiftBytePct,
		allLiftFuncPct, allLiftFuncPct, p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, allLiftBytePct,
		portableFuncPct, portableFuncPct, p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, portableBytePct, corePortableFuncPct,
		namedPct, namedPct, p2.TotalNamedFuncs, p2.InScopeUnitsTotal, p2.InitialRTTINamedFuncs, p2.NewlyNamedFromAnonFuncs,
		p2.UniqueFields, p2.TotalFieldAnnotations, p2.ClassesWithFields, p2.GeneratedHeaders,
		p2.SymbolsCataloged, p2.ScopeAll.SkippedFuncs,
	))

	sb.WriteString(renderVelocityPanel(
		"p2",
		"Phase 2 Lift Velocity &amp; Portable C++ Curve",
		"Tracks lifted <code>__asm</code>/naked functions, bytes converted, and struct fields recovered over time",
		p2.Timeline,
		p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs,
		p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes,
		0, 0,
		"#58a6ff", "rgba(163,113,247,0.55)",
		true,
	))

	sb.WriteString(fmt.Sprintf(`      <div class="panel">
        <h2 style="margin-top:0;font-size:18px;">Per-Subsystem Lifting &amp; Portable C++ Breakdown</h2>
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Classification of all %d matched functions tracked in <code>src/</code> across Exporters/IO, Physics/Sim, and Non-Core modules</div>
        <div class="table-wrapper">
          <table>
            <thead>
              <tr>
                <th scope="col">Subsystem</th>
                <th scope="col" class="num">Total</th>
                <th scope="col" class="num">Pure C++</th>
                <th scope="col" class="num">Lifted / ASM</th>
                <th scope="col" class="num">Remaining ASM</th>
                <th scope="col" class="num">ASM Lift %%</th>
                <th scope="col" class="num">Portable %%</th>
                <th scope="col" class="num">Named</th>
                <th scope="col" class="num">Fields</th>
              </tr>
            </thead>
            <tbody>
%s            </tbody>
          </table>
        </div>
      </div>

      <div class="panels-split">
        <div class="panel">
          <h2 style="margin-top:0;font-size:18px;">Phase 2 Lift Model Leaderboard</h2>
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">In-scope lifted functions grouped by <code>lifted_by</code> (reconciled with <code>liftwork status</code>)</div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Model</th>
                  <th scope="col" class="num">Lifted</th>
                  <th scope="col" class="num">Bytes</th>
                  <th scope="col" class="num">Share</th>
                  <th scope="col" class="num">Avg</th>
                  <th scope="col" class="num">Median</th>
                  <th scope="col" class="num">Largest</th>
                  <th scope="col" class="num">Fields</th>
                </tr>
              </thead>
              <tbody>
%s              </tbody>
            </table>
          </div>
        </div>
        <div class="panel">
          <h2 style="margin-top:0;font-size:18px;">Recovered Class Struct Layouts</h2>
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Top classes with <code>@field</code> annotations merged into <code>lifted/include/*.h</code></div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Class</th>
                  <th scope="col" class="num">Unique Fields</th>
                  <th scope="col" class="num">Annotations</th>
                  <th scope="col">Header</th>
                </tr>
              </thead>
              <tbody>
`,
		p2.ScopeAll.TotalFuncs,
		renderSubsystemTableRows(p2),
		renderPhase2LeaderboardRows(p2),
	))

	if len(p2.ClassFields) == 0 {
		sb.WriteString(`                <tr><th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">No struct fields recovered yet</th><td class="num">0</td><td class="num">0</td><td style="color:var(--muted);">-</td></tr>
`)
	} else {
		limit := len(p2.ClassFields)
		if limit > 30 {
			limit = 30
		}
		for _, cf := range p2.ClassFields[:limit] {
			sb.WriteString(fmt.Sprintf(`                <tr>
                  <th scope="row"><code>%s</code></th>
                  <td class="num">%d</td>
                  <td class="num">%d</td>
                  <td><code>%s</code></td>
                </tr>
`, html.EscapeString(cf.Class), cf.UniqueFields, cf.FieldCount, html.EscapeString(cf.HeaderFile)))
		}
	}

	sb.WriteString(`              </tbody>
            </table>
          </div>
        </div>
      </div>

      <div class="panel">
        <h2 style="margin-top:0;font-size:18px;">Recent Lifted Functions &amp; Recovered Symbols</h2>
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Latest functions lifted into portable C++20 and recorded in <code>build/lifted/</code></div>
        <div class="table-wrapper">
          <table>
            <thead>
              <tr>
                <th scope="col">VA</th>
                <th scope="col">Recovered Name</th>
                <th scope="col">Class</th>
                <th scope="col" class="num">Size</th>
                <th scope="col" class="num">Fields</th>
                <th scope="col">Model</th>
                <th scope="col">Summary</th>
              </tr>
            </thead>
            <tbody>
`)
	if len(p2.RecentLifts) == 0 {
		sb.WriteString(`              <tr><th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">None yet</th><td colspan="6" style="color:var(--muted);">No lifted functions recorded yet.</td></tr>
`)
	} else {
		limit := len(p2.RecentLifts)
		if limit > 30 {
			limit = 30
		}
		for _, r := range p2.RecentLifts[:limit] {
			cls := r.Class
			if cls == "" {
				cls = "-"
			}
			sb.WriteString(fmt.Sprintf(`              <tr>
                <th scope="row"><code>%s</code></th>
                <td><code>%s</code></td>
                <td><code>%s</code></td>
                <td class="num">%d B</td>
                <td class="num">%d</td>
                <td><code class="model-badge">%s</code></td>
                <td style="max-inline-size:520px;color:var(--muted);">%s</td>
              </tr>
`,
				html.EscapeString(r.VA),
				html.EscapeString(r.Name),
				html.EscapeString(cls),
				r.Size,
				r.Fields,
				html.EscapeString(r.Model),
				html.EscapeString(r.Summary),
			))
		}
	}
	sb.WriteString(`            </tbody>
          </table>
        </div>
      </div>
    </section>
`)

	// ---- TAB 2: PHASE 1 ARCHIVE ----
	sb.WriteString(fmt.Sprintf(`    <section id="tab-phase1" class="tab-panel" role="tabpanel" hidden>
      <div class="cards">
        <div class="card">
          <div class="card-label">In-Scope Functions Matched</div>
          <div class="card-value" style="color:var(--accent-bright);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d (%d AI &bull; %d auto_solve)</div>
        </div>
        <div class="card">
          <div class="card-label">In-Scope Code Bytes</div>
          <div class="card-value" style="color:var(--accent-bright);">%.2f%%</div>
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
		funcPct, funcPct, p1.InScopeMatchedFuncs, p1.InScopeFuncs, p1.AIMatchedFuncs, p1.AutoSolveFuncs,
		bytePct, bytePct, p1.InScopeMatchedBytes, p1.InScopeBytes, float64(p1.InScopeBytes)/(1024.0*1024.0),
		p1.TotalClasses, p1.InScopeClasses, p1.MFCClasses,
		p1.OutOfScopeFuncs, p1.OutThunkFuncs, p1.OutCRTMFCFuncs,
	))

	sb.WriteString(renderVelocityPanel(
		"p1",
		"Phase 1 Byte-Match Velocity &amp; Progress Curve",
		"Historical per-commit function solves and byte-match velocity across parallel agent waves",
		p1.Timeline,
		p1.InScopeMatchedFuncs, p1.InScopeFuncs,
		p1.InScopeMatchedBytes, p1.InScopeBytes,
		p1.AutoSolveFuncs, p1.AutoSolveBytes,
		"#3fb950", "rgba(88,166,255,0.55)",
		false,
	))

	sb.WriteString(fmt.Sprintf(`      <div class="panel">
        <h2 style="margin-top:0;font-size:18px;">Squad Leaderboard (AI Model Matches)</h2>
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Excludes %d deterministic <code>script:auto_solve</code> baseline stubs</div>
        <div class="table-wrapper">
          <table>
            <thead>
              <tr>
                <th scope="col">Model</th>
                <th scope="col" class="num">Matched Functions</th>
                <th scope="col" class="num">Matched Bytes</th>
                <th scope="col" class="num">Share of AI Matches</th>
                <th scope="col" class="num">Avg Size</th>
                <th scope="col" class="num">Median</th>
                <th scope="col" class="num">Largest</th>
                <th scope="col">Matches by Size Decile (small &rarr; large)</th>
              </tr>
            </thead>
            <tbody>
`, p1.AutoSolveFuncs))

	if len(p1.Leaderboard) == 0 {
		sb.WriteString(`              <tr>
                <th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">No AI matches yet</th>
                <td class="num">0</td><td class="num">0</td><td class="num">0.00%</td>
                <td class="num">-</td><td class="num">-</td><td class="num">-</td><td></td>
              </tr>
`)
	} else {
		for _, m := range p1.Leaderboard {
			sharePct := pct(uint64(m.MatchedFuncs), uint64(p1.AIMatchedFuncs))
			avg, med, largest := m.sizeStats()
			maxCount := 1
			for _, c := range m.TierCounts {
				if c > maxCount {
					maxCount = c
				}
			}
			var strip strings.Builder
			strip.WriteString(`<div class="decile-strip">`)
			for i, c := range m.TierCounts {
				alpha := 0.06
				if c > 0 {
					alpha = 0.25 + 0.75*float64(c)/float64(maxCount)
				}
				strip.WriteString(fmt.Sprintf(`<div class="decile-cell" title="%s: %d funcs" style="background:rgba(63,185,80,%.2f);"></div>`,
					p1.Tiers[i].ShortName, c, alpha))
			}
			strip.WriteString(`</div>`)

			sb.WriteString(fmt.Sprintf(`              <tr>
                <th scope="row"><code class="model-badge">%s</code></th>
                <td class="num">%d</td>
                <td class="num">%d</td>
                <td class="num">%.2f%%</td>
                <td class="num">%.0f B</td>
                <td class="num">%d B</td>
                <td class="num">%d B</td>
                <td>%s</td>
              </tr>
`, html.EscapeString(m.Model), m.MatchedFuncs, m.MatchedBytes, sharePct, avg, med, largest, strip.String()))
		}
	}

	sb.WriteString(`            </tbody>
          </table>
        </div>
      </div>

      <div class="panels-split">
        <div class="panel">
          <h2 style="margin-top:0;font-size:18px;">In-Scope Progress by Size Decile</h2>
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">In-scope functions ranked by size into ten equal-count percentile tiers</div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Size Tier</th>
                  <th scope="col" class="num">Matched / Total Funcs</th>
                  <th scope="col" class="num">Func %</th>
                  <th scope="col" class="num">Matched / Total Bytes</th>
                  <th scope="col" class="num">Byte %</th>
                  <th scope="col" class="num">Remaining</th>
                </tr>
              </thead>
              <tbody>
`)
	for _, t := range p1.Tiers {
		sb.WriteString(fmt.Sprintf(`                <tr>
                  <th scope="row">%s</th>
                  <td class="num">%d / %d</td>
                  <td class="num">%.2f%%</td>
                  <td class="num">%d / %d</td>
                  <td class="num">%.2f%%</td>
                  <td class="num">%d fn</td>
                </tr>
`, t.ShortName, t.MatchedFuncs, t.TotalFuncs, pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs)),
			t.MatchedBytes, t.TotalBytes, pct(t.MatchedBytes, t.TotalBytes), t.RemainFuncs))
	}

	sb.WriteString(fmt.Sprintf(`              </tbody>
            </table>
          </div>
        </div>
        <div class="panel">
          <h2 style="margin-top:0;font-size:18px;">Binary Scope Breakdown</h2>
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Partition of <code>endorphin.exe</code> code bytes and RTTI class hierarchy</div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Segment / Category</th>
                  <th scope="col" class="num">Functions / Classes</th>
                  <th scope="col" class="num">Size / Share</th>
                </tr>
              </thead>
              <tbody>
                <tr><th scope="row">Total Functions in <code>.text</code></th><td class="num">%d funcs</td><td class="num">%d bytes (%.2f MB)</td></tr>
                <tr><th scope="row">In-Scope Application &amp; Engine</th><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
                <tr class="sub-row"><th scope="row">Matched In-Scope (AI + Baseline)</th><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
                <tr><th scope="row">Out-of-Scope Total</th><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
                <tr class="sub-row"><th scope="row">Jump &amp; Import Thunks</th><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
                <tr class="sub-row"><th scope="row">CRT / MFC / SEH Boilerplate</th><td class="num">%d funcs (%.1f%%)</td><td class="num">%d bytes (%.1f%%)</td></tr>
                <tr><th scope="row">RTTI Classes</th><td class="num">%d classes</td><td class="num">%d in-scope &bull; %d MFC/ATL/std</td></tr>
              </tbody>
            </table>
          </div>
        </div>
      </div>
    </section>
  </div>
`,
		p1.TotalFuncs, p1.TotalBytes, float64(p1.TotalBytes)/(1024.0*1024.0),
		p1.InScopeFuncs, pct(uint64(p1.InScopeFuncs), uint64(p1.TotalFuncs)), p1.InScopeBytes, pct(p1.InScopeBytes, p1.TotalBytes),
		p1.InScopeMatchedFuncs, funcPct, p1.InScopeMatchedBytes, bytePct,
		p1.OutOfScopeFuncs, pct(uint64(p1.OutOfScopeFuncs), uint64(p1.TotalFuncs)), p1.OutOfScopeBytes, pct(p1.OutOfScopeBytes, p1.TotalBytes),
		p1.OutThunkFuncs, pct(uint64(p1.OutThunkFuncs), uint64(p1.TotalFuncs)), p1.OutThunkBytes, pct(p1.OutThunkBytes, p1.TotalBytes),
		p1.OutCRTMFCFuncs, pct(uint64(p1.OutCRTMFCFuncs), uint64(p1.TotalFuncs)), p1.OutCRTMFCBytes, pct(p1.OutCRTMFCBytes, p1.TotalBytes),
		p1.TotalClasses, p1.InScopeClasses, p1.MFCClasses,
	))

	sb.WriteString(`  <script>
  (function() {
    function fmtInt(n) { return Math.round(n).toLocaleString(); }
    function fmtTimeShort(s) {
      const d = new Date(s * 1000);
      return String(d.getMonth()+1).padStart(2,'0') + '-' + String(d.getDate()).padStart(2,'0') + ' ' +
             String(d.getHours()).padStart(2,'0') + ':' + String(d.getMinutes()).padStart(2,'0');
    }
    function fmtDate(s) {
      const d = new Date(s * 1000);
      return d.getFullYear() + '-' + String(d.getMonth()+1).padStart(2,'0') + '-' + String(d.getDate()).padStart(2,'0');
    }
    function esc(str) {
      return String(str || '').replace(/[&<>"]/g, c => ({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;'}[c]));
    }

    function mountChart(prefix) {
      const dataEl = document.getElementById(prefix + '-data');
      const svg = document.getElementById(prefix + '-svg');
      if (!dataEl || !svg) return null;
      const D = JSON.parse(dataEl.textContent || '{}');
      const gridLines = svg.querySelectorAll('.chart-grid line');
      const gBars = svg.querySelector('.chart-bars');
      const polyArea = svg.querySelector('.chart-area');
      const polyLine = svg.querySelector('.chart-line');
      const polyProj = svg.querySelector('.chart-proj');
      const gGaps = svg.querySelector('.chart-gaps');
      const gDots = svg.querySelector('.chart-dots');
      const gAxes = svg.querySelector('.chart-axes');
      const hoverLine = svg.querySelector('.chart-hover-line');
      const tooltip = document.getElementById(prefix + '-tooltip');
      const note = document.getElementById(prefix + '-note');

      const H = 270, PAD_L = 56, PAD_R = 54, PAD_T = 20, PAD_B = 34, PH = H - PAD_T - PAD_B;
      let W = 1600, PW = W - PAD_L - PAD_R;
      let mode = 'active', metric = 'funcs', rendered = [];

      function syncViewport() {
        const cw = Math.round(svg.clientWidth || 1600);
        W = Math.max(640, cw);
        PW = W - PAD_L - PAD_R;
        svg.setAttribute('viewBox', '0 0 ' + W + ' ' + H);
        gridLines.forEach(line => line.setAttribute('x2', String(W - PAD_R)));
      }

      function renderProjection() {
        const bks = D.wall || [];
        rendered = bks;
        if (!bks.length) return;
        const t0 = bks[0].ts;
        const tNow = Math.max(D.nowSec || 0, bks[bks.length - 1].te);
        const tEnd = (D.etaSec > tNow) ? D.etaSec : tNow;
        const span = Math.max(1, tEnd - t0);
        const xT = (t) => PAD_L + ((t - t0) / span) * PW;
        const pctOf = (b) => D.totalBytes ? (100 * (D.baseBytes + b.cb) / D.totalBytes) : 0;
        const yP = (p) => PAD_T + PH - (Math.min(100, p) / 100) * PH;

        let maxD = 1;
        for (const b of bks) if (b.db > maxD) maxD = b.db;
        const pts = [], areaPts = [];
        let barsHTML = '';
        for (const b of bks) {
          const x = xT(Math.min(b.te, tNow)), y = yP(pctOf(b));
          b._x = x; b._y = y;
          pts.push(x.toFixed(1) + ',' + y.toFixed(1));
          areaPts.push(x.toFixed(1) + ',' + y.toFixed(1));
          if (b.db > 0) {
            const bw = Math.max(2, ((b.te - b.ts) / span) * PW * 0.8);
            const bh = (b.db / maxD) * (PH * 0.44);
            barsHTML += '<rect x="' + (x - bw).toFixed(1) + '" y="' + (PAD_T + PH - bh).toFixed(1) + '" width="' + bw.toFixed(1) + '" height="' + bh.toFixed(1) + '" rx="1" fill="' + D.bar + '"/>';
          }
        }
        const lastB = bks[bks.length - 1];
        const xNow = lastB._x, yNow = lastB._y, curPct = pctOf(lastB);
        areaPts.unshift(pts[0].split(',')[0] + ',' + (PAD_T + PH).toFixed(1));
        areaPts.push(xNow.toFixed(1) + ',' + (PAD_T + PH).toFixed(1));
        gBars.innerHTML = barsHTML;
        polyArea.setAttribute('points', areaPts.join(' '));
        polyLine.setAttribute('points', pts.join(' '));
        gGaps.innerHTML = '';

        let dotsHTML = '<circle cx="' + xNow.toFixed(1) + '" cy="' + yNow.toFixed(1) + '" r="4" fill="' + D.accent + '"/>';
        let axesHTML = '';
        if (D.etaSec > tNow) {
          const xE = xT(D.etaSec);
          polyProj.setAttribute('points', xNow.toFixed(1) + ',' + yNow.toFixed(1) + ' ' + xE.toFixed(1) + ',' + yP(100).toFixed(1));
          dotsHTML += '<circle cx="' + xE.toFixed(1) + '" cy="' + yP(100).toFixed(1) + '" r="4" fill="#d29922"/>';
          axesHTML += '<text x="' + (xE - 8).toFixed(1) + '" y="' + (PAD_T + 16) + '" fill="#d29922" font-size="11" font-weight="600" text-anchor="end">ETA ' + fmtDate(D.etaSec) + '</text>';
        } else {
          polyProj.setAttribute('points', '');
        }
        gDots.innerHTML = dotsHTML;

        for (let s = 0; s <= 4; s++) {
          const p = 100 - s * 25;
          axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + (PAD_T + (PH * s) / 4 + 4).toFixed(1) + '" fill="#8b949e" font-size="11" text-anchor="end">' + p + '%</text>';
        }
        const nowLabelX = Math.min(xNow + 8, W - PAD_R - 64);
        axesHTML += '<text x="' + nowLabelX.toFixed(1) + '" y="' + Math.max(PAD_T + 28, yNow - 10).toFixed(1) + '" fill="' + D.accent + '" font-size="11" font-weight="600">' + curPct.toFixed(1) + '% now</text>';
        const ticks = W >= 1200 ? 7 : 5;
        for (let t = 0; t < ticks; t++) {
          const tt = t0 + (span * t) / (ticks - 1);
          const anchor = (t === 0) ? 'start' : (t === ticks - 1 ? 'end' : 'middle');
          axesHTML += '<text x="' + xT(tt).toFixed(1) + '" y="' + (H - 8) + '" fill="#8b949e" font-size="11" text-anchor="' + anchor + '">' + fmtDate(tt) + '</text>';
        }
        gAxes.innerHTML = axesHTML;
        note.textContent = curPct.toFixed(1) + '% of target bytes complete' +
          (D.etaSec > tNow ? ' • projected 100% on ' + fmtDate(D.etaSec) + ' (' + (D.rateBps * 86400 / 1024).toFixed(1) + ' KB/day)' : '');
      }

      function render() {
        syncViewport();
        if (metric === 'pct') { renderProjection(); return; }
        polyProj.setAttribute('points', '');
        const bks = D[mode] || [];
        rendered = bks;
        if (!bks.length) return;

        const valOf = (b) => metric === 'bytes' ? b.cb : (metric === 'fields' ? (b.cfl || 0) : b.cf);
        const delOf = (b) => metric === 'bytes' ? b.db : (metric === 'fields' ? (b.dfl || 0) : b.df);
        const maxY = Math.max(1, valOf(bks[bks.length - 1]));
        let maxD = 1;
        for (const b of bks) if (delOf(b) > maxD) maxD = delOf(b);

        const n = bks.length;
        const xAt = (i) => n === 1 ? PAD_L + PW / 2 : PAD_L + (i / (n - 1)) * PW;
        const yAt = (v) => PAD_T + PH - (v / maxY) * PH;
        const barW = Math.max(4, Math.min(28, (PW / Math.max(1, n)) * 0.62));
        const pts = [], areaPts = [xAt(0).toFixed(1) + ',' + (PAD_T + PH).toFixed(1)];
        let barsHTML = '', gapsHTML = '', dotsHTML = '';

        for (let i = 0; i < n; i++) {
          const b = bks[i], x = xAt(i), y = yAt(valOf(b));
          b._x = x; b._y = y;
          pts.push(x.toFixed(1) + ',' + y.toFixed(1));
          areaPts.push(x.toFixed(1) + ',' + y.toFixed(1));
          const d = delOf(b);
          if (d > 0) {
            const bh = (d / maxD) * (PH * 0.44);
            barsHTML += '<rect x="' + (x - barW/2).toFixed(1) + '" y="' + (PAD_T + PH - bh).toFixed(1) + '" width="' + barW.toFixed(1) + '" height="' + bh.toFixed(1) + '" rx="2" fill="' + D.bar + '"/>';
          }
          if (b.gap && i > 0) {
            const gx = (xAt(i - 1) + x) / 2;
            gapsHTML += '<line x1="' + gx.toFixed(1) + '" y1="' + PAD_T + '" x2="' + gx.toFixed(1) + '" y2="' + (PAD_T + PH) + '" stroke="#30363d" stroke-dasharray="2,4"/>';
          }
          if (n <= 48 || i === 0 || i === n - 1 || b.gap) {
            dotsHTML += '<circle cx="' + x.toFixed(1) + '" cy="' + y.toFixed(1) + '" r="3" fill="' + D.accent + '"/>';
          }
        }
        areaPts.push(xAt(n - 1).toFixed(1) + ',' + (PAD_T + PH).toFixed(1));
        gBars.innerHTML = barsHTML;
        polyArea.setAttribute('points', areaPts.join(' '));
        polyLine.setAttribute('points', pts.join(' '));
        gGaps.innerHTML = gapsHTML;
        gDots.innerHTML = dotsHTML;

        let axesHTML = '';
        for (let s = 0; s <= 4; s++) {
          const v = (maxY * (4 - s)) / 4;
          const y = PAD_T + (PH * s) / 4 + 4;
          axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + y.toFixed(1) + '" fill="#8b949e" font-size="11" text-anchor="end">' + fmtInt(v) + '</text>';
        }
        axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH * 0.56) + '" fill="' + D.accent + '" font-size="10">+' + fmtInt(maxD) + '</text>';
        axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH) + '" fill="' + D.accent + '" font-size="10">0</text>';
        const ticks = Math.min(W >= 1200 ? 8 : 5, n);
        for (let t = 0; t < ticks; t++) {
          const idx = ticks === 1 ? 0 : Math.round((t * (n - 1)) / (ticks - 1));
          const anchor = t === 0 ? 'start' : (t === ticks - 1 ? 'end' : 'middle');
          axesHTML += '<text x="' + xAt(idx).toFixed(1) + '" y="' + (H - 8) + '" fill="#8b949e" font-size="11" text-anchor="' + anchor + '">' + fmtTimeShort(bks[idx].ts) + '</text>';
        }
        gAxes.innerHTML = axesHTML;
        note.textContent = n + ' intervals plotted • Hover for breakdown';
      }

      svg.addEventListener('mousemove', function(e) {
        if (!rendered.length) return;
        const rect = svg.getBoundingClientRect();
        const relX = ((e.clientX - rect.left) / rect.width) * W;
        let best = rendered[0], bestDist = Math.abs(relX - best._x);
        for (const b of rendered) {
          const d = Math.abs(relX - b._x);
          if (d < bestDist) { best = b; bestDist = d; }
        }
        hoverLine.setAttribute('x1', best._x.toFixed(1));
        hoverLine.setAttribute('x2', best._x.toFixed(1));
        hoverLine.setAttribute('visibility', 'visible');
        const durMin = Math.max(1, Math.round((best.te - best.ts) / 60));
        const rateHr = Math.round((best.df * 60) / durMin);
        const fieldsLine = D.showFields ? ('<div>Struct Fields: <strong>' + fmtInt(best.cfl || 0) + '</strong> (+' + fmtInt(best.dfl || 0) + ')</div>') : '';
        const modelLine = best.m ? ('<div style="font-size:11px;margin-top:2px;">Top model: <code>' + esc(best.m) + '</code></div>') : '';
        const sampleLine = (best.s && best.s.length) ? ('<div style="margin-top:3px;color:#8b949e;font-size:11px;">e.g. ' + best.s.map(esc).join(', ') + '</div>') : '';
        tooltip.innerHTML =
          '<div style="font-weight:600;margin-bottom:2px;">' + fmtTimeShort(best.ts) + ' (' + durMin + 'm window)</div>' +
          '<div>Cumulative: <strong>' + fmtInt(best.cf) + ' funcs</strong> (' + fmtInt(best.cb) + ' B)</div>' +
          '<div style="color:' + D.accent + ';">Interval: <strong>+' + fmtInt(best.df) + ' funcs</strong> (+' + fmtInt(best.db) + ' B &bull; ~' + fmtInt(rateHr) + ' fn/hr)</div>' +
          fieldsLine + modelLine + sampleLine;
        tooltip.hidden = false;
        const tipW = tooltip.offsetWidth || 300;
        const pxX = (best._x / W) * rect.width;
        const leftPx = (pxX + 20 + tipW > rect.width - 12) ? Math.max(12, pxX - tipW - 16) : (pxX + 20);
        tooltip.style.insetInlineStart = Math.round(leftPx) + 'px';
      });
      svg.addEventListener('mouseleave', () => { hoverLine.setAttribute('visibility', 'hidden'); tooltip.hidden = true; });

      document.querySelectorAll('#' + prefix + '-mode-group .chart-btn').forEach(btn => {
        btn.addEventListener('click', () => {
          document.querySelectorAll('#' + prefix + '-mode-group .chart-btn').forEach(b => b.classList.remove('active'));
          btn.classList.add('active');
          mode = btn.getAttribute('data-mode');
          render();
        });
      });
      document.querySelectorAll('#' + prefix + '-metric-group .chart-btn').forEach(btn => {
        btn.addEventListener('click', () => {
          document.querySelectorAll('#' + prefix + '-metric-group .chart-btn').forEach(b => b.classList.remove('active'));
          btn.classList.add('active');
          metric = btn.getAttribute('data-metric');
          render();
        });
      });

      render();
      return render;
    }

    const renderers = [mountChart('p2'), mountChart('p1')].filter(Boolean);
    let resizeRaf = 0;
    window.addEventListener('resize', () => {
      cancelAnimationFrame(resizeRaf);
      resizeRaf = requestAnimationFrame(() => renderers.forEach(fn => fn()));
    });

    const tabBtns = document.querySelectorAll('.tab-btn[data-tab]');
    const panels = {
      phase2: document.getElementById('tab-phase2'),
      phase1: document.getElementById('tab-phase1')
    };
    function activate(name, pushHash) {
      if (!panels[name]) name = 'phase2';
      tabBtns.forEach(btn => {
        const isOn = btn.getAttribute('data-tab') === name;
        btn.classList.toggle('active', isOn);
        btn.setAttribute('aria-selected', isOn ? 'true' : 'false');
      });
      Object.entries(panels).forEach(([k, el]) => { if (el) el.hidden = (k !== name); });
      if (pushHash && history.replaceState) history.replaceState(null, '', '#' + name);
      requestAnimationFrame(() => renderers.forEach(fn => fn()));
    }
    tabBtns.forEach(btn => btn.addEventListener('click', () => activate(btn.getAttribute('data-tab'), true)));
    const hash = (location.hash || '').replace('#', '');
    if (panels[hash]) activate(hash, false);
  })();
  </script>
</body>
</html>
`)

	return sb.String()
}
