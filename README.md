# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9581 / 24049` (**39.84%**) — `6489` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `514117 / 4496005 bytes` (**11.43%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2164 / 2405 | 89.98% | 54622 / 61769 | 88.43% | 241 fn |
| **P20-30 (32-48B)** | 1123 / 2405 | 46.69% | 43750 / 97731 | 44.77% | 1282 fn |
| **P30-40 (48-71B)** | 861 / 2405 | 35.80% | 51374 / 144549 | 35.54% | 1544 fn |
| **P40-50 (71-91B)** | 1014 / 2405 | 42.16% | 84763 / 194373 | 43.61% | 1391 fn |
| **P50-60 (91-122B)** | 1000 / 2405 | 41.58% | 109124 / 256906 | 42.48% | 1405 fn |
| **P60-70 (122-159B)** | 856 / 2405 | 35.59% | 114801 / 339038 | 33.86% | 1549 fn |
| **P70-80 (159-178B)** | 177 / 2405 | 7.36% | 29760 / 400567 | 7.43% | 2228 fn |
| **P80-90 (178-335B)** | 7 / 2405 | 0.29% | 1254 / 583211 | 0.22% | 2398 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6210 | 433403 | 95.70% |
| `gemini-3.8-flash` | 253 | 32830 | 3.90% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.37% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
