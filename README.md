# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation and portable C++20 lifting project for **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`, MSVC 2005 RTM `14.00.50727.42`, x86).

## Status

- **Phase 1 — MSVC8 Byte-Match (`src/`):** **100.00% Complete** (`25788 / 25788` in-scope functions, `4.00 MB`)
- **Phase 2 — Portable C++20 Lift & Struct Recovery (`lifted/`):** `8 / 6574` core ASM functions lifted (**0.12%**), `2919 / 25643` total portable C++ (**11.38%**), `31` struct fields recovered across `11` classes

## Contributing to Phase 2 (Portable C++20 Lifting)

Phase 1 matched 100% of in-scope functions byte-for-byte, but ~96% of `src/` is x86 `__declspec(naked) __asm`. **Phase 2** lifts those functions into clean, portable C++20 in `lifted/` while recovering human-readable names (`lifted/symbols.json`) and struct layouts (`lifted/include/*.h`) — without touching the verified byte-match in `src/`.

### Prerequisites

- **macOS or Linux** (no Windows, Wine, or MSVC 2005 required)
- **Go 1.22+** and **clang++ or g++** with C++20 support (used for instant `-std=c++20 -fsyntax-only` verification)
- An AI coding CLI (**`claude`**, **`agy`**, or a local LLM via **MLX**)
- *(Optional, recommended)* Your own legal copy of `endorphin.exe` at `.local/bin/endorphin.exe` so `liftwork claim` can decode `.rdata` strings and float constants into briefings

### 1. Setup

```bash
git clone https://github.com/BiosPlus/endorphin-decomp.git
cd endorphin-decomp
mkdir -p .local/bin && go build -o .local/bin/liftwork ./tools/liftwork
./.local/bin/liftwork status
```

### 2. Autonomous Lifting (Cloud CLIs: `claude` / `agy`)

```bash
# Lift core engine subsystems leaf-first (Args: [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY])
LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5

# Working on a fork? Disable auto-push (PUSH_EVERY=0) before opening a PR
LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 25 5 0

# Target specific subsystems (e.g. animation exporters & file I/O) or the full binary
LIFT_SCOPE=BVHIO,AcclaimIO,FBXIO,NMFileIO LIFT_DEPS_FIRST=1 tools/lift.sh 20 5 0
LIFT_SCOPE=all LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 0
```

### 3. Running Locally on macOS with MLX (Small Functions)

Apple Silicon Macs can lift small leaf functions locally at zero API cost using **MLX** and native Apple Clang (`xcode-select --install && brew install go`).

#### Recommended MLX Models

| Unified Memory | Suggested MLX Models | Recommended `MAX_SIZE` |
| :--- | :--- | :--- |
| **8–16 GB** | `mlx-community/Qwen2.5-Coder-7B-Instruct-4bit`, `mlx-community/Qwen2.5-Coder-14B-Instruct-4bit` | `80`–`120` bytes |
| **24–32 GB** | `mlx-community/Qwen2.5-Coder-14B-Instruct-4bit`, `mlx-community/Qwen3-Coder-30B-A3B-Instruct-4bit` | `150`–`300` bytes |
| **48–64+ GB** | `mlx-community/Qwen2.5-Coder-32B-Instruct-4bit`, `mlx-community/Qwen3-Coder-30B-A3B-Instruct-8bit` | `300`–`500+` bytes |

#### Option A: Autonomous `tools/lift.sh` via an Anthropic-Compatible MLX Server

Use an Apple Silicon MLX server that exposes `/v1/messages` (such as **LM Studio** with its MLX engine on port `1234`, **oMLX** on port `8000`, or **`vllm-mlx`**), then point the `claude` CLI at it:

```bash
# Point Claude Code at your local MLX server (configure >=16K context in the server)
export ANTHROPIC_BASE_URL="http://localhost:1234"   # or http://localhost:8000 for oMLX
export ANTHROPIC_AUTH_TOKEN="mlx"
export ANTHROPIC_API_KEY=""
export ANTHROPIC_DEFAULT_HAIKU_MODEL="mlx-community/Qwen2.5-Coder-14B-Instruct-4bit"
export CLAUDE_CODE_DISABLE_NONESSENTIAL_TRAFFIC=1

# Grind small leaf functions 1-at-a-time (prevents GPU thrashing), no auto-push
caffeinate -i env \
  LIFT_SCOPE=core \
  LIFT_DEPS_FIRST=1 \
  PREFER_AGY_CLAUDE=0 \
  MODEL_TIERS="claude-mlx-qwen2.5-coder-14b" \
  AGENT_EFFORTS="low" \
  MAX_SIZE=150 \
  AGENT_TIMEOUT=600 \
  tools/lift.sh 25 1 0
```

#### Option B: Direct `mlx_lm.server` + `liftwork` (Lightweight / OpenAI-Compatible)

To avoid Claude Code's system-prompt overhead on 7B–14B models, serve MLX directly and pair it with any lightweight coding CLI (e.g. OpenCode, Aider) or single-function script:

```bash
pip install mlx-lm
mlx_lm.server --model mlx-community/Qwen2.5-Coder-14B-Instruct-4bit --port 8080
```

Then claim and verify small leaf functions with `liftwork`:

```bash
./.local/bin/liftwork next --scope core --deps-first --max-size 120 --limit 10
./.local/bin/liftwork claim 0xXXXXXXXX --isolated
# Have your MLX model rewrite lifted/wip/fn_XXXXXXXX.cpp in clean C++20
# with // [0xXXXXXXXX], // @name, // @class, // @summary, and // @field tags
./.local/bin/liftwork check 0xXXXXXXXX --model mlx-qwen2.5-coder-14b@local
```

> **Tips for small local models:**
> - **Focus on small leaf functions (`MAX_SIZE=80`–`150`, `LIFT_DEPS_FIRST=1`):** Getters, setters, trivial constructors, and math helpers give high accuracy and populate `lifted/symbols.json` + `lifted/include/<Class>.h` for larger callers.
> - **Keep `WAVE_SIZE=1`** on Apple Silicon to avoid Metal memory contention, and raise `AGENT_TIMEOUT=600`.
> - **Review before opening a PR:** Run `git log -n 10 -p` (with `PUSH_EVERY=0`) to verify logic and field names before pushing.

### Contribution Rules

- Never edit `src/`, `build/units/`, `build/classes.json`, or `README.md` by hand.
- Never commit `.local/`, `docs/`, `*_PLAN.md`, or binary files (`.exe`, `.dll`, `.obj`).
- Always let `liftwork check` validate, compile-check, merge, and commit your lifted functions, then open a PR against `main`.

## Phase 1: Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `25788 / 25788` (**100.00%**) — `21366` by AI models, `4422` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `4190214 / 4190214 bytes` (**100.00%** of 4.00 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `23497` units (`1369` jump/adjustor thunks, `22128` CRT/MFC/SEH funclets)

<details>
<summary>Phase 1 Size Tiers &amp; AI Model Leaderboard</summary>

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-14B)** | 2579 / 2579 | 100.00% | 22688 / 22688 | 100.00% | 0 fn |
| **P10-20 (14-30B)** | 2579 / 2579 | 100.00% | 56242 / 56242 | 100.00% | 0 fn |
| **P20-30 (30-45B)** | 2579 / 2579 | 100.00% | 90749 / 90749 | 100.00% | 0 fn |
| **P30-40 (45-64B)** | 2579 / 2579 | 100.00% | 136238 / 136238 | 100.00% | 0 fn |
| **P40-50 (64-85B)** | 2578 / 2578 | 100.00% | 192045 / 192045 | 100.00% | 0 fn |
| **P50-60 (85-114B)** | 2579 / 2579 | 100.00% | 253742 / 253742 | 100.00% | 0 fn |
| **P60-70 (114-155B)** | 2579 / 2579 | 100.00% | 340642 / 340642 | 100.00% | 0 fn |
| **P70-80 (156-170B)** | 2579 / 2579 | 100.00% | 422481 / 422481 | 100.00% | 0 fn |
| **P80-90 (170-304B)** | 2579 / 2579 | 100.00% | 580485 / 580485 | 100.00% | 0 fn |
| **P90-100 (304-20352B)** | 2578 / 2578 | 100.00% | 2094902 / 2094902 | 100.00% | 0 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 9238 | 1963664 | 43.24% |
| `claude-haiku-5.5@medium` | 7031 | 682491 | 32.91% |
| `gemini-4-hydrogen@low` | 2190 | 716589 | 10.25% |
| `gemini-3.8-flash@low` | 1886 | 496648 | 8.83% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.09% |
| `claude-sonnet-5.5@low` | 390 | 93207 | 1.83% |
| `gemini-4-hydrogen@medium` | 108 | 62583 | 0.51% |
| `claude-sonnet-5.5@medium` | 37 | 7278 | 0.17% |
| `gemini-3.8-flash@medium` | 24 | 4976 | 0.11% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `claude-opus-5.5@low` | 2 | 444 | 0.01% |
| `gemini-4-neon@medium` | 1 | 1790 | 0.00% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.00% |
| `gemini-4-argon@high` | 1 | 10 | 0.00% |

</details>

## Tooling & Workflow

- `tools/lift.sh [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]`: Autonomous parallel Phase 2 C++20 lifting & struct/naming recovery orchestrator.
- `./.local/bin/liftwork status`: Live Phase 2 lift, naming, and struct-field recovery scoreboard.
- `./.local/bin/liftwork merge-structs`: Rebuilds `lifted/symbols.json` and `lifted/include/*.h` from `build/lifted/`.
- `go run ./tools/build_and_match -all`: Verifies 100% MSVC 2005 byte-for-byte parity in `src/` against `.local/bin/endorphin.exe`.
- `go run ./tools/status -readme`: Regenerates `README.md` with the latest verified Phase 1 & Phase 2 metrics.
