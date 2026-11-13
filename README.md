# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12311 / 24049` (**51.19%**) — `9219` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1317549 / 4496005 bytes` (**29.30%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1402 / 2405 | 58.30% | 54275 / 97731 | 55.54% | 1003 fn |
| **P30-40 (48-71B)** | 1055 / 2405 | 43.87% | 62698 / 144549 | 43.37% | 1350 fn |
| **P40-50 (71-91B)** | 1148 / 2405 | 47.73% | 95662 / 194373 | 49.22% | 1257 fn |
| **P50-60 (91-122B)** | 1285 / 2405 | 53.43% | 138502 / 256906 | 53.91% | 1120 fn |
| **P60-70 (122-159B)** | 997 / 2405 | 41.46% | 134329 / 339038 | 39.62% | 1408 fn |
| **P70-80 (159-178B)** | 259 / 2405 | 10.77% | 43643 / 400567 | 10.90% | 2146 fn |
| **P80-90 (178-335B)** | 899 / 2405 | 37.38% | 215565 / 583211 | 36.96% | 1506 fn |
| **P90-100 (335-36100B)** | 636 / 2404 | 26.46% | 490889 / 2392860 | 20.51% | 1768 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6752 | 525991 | 73.24% |
| `claude-haiku-5.5@low` | 853 | 250852 | 9.25% |
| `gemini-3.8-flash@low` | 494 | 190128 | 5.36% |
| `gemini-4-hydrogen@low` | 467 | 201009 | 5.07% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.85% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.77% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.27% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.04% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
