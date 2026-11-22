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
		"--settings", l.agySettings, "--print-timeout", t, "-p", prompt)
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

func buildLiftPrompt(root, addr, editRule, tag, briefing string) (string, string) {
	if briefing == "" {
		return fmt.Sprintf(`You are assigned a single function to lift from x86 assembly to clean, portable C++: %[1]s.
Run './.local/bin/liftwork claim %[1]s' first to inspect the disassembly, src/ body, .rdata constants, known callees, and known struct fields.
Rules:
- %[2]s
- Write clean, readable, portable C++17 (include "lift_compat.h"). Zero __asm, __declspec(naked), _emit, or TODO stubs.
- Keep the // [%[1]s] marker and include structured metadata comments above the function:
    // @name <ClassName::methodName or descriptiveName>
    // @class <ClassName> (when applicable)
    // @summary <concise one-line description of behavior>
    // @field <ClassName> +0xNN <type> <fieldName> (for every struct/object field offset accessed)
- Verify with: ./.local/bin/liftwork check %[1]s --model %[3]s
- Stop immediately once liftwork check succeeds, or after 6 tries. Do NOT run liftwork next or liftwork skip, and NEVER edit src/, include/, build/units/, or docs/.`, addr, editRule, tag), ""
	}

	prompt := fmt.Sprintf(`You are assigned a single function to lift from x86 assembly to clean, portable C++: %[1]s (already claimed below).
Rules:
- %[2]s
- Write clean, readable, portable C++17 (include "lift_compat.h"). Zero __asm, __declspec(naked), _emit, or TODO stubs.
- Keep the // [%[1]s] marker and include structured metadata comments above the function:
    // @name <ClassName::methodName or descriptiveName>
    // @class <ClassName> (when applicable)
    // @summary <concise one-line description of behavior>
    // @field <ClassName> +0xNN <type> <fieldName> (for every struct/object field offset accessed)
- Verify with: ./.local/bin/liftwork check %[1]s --model %[3]s
- Stop immediately once liftwork check succeeds, or after 6 tries. Do NOT run liftwork next, liftwork claim, or liftwork skip, and NEVER edit src/, include/, build/units/, or docs/.

%[4]s`, addr, editRule, tag, briefing)
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
	short := fmt.Sprintf(`You are assigned a single function to lift from x86 assembly to clean, portable C++: %[1]s (already claimed).
First read %[4]s — it contains the full lift briefing (TARGET_CPP, RTTI, KNOWN_STRUCT_FIELDS, CALLEES, RDATA_CONSTANTS, SRC_BODY, DISASSEMBLY).
Rules:
- %[2]s
- Write clean, readable, portable C++17 (include "lift_compat.h"). Zero __asm, __declspec(naked), _emit, or TODO stubs.
- Keep the // [%[1]s] marker and include structured metadata comments above the function:
    // @name <ClassName::methodName or descriptiveName>
    // @class <ClassName> (when applicable)
    // @summary <concise one-line description of behavior>
    // @field <ClassName> +0xNN <type> <fieldName> (for every struct/object field offset accessed)
- Verify with: ./.local/bin/liftwork check %[1]s --model %[3]s
- Stop immediately once liftwork check succeeds, or after 6 tries. Do NOT run liftwork next, liftwork claim, or liftwork skip, and NEVER edit src/, include/, build/units/, or docs/.`, addr, editRule, tag, rel)
	return short, f.Name()
}

func (l *lifter) runAgent(model, effort, backend, addr, logPath string, timeout time.Duration) (int, rlInfo) {
	tag := model + "@" + effort
	editRule := "Edit only TARGET_CPP."
	editTools := []string{"Edit(lifted/**)"}
	if l.cfg.LiftIsolated {
		editRule = "Edit only TARGET_CPP (your own lifted/wip file). Never edit src/, include/, or other lifted/ files directly, and never run git write commands (liftwork check merges and commits for you)."
		editTools = []string{"Edit(lifted/wip/**)"}
	}
	claim := exec.Command(l.bin("liftwork"), "claim", addr)
	claim.Env = agentEnv(model, effort, addr, l.cfg.LiftIsolated)
	briefingB, _ := claim.Output()
	briefing := strings.TrimSpace(string(briefingB))
	prompt, briefingPath := buildLiftPrompt(l.root, addr, editRule, tag, briefing)
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
		args = append(args, "--permission-mode", "acceptEdits", "--output-format", "stream-json", "--verbose", "--allowedTools",
			"Read", "Grep", "Glob")
		args = append(args, editTools...)
		args = append(args,
			"Bash(./.local/bin/liftwork*)", "Bash(go run ./tools/liftwork*)",
			"Bash(g++*)", "Bash(clang++*)",
			"Bash(git status*)", "Bash(git diff*)", "Bash(git log*)", "Bash(git show*)")
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
		l.liftwork("commit-pending")
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
