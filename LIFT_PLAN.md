# De-ASM & Struct/Naming Lift Tooling Plan (`tools/lift`)

> **Goal:** Automatically lift the `23,681` x86 `__declspec(naked) __asm` functions (`96.24%` of matched code bytes) into **clean, readable, portable C++** while simultaneously recovering **human-readable function names** and **struct field layouts** — without ever breaking the 100% MSVC8 byte-match in `src/`.

---

## Architecture Overview

Rather than overwriting `src/` (which must stay 100% MSVC8 byte-matched), the lift pipeline writes into a parallel `lifted/` tree and `build/lifted/` ledger:

```text
build/lifted/<shard>/<VA>.json   ← Per-function lift ledger (name, signature, summary, struct_fields, model, status)
lifted/symbols.json              ← Aggregated VA -> {name, signature, class} index (fed into future briefings!)
lifted/include/<Class>.h         ← Aggregated struct/class headers with recovered fields & byte offsets
lifted/<rel-path>.cpp            ← Clean, portable C++ (zero __asm / naked / _emit)
lifted/wip/fn_<VA>.cpp           ← Isolated per-worker scratch file for parallel lifting
```

### The Flywheel Effect (Bottom-Up Call-Graph Lifting)
1. **Queue order (`deps-first`):** Leaf functions get lifted first, then their callers.
2. **Enriched briefings:** When a worker claims `0xXXXXXXXX`, `liftwork claim` automatically injects:
   - The verified disassembly & existing `src/` body.
   - Already-recovered **callee names & signatures** from `lifted/symbols.json`.
   - Already-recovered **struct fields** from `lifted/include/<Class>.h` and RTTI from `build/classes.json`.
   - String literals / `.rdata` constants referenced by `mem_XXXXXXXX` addresses!
3. **Structured output + verification (`liftwork check`):**
   - Rejects any `__asm`, `__declspec(naked)`, `_emit`, or `TODO` stubs.
   - Syntax/type-checks the lifted C++ natively on Linux via `g++`/`clang++` (`-fsyntax-only` with a lightweight `lifted/include/lift_compat.h` shim) — **instant, zero Wine overhead**.
   - Parses structured metadata comments (`// @name`, `// @class`, `// @summary`, `// @field Class +0xNN type name`) from the lifted file.
   - Under `internal/worklock`, merges the function into `lifted/<rel-path>.cpp`, writes `build/lifted/<shard>/<VA>.json`, updates `lifted/symbols.json` + affected `lifted/include/<Class>.h`, and auto-commits.

---

## Components to Build (Go + Bash, mirroring `tools/grind`)

### 1. `tools/liftwork` (Worker CLI, mirrors `tools/work`)
- `liftwork next [--scope core|all|<glob>] [--deps-first] [--max-size N] [--limit N]`
  - Lists next unlifted functions (prioritizing `__asm`/`naked` functions; pure-C++ functions can optionally be named/documented too).
  - Built-in `--scope core` preset targets high-value Adrenaline subsystems first:
    `BVHIO`, `AcclaimIO`, `Acclaim2*`, `FBXIO`, `NMFileIO`, `OBJIO`, `CDLCharacterIO`, `CSMMotionIO`, `NMCIO`, `ExportDialog`, `ExportUnavailableDialog`, `MdtArthur`, `RuntimeEngine`, `Geometry`, `Sensors`, `StateMachine`, `Interpolator`, `ExprParser`, `NMData`, `Primitives`, `NMCamera`, `Chromosome`, `MultiTrackView`.
- `liftwork claim <VA>`
  - Prints compact briefing (original `src/` body, disassembly, `.rdata` strings/floats referenced, known callee names from `lifted/symbols.json`, known struct fields for the class) and prepares `lifted/wip/fn_<VA>.cpp` in isolated mode.
- `liftwork check <VA> --model <model@effort>`
  - Validates: no `__asm`/`naked`/`_emit`/`TODO`, valid metadata tags, compiles cleanly with native `g++`/`clang++ -fsyntax-only`.
  - Acquires `internal/worklock`, merges into `lifted/<rel-path>.cpp`, records `build/lifted/<shard>/<VA>.json`, updates `lifted/symbols.json` & `lifted/include/<Class>.h`, and commits.
- `liftwork skip <VA> "<reason>"` — marks a unit skipped/deferred cleanly.
- `liftwork merge-structs` — rebuilds `lifted/symbols.json` and all `lifted/include/*.h` headers from `build/lifted/*/*.json` (idempotent).
- `liftwork status` — prints lift scoreboard (lifted funcs, lifted bytes, named funcs, recovered struct fields, per-subsystem progress, model leaderboard).
- `liftwork clean` — removes stale `lifted/wip/` files.

### 2. `tools/lift` + `tools/lift.sh` (Parallel Orchestrator, mirrors `tools/grind` + `tools/grind.sh`)
- Reuses the proven `tools/grind` scheduling model:
  - Multi-model tier escalation (`MODEL_TIERS`, `AGENT_EFFORTS`, `PREFER_AGY_CLAUDE`, `COOLDOWN_BASE_SECS`).
  - `agy` + `claude` CLI harness support with quota/rate-limit pool cooldowns.
  - Parallel workers with `LIFT_ISOLATED=1` (`lifted/wip/fn_<VA>.cpp`) and per-file concurrency cap.
  - Live dashboard / plain mode (`LIFT_PLAIN=1`), attempt tracking (`.local/lift_attempts.tsv`), and periodic `git push`.
  - New knob: `LIFT_SCOPE=core` (default) or `all` or comma-separated path/class prefixes.

### 3. Security Guard Compatibility (`tools/security_guard.sh`)
- Ensure worker sessions running under `LIFT_ASSIGNED_ADDR` (or `WORK_ASSIGNED_ADDR`) are permitted to edit their assigned `lifted/wip/fn_<VA>.cpp` and invoke `./.local/bin/liftwork`.

---

## Verification Plan
- `go test ./tools/liftwork/... ./tools/lift/...` — unit tests for metadata parsing, asm rejection, struct field aggregation, scope filtering, and briefing generation.
- `go build` both `.local/bin/liftwork` and `.local/bin/lift`.
- End-to-end smoke test: run `liftwork next --scope core --limit 5`, `liftwork claim <VA>`, write a sample lifted function into `lifted/wip/`, run `liftwork check --dry-run` (verifying native C++ compilation + metadata extraction + asm rejection), and clean up.
