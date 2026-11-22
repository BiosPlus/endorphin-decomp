# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `25782 / 25788` (**99.98%**) — `21360` by AI models, `4422` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `4155340 / 4190214 bytes` (**99.17%** of 4.00 MB)
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
| **P80-90 (170-304B)** | 2576 / 2579 | 99.88% | 579747 / 580485 | 99.87% | 3 fn |
| **P90-100 (304-20352B)** | 2575 / 2578 | 99.88% | 2060766 / 2094902 | 98.37% | 3 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 9238 | 1963664 | 43.25% |
| `claude-haiku-5.5@medium` | 7031 | 682491 | 32.92% |
| `gemini-4-hydrogen@low` | 2186 | 704380 | 10.23% |
| `gemini-3.8-flash@low` | 1886 | 496648 | 8.83% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.09% |
| `claude-sonnet-5.5@low` | 390 | 93207 | 1.83% |
| `gemini-4-hydrogen@medium` | 106 | 39918 | 0.50% |
| `claude-sonnet-5.5@medium` | 37 | 7278 | 0.17% |
| `gemini-3.8-flash@medium` | 24 | 4976 | 0.11% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `claude-opus-5.5@low` | 2 | 444 | 0.01% |
| `gemini-4-neon@medium` | 1 | 1790 | 0.00% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.00% |
| `gemini-4-argon@high` | 1 | 10 | 0.00% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
