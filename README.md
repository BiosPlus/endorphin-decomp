# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10684 / 24049` (**44.43%**) — `7592` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `697445 / 4496005 bytes` (**15.51%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1198 / 2405 | 49.81% | 46696 / 97731 | 47.78% | 1207 fn |
| **P30-40 (48-71B)** | 951 / 2405 | 39.54% | 56667 / 144549 | 39.20% | 1454 fn |
| **P40-50 (71-91B)** | 1060 / 2405 | 44.07% | 88525 / 194373 | 45.54% | 1345 fn |
| **P50-60 (91-122B)** | 1167 / 2405 | 48.52% | 126104 / 256906 | 49.09% | 1238 fn |
| **P60-70 (122-159B)** | 917 / 2405 | 38.13% | 123339 / 339038 | 36.38% | 1488 fn |
| **P70-80 (159-178B)** | 205 / 2405 | 8.52% | 34537 / 400567 | 8.62% | 2200 fn |
| **P80-90 (178-335B)** | 609 / 2405 | 25.32% | 141253 / 583211 | 24.22% | 1796 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 88.82% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.89% |
| `claude-haiku-5.5@low` | 166 | 31970 | 2.19% |
| `claude-sonnet-5.5@low` | 101 | 17478 | 1.33% |
| `gemini-3.8-flash@low` | 97 | 19214 | 1.28% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.33% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 1 | 256 | 0.01% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
