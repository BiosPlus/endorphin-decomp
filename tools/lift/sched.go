package main

import (
	"bufio"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"strconv"
	"strings"
	"sync"
	"time"
)

type lifter struct {
	cfg   *config
	root  string
	pools *pools
	procs *procs

	hasClaude, hasClaudeEffort, hasClaudeSettingSources, hasClaudeStrictMCP, hasClaudeTools, hasClaudeDisableSlash, hasAgy bool
	agySettings                                                                                                            string

	chain     []string
	modelIdx  map[string]int
	modelTier map[string]int

	mu         sync.Mutex
	failed     map[string]bool
	slugCache  map[string]string
	runInfo    map[string]*runInfo
	agyNoModel map[string]bool
	noCheck    map[string]int
	events     []string

	results      chan attemptResult
	autoLiftDone chan int

	// main goroutine only
	autoLiftRunning bool
	nextAutoLiftAt  int
	pending      [][]string
	running      []int
	jobs         map[string]int
	fnTier       map[string]int
	fnOwed       map[string][]string
	inflightAddr map[string]bool
	inflightCpp  map[string]int
	seen         map[string]bool
	funcCpp      map[string]string
	funcSize     map[string]int
	fnStart      map[string]time.Time
	candidates   []candidate
	refreshAt    int
	launched     int
	finished     int
	lifted       int
	deferred     int
	sessionStart time.Time

	dash *dashboard
}

type runInfo struct {
	tag, backend, log string
	started           time.Time
}

type attemptResult struct {
	addr string
	idx  int
	res  string // lifted | failed | limited | unavailable
	win  string
}

type candidate struct {
	addr string
	size int
	cpp  string
}

func (l *lifter) bin(name string) string { return filepath.Join(l.root, ".local", "bin", name) }

func (l *lifter) liftwork(args ...string) bool {
	return exec.Command(l.bin("liftwork"), args...).Run() == nil
}

func (l *lifter) isLifted(addr string) bool { return l.liftwork("is-lifted", addr) }

func (l *lifter) emit(format string, a ...any) {
	line := time.Now().Format("15:04:05") + " " + fmt.Sprintf(format, a...)
	l.mu.Lock()
	l.events = append(l.events, line)
	l.mu.Unlock()
	if f, err := os.OpenFile(l.cfg.EventsLog, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintln(f, line)
		f.Close()
	}
}

func (l *lifter) loadAttempts() {
	l.failed = map[string]bool{}
	if l.cfg.IgnoreAttempts {
		return
	}
	f, err := os.Open(l.cfg.AttemptsFile)
	if err != nil {
		return
	}
	defer f.Close()
	sc := bufio.NewScanner(f)
	for sc.Scan() {
		if a, t, ok := strings.Cut(sc.Text(), "\t"); ok && a != "" && t != "" {
			l.failed[a+"\t"+t] = true
		}
	}
}

func (l *lifter) alreadyFailed(addr, tag string) bool {
	if l.cfg.IgnoreAttempts {
		return false
	}
	l.mu.Lock()
	defer l.mu.Unlock()
	return l.failed[addr+"\t"+tag]
}

func (l *lifter) recordFailure(addr, tag string) {
	l.mu.Lock()
	l.failed[addr+"\t"+tag] = true
	l.mu.Unlock()
	if f, err := os.OpenFile(l.cfg.AttemptsFile, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintf(f, "%s\t%s\n", addr, tag)
		f.Close()
	}
}

func (l *lifter) agyLacks(model string) bool {
	l.mu.Lock()
	defer l.mu.Unlock()
	return l.agyNoModel[model]
}

const maxNoCheckRuns = 3

func liftCheckRuns(root, addr string) int {
	va := strings.ToUpper(strings.TrimPrefix(addr, "0x"))
	b, err := os.ReadFile(filepath.Join(root, ".local", "lift_checks", va+".log"))
	if err != nil {
		return 0
	}
	return strings.Count(string(b), "\n")
}

func (l *lifter) logResult(addr string, size int, outcome, model string, start time.Time) {
	if f, err := os.OpenFile(l.cfg.ResultsLog, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintf(f, "%s\t%s\t%dB\t%s\t%s\t%ds\n", time.Now().Format("2006-01-02 15:04:05"), addr, size, outcome, model,
			int(time.Since(start).Seconds()))
		f.Close()
	}
}

func (l *lifter) effortEligible(addr, model, effort string) bool {
	return !l.alreadyFailed(addr, model+"@"+effort)
}

func (l *lifter) stageCap(idx int) int {
	spec := l.chain[idx]
	cap, ok := l.cfg.ModelCaps[spec]
	if !ok {
		cap, ok = l.cfg.ModelCaps[baseModel(spec)]
	}
	if l.modelTier[spec] == 0 && !ok {
		return l.cfg.WaveSize
	}
	if !ok {
		cap = l.cfg.EscCap
	}
	if cap < 1 {
		cap = 1
	}
	return cap
}

func (l *lifter) attemptWorker(addr string, idx, size int, fnStart time.Time) attemptResult {
	spec := l.chain[idx]
	model := baseModel(spec)
	res := attemptResult{addr: addr, idx: idx, res: "failed"}

	extra := size / 2
	if extra > l.cfg.AgentTimeout*2 {
		extra = l.cfg.AgentTimeout * 2
	}
	timeout := time.Duration(l.cfg.AgentTimeout+extra) * time.Second

	for _, effort := range l.cfg.Efforts {
		if !l.effortEligible(addr, model, effort) {
			continue
		}
		tag := model + "@" + effort
		for {
			backend := l.resolveBackend(spec)
			if backend == "" {
				l.emit("[!] %s: %s (%s) unavailable / cooling down on all allowed backends", addr, spec, effort)
				res.res = "unavailable"
				return res
			}
			l.emit("[>] %s (%dB): step %d/%d %s via %s", addr, size, idx+1, len(l.chain), tag, backend)
			lf, err := os.CreateTemp("", "endorphin_lift_"+model+"_"+effort+"_"+addr+".*.log")
			if err != nil {
				l.emit("[!] %s: cannot create log file: %v", addr, err)
				res.res = "unavailable"
				return res
			}
			logPath := lf.Name()
			lf.Close()
			l.mu.Lock()
			l.runInfo[addr] = &runInfo{tag: tag, backend: backend, log: logPath, started: time.Now()}
			l.mu.Unlock()
			checksBefore := liftCheckRuns(l.root, addr)
			rc, rl := l.runAgent(model, effort, backend, addr, logPath, timeout)
			startErr := startFailedMsg(logPath)
			os.Remove(logPath)
			checked := liftCheckRuns(l.root, addr) > checksBefore

			pool := poolOf(backend, model)
			if l.isLifted(addr) {
				if rc != rcRateLimited {
					l.pools.healthy(pool)
				}
				l.emit("[+] LIFTED %s via %s (%s) in %s", addr, tag, backend, fmtDur(int64(time.Since(fnStart).Seconds())))
				res.res, res.win = "lifted", tag
				return res
			}
			l.liftwork("clean", addr)
			l.emit("[-] Unlifted %s on %s (%s)", addr, tag, backend)
			if !checked && rc == rcInvalidModel && backend == "agy" {
				l.mu.Lock()
				l.agyNoModel[model] = true
				l.mu.Unlock()
				l.emit("[!] agy rejected model %s as unknown; no longer routing it via agy this session", model)
				if nb := l.resolveBackend(spec); nb != "" && nb != backend {
					l.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
					continue
				}
				res.res = "unavailable"
				return res
			}
			if !checked && rc != rcRateLimited {
				if startErr != "" {
					l.emit("[!] %s: %s (%s) %s", addr, tag, backend, startErr)
				}
				l.mu.Lock()
				l.noCheck[addr+"\t"+tag]++
				n := l.noCheck[addr+"\t"+tag]
				l.mu.Unlock()
				if n < maxNoCheckRuns {
					l.emit("[!] %s: %s (%s) exited without running liftwork check (%d/%d); not counted as a failure",
						addr, tag, backend, n, maxNoCheckRuns)
					l.pools.markLimited(pool, "soft", 0)
					if nb := l.resolveBackend(spec); nb != "" && nb != backend {
						l.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
						continue
					}
					res.res = "unavailable"
					return res
				}
				l.emit("[!] %s: %s exited without running liftwork check %d times; recording as failed", addr, tag, n)
			}
			if rc != rcRateLimited {
				l.pools.healthy(pool)
			}
			if rc == rcRateLimited {
				l.pools.markLimited(pool, rl.kind, rl.reset)
				if nb := l.resolveBackend(spec); nb != "" && nb != backend {
					l.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
					continue
				}
				res.res = "limited"
				return res
			}
			l.recordFailure(addr, tag)
			break
		}
	}
	return res
}

func startFailedMsg(logPath string) string {
	b, err := os.ReadFile(logPath)
	if err != nil {
		return ""
	}
	for _, l := range strings.Split(string(b), "\n") {
		if strings.HasPrefix(l, "lift: start failed:") {
			return strings.TrimSpace(l)
		}
	}
	return ""
}

func (l *lifter) refreshCandidates() {
	args := []string{"next", "--scope", l.cfg.Scope, "--limit", "500", "--addrs-only", "--max-size", strconv.Itoa(l.cfg.MaxSize)}
	if l.cfg.DepsFirst {
		args = append(args, "--deps-first")
	}
	if l.cfg.IncludeCpp {
		args = append(args, "--include-cpp")
	}
	out, _ := exec.Command(l.bin("liftwork"), args...).Output()
	l.candidates = l.candidates[:0]
	for _, line := range strings.Split(string(out), "\n") {
		f := strings.Split(strings.TrimSpace(line), "|")
		if len(f) < 3 || f[0] == "" {
			continue
		}
		n, _ := strconv.Atoi(f[1])
		l.candidates = append(l.candidates, candidate{f[0], n, f[2]})
	}
	l.refreshAt = l.finished + l.cfg.WaveSize
}

func (l *lifter) pickNext() (candidate, bool) {
	if l.finished >= l.refreshAt {
		l.refreshCandidates()
	}
	for pass := 1; pass <= 2; pass++ {
		for _, c := range l.candidates {
			if l.seen[c.addr] || l.inflightAddr[c.addr] || l.inflightCpp[c.cpp] >= l.cfg.PerFileCap {
				continue
			}
			return c, true
		}
		if pass == 1 {
			l.refreshCandidates()
		}
	}
	return candidate{}, false
}

func (l *lifter) owedModels(addr string, t int) []string {
	size := l.funcSize[addr]
	var out []string
	for _, spec := range l.cfg.Tiers[t] {
		if !l.installed(spec) {
			continue
		}
		minSz, ok := l.cfg.ModelMinSize[spec]
		if !ok {
			minSz = l.cfg.ModelMinSize[baseModel(spec)]
		}
		if size < minSz {
			continue
		}
		for _, e := range l.cfg.Efforts {
			if l.effortEligible(addr, baseModel(spec), e) {
				out = append(out, spec)
				break
			}
		}
	}
	return out
}

func (l *lifter) totalPending() int {
	n := 0
	for _, p := range l.pending {
		n += len(p)
	}
	return n
}

func (l *lifter) tierLoad(t int) int {
	n := len(l.pending[t])
	for _, m := range l.cfg.Tiers[t] {
		n += l.running[l.modelIdx[m]]
	}
	return n
}

func (l *lifter) escalationBacklog() int {
	n := 0
	for t := 1; t < len(l.cfg.Tiers); t++ {
		n += l.tierLoad(t)
	}
	return n
}

func (l *lifter) tierUsableNow(owed []string) bool {
	for _, m := range owed {
		if l.resolveBackend(m) != "" {
			return true
		}
	}
	return false
}

func (l *lifter) nextUsableTier(addr string, startTier int) (int, []string, bool) {
	for t := startTier; t < len(l.cfg.Tiers); t++ {
		if owed := l.owedModels(addr, t); len(owed) > 0 && l.tierUsableNow(owed) {
			return t, owed, true
		}
	}
	return 0, nil, false
}

func (l *lifter) advance(addr string, t int) {
	if t2, owed, ok := l.nextUsableTier(addr, t); ok {
		l.fnTier[addr], l.fnOwed[addr] = t2, owed
		l.pending[t2] = append(l.pending[t2], addr)
		if t2 > t {
			l.emit("[~] %s: tier %d..%d cooling down/unavailable -> tier %d (%s)", addr, t, t2-1, t2, strings.Join(owed, " "))
		} else {
			l.emit("[~] %s: tier %d owes attempts from: %s", addr, t2, strings.Join(owed, " "))
		}
		return
	}
	for t2 := 0; t2 < len(l.cfg.Tiers); t2++ {
		if owed := l.owedModels(addr, t2); len(owed) > 0 {
			l.fnTier[addr], l.fnOwed[addr] = t2, owed
			l.pending[t2] = append(l.pending[t2], addr)
			l.emit("[~] %s: tier %d owes attempts from: %s (waiting for pool)", addr, t2, strings.Join(owed, " "))
			return
		}
	}
	l.emit("[x] Deferring %s: unlifted after all eligible models", addr)
	_ = exec.Command(l.bin("liftwork"), "skip", addr, "Unlifted after escalation through all eligible models").Run()
	l.finish(addr, "deferred", "all-eligible-models")
}

func (l *lifter) dispatch() {
	for t := range l.pending {
		var keep []string
		for _, addr := range l.pending[t] {
			if !l.tierUsableNow(l.fnOwed[addr]) {
				if t2, owed, ok := l.nextUsableTier(addr, t+1); ok {
					l.fnTier[addr], l.fnOwed[addr] = t2, owed
					l.pending[t2] = append(l.pending[t2], addr)
					l.emit("[~] %s: tier %d unavailable/cooling down -> tier %d (%s)", addr, t, t2, strings.Join(owed, " "))
					continue
				}
				keep = append(keep, addr)
				continue
			}
			best, bestScore := -1, 0
			for _, m := range l.fnOwed[addr] {
				idx := l.modelIdx[m]
				cap := l.stageCap(idx)
				if l.running[idx] >= cap || l.resolveBackend(m) == "" {
					continue
				}
				if score := l.running[idx] * 1000 / cap; best < 0 || score < bestScore {
					best, bestScore = idx, score
				}
			}
			if best < 0 {
				keep = append(keep, addr)
				continue
			}
			l.jobs[addr] = best
			l.running[best]++
			size, start := l.funcSize[addr], l.fnStart[addr]
			go func(addr string, idx int) { l.results <- l.attemptWorker(addr, idx, size, start) }(addr, best)
		}
		l.pending[t] = keep
	}
}

func (l *lifter) reap(r attemptResult) {
	delete(l.jobs, r.addr)
	l.running[r.idx]--
	l.mu.Lock()
	delete(l.runInfo, r.addr)
	l.mu.Unlock()
	l.dash.forget(r.addr)
	spec := l.chain[r.idx]

	switch r.res {
	case "lifted":
		win := r.win
		if win == "" {
			win = baseModel(spec)
		}
		l.finish(r.addr, "lifted", win)
	case "limited", "unavailable":
		l.emit("[~] %s: %s %s; still owed, waiting", r.addr, spec, r.res)
		l.pending[l.fnTier[r.addr]] = append(l.pending[l.fnTier[r.addr]], r.addr)
	default:
		l.mu.Lock()
		for _, e := range l.cfg.Efforts {
			l.failed[r.addr+"\t"+baseModel(spec)+"@"+e] = true
		}
		l.mu.Unlock()
		var rest []string
		for _, m := range l.fnOwed[r.addr] {
			if m != spec && baseModel(m) != baseModel(spec) {
				rest = append(rest, m)
			}
		}
		l.fnOwed[r.addr] = rest
		if len(rest) > 0 {
			l.pending[l.fnTier[r.addr]] = append(l.pending[l.fnTier[r.addr]], r.addr)
		} else {
			l.advance(r.addr, l.fnTier[r.addr]+1)
		}
	}
}

func (l *lifter) finish(addr, outcome, model string) {
	delete(l.inflightAddr, addr)
	if cpp := l.funcCpp[addr]; l.inflightCpp[cpp] > 1 {
		l.inflightCpp[cpp]--
	} else {
		delete(l.inflightCpp, cpp)
	}
	l.finished++
	if outcome == "lifted" {
		l.lifted++
	} else {
		l.deferred++
	}
	l.logResult(addr, l.funcSize[addr], outcome, model, l.fnStart[addr])
	if outcome == "lifted" {
		l.liftwork("commit-pending", addr)
	}
	l.emit("[done] %s (%s via %s) finished=%d/%d lifted=%d deferred=%d", addr, outcome, model, l.finished,
		l.cfg.MaxWaves*l.cfg.WaveSize, l.lifted, l.deferred)
	if pe := l.cfg.PushEvery * l.cfg.WaveSize; pe > 0 && l.finished%pe == 0 {
		l.push()
	}
	l.maybeStartAutoLift()
}

func (l *lifter) maybeStartAutoLift() {
	if l.cfg.AutoLiftEvery <= 0 || l.autoLiftRunning {
		return
	}
	if l.nextAutoLiftAt == 0 {
		l.nextAutoLiftAt = l.cfg.AutoLiftEvery
	}
	if l.finished < l.nextAutoLiftAt {
		return
	}
	l.autoLiftRunning = true
	l.nextAutoLiftAt = l.finished + l.cfg.AutoLiftEvery
	l.emit("[*] Launching periodic auto-lift pass (scope=%s)...", l.cfg.Scope)
	go func() {
		out, _ := exec.Command(l.bin("liftwork"), "auto-lift", "--no-patterns", "--scope", l.cfg.Scope).CombinedOutput()
		n := 0
		for _, line := range strings.Split(string(out), "\n") {
			if strings.HasPrefix(line, "auto-lift: lifted ") {
				_, _ = fmt.Sscanf(line, "auto-lift: lifted %d", &n)
			}
		}
		l.autoLiftDone <- n
	}()
}

func (l *lifter) autoLiftFinished(n int) {
	l.autoLiftRunning = false
	if n == 0 {
		l.emit("[*] auto-lift: nothing new")
		return
	}
	solved := 0
	for t := range l.pending {
		var keep []string
		for _, addr := range l.pending[t] {
			if l.isLifted(addr) {
				solved++
				l.finish(addr, "lifted", "auto_lift")
			} else {
				keep = append(keep, addr)
			}
		}
		l.pending[t] = keep
	}
	l.emit("[+] auto-lift: %d functions lifted (%d queued functions cleared)", n, solved)
	l.refreshAt = 0
}

func (l *lifter) push() {
	l.emit("[*] Pushing lifted progress to remote")
	if exec.Command("git", "push").Run() == nil {
		l.emit("[*] Push ok")
	} else {
		l.emit("[!] Push failed")
	}
}

func (l *lifter) run() {
	total := l.cfg.MaxWaves * l.cfg.WaveSize
	backlogMax := l.cfg.EscBacklogFactor * l.cfg.WaveSize
	exhausted := false
	tick := time.NewTicker(time.Second)
	defer tick.Stop()
	l.sessionStart = time.Now()
	for {
		for l.launched < total && !exhausted && l.tierLoad(0) < l.cfg.WaveSize && l.escalationBacklog() < backlogMax {
			c, ok := l.pickNext()
			if !ok {
				if len(l.jobs) == 0 && l.totalPending() == 0 {
					l.emit("[!] No unlifted functions remaining in scope=%s; stopping cleanly", l.cfg.Scope)
					exhausted = true
				}
				break
			}
			l.seen[c.addr], l.inflightAddr[c.addr] = true, true
			l.inflightCpp[c.cpp]++
			l.funcCpp[c.addr], l.funcSize[c.addr], l.fnStart[c.addr] = c.cpp, c.size, time.Now()
			l.launched++
			l.emit("[pull] #%d/%d %s (%dB) -> %s", l.launched, total, c.addr, c.size, c.cpp)
			l.advance(c.addr, 0)
		}

		l.dispatch()
		if len(l.jobs) == 0 && l.totalPending() == 0 {
			break
		}

		l.dash.render(l)
	wait:
		for {
			select {
			case n := <-l.autoLiftDone:
				l.autoLiftFinished(n)
				break wait
			case r := <-l.results:
				l.reap(r)
				for drained := false; !drained; {
					select {
					case r := <-l.results:
						l.reap(r)
					default:
						drained = true
					}
				}
				break wait
			case <-tick.C:
				l.dash.render(l)
				if len(l.jobs) == 0 {
					break wait
				}
			}
		}
	}
}
