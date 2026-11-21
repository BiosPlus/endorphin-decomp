# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `25160 / 25788` (**97.56%**) — `20738` by AI models, `4422` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `3409073 / 4190214 bytes` (**81.36%** of 4.00 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `23497` units (`1369` jump/adjustor thunks, `22128` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-14B)** | 2560 / 2579 | 99.26% | 22513 / 22688 | 99.23% | 19 fn |
| **P10-20 (14-30B)** | 2569 / 2579 | 99.61% | 56031 / 56242 | 99.62% | 10 fn |
| **P20-30 (30-45B)** | 2570 / 2579 | 99.65% | 90415 / 90749 | 99.63% | 9 fn |
| **P30-40 (45-64B)** | 2575 / 2579 | 99.84% | 136035 / 136238 | 99.85% | 4 fn |
| **P40-50 (64-85B)** | 2574 / 2578 | 99.84% | 191749 / 192045 | 99.85% | 4 fn |
| **P50-60 (85-114B)** | 2577 / 2579 | 99.92% | 253534 / 253742 | 99.92% | 2 fn |
| **P60-70 (114-155B)** | 2578 / 2579 | 99.96% | 340510 / 340642 | 99.96% | 1 fn |
| **P70-80 (156-170B)** | 2579 / 2579 | 100.00% | 422481 / 422481 | 100.00% | 0 fn |
| **P80-90 (170-304B)** | 2574 / 2579 | 99.81% | 579295 / 580485 | 99.79% | 5 fn |
| **P90-100 (304-20352B)** | 2004 / 2578 | 77.73% | 1316510 / 2094902 | 62.84% | 574 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 8751 | 1418778 | 42.20% |
| `claude-haiku-5.5@medium` | 6968 | 574422 | 33.60% |
| `gemini-4-hydrogen@low` | 2159 | 661446 | 10.41% |
| `gemini-3.8-flash@low` | 1886 | 496648 | 9.09% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.16% |
| `claude-sonnet-5.5@low` | 358 | 66837 | 1.73% |
| `gemini-4-hydrogen@medium` | 99 | 21668 | 0.48% |
| `claude-sonnet-5.5@medium` | 32 | 3310 | 0.15% |
| `gemini-3.8-flash@medium` | 24 | 4976 | 0.12% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `claude-opus-5.5@low` | 2 | 444 | 0.01% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.00% |
| `gemini-4-argon@high` | 1 | 10 | 0.00% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
