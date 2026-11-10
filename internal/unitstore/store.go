// Package unitstore keeps the per-function unit ledger as one small JSON file per function
// (build/units/<first 4 hex digits of VA>/<8 hex digits of VA>.json) instead of one 20MB+ array.
//
// Why: a match only changes one function, so a match commit now rewrites one ~0.5KB file instead of a
// 20MB blob, git history stops growing by megabytes per match, and `git log -- build/units/0040/00401000.json`
// is a per-function history.
//
// The API deliberately speaks the OLD format: ReadAll returns the same JSON array the old units.json held and
// WriteAll accepts one, so every tool keeps its own UnitEntry type and only swaps its read/write calls.
package unitstore

import (
	"bytes"
	"crypto/sha256"
	"encoding/json"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"sort"
	"strconv"
	"strings"
	"sync"
)

const (
	// Dir is the ledger root, relative to the repository root (all tools run from there).
	Dir = "build/units"
	// Legacy is the pre-split single-file ledger.
	Legacy = "build/units.json"
)

// Stable key order inside each file, so diffs are minimal and every tool writes identical bytes.
var keyOrder = []string{
	"va", "size", "sha256", "symbol", "callees", "num_callees", "is_leaf", "is_thunk",
	"relocations", "status", "skip_reason", "matched_by", "matched_at",
}

var (
	snapMu sync.Mutex
	// snap holds, per VA, a digest of the compact JSON this process last read or wrote. WriteAll only touches
	// units that differ from it, so a tool never reverts another process's change to a unit it did not modify.
	snap = map[string][32]byte{}
	// snapped is true once ReadAll has populated snap (i.e. snap is a full picture of the store).
	snapped bool
)

// NormVA returns the canonical "0x%08X" spelling of a VA.
func NormVA(va string) string {
	h := strings.ToUpper(strings.TrimPrefix(strings.TrimPrefix(strings.TrimSpace(va), "0x"), "0X"))
	for len(h) < 8 {
		h = "0" + h
	}
	return "0x" + h
}

// Path returns the file holding the unit with this VA.
func Path(va string) string {
	h := strings.TrimPrefix(NormVA(va), "0x")
	return filepath.Join(Dir, h[:4], h+".json")
}

// Exists reports whether the split store is present on disk.
func Exists() bool {
	st, err := os.Stat(Dir)
	return err == nil && st.IsDir()
}

func digest(b []byte) [32]byte {
	var buf bytes.Buffer
	if err := json.Compact(&buf, b); err != nil {
		return sha256.Sum256(b)
	}
	return sha256.Sum256(buf.Bytes())
}

// canonical renders one unit object with the stable key order and 2-space indentation (plus trailing newline).
func canonical(obj map[string]json.RawMessage) ([]byte, error) {
	var compact bytes.Buffer
	compact.WriteByte('{')
	first := true
	emit := func(k string, v json.RawMessage) {
		if !first {
			compact.WriteByte(',')
		}
		first = false
		kb, _ := json.Marshal(k)
		compact.Write(kb)
		compact.WriteByte(':')
		compact.Write(v)
	}
	used := map[string]bool{}
	for _, k := range keyOrder {
		if v, ok := obj[k]; ok {
			emit(k, v)
			used[k] = true
		}
	}
	var extra []string
	for k := range obj {
		if !used[k] {
			extra = append(extra, k)
		}
	}
	sort.Strings(extra) // unknown fields are preserved, not dropped
	for _, k := range extra {
		emit(k, obj[k])
	}
	compact.WriteByte('}')

	var out bytes.Buffer
	if err := json.Indent(&out, compact.Bytes(), "", "  "); err != nil {
		return nil, err
	}
	out.WriteByte('\n')
	return out.Bytes(), nil
}

func vaKey(obj map[string]json.RawMessage) (string, error) {
	var va string
	raw, ok := obj["va"]
	if !ok || json.Unmarshal(raw, &va) != nil || va == "" {
		return "", fmt.Errorf("unit without a usable \"va\" field")
	}
	return NormVA(va), nil
}

func vaSortKey(va string) uint64 {
	n, _ := strconv.ParseUint(strings.TrimPrefix(va, "0x"), 16, 64)
	return n
}

// ReadAll returns every unit as one JSON array (compact), sorted by VA: the shape the old units.json had.
func ReadAll() ([]byte, error) {
	shards, err := os.ReadDir(Dir)
	if err != nil {
		return nil, fmt.Errorf("reading %s: %w (run `go run ./tools/units migrate` if you still have %s)", Dir, err, Legacy)
	}
	var paths []string
	for _, sd := range shards {
		if !sd.IsDir() {
			continue
		}
		files, err := os.ReadDir(filepath.Join(Dir, sd.Name()))
		if err != nil {
			return nil, err
		}
		for _, f := range files {
			if strings.HasSuffix(f.Name(), ".json") {
				paths = append(paths, filepath.Join(Dir, sd.Name(), f.Name()))
			}
		}
	}

	type item struct {
		va   string
		data []byte
		sum  [32]byte
		err  error
	}
	items := make([]item, len(paths))
	var wg sync.WaitGroup
	workers := runtime.NumCPU() * 2
	if workers < 4 {
		workers = 4
	}
	next := make(chan int, 256)
	for w := 0; w < workers; w++ {
		wg.Add(1)
		go func() {
			defer wg.Done()
			for i := range next {
				b, err := os.ReadFile(paths[i])
				if err != nil {
					items[i].err = err
					continue
				}
				var buf bytes.Buffer
				if err := json.Compact(&buf, b); err != nil {
					items[i].err = fmt.Errorf("%s: %w", paths[i], err)
					continue
				}
				c := buf.Bytes()
				var head struct {
					VA string `json:"va"`
				}
				if err := json.Unmarshal(c, &head); err != nil || head.VA == "" {
					items[i].err = fmt.Errorf("%s: missing va", paths[i])
					continue
				}
				items[i] = item{va: NormVA(head.VA), data: c, sum: sha256.Sum256(c)}
			}
		}()
	}
	for i := range paths {
		next <- i
	}
	close(next)
	wg.Wait()

	for _, it := range items {
		if it.err != nil {
			return nil, it.err
		}
	}
	sort.Slice(items, func(a, b int) bool { return vaSortKey(items[a].va) < vaSortKey(items[b].va) })

	var out bytes.Buffer
	out.WriteByte('[')
	newSnap := make(map[string][32]byte, len(items))
	for i, it := range items {
		if i > 0 {
			out.WriteByte(',')
		}
		out.Write(it.data)
		newSnap[it.va] = it.sum
	}
	out.WriteByte(']')

	snapMu.Lock()
	snap, snapped = newSnap, true
	snapMu.Unlock()
	return out.Bytes(), nil
}

// WriteAll stores a full JSON array of units. Only units that differ from what this process last read (or, if it
// never read, from what is on disk) are written; units missing from the array are deleted.
func WriteAll(array []byte) error {
	var raws []json.RawMessage
	if err := json.Unmarshal(array, &raws); err != nil {
		return fmt.Errorf("parsing unit array: %w", err)
	}

	type unit struct {
		va    string
		file  []byte
		sum   [32]byte
		isNew bool
	}
	units := make([]unit, 0, len(raws))
	seen := make(map[string]bool, len(raws))
	for _, r := range raws {
		var obj map[string]json.RawMessage
		if err := json.Unmarshal(r, &obj); err != nil {
			return err
		}
		va, err := vaKey(obj)
		if err != nil {
			return err
		}
		if seen[va] {
			return fmt.Errorf("duplicate unit %s", va)
		}
		seen[va] = true
		file, err := canonical(obj)
		if err != nil {
			return err
		}
		units = append(units, unit{va: va, file: file, sum: digest(file)})
	}

	snapMu.Lock()
	known, haveSnap := snap, snapped
	snapMu.Unlock()

	for _, u := range units {
		p := Path(u.va)
		if haveSnap {
			if s, ok := known[u.va]; ok && s == u.sum {
				continue
			}
		} else if old, err := os.ReadFile(p); err == nil && digest(old) == u.sum {
			continue
		}
		if err := os.MkdirAll(filepath.Dir(p), 0755); err != nil {
			return err
		}
		if err := writeAtomic(p, u.file); err != nil {
			return err
		}
	}

	// Delete units that no longer exist: everything we loaded, or everything on disk if we never loaded.
	var gone []string
	if haveSnap {
		for va := range known {
			if !seen[va] {
				gone = append(gone, va)
			}
		}
	} else if Exists() {
		_ = filepath.WalkDir(Dir, func(p string, d os.DirEntry, err error) error {
			if err != nil || d.IsDir() || !strings.HasSuffix(p, ".json") {
				return nil
			}
			va := NormVA(strings.TrimSuffix(filepath.Base(p), ".json"))
			if !seen[va] {
				gone = append(gone, va)
			}
			return nil
		})
	}
	for _, va := range gone {
		_ = os.Remove(Path(va))
		_ = os.Remove(filepath.Dir(Path(va))) // only succeeds if the shard is now empty
	}

	newSnap := make(map[string][32]byte, len(units))
	for _, u := range units {
		newSnap[u.va] = u.sum
	}
	snapMu.Lock()
	snap, snapped = newSnap, true // the array we just synced is now a full picture of the store
	snapMu.Unlock()
	return nil
}

// writeAtomic replaces a file via rename so a reader never sees a half-written unit.
func writeAtomic(path string, data []byte) error {
	tmp := path + ".tmp"
	if err := os.WriteFile(tmp, data, 0644); err != nil {
		return err
	}
	return os.Rename(tmp, path)
}

// HeadHasStore reports whether HEAD already contains the split store (false until the migration is committed).
func HeadHasStore() bool {
	out, err := exec.Command("git", "ls-tree", "-d", "--name-only", "HEAD", Dir).Output()
	return err == nil && strings.TrimSpace(string(out)) == Dir
}

// ReadAllFromGit returns the unit array as committed at rev. ok is false when rev has no split store.
func ReadAllFromGit(rev string) (array []byte, ok bool, err error) {
	ls, lerr := exec.Command("git", "ls-tree", "-r", rev, "--", Dir).Output()
	if lerr != nil || len(bytes.TrimSpace(ls)) == 0 {
		return nil, false, nil
	}
	var spec bytes.Buffer
	for _, line := range strings.Split(strings.TrimSpace(string(ls)), "\n") {
		// "<mode> blob <sha>\t<path>"
		f := strings.Fields(line)
		if len(f) >= 3 && f[1] == "blob" && strings.HasSuffix(line, ".json") {
			spec.WriteString(f[2] + "\n")
		}
	}
	cmd := exec.Command("git", "cat-file", "--batch")
	cmd.Stdin = &spec
	raw, cerr := cmd.Output()
	if cerr != nil {
		return nil, false, cerr
	}

	type item struct {
		va   string
		data []byte
	}
	var items []item
	for len(raw) > 0 {
		nl := bytes.IndexByte(raw, '\n')
		if nl < 0 {
			break
		}
		hdr := strings.Fields(string(raw[:nl])) // "<sha> blob <size>"
		if len(hdr) != 3 {
			return nil, false, fmt.Errorf("unexpected cat-file header %q", raw[:nl])
		}
		size, _ := strconv.Atoi(hdr[2])
		body := raw[nl+1 : nl+1+size]
		raw = raw[nl+1+size+1:]
		var buf bytes.Buffer
		if json.Compact(&buf, body) != nil {
			continue
		}
		var head struct {
			VA string `json:"va"`
		}
		if json.Unmarshal(buf.Bytes(), &head) != nil || head.VA == "" {
			continue
		}
		items = append(items, item{NormVA(head.VA), buf.Bytes()})
	}
	sort.Slice(items, func(a, b int) bool { return vaSortKey(items[a].va) < vaSortKey(items[b].va) })
	var out bytes.Buffer
	out.WriteByte('[')
	for i, it := range items {
		if i > 0 {
			out.WriteByte(',')
		}
		out.Write(it.data)
	}
	out.WriteByte(']')
	return out.Bytes(), true, nil
}

// Migrate splits the legacy build/units.json into the per-function store and returns the unit count.
func Migrate() (int, error) {
	b, err := os.ReadFile(Legacy)
	if err != nil {
		return 0, err
	}
	var raws []json.RawMessage
	if err := json.Unmarshal(b, &raws); err != nil {
		return 0, err
	}
	snapMu.Lock()
	snap, snapped = map[string][32]byte{}, false
	snapMu.Unlock()
	if err := WriteAll(b); err != nil {
		return 0, err
	}
	return len(raws), nil
}
