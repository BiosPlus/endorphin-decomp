# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9956 / 24049` (**41.40%**) — `6864` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `567348 / 4496005 bytes` (**12.62%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2187 / 2405 | 90.94% | 55313 / 61769 | 89.55% | 218 fn |
| **P20-30 (32-48B)** | 1149 / 2405 | 47.78% | 44791 / 97731 | 45.83% | 1256 fn |
| **P30-40 (48-71B)** | 884 / 2405 | 36.76% | 52720 / 144549 | 36.47% | 1521 fn |
| **P40-50 (71-91B)** | 1039 / 2405 | 43.20% | 86815 / 194373 | 44.66% | 1366 fn |
| **P50-60 (91-122B)** | 1047 / 2405 | 43.53% | 114152 / 256906 | 44.43% | 1358 fn |
| **P60-70 (122-159B)** | 883 / 2405 | 36.72% | 118557 / 339038 | 34.97% | 1522 fn |
| **P70-80 (159-178B)** | 187 / 2405 | 7.78% | 31502 / 400567 | 7.86% | 2218 fn |
| **P80-90 (178-335B)** | 201 / 2405 | 8.36% | 38829 / 583211 | 6.66% | 2204 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6486 | 471769 | 94.49% |
| `gemini-3.8-flash` | 352 | 47695 | 5.13% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.35% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
