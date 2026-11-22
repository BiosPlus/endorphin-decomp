// Command grind is the autonomous parallel decompilation orchestrator (formerly tools/grind.sh).
//
//	grind [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]
//
// Every function pulled from `work next` starts in tier 0 and gets one real attempt (low -> medium effort) from
// each model in its tier, on whichever owed model is free and whose quota pool is not cooling down. When the
// whole tier has failed it the function moves up a tier; when every tier has, it is deferred. All knobs are the
// environment variables grind.sh used (see config.go); AUTO_SOLVE_EVERY=N (default 25) additionally re-runs
// auto_solve after every N finished functions so new matches are cloned onto identical-shape functions.
package main

import (
	"fmt"
	"io/fs"
	"os"
	"os/exec"
	"os/signal"
	"path/filepath"
	"strings"
	"syscall"
	"time"
)

func main() {
	root, err := repoRoot()
	if err != nil {
		fmt.Fprintln(os.Stderr, "grind:", err)
		os.Exit(1)
	}
	if err := os.Chdir(root); err != nil {
		fmt.Fprintln(os.Stderr, "grind:", err)
		os.Exit(1)
	}
	cfg, err := loadConfig(os.Args[1:])
	if err != nil {
		fmt.Fprintln(os.Stderr, "grind:", err)
		fmt.Fprintln(os.Stderr, "usage: grind [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]")
		os.Exit(2)
	}
	for _, p := range []*string{&cfg.AttemptsFile, &cfg.ResultsLog, &cfg.EventsLog} {
		if !filepath.IsAbs(*p) {
			*p = filepath.Join(root, *p)
		}
	}

	// Variables every `work` child (and agent) inherits.
	if !cfg.StatusOnMatch {
		os.Setenv("WORK_SKIP_README", "1") // README is regenerated before each push and at session end instead
	}
	if cfg.WorkIsolated {
		os.Setenv("WORK_ISOLATED", "1")
	} else {
		os.Setenv("WORK_ISOLATED", "0")
	}

	g := &grind{
		cfg: cfg, root: root, procs: &procs{pgid: map[int]bool{}},
		modelIdx: map[string]int{}, modelTier: map[string]int{},
		slugCache: map[string]string{}, runInfo: map[string]*runInfo{},
		agyNoModel: map[string]bool{}, noCheck: map[string]int{},
		results: make(chan attemptResult, 64), autoSolveDone: make(chan int, 1),
		jobs: map[string]int{}, fnTier: map[string]int{}, fnOwed: map[string][]string{},
		inflightAddr: map[string]bool{}, inflightCpp: map[string]int{}, seen: map[string]bool{},
		funcCpp: map[string]string{}, funcSize: map[string]int{}, fnStart: map[string]time.Time{},
		dash: newDashboard(cfg.Plain),
	}
	g.pools = newPools(cfg, g.emit)
	for t, models := range cfg.Tiers {
		for _, m := range models {
			g.modelIdx[m], g.modelTier[m] = len(g.chain), t
			g.chain = append(g.chain, m)
		}
	}
	g.pending = make([][]string, len(cfg.Tiers))
	g.running = make([]int, len(g.chain))

	installPreCommit(root)
	for _, t := range []string{"work", "status", "build_and_match", "auto_solve"} {
		if err := buildIfNeeded(root, t); err != nil {
			fmt.Fprintf(os.Stderr, "grind: building %s: %v\n", t, err)
			os.Exit(1)
		}
	}
	startWineserver(root)
	g.detectCLIs()
	g.agySettings = agySettings(root, cfg.WorkIsolated)
	g.printBanner()
	if !g.hasClaude && !g.hasAgy {
		fmt.Println("Error: Neither a working 'claude' nor 'agy' CLI was found in PATH.")
		os.Exit(1)
	}

	g.loadAttempts()
	g.loadRouteRules()

	sig := make(chan os.Signal, 1)
	signal.Notify(sig, syscall.SIGINT, syscall.SIGTERM)
	go func() {
		<-sig
		fmt.Println("\n[!] Interrupted — stopping workers.")
		g.procs.killAll()
		os.Exit(130)
	}()

	// Nothing is in flight yet, so a global clean is safe.
	fmt.Println("Cleaning stale stubs and scanning the function queue (can take ~20s)...")
	g.work("clean")
	if cfg.RunAutoSolve {
		fmt.Println("Running auto_solve pre-pass...")
		c := exec.Command(g.bin("auto_solve"))
		c.Stdout, c.Stderr = os.Stdout, os.Stderr
		_ = c.Run()
		g.verifyAutoSolved()
		g.work("commit-pending")
	}

	g.run()

	// Everything is idle now, so a global clean is safe.
	g.work("commit-pending")
	g.work("clean")
	g.dash.render(g)
	fmt.Printf("=== Parallel grind session finished (pulled=%d matched=%d deferred=%d) ===\n", g.launched, g.matched, g.deferred)
	if !cfg.StatusOnMatch {
		_ = exec.Command(g.bin("status"), "-readme").Run()
	}
	c := exec.Command(g.bin("status"))
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

// installPreCommit keeps .git/hooks/pre-commit in sync with tools/pre-commit when the hooks dir is writable.
func installPreCommit(root string) {
	src := filepath.Join(root, "tools", "pre-commit")
	b, err := os.ReadFile(src)
	if err != nil {
		return
	}
	hooks := filepath.Join(root, ".git", "hooks")
	if st, err := os.Stat(hooks); err != nil || !st.IsDir() {
		return
	}
	_ = os.WriteFile(filepath.Join(hooks, "pre-commit"), b, 0o755)
}

// buildIfNeeded rebuilds .local/bin/<name> when any .go file in tools/<name> or internal/ is newer.
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

// startWineserver keeps a persistent wineserver (5 min idle) so parallel cl.exe calls skip Wine startup.
func startWineserver(root string) {
	if _, err := exec.LookPath("wineserver"); err != nil {
		return
	}
	if st, err := os.Stat(filepath.Join(root, ".local", "msvc8")); err != nil || !st.IsDir() {
		return
	}
	os.Setenv("WINEPREFIX", filepath.Join(root, ".local", "wine_msvc8"))
	os.Setenv("WINEDEBUG", "-all")
	_ = exec.Command("wineserver", "-p300").Run()
}

// detectCLIs verifies the agent CLIs genuinely run (not broken wrapper shims).
func (g *grind) detectCLIs() {
	if exec.Command("claude", "--version").Run() == nil {
		g.hasClaude = true
		help, _ := exec.Command("claude", "--help").CombinedOutput()
		g.hasClaudeEffort = strings.Contains(string(help), "--effort")
	}
	g.hasAgy = exec.Command("agy", "--help").Run() == nil
}

// agySettings builds agy's inline, session-only least-privilege settings. agy turns write_file/edit_file
// entries into sandbox paths, and the sandbox rejects globs and relative paths (any such entry makes every
// sandboxed shell command fail to launch), so only absolute, glob-free directories. build/units stays
// writable: `work check` records matches there (.git stays read-only; the host runs `work commit-pending`).
// In parallel mode include/ is read-only (a header edit can silently break other shards).
func agySettings(root string, isolated bool) string {
	allow := []string{"read_file(*)",
		"write_file(" + root + "/src)", "write_file(" + root + "/include)", "write_file(" + root + "/build/units)",
		"write_file(" + root + "/.local)", "edit_file(" + root + "/src)", "edit_file(" + root + "/include)",
		"command(./.local/bin/work*)", "command(go run ./tools/work*)", "command(./.local/bin/status*)",
		"command(go run ./tools/status*)", "command(./.local/bin/build_and_match*)", "command(./tools/cl_wine.sh*)",
		"command(git status*)", "command(git diff*)", "command(git log*)", "command(git show*)", "command(git add*)",
		"command(git commit*)", "command(git checkout*)"}
	if isolated {
		var keep []string
		for _, a := range allow {
			if a != "write_file("+root+"/include)" && a != "edit_file("+root+"/include)" {
				keep = append(keep, a)
			}
		}
		allow = keep
	}
	deny := []string{"write_file(" + root + "/docs)", "command(sudo*)", "command(rm -rf*)", "command(python*)",
		"command(curl*)", "command(wget*)"}
	q := func(xs []string) string { return `"` + strings.Join(xs, `","`) + `"` }
	return `{"agentMode":"auto","enableTerminalSandbox":true,"toolPermission":"proceed-in-sandbox","permissions":{"allow":[` +
		q(allow) + `],"deny":[` + q(deny) + `]}}`
}

func (g *grind) printBanner() {
	c := g.cfg
	b := func(v bool) int {
		if v {
			return 1
		}
		return 0
	}
	efforts := strings.Join(c.Efforts, "->")
	if !c.Verbose {
		fmt.Printf("Endorphin grinder: tier0 x%d, escalation cap %d/model, %d waves, efforts %s, timeout %ds, auto_solve every %d  (claude=%d agy=%d; GRIND_VERBOSE=1 for details)\n",
			c.WaveSize, c.EscCap, c.MaxWaves, efforts, c.AgentTimeout, c.AutoSolveEvery, b(g.hasClaude), b(g.hasAgy))
		return
	}
	var tiers []string
	for _, t := range c.Tiers {
		tiers = append(tiers, strings.Join(t, " "))
	}
	fmt.Println("=== Endorphin Autonomous Parallel Grinder (1 Agent / Function Try) ===")
	fmt.Printf("Verified CLIs : claude=%d | agy=%d | efforts=%s\n", b(g.hasClaude), b(g.hasAgy), efforts)
	fmt.Printf("Pipeline      : tier0 runners=%d (tries every function) | escalation cap=%d/model | total_pulls=%d | push_every=%d | timeout=%ds | auto_solve every %d\n",
		c.WaveSize, c.EscCap, c.MaxWaves*c.WaveSize, c.PushEvery*c.WaveSize, c.AgentTimeout, c.AutoSolveEvery)
	fmt.Printf("Model Tiers   : %s\n", strings.Join(tiers, "  ->  "))
	fmt.Printf("Policy        : each model tries %s in order; if a model fails entirely, next model in tier tries; if tier fails, moves up a tier\n",
		strings.Join(c.Efforts, " -> "))
	fmt.Println("Security Mode : Scoped Allowlist + Sandbox + PreToolUse Guard [NO skip-dangerously]")
}
