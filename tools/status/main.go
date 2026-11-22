package main

import (
	"encoding/json"
	"flag"
	"fmt"
	"html"
	"math"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"sort"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

const numTiers = 10

type ModelStats struct {
	Model        string
	MatchedFuncs int
	MatchedBytes uint64
	Sizes        []uint32
	TierCounts   [numTiers]int
}

// sizeStats returns the average, median, and largest function size this model has matched.
func (m ModelStats) sizeStats() (avg float64, median, largest uint32) {
	if len(m.Sizes) == 0 {
		return 0, 0, 0
	}
	sorted := append([]uint32(nil), m.Sizes...)
	sort.Slice(sorted, func(i, j int) bool { return sorted[i] < sorted[j] })
	return float64(m.MatchedBytes) / float64(len(sorted)), sorted[len(sorted)/2], sorted[len(sorted)-1]
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
	MinSize      uint32
	MaxSize      uint32
}

// buildDecileTiers ranks in-scope functions by size (ties broken by VA) and splits them into
// ten equal-count percentile tiers. It returns the tiers and a unit-index -> tier-index map.
func buildDecileTiers(units []decomp.UnitEntry, mfcClasses map[string]bool) ([]*TierStats, map[int]int) {
	type ref struct {
		idx  int
		size uint32
		va   string
	}
	var refs []ref
	for i := range units {
		if oos, _ := isOutOfScope(units[i], mfcClasses); !oos {
			refs = append(refs, ref{i, units[i].Size, units[i].VA})
		}
	}
	sort.Slice(refs, func(i, j int) bool {
		if refs[i].size != refs[j].size {
			return refs[i].size < refs[j].size
		}
		return refs[i].va < refs[j].va
	})

	tiers := make([]*TierStats, numTiers)
	for i := range tiers {
		tiers[i] = &TierStats{}
	}
	tierOf := make(map[int]int, len(refs))
	seen := make([]bool, numTiers)
	for r, rf := range refs {
		t := r * numTiers / len(refs)
		tierOf[rf.idx] = t
		if !seen[t] {
			seen[t] = true
			tiers[t].MinSize = rf.size
		}
		tiers[t].MaxSize = rf.size
	}
	for i, t := range tiers {
		rng := fmt.Sprintf("%d-%dB", t.MinSize, t.MaxSize)
		if t.MinSize == t.MaxSize {
			rng = fmt.Sprintf("%dB", t.MinSize)
		}
		t.ShortName = fmt.Sprintf("P%d-%d (%s)", i*10, (i+1)*10, rng)
		t.Name = fmt.Sprintf("%-22s", t.ShortName)
	}
	return tiers, tierOf
}

// Projection is a run-rate based completion estimate (byte-weighted, wall-clock).
type Projection struct {
	Valid      bool
	Done       bool
	RateBps    float64 // bytes per second over the trailing window
	WindowDays float64
	ETA        time.Time
	Now        time.Time
}

func computeProjection(events []MatchEvent, remainBytes uint64) Projection {
	now := time.Now().UTC()
	p := Projection{Now: now}
	if remainBytes == 0 {
		p.Valid, p.Done, p.ETA = true, true, now
		return p
	}
	if len(events) == 0 {
		return p
	}
	start := now.Unix() - 7*86400
	if first := events[0].UnixSec; first > start {
		start = first
	}
	span := float64(now.Unix() - start)
	if span < 86400 {
		span = 86400 // avoid wild extrapolation from a sub-day window
	}
	var bytes uint64
	for _, ev := range events {
		if ev.UnixSec >= start {
			bytes += uint64(ev.Size)
		}
	}
	if bytes == 0 {
		return p
	}
	p.RateBps = float64(bytes) / span
	p.WindowDays = span / 86400.0
	secs := float64(remainBytes) / p.RateBps
	if secs > 3.0e9 { // ~95 years: not a meaningful estimate
		return p
	}
	p.ETA = now.Add(time.Duration(secs) * time.Second)
	p.Valid = true
	return p
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

type gitTimestampCache struct {
	HeadSHA   string            `json:"head_sha"`
	LatestISO string            `json:"latest_iso"`
	ByVA      map[string]string `json:"by_va"`
}

func applyGitMatchLog(out []byte, byVA map[string]string, latestCommitISO string) (map[string]string, string) {
	if byVA == nil {
		byVA = make(map[string]string)
	}
	trimmed := strings.TrimSpace(string(out))
	if trimmed == "" {
		return byVA, latestCommitISO
	}
	for _, line := range strings.Split(trimmed, "\n") {
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

func writeGitTimestampCache(path string, cache gitTimestampCache) {
	dir := filepath.Dir(path)
	if err := os.MkdirAll(dir, 0o755); err != nil {
		return
	}
	data, err := json.Marshal(cache)
	if err != nil {
		return
	}
	tmp, err := os.CreateTemp(dir, "git_timestamps-*.json.tmp")
	if err != nil {
		return
	}
	tmpPath := tmp.Name()
	if _, err := tmp.Write(data); err != nil {
		tmp.Close()
		os.Remove(tmpPath)
		return
	}
	if err := tmp.Close(); err != nil {
		os.Remove(tmpPath)
		return
	}
	if err := os.Rename(tmpPath, path); err != nil {
		os.Remove(tmpPath)
	}
}

func extractGitMatchTimestamps() (map[string]string, string) {
	cachePath := filepath.Join(".local", "cache", "git_timestamps.json")

	headOut, headErr := exec.Command("git", "rev-parse", "HEAD").Output()
	headSHA := strings.TrimSpace(string(headOut))

	var cache gitTimestampCache
	var cacheLoaded bool
	if data, err := os.ReadFile(cachePath); err == nil {
		if err := json.Unmarshal(data, &cache); err == nil && cache.HeadSHA != "" {
			if cache.ByVA == nil {
				cache.ByVA = make(map[string]string)
			}
			cacheLoaded = true
		}
	}

	if headErr == nil && headSHA != "" && cacheLoaded {
		if headSHA == cache.HeadSHA {
			return cache.ByVA, cache.LatestISO
		}
		if mbOut, err := exec.Command("git", "merge-base", cache.HeadSHA, "HEAD").Output(); err == nil && strings.TrimSpace(string(mbOut)) == cache.HeadSHA {
			if out, err := exec.Command("git", "log", "--reverse", "--pretty=format:%cI|%s", cache.HeadSHA+"..HEAD").Output(); err == nil {
				byVA, latestISO := applyGitMatchLog(out, cache.ByVA, cache.LatestISO)
				writeGitTimestampCache(cachePath, gitTimestampCache{
					HeadSHA:   headSHA,
					LatestISO: latestISO,
					ByVA:      byVA,
				})
				return byVA, latestISO
			}
		}
	}

	out, err := exec.Command("git", "log", "--reverse", "--pretty=format:%cI|%s").Output()
	if err != nil {
		return make(map[string]string), ""
	}
	byVA, latestISO := applyGitMatchLog(out, nil, "")
	if headErr == nil && headSHA != "" {
		writeGitTimestampCache(cachePath, gitTimestampCache{
			HeadSHA:   headSHA,
			LatestISO: latestISO,
			ByVA:      byVA,
		})
	}
	return byVA, latestISO
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

// notQueueable counts in-scope, unfinished units that `work next` will never hand out (skipped, deferred,
// or whose cached disassembly is not one clean function), so they show up instead of silently vanishing.
func notQueueable(units []decomp.UnitEntry, mfcClasses map[string]bool) (int, uint64) {
	n, b := 0, uint64(0)
	for _, u := range units {
		if decomp.IsCompleted(u.Status) || decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses) {
			continue
		}
		if u.Status == "skipped" || u.Status == "deferred" || !decomp.IsValidCodeUnit(u.VA) {
			n++
			b += uint64(u.Size)
		}
	}
	return n, b
}

func isOutOfScope(u decomp.UnitEntry, mfcClasses map[string]bool) (bool, string) {
	if !decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses) {
		return false, ""
	}
	if u.IsThunk {
		return true, "thunk"
	}
	return true, "crt_mfc"
}

// backfillMatchedByEffort normalizes legacy model names that were recorded before @<effort> suffixes were added:
//   - agy runs (gemini-* and 2026-11-12 agy/claude-sonnet-5.5 runs) explicitly ran with --effort high -> @high
//   - native claude CLI runs (claude-haiku-5.5, pre-2026-11-12 claude-sonnet-5.5, claude-opus-5.5) -> @medium
func backfillMatchedByEffort(matchedBy, matchedAt string) (string, bool) {
	m := strings.TrimSpace(matchedBy)
	if m == "" || m == "script:auto_solve" || m == "auto-solved" || m == "unknown" || strings.Contains(m, "@") {
		return matchedBy, false
	}
	if m == "claude-haiku" {
		m = "claude-haiku-5.5"
	}
	ts := strings.TrimSpace(matchedAt)
	// f80352520 (2026-11-12T12:41:53Z) switched all bare-model runs to medium effort; earlier agy runs used high.
	preMediumSwitch := ts == "" || ts < "2026-11-12T12:41:53Z"
	switch {
	case strings.HasPrefix(m, "gemini-"):
		if preMediumSwitch {
			return m + "@high", true
		}
		return m + "@medium", true
	case m == "claude-sonnet-5.5":
		if strings.HasPrefix(ts, "2026-11-12") && preMediumSwitch {
			return m + "@high", true
		}
		return m + "@medium", true
	case strings.HasPrefix(m, "claude-"):
		return m + "@medium", true
	default:
		return matchedBy, false
	}
}

func pct(part, total uint64) float64 {
	if total == 0 {
		return 0.0
	}
	return (float64(part) * 100.0) / float64(total)
}

// formatETA renders the projected completion date and a short explanation of how it was derived.
func formatETA(p Projection, remainBytes uint64, activeBytesPerHr float64) (val, sub string) {
	if p.Done {
		return "Complete", "all in-scope bytes matched"
	}
	if !p.Valid {
		return "n/a", "not enough recent matches to project"
	}
	days := p.ETA.Sub(p.Now).Hours() / 24.0
	val = p.ETA.Format("2006-01-02")
	sub = fmt.Sprintf("in ~%.0f days &bull; %.1f KB/day over last %.0f d (%.0f KB left)",
		days, p.RateBps*86400.0/1024.0, p.WindowDays, float64(remainBytes)/1024.0)
	if activeBytesPerHr > 0 {
		sub += fmt.Sprintf(" &bull; ~%.0f active hrs", float64(remainBytes)/activeBytesPerHr)
	}
	return val, sub
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
	var recentSessionRateHr float64
	if recentSessionSpanSec > 0 {
		recentSessionRateHr = (float64(recentSessionFuncs) * 3600.0) / float64(recentSessionSpanSec)
	}

	var remainBytes uint64
	if inScopeBytes > inScopeMatchedBytes {
		remainBytes = inScopeBytes - inScopeMatchedBytes
	}
	proj := computeProjection(events, remainBytes)
	etaVal, etaSub := formatETA(proj, remainBytes, activeBytesPerHr)
	completeVal := fmt.Sprintf("%.2f%%", pct(inScopeMatchedBytes, inScopeBytes))
	completeSub := fmt.Sprintf("bytes &bull; %.2f%% of functions", pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs)))
	var etaUnix int64
	if proj.Valid && !proj.Done {
		etaUnix = proj.ETA.Unix()
	}

	// Build fallback static SVG points (Active Grind progression across up to 32 buckets)
	const svgW = 1600.0
	const svgH = 280.0
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
            <button type="button" class="chart-btn" data-metric="pct">%% to 100 &amp; ETA</button>
          </div>
        </div>
      </div>

      <div class="velocity-kpis">
        <div class="vkpi">
          <span class="vkpi-label">Overall Completion</span>
          <span class="vkpi-val">%s</span>
          <span class="vkpi-sub">%s</span>
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
          <span class="vkpi-label">AI Solves Logged</span>
          <span class="vkpi-val">%d funcs</span>
          <span class="vkpi-sub">%d bytes (1 commit / solve)</span>
        </div>
      </div>

      <div class="chart-wrap" id="velocity-chart-wrap">
        <svg id="velocity-svg" viewBox="0 0 1600 280" role="img" aria-label="Decompilation progress and velocity chart">
          <defs>
            <linearGradient id="cumAreaGrad" x1="0" y1="0" x2="0" y2="1">
              <stop offset="0%%" stop-color="#3fb950" stop-opacity="0.32"/>
              <stop offset="100%%" stop-color="#3fb950" stop-opacity="0.02"/>
            </linearGradient>
          </defs>
          <g id="chart-grid">
            <line x1="56" y1="20" x2="1546" y2="20" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="76.5" x2="1546" y2="76.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="133" x2="1546" y2="133" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="189.5" x2="1546" y2="189.5" stroke="#21262d" stroke-dasharray="3,3"/>
            <line x1="56" y1="246" x2="1546" y2="246" stroke="#30363d"/>
          </g>
          <g id="chart-bars">%s</g>
          <polygon id="chart-area" points="%s" fill="url(#cumAreaGrad)"/>
          <polyline id="chart-line" points="%s" fill="none" stroke="#3fb950" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
          <polyline id="chart-proj" points="" fill="none" stroke="#d29922" stroke-width="2" stroke-dasharray="6,5" stroke-linecap="round"/>
          <g id="chart-gaps"></g>
          <g id="chart-dots"></g>
          <g id="chart-axes"></g>
          <line id="chart-hover-line" x1="0" y1="20" x2="0" y2="246" stroke="#8b949e" stroke-width="1" stroke-dasharray="4,3" visibility="hidden"/>
        </svg>
        <div id="chart-tooltip" class="chart-tooltip" hidden></div>
      </div>

      <div class="chart-legend">
        <span><span class="legend-swatch" style="background:#3fb950;"></span> Cumulative Progress (left axis)</span>
        <span><span class="legend-swatch" style="background:rgba(88,166,255,0.65);"></span> Solves per Interval (right axis)</span>
        <span><span class="legend-swatch" style="background:#d29922;"></span> Projection at current run rate (%% to 100 view)</span>
        <span id="chart-bucket-note" style="margin-inline-start:auto;color:var(--muted);">Hover over chart for per-wave details</span>
      </div>
      <script>
      (function() {
        const EVENTS = %s;
        const AUTO_FUNCS = %d;
        const AUTO_BYTES = %d;
        const TOTAL_FUNCS = %d;
        const TOTAL_BYTES = %d;
        const RATE_BPS = %.6f;   // trailing wall-clock bytes/sec
        const NOW_SEC = %d;
        const ETA_SEC = %d;      // 0 when no projection is possible

        let curMode = 'active';
        let curMetric = 'ai_funcs';

        const svg = document.getElementById('velocity-svg');
        const gridLines = document.querySelectorAll('#chart-grid line');
        const gBars = document.getElementById('chart-bars');
        const polyArea = document.getElementById('chart-area');
        const polyLine = document.getElementById('chart-line');
        const polyProj = document.getElementById('chart-proj');
        const gGaps = document.getElementById('chart-gaps');
        const gDots = document.getElementById('chart-dots');
        const gAxes = document.getElementById('chart-axes');
        const hoverLine = document.getElementById('chart-hover-line');
        const tooltip = document.getElementById('chart-tooltip');
        const bucketNote = document.getElementById('chart-bucket-note');

        const H = 280, PAD_L = 56, PAD_R = 54, PAD_T = 20, PAD_B = 34;
        const PH = H - PAD_T - PAD_B;
        let W = 1600, PW = W - PAD_L - PAD_R;

        function syncViewport() {
          const cw = Math.round(svg.clientWidth || 1600);
          W = Math.max(640, cw);
          PW = W - PAD_L - PAD_R;
          svg.setAttribute('viewBox', '0 0 ' + W + ' ' + H);
          gridLines.forEach(line => line.setAttribute('x2', String(W - PAD_R)));
        }

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

        function fmtDate(unixSec) {
          const d = new Date(unixSec * 1000);
          return d.getFullYear() + '-' + String(d.getMonth() + 1).padStart(2, '0') + '-' + String(d.getDate()).padStart(2, '0');
        }
        // Percent of in-scope work done for a plotted value under the current metric.
        function pctOfValue(v) {
          if (curMetric === 'ai_bytes') return 100 * (AUTO_BYTES + v) / TOTAL_BYTES;
          if (curMetric === 'total_funcs') return 100 * v / TOTAL_FUNCS;
          return 100 * (AUTO_FUNCS + v) / TOTAL_FUNCS;
        }

        function buildBuckets(modeOverride) {
          const mode = modeOverride || curMode;
          if (!EVENTS || EVENTS.length === 0) return [];
          let filtered = EVENTS;
          if (mode === 'latest') {
            let startIdx = EVENTS.length - 1;
            while (startIdx > 0 && (EVENTS[startIdx].t - EVENTS[startIdx - 1].t) <= 1800) {
              startIdx--;
            }
            filtered = EVENTS.slice(startIdx);
          }

          if (mode === 'active') {
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
          const maxBuckets = W >= 1200 ? 72 : 48;
          const numBuckets = Math.min(maxBuckets, Math.max(12, Math.ceil(span / (mode === 'latest' ? 30 : 1800))));
          const step = Math.max(1, Math.ceil(span / numBuckets));

          let baseFuncs = 0, baseBytes = 0;
          if (mode === 'latest' && filtered.length < EVENTS.length) {
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

        // "pct to 100 and ETA" view: wall-clock x axis running from the first match to the projected ETA.
        function renderProjection() {
          const bks = buildBuckets('wall');
          renderedBuckets = bks;
          if (bks.length === 0) return;

          const t0 = bks[0].tStart;
          const tNow = Math.max(NOW_SEC, bks[bks.length - 1].tEnd);
          const tEnd = (ETA_SEC > tNow) ? ETA_SEC : tNow;
          const span = Math.max(1, tEnd - t0);
          const xT = (t) => PAD_L + ((t - t0) / span) * PW;
          const pctOf = (b) => 100 * (AUTO_BYTES + b.cumBytes) / TOTAL_BYTES;
          const yP = (p) => PAD_T + PH - (Math.min(100, p) / 100) * PH;

          let maxDelta = 1;
          for (const b of bks) if (b.dBytes > maxDelta) maxDelta = b.dBytes;

          const pts = [];
          const areaPts = [];
          let barsHTML = '';
          for (let i = 0; i < bks.length; i++) {
            const b = bks[i];
            const x = xT(Math.min(b.tEnd, tNow));
            const y = yP(pctOf(b));
            b._x = x;
            b._y = y;
            pts.push(x.toFixed(1) + ',' + y.toFixed(1));
            areaPts.push(x.toFixed(1) + ',' + y.toFixed(1));
            if (b.dBytes > 0) {
              const bw = Math.max(2, ((b.tEnd - b.tStart) / span) * PW * 0.8);
              const bh = (b.dBytes / maxDelta) * (PH * 0.44);
              barsHTML += '<rect x="' + (x - bw).toFixed(1) + '" y="' + (PAD_T + PH - bh).toFixed(1) + '" width="' + bw.toFixed(1) + '" height="' + bh.toFixed(1) + '" rx="1" fill="rgba(88,166,255,0.30)"/>';
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

          let dotsHTML = '<circle cx="' + xNow.toFixed(1) + '" cy="' + yNow.toFixed(1) + '" r="4" fill="#3fb950"/>';
          let axesHTML = '';
          if (ETA_SEC > tNow) {
            const xE = xT(ETA_SEC);
            polyProj.setAttribute('points', xNow.toFixed(1) + ',' + yNow.toFixed(1) + ' ' + xE.toFixed(1) + ',' + yP(100).toFixed(1));
            dotsHTML += '<circle cx="' + xE.toFixed(1) + '" cy="' + yP(100).toFixed(1) + '" r="4" fill="#d29922"/>';
            axesHTML += '<text x="' + (xE - 8).toFixed(1) + '" y="' + (PAD_T + 16) + '" fill="#d29922" font-size="11" font-weight="600" text-anchor="end">ETA ' + fmtDate(ETA_SEC) + '</text>';
          } else {
            polyProj.setAttribute('points', '');
          }
          gDots.innerHTML = dotsHTML;

          for (let s = 0; s <= 4; s++) {
            const p = 100 - s * 25;
            axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + (PAD_T + (PH * s) / 4 + 4).toFixed(1) + '" fill="#8b949e" font-size="11" text-anchor="end">' + p + '%%</text>';
          }
          const nowLabelX = Math.min(xNow + 8, W - PAD_R - 60);
          axesHTML += '<text x="' + nowLabelX.toFixed(1) + '" y="' + Math.max(PAD_T + 30, yNow - 10).toFixed(1) + '" fill="#3fb950" font-size="11" font-weight="600">' + curPct.toFixed(1) + '%% now</text>';
          const ticks = W >= 1200 ? 7 : 5;
          for (let t = 0; t < ticks; t++) {
            const tt = t0 + (span * t) / (ticks - 1);
            const anchor = (t === 0) ? 'start' : (t === ticks - 1 ? 'end' : 'middle');
            axesHTML += '<text x="' + xT(tt).toFixed(1) + '" y="' + (H - 8) + '" fill="#8b949e" font-size="11" text-anchor="' + anchor + '">' + fmtDate(tt) + '</text>';
          }
          gAxes.innerHTML = axesHTML;

          let note = curPct.toFixed(1) + '%% of in-scope bytes complete';
          note += (ETA_SEC > tNow) ? ' • projected 100%% on ' + fmtDate(ETA_SEC) + ' at current run rate (' + (RATE_BPS * 86400 / 1024).toFixed(1) + ' KB/day)' : ' • no projection available';
          bucketNote.textContent = note;
        }

        function render() {
          syncViewport();
          if (curMetric !== 'pct') polyProj.setAttribute('points', '');
          if (curMetric === 'pct') { renderProjection(); return; }
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
          const barW = Math.max(4, Math.min(28, (PW / Math.max(1, n)) * 0.62));

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
            if (n <= 48 || i === n - 1 || i === 0 || b.gapBefore) {
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
            axesHTML += '<text x="' + (PAD_L - 8) + '" y="' + (y + 11).toFixed(1) + '" fill="#3fb950" font-size="9" text-anchor="end">' + pctOfValue(v).toFixed(1) + '%%</text>';
          }
          // Right axis (max interval velocity)
          axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH * 0.56) + '" fill="#58a6ff" font-size="10" text-anchor="start">+' + fmtInt(maxDelta) + '</text>';
          axesHTML += '<text x="' + (W - PAD_R + 6) + '" y="' + (PAD_T + PH) + '" fill="#58a6ff" font-size="10" text-anchor="start">0</text>';

          // X-axis time ticks
          const tickCount = Math.min(W >= 1200 ? 9 : 6, n);
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
            '<div>Total In-Scope: <strong>' + fmtInt(AUTO_FUNCS + best.cumFuncs) + ' / ' + fmtInt(TOTAL_FUNCS) + '</strong> (' + (100 * (AUTO_BYTES + best.cumBytes) / TOTAL_BYTES).toFixed(1) + '%% of bytes)</div>' +
            '<div style="color:#58a6ff;">Window Delta: <strong>+' + fmtInt(best.dFuncs) + ' funcs</strong> (+' + fmtInt(best.dBytes) + ' B &bull; ~' + fmtInt(rateHr) + ' fn/hr)</div>' +
            '<div style="font-size:11px;color:#e6edf3;margin-top:2px;">Models: <code>' + modelList + '</code></div>' +
            sampleHtml;
          tooltip.hidden = false;
          const tipW = tooltip.offsetWidth || 320;
          const pxX = (best._x / W) * rect.width;
          const leftPx = (pxX + 20 + tipW > rect.width - 12) ? Math.max(12, pxX - tipW - 16) : (pxX + 20);
          tooltip.style.insetInlineStart = Math.round(leftPx) + 'px';
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

        let resizeRaf = 0;
        window.addEventListener('resize', () => {
          cancelAnimationFrame(resizeRaf);
          resizeRaf = requestAnimationFrame(render);
        });

        render();
      })();
      </script>
    </div>
`,
		completeVal, completeSub, etaVal, etaSub,
		activeFuncsPerHr, activeBytesPerHr/1024.0, activeHours,
		recentSessionFuncs, recentSessionRateHr, recentSessionBytes,
		peak10mFuncs, peak10mFuncs*6, peak10mBytes,
		len(events), aiMatchedBytes,
		barRects.String(),
		strings.Join(areaPoints, " "),
		strings.Join(polyPoints, " "),
		string(eventsJSON),
		autoSolveFuncs, autoSolveBytes, inScopeFuncs, inScopeBytes,
		proj.RateBps, proj.Now.Unix(), etaUnix,
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
	p2 Phase2Stats,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	var aiMatchedFuncs int
	for _, m := range leaderboard {
		aiMatchedFuncs += m.MatchedFuncs
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs

	var remainBytes uint64
	if inScopeBytes > inScopeMatchedBytes {
		remainBytes = inScopeBytes - inScopeMatchedBytes
	}
	cardETAVal, cardETASub := formatETA(computeProjection(matchEvents, remainBytes), remainBytes, 0)

	coreLiftFuncPct := pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs))
	coreLiftBytePct := pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes)
	allLiftFuncPct := pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs))
	allLiftBytePct := pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes)
	portableFuncPct := pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs))
	portableBytePct := pct(p2.ScopeAll.PortableCppBytes, p2.ScopeAll.TotalBytes)
	corePortableFuncPct := pct(uint64(p2.ScopeCore.PortableCppFuncs), uint64(p2.ScopeCore.TotalFuncs))
	namedPct := pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal))

	phase1StatusBadge := fmt.Sprintf("Phase 1: MSVC8 Byte-Match &mdash; %.2f%%", bytePct)
	if inScopeFuncs > 0 && inScopeMatchedFuncs == inScopeFuncs && inScopeMatchedBytes == inScopeBytes {
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
    .container {
      inline-size: 100%;
      max-inline-size: 1860px;
      margin-inline: auto;
    }
    h1 {
      margin: 0 0 4px 0;
      font-size: 28px;
    }
    .subtitle {
      color: var(--muted);
      margin-block-end: 16px;
      font-size: 14px;
    }
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
    .phase-pill-head {
      display: flex;
      align-items: center;
      justify-content: space-between;
      gap: 10px;
      flex-wrap: wrap;
    }
    .phase-badge {
      display: inline-flex;
      align-items: center;
      gap: 6px;
      font-size: 12px;
      font-weight: 700;
      letter-spacing: 0.03em;
      padding: 3px 10px;
      border-radius: 999px;
      text-transform: uppercase;
    }
    .phase-badge.done {
      background: rgba(63, 185, 80, 0.16);
      color: var(--accent-bright);
      border: 1px solid rgba(63, 185, 80, 0.45);
    }
    .phase-badge.active {
      background: rgba(88, 166, 255, 0.14);
      color: var(--blue);
      border: 1px solid rgba(88, 166, 255, 0.42);
    }
    .phase-pill-meta {
      font-size: 13px;
      color: var(--muted);
    }
    .tabs {
      display: flex;
      gap: 8px;
      flex-wrap: wrap;
      border-bottom: 1px solid var(--border);
      margin-block-end: 22px;
      padding-block-end: 10px;
    }
    .tab-btn {
      background: var(--panel);
      color: var(--muted);
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 8px 16px;
      font-size: 14px;
      font-weight: 600;
      cursor: pointer;
      transition: background 0.15s ease, color 0.15s ease, border-color 0.15s ease;
    }
    .tab-btn:hover {
      color: var(--text);
      background: var(--panel-hover);
    }
    .tab-btn.active {
      color: #ffffff;
      background: #1f6feb;
      border-color: #388bfd;
    }
    .tab-panel[hidden] {
      display: none;
    }
    .cards {
      inline-size: 100%;
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
      gap: 16px;
      margin-block-end: 24px;
    }
    .card {
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 16px 18px;
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
      margin-block-start: 4px;
      font-variant-numeric: tabular-nums;
    }
    .card-sub {
      color: var(--muted);
      font-size: 13px;
      margin-block-start: 4px;
    }
    .panel {
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 20px 24px;
      margin-block-end: 24px;
    }
    .panels-split {
      inline-size: 100%;
      display: grid;
      grid-template-columns: 1fr;
      gap: 24px;
      margin-block-end: 24px;
    }
    .panels-split > .panel {
      margin-block-end: 0;
    }
    @media (min-width: 1360px) {
      .panels-split {
        grid-template-columns: minmax(0, 1.55fr) minmax(0, 1fr);
        align-items: start;
      }
    }
    .progress-bar {
      inline-size: 100%;
      block-size: 12px;
      background: #21262d;
      border-radius: 6px;
      overflow: clip;
      margin: 8px 0 4px 0;
    }
    .progress-fill {
      block-size: 100%;
      background: linear-gradient(90deg, var(--accent), var(--accent-bright));
    }
    .progress-fill.blue {
      background: linear-gradient(90deg, var(--blue-deep), var(--blue));
    }
    .progress-fill.cyan {
      background: linear-gradient(90deg, var(--blue), var(--cyan));
    }
    .table-wrapper {
      inline-size: 100%;
      max-inline-size: 100%;
      overflow-x: auto;
      scrollbar-gutter: stable;
      overscroll-behavior-x: contain;
      container-type: inline-size;
    }
    table {
      inline-size: 100%;
      border-collapse: separate;
      border-spacing: 0;
      font-size: 14px;
    }
    th, td {
      padding: 10px 16px;
      text-align: left;
      border-bottom: 1px solid var(--border);
      vertical-align: middle;
    }
    thead {
      position: sticky;
      inset-block-start: 0;
      z-index: 2;
    }
    thead th {
      background: var(--panel);
      color: var(--muted);
      font-weight: 600;
      white-space: nowrap;
    }
    tbody th {
      position: sticky;
      inset-inline-start: 0;
      z-index: 1;
      background: var(--panel);
      color: var(--text);
      font-weight: 600;
      white-space: nowrap;
    }
    tbody tr:hover th,
    tbody tr:hover td {
      background: var(--panel-hover);
    }
    tbody tr:last-child th,
    tbody tr:last-child td {
      border-bottom: none;
    }
    tr.cat-row th {
      background: #12171f;
      color: var(--blue);
      font-size: 12px;
      text-transform: uppercase;
      letter-spacing: 0.06em;
      padding-block: 7px;
    }
    tr.total-row th, tr.total-row td {
      background: #121820;
      font-weight: 700;
      border-top: 1px solid var(--border);
    }
    .num {
      text-align: right;
      white-space: nowrap;
      font-variant-numeric: tabular-nums;
      font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, monospace;
    }
    .model-badge {
      display: inline-block;
      font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, monospace;
      font-size: 13.5px;
      font-weight: 500;
      padding: 2px 8px;
      border-radius: 4px;
      background: #0d1117;
      border: 1px solid var(--border);
      white-space: nowrap;
    }
    .sub-row th {
      padding-inline-start: 30px;
      color: var(--muted);
      font-weight: 500;
    }
    .decile-strip {
      display: flex;
      gap: 3px;
      min-inline-size: 240px;
      inline-size: 100%;
      max-inline-size: 380px;
    }
    .decile-cell {
      flex: 1 1 22px;
      block-size: 18px;
      border-radius: 3px;
    }
    .chart-header {
      display: flex;
      justify-content: space-between;
      align-items: flex-start;
      flex-wrap: wrap;
      gap: 12px;
      margin-block-end: 16px;
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
      overflow: clip;
    }
    .chart-btn {
      background: transparent;
      color: var(--muted);
      border: none;
      padding: 5px 10px;
      font-size: 12px;
      font-weight: 600;
      cursor: pointer;
      border-inline-end: 1px solid var(--border);
    }
    .chart-btn:last-child {
      border-inline-end: none;
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
      inline-size: 100%;
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
      gap: 12px;
      margin-block-end: 16px;
    }
    .vkpi {
      background: #0d1117;
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 10px 14px;
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
      margin-block-start: 2px;
      font-variant-numeric: tabular-nums;
    }
    .vkpi-sub {
      color: var(--muted);
      font-size: 12px;
      margin-block-start: 2px;
    }
    .chart-wrap {
      position: relative;
      background: #0d1117;
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 8px 4px 4px 4px;
    }
    #velocity-svg, #p2-velocity-svg {
      inline-size: 100%;
      block-size: 280px;
      display: block;
      cursor: crosshair;
    }
    .chart-tooltip {
      position: absolute;
      inset-block-start: 14px;
      inset-inline-start: 68px;
      background: rgba(22, 27, 34, 0.96);
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 8px 12px;
      font-size: 12px;
      line-height: 1.45;
      pointer-events: none;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.45);
      max-inline-size: 380px;
      z-index: 10;
    }
    .chart-legend {
      display: flex;
      align-items: safe center;
      gap: 18px;
      flex-wrap: wrap;
      font-size: 12px;
      color: var(--muted);
      margin-block-start: 10px;
    }
    .legend-swatch {
      display: inline-block;
      inline-size: 10px;
      block-size: 10px;
      border-radius: 2px;
      margin-inline-end: 5px;
      vertical-align: middle;
    }
    .zero-state {
      background: #0d1117;
      border: 1px dashed var(--border);
      border-radius: 6px;
      padding: 20px 22px;
      color: var(--muted);
    }
    .zero-state-title {
      color: var(--text);
      font-weight: 600;
      margin-block-end: 4px;
    }
    .link-btn {
      display: inline-block;
      margin-block-start: 10px;
      background: #21262d;
      color: var(--text);
      border: 1px solid var(--border);
      border-radius: 6px;
      padding: 6px 12px;
      font-size: 13px;
      font-weight: 600;
      cursor: pointer;
    }
    .link-btn:hover { background: #30363d; }
  </style>
</head>
<body>
  <div class="container">
    <h1>Endorphin 2.7.1 Decompilation &amp; Lifting Dashboard</h1>
    <div class="subtitle">Target: <code>endorphin.exe</code> (MSVC 2005 RTM 14.00.50727.42) &bull; SHA-256: <code>7a1274d9...efbd505</code></div>
`)

	// 2-Phase Overview Header
	sb.WriteString(fmt.Sprintf(`    <div class="phase-banner">
      <div class="phase-pill p1">
        <div class="phase-pill-head">
          <span class="phase-badge done">%s</span>
          <span class="num" style="font-size:13px;color:var(--accent-bright);">%d / %d funcs &bull; %.2f MB</span>
        </div>
        <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
        <div class="phase-pill-meta">%d AI matches + %d <code>auto_solve</code> stubs verified bit-for-bit against MSVC 2005</div>
      </div>
      <div class="phase-pill p2">
        <div class="phase-pill-head">
          <span class="phase-badge active">Phase 2: Portable C++ Lifting &amp; Struct Recovery</span>
          <span class="num" style="font-size:13px;color:var(--blue);">Core ASM: %.2f%% &bull; Portable: %.2f%%</span>
        </div>
        <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
        <div class="phase-pill-meta">%d / %d core <code>__asm</code> lifted &bull; %d named funcs &bull; %d struct fields (%d classes)</div>
      </div>
    </div>

    <nav class="tabs" role="tablist" aria-label="Dashboard Views">
      <button type="button" class="tab-btn active" role="tab" aria-selected="true" data-tab="overview">Overview</button>
      <button type="button" class="tab-btn" role="tab" aria-selected="false" data-tab="phase2">Phase 2: C++ Lift &amp; Structs</button>
      <button type="button" class="tab-btn" role="tab" aria-selected="false" data-tab="phase1">Phase 1: Byte-Match Archive</button>
    </nav>
`,
		phase1StatusBadge,
		inScopeMatchedFuncs, inScopeFuncs, float64(inScopeMatchedBytes)/(1024.0*1024.0),
		bytePct,
		aiMatchedFuncs, autoSolveFuncs,
		coreLiftFuncPct, portableFuncPct,
		coreLiftFuncPct,
		p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, p2.TotalNamedFuncs, p2.TotalFieldAnnotations, p2.ClassesWithFields,
	))

	// ---- TAB 1: OVERVIEW ----
	sb.WriteString(fmt.Sprintf(`    <section id="tab-overview" class="tab-panel" role="tabpanel">
      <div class="cards">
        <div class="card">
          <div class="card-label">Phase 1: Byte-Match Parity</div>
          <div class="card-value" style="color:var(--accent-bright);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d funcs &bull; %d B (%.2f MB)</div>
        </div>
        <div class="card">
          <div class="card-label">Phase 2: Core Scope ASM Lifted</div>
          <div class="card-value" style="color:var(--blue);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d <code>__asm</code> funcs &bull; %d / %d B (%.2f%%)</div>
        </div>
        <div class="card">
          <div class="card-label">Total Portable C++ Coverage</div>
          <div class="card-value" style="color:var(--cyan);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill cyan" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d funcs (%d pure-C++ + %d lifted)</div>
        </div>
        <div class="card">
          <div class="card-label">Named Functions</div>
          <div class="card-value">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill blue" style="width: %.2f%%"></div></div>
          <div class="card-sub">%d / %d (%d RTTI + %d inferred)</div>
        </div>
        <div class="card">
          <div class="card-label">Recovered Struct Fields</div>
          <div class="card-value">%d</div>
          <div class="card-sub">%d unique fields across %d classes &bull; %d symbols</div>
        </div>
      </div>

      <div class="panels-split">
        <div class="panel">
          <h2 style="margin-top:0;font-size:18px;">Core Subsystem Lift Progress</h2>
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Exporters/IO and Physics/Sim subsystems targeted by Phase 2 (<code>--scope core</code>)</div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Subsystem</th>
                  <th scope="col" class="num">Total</th>
                  <th scope="col" class="num">Pure C++</th>
                  <th scope="col" class="num">Lifted / ASM</th>
                  <th scope="col" class="num">Rem. ASM</th>
                  <th scope="col" class="num">Lift %%</th>
                  <th scope="col" class="num">Portable %%</th>
                  <th scope="col" class="num">Named</th>
                  <th scope="col" class="num">Fields</th>
                </tr>
              </thead>
              <tbody>
%s              </tbody>
            </table>
          </div>
        </div>
        <div>
          <div class="panel">
            <h2 style="margin-top:0;font-size:18px;">Phase 2 Lift Leaderboard</h2>
            <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Portable C++ lifts grouped by <code>lifted_by</code></div>
            <div class="table-wrapper">
              <table>
                <thead>
                  <tr>
                    <th scope="col">Model</th>
                    <th scope="col" class="num">Lifted</th>
                    <th scope="col" class="num">Bytes</th>
                    <th scope="col" class="num">Share</th>
                    <th scope="col" class="num">Avg</th>
                    <th scope="col" class="num">Med</th>
                    <th scope="col" class="num">Max</th>
                    <th scope="col" class="num">Fields</th>
                  </tr>
                </thead>
                <tbody>
%s                </tbody>
              </table>
            </div>
          </div>
          <div class="panel">
            <h2 style="margin-top:0;font-size:18px;">Phase 1 Archive Highlight</h2>
            <div style="color:var(--muted);font-size:13px;">
              All <strong>%d in-scope functions</strong> (%.2f MB across %d RTTI classes) are 100%% byte-matched under MSVC 2005 RTM (%d AI solves across %d models + %d <code>auto_solve</code>).
            </div>
            <button type="button" class="link-btn" data-jump-tab="phase1">Open Phase 1: Byte-Match Archive &rarr;</button>
          </div>
        </div>
      </div>
    </section>
`,
		bytePct, bytePct, inScopeMatchedFuncs, inScopeFuncs, inScopeMatchedBytes, float64(inScopeBytes)/(1024.0*1024.0),
		coreLiftFuncPct, coreLiftFuncPct, p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, coreLiftBytePct,
		portableFuncPct, portableFuncPct, p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.LiftedAsmFuncs,
		namedPct, namedPct, p2.TotalNamedFuncs, p2.InScopeUnitsTotal, p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs,
		p2.TotalFieldAnnotations, p2.UniqueFields, p2.ClassesWithFields, p2.SymbolsCataloged,
		renderSubsystemTableRows(p2, true),
		renderPhase2LeaderboardRows(p2),
		inScopeMatchedFuncs, float64(inScopeBytes)/(1024.0*1024.0), inScopeClasses, aiMatchedFuncs, len(leaderboard), autoSolveFuncs,
	))

	// ---- TAB 2: PHASE 2 DETAILS ----
	sb.WriteString(fmt.Sprintf(`    <section id="tab-phase2" class="tab-panel" role="tabpanel" hidden>
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
          <div class="card-label">Portable C++ (All / Core)</div>
          <div class="card-value" style="color:var(--cyan);">%.2f%%</div>
          <div class="progress-bar"><div class="progress-fill cyan" style="width: %.2f%%"></div></div>
          <div class="card-sub">All: %d/%d (%.2f%% B) &bull; Core: %.2f%%</div>
        </div>
        <div class="card">
          <div class="card-label">Function Naming Recovery</div>
          <div class="card-value">%.2f%%</div>
          <div class="card-sub">%d / %d named (%d RTTI + %d inferred)</div>
        </div>
        <div class="card">
          <div class="card-label">Recovered Struct Fields</div>
          <div class="card-value">%d</div>
          <div class="card-sub">%d unique across %d classes &bull; %d headers</div>
        </div>
        <div class="card">
          <div class="card-label">Cataloged &amp; Skipped</div>
          <div class="card-value">%d</div>
          <div class="card-sub"><code>lifted/symbols.json</code> entries &bull; %d skipped</div>
        </div>
      </div>

%s
      <div class="panel">
        <h2 style="margin-top:0;font-size:18px;">Per-Subsystem Lifting &amp; Portable C++ Breakdown</h2>
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Classification of all %d matched functions scanned in <code>src/</code> across Exporters/IO, Physics/Sim, and Non-Core modules</div>
        <div class="table-wrapper">
          <table>
            <thead>
              <tr>
                <th scope="col">Subsystem</th>
                <th scope="col" class="num">Total Funcs</th>
                <th scope="col" class="num">Pure C++</th>
                <th scope="col" class="num">Lifted / ASM</th>
                <th scope="col" class="num">Remaining ASM</th>
                <th scope="col" class="num">ASM Lift %%</th>
                <th scope="col" class="num">Portable C++ %%</th>
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
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Grouped by <code>lifted_by</code> from <code>build/lifted/&lt;shard&gt;/&lt;VA&gt;.json</code></div>
          <div class="table-wrapper">
            <table>
              <thead>
                <tr>
                  <th scope="col">Model</th>
                  <th scope="col" class="num">Lifted Funcs</th>
                  <th scope="col" class="num">Lifted Bytes</th>
                  <th scope="col" class="num">Share</th>
                  <th scope="col" class="num">Avg Size</th>
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
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Classes with <code>@field</code> annotations merged into <code>lifted/include/*.h</code></div>
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
		coreLiftFuncPct, coreLiftFuncPct, p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, coreLiftBytePct,
		allLiftFuncPct, allLiftFuncPct, p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, allLiftBytePct,
		portableFuncPct, portableFuncPct, p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, portableBytePct, corePortableFuncPct,
		namedPct, p2.TotalNamedFuncs, p2.InScopeUnitsTotal, p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs,
		p2.TotalFieldAnnotations, p2.UniqueFields, p2.ClassesWithFields, p2.GeneratedHeaders,
		p2.SymbolsCataloged, p2.ScopeAll.SkippedFuncs,
		renderPhase2ChartPanel(p2),
		p2.ScopeAll.TotalFuncs,
		renderSubsystemTableRows(p2, false),
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
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Latest functions lifted into portable C++ and recorded in <code>build/lifted/</code> &amp; <code>lifted/symbols.json</code></div>
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

	// ---- TAB 3: PHASE 1 ARCHIVE (ALL ORIGINAL PHASE 1 STATS INTACT) ----
	sb.WriteString(fmt.Sprintf(`    <section id="tab-phase1" class="tab-panel" role="tabpanel" hidden>
      <div class="panel" style="border-inline-start:4px solid var(--accent-bright);">
        <div class="phase-pill-head">
          <h2 style="margin:0;font-size:18px;">%s</h2>
          <span class="phase-badge done">100%% Byte-Matched</span>
        </div>
        <div style="color:var(--muted);font-size:13px;margin-top:4px;">Complete archive of Phase 1 MSVC 2005 RTM byte-for-byte parity verification across all %d in-scope functions, velocity curve, size deciles, and AI squad leaderboard.</div>
      </div>
      <div class="cards">
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
          <div class="card-label">Projected Completion (ETA)</div>
          <div class="card-value">%s</div>
          <div class="card-sub">%s</div>
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
		phase1StatusBadge,
		inScopeFuncs,
		funcPct, funcPct, inScopeMatchedFuncs, inScopeFuncs, aiMatchedFuncs, autoSolveFuncs,
		bytePct, bytePct, inScopeMatchedBytes, inScopeBytes, float64(inScopeBytes)/(1024.0*1024.0),
		cardETAVal, cardETASub,
		totalClasses, inScopeClasses, mfcClasses,
		outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
	))

	sb.WriteString(renderVelocityGraphPanel(
		matchEvents,
		inScopeFuncs, inScopeMatchedFuncs,
		inScopeBytes, inScopeMatchedBytes,
		aiMatchedFuncs,
	))

	sb.WriteString(`      <div class="panel">
        <h2 style="margin-top:0;font-size:18px;">Squad Leaderboard (AI Model Matches)</h2>
        <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">Excludes ` + fmt.Sprintf("%d", autoSolveFuncs) + ` deterministic <code>script:auto_solve</code> baseline stubs</div>
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
`)

	if len(leaderboard) == 0 {
		sb.WriteString(`              <tr>
                <th scope="row" style="color:var(--muted);font-style:italic;font-weight:400;">No AI matches yet</th>
                <td class="num">0</td>
                <td class="num">0</td>
                <td class="num">0.00%</td>
                <td class="num">-</td>
                <td class="num">-</td>
                <td class="num">-</td>
                <td></td>
              </tr>
`)
	} else {
		for _, m := range leaderboard {
			sharePct := pct(uint64(m.MatchedFuncs), uint64(aiMatchedFuncs))
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
					tiers[i].ShortName, c, alpha))
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
          <div style="color:var(--muted);font-size:13px;margin-bottom:12px;">In-scope functions ranked by size and split into ten equal-count percentile tiers (P0-10 = smallest 10%)</div>
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

	for _, t := range tiers {
		fPct := pct(uint64(t.MatchedFuncs), uint64(t.TotalFuncs))
		bPct := pct(t.MatchedBytes, t.TotalBytes)
		sb.WriteString(fmt.Sprintf(`                <tr>
                  <th scope="row">%s</th>
                  <td class="num">%d / %d</td>
                  <td class="num">%.2f%%</td>
                  <td class="num">%d / %d</td>
                  <td class="num">%.2f%%</td>
                  <td class="num">%d fn</td>
                </tr>
`, t.ShortName, t.MatchedFuncs, t.TotalFuncs, fPct, t.MatchedBytes, t.TotalBytes, bPct, t.RemainFuncs))
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
  <script>
  (function() {
    const tabBtns = document.querySelectorAll('.tab-btn[data-tab]');
    const panels = {
      overview: document.getElementById('tab-overview'),
      phase2: document.getElementById('tab-phase2'),
      phase1: document.getElementById('tab-phase1')
    };
    function activate(name, pushHash) {
      if (!panels[name]) name = 'overview';
      tabBtns.forEach(btn => {
        const isOn = btn.getAttribute('data-tab') === name;
        btn.classList.toggle('active', isOn);
        btn.setAttribute('aria-selected', isOn ? 'true' : 'false');
      });
      Object.entries(panels).forEach(([k, el]) => {
        if (el) el.hidden = (k !== name);
      });
      if (pushHash && history.replaceState) {
        history.replaceState(null, '', '#' + name);
      }
      window.dispatchEvent(new Event('resize'));
    }
    tabBtns.forEach(btn => {
      btn.addEventListener('click', () => activate(btn.getAttribute('data-tab'), true));
    });
    document.querySelectorAll('[data-jump-tab]').forEach(btn => {
      btn.addEventListener('click', () => {
        activate(btn.getAttribute('data-jump-tab'), true);
        window.scrollTo({ top: 0, behavior: 'smooth' });
      });
    });
    const hash = (location.hash || '').replace('#', '');
    if (panels[hash]) activate(hash, false);
  })();
  </script>
</body>
</html>
`,
		totalFuncs, totalBytes, float64(totalBytes)/(1024.0*1024.0),
		inScopeFuncs, pct(uint64(inScopeFuncs), uint64(totalFuncs)), inScopeBytes, pct(inScopeBytes, totalBytes),
		inScopeMatchedFuncs, funcPct, inScopeMatchedBytes, bytePct,
		outOfScopeFuncs, pct(uint64(outOfScopeFuncs), uint64(totalFuncs)), outOfScopeBytes, pct(outOfScopeBytes, totalBytes),
		outThunkFuncs, pct(uint64(outThunkFuncs), uint64(totalFuncs)), outThunkBytes, pct(outThunkBytes, totalBytes),
		outCRTMFCFuncs, pct(uint64(outCRTMFCFuncs), uint64(totalFuncs)), outCRTMFCBytes, pct(outCRTMFCBytes, totalBytes),
		totalClasses, inScopeClasses, mfcClasses,
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
	p2 Phase2Stats,
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
	sb.WriteString("A byte-matching C++ decompilation and portable C++ lifting project for **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`, MSVC 2005 RTM `14.00.50727.42`, x86).\n\n")
	sb.WriteString("- **Phase 1 (MSVC8 Byte-Match):** **100.00% Complete** (`src/`)\n")
	if p2.ScopeAll.TotalFuncs > 0 {
		coreLiftPct := pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs))
		portablePct := pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs))
		sb.WriteString(fmt.Sprintf("- **Phase 2 (Portable C++ Lift & Struct Recovery):** `%d / %d` core ASM functions lifted (**%.2f%%**), `%d / %d` total portable C++ (**%.2f%%**), `%d` struct fields recovered across `%d` classes (`lifted/`)\n",
			p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, coreLiftPct,
			p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, portablePct,
			p2.TotalFieldAnnotations, p2.ClassesWithFields))
	}
	sb.WriteString("\n")

	sb.WriteString("## Contributing (Phase 2: AI-Assisted C++ Lifting & Struct Recovery)\n\n")
	sb.WriteString("Phase 1 matched 100% of in-scope functions byte-for-byte, but ~96% of `src/` is x86 `__declspec(naked) __asm`. **Phase 2** lifts those functions into clean, portable C++20 in `lifted/` while recovering function names (`lifted/symbols.json`) and struct layouts (`lifted/include/*.h`) — without touching the verified byte-match in `src/`.\n\n")
	sb.WriteString("### What You Need\n\n")
	sb.WriteString("- **Linux or macOS** (no Windows, Wine, or MSVC 2005 needed for Phase 2)\n")
	sb.WriteString("- **Go 1.22+** and **g++ or clang++** (used for instant native `-std=c++20 -fsyntax-only` verification)\n")
	sb.WriteString("- An AI coding CLI: **`claude`** (Claude Code) and/or **`agy`** (Antigravity) for autonomous grinding — or any AI assistant for manual single-function lifts\n")
	sb.WriteString("- *(Optional, recommended for best naming quality)* Your own legal copy of `endorphin.exe` at `.local/bin/endorphin.exe` so `liftwork claim` can decode `.rdata` string literals and float constants into briefings\n\n")
	sb.WriteString("### Quick Start (3 Steps)\n\n")
	sb.WriteString("1. **Clone & build the lift CLI:**\n")
	sb.WriteString("   ```bash\n")
	sb.WriteString("   git clone https://github.com/BiosPlus/endorphin-decomp.git\n")
	sb.WriteString("   cd endorphin-decomp\n")
	sb.WriteString("   mkdir -p .local/bin && go build -o .local/bin/liftwork ./tools/liftwork\n")
	sb.WriteString("   ./.local/bin/liftwork status\n")
	sb.WriteString("   ```\n")
	sb.WriteString("2. **Run the autonomous AI lift orchestrator (recommended for most complete results):**\n")
	sb.WriteString("   ```bash\n")
	sb.WriteString("   # Lift core engine subsystems leaf-first (physics, exporters, I/O, camera)\n")
	sb.WriteString("   # Args: [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]\n")
	sb.WriteString("   LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5\n")
	sb.WriteString("   ```\n")
	sb.WriteString("   Useful variations:\n")
	sb.WriteString("   ```bash\n")
	sb.WriteString("   # Focus on animation exporters & file I/O\n")
	sb.WriteString("   LIFT_SCOPE=BVHIO,AcclaimIO,FBXIO,NMFileIO LIFT_DEPS_FIRST=1 tools/lift.sh 20 5 5\n")
	sb.WriteString("   # Lift the entire binary (all remaining __asm functions)\n")
	sb.WriteString("   LIFT_SCOPE=all LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5\n")
	sb.WriteString("   # Disable auto-push if working on a fork before opening a PR\n")
	sb.WriteString("   LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 25 5 0\n")
	sb.WriteString("   ```\n")
	sb.WriteString("3. **Or lift one function at a time with any AI assistant:**\n")
	sb.WriteString("   ```bash\n")
	sb.WriteString("   ./.local/bin/liftwork next --scope core --deps-first --limit 5\n")
	sb.WriteString("   ./.local/bin/liftwork claim 0xXXXXXXXX --isolated\n")
	sb.WriteString("   # Ask your AI to rewrite lifted/wip/fn_XXXXXXXX.cpp in clean C++20 (no __asm/naked/_emit)\n")
	sb.WriteString("   # with @name, @class, @summary, and @field annotations, then verify & merge:\n")
	sb.WriteString("   ./.local/bin/liftwork check 0xXXXXXXXX --model <model@effort>\n")
	sb.WriteString("   ```\n\n")
	sb.WriteString("> **Why `LIFT_DEPS_FIRST=1` matters:** Lifting leaf functions first populates `lifted/symbols.json` and `lifted/include/<Class>.h` before callers are claimed, giving every subsequent function real callee names and struct field offsets automatically.\n\n")
	sb.WriteString("**Contribution rules:** Never edit `src/`, `build/units/`, `build/classes.json`, or `README.md` by hand, and never commit `.local/`, `docs/`, or binary files (`.exe`, `.dll`, `.obj`). Always let `liftwork check` validate and merge your lifted functions, then open a PR against `main`.\n\n")

	sb.WriteString("## Phase 1: Verified Byte-Match Scoreboard\n\n")
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
	sb.WriteString("- `tools/lift.sh [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]`: Autonomous parallel Phase 2 C++ lifting & struct/naming recovery orchestrator.\n")
	sb.WriteString("- `./.local/bin/liftwork status`: Prints live Phase 2 lift, naming, and struct-field recovery metrics.\n")
	sb.WriteString("- `./.local/bin/liftwork merge-structs`: Rebuilds `lifted/symbols.json` and `lifted/include/*.h` from `build/lifted/`.\n")
	sb.WriteString("- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.\n")
	sb.WriteString("- `go run ./tools/status -readme`: Regenerates `README.md` with the latest verified Phase 1 & Phase 2 metrics.\n")
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
	p2 Phase2Stats,
) string {
	var sb strings.Builder
	funcPct := pct(uint64(inScopeMatchedFuncs), uint64(inScopeFuncs))
	bytePct := pct(inScopeMatchedBytes, inScopeBytes)

	var aiMatchedFuncs int
	for _, m := range leaderboard {
		aiMatchedFuncs += m.MatchedFuncs
	}
	autoSolveFuncs := inScopeMatchedFuncs - aiMatchedFuncs

	sb.WriteString("## Endorphin 2.7.1 Decompilation Scoreboard (Phase 1: MSVC8 Byte-Match)\n\n")
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

	sb.WriteString(renderPhase2CISummary(p2))
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

	tiers, tierOf := buildDecileTiers(units, mfcClasses)

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

		tierIdx := tierOf[i]
		tier := tiers[tierIdx]

		tier.TotalFuncs++
		tier.TotalBytes += uint64(u.Size)

		if decomp.IsCompleted(u.Status) {
			if u.MatchedBy == "" {
				u.MatchedBy = "auto-solved"
				unitsUpdated = true
			}
			if normModel, changed := backfillMatchedByEffort(u.MatchedBy, u.MatchedAt); changed {
				u.MatchedBy = normModel
				unitsUpdated = true
			}
			inScopeMatchedFuncs++
			inScopeMatchedBytes += uint64(u.Size)
			tier.MatchedFuncs++
			tier.MatchedBytes += uint64(u.Size)

			if u.MatchedBy != "script:auto_solve" && u.MatchedBy != "auto-solved" {
				ms, ok := modelStatsMap[u.MatchedBy]
				if !ok {
					ms = &ModelStats{Model: u.MatchedBy}
					modelStatsMap[u.MatchedBy] = ms
				}
				ms.MatchedFuncs++
				ms.MatchedBytes += uint64(u.Size)
				ms.Sizes = append(ms.Sizes, u.Size)
				ms.TierCounts[tierIdx]++

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

	p2 := collectPhase2Stats(units, mfcClasses, defaultPhase2Options())

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
			p2,
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
		if n, b := notQueueable(units, mfcClasses); n > 0 {
			fmt.Printf("  - Not queued   : %5d funcs          | %d bytes skipped/deferred/unparseable (see `work hidden`)\n", n, b)
		}
		fmt.Println("--------------------------------------------------------------------------------")
		fmt.Println("Size Tier (decile)       |   Decompiled / Total Funcs   |     Decompiled / Total Bytes     | Remaining")
		fmt.Println("-----------------------+------------------------------+----------------------------------+----------")
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
		fmt.Println("--------------------------------------------------------------------------------")
		fmt.Println("PHASE 2: PORTABLE C++ LIFTING & STRUCT RECOVERY")
		fmt.Printf("Core Scope ASM Lifted : %5d / %5d (%6.2f%%) | %8d / %8d bytes (%6.2f%%)\n",
			p2.ScopeCore.LiftedAsmFuncs, p2.ScopeCore.AsmFuncs, pct(uint64(p2.ScopeCore.LiftedAsmFuncs), uint64(p2.ScopeCore.AsmFuncs)),
			p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes, pct(p2.ScopeCore.LiftedAsmBytes, p2.ScopeCore.AsmBytes))
		fmt.Printf("Full Binary ASM Lifted: %5d / %5d (%6.2f%%) | %8d / %8d bytes (%6.2f%%)\n",
			p2.ScopeAll.LiftedAsmFuncs, p2.ScopeAll.AsmFuncs, pct(uint64(p2.ScopeAll.LiftedAsmFuncs), uint64(p2.ScopeAll.AsmFuncs)),
			p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes, pct(p2.ScopeAll.LiftedAsmBytes, p2.ScopeAll.AsmBytes))
		fmt.Printf("Portable C++ (All)    : %5d / %5d (%6.2f%%) | %d pure-C++ + %d lifted\n",
			p2.ScopeAll.PortableCppFuncs, p2.ScopeAll.TotalFuncs, pct(uint64(p2.ScopeAll.PortableCppFuncs), uint64(p2.ScopeAll.TotalFuncs)),
			p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.LiftedAsmFuncs)
		fmt.Printf("Named Functions       : %5d / %5d (%6.2f%%) | %d RTTI + %d newly inferred\n",
			p2.TotalNamedFuncs, p2.InScopeUnitsTotal, pct(uint64(p2.TotalNamedFuncs), uint64(p2.InScopeUnitsTotal)),
			p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs)
		fmt.Printf("Recovered Fields      : %5d annotations (%d unique across %d classes, %d symbols)\n",
			p2.TotalFieldAnnotations, p2.UniqueFields, p2.ClassesWithFields, p2.SymbolsCataloged)
		fmt.Println("================================================================================")
	}

	if *htmlOut != "" {
		if err := os.MkdirAll(filepath.Dir(*htmlOut), 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", *htmlOut, err)
			os.Exit(1)
		}
		htmlDoc := renderHTMLDashboard(
			len(classes), inScopeClassCount, mfcClassCount,
			totalFuncs, totalBytes,
			outOfScopeFuncs, outThunkFuncs, outCRTMFCFuncs,
			outOfScopeBytes, outThunkBytes, outCRTMFCBytes,
			inScopeFuncs, inScopeMatchedFuncs,
			inScopeBytes, inScopeMatchedBytes,
			tiers,
			leaderboard,
			matchEvents,
			p2,
		)
		if err := os.WriteFile(*htmlOut, []byte(htmlDoc), 0644); err != nil {
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
			p2,
		)
		if err := os.WriteFile("README.md", []byte(readme), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing README.md: %v\n", err)
			os.Exit(1)
		}
		fmt.Println("Updated README.md")
	}
}
