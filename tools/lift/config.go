package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

type config struct {
	MaxWaves, WaveSize, PushEvery int

	Scope             string   // LIFT_SCOPE (default "core")
	DepsFirst         bool     // LIFT_DEPS_FIRST (default true)
	IncludeCpp        bool     // LIFT_INCLUDE_CPP (default false)
	LiftIsolated      bool     // LIFT_ISOLATED (default true)
	RunAutoLift       bool     // RUN_AUTO_LIFT (default true): run `liftwork auto-lift` pre-pass at startup
	AutoLiftEvery     int      // AUTO_LIFT_EVERY (default 5): drain active workers and re-run `liftwork auto-lift` every N lifted matches (0 = start only)
	AgentTimeout      int      // AGENT_TIMEOUT
	Efforts           []string // AGENT_EFFORTS
	CooldownBaseSecs  int      // COOLDOWN_BASE_SECS
	PreferAgyClaude   bool     // PREFER_AGY_CLAUDE
	MaxSize           int      // MAX_SIZE
	IgnoreAttempts    bool     // IGNORE_ATTEMPTS
	PerFileCap        int      // PER_FILE_CAP
	EscCap            int      // ESC_CAP
	ModelCaps         map[string]int
	EscBacklogFactor  int
	ModelMinSize      map[string]int
	Tiers             [][]string // MODEL_TIERS
	LimitProbeSecs    int
	LimitProbeMaxSecs int
	Verbose           bool // LIFT_VERBOSE
	Plain             bool // LIFT_PLAIN
	DashEventRows     int
	AttemptsFile      string
	ResultsLog        string
	EventsLog         string
}

func envStr(k, def string) string {
	if v, ok := os.LookupEnv(k); ok && v != "" {
		return v
	}
	return def
}

func envInt(k string, def int) int {
	if v, err := strconv.Atoi(envStr(k, "")); err == nil {
		return v
	}
	return def
}

func envBool(k string, def bool) bool {
	switch envStr(k, "") {
	case "1":
		return true
	case "0":
		return false
	}
	return def
}

func parseKV(s string) map[string]int {
	out := map[string]int{}
	for _, part := range strings.Split(s, ",") {
		if k, v, ok := strings.Cut(strings.TrimSpace(part), "="); ok {
			if n, err := strconv.Atoi(v); err == nil {
				out[k] = n
			}
		}
	}
	return out
}

func loadConfig(args []string) (*config, error) {
	pos := func(i, def int) (int, error) {
		if i < len(args) {
			n, err := strconv.Atoi(args[i])
			if err != nil {
				return 0, fmt.Errorf("argument %d (%q) is not a number", i+1, args[i])
			}
			return n, nil
		}
		return def, nil
	}
	c := &config{}
	var err error
	if c.MaxWaves, err = pos(0, 50); err != nil {
		return nil, err
	}
	if c.WaveSize, err = pos(1, 5); err != nil {
		return nil, err
	}
	if c.PushEvery, err = pos(2, 5); err != nil {
		return nil, err
	}
	c.Scope = envStr("LIFT_SCOPE", "core")
	c.DepsFirst = envBool("LIFT_DEPS_FIRST", true)
	c.IncludeCpp = envBool("LIFT_INCLUDE_CPP", false)
	c.LiftIsolated = envBool("LIFT_ISOLATED", true)
	c.RunAutoLift = envBool("RUN_AUTO_LIFT", true)
	c.AutoLiftEvery = envInt("AUTO_LIFT_EVERY", 5)
	c.AgentTimeout = envInt("AGENT_TIMEOUT", 360)
	c.Efforts = strings.Fields(envStr("AGENT_EFFORTS", envStr("AGENT_EFFORT", "low medium")))
	c.CooldownBaseSecs = envInt("COOLDOWN_BASE_SECS", 180)
	c.PreferAgyClaude = envBool("PREFER_AGY_CLAUDE", true)
	c.MaxSize = envInt("MAX_SIZE", 65535)
	c.IgnoreAttempts = envBool("IGNORE_ATTEMPTS", false)
	c.PerFileCap = envInt("PER_FILE_CAP", 10)
	if !c.LiftIsolated {
		c.PerFileCap = 1
	}
	c.EscCap = envInt("ESC_CAP", 4)
	c.ModelCaps = parseKV(envStr("MODEL_CAPS", ""))
	c.EscBacklogFactor = envInt("ESC_BACKLOG_FACTOR", 4)
	c.ModelMinSize = parseKV(envStr("MODEL_MIN_SIZE", ""))
	for _, t := range strings.Split(envStr("MODEL_TIERS",
		"claude-haiku-5.5|claude-sonnet-5.5|gemini-4-hydrogen|claude-opus-5.5 gemini-4-neon|gemini-4-carbon"), "|") {
		if f := strings.Fields(t); len(f) > 0 {
			c.Tiers = append(c.Tiers, f)
		}
	}
	if len(c.Tiers) == 0 {
		return nil, fmt.Errorf("MODEL_TIERS is empty")
	}
	c.LimitProbeSecs = envInt("LIMIT_PROBE_SECS", 900)
	c.LimitProbeMaxSecs = envInt("LIMIT_PROBE_MAX_SECS", 3600)
	c.Verbose = envBool("LIFT_VERBOSE", false)
	c.Plain = envBool("LIFT_PLAIN", false)
	c.DashEventRows = envInt("DASH_EVENT_ROWS", 8)
	c.AttemptsFile = envStr("LIFT_ATTEMPTS_FILE", ".local/lift_attempts.tsv")
	c.ResultsLog = envStr("LIFT_RESULTS_LOG", ".local/lift_results.log")
	c.EventsLog = envStr("LIFT_EVENTS_LOG", ".local/lift_events.log")
	return c, nil
}

func baseModel(spec string) string {
	if i := strings.IndexByte(spec, '/'); i != -1 {
		return spec[i+1:]
	}
	return spec
}

func pinOf(spec string) string {
	if i := strings.IndexByte(spec, '/'); i != -1 {
		return spec[:i]
	}
	return ""
}
