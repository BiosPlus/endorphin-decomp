package main

import (
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"strings"
	"sync"
	"time"
)

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
		signalProcGroup(pg, false)
	}
	if len(pgs) > 0 {
		time.Sleep(2 * time.Second)
		for _, pg := range pgs {
			signalProcGroup(pg, true)
		}
	}
}

func (l *lifter) runTracked(cmd *exec.Cmd, logPath string, timeout time.Duration) int {
	lf, err := os.Create(logPath)
	if err != nil {
		return 1
	}
	defer lf.Close()
	cmd.Stdout, cmd.Stderr = lf, lf
	setProcGroup(cmd)
	if err := cmd.Start(); err != nil {
		fmt.Fprintf(lf, "lift: start failed: %v\n", err)
		return 127
	}
	pg := cmd.Process.Pid
	l.procs.add(pg)
	defer l.procs.del(pg)

	done := make(chan error, 1)
	go func() { done <- cmd.Wait() }()
	timedOut := false
	var werr error
	select {
	case werr = <-done:
	case <-time.After(timeout):
		timedOut = true
		signalProcGroup(pg, false)
		select {
		case werr = <-done:
		case <-time.After(20 * time.Second):
			signalProcGroup(pg, true)
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

func agentEnv(model, effort, addr string, isolated bool) []string {
	iso := "0"
	if isolated {
		iso = "1"
	}
	return append(os.Environ(),
		"DECOMP_EFFORT="+effort,
		"LIFT_MODEL="+model+"@"+effort,
		"LIFT_ASSIGNED_ADDR="+addr,
		"LIFT_ISOLATED="+iso,
		"CLAUDE_CODE_EFFORT_LEVEL="+effort,
	)
}

func (l *lifter) agyCmd(slug, effort, prompt, model, addr string, timeout time.Duration) *exec.Cmd {
	t := fmt.Sprintf("%ds", int(timeout.Seconds()))
	c := exec.Command("agy", "--model", slug, "--effort", effort, "--mode", "auto", "--sandbox",
		"--disable-slash-commands", "--settings", l.agySettings, "--print-timeout", t, "-p", prompt)
	c.Env = agentEnv(model, effort, addr, l.cfg.LiftIsolated)
	return c
}

func (l *lifter) runAgyFirstValidSlug(key, effort, prompt, model, addr, logPath string, timeout time.Duration, slugs []string) int {
	l.mu.Lock()
	cached := l.slugCache[key]
	l.mu.Unlock()
	rc := 0
	if cached != "" {
		rc = l.runTracked(l.agyCmd(cached, effort, prompt, model, addr, timeout), logPath, timeout)
		if !isInvalidModelLog(logPath) {
			return rc
		}
		l.mu.Lock()
		delete(l.slugCache, key)
		l.mu.Unlock()
	}
	for _, s := range slugs {
		if s == cached {
			continue
		}
		rc = l.runTracked(l.agyCmd(s, effort, prompt, model, addr, timeout), logPath, timeout)
		if !isInvalidModelLog(logPath) {
			l.mu.Lock()
			l.slugCache[key] = s
			l.mu.Unlock()
			return rc
		}
	}
	return rcInvalidModel
}

const (
	rcRateLimited     = 42
	rcInvalidModel    = 43
	maxArgPromptBytes = 96 * 1024
)

type rlInfo struct {
	kind  string
	reset int64
}

func buildLiftPrompt(root, addr, briefing string) (string, string) {
	core := fmt.Sprintf(`Lift %[1]s to portable C++20 in TARGET_CPP (no __asm/naked/_emit/TODO).
Overwrite TARGET_CPP directly (no Read needed): #include "lift_compat.h", declare used ext_/mem_, keep // [%[1]s], and add:
// @name <Class::method or descriptiveName>
// @class <Class> (if member)
// @summary <one-line description>
// @field <Class> +0xNN <type> <name> (per accessed offset; don't guess, use field_0xNN if unsure)
Verify: ./.local/bin/liftwork check %[1]s
Stop once check passes or after 6 tries.`, addr)

	if briefing == "" {
		return fmt.Sprintf("Run './.local/bin/liftwork claim %s' first.\n%s", addr, core), ""
	}

	prompt := core + "\n\n" + briefing
	if len(prompt) <= maxArgPromptBytes {
		return prompt, ""
	}
	dir := filepath.Join(root, ".local", "lift_briefings")
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
	rel := filepath.ToSlash(filepath.Join(".local", "lift_briefings", filepath.Base(f.Name())))
	short := fmt.Sprintf("Read %s first for the lift briefing.\n%s", rel, core)
	return short, f.Name()
}

func (l *lifter) runAgent(model, effort, backend, addr, logPath string, timeout time.Duration) (int, rlInfo) {
	editTools := []string{"Edit(lifted/**)", "Write(lifted/**)"}
	if l.cfg.LiftIsolated {
		wipFile := "lifted/wip/fn_" + strings.ToUpper(strings.TrimPrefix(strings.TrimPrefix(addr, "0x"), "0X")) + ".cpp"
		editTools = []string{"Edit(" + wipFile + ")", "Write(" + wipFile + ")"}
	}
	claim := exec.Command(l.bin("liftwork"), "claim", addr)
	claim.Env = agentEnv(model, effort, addr, l.cfg.LiftIsolated)
	b, _ := claim.Output()
	briefing := strings.TrimSpace(string(b))
	prompt, briefingPath := buildLiftPrompt(l.root, addr, briefing)
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
		if l.hasClaudeEffort {
			args = append(args, "--effort", effort)
		}
		if l.hasClaudeSettingSources {
			args = append(args, "--setting-sources", "user")
		}
		if l.hasClaudeStrictMCP {
			args = append(args, "--strict-mcp-config")
		}
		if l.hasClaudeDisableSlash {
			args = append(args, "--disable-slash-commands")
		}
		if l.hasClaudeTools {
			args = append(args, "--tools", "Read,Write,Edit,Bash")
		}
		args = append(args, "--permission-mode", "acceptEdits", "--output-format", "stream-json", "--verbose", "--allowedTools",
			"Read")
		args = append(args, editTools...)
		args = append(args,
			"Bash(./.local/bin/liftwork check*)", "Bash(go run ./tools/liftwork check*)",
			"Bash(g++*)", "Bash(clang++*)")
		args = append(args, "-p", prompt)
		c := exec.Command("claude", args...)
		c.Env = agentEnv(model, effort, addr, l.cfg.LiftIsolated)
		rc = l.runTracked(c, logPath, timeout)
	} else {
		switch model {
		case "claude-haiku-5.5":
			rc = l.runAgyFirstValidSlug("haiku."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-haiku-5-5", "claude-haiku-5-5-" + effort, "claude-haiku-5.5", "claude-haiku-5-5@default", "claude-haiku-4-5@default"})
		case "claude-sonnet-5.5":
			rc = l.runAgyFirstValidSlug("sonnet."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-sonnet-5-5", "claude-sonnet-5-5-" + effort, "claude-sonnet-5.5", "claude-sonnet-5-5@default", "claude-sonnet-4-6@default"})
		case "claude-opus-5.5":
			rc = l.runAgyFirstValidSlug("opus."+effort, effort, prompt, model, addr, logPath, timeout,
				[]string{"claude-opus-5-5", "claude-opus-5-5-" + effort, "claude-opus-5.5", "claude-opus-5-5@default", "claude-opus-4-6@default"})
		default:
			rc = l.runTracked(l.agyCmd(model, effort, prompt, model, addr, timeout), logPath, timeout)
			if isInvalidModelLog(logPath) {
				rc = rcInvalidModel
			}
		}
	}

	if l.isLifted(addr) {
		l.liftwork("commit-pending", addr)
	} else if rc == rcInvalidModel {
		return rcInvalidModel, rlInfo{}
	} else if isRateLimitLog(logPath) {
		k, r := classifyRateLimit(logPath)
		return rcRateLimited, rlInfo{k, r}
	}
	return rc, rlInfo{}
}

func (l *lifter) backendUsable(backend, model string) bool {
	switch backend {
	case "claude":
		return strings.HasPrefix(model, "claude-") && l.hasClaude && !l.pools.coolingDown("claude")
	case "agy":
		return l.hasAgy && !l.agyLacks(model) && !l.pools.coolingDown(poolOf("agy", model))
	}
	return false
}

func (l *lifter) resolveBackend(spec string) string {
	model, pin := baseModel(spec), pinOf(spec)
	if pin != "" {
		if l.backendUsable(pin, model) {
			return pin
		}
		return ""
	}
	var order []string
	switch {
	case model == "claude-haiku-5.5":
		order = []string{"claude", "agy"}
	case model == "claude-sonnet-5.5" || model == "claude-opus-5.5":
		order = []string{"claude", "agy"}
		if l.cfg.PreferAgyClaude {
			order = []string{"agy", "claude"}
		}
	case strings.HasPrefix(model, "gemini-"):
		order = []string{"agy"}
	}
	for _, b := range order {
		if l.backendUsable(b, model) {
			return b
		}
	}
	return ""
}

func (l *lifter) installed(spec string) bool {
	model, pin := baseModel(spec), pinOf(spec)
	claudeOK := l.hasClaude && strings.HasPrefix(model, "claude-") && (pin == "" || pin == "claude")
	agyOK := l.hasAgy && (pin == "" || pin == "agy")
	return claudeOK || agyOK
}
