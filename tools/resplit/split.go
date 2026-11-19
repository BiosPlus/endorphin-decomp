package main

import (
	"regexp"
	"sort"
	"strconv"
	"sync"
)

// dataRange is a run of non-code bytes inside .text: a switch jump table or byte index table.
type dataRange struct {
	start, end uint32
	owner      uint32 // function whose switch uses it
	kind       string // "jump table" | "index table"
}

type tableSet struct {
	mu     sync.Mutex
	ranges []dataRange // sorted by start, non-overlapping
}

func (t *tableSet) add(r dataRange) {
	if r.end <= r.start {
		return
	}
	t.mu.Lock()
	defer t.mu.Unlock()
	i := sort.Search(len(t.ranges), func(i int) bool { return t.ranges[i].start >= r.start })
	if i < len(t.ranges) && t.ranges[i].start == r.start {
		if r.end > t.ranges[i].end {
			t.ranges[i].end = r.end
		}
		return
	}
	t.ranges = append(t.ranges, dataRange{})
	copy(t.ranges[i+1:], t.ranges[i:])
	t.ranges[i] = r
}

// at returns the table covering va, if any.
func (t *tableSet) at(va uint32) (dataRange, bool) {
	t.mu.Lock()
	defer t.mu.Unlock()
	i := sort.Search(len(t.ranges), func(i int) bool { return t.ranges[i].end > va })
	if i < len(t.ranges) && t.ranges[i].start <= va {
		return t.ranges[i], true
	}
	return dataRange{}, false
}

// nextStart returns the start of the first table beginning after va (or limit).
func (t *tableSet) nextStart(va, limit uint32) uint32 {
	t.mu.Lock()
	defer t.mu.Unlock()
	i := sort.Search(len(t.ranges), func(i int) bool { return t.ranges[i].start > va })
	if i < len(t.ranges) && t.ranges[i].start < limit {
		return t.ranges[i].start
	}
	return limit
}

var (
	reJmpTable = regexp.MustCompile(`^jmp\tdword ptr \[4\*(\w+) \+ 0x([0-9a-f]+)\]$`)
	reMovzxTbl = regexp.MustCompile(`^movzx\t(\w+), byte ptr \[(\w+) \+ 0x([0-9a-f]+)\]$`)
	reCmpImm   = regexp.MustCompile(`^cmp\t(\w+), (0x[0-9a-f]+|\d+)$`)
)

func parseImm(s string) (uint32, bool) {
	v, err := strconv.ParseUint(s, 0, 32)
	return uint32(v), err == nil
}

// switchAt recognises MSVC's switch dispatch ending at insts[j]:
//
//	cmp  R, K ; ja default ; [movzx R2, byte ptr [R + B]] ; jmp dword ptr [4*R2 + T]
//
// and returns its tables and case targets. fnStart bounds the fallback when K cannot be found.
func (img *image) switchAt(insts []inst, j int, fnStart uint32) (tables []dataRange, targets []uint32, ok bool) {
	m := reJmpTable.FindStringSubmatch(insts[j].Disasm)
	if m == nil {
		return nil, nil, false
	}
	jmpReg := m[1]
	tbl, okT := parseImm("0x" + m[2])
	if !okT || !img.inText(tbl) {
		return nil, nil, false
	}

	idxReg := jmpReg
	var byteTbl uint32
	limit := 0 // number of indices accepted by the bounds check (0 = unknown)
	for k := j - 1; k >= 0 && k >= j-10; k-- {
		d := insts[k].Disasm
		if mm := reMovzxTbl.FindStringSubmatch(d); mm != nil && byteTbl == 0 && mm[1] == jmpReg {
			if v, ok := parseImm("0x" + mm[3]); ok && img.inText(v) {
				byteTbl, idxReg = v, mm[2]
			}
			continue
		}
		if mm := reCmpImm.FindStringSubmatch(d); mm != nil && mm[1] == idxReg {
			// the bounds check must be followed by ja/jae before the dispatch
			for q := k + 1; q < j; q++ {
				switch insts[q].mnemonic() {
				case "ja":
					if v, ok := parseImm(mm[2]); ok {
						limit = int(v) + 1
					}
				case "jae":
					if v, ok := parseImm(mm[2]); ok {
						limit = int(v)
					}
				}
			}
			break
		}
	}
	if limit > 4096 {
		limit = 0
	}

	owner := fnStart
	nEntries := limit
	if byteTbl != 0 {
		if limit == 0 {
			return nil, nil, false // cannot size an index table safely
		}
		b := img.bytesAt(byteTbl, uint32(limit))
		if b == nil {
			return nil, nil, false
		}
		maxIdx := 0
		for _, x := range b {
			if int(x) > maxIdx {
				maxIdx = int(x)
			}
		}
		nEntries = maxIdx + 1
		tables = append(tables, dataRange{start: byteTbl, end: byteTbl + uint32(limit), owner: owner, kind: "index table"})
	}
	if nEntries == 0 {
		// Unknown bound: case targets of an MSVC switch lie between the function start and its table.
		for i := 0; i < 1024; i++ {
			v, ok := img.u32(tbl + uint32(4*i))
			if !ok || v < fnStart || v >= tbl {
				break
			}
			nEntries++
		}
		if nEntries == 0 {
			return nil, nil, false
		}
	}
	for i := 0; i < nEntries; i++ {
		v, ok := img.u32(tbl + uint32(4*i))
		if !ok || !img.inText(v) {
			return nil, nil, false
		}
		targets = append(targets, v)
	}
	tables = append(tables, dataRange{start: tbl, end: tbl + uint32(4*nEntries), owner: owner, kind: "jump table"})
	return tables, targets, true
}

// piece is one contiguous run of a split unit.
type piece struct {
	start, end uint32
	kind       string // "code" (ends in a clean exit), "noexit" (code without a clean end), "data"
	reason     string
	insts      []inst
}

type splitter struct {
	img         *image
	tables      *tableSet
	noreturn    map[uint32]bool // function VAs that never return
	noreturnIAT map[uint32]bool // IAT slots of functions that never return
	known       map[uint32]bool // known function starts (units, call targets, vtable entries)
}

func (s *splitter) isExit(in *inst) bool {
	f := s.img.flowOf(in)
	switch {
	case f.isRet, f.isJmp:
		return true
	case f.isCall && s.noreturn[f.target]:
		return true
	case f.iatTarget != 0 && s.noreturnIAT[f.iatTarget] && in.Bytes[1] == 0x15:
		return true
	}
	return false
}

// boundaryAfter reports whether a function may end right after the exit instruction in. Code that follows
// an exit with no padding usually still belongs to the function (e.g. MSVC emits catch funclets inline right
// after the body, reached only through the EH tables), so we keep extract_units' rules and add the cases it
// missed: a switch table, alignment fillers, and the region end.
//
// strong: the region ends, a known function or a table starts, or padding follows (int3, or fillers that
// run up to a 16-byte boundary). weak: extract_units' "16-byte boundary right after a ret".
func (s *splitter) boundaryAfter(in *inst, end uint32) (strong, weak bool) {
	next := in.end()
	if next >= end || s.known[next] {
		return true, false
	}
	if r, ok := s.tables.at(next); ok && r.start == next {
		return true, false
	}
	buf := s.img.bytesAt(next, minU32(16, end-next))
	if buf == nil || buf[0] == 0xCC {
		return true, false
	}
	p := next
	for p%16 != 0 && p < end {
		n := fillerLen(s.img.bytesAt(p, minU32(16, end-p)))
		if n == 0 {
			break
		}
		p += uint32(n)
	}
	if p != next && (p%16 == 0 || p >= end) {
		return true, false
	}
	f := s.img.flowOf(in)
	return false, f.isRet && next%16 == 0
}

// allPadding reports whether [from, to) is nothing but int3/nop/filler padding.
func (s *splitter) allPadding(from, to uint32) bool {
	for from < to {
		n := fillerLen(s.img.bytesAt(from, minU32(16, to-from)))
		if n == 0 {
			return false
		}
		from += uint32(n)
	}
	return from == to
}

// paddedApart reports whether every piece is code ending in a clean exit and consecutive pieces are
// separated only by padding (i.e. the region is several whole functions laid end to end).
func (s *splitter) paddedApart(pieces []piece) bool {
	for i, p := range pieces {
		if p.kind != "code" {
			return false
		}
		if i > 0 && !s.allPadding(pieces[i-1].end, p.start) {
			return false
		}
	}
	return true
}

// resync finds where code plausibly restarts after undecodable bytes at va: a known function start, or a
// 16-byte aligned address right after int3/nop padding, or the end of a known table.
func (s *splitter) resync(va, end uint32) uint32 {
	for p := va + 1; p < end; p++ {
		if s.known[p] {
			return p
		}
		if p%16 == 0 {
			if b := s.img.bytesAt(p-1, 1); b != nil && (b[0] == 0xCC || b[0] == 0x90) {
				return p
			}
		}
		if r, ok := s.tables.at(p); ok && r.start == p {
			return p
		}
	}
	return end
}

// partition splits [start, end) into functions, tables and junk.
func (s *splitter) partition(start, end uint32) ([]piece, error) {
	var out []piece
	pos := start
	for pos < end {
		if pos != start {
			for pos < end {
				buf := s.img.bytesAt(pos, minU32(16, end-pos))
				n := 0
				if buf != nil && buf[0] == 0xCC {
					n = 1
				} else if pos%16 != 0 {
					// fillers only pad up to an alignment boundary; never eat a function's first instruction
					n = fillerLen(buf)
				}
				if n == 0 {
					break
				}
				pos += uint32(n)
			}
			if pos >= end {
				break
			}
		}
		if r, ok := s.tables.at(pos); ok {
			e := minU32(r.end, end)
			if n := len(out); n > 0 && out[n-1].kind == "data" && out[n-1].end == pos {
				out[n-1].end = e
			} else {
				out = append(out, piece{start: pos, end: e, kind: "data", reason: r.kind + " of " + hex8(r.owner)})
			}
			pos = e
			continue
		}

		p, err := s.walk(pos, end)
		if err != nil {
			return nil, err
		}
		if p.end <= pos { // never loop forever
			p.end = pos + 1
		}
		out = append(out, p)
		pos = p.end
	}
	return out, nil
}

// walk decodes one function starting at pos and ends it at the first exit with no pending forward branch.
func (s *splitter) walk(pos, end uint32) (piece, error) {
	stop := s.tables.nextStart(pos, end)
	insts, err := s.img.decode(pos, stop)
	if err != nil {
		return piece{}, err
	}
	maxTarget := pos
	lastExit := -1
	for i := range insts {
		in := &insts[i]
		if in.end() > stop {
			break
		}
		if suspicious(in) {
			r := s.resync(in.VA, end)
			if lastExit >= 0 {
				return s.mk(pos, insts[:lastExit+1], "code", ""), nil
			}
			return piece{start: pos, end: r, kind: "data", reason: "undecodable bytes (" + in.Disasm + " at " + hex8(in.VA) + ")"}, nil
		}
		f := s.img.flowOf(in)
		if (f.isJcc || (f.isJmp && !f.isIndirect)) && f.target > in.VA && f.target < end && !s.known[f.target] {
			if f.target > maxTarget {
				maxTarget = f.target
			}
		}
		if f.isIndirect {
			if tbls, targets, ok := s.img.switchAt(insts, i, pos); ok {
				for _, t := range tbls {
					if t.start < end && t.end > pos {
						s.tables.add(t)
					}
				}
				for _, t := range targets {
					if t > in.VA && t < end && t > maxTarget {
						maxTarget = t
					}
				}
				// a table inside the decoded range cuts it short
				if ns := s.tables.nextStart(in.VA, end); ns < stop {
					stop = ns
				}
			}
		}
		if s.isExit(in) {
			lastExit = i
			// Padding, a table or a known start after an exit always ends the function: MSVC never pads
			// inside a function (a jmp across padding is a separate thunk, e.g. a dynamic initializer stub
			// jumping to its body). The weak rule (16-byte boundary after ret) needs no pending branch.
			if strong, weak := s.boundaryAfter(in, end); strong || (weak && in.end() > maxTarget) {
				return s.mk(pos, insts[:i+1], "code", ""), nil
			}
		}
	}
	if lastExit >= 0 {
		// Branches point past the last exit but we ran into a table or the unit end first; MSVC places tables
		// after the code, so the function ends at its last exit.
		return s.mk(pos, insts[:lastExit+1], "code", ""), nil
	}
	if len(insts) == 0 {
		return piece{start: pos, end: stop, kind: "data", reason: "undecodable bytes"}, nil
	}
	n := len(insts)
	for n > 0 && insts[n-1].end() > stop {
		n--
	}
	if n == 0 {
		return piece{start: pos, end: stop, kind: "data", reason: "undecodable bytes"}, nil
	}
	return s.mk(pos, insts[:n], "noexit", "no ret/jmp/no-return call before "+hex8(insts[n-1].end())), nil
}

func (s *splitter) mk(pos uint32, insts []inst, kind, reason string) piece {
	return piece{start: pos, end: insts[len(insts)-1].end(), kind: kind, reason: reason, insts: append([]inst(nil), insts...)}
}

func minU32(a, b uint32) uint32 {
	if a < b {
		return a
	}
	return b
}

func hex8(v uint32) string { return "0x" + leftPad(strconv.FormatUint(uint64(v), 16)) }

func leftPad(h string) string {
	for len(h) < 8 {
		h = "0" + h
	}
	b := []byte(h)
	for i, c := range b {
		if c >= 'a' && c <= 'f' {
			b[i] = c - 32
		}
	}
	return string(b)
}
