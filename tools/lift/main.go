// Command lift is the autonomous parallel De-ASM & Struct/Naming Lift orchestrator.
//
//	lift [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]
//
// Mirrors tools/grind: pulls unlifted functions from `liftwork next`, escalates across
// model tiers with quota pool cooldowns, runs isolated per-function workers writing to
// lifted/wip/fn_<VA>.cpp, and verifies/merges/commits via `liftwork check`.
package main

import (
	"fmt"
	"io/fs"
	"os"
	"os/exec"
	"path/filepath"
	"strings"
	"syscall"
	"os/signal"
	"time"
)

func main() {
	root, err := repoRoot()
	if err != nil {
		fmt.Fprintln(os.Stderr, "lift:", err)
		os.Exit(1)
	}
	if err := os.Chdir(root); err != nil {
		fmt.Fprintln(os.Stderr, "lift:", err)
		os.Exit(1)
	}
	cfg, err := loadConfig(os.Args[1:])
	if err != nil {
		fmt.Fprintln(os.Stderr, "lift:", err)
		fmt.Fprintln(os.Stderr, "usage: lift [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]")
		os.Exit(2)
	}
	for _, p := range []*string{&cfg.AttemptsFile, &cfg.ResultsLog, &cfg.EventsLog} {
		if !filepath.IsAbs(*p) {
			*p = filepath.Join(root, *p)
		}
		_ = os.MkdirAll(filepath.Dir(*p), 0o755)
	}

	if cfg.LiftIsolated {
		os.Setenv("LIFT_ISOLATED", "1")
	} else {
		os.Setenv("LIFT_ISOLATED", "0")
	}

	l := &lifter{
		cfg: cfg, root: root, procs: &procs{pgid: map[int]bool{}},
		modelIdx: map[string]int{}, modelTier: map[string]int{},
		slugCache: map[string]string{}, runInfo: map[string]*runInfo{},
		agyNoModel: map[string]bool{}, noCheck: map[string]int{},
		results: make(chan attemptResult, 64),
		jobs: map[string]int{}, fnTier: map[string]int{}, fnOwed: map[string][]string{},
		inflightAddr: map[string]bool{}, inflightCpp: map[string]int{}, seen: map[string]bool{},
		funcCpp: map[string]string{}, funcSize: map[string]int{}, fnStart: map[string]time.Time{},
		dash: newDashboard(cfg.Plain),
	}
	l.pools = newPools(cfg, l.emit)
	for t, models := range cfg.Tiers {
		for _, m := range models {
			l.modelIdx[m], l.modelTier[m] = len(l.chain), t
			l.chain = append(l.chain, m)
		}
	}
	l.pending = make([][]string, len(cfg.Tiers))
	l.running = make([]int, len(l.chain))

	if err := buildIfNeeded(root, "liftwork"); err != nil {
		fmt.Fprintf(os.Stderr, "lift: building liftwork: %v\n", err)
		os.Exit(1)
	}
	l.detectCLIs()
	l.agySettings = agyLiftSettings(root, cfg.LiftIsolated)
	l.printBanner()
	if !l.hasClaude && !l.hasAgy {
		fmt.Println("Error: Neither a working 'claude' nor 'agy' CLI was found in PATH.")
		os.Exit(1)
	}

	l.loadAttempts()

	sig := make(chan os.Signal, 1)
	signal.Notify(sig, syscall.SIGINT, syscall.SIGTERM)
	go func() {
		<-sig
		fmt.Println("\n[!] Interrupted — stopping lift workers.")
		l.procs.killAll()
		os.Exit(130)
	}()

	fmt.Println("Cleaning stale lifted/wip files and scanning queue...")
	l.liftwork("clean")

	l.run()

	l.liftwork("commit-pending")
	l.liftwork("clean")
	l.dash.render(l)
	fmt.Printf("=== Parallel lift session finished (pulled=%d lifted=%d deferred=%d) ===\n", l.launched, l.lifted, l.deferred)
	c := exec.Command(l.bin("liftwork"), "status")
	c.Stdout, c.Stderr = os.Stdout, os.Stderr
	_ = c.Run()
}

func repoRoot() (string, error) {
	out, err := exec.Command("git", "rev-parse", "--show-toplevel").Output()
	if err != nil {
		return "", fmt.Errorf("not inside the repository: %v", err)
	}
	return strings.TrimSpace(string(out)), nil
}

func buildIfNeeded(root, name string) error {
	bin := filepath.Join(root, ".local", "bin", name)
	st, err := os.Stat(bin)
	stale := err != nil
	if !stale {
		for _, dir := range []string{filepath.Join(root, "tools", name), filepath.Join(root, "internal")} {
			_ = filepath.WalkDir(dir, func(p string, d fs.DirEntry, err error) error {
				if err != nil || stale || d.IsDir() || !strings.HasSuffix(p, ".go") {
					return nil
				}
				if fi, err := d.Info(); err == nil && fi.ModTime().After(st.ModTime()) {
					stale = true
				}
				return nil
			})
		}
	}
	if !stale {
		return nil
	}
	fmt.Printf("[*] Building fast binary: .local/bin/%s ...\n", name)
	_ = os.MkdirAll(filepath.Dir(bin), 0o755)
	c := exec.Command("go", "build", "-o", bin, "./tools/"+name)
	c.Stdout, c.Stderr = os.Stdout, os.Stderr
	return c.Run()
}

func (l *lifter) detectCLIs() {
	if exec.Command("claude", "--version").Run() == nil {
		l.hasClaude = true
		help, _ := exec.Command("claude", "--help").CombinedOutput()
		l.hasClaudeEffort = strings.Contains(string(help), "--effort")
	}
	l.hasAgy = exec.Command("agy", "--help").Run() == nil
}

func agyLiftSettings(root string, isolated bool) string {
	allow := []string{
		"read_file(*)",
		"write_file(" + root + "/lifted)",
		"edit_file(" + root + "/lifted)",
		"write_file(" + root + "/build/lifted)",
		"write_file(" + root + "/.local)",
		"command(./.local/bin/liftwork*)",
		"command(go run ./tools/liftwork*)",
		"command(g++*)",
		"command(clang++*)",
		"command(git status*)",
		"command(git diff*)",
		"command(git log*)",
		"command(git show*)",
	}
	if isolated {
		allow[1] = "write_file(" + root + "/lifted/wip)"
		allow[2] = "edit_file(" + root + "/lifted/wip)"
	}
	deny := []string{
		"write_file(" + root + "/src)",
		"edit_file(" + root + "/src)",
		"write_file(" + root + "/include)",
		"edit_file(" + root + "/include)",
		"write_file(" + root + "/docs)",
		"command(sudo*)",
		"command(rm -rf*)",
		"command(python*)",
		"command(curl*)",
		"command(wget*)",
	}
	q := func(xs []string) string { return `"` + strings.Join(xs, `","`) + `"` }
	return `{"agentMode":"auto","enableTerminalSandbox":true,"toolPermission":"proceed-in-sandbox","permissions":{"allow":[` +
		q(allow) + `],"deny":[` + q(deny) + `]}}`
}

func (l *lifter) printBanner() {
	c := l.cfg
	b := func(v bool) int {
		if v {
			return 1
		}
		return 0
	}
	efforts := strings.Join(c.Efforts, "->")
	if !c.Verbose {
		fmt.Printf("Endorphin lifter: scope=%s deps_first=%d tier0 x%d, esc cap %d/model, %d waves, efforts %s, timeout %ds (claude=%d agy=%d; LIFT_VERBOSE=1 for details)\n",
			c.Scope, b(c.DepsFirst), c.WaveSize, c.EscCap, c.MaxWaves, efforts, c.AgentTimeout, b(l.hasClaude), b(l.hasAgy))
		return
	}
	var tiers []string
	for _, t := range c.Tiers {
		tiers = append(tiers, strings.Join(t, " "))
	}
	fmt.Println("=== Endorphin Autonomous Parallel Lifter (De-ASM & Struct/Naming) ===")
	fmt.Printf("Verified CLIs : claude=%d | agy=%d | efforts=%s\n", b(l.hasClaude), b(l.hasAgy), efforts)
	fmt.Printf("Scope         : %s | deps_first=%d | include_cpp=%d | isolated=%d\n", c.Scope, b(c.DepsFirst), b(c.IncludeCpp), b(c.LiftIsolated))
	fmt.Printf("Pipeline      : tier0 runners=%d | escalation cap=%d/model | total_pulls=%d | push_every=%d | timeout=%ds\n",
		c.WaveSize, c.EscCap, c.MaxWaves*c.WaveSize, c.PushEvery*c.WaveSize, c.AgentTimeout)
	fmt.Printf("Model Tiers   : %s\n", strings.Join(tiers, "  ->  "))
}
