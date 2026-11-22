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

	"endorphin_decomp/internal/worklock"
)

// grind holds the whole session. Scheduler state (the "main goroutine only" block) is touched only by run();
// attempt goroutines talk to it through g.results and the mutex-guarded fields.
type grind struct {
	cfg   *config
	root  string
	pools *pools
	procs *procs

	hasClaude, hasClaudeEffort, hasAgy bool
	agySettings                        string

	chain     []string       // flat model list, tier order
	modelIdx  map[string]int // spec -> index in chain
	modelTier map[string]int // spec -> tier

	routeRules []routeRule

	mu         sync.Mutex // guards the fields below
	failed     map[string]bool
	slugCache  map[string]string
	runInfo    map[string]*runInfo
	agyNoModel map[string]bool // base models agy rejected as unknown: never route them to agy again this session
	noCheck    map[string]int  // addr\ttag -> runs that ended without a single `work check` (not real attempts)
	events     []string

	results chan attemptResult

	// main goroutine only
	pending      [][]string
	running      []int
	jobs         map[string]int // addr -> model index of its running attempt
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
	matched      int
	deferred     int
	sessionStart time.Time

	autoSolveRunning bool
	autoSolveDone    chan int
	autoSolveAt      int

	dash *dashboard
}

type runInfo struct {
	tag, backend, log string
	started           time.Time
}

type attemptResult struct {
	addr string
	idx  int
	res  string // matched | failed | limited | unavailable
	win  string // model@effort on a match
}

type candidate struct {
	addr string
	size int
	cpp  string
}

type routeRule struct {
	model  string
	lo, hi int
	skip   bool
}

func (g *grind) bin(name string) string { return filepath.Join(g.root, ".local", "bin", name) }

// work runs a `work` subcommand, discarding its output, and reports success.
func (g *grind) work(args ...string) bool {
	return exec.Command(g.bin("work"), args...).Run() == nil
}

func (g *grind) isMatched(addr string) bool { return g.work("is-matched", addr) }

func (g *grind) emit(format string, a ...any) {
	line := time.Now().Format("15:04:05") + " " + fmt.Sprintf(format, a...)
	g.mu.Lock()
	g.events = append(g.events, line)
	g.mu.Unlock()
	if f, err := os.OpenFile(g.cfg.EventsLog, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintln(f, line)
		f.Close()
	}
}

// ---- Attempt history -----------------------------------------------------------------------------------

func (g *grind) loadAttempts() {
	g.failed = map[string]bool{}
	if g.cfg.IgnoreAttempts {
		return
	}
	f, err := os.Open(g.cfg.AttemptsFile)
	if err != nil {
		return
	}
	defer f.Close()
	sc := bufio.NewScanner(f)
	for sc.Scan() {
		if a, t, ok := strings.Cut(sc.Text(), "\t"); ok && a != "" && t != "" {
			g.failed[a+"\t"+t] = true
		}
	}
}

func (g *grind) alreadyFailed(addr, tag string) bool {
	if g.cfg.IgnoreAttempts {
		return false
	}
	g.mu.Lock()
	defer g.mu.Unlock()
	return g.failed[addr+"\t"+tag]
}

func (g *grind) recordFailure(addr, tag string) {
	g.mu.Lock()
	g.failed[addr+"\t"+tag] = true
	g.mu.Unlock()
	if f, err := os.OpenFile(g.cfg.AttemptsFile, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintf(f, "%s\t%s\n", addr, tag)
		f.Close()
	}
}

func (g *grind) agyLacks(model string) bool {
	g.mu.Lock()
	defer g.mu.Unlock()
	return g.agyNoModel[model]
}

// maxNoCheckRuns caps how often one model+effort may die before its first `work check` on one function before
// the run counts as a real failure anyway (so a model that never gets around to checking cannot loop forever).
const maxNoCheckRuns = 3

// checkRuns counts the `work check` invocations recorded for addr (see recordCheckRun in tools/work/diag.go).
func checkRuns(root, addr string) int {
	va := strings.ToUpper(strings.TrimPrefix(addr, "0x"))
	b, err := os.ReadFile(filepath.Join(root, ".local", "checks", va+".log"))
	if err != nil {
		return 0
	}
	return strings.Count(string(b), "\n")
}

func (g *grind) logResult(addr string, size int, outcome, model string, start time.Time) {
	if f, err := os.OpenFile(g.cfg.ResultsLog, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintf(f, "%s\t%s\t%dB\t%s\t%s\t%ds\n", time.Now().Format("2006-01-02 15:04:05"), addr, size, outcome, model,
			int(time.Since(start).Seconds()))
		f.Close()
	}
}

// ---- Adaptive chain ------------------------------------------------------------------------------------

// loadRouteRules reads `work route --machine`: "<model@effort> <lo> <hi> skip|keep" per size band.
func (g *grind) loadRouteRules() {
	if !g.cfg.AdaptiveChain {
		return
	}
	out, _ := exec.Command(g.bin("work"), "route", "--machine", "--min-trials", g.cfg.RouteMinTrials,
		"--min-yield", g.cfg.RouteMinYield).Output()
	for _, l := range strings.Split(string(out), "\n") {
		f := strings.Fields(l)
		if len(f) != 4 {
			continue
		}
		lo, e1 := strconv.Atoi(f[1])
		hi, e2 := strconv.Atoi(f[2])
		if e1 == nil && e2 == nil {
			g.routeRules = append(g.routeRules, routeRule{f[0], lo, hi, f[3] == "skip"})
		}
	}
	if g.cfg.Verbose {
		fmt.Printf("Adaptive chain: ON (skip stage if measured yield < %s over >= %s trials; ADAPTIVE_CHAIN=0 disables)\n",
			g.cfg.RouteMinYield, g.cfg.RouteMinTrials)
		human, _ := exec.Command(g.bin("work"), "route", "--min-trials", g.cfg.RouteMinTrials, "--min-yield", g.cfg.RouteMinYield).Output()
		for _, l := range strings.Split(strings.TrimRight(string(human), "\n"), "\n") {
			fmt.Println("  " + l)
		}
	}
}

func (g *grind) lowYieldStage(tag string, size int) bool {
	for _, r := range g.routeRules {
		if r.model == tag && r.skip && size >= r.lo && size < r.hi {
			return true
		}
	}
	return false
}

// effortEligible: function addr (tier, size) still needs an attempt on base model at effort.
func (g *grind) effortEligible(addr string, tier, size int, model, effort string) bool {
	tag := model + "@" + effort
	if tier > 0 && g.lowYieldStage(tag, size) {
		return false
	}
	return !g.alreadyFailed(addr, tag)
}

func (g *grind) stageCap(idx int) int {
	spec := g.chain[idx]
	cap, ok := g.cfg.ModelCaps[spec]
	if !ok {
		cap, ok = g.cfg.ModelCaps[baseModel(spec)]
	}
	if g.modelTier[spec] == 0 && !ok {
		return g.cfg.WaveSize
	}
	if !ok {
		cap = g.cfg.EscCap
	}
	if cap < 1 {
		cap = 1
	}
	return cap
}

// ---- One model slot for one function -------------------------------------------------------------------

// attemptWorker runs the effort cadence (low -> medium) of one model on one function. "failed" means every
// eligible effort really ran and did not match (each recorded in the attempts file); "limited"/"unavailable"
// mean a quota pool stopped it, so the model stays owed and resumes at the unfinished effort later.
func (g *grind) attemptWorker(addr string, idx, size int, fnStart time.Time) attemptResult {
	spec := g.chain[idx]
	model, tier := baseModel(spec), g.modelTier[spec]
	res := attemptResult{addr: addr, idx: idx, res: "failed"}

	// Larger functions get more time per effort attempt: +1s per 2 bytes, capped at 3x the base timeout
	extra := size / 2
	if extra > g.cfg.AgentTimeout*2 {
		extra = g.cfg.AgentTimeout * 2
	}
	timeout := time.Duration(g.cfg.AgentTimeout+extra) * time.Second

efforts:
	for _, effort := range g.cfg.Efforts {
		if !g.effortEligible(addr, tier, size, model, effort) {
			continue
		}
		tag := model + "@" + effort
		for { // retry the same model+effort on an alternate backend if unpinned and the first one is rate-limited
			backend := g.resolveBackend(spec)
			if backend == "" {
				g.emit("[!] %s: %s (%s) unavailable / cooling down on all allowed backends", addr, spec, effort)
				res.res = "unavailable"
				return res
			}
			g.emit("[>] %s (%dB): step %d/%d %s via %s", addr, size, idx+1, len(g.chain), tag, backend)
			lf, err := os.CreateTemp("", "endorphin_"+model+"_"+effort+"_"+addr+".*.log")
			if err != nil {
				g.emit("[!] %s: cannot create log file: %v", addr, err)
				res.res = "unavailable"
				return res
			}
			logPath := lf.Name()
			lf.Close()
			g.mu.Lock()
			g.runInfo[addr] = &runInfo{tag: tag, backend: backend, log: logPath, started: time.Now()}
			g.mu.Unlock()
			checksBefore := checkRuns(g.root, addr)
			rc, rl := g.runAgent(model, effort, backend, addr, logPath, timeout)
			startErr := startFailedMsg(logPath)
			os.Remove(logPath)
			checked := checkRuns(g.root, addr) > checksBefore

			pool := poolOf(backend, model)
			if g.isMatched(addr) {
				if rc != rcRateLimited {
					g.pools.healthy(pool)
				}
				g.emit("[+] MATCHED %s via %s (%s) in %s", addr, tag, backend, fmtDur(int64(time.Since(fnStart).Seconds())))
				res.res, res.win = "matched", tag
				return res
			}
			g.emit("[-] Unmatched on %s (%s): %s", tag, backend, addr)
			g.work("clean", addr) // next effort / model gets a fresh stub, not this run's half-finished attempt
			if !checked && rc == rcInvalidModel && backend == "agy" {
				// agy does not have this model at all: stop routing it there, and do not blame the model
				g.mu.Lock()
				g.agyNoModel[model] = true
				g.mu.Unlock()
				g.emit("[!] agy rejected model %s as unknown; no longer routing it via agy this session", model)
				if nb := g.resolveBackend(spec); nb != "" && nb != backend {
					g.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
					continue
				}
				res.res = "unavailable"
				return res
			}
			if !checked && rc != rcRateLimited {
				if startErr != "" {
					g.emit("[!] %s: %s (%s) %s", addr, tag, backend, startErr)
				}
				// The agent never ran `work check`: it died before attempting (usage exhausted with an unrecognised
				// message, CLI crash, auth error...). Not a model failure; cool the pool down so the queue is not
				// burned through, and keep the model owed. After maxNoCheckRuns it counts as a real failure.
				g.mu.Lock()
				g.noCheck[addr+"\t"+tag]++
				n := g.noCheck[addr+"\t"+tag]
				g.mu.Unlock()
				if n < maxNoCheckRuns {
					g.emit("[!] %s: %s (%s) exited without running work check (%d/%d); not counted as a failure",
						addr, tag, backend, n, maxNoCheckRuns)
					g.pools.markLimited(pool, "soft", 0)
					if nb := g.resolveBackend(spec); nb != "" && nb != backend {
						g.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
						continue
					}
					res.res = "unavailable"
					return res
				}
				g.emit("[!] %s: %s exited without running work check %d times; recording as failed", addr, tag, n)
			}
			if rc != rcRateLimited {
				g.pools.healthy(pool)
			}
			if rc == rcRateLimited {
				g.pools.markLimited(pool, rl.kind, rl.reset)
				if nb := g.resolveBackend(spec); nb != "" && nb != backend {
					g.emit("[*] %s: switching %s to alternate backend (%s)", addr, tag, nb)
					continue
				}
				res.res = "limited" // not a failure: not recorded, not counted against the model
				return res
			}
			g.recordFailure(addr, tag)
			if effort == "low" && g.cfg.SkipMedBelowPct != 0 {
				if b := diagBestPct(g.root, addr); b > 0 && b < g.cfg.SkipMedBelowPct {
					g.emit("[~] %s: skipping medium on %s (best match %.1f%% < %g%%)", addr, model, b, g.cfg.SkipMedBelowPct)
					break efforts
				}
			}
			break
		}
	}
	return res
}

// startFailedMsg returns any "grind: start failed: ..." line recorded by runTracked.
func startFailedMsg(logPath string) string {
	b, err := os.ReadFile(logPath)
	if err != nil {
		return ""
	}
	for _, l := range strings.Split(string(b), "\n") {
		if strings.HasPrefix(l, "grind: start failed:") {
			return strings.TrimSpace(l)
		}
	}
	return ""
}

// diagBestPct returns the best match % recorded in .local/diag/<VA>.tsv (0 if none).
func diagBestPct(root, addr string) float64 {
	va := strings.ToUpper(strings.TrimPrefix(addr, "0x"))
	b, err := os.ReadFile(filepath.Join(root, ".local", "diag", va+".tsv"))
	if err != nil {
		return 0
	}
	max := 0.0
	for _, l := range strings.Split(string(b), "\n") {
		f := strings.Split(l, "\t")
		if len(f) >= 2 {
			if v, err := strconv.ParseFloat(strings.TrimSpace(f[1]), 64); err == nil && v > max {
				max = v
			}
		}
	}
	return max
}

// ---- Queue -----------------------------------------------------------------------------------------------

func (g *grind) refreshCandidates() {
	args := []string{"next", "-n", "500", "--peek", "--addrs-only", "--max-size", strconv.Itoa(g.cfg.MaxSize)}
	if g.cfg.DepsFirst {
		args = append(args, "--deps-first")
	}
	if g.cfg.RetryDeferred {
		args = append(args, "--retry-deferred")
	}
	if g.cfg.RetrySkipped {
		args = append(args, "--retry-skipped")
	}
	out, _ := exec.Command(g.bin("work"), args...).Output()
	g.candidates = g.candidates[:0]
	for _, l := range strings.Split(string(out), "\n") {
		f := strings.Split(strings.TrimSpace(l), "|")
		if len(f) < 3 || f[0] == "" {
			continue
		}
		n, _ := strconv.Atoi(f[1])
		g.candidates = append(g.candidates, candidate{f[0], n, f[2]})
	}
	g.refreshAt = g.finished + g.cfg.WaveSize
}

// pickNext returns the first cached candidate not already pulled or in flight (by address or shard cap).
func (g *grind) pickNext() (candidate, bool) {
	if g.finished >= g.refreshAt {
		g.refreshCandidates()
	}
	for pass := 1; pass <= 2; pass++ {
		for _, c := range g.candidates {
			if g.seen[c.addr] || g.inflightAddr[c.addr] || g.inflightCpp[c.cpp] >= g.cfg.PerFileCap {
				continue
			}
			return c, true
		}
		if pass == 1 {
			g.refreshCandidates()
		}
	}
	return candidate{}, false
}

// owedModels: models in tier t that still have an eligible effort for addr (availability is dispatch's job).
func (g *grind) owedModels(addr string, t int) []string {
	size := g.funcSize[addr]
	var out []string
	for _, spec := range g.cfg.Tiers[t] {
		if !g.installed(spec) {
			continue
		}
		min, ok := g.cfg.ModelMinSize[spec]
		if !ok {
			min = g.cfg.ModelMinSize[baseModel(spec)]
		}
		if size < min {
			continue
		}
		for _, e := range g.cfg.Efforts {
			if g.effortEligible(addr, t, size, baseModel(spec), e) {
				out = append(out, spec)
				break
			}
		}
	}
	return out
}

func (g *grind) totalPending() int {
	n := 0
	for _, p := range g.pending {
		n += len(p)
	}
	return n
}

func (g *grind) tierLoad(t int) int {
	n := len(g.pending[t])
	for _, m := range g.cfg.Tiers[t] {
		n += g.running[g.modelIdx[m]]
	}
	return n
}

func (g *grind) escalationBacklog() int {
	n := 0
	for t := 1; t < len(g.cfg.Tiers); t++ {
		n += g.tierLoad(t)
	}
	return n
}

func (g *grind) tierUsableNow(owed []string) bool {
	for _, m := range owed {
		if g.resolveBackend(m) != "" {
			return true
		}
	}
	return false
}

// nextUsableTier returns the first tier >= startTier that owes addr an attempt and has a usable backend now.
func (g *grind) nextUsableTier(addr string, startTier int) (int, []string, bool) {
	for t := startTier; t < len(g.cfg.Tiers); t++ {
		if owed := g.owedModels(addr, t); len(owed) > 0 && g.tierUsableNow(owed) {
			return t, owed, true
		}
	}
	return 0, nil, false
}

// advance puts addr into the first tier >= t that still owes it an attempt and is usable now. If no tier >= t
// is usable now (e.g. lower-tier claude harnesses are rate-limited), it skips to a usable higher tier (agy/gemini)
// rather than stalling; if any owed tier exists (e.g. all pools cooling down, or an earlier tier was skipped),
// addr waits instead of being deferred.
func (g *grind) advance(addr string, t int) {
	if t2, owed, ok := g.nextUsableTier(addr, t); ok {
		g.fnTier[addr], g.fnOwed[addr] = t2, owed
		g.pending[t2] = append(g.pending[t2], addr)
		if t2 > t {
			g.emit("[~] %s: tier %d..%d cooling down/unavailable -> tier %d (%s)", addr, t, t2-1, t2, strings.Join(owed, " "))
		} else {
			g.emit("[~] %s: tier %d owes attempts from: %s", addr, t2, strings.Join(owed, " "))
		}
		return
	}
	for t2 := 0; t2 < len(g.cfg.Tiers); t2++ {
		if owed := g.owedModels(addr, t2); len(owed) > 0 {
			g.fnTier[addr], g.fnOwed[addr] = t2, owed
			g.pending[t2] = append(g.pending[t2], addr)
			g.emit("[~] %s: tier %d owes attempts from: %s (waiting for pool)", addr, t2, strings.Join(owed, " "))
			return
		}
	}
	g.emit("[x] Deferring %s: unmatched after all eligible models", addr)
	_ = exec.Command(g.bin("work"), "skip", addr, "Unmatched after escalation through all eligible models in the chain").Run()
	g.finish(addr, "deferred", "all-eligible-models")
}

// dispatch launches waiting functions on owed models with a free slot and a usable pool, least loaded first.
// If every owed model in tier t is currently cooling down/unavailable, addr moves up to the next usable tier.
func (g *grind) dispatch() {
	for t := range g.pending {
		var keep []string
		for _, addr := range g.pending[t] {
			if !g.tierUsableNow(g.fnOwed[addr]) {
				if t2, owed, ok := g.nextUsableTier(addr, t+1); ok {
					g.fnTier[addr], g.fnOwed[addr] = t2, owed
					g.pending[t2] = append(g.pending[t2], addr)
					g.emit("[~] %s: tier %d unavailable/cooling down -> tier %d (%s)", addr, t, t2, strings.Join(owed, " "))
					continue
				}
				keep = append(keep, addr)
				continue
			}
			best, bestScore := -1, 0
			for _, m := range g.fnOwed[addr] {
				idx := g.modelIdx[m]
				cap := g.stageCap(idx)
				if g.running[idx] >= cap || g.resolveBackend(m) == "" {
					continue
				}
				if score := g.running[idx] * 1000 / cap; best < 0 || score < bestScore {
					best, bestScore = idx, score
				}
			}
			if best < 0 {
				keep = append(keep, addr)
				continue
			}
			g.jobs[addr] = best
			g.running[best]++
			size, start := g.funcSize[addr], g.fnStart[addr]
			go func(addr string, idx int) { g.results <- g.attemptWorker(addr, idx, size, start) }(addr, best)
		}
		g.pending[t] = keep
	}
}

func (g *grind) reap(r attemptResult) {
	delete(g.jobs, r.addr)
	g.running[r.idx]--
	g.mu.Lock()
	delete(g.runInfo, r.addr)
	g.mu.Unlock()
	g.dash.forget(r.addr)
	spec := g.chain[r.idx]
	switch r.res {
	case "matched":
		win := r.win
		if win == "" {
			win = baseModel(spec)
		}
		g.finish(r.addr, "matched", win)
	case "limited", "unavailable":
		// Quota stopped the run, not the model: it stays owed and the function waits for the pool to reset
		g.emit("[~] %s: %s %s; still owed, waiting", r.addr, spec, r.res)
		g.pending[g.fnTier[r.addr]] = append(g.pending[g.fnTier[r.addr]], r.addr)
	default:
		g.mu.Lock()
		for _, e := range g.cfg.Efforts {
			g.failed[r.addr+"\t"+baseModel(spec)+"@"+e] = true
		}
		g.mu.Unlock()
		var rest []string
		for _, m := range g.fnOwed[r.addr] {
			if m != spec && baseModel(m) != baseModel(spec) {
				rest = append(rest, m)
			}
		}
		g.fnOwed[r.addr] = rest
		if len(rest) > 0 {
			g.pending[g.fnTier[r.addr]] = append(g.pending[g.fnTier[r.addr]], r.addr)
		} else {
			g.advance(r.addr, g.fnTier[r.addr]+1)
		}
	}
}

// finish records a function leaving the pipeline (matched or deferred) and pushes every PushEvery*WaveSize.
func (g *grind) finish(addr, outcome, model string) {
	delete(g.inflightAddr, addr)
	if cpp := g.funcCpp[addr]; g.inflightCpp[cpp] > 1 {
		g.inflightCpp[cpp]--
	} else {
		delete(g.inflightCpp, cpp)
	}
	g.finished++
	if outcome == "matched" {
		g.matched++
	} else {
		g.deferred++
	}
	g.logResult(addr, g.funcSize[addr], outcome, model, g.fnStart[addr])
	g.work("commit-pending")
	g.emit("[done] %s (%s via %s) finished=%d/%d matched=%d deferred=%d", addr, outcome, model, g.finished,
		g.cfg.MaxWaves*g.cfg.WaveSize, g.matched, g.deferred)
	g.maybeAutoSolve()
	if pe := g.cfg.PushEvery * g.cfg.WaveSize; pe > 0 && g.finished%pe == 0 {
		g.push()
	}
}

// ---- Periodic auto_solve -------------------------------------------------------------------------------

// maybeAutoSolve re-runs auto_solve in the background every AUTO_SOLVE_EVERY finished functions: every new match
// is a template it can clone onto identical-shape functions. It is lock-safe and never touches a claimed function.
func (g *grind) maybeAutoSolve() {
	if !g.cfg.RunAutoSolve || g.cfg.AutoSolveEvery <= 0 || g.autoSolveRunning || g.finished < g.autoSolveAt {
		return
	}
	g.autoSolveRunning = true
	g.autoSolveAt = g.finished + g.cfg.AutoSolveEvery
	g.emit("[*] auto_solve: cloning recent matches onto identical-shape functions")
	go func() {
		out, _ := exec.Command(g.bin("auto_solve")).CombinedOutput()
		n := 0
		for _, l := range strings.Split(string(out), "\n") {
			if strings.HasPrefix(l, "Ledger units updated") {
				if _, v, ok := strings.Cut(l, ":"); ok {
					n, _ = strconv.Atoi(strings.TrimSpace(v))
				}
			}
		}
		_ = os.WriteFile(filepath.Join(g.root, ".local", "auto_solve.log"), out, 0o644)
		if n > 0 {
			g.verifyAutoSolved()
		}
		g.autoSolveDone <- n
	}()
}

// autoSolveFinished commits what auto_solve solved, drops queued functions it solved, and refreshes the queue.
func (g *grind) autoSolveFinished(n int) {
	g.autoSolveRunning = false
	if n == 0 {
		g.emit("[*] auto_solve: nothing new")
		return
	}
	g.work("commit-pending")
	solved := 0
	for t := range g.pending {
		var keep []string
		for _, addr := range g.pending[t] {
			if g.isMatched(addr) {
				solved++
				g.finish(addr, "matched", "auto_solve")
				continue
			}
			keep = append(keep, addr)
		}
		g.pending[t] = keep
	}
	g.emit("[+] auto_solve: %d ledger units updated (%d queued functions solved)", n, solved)
	g.refreshAt = 0
}

// ---- Push ------------------------------------------------------------------------------------------------

func (g *grind) push() {
	if !g.verifyBeforePush() {
		g.emit("[!] Push BLOCKED: committed sources fail byte verification (see .local/prepush.log). Fix and push manually.")
		return
	}
	if !g.cfg.StatusOnMatch {
		g.commitReadme()
	}
	g.emit("[*] Pushing progress to GitHub (triggers Windows CI + HTML dashboard build)")
	if exec.Command("git", "push").Run() == nil {
		g.emit("[*] Push ok")
	} else {
		g.emit("[!] Push failed")
	}
}

// commitReadme regenerates README.md and commits it under the work lock (an agent's `work check` may be
// mid-commit, resetting and re-staging the index).
func (g *grind) commitReadme() {
	_ = exec.Command(g.bin("status"), "-readme").Run()
	if exec.Command("git", "diff", "--quiet", "--", "README.md").Run() == nil {
		return
	}
	err := worklock.Do(func() error {
		if err := exec.Command("git", "add", "README.md").Run(); err != nil {
			return err
		}
		return exec.Command("git", "commit", "-m", "Update README.md status").Run()
	})
	if err != nil {
		g.emit("[!] README commit failed: %v", err)
	}
}

// verifyBeforePush re-verifies the committed (HEAD) version of every .cpp changed since upstream, so a
// collateral-damage edit never reaches CI. HEAD blobs, not the working tree, so in-flight edits can't fail it.
func (g *grind) verifyBeforePush() bool {
	up, err := exec.Command("git", "rev-parse", "-q", "--verify", "@{u}").Output()
	if err != nil {
		g.emit("[!] No upstream; skipping pre-push verify")
		return true
	}
	upstream := strings.TrimSpace(string(up))
	out, _ := exec.Command("git", "diff", "--name-only", upstream, "HEAD", "--", "src/*.cpp").Output()
	files := strings.Fields(string(out))
	if len(files) == 0 {
		return true
	}
	cachePath := filepath.Join(g.root, ".local", "cache", "verified_blobs.txt")
	_ = os.MkdirAll(filepath.Dir(cachePath), 0o755)
	verified := map[string]bool{}
	if b, err := os.ReadFile(cachePath); err == nil {
		for _, l := range strings.Fields(string(b)) {
			verified[l] = true
		}
	}
	tmp := filepath.Join(g.root, ".local", "prepush")
	_ = os.RemoveAll(tmp)
	var paths, blobs []string
	for _, f := range files {
		sha, err := exec.Command("git", "rev-parse", "-q", "--verify", "HEAD:"+f).Output()
		if err != nil {
			continue // deleted file
		}
		blob := strings.TrimSpace(string(sha))
		if verified[blob] {
			continue
		}
		content, err := exec.Command("git", "show", blob).Output()
		if err != nil {
			continue
		}
		dst := filepath.Join(tmp, f)
		_ = os.MkdirAll(filepath.Dir(dst), 0o755)
		if os.WriteFile(dst, content, 0o644) != nil {
			continue
		}
		paths = append(paths, filepath.Join(".local", "prepush", f))
		blobs = append(blobs, blob)
	}
	if len(paths) == 0 {
		return true
	}
	g.emit("[*] Pre-push verify: %d changed .cpp file(s)", len(paths))
	logf, err := os.Create(filepath.Join(g.root, ".local", "prepush.log"))
	if err != nil {
		return false
	}
	defer logf.Close()
	c := exec.Command(g.bin("build_and_match"), append([]string{"-require-compiler"}, paths...)...)
	c.Stdout, c.Stderr = logf, logf
	if c.Run() != nil {
		return false
	}
	if f, err := os.OpenFile(cachePath, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644); err == nil {
		fmt.Fprintln(f, strings.Join(blobs, "\n"))
		f.Close()
	}
	return true
}

// ---- Main loop -------------------------------------------------------------------------------------------

func (g *grind) run() {
	total := g.cfg.MaxWaves * g.cfg.WaveSize
	backlogMax := g.cfg.EscBacklogFactor * g.cfg.WaveSize
	exhausted := false
	tick := time.NewTicker(time.Second)
	defer tick.Stop()
	g.sessionStart = time.Now()
	g.autoSolveAt = g.cfg.AutoSolveEvery
	for {
		// Keep tier 0 saturated: pull fresh functions while tier 0 has a free slot (unless escalations back up)
		for g.launched < total && !exhausted && g.tierLoad(0) < g.cfg.WaveSize && g.escalationBacklog() < backlogMax {
			c, ok := g.pickNext()
			if !ok {
				// Nothing usable: the queue is empty, or what is left conflicts with in-flight work
				if len(g.jobs) == 0 && g.totalPending() == 0 && !g.autoSolveRunning {
					g.emit("[!] No unmatched ready functions remaining in queue; stopping cleanly")
					exhausted = true
				}
				break
			}
			g.seen[c.addr], g.inflightAddr[c.addr] = true, true
			g.inflightCpp[c.cpp]++
			g.funcCpp[c.addr], g.funcSize[c.addr], g.fnStart[c.addr] = c.cpp, c.size, time.Now()
			g.launched++
			g.emit("[pull] #%d/%d %s (%dB) -> %s", g.launched, total, c.addr, c.size, c.cpp)
			g.advance(c.addr, 0)
		}

		g.dispatch()
		if len(g.jobs) == 0 && g.totalPending() == 0 && !g.autoSolveRunning {
			break
		}

		// Wait for any attempt to finish (redrawing once a second); its tier and tier 0 refill right away.
		g.dash.render(g)
	wait:
		for {
			select {
			case r := <-g.results:
				g.reap(r)
				for drained := false; !drained; { // reap everything that finished in the same instant
					select {
					case r := <-g.results:
						g.reap(r)
					default:
						drained = true
					}
				}
				break wait
			case n := <-g.autoSolveDone:
				g.autoSolveFinished(n)
				break wait
			case <-tick.C:
				g.dash.render(g)
				if len(g.jobs) == 0 {
					break wait // nothing running: waiting on a pool reset, so re-check dispatch every tick
				}
			}
		}
	}
}

// verifyAutoSolved byte-verifies the source files auto_solve just wrote (its tiny-function solutions are
// written as todo and only become matched once build_and_match verifies them; without this step the next
// `work clean` strips them again). Agents only ever edit src/wip, so other dirty files in src/ are auto_solve's.
func (g *grind) verifyAutoSolved() {
	out, _ := exec.Command("git", "status", "--porcelain", "--", "src/").Output()
	var files []string
	for _, l := range strings.Split(string(out), "\n") {
		if len(l) < 4 {
			continue
		}
		p := strings.TrimSpace(l[3:])
		if strings.HasSuffix(p, ".cpp") && !strings.HasPrefix(p, "src/wip/") {
			files = append(files, p)
		}
	}
	if len(files) == 0 {
		return
	}
	logf, err := os.Create(filepath.Join(g.root, ".local", "auto_solve_verify.log"))
	if err != nil {
		return
	}
	defer logf.Close()
	c := exec.Command(g.bin("build_and_match"), append([]string{"-require-compiler"}, files...)...)
	c.Stdout, c.Stderr = logf, logf
	_ = c.Run() // failures just stay todo; `work clean` strips them
}
