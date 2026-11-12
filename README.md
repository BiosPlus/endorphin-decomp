# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `8994 / 24049` (**37.40%**) — `5902` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `437711 / 4496005 bytes` (**9.74%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2161 / 2405 | 89.85% | 54530 / 61769 | 88.28% | 244 fn |
| **P20-30 (32-48B)** | 1079 / 2405 | 44.86% | 41997 / 97731 | 42.97% | 1326 fn |
| **P30-40 (48-71B)** | 822 / 2405 | 34.18% | 49169 / 144549 | 34.02% | 1583 fn |
| **P40-50 (71-91B)** | 984 / 2405 | 40.91% | 82321 / 194373 | 42.35% | 1421 fn |
| **P50-60 (91-122B)** | 955 / 2405 | 39.71% | 104430 / 256906 | 40.65% | 1450 fn |
| **P60-70 (122-159B)** | 614 / 2405 | 25.53% | 80595 / 339038 | 23.77% | 1791 fn |
| **P70-80 (159-178B)** | 0 / 2405 | 0.00% | 0 / 400567 | 0.00% | 2405 fn |
| **P80-90 (178-335B)** | 0 / 2405 | 0.00% | 0 / 583211 | 0.00% | 2405 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 5800 | 380319 | 98.27% |
| `gemini-3.8-flash` | 76 | 9508 | 1.29% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.41% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
