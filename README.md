# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12132 / 24049` (**50.45%**) — `9040` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1284158 / 4496005 bytes` (**28.56%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2243 / 2405 | 93.26% | 57061 / 61769 | 92.38% | 162 fn |
| **P20-30 (32-48B)** | 1269 / 2405 | 52.77% | 49432 / 97731 | 50.58% | 1136 fn |
| **P30-40 (48-71B)** | 1052 / 2405 | 43.74% | 62535 / 144549 | 43.26% | 1353 fn |
| **P40-50 (71-91B)** | 1144 / 2405 | 47.57% | 95332 / 194373 | 49.05% | 1261 fn |
| **P50-60 (91-122B)** | 1281 / 2405 | 53.26% | 138069 / 256906 | 53.74% | 1124 fn |
| **P60-70 (122-159B)** | 992 / 2405 | 41.25% | 133635 / 339038 | 39.42% | 1413 fn |
| **P70-80 (159-178B)** | 258 / 2405 | 10.73% | 43469 / 400567 | 10.85% | 2147 fn |
| **P80-90 (178-335B)** | 889 / 2405 | 36.96% | 213307 / 583211 | 36.57% | 1516 fn |
| **P90-100 (335-36100B)** | 625 / 2404 | 26.00% | 466649 / 2392860 | 19.50% | 1779 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6751 | 521324 | 74.68% |
| `claude-haiku-5.5@low` | 784 | 238314 | 8.67% |
| `gemini-3.8-flash@low` | 448 | 177924 | 4.96% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.94% |
| `gemini-4-hydrogen@low` | 404 | 197027 | 4.47% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.80% |
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
