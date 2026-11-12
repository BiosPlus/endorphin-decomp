# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10640 / 24049` (**44.24%**) — `7548` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `686070 / 4496005 bytes` (**15.26%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1198 / 2405 | 49.81% | 46696 / 97731 | 47.78% | 1207 fn |
| **P30-40 (48-71B)** | 949 / 2405 | 39.46% | 56560 / 144549 | 39.13% | 1456 fn |
| **P40-50 (71-91B)** | 1059 / 2405 | 44.03% | 88444 / 194373 | 45.50% | 1346 fn |
| **P50-60 (91-122B)** | 1165 / 2405 | 48.44% | 125892 / 256906 | 49.00% | 1240 fn |
| **P60-70 (122-159B)** | 914 / 2405 | 38.00% | 122929 / 339038 | 36.26% | 1491 fn |
| **P70-80 (159-178B)** | 204 / 2405 | 8.48% | 34359 / 400567 | 8.58% | 2201 fn |
| **P80-90 (178-335B)** | 574 / 2405 | 23.87% | 130866 / 583211 | 22.44% | 1831 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 89.33% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.92% |
| `claude-haiku-5.5@low` | 145 | 26363 | 1.92% |
| `claude-sonnet-5.5@low` | 101 | 17478 | 1.34% |
| `gemini-3.8-flash@low` | 74 | 13446 | 0.98% |
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
