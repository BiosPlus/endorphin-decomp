# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11804 / 24049` (**49.08%**) — `8712` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1049632 / 4496005 bytes` (**23.35%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2206 / 2405 | 91.73% | 55908 / 61769 | 90.51% | 199 fn |
| **P20-30 (32-48B)** | 1245 / 2405 | 51.77% | 48519 / 97731 | 49.65% | 1160 fn |
| **P30-40 (48-71B)** | 1027 / 2405 | 42.70% | 61099 / 144549 | 42.27% | 1378 fn |
| **P40-50 (71-91B)** | 1128 / 2405 | 46.90% | 94041 / 194373 | 48.38% | 1277 fn |
| **P50-60 (91-122B)** | 1267 / 2405 | 52.68% | 136597 / 256906 | 53.17% | 1138 fn |
| **P60-70 (122-159B)** | 982 / 2405 | 40.83% | 132285 / 339038 | 39.02% | 1423 fn |
| **P70-80 (159-178B)** | 252 / 2405 | 10.48% | 42446 / 400567 | 10.60% | 2153 fn |
| **P80-90 (178-335B)** | 848 / 2405 | 35.26% | 203468 / 583211 | 34.89% | 1557 fn |
| **P90-100 (335-36100B)** | 470 / 2404 | 19.55% | 250600 / 2392860 | 10.47% | 1934 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 77.46% |
| `claude-haiku-5.5@low` | 663 | 175461 | 7.61% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.13% |
| `gemini-3.8-flash@low` | 369 | 102785 | 4.24% |
| `gemini-4-hydrogen@low` | 279 | 105920 | 3.20% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.87% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.29% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
