package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"io"
	"os"
	"regexp"
	"sort"
	"strings"
	"syscall"
	"time"
	"unsafe"
)

const (
	cRst, cDim               = "\033[0m", "\033[2m"
	cRed, cGrn, cYel         = "\033[31m", "\033[32m", "\033[33m"
	cBlu, cMag, cCyn         = "\033[34m", "\033[35m", "\033[36m"
	tokenRefreshInterval     = 5 * time.Second
	defaultTerminalColumns   = 100
	minimumTerminalColumns   = 50
	miniBarWidth             = 20
	ansiEscapePatternLiteral = "\033\\[[0-9;]*m"
)

var ansiRe = regexp.MustCompile(ansiEscapePatternLiteral)

// dashboard redraws a status block in place on a terminal; otherwise (or with GRIND_PLAIN=1) it prints events
// as ordinary lines. Only notable events scroll past above the block; everything goes to the events log.
type dashboard struct {
	tty       bool
	shown     int
	prevLines int
	tokens    map[string]*tokenCounter
}

func newDashboard(plain bool) *dashboard {
	fi, err := os.Stdout.Stat()
	tty := err == nil && fi.Mode()&os.ModeCharDevice != 0 && !plain && os.Getenv("TERM") != "" && os.Getenv("TERM") != "dumb"
	return &dashboard{tty: tty, tokens: map[string]*tokenCounter{}}
}

func (d *dashboard) forget(addr string) { delete(d.tokens, addr) }

func eventColor(ev string) (string, bool) {
	switch {
	case strings.Contains(ev, "[+]"):
		return cGrn, true
	case strings.Contains(ev, "[x]"), strings.Contains(ev, "[!]"):
		return cRed, true
	case strings.Contains(ev, "[*] Push"):
		return cDim, true
	}
	return "", false
}

func fmtTok(n int) string {
	switch {
	case n >= 1000000:
		return fmt.Sprintf("%d.%dM", n/1000000, n%1000000/100000)
	case n >= 1000:
		return fmt.Sprintf("%d.%dk", n/1000, n%1000/100)
	}
	return fmt.Sprint(n)
}

func miniBar(v, m, w int) string {
	if m < 1 {
		m = 1
	}
	if v > m {
		v = m
	}
	f := v * w / m
	return "[" + strings.Repeat("=", f) + strings.Repeat(" ", w-f) + "]"
}

func termCols() int {
	var ws struct{ Row, Col, X, Y uint16 }
	if _, _, e := syscall.Syscall(syscall.SYS_IOCTL, os.Stdout.Fd(), syscall.TIOCGWINSZ, uintptr(unsafe.Pointer(&ws))); e == 0 && ws.Col > 0 {
		return int(ws.Col)
	}
	return defaultTerminalColumns
}

func (d *dashboard) render(g *grind) {
	g.mu.Lock()
	events := g.events[d.shown:]
	d.shown = len(g.events)
	g.mu.Unlock()

	if !d.tty {
		for _, ev := range events {
			fmt.Println(ev)
		}
		return
	}

	var out strings.Builder
	if d.prevLines > 0 {
		fmt.Fprintf(&out, "\033[%dA", d.prevLines)
	}
	out.WriteString("\r\033[J")
	for _, ev := range events {
		if c, ok := eventColor(ev); ok {
			out.WriteString(c + ev + cRst + "\n")
		}
	}

	now := time.Now()
	elapsed := int64(now.Sub(g.sessionStart).Seconds())
	total := g.cfg.MaxWaves * g.cfg.WaveSize
	pct, eta, per := 0, "-", "-"
	if total > 0 {
		pct = g.finished * 100 / total
	}
	if g.finished > 0 {
		eta = fmtDur(elapsed * int64(total-g.finished) / int64(g.finished))
		per = fmtDur(elapsed / int64(g.finished))
	}
	var rows []string
	rows = append(rows, fmt.Sprintf("%sMatched:     %s %s%d%s / %d (%d%%), %s%d deferred%s  %s",
		cDim, cRst, cGrn, g.matched, cRst, total, pct, cYel, g.deferred, cRst, miniBar(g.finished, total, miniBarWidth)))
	rows = append(rows, fmt.Sprintf("%sElapsed:     %s %s, ETA %s, ~%s/function", cDim, cRst, fmtDur(elapsed), eta, per))

	var st strings.Builder
	for t, models := range g.cfg.Tiers {
		running, part := 0, ""
		for _, m := range models {
			i := g.modelIdx[m]
			running += g.running[i]
			part += fmt.Sprintf("%s %d/%d ", strings.Replace(m, "claude-", "", 1), g.running[i], g.stageCap(i))
		}
		if running+len(g.pending[t]) == 0 {
			continue
		}
		fmt.Fprintf(&st, "T%d: %s", t, part)
		if p := len(g.pending[t]); p > 0 {
			fmt.Fprintf(&st, "(+%d waiting) ", p)
		}
		st.WriteString(" ")
	}
	if g.autoSolveRunning {
		st.WriteString("auto_solve running ")
	}
	agents := st.String()
	if agents == "" {
		agents = "idle"
	}
	rows = append(rows, fmt.Sprintf("%sAgents:      %s %s", cDim, cRst, agents))
	var cd strings.Builder
	for _, pl := range allPools {
		if until, ok := g.pools.resetsAt(pl); ok {
			fmt.Fprintf(&cd, "%s resets in %s  ", pl, fmtDur(int64(until.Sub(now).Seconds())))
		}
	}
	if cd.Len() > 0 {
		rows = append(rows, fmt.Sprintf("%sLimits:      %s %s%s%s", cDim, cRst, cRed, cd.String(), cRst))
	}

	if len(g.jobs) > 0 {
		rows = append(rows, cDim+"Working on:"+cRst)
		addrs := make([]string, 0, len(g.jobs))
		for a := range g.jobs {
			addrs = append(addrs, a)
		}
		sort.Strings(addrs)
		for _, addr := range addrs {
			spec := g.chain[g.jobs[addr]]
			tag, backend, logPath, started := baseModel(spec), "-", "", now
			g.mu.Lock()
			if ri := g.runInfo[addr]; ri != nil {
				tag, backend, logPath, started = ri.tag, ri.backend, ri.log, ri.started
			}
			g.mu.Unlock()
			att := int(now.Sub(started).Seconds())
			extra := g.funcSize[addr] / 2
			if extra > g.cfg.AgentTimeout*2 {
				extra = g.cfg.AgentTimeout * 2
			}
			tmo := g.cfg.AgentTimeout + extra
			mc := []string{cGrn, cCyn, cBlu, cYel, cMag}[min(g.modelTier[spec], 4)]
			tc := ""
			if att*100 >= tmo*90 {
				tc = cRed
			} else if att*100 >= tmo*60 {
				tc = cYel
			}
			tok := "-"
			if backend == "claude" && logPath != "" {
				tok = d.agentTokens(addr, logPath)
			}
			rows = append(rows, fmt.Sprintf(" * %s %5dB  %s%-27s%s %s%-9s%s %7s tok  (total %s)",
				addr, g.funcSize[addr], mc, backend+"/"+strings.TrimPrefix(tag, "claude-"), cRst,
				tc, fmt.Sprintf("%ds/%ds", att, tmo), cRst, tok, fmtDur(int64(now.Sub(g.fnStart[addr]).Seconds()))))
		}
	}

	cols := termCols()
	if cols < minimumTerminalColumns {
		cols = minimumTerminalColumns
	}
	for _, line := range rows {
		if plain := ansiRe.ReplaceAllString(line, ""); len(plain) > cols-1 {
			line = plain[:cols-1]
		}
		out.WriteString(line + "\n")
	}
	d.prevLines = len(rows)
	os.Stdout.WriteString(out.String())
}

// ---- Live token count from a claude stream-json log ------------------------------------------------------

// tokenCounter reads an agent's log incrementally: input + cache-creation + output tokens per assistant message
// (cache reads excluded: they re-count the same context each turn). Streamed events carry partial output
// counts, so it undercounts a little until the agent finishes. Refreshed at most every 5 seconds.
type tokenCounter struct {
	path    string
	offset  int64
	partial []byte
	perMsg  map[string][3]int
	last    time.Time
}

func (d *dashboard) agentTokens(addr, path string) string {
	tc := d.tokens[addr]
	if tc == nil || tc.path != path {
		tc = &tokenCounter{path: path, perMsg: map[string][3]int{}}
		d.tokens[addr] = tc
	}
	if time.Since(tc.last) >= tokenRefreshInterval {
		tc.last = time.Now()
		tc.update()
	}
	if len(tc.perMsg) == 0 {
		return "-"
	}
	sum := 0
	for _, v := range tc.perMsg {
		sum += v[0] + v[1] + v[2]
	}
	return fmtTok(sum)
}

func (tc *tokenCounter) update() {
	f, err := os.Open(tc.path)
	if err != nil {
		return
	}
	defer f.Close()
	if fi, err := f.Stat(); err != nil || fi.Size() < tc.offset {
		tc.offset, tc.partial, tc.perMsg = 0, nil, map[string][3]int{}
	}
	if _, err := f.Seek(tc.offset, io.SeekStart); err != nil {
		return
	}
	data, _ := io.ReadAll(f)
	tc.offset += int64(len(data))
	buf := append(tc.partial, data...)
	end := strings.LastIndexByte(string(buf), '\n')
	if end == -1 {
		tc.partial = buf
		return
	}
	tc.partial = append([]byte(nil), buf[end+1:]...)
	sc := bufio.NewScanner(strings.NewReader(string(buf[:end])))
	sc.Buffer(make([]byte, 1<<20), 64<<20)
	for sc.Scan() {
		line := sc.Bytes()
		if !strings.Contains(string(line), `"assistant"`) {
			continue
		}
		var ev struct {
			Type    string `json:"type"`
			Message struct {
				ID    string `json:"id"`
				Usage struct {
					In    int `json:"input_tokens"`
					Cache int `json:"cache_creation_input_tokens"`
					Out   int `json:"output_tokens"`
				} `json:"usage"`
			} `json:"message"`
		}
		if json.Unmarshal(line, &ev) != nil || ev.Type != "assistant" {
			continue
		}
		u, cur := ev.Message.Usage, tc.perMsg[ev.Message.ID]
		cur[0], cur[1], cur[2] = max(cur[0], u.In), max(cur[1], u.Cache), max(cur[2], u.Out)
		tc.perMsg[ev.Message.ID] = cur
	}
}
