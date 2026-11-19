package main

import (
	"crypto/sha256"
	"encoding/binary"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

// Same constants extract_units uses for its relocation heuristic.
const (
	relocLow  = 0x00401000
	relocHigh = 0x00BDC000
)

type newUnit struct {
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
}

type unitChange struct {
	orig       *decomp.UnitEntry // nil for a new unit
	origStatus string
	unit       newUnit
	piece      piece
}

type plan struct {
	changes         []unitChange
	units           int // open units re-cut
	outcomes        map[string]int
	unchanged       int
	undecFrac       []float64 // per examined unit: share of bytes that are undecodable
	obfuscatedBytes uint32
}

// A unit at least this big with at least this share of undecodable bytes is treated as obfuscated code.
var (
	obfuscatedMinSize uint32 = 512
	obfuscatedFrac           = 0.20
)

func (s *splitter) unitFor(p piece, symbol, status string) newUnit {
	b := s.img.bytesAt(p.start, p.end-p.start)
	sum := sha256.Sum256(b)
	nu := newUnit{
		VA: hex8(p.start), Size: p.end - p.start, SHA256: hex.EncodeToString(sum[:]), Symbol: symbol,
		Callees: []string{}, Relocations: []string{}, Status: status,
	}
	if p.kind != "data" {
		calleeSet := map[uint32]bool{}
		for i := range p.insts {
			in := &p.insts[i]
			f := s.img.flowOf(in)
			if f.isCall && s.img.inText(f.target) {
				calleeSet[f.target] = true
			}
			nu.Relocations = append(nu.Relocations, relocsOf(in)...)
		}
		var cs []uint32
		for c := range calleeSet {
			cs = append(cs, c)
		}
		sort.Slice(cs, func(a, b int) bool { return cs[a] < cs[b] })
		for _, c := range cs {
			nu.Callees = append(nu.Callees, hex8(c))
		}
		first := s.img.flowOf(&p.insts[0])
		nu.IsThunk = first.iatTarget != 0 && first.isJmp || (len(p.insts) == 1 && first.isJmp)
	} else {
		// A jump table's entries are absolute addresses: list them so byte comparisons mask them.
		for va := p.start; va+4 <= p.end; va += 4 {
			if v, ok := s.img.u32(va); ok && s.img.inText(v) {
				nu.Relocations = append(nu.Relocations, hex8(va))
			}
		}
	}
	nu.NumCallees = len(nu.Callees)
	nu.IsLeaf = nu.NumCallees == 0 && !nu.IsThunk
	return nu
}

// relocsOf mirrors extract_units: rel32 call/jmp operands, FF 15/FF 25 slots, else an absolute image
// address in the last four bytes.
func relocsOf(in *inst) []string {
	b := in.Bytes
	switch {
	case len(b) == 5 && (b[0] == 0xE8 || b[0] == 0xE9):
		return []string{hex8(in.VA + 1)}
	case len(b) == 6 && b[0] == 0xFF && (b[1] == 0x25 || b[1] == 0x15):
		return []string{hex8(in.VA + 2)}
	case len(b) >= 5:
		off := len(b) - 4
		if c := binary.LittleEndian.Uint32(b[off:]); c >= relocLow && c < relocHigh {
			return []string{hex8(in.VA + uint32(off))}
		}
	}
	return nil
}

func planChanges(s *splitter, units []decomp.UnitEntry, byVA map[uint32]*decomp.UnitEntry, vtableSyms map[uint32]string, workers int) *plan {
	var cands []*decomp.UnitEntry
	for i := range units {
		u := &units[i]
		if u.Status != "todo" && u.Status != "deferred" {
			continue
		}
		start := parseVA(u.VA)
		overlaps := false
		if r, ok := s.tables.at(start); ok && r.start < start+u.Size {
			overlaps = true
		} else if ns := s.tables.nextStart(start, start+u.Size); ns < start+u.Size {
			overlaps = true
		}
		if overlaps || !decomp.IsValidCodeUnit(u.VA) {
			cands = append(cands, u)
		}
	}

	results := make([][]piece, len(cands))
	errs := make([]error, len(cands))
	parallel(len(cands), workers, func(i int) {
		start := parseVA(cands[i].VA)
		results[i], errs[i] = s.partition(start, start+cands[i].Size)
	})

	pl := &plan{outcomes: map[string]int{}, units: len(cands)}
	var mu sync.Mutex
	for i, u := range cands {
		if errs[i] != nil {
			fmt.Fprintf(os.Stderr, "Warning: %s: %v\n", u.VA, errs[i])
			continue
		}
		pieces := results[i]
		start := parseVA(u.VA)

		// Obfuscated / VM-protected code (e.g. a copy-protection interpreter) is not compiler output: a large
		// share of it decodes to instructions MSVC never emits. Mark the whole unit, don't split it into
		// hundreds of pseudo-functions nobody can match from C++.
		undec := uint32(0)
		for _, p := range pieces {
			if p.kind == "data" && strings.HasPrefix(p.reason, "undecodable") {
				undec += p.end - p.start
			}
		}
		frac := float64(undec) / float64(u.Size)
		pl.undecFrac = append(pl.undecFrac, frac)
		if u.Size >= obfuscatedMinSize && frac >= obfuscatedFrac {
			whole := piece{start: start, end: start + u.Size, kind: "data"}
			nu := s.unitFor(whole, u.Symbol, "out_of_scope")
			nu.SkipReason = fmt.Sprintf("not compiler code: %.0f%% of bytes never occur in MSVC output (data tables or VM/protection code)", frac*100)
			pl.changes = append(pl.changes, unitChange{orig: u, origStatus: u.Status, unit: nu, piece: whole})
			pl.outcomes["whole unit not compiler code"]++
			pl.obfuscatedBytes += u.Size
			continue
		}
		if len(pieces) == 1 && pieces[0].start == start && pieces[0].end == start+u.Size && pieces[0].kind == "code" {
			pl.unchanged++
			continue
		}
		for k, p := range pieces {
			status, reason := "todo", ""
			switch p.kind {
			case "data":
				status, reason = "out_of_scope", "data: "+p.reason
			case "noexit":
				status, reason = "skipped", "resplit: "+p.reason
			}
			if k == 0 && p.start == start {
				if status == "todo" && u.Status == "deferred" {
					status, reason = "deferred", u.SkipReason
				}
				nu := s.unitFor(p, u.Symbol, status)
				nu.SkipReason = reason
				pl.changes = append(pl.changes, unitChange{orig: u, origStatus: u.Status, unit: nu, piece: p})
				pl.outcomes["trimmed/reclassified ("+p.kind+")"]++
				continue
			}
			if _, exists := byVA[p.start]; exists {
				continue // never happens for a partition of one unit, but never clobber
			}
			sym := vtableSyms[p.start]
			if sym == "" {
				sym = "sub_" + strings.TrimPrefix(hex8(p.start), "0x")
			}
			nu := s.unitFor(p, sym, status)
			nu.SkipReason = reason
			mu.Lock()
			pl.changes = append(pl.changes, unitChange{unit: nu, piece: p})
			mu.Unlock()
			pl.outcomes["new unit ("+p.kind+")"]++
		}
		// a leading-data unit's VA must still exist: if the first piece did not start at the unit VA, the
		// bytes before it were padding, which we keep as part of the first piece's unit by design above.
	}
	sort.Slice(pl.changes, func(a, b int) bool { return pl.changes[a].unit.VA < pl.changes[b].unit.VA })
	return pl
}

func (pl *plan) report(verbose bool) {
	fmt.Printf("Open units examined (invalid or overlapping a switch table): %d\n", pl.units)
	fmt.Printf("  already correct                     : %d\n", pl.unchanged)
	var keys []string
	for k := range pl.outcomes {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	for _, k := range keys {
		fmt.Printf("  %-36s: %d\n", k, pl.outcomes[k])
	}
	queued, bytesQ := 0, uint32(0)
	for _, c := range pl.changes {
		if c.unit.Status == "todo" || c.unit.Status == "deferred" {
			queued++
			bytesQ += c.unit.Size
		}
	}
	fmt.Printf("Functions that become queueable       : %d (%d bytes)\n", queued, bytesQ)
	fmt.Printf("Non-compiler code moved out of scope  : %d bytes\n", pl.obfuscatedBytes)
	hist := make([]int, 11)
	for _, f := range pl.undecFrac {
		hist[int(f*10)]++
	}
	fmt.Printf("Undecodable share per examined unit   :")
	for i, n := range hist {
		if n > 0 {
			fmt.Printf(" %d0%%:%d", i, n)
		}
	}
	fmt.Println()
	if verbose {
		for _, c := range pl.changes {
			tag := "new "
			if c.orig != nil {
				tag = fmt.Sprintf("was %dB", c.orig.Size)
			}
			fmt.Printf("  %s %5dB %-12s %-9s %s %s\n", c.unit.VA, c.unit.Size, c.unit.Status, tag, c.unit.Symbol, c.unit.SkipReason)
		}
	}
}

// apply writes the plan. Caller holds the work lock. Units whose on-disk status changed since we read them
// (an agent matched or skipped one meanwhile) are left alone, along with every piece cut from them.
func (pl *plan) apply(s *splitter, nr *noreturnInfo, symbols map[uint32]string) {
	for _, c := range pl.changes {
		symbols[parseVA(c.unit.VA)] = c.unit.Symbol
	}
	skipRegion := map[string]bool{}
	written, created, skipped := 0, 0, 0
	for _, c := range pl.changes {
		if c.orig == nil {
			continue
		}
		cur, err := unitstore.ReadOne(c.orig.VA)
		if err != nil {
			skipRegion[c.orig.VA] = true
			continue
		}
		var obj map[string]json.RawMessage
		if json.Unmarshal(cur, &obj) != nil {
			skipRegion[c.orig.VA] = true
			continue
		}
		var st string
		_ = json.Unmarshal(obj["status"], &st)
		if st != c.origStatus {
			skipRegion[c.orig.VA] = true
			skipped++
			continue
		}
		nb, _ := json.Marshal(c.unit)
		var nobj map[string]json.RawMessage
		_ = json.Unmarshal(nb, &nobj)
		for k, v := range nobj {
			obj[k] = v
		}
		if c.unit.SkipReason == "" {
			delete(obj, "skip_reason")
		}
		out, _ := json.Marshal(obj)
		die(unitstore.WriteOne(c.unit.VA, out))
		die(writeCacheFile(s, c, symbols))
		written++
	}
	for _, c := range pl.changes {
		if c.orig != nil {
			continue
		}
		if owner := ownerOf(pl, c); owner != "" && skipRegion[owner] {
			continue
		}
		if _, err := unitstore.ReadOne(c.unit.VA); err == nil {
			continue
		}
		out, _ := json.Marshal(c.unit)
		die(unitstore.WriteOne(c.unit.VA, out))
		die(writeCacheFile(s, c, symbols))
		created++
	}
	die(writeNoreturnFile(filepath.Join("build", "noreturn.txt"), nr, s.img))
	fmt.Printf("\nApplied: %d units updated, %d units created, %d left alone (changed since read). Wrote build/noreturn.txt.\n", written, created, skipped)
	fmt.Println("Commit build/units/ and build/noreturn.txt (the cache in .local/ is regenerated by running resplit again on another machine).")
}

// ownerOf returns the VA of the original unit a new piece was cut from.
func ownerOf(pl *plan, c unitChange) string {
	best := ""
	for _, o := range pl.changes {
		if o.orig == nil {
			continue
		}
		start := parseVA(o.orig.VA)
		if c.piece.start > start && c.piece.start < start+o.orig.Size {
			best = o.orig.VA
		}
	}
	return best
}

// writeCacheFile writes .local/cache/funcs/<VA>.txt in exactly the format extract_units produces.
func writeCacheFile(s *splitter, c unitChange, symbols map[uint32]string) error {
	u, p := c.unit, c.piece
	end := p.end
	var sb strings.Builder
	fmt.Fprintf(&sb, "// Function: %s (%s - 0x%08X)\n", u.Symbol, u.VA, end)
	fmt.Fprintf(&sb, "// Size: %d bytes | SHA-256: %s\n", u.Size, u.SHA256)
	fmt.Fprintf(&sb, "// IsLeaf: %v | IsThunk: %v | Callees (%d): %s\n", u.IsLeaf, u.IsThunk, len(u.Callees), strings.Join(u.Callees, ", "))
	if len(u.Relocations) > 0 {
		fmt.Fprintf(&sb, "// Relocations (%d): %s\n", len(u.Relocations), strings.Join(u.Relocations, ", "))
	}
	sb.WriteString("\n")
	if p.kind == "data" {
		for va := p.start; va < end; va += 4 {
			n := minU32(4, end-va)
			b := s.img.bytesAt(va, n)
			var hx []string
			for _, x := range b {
				hx = append(hx, fmt.Sprintf("%02x", x))
			}
			txt := ".byte"
			if n == 4 {
				txt = fmt.Sprintf(".long\t0x%08x", binary.LittleEndian.Uint32(b))
			}
			fmt.Fprintf(&sb, "  %08X: %-24s\t%s\n", va, strings.Join(hx, " "), txt)
		}
	} else {
		for i := range p.insts {
			in := &p.insts[i]
			f := s.img.flowOf(in)
			comment := ""
			if f.isCall && s.img.inText(f.target) {
				if sym, ok := symbols[f.target]; ok {
					comment = " ; " + sym
				}
			} else if slot := iatRef(s.img, in); slot != 0 {
				comment = " ; " + s.img.iat[slot]
			}
			fmt.Fprintf(&sb, "  %08X: %-24s\t%s%s\n", in.VA, in.RawHex, in.Disasm, comment)
		}
	}
	path := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
	tmp := path + ".tmp"
	if err := os.WriteFile(tmp, []byte(sb.String()), 0644); err != nil {
		return err
	}
	return os.Rename(tmp, path)
}

// iatRef mirrors extract_units' IATRef: FF 15/FF 25 slots, or an IAT address in an instruction's last 4 bytes.
func iatRef(img *image, in *inst) uint32 {
	b := in.Bytes
	if len(b) == 6 && b[0] == 0xFF && (b[1] == 0x25 || b[1] == 0x15) {
		if slot := binary.LittleEndian.Uint32(b[2:]); img.iat[slot] != "" {
			return slot
		}
		return 0
	}
	if len(b) >= 5 && !(len(b) == 5 && (b[0] == 0xE8 || b[0] == 0xE9)) {
		if c := binary.LittleEndian.Uint32(b[len(b)-4:]); img.iat[c] != "" {
			return c
		}
	}
	return 0
}
