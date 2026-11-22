package main

import (
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"strings"
	"sync"
	"syscall"
	"time"
)

// procs tracks every running agent's process group so an interrupt can kill them all.
type procs struct {
	mu   sync.Mutex
	pgid map[int]bool
}

func (p *procs) add(pg int) { p.mu.Lock(); p.pgid[pg] = true; p.mu.Unlock() }
func (p *procs) del(pg int) { p.mu.Lock(); delete(p.pgid, pg); p.mu.Unlock() }

func (p *procs) killAll() {
	p.mu.Lock()
	var pgs []int
	for pg := range p.pgid {
		pgs = append(pgs, pg)
	}
	p.mu.Unlock()
	for _, pg := range pgs {
		_ = syscall.Kill(-pg, syscall.SIGTERM)
	}
	if len(pgs) > 0 {
		time.Sleep(2 * time.Second)
		for _, pg := range pgs {
			_ = syscall.Kill(-pg, syscall.SIGKILL) // agents that ignore TERM
		}
	}
}

// runTracked runs cmd in its own process group with stdout+stderr to logPath. After timeout the whole group gets
// SIGTERM, and SIGKILL 20s later (like `timeout --kill-after=20s`). Returns the exit code (124 on timeout).
func (g *grind) runTracked(cmd *exec.Cmd, logPath string, timeout time.Duration) int {
	lf, err := os.Create(logPath)
	if err != nil {
		return 1
	}
	defer lf.Close()
	cmd.Stdout, cmd.Stderr = lf, lf
	cmd.SysProcAttr = &syscall.SysProcAttr{Setpgid: true}
	if err := cmd.Start(); err != nil {
		fmt.Fprintf(lf, "grind: start failed: %v\n", err)
		return 127
	}
	pg := cmd.Process.Pid
	g.procs.add(pg)
	defer g.procs.del(pg)

	done := make(chan error, 1)
	go func() { done <- cmd.Wait() }()
	timedOut := false
	var werr error
	select {
	case werr = <-done:
	case <-time.After(timeout):
		timedOut = true
		_ = syscall.Kill(-pg, syscall.SIGTERM)
		select {
		case werr = <-done:
		case <-time.After(20 * time.Second):
			_ = syscall.Kill(-pg, syscall.SIGKILL)
			werr = <-done
		}
	}
	if timedOut {
		return 124
	}
	if werr != nil {
		if ee, ok := werr.(*exec.ExitError); ok {
			return ee.ExitCode()
		}
		return 1
	}
	return 0
}

// agentEnv is the per-agent environment: the variables `work` and tools/security_guard.sh read.
func agentEnv(model, effort, addr string) []string {
	return append(os.Environ(),
		"DECOMP_EFFORT="+effort,
		"DECOMP_MODEL="+model+"@"+effort,
		"WORK_ASSIGNED_ADDR="+addr, // pins the guard's writes to this function's WIP file
		"CLAUDE_CODE_EFFORT_LEVEL="+effort,
	)
}

func (g *grind) agyCmd(slug, effort, prompt, model, addr string, timeout time.Duration) *exec.Cmd {
	t := fmt.Sprintf("%ds", int(timeout.Seconds()))
	c := exec.Command("agy", "--model", slug, "--effort", effort, "--mode", "auto", "--sandbox",
		"--settings", g.agySettings, "--print-timeout", t, "-p", prompt)
	c.Env = agentEnv(model, effort, addr)
	return c
}

// runAgyFirstValidSlug tries candidate agy model slugs in order and caches the first one agy accepts.
func (g *grind) runAgyFirstValidSlug(key, effort, prompt, model, addr, logPath string, timeout time.Duration, slugs []string) int {
	g.mu.Lock()
	cached := g.slugCache[key]
	g.mu.Unlock()
	rc := 0
	if cached != "" {
		rc = g.runTracked(g.agyCmd(cached, effort, prompt, model, addr, timeout), logPath, timeout)
		if !isInvalidModelLog(logPath) {
			return rc
		}
		g.mu.Lock()
		delete(g.slugCache, key)
		g.mu.Unlock()
	}
	for _, s := range slugs {
		if s == cached {
			continue
		}
		rc = g.runTracked(g.agyCmd(s, effort, prompt, model, addr, timeout), logPath, timeout)
		if !isInvalidModelLog(logPath) {
			g.mu.Lock()
			g.slugCache[key] = s
			g.mu.Unlock()
			return rc
		}
	}
	return rcInvalidModel // agy accepted none of the slugs: the model does not exist there, nothing was attempted
}

// rcRateLimited is returned by runAgent when the run hit a quota/rate limit (and did not match).
const rcRateLimited = 42

// rcInvalidModel is returned by runAgent when the backend rejected the model itself (and did not match).
const rcInvalidModel = 43

type rlInfo struct {
	kind  string
	reset int64
}

// maxArgPromptBytes stays safely under Linux's 128 KiB MAX_ARG_STRLEN per argv element.
const maxArgPromptBytes = 96 * 1024

// buildAgentPrompt constructs the -p prompt for an agent. When the embedded work-claim briefing
// would push the prompt near Linux's argv limit, it writes the briefing to .local/briefings/ and
// returns a short prompt pointing the agent to that file (plus the path to clean up).
func buildAgentPrompt(root, addr, editRule, tag, briefing string) (string, string) {
	if briefing == "" {
		return fmt.Sprintf("Read CLAUDE.md. You are assigned a single function: %[1]s. Run './.local/bin/work claim %[1]s' and match %[1]s using './.local/bin/work check %[1]s --model %[2]s'. Use HEADER_PREVIEW and SUGGESTED_EXTERNS from the claim output; if SIMILAR_MATCHED is present, treat those solved neighbors as a hint for the C++ idiom (identical-shape ones usually differ only in constants, offsets and call targets). If PRIOR_ATTEMPTS is present, it lists facts about earlier failed checks on this function (where the output diverged, what the compiler emitted); use it to avoid dead ends, but do not assume the earlier approach was close, and never go looking for the earlier source. Iterate up to 10 tries (switch to __declspec(naked) __asm after 3-4 failed C++03 tries). Stop immediately as soon as %[1]s matches or after 10 tries. Do NOT run work next, do NOT call work skip, and do NOT touch any other function, HTML files, or build/units.json.", addr, tag), ""
	}
	prompt := fmt.Sprintf(`You are assigned a single function: %[1]s (already claimed below).
Rules:
- C++03 only. %[2]s Keep // [VA] and fn_XXXXXXXX intact.
- Use HEADER_PREVIEW and SUGGESTED_EXTERNS; if SIMILAR_MATCHED is present, treat solved neighbors as hints for the C++ idiom; if PRIOR_ATTEMPTS is present, use it to avoid dead ends (never search for earlier source).
- Switch to __declspec(naked) __asm after 3-4 failed C++03 tries.
- Verify with: ./.local/bin/work check %[1]s --model %[3]s
- Max 10 tries; stop immediately as soon as %[1]s matches or after 10 tries.
- Do NOT run work next, work claim, or work skip, and do NOT touch any other function, HTML files, or build/units.json.

%[4]s`, addr, editRule, tag, briefing)
	if len(prompt) <= maxArgPromptBytes {
		return prompt, ""
	}
	dir := filepath.Join(root, ".local", "briefings")
	if err := os.MkdirAll(dir, 0o755); err != nil {
		return prompt, ""
	}
	f, err := os.CreateTemp(dir, addr+"_*.txt")
	if err != nil {
		return prompt, ""
	}
	_, werr := f.WriteString(briefing)
	cerr := f.Close()
	if werr != nil || cerr != nil {
		_ = os.Remove(f.Name())
		return prompt, ""
	}
	rel := filepath.ToSlash(filepath.Join(".local", "briefings", filepath.Base(f.Name())))
	short := fmt.Sprintf(`You are assigned a single function: %[1]s (already claimed).
First read %[4]s — it contains the full work claim briefing (TARGET_CPP, CALLING_CONV, HEADER_PREVIEW, SUGGESTED_EXTERNS, TARGET_ASM, etc.).
Rules:
- C++03 only. %[2]s Keep // [VA] and fn_XXXXXXXX intact.
- Use HEADER_PREVIEW and SUGGESTED_EXTERNS; if SIMILAR_MATCHED is present, treat solved neighbors as hints for the C++ idiom; if PRIOR_ATTEMPTS is present, use it to avoid dead ends (never search for earlier source).
- Switch to __declspec(naked) __asm after 3-4 failed C++03 tries.
- Verify with: ./.local/bin/work check %[1]s --model %[3]s
- Max 10 tries; stop immediately as soon as %[1]s matches or after 10 tries.
- Do NOT run work next, work claim, or work skip, and do NOT touch any other function, HTML files, or build/units.json.`, addr, editRule, tag, rel)
	return short, f.Name()
}

// runAgent runs one dedicated agent on one function with the given base model, effort and backend.
func (g *grind) runAgent(model, effort, backend, addr, logPath string, timeout time.Duration) (int, rlInfo) {
	tag := model + "@" + effort
	editRule := "Edit only TARGET_CPP (and include/ if needed)."
	srcTools := []string{"Edit(src/**)", "Edit(include/**)"} // Edit rules also cover the Write tool
	gitWrite := []string{"Bash(git add*)", "Bash(git commit*)", "Bash(git checkout -- src/*)"}
	if g.cfg.WorkIsolated {
		editRule = "Edit only TARGET_CPP (your own src/wip file). Other agents are working in the same shard: never edit the shard .cpp or include/, and never run git add/commit/checkout/restore (work check commits for you)."
		srcTools = []string{"Edit(src/wip/**)"}
		gitWrite = nil // `work check` commits under the lock; an agent's checkout could wipe another agent's merge
	}
	claim := exec.Command(g.bin("work"), "claim", addr)
	claim.Env = agentEnv(model, effort, addr)
	briefingB, _ := claim.Output()
	briefing := strings.TrimSpace(string(briefingB))
	prompt, briefingPath := buildAgentPrompt(g.root, addr, editRule, tag, briefing)
	if briefingPath != "" {
		defer os.Remove(briefingPath)
	}

	rc := 0
	if backend == "claude" {
		alias := map[string]string{"claude-haiku-5.5": "haiku", "claude-sonnet-5.5": "sonnet", "claude-opus-5.5": "opus"}[model]
		if alias == "" {
			alias = "haiku"
		}
		args := []string{"--model", alias}
		if g.hasClaudeEffort {
			args = append(args, "--effort", effort)
		}
		args = append(args, "--permission-mode", "acceptEdits", "--output-format", "stream-json", "--verbose", "--allowedTools",
			"Read", "Grep", "Glob")
		args = append(args, srcTools...)
		args = append(args,
			"Bash(./.local/bin/work*)", "Bash(go run ./tools/work*)",
			"Bash(./.local/bin/status*)", "Bash(go run ./tools/status*)",
			"Bash(./.local/bin/build_and_match*)", "Bash(go run ./tools/build_and_match*)",
			"Bash(./tools/cl_wine.sh*)",
			"Bash(git status*)", "Bash(git diff*)", "Bash(git log*)", "Bash(git show*)")
		args = append(args, gitWrite...)
		args = append(args, "-p", prompt)
		c := exec.Command("claude", args...)
		c.Env = agentEnv(model, effort, addr)
		rc = g.runTracked(c, logPath, timeout)
	} else {
		switch model {
		case "claude-haiku-5.5":
			rc = g.runAgyFirstValidSlug("haiku."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-haiku-5-5", "claude-haiku-5-5-" + effort, "claude-haiku-5.5", "claude-haiku-5-5@default", "claude-haiku-4-5@default"})
		case "claude-sonnet-5.5":
			rc = g.runAgyFirstValidSlug("sonnet."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-sonnet-5-5", "claude-sonnet-5-5-" + effort, "claude-sonnet-5.5", "claude-sonnet-5-5@default", "claude-sonnet-4-6@default"})
		case "claude-opus-5.5":
			rc = g.runAgyFirstValidSlug("opus."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-opus-5-5", "claude-opus-5-5-" + effort, "claude-opus-5.5", "claude-opus-5-5@default", "claude-opus-4-6@default"})
		default: // gemini-* and anything else: the base model name is the agy slug
			rc = g.runTracked(g.agyCmd(model, effort, prompt, model, addr, timeout), logPath, timeout)
			if isInvalidModelLog(logPath) {
				rc = rcInvalidModel
			}
		}
	}

	if g.isMatched(addr) {
		g.work("commit-pending") // record the commit on the host (the agent may have run in a read-only .git sandbox)
	} else if rc == rcInvalidModel {
		return rcInvalidModel, rlInfo{}
	} else if isRateLimitLog(logPath) {
		k, r := classifyRateLimit(logPath)
		return rcRateLimited, rlInfo{k, r}
	}
	return rc, rlInfo{}
}

// ---- Backend resolution --------------------------------------------------------------------------------

// backendUsable reports whether backend ("claude" or "agy") can run base model now.
func (g *grind) backendUsable(backend, model string) bool {
	switch backend {
	case "claude":
		return strings.HasPrefix(model, "claude-") && g.hasClaude && !g.pools.coolingDown("claude")
	case "agy":
		return g.hasAgy && !g.agyLacks(model) && !g.pools.coolingDown(poolOf("agy", model))
	}
	return false
}

// resolveBackend picks the CLI backend for a tier entry ("<model>" or "<backend>/<model>"), or "" if none is usable.
// Sonnet/Opus run on both claude and agy, haiku is claude-only, gemini is agy-only. A "<backend>/" pin never falls
// back to another quota pool.
func (g *grind) resolveBackend(spec string) string {
	model, pin := baseModel(spec), pinOf(spec)
	if pin != "" {
		if g.backendUsable(pin, model) {
			return pin
		}
		return ""
	}
	var order []string
	switch {
	case model == "claude-haiku-5.5":
		order = []string{"claude", "agy"} // claude harness first, agy when the claude pool is cooling down
	case model == "claude-sonnet-5.5" || model == "claude-opus-5.5":
		order = []string{"claude", "agy"}
		if g.cfg.PreferAgyClaude {
			order = []string{"agy", "claude"}
		}
	case strings.HasPrefix(model, "gemini-"):
		order = []string{"agy"}
	}
	for _, b := range order {
		if g.backendUsable(b, model) {
			return b
		}
	}
	return ""
}

// installed reports whether any backend that could ever run spec exists on this machine. A model whose CLI is
// missing is never owed (otherwise a function would wait for it forever).
func (g *grind) installed(spec string) bool {
	model, pin := baseModel(spec), pinOf(spec)
	claudeOK := g.hasClaude && strings.HasPrefix(model, "claude-") && (pin == "" || pin == "claude")
	agyOK := g.hasAgy && (pin == "" || pin == "agy")
	return claudeOK || agyOK
}
