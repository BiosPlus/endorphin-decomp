package main

import (
	"fmt"
	"sort"
	"time"
)

// TimelineEvent is a single timestamped progress event (a Phase 1 match or Phase 2 lift).
type TimelineEvent struct {
	UnixSec int64
	Size    uint32
	Fields  int
	Model   string
	Label   string
}

// TimeBucket is a pre-aggregated interval serialized into the HTML dashboard (~100 points instead of 30k raw events).
type TimeBucket struct {
	TStart    int64    `json:"ts"`
	TEnd      int64    `json:"te"`
	DFuncs    int      `json:"df"`
	DBytes    uint64   `json:"db"`
	DFields   int      `json:"dfl,omitempty"`
	CFuncs    int      `json:"cf"`
	CBytes    uint64   `json:"cb"`
	CFields   int      `json:"cfl,omitempty"`
	GapBefore bool     `json:"gap,omitempty"`
	TopModel  string   `json:"m,omitempty"`
	Samples   []string `json:"s,omitempty"`
}

// Projection is a trailing wall-clock run-rate completion estimate (byte-weighted).
type Projection struct {
	Valid      bool
	Done       bool
	RateBps    float64
	WindowDays float64
	ETA        time.Time
	Now        time.Time
}

// VelocitySummary holds pre-computed KPI stats for a timeline.
type VelocitySummary struct {
	EventCount          int
	TotalBytes          uint64
	TotalFields         int
	ActiveHours         float64
	ActiveFuncsPerHr    float64
	ActiveBytesPerHr    float64
	Peak10mFuncs        int
	Peak10mBytes        uint64
	RecentSessionFuncs  int
	RecentSessionBytes  uint64
	RecentSessionRateHr float64
	Projection          Projection
}

// ChartSeries holds compact pre-bucketed series for all three view modes plus velocity KPIs.
type ChartSeries struct {
	Active   []TimeBucket
	Latest   []TimeBucket
	Wall     []TimeBucket
	Velocity VelocitySummary
}

func computeProjection(events []TimelineEvent, remainBytes uint64) Projection {
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
		span = 86400
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
	if secs > 3.0e9 {
		return p
	}
	p.ETA = now.Add(time.Duration(secs) * time.Second)
	p.Valid = true
	return p
}

// formatETA renders the projected completion date and a short explanation of how it was derived.
func formatETA(p Projection, remainBytes uint64, activeBytesPerHr float64) (val, sub string) {
	if p.Done {
		return "Complete", "100% of target bytes completed"
	}
	if !p.Valid {
		return "n/a", "not enough recent activity to project"
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

// buildChartSeries sorts events chronologically, computes velocity KPIs, and produces compact
// pre-aggregated TimeBucket slices for Active Sessions, Latest Session, and Wall Clock views.
func buildChartSeries(events []TimelineEvent, remainBytes uint64) ChartSeries {
	if len(events) == 0 {
		return ChartSeries{
			Velocity: VelocitySummary{
				Projection: computeProjection(nil, remainBytes),
			},
		}
	}

	sorted := append([]TimelineEvent(nil), events...)
	sort.Slice(sorted, func(i, j int) bool {
		if sorted[i].UnixSec != sorted[j].UnixSec {
			return sorted[i].UnixSec < sorted[j].UnixSec
		}
		return sorted[i].Label < sorted[j].Label
	})

	var totalBytes uint64
	totalFields := 0
	activeBucketCounts := make(map[int64]int)
	activeBucketBytes := make(map[int64]uint64)
	for _, ev := range sorted {
		totalBytes += uint64(ev.Size)
		totalFields += ev.Fields
		if ev.UnixSec > 0 {
			b := ev.UnixSec / 600
			activeBucketCounts[b]++
			activeBucketBytes[b] += uint64(ev.Size)
		}
	}

	activeHours := float64(len(activeBucketCounts)) * (10.0 / 60.0)
	var activeFuncsPerHr, activeBytesPerHr float64
	if activeHours > 0 {
		activeFuncsPerHr = float64(len(sorted)) / activeHours
		activeBytesPerHr = float64(totalBytes) / activeHours
	}

	peak10mFuncs := 0
	var peak10mBytes uint64
	for b, c := range activeBucketCounts {
		if c > peak10mFuncs {
			peak10mFuncs = c
			peak10mBytes = activeBucketBytes[b]
		}
	}

	// Latest contiguous session (gaps <= 30m)
	lastIdx := len(sorted) - 1
	startIdx := lastIdx
	for startIdx > 0 && sorted[startIdx].UnixSec-sorted[startIdx-1].UnixSec <= 1800 {
		startIdx--
	}
	recentFuncs := lastIdx - startIdx + 1
	var recentBytes uint64
	for i := startIdx; i <= lastIdx; i++ {
		recentBytes += uint64(sorted[i].Size)
	}
	recentSpanSec := sorted[lastIdx].UnixSec - sorted[startIdx].UnixSec
	if recentSpanSec < 60 {
		recentSpanSec = 60
	}
	recentRateHr := (float64(recentFuncs) * 3600.0) / float64(recentSpanSec)

	v := VelocitySummary{
		EventCount:          len(sorted),
		TotalBytes:          totalBytes,
		TotalFields:         totalFields,
		ActiveHours:         activeHours,
		ActiveFuncsPerHr:    activeFuncsPerHr,
		ActiveBytesPerHr:    activeBytesPerHr,
		Peak10mFuncs:        peak10mFuncs,
		Peak10mBytes:        peak10mBytes,
		RecentSessionFuncs:  recentFuncs,
		RecentSessionBytes:  recentBytes,
		RecentSessionRateHr: recentRateHr,
		Projection:          computeProjection(sorted, remainBytes),
	}

	return ChartSeries{
		Active:   buildActiveBuckets(sorted, 120),
		Latest:   buildLinearBuckets(sorted, startIdx, 48, 30),
		Wall:     buildLinearBuckets(sorted, 0, 72, 1800),
		Velocity: v,
	}
}

func topModelFromCounts(m map[string]int) string {
	best, bestN := "", 0
	for k, v := range m {
		if v > bestN || (v == bestN && k < best) {
			best, bestN = k, v
		}
	}
	return best
}

// buildActiveBuckets groups events into active-only buckets (skipping idle gaps > 15m)
// and coalesces adjacent non-gap buckets so at most maxBuckets points are emitted.
func buildActiveBuckets(sorted []TimelineEvent, maxBuckets int) []TimeBucket {
	const baseStep = int64(300) // 5-minute base resolution
	type rawB struct {
		tb     TimeBucket
		models map[string]int
	}
	var raw []*rawB
	idxByKey := make(map[int64]int)
	var cFuncs, cFields int
	var cBytes uint64

	for _, ev := range sorted {
		cFuncs++
		cBytes += uint64(ev.Size)
		cFields += ev.Fields
		key := (ev.UnixSec / baseStep) * baseStep
		idx, ok := idxByKey[key]
		if !ok {
			idx = len(raw)
			idxByKey[key] = idx
			raw = append(raw, &rawB{
				tb:     TimeBucket{TStart: key, TEnd: key + baseStep},
				models: make(map[string]int),
			})
		}
		r := raw[idx]
		r.tb.DFuncs++
		r.tb.DBytes += uint64(ev.Size)
		r.tb.DFields += ev.Fields
		r.tb.CFuncs = cFuncs
		r.tb.CBytes = cBytes
		r.tb.CFields = cFields
		if ev.Model != "" {
			r.models[ev.Model]++
		}
		if len(r.tb.Samples) < 2 && ev.Label != "" {
			r.tb.Samples = append(r.tb.Samples, ev.Label)
		}
	}

	// Mark idle gaps (> 15m between active buckets)
	for i := 1; i < len(raw); i++ {
		if raw[i].tb.TStart-raw[i-1].tb.TEnd > 900 {
			raw[i].tb.GapBefore = true
		}
	}

	// Coalesce if there are more than maxBuckets active buckets, preserving gap boundaries.
	if len(raw) > maxBuckets && maxBuckets > 0 {
		groupSize := (len(raw) + maxBuckets - 1) / maxBuckets
		var merged []*rawB
		for i := 0; i < len(raw); {
			cur := raw[i]
			acc := &rawB{
				tb:     cur.tb,
				models: make(map[string]int, len(cur.models)),
			}
			for k, v := range cur.models {
				acc.models[k] += v
			}
			i++
			for count := 1; count < groupSize && i < len(raw) && !raw[i].tb.GapBefore; count, i = count+1, i+1 {
				nxt := raw[i]
				acc.tb.TEnd = nxt.tb.TEnd
				acc.tb.DFuncs += nxt.tb.DFuncs
				acc.tb.DBytes += nxt.tb.DBytes
				acc.tb.DFields += nxt.tb.DFields
				acc.tb.CFuncs = nxt.tb.CFuncs
				acc.tb.CBytes = nxt.tb.CBytes
				acc.tb.CFields = nxt.tb.CFields
				for k, v := range nxt.models {
					acc.models[k] += v
				}
				for _, s := range nxt.tb.Samples {
					if len(acc.tb.Samples) < 2 {
						acc.tb.Samples = append(acc.tb.Samples, s)
					}
				}
			}
			merged = append(merged, acc)
		}
		raw = merged
	}

	out := make([]TimeBucket, len(raw))
	for i, r := range raw {
		r.tb.TopModel = topModelFromCounts(r.models)
		out[i] = r.tb
	}
	return out
}

// buildLinearBuckets creates evenly spaced wall-clock buckets over sorted[startIdx:].
func buildLinearBuckets(sorted []TimelineEvent, startIdx, maxBuckets int, minBucketSec int64) []TimeBucket {
	slice := sorted[startIdx:]
	if len(slice) == 0 {
		return nil
	}

	var baseFuncs, baseFields int
	var baseBytes uint64
	for i := 0; i < startIdx; i++ {
		baseFuncs++
		baseBytes += uint64(sorted[i].Size)
		baseFields += sorted[i].Fields
	}

	tMin := slice[0].UnixSec
	tMax := slice[len(slice)-1].UnixSec
	if tMax < tMin+60 {
		tMax = tMin + 60
	}
	span := tMax - tMin
	numBuckets := int((span + minBucketSec - 1) / minBucketSec)
	if numBuckets < 12 {
		numBuckets = 12
	}
	if numBuckets > maxBuckets {
		numBuckets = maxBuckets
	}
	step := (span + int64(numBuckets) - 1) / int64(numBuckets)
	if step < 1 {
		step = 1
	}

	out := make([]TimeBucket, 0, numBuckets)
	eIdx := 0
	cFuncs, cBytes, cFields := baseFuncs, baseBytes, baseFields
	for i := 0; i < numBuckets; i++ {
		bStart := tMin + int64(i)*step
		bEnd := tMin + int64(i+1)*step
		if i == numBuckets-1 {
			bEnd = tMax + 1
		}
		tb := TimeBucket{TStart: bStart, TEnd: bEnd, CFuncs: cFuncs, CBytes: cBytes, CFields: cFields}
		models := make(map[string]int)
		for eIdx < len(slice) && slice[eIdx].UnixSec < bEnd {
			ev := slice[eIdx]
			eIdx++
			cFuncs++
			cBytes += uint64(ev.Size)
			cFields += ev.Fields
			tb.DFuncs++
			tb.DBytes += uint64(ev.Size)
			tb.DFields += ev.Fields
			if ev.Model != "" {
				models[ev.Model]++
			}
			if len(tb.Samples) < 2 && ev.Label != "" {
				tb.Samples = append(tb.Samples, ev.Label)
			}
		}
		tb.CFuncs = cFuncs
		tb.CBytes = cBytes
		tb.CFields = cFields
		tb.TopModel = topModelFromCounts(models)
		out = append(out, tb)
	}
	return out
}
