package main

import (
	"bufio"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
)

// Imports that never return. Matched against the symbol after "DLL!".
var noreturnImports = map[string]bool{
	"_CxxThrowException": true, "exit": true, "_exit": true, "abort": true, "_invalid_parameter_noinfo": true,
	"_amsg_exit": true, "ExitProcess": true, "ExitThread": true, "_endthread": true, "_endthreadex": true,
	"?terminate@@YAXXZ": true, "_invoke_watson": true, "__crtExitProcess": true, "longjmp": true,
	"FatalAppExitA": true, "FatalAppExitW": true, "FatalExit": true, "__report_gsfailure": true,
}

// cachedUnit is one unit's instructions as extract_units cached them in .local/cache/funcs/<VA>.txt.
type cachedUnit struct {
	va    uint32
	insts []inst
}

var cacheLineRe = regexp.MustCompile(`^\s*([0-9A-Fa-f]{1,8}):\s+((?:[0-9a-fA-F]{2}\s)+)\s*(.*)$`)

func readCachedUnit(va uint32) (*cachedUnit, error) {
	f, err := os.Open(filepath.Join(".local", "cache", "funcs", hex8(va)+".txt"))
	if err != nil {
		return nil, err
	}
	defer f.Close()
	cu := &cachedUnit{va: va}
	sc := bufio.NewScanner(f)
	sc.Buffer(make([]byte, 1<<20), 1<<20)
	for sc.Scan() {
		m := cacheLineRe.FindStringSubmatch(sc.Text())
		if m == nil {
			continue
		}
		v, _ := strconv.ParseUint(m[1], 16, 32)
		dis := strings.TrimSpace(m[3])
		if i := strings.Index(dis, " ; "); i != -1 {
			dis = dis[:i]
		}
		cu.insts = append(cu.insts, inst{VA: uint32(v), Bytes: parseHex(m[2]), RawHex: strings.TrimSpace(m[2]), Disasm: dis})
	}
	return cu, sc.Err()
}

type noreturnInfo struct {
	funcs  map[uint32]string // VA -> reason
	slots  map[uint32]bool   // IAT slots
	byName map[uint32]string // VA -> symbol (for the report)
}

// learnNoreturn computes the set of functions that never return from the imports, thunks, function bodies
// (fixpoint) and call-site evidence (a direct call immediately followed by int3 padding).
func learnNoreturn(img *image, units []*cachedUnit, isUnitStart map[uint32]bool, symbols map[uint32]string) *noreturnInfo {
	nr := &noreturnInfo{funcs: map[uint32]string{}, slots: map[uint32]bool{}, byName: map[uint32]string{}}
	for slot, sym := range img.iat {
		name := sym
		if i := strings.LastIndexByte(sym, '!'); i != -1 {
			name = sym[i+1:]
		}
		if noreturnImports[name] {
			nr.slots[slot] = true
		}
	}

	// Call-site evidence, and per-unit control-flow summaries for the fixpoint.
	evidence := map[uint32]int{}
	type summary struct {
		hasRet, hasIndirect bool
		outTargets          []uint32 // direct jmp/call targets outside the unit (calls only matter if last)
		lastCall            uint32
		lastJmp             uint32
		lastIATSlot         uint32
	}
	sums := make(map[uint32]*summary, len(units))
	for _, cu := range units {
		if len(cu.insts) == 0 {
			continue
		}
		start, end := cu.va, cu.insts[len(cu.insts)-1].end()
		sm := &summary{}
		for i := range cu.insts {
			in := &cu.insts[i]
			f := img.flowOf(in)
			if f.isCall || (f.iatTarget != 0 && in.Bytes[1] == 0x15) {
				if nb := img.bytesAt(in.end(), 1); nb != nil && nb[0] == 0xCC {
					key := f.target
					if f.iatTarget != 0 {
						key = f.iatTarget
					}
					evidence[key]++
				}
			}
			if f.isRet {
				sm.hasRet = true
			}
			if f.isIndirect && f.iatTarget == 0 {
				sm.hasIndirect = true
			}
			if f.isJmp && !f.isIndirect && (f.target < start || f.target >= end) {
				sm.outTargets = append(sm.outTargets, f.target)
			}
			if i == len(cu.insts)-1 {
				switch {
				case f.isCall:
					sm.lastCall = f.target
				case f.isJmp && f.iatTarget != 0:
					sm.lastIATSlot = f.iatTarget
				case f.iatTarget != 0 && in.Bytes[1] == 0x15:
					sm.lastIATSlot = f.iatTarget
				case f.isJmp && !f.isIndirect:
					sm.lastJmp = f.target
				}
			}
		}
		sums[cu.va] = sm
	}
	for key, n := range evidence {
		if img.iat[key] != "" {
			if n >= 1 {
				nr.slots[key] = true
			}
			continue
		}
		if n >= 2 || (n == 1 && isUnitStart[key]) {
			nr.funcs[key] = "call followed by int3 padding at " + strconv.Itoa(n) + " site(s)"
		}
	}

	isNR := func(target uint32) bool { _, ok := nr.funcs[target]; return ok }
	for changed := true; changed; {
		changed = false
		for va, sm := range sums {
			if isNR(va) || sm.hasRet || sm.hasIndirect {
				continue
			}
			ends := (sm.lastCall != 0 && isNR(sm.lastCall)) || (sm.lastJmp != 0 && isNR(sm.lastJmp)) ||
				(sm.lastIATSlot != 0 && nr.slots[sm.lastIATSlot])
			if !ends {
				continue
			}
			ok := true
			for _, t := range sm.outTargets {
				if !isNR(t) {
					ok = false
					break
				}
			}
			if ok {
				nr.funcs[va] = "every path ends in a no-return call"
				changed = true
			}
		}
	}
	for va := range nr.funcs {
		nr.byName[va] = symbols[va]
	}
	return nr
}

// writeNoreturnFile records the learned set as build/noreturn.txt ("0xVA symbol  # reason"), which
// internal/decomp reads so the queue's validity check accepts functions ending in these calls.
func writeNoreturnFile(path string, nr *noreturnInfo, img *image) error {
	var lines []string
	for va, why := range nr.funcs {
		sym := nr.byName[va]
		if sym == "" {
			sym = "sub_" + strings.TrimPrefix(hex8(va), "0x")
		}
		lines = append(lines, hex8(va)+" "+sym+"  # "+why)
	}
	for slot := range nr.slots {
		lines = append(lines, hex8(slot)+" iat:"+img.iat[slot]+"  # no-return import")
	}
	sort.Strings(lines)
	body := "# Functions that never return, learned by tools/resplit from endorphin.exe. Do not edit by hand.\n" +
		"# <VA> <symbol>  # reason    (iat: entries are import address table slots)\n" +
		strings.Join(lines, "\n") + "\n"
	return os.WriteFile(path, []byte(body), 0644)
}
