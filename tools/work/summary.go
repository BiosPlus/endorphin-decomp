package main

import (
	"bufio"
	"encoding/gob"
	"encoding/json"
	"os"
	"path/filepath"
	"runtime"
	"sort"
	"strconv"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

const (
	summaryCachePath    = ".local/cache/units_summary.gob"
	summaryCacheVersion = 1
)

type unitSummary struct {
	VA         string
	Size       uint32
	Symbol     string
	Callees    []string
	NumCallees int
	Status     string
	IsThunk    bool
	ValidCode  bool
}

type unitsSummaryCache struct {
	Version       int
	Units         []unitSummary
	ShardMtimes   map[string]int64
	FuncsDirMtime int64
}

func (s unitSummary) toUnitEntry() UnitEntry {
	return UnitEntry{
		VA:         s.VA,
		Size:       s.Size,
		Symbol:     s.Symbol,
		Callees:    s.Callees,
		NumCallees: s.NumCallees,
		IsThunk:    s.IsThunk,
		Status:     s.Status,
	}
}

func toUnitSummary(u UnitEntry, valid bool) unitSummary {
	return unitSummary{
		VA:         u.VA,
		Size:       u.Size,
		Symbol:     u.Symbol,
		Callees:    u.Callees,
		NumCallees: u.NumCallees,
		Status:     u.Status,
		IsThunk:    u.IsThunk,
		ValidCode:  valid,
	}
}

func shardForVA(va string) string {
	h := strings.TrimPrefix(unitstore.NormVA(va), "0x")
	if len(h) < 4 {
		return h
	}
	return h[:4]
}

func summaryVASortKey(va string) uint64 {
	n, _ := strconv.ParseUint(strings.TrimPrefix(strings.TrimPrefix(va, "0x"), "0X"), 16, 64)
	return n
}

func currentShardMtimes() (map[string]int64, error) {
	entries, err := os.ReadDir(unitstore.Dir)
	if err != nil {
		return nil, err
	}
	mtimes := make(map[string]int64, len(entries))
	for _, sd := range entries {
		if !sd.IsDir() {
			continue
		}
		info, err := sd.Info()
		if err != nil {
			continue
		}
		mtimes[sd.Name()] = info.ModTime().UnixNano()
	}
	return mtimes, nil
}

func currentFuncsDirMtime() int64 {
	info, err := os.Stat(filepath.Join(".local", "cache", "funcs"))
	if err != nil {
		return 0
	}
	return info.ModTime().UnixNano()
}

func shardsMatch(a, b map[string]int64) bool {
	if len(a) != len(b) {
		return false
	}
	for k, v := range a {
		if bv, ok := b[k]; !ok || bv != v {
			return false
		}
	}
	return true
}

func readSummaryCache() (*unitsSummaryCache, error) {
	f, err := os.Open(summaryCachePath)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var cache unitsSummaryCache
	if err := gob.NewDecoder(bufio.NewReader(f)).Decode(&cache); err != nil {
		return nil, err
	}
	if cache.Version != summaryCacheVersion {
		return nil, os.ErrInvalid
	}
	return &cache, nil
}

func writeSummaryCache(cache *unitsSummaryCache) error {
	dir := filepath.Dir(summaryCachePath)
	if err := os.MkdirAll(dir, 0755); err != nil {
		return err
	}
	tmp, err := os.CreateTemp(dir, "units_summary.*.gob.tmp")
	if err != nil {
		return err
	}
	tmpPath := tmp.Name()
	cleanup := true
	defer func() {
		if cleanup {
			_ = os.Remove(tmpPath)
		}
	}()

	bw := bufio.NewWriter(tmp)
	if err := gob.NewEncoder(bw).Encode(cache); err != nil {
		_ = tmp.Close()
		return err
	}
	if err := bw.Flush(); err != nil {
		_ = tmp.Close()
		return err
	}
	if err := tmp.Close(); err != nil {
		return err
	}
	if err := os.Rename(tmpPath, summaryCachePath); err != nil {
		return err
	}
	cleanup = false
	return nil
}

func readShardUnits(shard string) ([]UnitEntry, error) {
	dir := filepath.Join(unitstore.Dir, shard)
	files, err := os.ReadDir(dir)
	if err != nil {
		return nil, err
	}
	out := make([]UnitEntry, 0, len(files))
	for _, f := range files {
		if f.IsDir() || !strings.HasSuffix(f.Name(), ".json") {
			continue
		}
		b, err := os.ReadFile(filepath.Join(dir, f.Name()))
		if err != nil {
			return nil, err
		}
		var u UnitEntry
		if err := json.Unmarshal(b, &u); err != nil {
			return nil, err
		}
		out = append(out, u)
	}
	return out, nil
}

func computeValidCodeParallel(vas []string) []bool {
	res := make([]bool, len(vas))
	if len(vas) == 0 {
		return res
	}
	workers := runtime.NumCPU() * 2
	if workers < 4 {
		workers = 4
	}
	if workers > len(vas) {
		workers = len(vas)
	}
	next := make(chan int, 256)
	var wg sync.WaitGroup
	for w := 0; w < workers; w++ {
		wg.Add(1)
		go func() {
			defer wg.Done()
			for i := range next {
				res[i] = decomp.IsValidCodeUnit(vas[i])
			}
		}()
	}
	for i := range vas {
		next <- i
	}
	close(next)
	wg.Wait()
	return res
}

func buildSummaryOutputs(summaries []unitSummary) ([]UnitEntry, map[string]int, map[string]bool) {
	units := make([]UnitEntry, len(summaries))
	unitIdxByVA := make(map[string]int, len(summaries))
	validCode := make(map[string]bool, len(summaries))
	for i, s := range summaries {
		units[i] = s.toUnitEntry()
		unitIdxByVA["0x"+strings.ToUpper(strings.TrimPrefix(s.VA, "0x"))] = i
		validCode[s.VA] = s.ValidCode
	}
	return units, unitIdxByVA, validCode
}

func loadUnitsSummary() ([]UnitEntry, map[string]int, map[string]bool, error) {
	curShards, err := currentShardMtimes()
	if err != nil {
		return nil, nil, nil, err
	}
	curFuncsMtime := currentFuncsDirMtime()

	cache, cacheErr := readSummaryCache()
	if cacheErr == nil && shardsMatch(curShards, cache.ShardMtimes) && curFuncsMtime == cache.FuncsDirMtime {
		units, unitIdxByVA, validCode := buildSummaryOutputs(cache.Units)
		return units, unitIdxByVA, validCode, nil
	}

	var summaries []unitSummary
	if cacheErr != nil {
		// Cold cache or unreadable/outdated cache: full read via unitstore.ReadAll.
		unitsBytes, err := unitstore.ReadAll()
		if err != nil {
			return nil, nil, nil, err
		}
		var units []UnitEntry
		if err := json.Unmarshal(unitsBytes, &units); err != nil {
			return nil, nil, nil, err
		}
		vas := make([]string, len(units))
		for i, u := range units {
			vas[i] = u.VA
		}
		valids := computeValidCodeParallel(vas)
		summaries = make([]unitSummary, len(units))
		for i, u := range units {
			summaries[i] = toUnitSummary(u, valids[i])
		}
	} else {
		// Warm cache: reload only changed/new shards.
		byShard := make(map[string][]unitSummary, len(curShards))
		oldValid := make(map[string]bool, len(cache.Units))
		funcsUnchanged := curFuncsMtime == cache.FuncsDirMtime
		for _, s := range cache.Units {
			oldValid[s.VA] = s.ValidCode
			sh := shardForVA(s.VA)
			if _, exists := curShards[sh]; exists {
				byShard[sh] = append(byShard[sh], s)
			}
		}

		for sh, mtime := range curShards {
			if oldMtime, ok := cache.ShardMtimes[sh]; ok && oldMtime == mtime {
				continue
			}
			shardUnits, err := readShardUnits(sh)
			if err != nil {
				return nil, nil, nil, err
			}
			shSummaries := make([]unitSummary, len(shardUnits))
			for i, u := range shardUnits {
				valid := false
				if funcsUnchanged {
					if v, ok := oldValid[u.VA]; ok {
						valid = v
					} else {
						valid = decomp.IsValidCodeUnit(u.VA)
					}
				}
				shSummaries[i] = toUnitSummary(u, valid)
			}
			byShard[sh] = shSummaries
		}

		total := 0
		for _, list := range byShard {
			total += len(list)
		}
		summaries = make([]unitSummary, 0, total)
		for _, list := range byShard {
			summaries = append(summaries, list...)
		}
		sort.Slice(summaries, func(i, j int) bool {
			return summaryVASortKey(summaries[i].VA) < summaryVASortKey(summaries[j].VA)
		})

		if !funcsUnchanged {
			vas := make([]string, len(summaries))
			for i, s := range summaries {
				vas[i] = s.VA
			}
			valids := computeValidCodeParallel(vas)
			for i := range summaries {
				summaries[i].ValidCode = valids[i]
			}
		}
	}

	_ = writeSummaryCache(&unitsSummaryCache{
		Version:       summaryCacheVersion,
		Units:         summaries,
		ShardMtimes:   curShards,
		FuncsDirMtime: curFuncsMtime,
	})

	units, unitIdxByVA, validCode := buildSummaryOutputs(summaries)
	return units, unitIdxByVA, validCode, nil
}

func updateSummaryStatus(va, status string) {
	cache, err := readSummaryCache()
	if err != nil {
		return
	}
	normVA := unitstore.NormVA(va)
	targetKey := summaryVASortKey(normVA)
	idx := sort.Search(len(cache.Units), func(i int) bool {
		return summaryVASortKey(cache.Units[i].VA) >= targetKey
	})
	found := -1
	if idx < len(cache.Units) && unitstore.NormVA(cache.Units[idx].VA) == normVA {
		found = idx
	} else {
		for i := range cache.Units {
			if unitstore.NormVA(cache.Units[i].VA) == normVA {
				found = i
				break
			}
		}
	}
	if found == -1 {
		return
	}
	cache.Units[found].Status = status
	sh := shardForVA(normVA)
	if info, err := os.Stat(filepath.Join(unitstore.Dir, sh)); err == nil {
		if cache.ShardMtimes == nil {
			cache.ShardMtimes = make(map[string]int64)
		}
		cache.ShardMtimes[sh] = info.ModTime().UnixNano()
	}
	_ = writeSummaryCache(cache)
}
