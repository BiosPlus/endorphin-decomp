package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"math"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
	"time"

	"endorphin_decomp/internal/unitstore"
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

type MatchEvent struct {
	UnixSec int64  `json:"t"`
	TimeISO string `json:"iso"`
	VA      string `json:"va"`
	Symbol  string `json:"sym"`
	Size    uint32 `json:"b"`
	Model   string `json:"m"`
}

var gitMatchVARe = regexp.MustCompile(`(?i)\b0x[0-9a-f]{8}\b`)

func extractGitMatchTimestamps() (map[string]string, string) {
	byVA := make(map[string]string)
	var latestCommitISO string
	out, err := exec.Command("git", "log", "--reverse", "--pretty=format:%cI|%s").Output()
	if err != nil {
		return byVA, latestCommitISO
	}
	for _, line := range strings.Split(strings.TrimSpace(string(out)), "\n") {
		parts := strings.SplitN(line, "|", 2)
		if len(parts) != 2 {
			continue
		}
		rawTS := strings.TrimSpace(parts[0])
		subj := strings.TrimSpace(parts[1])
		t, err := time.Parse(time.RFC3339, rawTS)
		if err != nil {
			continue
		}
		utcISO := t.UTC().Format(time.RFC3339)
		latestCommitISO = utcISO
		if strings.Contains(subj, "Reset AI decomp progress to zero") {
			byVA = make(map[string]string)
			continue
		}
		for _, m := range gitMatchVARe.FindAllString(subj, -1) {
			normVA := "0x" + strings.ToUpper(strings.TrimPrefix(strings.ToLower(m), "0x"))
			byVA[normVA] = utcISO
		}
	}
	return byVA, latestCommitISO
}

func parseFlexibleTimestamp(s string) (time.Time, bool) {
	s = strings.TrimSpace(s)
	if s == "" {
		return time.Time{}, false
	}
	if t, err := time.Parse(time.RFC3339, s); err == nil {
		return t.UTC(), true
	}
	if t, err := time.Parse("2006-01-02", s); err == nil {
		return t.UTC(), true
	}
	return time.Time{}, false
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

func renderVelocityGraphPanel(
	events []MatchEvent,
	inScopeFuncs, inScopeMatchedFuncs int,
	inScopeBytes, inScopeMatchedBytes uint64,
	aiMatchedFuncs int,
) string {
	var aiMatchedBytes uint64
	for _, ev := range events {
		aiMatchedBytes += uint64(ev.Size)
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs
	var autoSolveBytes uint64
	if inScopeMatchedBytes >= aiMatchedBytes {
		autoSolveBytes = inScopeMatchedBytes - aiMatchedBytes
	}

	// Compute active grind windows (10-minute buckets with >= 1 match) and peak 10-min burst
	activeBucketCounts := make(map[int64]int)
	activeBucketBytes := make(map[int64]uint64)
	for _, ev := range events {
		if ev.UnixSec <= 0 {
			continue
		}
		b := ev.UnixSec / 600 // 10-min bucket
		activeBucketCounts[b]++
		activeBucketBytes[b] += uint64(ev.Size)
	}

	activeBuckets := len(activeBucketCounts)
	activeHours := float64(activeBuckets) * (10.0 / 60.0)
	var activeFuncsPerHr, activeBytesPerHr float64
	if activeHours > 0 {
		activeFuncsPerHr = float64(len(events)) / activeHours
		activeBytesPerHr = float64(aiMatchedBytes) / activeHours
	}

	peak10mFuncs := 0
	var peak10mBytes uint64
	for b, c := range activeBucketCounts {
		if c > peak10mFuncs {
			peak10mFuncs = c
			peak10mBytes = activeBucketBytes[b]
		}
	}

	// Count solves in the most recent active session (contiguous events with gaps <= 30m)
	recentSessionFuncs := 0
	var recentSessionBytes uint64
	var recentSessionSpanSec int64
	if len(events) > 0 {
		lastIdx := len(events) - 1
		startIdx := lastIdx
		for startIdx > 0 {
			if events[startIdx].UnixSec-events[startIdx-1].UnixSec > 1800 {
				break
			}
			startIdx--
		}
		recentSessionFuncs = lastIdx - startIdx + 1
		for i := startIdx; i <= lastIdx; i++ {
			recentSessionBytes += uint64(events[i].Size)
		}
		recentSessionSpanSec = events[lastIdx].UnixSec - events[startIdx].UnixSec
		if recentSessionSpanSec < 60 {
			recentSessionSpanSec = 60
		}
	}
	recentSessionRateHr := (float64(recentSessionFuncs) * 3600.0) / float64(recentSessionSpanSec)

	// Build fallback static SVG points (Active Grind progression across up to 32 buckets)
	const svgW = 900.0
	const svgH = 260.0
	const padL = 56.0
	const padR = 54.0
	const padT = 20.0
	const padB = 34.0
	plotW := svgW - padL - padR
	plotH := svgH - padT - padB

	var polyPoints []string
	var areaPoints []string
	var barRects strings.Builder
	numStaticBuckets := 24
	if len(events) > 0 {
		if len(events) < numStaticBuckets {
			numStaticBuckets = len(events)
		}
		maxCum := float64(len(events))
		if maxCum < 1 {
			maxCum = 1
		}
		maxDelta := 1
		bucketDeltas := make([]int, numStaticBuckets)
		bucketCum := make([]int, numStaticBuckets)
		for b := 0; b < numStaticBuckets; b++ {
			startE := (b * len(events)) / numStaticBuckets
			endE := ((b + 1) * len(events)) / numStaticBuckets
			bucketDeltas[b] = endE - startE
			bucketCum[b] = endE
			if bucketDeltas[b] > maxDelta {
				maxDelta = bucketDeltas[b]
			}
		}

		areaPoints = append(areaPoints, fmt.Sprintf("%.1f,%.1f", padL, padT+plotH))
		barW := math.Max(4.0, (plotW/float64(numStaticBuckets))*0.62)
		for b := 0; b < numStaticBuckets; b++ {
			x := padL
			if numStaticBuckets > 1 {
				x = padL + (float64(b)/float64(numStaticBuckets-1))*plotW
			} else {
				x = padL + plotW/2
			}
			y := padT + plotH - (float64(bucketCum[b])/maxCum)*plotH
			polyPoints = append(polyPoints, fmt.Sprintf("%.1f,%.1f", x, y))
			areaPoints = append(areaPoints, fmt.Sprintf("%.1f,%.1f", x, y))

			bh := (float64(bucketDeltas[b]) / float64(maxDelta)) * (plotH * 0.42)
			bx := x - barW/2
			by := padT + plotH - bh
			barRects.WriteString(fmt.Sprintf(`<rect x="%.1f" y="%.1f" width="%.1f" height="%.1f" rx="2" fill="rgba(88,166,255,0.28)" />`, bx, by, barW, bh))
		}
		lastX := padL + plotW
		if numStaticBuckets == 1 {
			lastX = padL + plotW/2
		}
		areaPoints = append(areaPoints, fmt.Sprintf("%.1f,%.1f", lastX, padT+plotH))
	}

	eventsJSON, err := json.Marshal(events)
	if err != nil {
		eventsJSON = []byte("[]")
	}

	var sb strings.Builder
	sb.WriteString(fmt.Sprintf(`    <div class="panel">
      <div class="chart-header">
        <div>
          <h2 style="margin:0;font-size:18px;">Decompilation Velocity &amp; Progress Curve</h2>
          <div style="color:var(--muted);font-size:13px;margin-top:2px;">Tracks per-commit function solves and byte-match velocity across parallel agent waves</div>
        </div>
        <div class="chart-controls">
          <div class="btn-group" id="mode-group" role="group" aria-label="Timeline mode">
            <button type="button" class="chart-btn active" data-mode="active">Active Sessions</button>
            <button type="button" class="chart-btn" data-mode="latest">Latest Session</button>
            <button type="button" class="chart-btn" data-mode="wall">Wall Clock</button>
          </div>
          <div class="btn-group" id="metric-group" role="group" aria-label="Metric">
            <button type="button" class="chart-btn active" data-metric="ai_funcs">AI Funcs</button>
            <button type="button" class="chart-btn" data-metric="ai_bytes">AI Bytes</button>
            <button type="button" class="chart-btn" data-metric="total_funcs">Total Scope</button>
          </div>
        </div>
      </div>

      <div class="velocity-kpis">
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
          <span class="vkpi-label">AI Solves Logged</span>
          <span class="vkpi-val">%d funcs</span>
          <span class="vkpi-sub">%d bytes (1 commit / solve)</span>
        </div>
      </div>

      <div class="chart-wrap" id="velocity-chart-wrap">
        <svg id="velocity-svg" viewBox="0 0 900 260" preserveAspectRatio="none" role="img" aria-label="Decompilation progress and velocity chart">
          <defs>
            <linearGradient id="cumAreaGrad" x1="0" y1="0" x2="0" y2="1">
              <stop offset="0%%" stop-color="#3fb950" stop-opacity="0.32"/>
              <stop offset="100%%" stop-color="#3fb950" stop-opacity="0.02"/>
            </linearGradient>
          </defs>
          <g id="chart-grid">
            <line x1="56" y1="20" x2="846" y2="20" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="71.5" x2="846" y2="71.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="123" x2="846" y2="123" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="174.5" x2="846" y2="174.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="226" x2="846" y2="226" stroke="#30363d"/>
          </g>
          <g id="chart-bars">%s</g>
          <polygon id="chart-area" points="%s" fill="url(#cumAreaGrad)"/>
          <polyline id="chart-line" points="%s" fill="none" stroke="#3fb950" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
          <g id="chart-gaps"></g>
          <g id="chart-dots"></g>
          <g id="chart-axes"></g>
          <line id="chart-hover-line" x1="0" y1="20" x2="0" y2="226" stroke="#8b949e" stroke-width="1" stroke-dasharray="4,3" visibility="hidden"/>
        </svg>
        <div id="chart-tooltip" class="chart-tooltip" hidden></div>
      </div>

      <div class="chart-legend">
        <span><span class="legend-swatch" style="background:#3fb950;"></span> Cumulative Progress (left axis)</span>
        <span><span class="legend-swatch" style="background:rgba(88,166,255,0.65);"></span> Solves per Interval (right axis)</span>
        <span id="chart-bucket-note" style="margin-left:auto;color:var(--muted);">Hover over chart for per-wave details</span>
      </div>
      <script>
      (function() {
        const EVENTS = %s;
        const AUTO_FUNCS = %d;
        const AUTO_BYTES = %d;
        const TOTAL_FUNCS = %d;
        const TOTAL_BYTES = %d;

        let curMode = 'active';
        let curMetric = 'ai_funcs';

        const svg = document.getElementById('velocity-svg');
        const gBars = document.getElementById('chart-bars');
        const polyArea = document.getElementById('chart-area');
        const polyLine = document.getElementById('chart-line');
        const gGaps = document.getElementById('chart-gaps');
        const gDots = document.getElementById('chart-dots');
        const gAxes = document.getElementById('chart-axes');
        const hoverLine = document.getElementById('chart-hover-line');
        const tooltip = document.getElementById('chart-tooltip');
        const bucketNote = document.getElementById('chart-bucket-note');

        const W = 900, H = 260, PAD_L = 56, PAD_R = 54, PAD_T = 20, PAD_B = 34;
        const PW = W - PAD_L - PAD_R, PH = H - PAD_T - PAD_B;

        function fmtInt(n) {
          return Math.round(n).toLocaleString();
        }
        function fmtTimeShort(unixSec) {
          const d = new Date(unixSec * 1000);
          const mo = String(d.getMonth() + 1).padStart(2, '0');
          const da = String(d.getDate()).padStart(2, '0');
          const hh = String(d.getHours()).padStart(2, '0');
          const mm = String(d.getMinutes()).padStart(2, '0');
          return mo + '-' + da + ' ' + hh + ':' + mm;
        }

        function buildBuckets() {
          if (!EVENTS || EVENTS.length === 0) return [];
          let filtered = EVENTS;
          if (curMode === 'latest') {
            let startIdx = EVENTS.length - 1;
            while (startIdx > 0 && (EVENTS[startIdx].t - EVENTS[startIdx - 1].t) <= 1800) {
              startIdx--;
            }
            filtered = EVENTS.slice(startIdx);
          }

          if (curMode === 'active') {
            // Split into contiguous active sessions (gap > 20m starts a new session segment)
            const bucketSec = 120; // 2-minute active buckets
            const map = new Map();
            let cumFuncs = 0, cumBytes = 0;
            for (const ev of EVENTS) {
              cumFuncs++;
              cumBytes += ev.b;
              const key = Math.floor(ev.t / bucketSec) * bucketSec;
              let b = map.get(key);
              if (!b) {
                b = { tStart: key, tEnd: key + bucketSec, dFuncs: 0, dBytes: 0, cumFuncs: 0, cumBytes: 0, models: {}, samples: [] };
                map.set(key, b);
              }
              b.dFuncs++;
              b.dBytes += ev.b;
              b.cumFuncs = cumFuncs;
              b.cumBytes = cumBytes;
              b.models[ev.m] = (b.models[ev.m] || 0) + 1;
              if (b.samples.length < 3) b.samples.push(ev.va + ' (' + ev.sym + ')');
            }
            const arr = Array.from(map.values()).sort((a, b) => a.tStart - b.tStart);
            for (let i = 1; i < arr.length; i++) {
              arr[i].gapBefore = (arr[i].tStart - arr[i - 1].tEnd) > 900;
            }
            return arr;
          }

          // Linear time buckets for 'latest' or 'wall'
          const tMin = filtered[0].t;
          const tMax = Math.max(tMin + 60, filtered[filtered.length - 1].t);
          const span = tMax - tMin;
          const numBuckets = Math.min(48, Math.max(12, Math.ceil(span / (curMode === 'latest' ? 30 : 1800))));
          const step = Math.max(1, Math.ceil(span / numBuckets));

          let baseFuncs = 0, baseBytes = 0;
          if (curMode === 'latest' && filtered.length < EVENTS.length) {
            const cutIdx = EVENTS.length - filtered.length;
            baseFuncs = cutIdx;
            for (let i = 0; i < cutIdx; i++) baseBytes += EVENTS[i].b;
          }

          const buckets = [];
          let eIdx = 0;
          let cumFuncs = baseFuncs, cumBytes = baseBytes;
          for (let i = 0; i < numBuckets; i++) {
            const bStart = tMin + i * step;
            const bEnd = (i === numBuckets - 1) ? (tMax + 1) : (tMin + (i + 1) * step);
            const b = { tStart: bStart, tEnd: bEnd, dFuncs: 0, dBytes: 0, cumFuncs: cumFuncs, cumBytes: cumBytes, models: {}, samples: [] };
            while (eIdx < filtered.length && filtered[eIdx].t < bEnd) {
              const ev = filtered[eIdx++];
              cumFuncs++;
              cumBytes += ev.b;
              b.dFuncs++;
              b.dBytes += ev.b;
              b.models[ev.m] = (b.models[ev.m] || 0) + 1;
              if (b.samples.length < 3) b.samples.push(ev.va + ' (' + ev.sym + ')');
            }
            b.cumFuncs = cumFuncs;
            b.cumBytes = cumBytes;
            buckets.push(b);
          }
          return buckets;
        }

        let renderedBuckets = [];

        function render() {
          renderedBuckets = buildBuckets();
          if (renderedBuckets.length === 0) return;

          const valOf = (b) => {
            if (curMetric === 'ai_bytes') return b.cumBytes;
            if (curMetric === 'total_funcs') return AUTO_FUNCS + b.cumFuncs;
            return b.cumFuncs;
          };
          const deltaOf = (b) => (curMetric === 'ai_bytes' ? b.dBytes : b.dFuncs);

          let minY = (curMetric === 'total_funcs') ? AUTO_FUNCS : 0;
          let maxY = Math.max(minY + 1, valOf(renderedBuckets[renderedBuckets.length - 1]));
          let maxDelta = 1;
          for (const b of renderedBuckets) {
            if (deltaOf(b) > maxDelta) maxDelta = deltaOf(b);
          }

          const n = renderedBuckets.length;
          const xAt = (i) => (n === 1) ? (PAD_L + PW / 2) : (PAD_L + (i / (n - 1)) * PW);
          const yAt = (v) => PAD_T + PH - ((v - minY) / (maxY - minY)) * PH;

          const pts = [];
          const areaPts = [PAD_L.toFixed(1) + ',' + (PAD_T + PH).toFixed(1)];
          let barsHTML = '';
          let gapsHTML = '';
          let dotsHTML = '';
          const barW = Math.max(4, Math.min(26, (PW / Math.max(1, n)) * 0.62));

          for (let i = 0; i < n; i++) {
            const b = renderedBuckets[i];
            const x = xAt(i);
            const y = yAt(valOf(b));
            b._x = x;
            b._y = y;
            pts.push(x.toFixed(1) + ',' + y.toFixed(1));
            areaPts.push(x.toFixed(1) + ',' + y.toFixed(1));

            const d = deltaOf(b);
            if (d > 0) {
              const bh = (d / maxDelta) * (PH * 0.44);
              const by = PAD_T + PH - bh;
              barsHTML += '<rect x="' + (x - barW / 2).toFixed(1) + '" y="' + by.toFixed(1) + '" width="' + barW.toFixed(1) + '" height="' + bh.toFixed(1) + '" rx="2" fill="rgba(88,166,255,0.30)"/>';
            }
            if (b.gapBefore && i > 0) {
              const gx = (xAt(i - 1) + x) / 2;
              gapsHTML += '<line x1="' + gx.toFixed(1) + '" y1="' + PAD_T + '" x2="' + gx.toFixed(1) + '" y2="' + (PAD_T + PH) + '" stroke="#30363d" stroke-dasharray="2,4"/>';
              gapsHTML += '<text x="' + gx.toFixed(1) + '" y="' + (PAD_T + 11) + '" fill="#8b949e" font-size="9" text-anchor="middle">idle gap</text>';
            }
            if (n <= 40 || i === n - 1 || i === 0 || b.gapBefore) {
              dotsHTML += '<circle cx="' + x.toFixed(1) + '" cy="' + y.toFixed(1) + '" r="3" fill="#3fb950"/>';
            }
          }
          areaPts.push(xAt(n - 1).toFixed(1) + ',' + (PAD_T + PH).toFixed(1));

          gBars.innerHTML = barsHTML;
          polyArea.setAttribute('points', areaPts.join(' '));
          polyLine.setAttribute('points', pts.join(' '));
          gGaps.innerHTML = gapsHTML;
          gDots.innerHTML = dotsHTML;

          // Axes labels
          let axesHTML = '';
          const steps = 4;
          for (let s = 0; s <= steps; s++) {
            const v = minY + ((maxY - minY) * (steps - s)) / steps;
            const y = PAD_T + (PH * s) / steps + 4;
            axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + y.toFixed(1) + '" fill="#8b949e" font-size="11" text-anchor="end">' + fmtInt(v) + '</text>';
          }
          // Right axis (max interval velocity)
          axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH * 0.56) + '" fill="#58a6ff" font-size="10" text-anchor="start">+' + fmtInt(maxDelta) + '</text>';
          axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH) + '" fill="#58a6ff" font-size="10" text-anchor="start">0</text>';

          // X-axis time ticks
          const tickCount = Math.min(6, n);
          for (let t = 0; t < tickCount; t++) {
            const idx = (tickCount === 1) ? 0 : Math.round((t * (n - 1)) / (tickCount - 1));
            const b = renderedBuckets[idx];
            const x = xAt(idx);
            const anchor = (t === 0) ? 'start' : (t === tickCount - 1 ? 'end' : 'middle');
            axesHTML += '<text x="' + x.toFixed(1) + '" y="' + (H - 8) + '" fill="#8b949e" font-size="11" text-anchor="' + anchor + '">' + fmtTimeShort(b.tStart) + '</text>';
          }
          gAxes.innerHTML = axesHTML;

          const unitLabel = (curMetric === 'ai_bytes') ? 'bytes' : 'funcs';
          bucketNote.textContent = n + ' intervals plotted (' + unitLabel + ') • Hover for breakdown';
        }

        svg.addEventListener('mousemove', function(e) {
          if (!renderedBuckets.length) return;
          const rect = svg.getBoundingClientRect();
          const relX = ((e.clientX - rect.left) / rect.width) * W;
          let best = renderedBuckets[0];
          let bestDist = Math.abs(relX - best._x);
          for (const b of renderedBuckets) {
            const d = Math.abs(relX - b._x);
            if (d < bestDist) {
              best = b;
              bestDist = d;
            }
          }
          hoverLine.setAttribute('x1', best._x.toFixed(1));
          hoverLine.setAttribute('x2', best._x.toFixed(1));
          hoverLine.setAttribute('visibility', 'visible');

          const durMin = Math.max(1, Math.round((best.tEnd - best.tStart) / 60));
          const rateHr = Math.round((best.dFuncs * 60) / durMin);
          const modelList = Object.entries(best.models).map(([k, v]) => k + ': ' + v).join(', ') || 'none';
          const sampleHtml = best.samples.length ? ('<div style="margin-top:4px;color:#8b949e;font-size:11px;">e.g. ' + best.samples.join(', ') + '</div>') : '';

          tooltip.innerHTML =
            '<div style="font-weight:600;margin-bottom:2px;">' + fmtTimeShort(best.tStart) + ' (' + durMin + 'm window)</div>' +
            '<div>Cumulative AI: <strong>' + fmtInt(best.cumFuncs) + ' funcs</strong> (' + fmtInt(best.cumBytes) + ' B)</div>' +
            '<div>Total In-Scope: <strong>' + fmtInt(AUTO_FUNCS + best.cumFuncs) + ' / ' + fmtInt(TOTAL_FUNCS) + '</strong></div>' +
            '<div style="color:#58a6ff;">Window Delta: <strong>+' + fmtInt(best.dFuncs) + ' funcs</strong> (+' + fmtInt(best.dBytes) + ' B &bull; ~' + fmtInt(rateHr) + ' fn/hr)</div>' +
            '<div style="font-size:11px;color:#e6edf3;margin-top:2px;">Models: <code>' + modelList + '</code></div>' +
            sampleHtml;
          tooltip.hidden = false;
        });

        svg.addEventListener('mouseleave', function() {
          hoverLine.setAttribute('visibility', 'hidden');
          tooltip.hidden = true;
        });

        document.querySelectorAll('#mode-group .chart-btn').forEach(btn => {
          btn.addEventListener('click', () => {
            document.querySelectorAll('#mode-group .chart-btn').forEach(b => b.classList.remove('active'));
            btn.classList.add('active');
            curMode = btn.getAttribute('data-mode');
            render();
          });
        });

        document.querySelectorAll('#metric-group .chart-btn').forEach(btn => {
          btn.addEventListener('click', () => {
            document.querySelectorAll('#metric-group .chart-btn').forEach(b => b.classList.remove('active'));
            btn.classList.add('active');
            curMetric = btn.getAttribute('data-metric');
            render();
          });
        });

        render();
      })();
      </script>
    </div>
`,
		activeFuncsPerHr, activeBytesPerHr/1024.0, activeHours,
		recentSessionFuncs, recentSessionRateHr, recentSessionBytes,
		peak10mFuncs, peak10mFuncs*6, peak10mBytes,
		len(events), aiMatchedBytes,
		barRects.String(),
		strings.Join(areaPoints, " "),
		strings.Join(polyPoints, " "),
		string(eventsJSON),
		autoSolveFuncs, autoSolveBytes, inScopeFuncs, inScopeBytes,
	))
	return sb.String()
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
	matchEvents []MatchEvent,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	var aiMatchedFuncs int
	for _, m := range leaderboard {
		aiMatchedFuncs += m.MatchedFuncs
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs

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
    .chart-header {
      display: flex;
      justify-content: space-between;
      align-items: flex-start;
      flex-wrap: wrap;
      gap: 12px;
      margin-bottom: 16px;
    }
    .chart-controls {
      display: flex;
      gap: 8px;
      flex-wrap: wrap;
    }
    .btn-group {
      display: inline-flex;
      background: #0d1117;
      border: 1px solid var(--border);
      border-radius: 6px;
      overflow: hidden;
    }
    .chart-btn {
      background: transparent;
      color: var(--muted);
      border: none;
      padding: 5px 10px;
      font-size: 12px;
      font-weight: 600;
      cursor: pointer;
      border-right: 1px solid var(--border);
    }
    .chart-btn:last-child {
      border-right: none;
    }
    .chart-btn:hover {
      color: var(--text);
      background: #21262d;
    }
    .chart-btn.active {
      color: #ffffff;
      background: #238636;
    }
    .velocity-kpis {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(180px, 1fr));
      gap: 12px;
      margin-bottom: 16px;
    }
    .vkpi {
      background: #0d1117;
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 10px 12px;
      display: flex;
      flex-direction: column;
    }
    .vkpi-label {
      color: var(--muted);
      font-size: 11px;
      text-transform: uppercase;
      letter-spacing: 0.04em;
    }
    .vkpi-val {
      font-size: 18px;
      font-weight: 700;
      margin-top: 2px;
      font-variant-numeric: tabular-nums;
    }
    .vkpi-sub {
      color: var(--muted);
      font-size: 12px;
      margin-top: 2px;
    }
    .chart-wrap {
      position: relative;
      background: #0d1117;
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 8px 4px 4px 4px;
    }
    #velocity-svg {
      width: 100%;
      height: 260px;
      display: block;
      cursor: crosshair;
    }
    .chart-tooltip {
      position: absolute;
      top: 14px;
      left: 68px;
      background: rgba(22, 27, 34, 0.96);
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 8px 12px;
      font-size: 12px;
      line-height: 1.45;
      pointer-events: none;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.45);
      max-width: 360px;
      z-index: 10;
    }
    .chart-legend {
      display: flex;
      align-items: center;
      gap: 18px;
      flex-wrap: wrap;
      font-size: 12px;
      color: var(--muted);
      margin-top: 10px;
    }
    .legend-swatch {
      display: inline-block;
      width: 10px;
      height: 10px;
      border-radius: 2px;
      margin-right: 5px;
      vertical-align: middle;
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
        <div class="card-sub">%d / %d (%d AI &bull; %d auto_solve)</div>
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
		funcPct, funcPct, inScopeMatchedFuncs, inScopeFuncs, aiMatchedFuncs, autoSolveFuncs,
		bytePct, bytePct, inScopeMatchedBytes, inScopeBytes, float64(inScopeBytes)/(1024.0*1024.0),
		totalClasses, inScopeClasses, mfcClasses,
		outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
	))

	sb.WriteString(renderVelocityGraphPanel(
		matchEvents,
		inScopeFuncs, inScopeMatchedFuncs,
		inScopeBytes, inScopeMatchedBytes,
		aiMatchedFuncs,
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
      <h2 style="margin-top:0;font-size:18px;">Squad Leaderboard (AI Model Matches)</h2>
      <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Excludes ` + fmt.Sprintf("%d", autoSolveFuncs) + ` deterministic <code>script:auto_solve</code> baseline stubs</div>
      <table>
        <thead>
          <tr>
            <th>Model</th>
            <th class="num">Matched Functions</th>
            <th class="num">Matched Bytes</th>
            <th class="num">Share of AI Matches</th>
          </tr>
        </thead>
        <tbody>
`)

	if len(leaderboard) == 0 {
		sb.WriteString(`          <tr>
            <td style="color:var(--muted);font-style:italic;">No AI matches yet</td>
            <td class="num">0</td>
            <td class="num">0</td>
            <td class="num">0.00%</td>
          </tr>
`)
	} else {
		for _, m := range leaderboard {
			sharePct := pct(uint64(m.MatchedFuncs), uint64(aiMatchedFuncs))
			sb.WriteString(fmt.Sprintf(`          <tr>
            <td><code>%s</code></td>
            <td class="num">%d</td>
            <td class="num">%d</td>
            <td class="num">%.2f%%</td>
          </tr>
`, m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
		}
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

	var aiMatchedFuncs int
	for _, m := range leaderboard {
		aiMatchedFuncs += m.MatchedFuncs
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs

	sb.WriteString("# Endorphin 2.7.1 Decompilation Project\n\n")
	sb.WriteString("A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.\n\n")
	sb.WriteString("## Verified Byte-Match Scoreboard\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**) — `%d` by AI models, `%d` by deterministic `auto_solve`\n", inScopeMatchedFuncs, inScopeFuncs, funcPct, aiMatchedFuncs, autoSolveFuncs))
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

	sb.WriteString("\n### Squad Leaderboard (AI Model Matches)\n\n")
	sb.WriteString("| Model | Matched Functions | Matched Bytes | Share of AI Matches |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	if len(leaderboard) == 0 {
		sb.WriteString("| *(no AI matches yet)* | 0 | 0 | 0.00% |\n")
	} else {
		for _, m := range leaderboard {
			sharePct := pct(uint64(m.MatchedFuncs), uint64(aiMatchedFuncs))
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n", m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
		}
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

	var aiMatchedFuncs int
	for _, m := range leaderboard {
		aiMatchedFuncs += m.MatchedFuncs
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs

	sb.WriteString("## Endorphin 2.7.1 Decompilation Scoreboard\n\n")
	sb.WriteString(fmt.Sprintf("- **In-Scope Functions Matched:** `%d / %d` (**%.2f%%**) — `%d` by AI models, `%d` by deterministic `auto_solve`\n", inScopeMatchedFuncs, inScopeFuncs, funcPct, aiMatchedFuncs, autoSolveFuncs))
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

	sb.WriteString("\n### Squad Leaderboard (AI Model Matches)\n\n")
	sb.WriteString("| Model | Matched Functions | Matched Bytes | Share of AI Matches |\n")
	sb.WriteString("| :--- | ---: | ---: | ---: |\n")
	if len(leaderboard) == 0 {
		sb.WriteString("| *(no AI matches yet)* | 0 | 0 | 0.00% |\n")
	} else {
		for _, m := range leaderboard {
			sharePct := pct(uint64(m.MatchedFuncs), uint64(aiMatchedFuncs))
			sb.WriteString(fmt.Sprintf("| `%s` | %d | %d | %.2f%% |\n", m.Model, m.MatchedFuncs, m.MatchedBytes, sharePct))
		}
	}
	return sb.String()
}

func main() {
	htmlOut := flag.String("html", "", "Optional path to write HTML dashboard (e.g. docs/index.html, CI only)")
	readmeFlag := flag.Bool("readme", false, "Update only the progress section in README.md")
	ciFlag := flag.Bool("ci", false, "Print GitHub Actions Markdown step summary")
	flag.Parse()

	unitsBytes, err := unitstore.ReadAll()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing unit ledger (build/units/): %v\n", err)
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
	gitMatchTS, latestGitISO := extractGitMatchTimestamps()
	var matchEvents []MatchEvent

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
			if u.MatchedBy == "claude-haiku" {
				// Early matches were recorded without the version suffix.
				u.MatchedBy = "claude-haiku-5.5"
				unitsUpdated = true
			}
			inScopeMatchedFuncs++
			inScopeMatchedBytes += uint64(u.Size)
			tier.MatchedFuncs++
			tier.MatchedBytes += uint64(u.Size)

			if u.MatchedBy != "script:auto_solve" {
				ms, ok := modelStatsMap[u.MatchedBy]
				if !ok {
					ms = &ModelStats{Model: u.MatchedBy}
					modelStatsMap[u.MatchedBy] = ms
				}
				ms.MatchedFuncs++
				ms.MatchedBytes += uint64(u.Size)

				normVA := "0x" + strings.ToUpper(strings.TrimPrefix(u.VA, "0x"))
				if len(u.MatchedAt) <= 10 {
					if gitISO, ok := gitMatchTS[normVA]; ok && gitISO != "" {
						u.MatchedAt = gitISO
						unitsUpdated = true
					} else if u.MatchedAt == "" && latestGitISO != "" {
						u.MatchedAt = latestGitISO
						unitsUpdated = true
					}
				}
				if ts, ok := parseFlexibleTimestamp(u.MatchedAt); ok {
					matchEvents = append(matchEvents, MatchEvent{
						UnixSec: ts.Unix(),
						TimeISO: ts.Format(time.RFC3339),
						VA:      u.VA,
						Symbol:  u.Symbol,
						Size:    u.Size,
						Model:   u.MatchedBy,
					})
				}
			}
		} else {
			inScopeRemainFuncs++
			inScopeRemainBytes += uint64(u.Size)
			tier.RemainFuncs++
			tier.RemainBytes += uint64(u.Size)
		}
	}

	sort.Slice(matchEvents, func(i, j int) bool {
		if matchEvents[i].UnixSec != matchEvents[j].UnixSec {
			return matchEvents[i].UnixSec < matchEvents[j].UnixSec
		}
		return matchEvents[i].VA < matchEvents[j].VA
	})

	if unitsUpdated {
		if outJSON, err := json.MarshalIndent(units, "", "  "); err == nil {
			_ = unitstore.WriteAll(outJSON)
		}
	}

	var leaderboard []ModelStats
	var aiMatchedFuncs int
	for _, ms := range modelStatsMap {
		leaderboard = append(leaderboard, *ms)
		aiMatchedFuncs += ms.MatchedFuncs
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
		fmt.Printf("  - AI Matched   : %5d funcs          | %d deterministic auto_solve stubs\n",
			aiMatchedFuncs, inScopeMatchedFuncs-aiMatchedFuncs)
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
		fmt.Println("Squad Leaderboard (AI Model Matches)")
		fmt.Println("Model                       | Matched Funcs | Matched Bytes | Share of AI Matches")
		fmt.Println("----------------------------+---------------+---------------+--------------------")
		if len(leaderboard) == 0 {
			fmt.Printf("%-27s | %13d | %13d | %17.2f%%\n", "(no AI matches yet)", 0, 0, 0.0)
		} else {
			for _, m := range leaderboard {
				fmt.Printf("%-27s | %13d | %13d | %17.2f%%\n",
					m.Model, m.MatchedFuncs, m.MatchedBytes,
					pct(uint64(m.MatchedFuncs), uint64(aiMatchedFuncs)),
				)
			}
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
			matchEvents,
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
