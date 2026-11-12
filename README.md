# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9828 / 24049` (**40.87%**) — `6736` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `551126 / 4496005 bytes` (**12.26%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2166 / 2405 | 90.06% | 54683 / 61769 | 88.53% | 239 fn |
| **P20-30 (32-48B)** | 1138 / 2405 | 47.32% | 44366 / 97731 | 45.40% | 1267 fn |
| **P30-40 (48-71B)** | 879 / 2405 | 36.55% | 52430 / 144549 | 36.27% | 1526 fn |
| **P40-50 (71-91B)** | 1028 / 2405 | 42.74% | 85907 / 194373 | 44.20% | 1377 fn |
| **P50-60 (91-122B)** | 1030 / 2405 | 42.83% | 112281 / 256906 | 43.71% | 1375 fn |
| **P60-70 (122-159B)** | 873 / 2405 | 36.30% | 117165 / 339038 | 34.56% | 1532 fn |
| **P70-80 (159-178B)** | 185 / 2405 | 7.69% | 31157 / 400567 | 7.78% | 2220 fn |
| **P80-90 (178-335B)** | 150 / 2405 | 6.24% | 28468 / 583211 | 4.88% | 2255 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6394 | 460695 | 94.92% |
| `gemini-3.8-flash` | 316 | 42547 | 4.69% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.36% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
