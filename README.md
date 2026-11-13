# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12092 / 24049` (**50.28%**) — `9000` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1254282 / 4496005 bytes` (**27.90%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2218 / 2405 | 92.22% | 56276 / 61769 | 91.11% | 187 fn |
| **P20-30 (32-48B)** | 1266 / 2405 | 52.64% | 49320 / 97731 | 50.47% | 1139 fn |
| **P30-40 (48-71B)** | 1052 / 2405 | 43.74% | 62535 / 144549 | 43.26% | 1353 fn |
| **P40-50 (71-91B)** | 1144 / 2405 | 47.57% | 95332 / 194373 | 49.05% | 1261 fn |
| **P50-60 (91-122B)** | 1280 / 2405 | 53.22% | 137972 / 256906 | 53.71% | 1125 fn |
| **P60-70 (122-159B)** | 992 / 2405 | 41.25% | 133635 / 339038 | 39.42% | 1413 fn |
| **P70-80 (159-178B)** | 258 / 2405 | 10.73% | 43469 / 400567 | 10.85% | 2147 fn |
| **P80-90 (178-335B)** | 885 / 2405 | 36.80% | 212203 / 583211 | 36.39% | 1520 fn |
| **P90-100 (335-36100B)** | 618 / 2404 | 25.71% | 438871 / 2392860 | 18.34% | 1786 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6750 | 518631 | 75.00% |
| `claude-haiku-5.5@low` | 767 | 234894 | 8.52% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.97% |
| `gemini-3.8-flash@low` | 442 | 159731 | 4.91% |
| `gemini-4-hydrogen@low` | 388 | 191457 | 4.31% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.81% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.28% |
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
