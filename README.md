# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10494 / 24049` (**43.64%**) — `7402` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `664334 / 4496005 bytes` (**14.78%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1190 / 2405 | 49.48% | 46428 / 97731 | 47.51% | 1215 fn |
| **P30-40 (48-71B)** | 928 / 2405 | 38.59% | 55299 / 144549 | 38.26% | 1477 fn |
| **P40-50 (71-91B)** | 1057 / 2405 | 43.95% | 88279 / 194373 | 45.42% | 1348 fn |
| **P50-60 (91-122B)** | 1101 / 2405 | 45.78% | 119751 / 256906 | 46.61% | 1304 fn |
| **P60-70 (122-159B)** | 910 / 2405 | 37.84% | 122356 / 339038 | 36.09% | 1495 fn |
| **P70-80 (159-178B)** | 203 / 2405 | 8.44% | 34192 / 400567 | 8.54% | 2202 fn |
| **P80-90 (178-335B)** | 528 / 2405 | 21.95% | 117705 / 583211 | 20.18% | 1877 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 91.10% |
| `gemini-3.8-flash@high` | 447 | 63301 | 6.04% |
| `claude-haiku-5.5@low` | 75 | 15913 | 1.01% |
| `claude-sonnet-5.5@low` | 60 | 11992 | 0.81% |
| `gemini-3.8-flash@low` | 39 | 7646 | 0.53% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.34% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.14% |
| `gemini-3.8-flash@medium` | 1 | 256 | 0.01% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
