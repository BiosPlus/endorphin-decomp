# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation and portable C++ lifting project for **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`, MSVC 2005 RTM `14.00.50727.42`, x86).

- **Phase 1 (MSVC8 Byte-Match):** **100.00% Complete** (`src/`)
- **Phase 2 (Portable C++ Lift & Struct Recovery):** `8 / 6574` core ASM functions lifted (**0.12%**), `2816 / 25643` total portable C++ (**10.98%**), `4` struct fields recovered across `4` classes (`lifted/`)

## Contributing (Phase 2: AI-Assisted C++ Lifting & Struct Recovery)

Phase 1 matched 100% of in-scope functions byte-for-byte, but ~96% of `src/` is x86 `__declspec(naked) __asm`. **Phase 2** lifts those functions into clean, portable C++20 in `lifted/` while recovering function names (`lifted/symbols.json`) and struct layouts (`lifted/include/*.h`) — without touching the verified byte-match in `src/`.

### What You Need

- **Linux or macOS** (no Windows, Wine, or MSVC 2005 needed for Phase 2)
- **Go 1.22+** and **g++ or clang++** (used for instant native `-std=c++20 -fsyntax-only` verification)
- An AI coding CLI: **`claude`** (Claude Code) and/or **`agy`** (Antigravity) for autonomous grinding — or any AI assistant for manual single-function lifts
- *(Optional, recommended for best naming quality)* Your own legal copy of `endorphin.exe` at `.local/bin/endorphin.exe` so `liftwork claim` can decode `.rdata` string literals and float constants into briefings

### Quick Start (3 Steps)

1. **Clone & build the lift CLI:**
   ```bash
   git clone https://github.com/BiosPlus/endorphin-decomp.git
   cd endorphin-decomp
   mkdir -p .local/bin && go build -o .local/bin/liftwork ./tools/liftwork
   ./.local/bin/liftwork status
   ```
2. **Run the autonomous AI lift orchestrator (recommended for most complete results):**
   ```bash
   # Lift core engine subsystems leaf-first (physics, exporters, I/O, camera)
   # Args: [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]
   LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5
   ```
   Useful variations:
   ```bash
   # Focus on animation exporters & file I/O
   LIFT_SCOPE=BVHIO,AcclaimIO,FBXIO,NMFileIO LIFT_DEPS_FIRST=1 tools/lift.sh 20 5 5
   # Lift the entire binary (all remaining __asm functions)
   LIFT_SCOPE=all LIFT_DEPS_FIRST=1 tools/lift.sh 50 5 5
   # Disable auto-push if working on a fork before opening a PR
   LIFT_SCOPE=core LIFT_DEPS_FIRST=1 tools/lift.sh 25 5 0
   ```
3. **Or lift one function at a time with any AI assistant:**
   ```bash
   ./.local/bin/liftwork next --scope core --deps-first --limit 5
   ./.local/bin/liftwork claim 0xXXXXXXXX --isolated
   # Ask your AI to rewrite lifted/wip/fn_XXXXXXXX.cpp in clean C++20 (no __asm/naked/_emit)
   # with @name, @class, @summary, and @field annotations, then verify & merge:
   ./.local/bin/liftwork check 0xXXXXXXXX --model <model@effort>
   ```

> **Why `LIFT_DEPS_FIRST=1` matters:** Lifting leaf functions first populates `lifted/symbols.json` and `lifted/include/<Class>.h` before callers are claimed, giving every subsequent function real callee names and struct field offsets automatically.

**Contribution rules:** Never edit `src/`, `build/units/`, `build/classes.json`, or `README.md` by hand, and never commit `.local/`, `docs/`, or binary files (`.exe`, `.dll`, `.obj`). Always let `liftwork check` validate and merge your lifted functions, then open a PR against `main`.

## Phase 1: Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `25788 / 25788` (**100.00%**) — `21366` by AI models, `4422` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `4190214 / 4190214 bytes` (**100.00%** of 4.00 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `23497` units (`1369` jump/adjustor thunks, `22128` CRT/MFC/SEH funclets)

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

## Tooling & Workflow

- `tools/lift.sh [MAX_WAVES] [WAVE_SIZE] [PUSH_EVERY]`: Autonomous parallel Phase 2 C++ lifting & struct/naming recovery orchestrator.
- `./.local/bin/liftwork status`: Prints live Phase 2 lift, naming, and struct-field recovery metrics.
- `./.local/bin/liftwork merge-structs`: Rebuilds `lifted/symbols.json` and `lifted/include/*.h` from `build/lifted/`.
- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/status -readme`: Regenerates `README.md` with the latest verified Phase 1 & Phase 2 metrics.
