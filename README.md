# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10380 / 24049` (**43.16%**) — `7288` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `639531 / 4496005 bytes` (**14.22%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1186 / 2405 | 49.31% | 46289 / 97731 | 47.36% | 1219 fn |
| **P30-40 (48-71B)** | 924 / 2405 | 38.42% | 55073 / 144549 | 38.10% | 1481 fn |
| **P40-50 (71-91B)** | 1052 / 2405 | 43.74% | 87867 / 194373 | 45.21% | 1353 fn |
| **P50-60 (91-122B)** | 1087 / 2405 | 45.20% | 118339 / 256906 | 46.06% | 1318 fn |
| **P60-70 (122-159B)** | 902 / 2405 | 37.51% | 121177 / 339038 | 35.74% | 1503 fn |
| **P70-80 (159-178B)** | 203 / 2405 | 8.44% | 34192 / 400567 | 8.54% | 2202 fn |
| **P80-90 (178-335B)** | 449 / 2405 | 18.67% | 96270 / 583211 | 16.51% | 1956 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 92.52% |
| `gemini-3.8-flash@high` | 447 | 63301 | 6.13% |
| `claude-sonnet-5.5@low` | 26 | 4630 | 0.36% |
| `claude-sonnet-5.5@medium` | 24 | 1340 | 0.33% |
| `claude-haiku-5.5@low` | 22 | 4825 | 0.30% |
| `gemini-3.8-flash@low` | 13 | 1559 | 0.18% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.14% |
| `gemini-3.8-flash@medium` | 1 | 256 | 0.01% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
