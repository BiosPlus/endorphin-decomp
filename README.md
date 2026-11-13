# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12208 / 24049` (**50.76%**) — `9116` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1301054 / 4496005 bytes` (**28.94%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1323 / 2405 | 55.01% | 51264 / 97731 | 52.45% | 1082 fn |
| **P30-40 (48-71B)** | 1053 / 2405 | 43.78% | 62589 / 144549 | 43.30% | 1352 fn |
| **P40-50 (71-91B)** | 1144 / 2405 | 47.57% | 95332 / 194373 | 49.05% | 1261 fn |
| **P50-60 (91-122B)** | 1282 / 2405 | 53.31% | 138180 / 256906 | 53.79% | 1123 fn |
| **P60-70 (122-159B)** | 996 / 2405 | 41.41% | 134207 / 339038 | 39.58% | 1409 fn |
| **P70-80 (159-178B)** | 259 / 2405 | 10.77% | 43643 / 400567 | 10.90% | 2146 fn |
| **P80-90 (178-335B)** | 889 / 2405 | 36.96% | 213307 / 583211 | 36.57% | 1516 fn |
| **P90-100 (335-36100B)** | 632 / 2404 | 26.29% | 480546 / 2392860 | 20.08% | 1772 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6752 | 525991 | 74.07% |
| `claude-haiku-5.5@low` | 804 | 247157 | 8.82% |
| `gemini-3.8-flash@low` | 474 | 179373 | 5.20% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.90% |
| `gemini-4-hydrogen@low` | 433 | 198964 | 4.75% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.79% |
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
