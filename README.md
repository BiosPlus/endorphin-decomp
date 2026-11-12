# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10051 / 24049` (**41.79%**) — `6959` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `583649 / 4496005 bytes` (**12.98%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2189 / 2405 | 91.02% | 55376 / 61769 | 89.65% | 216 fn |
| **P20-30 (32-48B)** | 1159 / 2405 | 48.19% | 45223 / 97731 | 46.27% | 1246 fn |
| **P30-40 (48-71B)** | 890 / 2405 | 37.01% | 53093 / 144549 | 36.73% | 1515 fn |
| **P40-50 (71-91B)** | 1040 / 2405 | 43.24% | 86904 / 194373 | 44.71% | 1365 fn |
| **P50-60 (91-122B)** | 1053 / 2405 | 43.78% | 114767 / 256906 | 44.67% | 1352 fn |
| **P60-70 (122-159B)** | 884 / 2405 | 36.76% | 118700 / 339038 | 35.01% | 1521 fn |
| **P70-80 (159-178B)** | 188 / 2405 | 7.82% | 31668 / 400567 | 7.91% | 2217 fn |
| **P80-90 (178-335B)** | 269 / 2405 | 11.19% | 53249 / 583211 | 9.13% | 2136 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6554 | 483132 | 94.18% |
| `gemini-3.8-flash` | 379 | 52633 | 5.45% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.34% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
