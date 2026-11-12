# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9722 / 24049` (**40.43%**) — `6630` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `534798 / 4496005 bytes` (**11.89%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2165 / 2405 | 90.02% | 54652 / 61769 | 88.48% | 240 fn |
| **P20-30 (32-48B)** | 1135 / 2405 | 47.19% | 44241 / 97731 | 45.27% | 1270 fn |
| **P30-40 (48-71B)** | 874 / 2405 | 36.34% | 52148 / 144549 | 36.08% | 1531 fn |
| **P40-50 (71-91B)** | 1018 / 2405 | 42.33% | 85083 / 194373 | 43.77% | 1387 fn |
| **P50-60 (91-122B)** | 1013 / 2405 | 42.12% | 110521 / 256906 | 43.02% | 1392 fn |
| **P60-70 (122-159B)** | 866 / 2405 | 36.01% | 116160 / 339038 | 34.26% | 1539 fn |
| **P70-80 (159-178B)** | 182 / 2405 | 7.57% | 30650 / 400567 | 7.65% | 2223 fn |
| **P80-90 (178-335B)** | 90 / 2405 | 3.74% | 16674 / 583211 | 2.86% | 2315 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6318 | 448862 | 95.29% |
| `gemini-3.8-flash` | 286 | 38052 | 4.31% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.36% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
