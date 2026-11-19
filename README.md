# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `23962 / 25788` (**92.92%**) — `19588` by AI models, `4374` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `3145021 / 4190214 bytes` (**75.06%** of 4.00 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `23497` units (`1369` jump/adjustor thunks, `22128` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-14B)** | 2560 / 2579 | 99.26% | 22513 / 22688 | 99.23% | 19 fn |
| **P10-20 (14-30B)** | 2569 / 2579 | 99.61% | 56031 / 56242 | 99.62% | 10 fn |
| **P20-30 (30-45B)** | 2570 / 2579 | 99.65% | 90415 / 90749 | 99.63% | 9 fn |
| **P30-40 (45-64B)** | 2573 / 2579 | 99.77% | 135930 / 136238 | 99.77% | 6 fn |
| **P40-50 (64-85B)** | 2447 / 2578 | 94.92% | 182100 / 192045 | 94.82% | 131 fn |
| **P50-60 (85-114B)** | 2474 / 2579 | 95.93% | 243460 / 253742 | 95.95% | 105 fn |
| **P60-70 (114-155B)** | 2464 / 2579 | 95.54% | 325373 / 340642 | 95.52% | 115 fn |
| **P70-80 (156-170B)** | 2529 / 2579 | 98.06% | 414266 / 422481 | 98.06% | 50 fn |
| **P80-90 (170-304B)** | 2005 / 2579 | 77.74% | 447775 / 580485 | 77.14% | 574 fn |
| **P90-100 (304-20352B)** | 1771 / 2578 | 68.70% | 1227158 / 2094902 | 58.58% | 807 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 8052 | 1250739 | 41.11% |
| `claude-haiku-5.5@medium` | 6900 | 557464 | 35.23% |
| `gemini-4-hydrogen@low` | 2036 | 639760 | 10.39% |
| `gemini-3.8-flash@low` | 1785 | 482902 | 9.11% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.28% |
| `claude-sonnet-5.5@low` | 283 | 50088 | 1.44% |
| `gemini-4-hydrogen@medium` | 36 | 7601 | 0.18% |
| `claude-sonnet-5.5@medium` | 26 | 1765 | 0.13% |
| `gemini-3.8-flash@medium` | 10 | 2687 | 0.05% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `claude-opus-5.5@low` | 1 | 47 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
