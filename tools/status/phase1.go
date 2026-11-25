package main

import (
	"encoding/json"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"sort"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
)

const numTiers = 10

// DashboardReport is the single immutable snapshot passed to all renderers (CLI, CI, HTML, README).
type DashboardReport struct {
	Phase1 Phase1Stats
	Phase2 Phase2Stats
}

// Phase1Stats holds all Phase 1 (MSVC 2005 byte-for-byte parity) metrics.
type Phase1Stats struct {
	TotalClasses        int
	InScopeClasses      int
	MFCClasses          int
	TotalFuncs          int
	TotalBytes          uint64
	OutOfScopeFuncs     int
	OutThunkFuncs       int
	OutCRTMFCFuncs      int
	OutOfScopeBytes     uint64
	OutThunkBytes       uint64
	OutCRTMFCBytes      uint64
	InScopeFuncs        int
	InScopeMatchedFuncs int
	InScopeRemainFuncs  int
	InScopeBytes        uint64
	InScopeMatchedBytes uint64
	InScopeRemainBytes  uint64
	AIMatchedFuncs      int
	AIMatchedBytes      uint64
	AutoSolveFuncs      int
	AutoSolveBytes      uint64
	NotQueueableFuncs   int
	NotQueueableBytes   uint64
	Tiers               []*TierStats
	Leaderboard         []ModelStats
	Timeline            ChartSeries
}

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
		t, err := time.Parse(time.RFC3339, strings.TrimSpace(parts[0]))
		if err != nil {
			continue
		}
		utcISO := t.UTC().Format(time.RFC3339)
		latestCommitISO = utcISO
		subj := strings.TrimSpace(parts[1])
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

// notQueueable counts in-scope, unfinished units that `work next` will never hand out.
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

// backfillMatchedByEffort normalizes legacy model names recorded before @<effort> suffixes were added.
func backfillMatchedByEffort(matchedBy, matchedAt string) string {
	m := strings.TrimSpace(matchedBy)
	if m == "" || m == "script:auto_solve" || m == "auto-solved" || m == "unknown" || strings.Contains(m, "@") {
		return m
	}
	if m == "claude-haiku" {
		m = "claude-haiku-5.5"
	}
	ts := strings.TrimSpace(matchedAt)
	preMediumSwitch := ts == "" || ts < "2026-11-12T12:41:53Z"
	switch {
	case strings.HasPrefix(m, "gemini-"):
		if preMediumSwitch {
			return m + "@high"
		}
		return m + "@medium"
	case m == "claude-sonnet-5.5":
		if strings.HasPrefix(ts, "2026-11-12") && preMediumSwitch {
			return m + "@high"
		}
		return m + "@medium"
	case strings.HasPrefix(m, "claude-"):
		return m + "@medium"
	default:
		return m
	}
}

func pct(part, total uint64) float64 {
	if total == 0 {
		return 0.0
	}
	return (float64(part) * 100.0) / float64(total)
}

// collectPhase1Stats computes all Phase 1 metrics in a read-only pass (never mutating units on disk).
func collectPhase1Stats(units []decomp.UnitEntry, classes []decomp.ClassEntry, useGitLog bool) (Phase1Stats, map[string]bool) {
	mfcClasses := make(map[string]bool)
	s := Phase1Stats{TotalClasses: len(classes)}
	for _, c := range classes {
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
			s.MFCClasses++
		} else {
			s.InScopeClasses++
		}
	}

	tiers, tierOf := buildDecileTiers(units, mfcClasses)
	s.Tiers = tiers

	// Only consult git log if any completed AI unit lacks a full RFC3339 timestamp.
	var gitMatchTS map[string]string
	var latestGitISO string
	if useGitLog {
		needGit := false
		for _, u := range units {
			if !decomp.IsCompleted(u.Status) {
				continue
			}
			if oos, _ := isOutOfScope(u, mfcClasses); oos {
				continue
			}
			m := strings.TrimSpace(u.MatchedBy)
			if m != "" && m != "script:auto_solve" && m != "auto-solved" && len(strings.TrimSpace(u.MatchedAt)) <= 10 {
				needGit = true
				break
			}
		}
		if needGit {
			gitMatchTS, latestGitISO = extractGitMatchTimestamps()
		}
	}

	modelStatsMap := make(map[string]*ModelStats)
	var events []TimelineEvent

	for i, u := range units {
		s.TotalFuncs++
		s.TotalBytes += uint64(u.Size)

		if oos, reason := isOutOfScope(u, mfcClasses); oos {
			s.OutOfScopeFuncs++
			s.OutOfScopeBytes += uint64(u.Size)
			if reason == "thunk" {
				s.OutThunkFuncs++
				s.OutThunkBytes += uint64(u.Size)
			} else {
				s.OutCRTMFCFuncs++
				s.OutCRTMFCBytes += uint64(u.Size)
			}
			continue
		}

		s.InScopeFuncs++
		s.InScopeBytes += uint64(u.Size)

		tierIdx := tierOf[i]
		tier := tiers[tierIdx]
		tier.TotalFuncs++
		tier.TotalBytes += uint64(u.Size)

		if decomp.IsCompleted(u.Status) {
			matchedBy := backfillMatchedByEffort(u.MatchedBy, u.MatchedAt)
			if matchedBy == "" {
				matchedBy = "auto-solved"
			}
			s.InScopeMatchedFuncs++
			s.InScopeMatchedBytes += uint64(u.Size)
			tier.MatchedFuncs++
			tier.MatchedBytes += uint64(u.Size)

			if matchedBy == "script:auto_solve" || matchedBy == "auto-solved" {
				s.AutoSolveFuncs++
				s.AutoSolveBytes += uint64(u.Size)
			} else {
				s.AIMatchedFuncs++
				s.AIMatchedBytes += uint64(u.Size)

				ms, ok := modelStatsMap[matchedBy]
				if !ok {
					ms = &ModelStats{Model: matchedBy}
					modelStatsMap[matchedBy] = ms
				}
				ms.MatchedFuncs++
				ms.MatchedBytes += uint64(u.Size)
				ms.Sizes = append(ms.Sizes, u.Size)
				ms.TierCounts[tierIdx]++

				matchedAt := strings.TrimSpace(u.MatchedAt)
				if len(matchedAt) <= 10 && gitMatchTS != nil {
					normVA := "0x" + strings.ToUpper(strings.TrimPrefix(u.VA, "0x"))
					if gitISO, ok := gitMatchTS[normVA]; ok && gitISO != "" {
						matchedAt = gitISO
					} else if matchedAt == "" && latestGitISO != "" {
						matchedAt = latestGitISO
					}
				}
				if ts, ok := parseFlexibleTimestamp(matchedAt); ok {
					events = append(events, TimelineEvent{
						UnixSec: ts.Unix(),
						Size:    u.Size,
						Model:   matchedBy,
						Label:   u.VA + " (" + u.Symbol + ")",
					})
				}
			}
		} else {
			s.InScopeRemainFuncs++
			s.InScopeRemainBytes += uint64(u.Size)
			tier.RemainFuncs++
			tier.RemainBytes += uint64(u.Size)
		}
	}

	s.NotQueueableFuncs, s.NotQueueableBytes = notQueueable(units, mfcClasses)

	for _, ms := range modelStatsMap {
		s.Leaderboard = append(s.Leaderboard, *ms)
	}
	sort.Slice(s.Leaderboard, func(i, j int) bool {
		if s.Leaderboard[i].MatchedFuncs != s.Leaderboard[j].MatchedFuncs {
			return s.Leaderboard[i].MatchedFuncs > s.Leaderboard[j].MatchedFuncs
		}
		if s.Leaderboard[i].MatchedBytes != s.Leaderboard[j].MatchedBytes {
			return s.Leaderboard[i].MatchedBytes > s.Leaderboard[j].MatchedBytes
		}
		return s.Leaderboard[i].Model < s.Leaderboard[j].Model
	})

	s.Timeline = buildChartSeries(events, s.InScopeRemainBytes)
	return s, mfcClasses
}
