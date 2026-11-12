# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10562 / 24049` (**43.92%**) — `7470` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `670813 / 4496005 bytes` (**14.92%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1197 / 2405 | 49.77% | 46659 / 97731 | 47.74% | 1208 fn |
| **P30-40 (48-71B)** | 928 / 2405 | 38.59% | 55299 / 144549 | 38.26% | 1477 fn |
| **P40-50 (71-91B)** | 1057 / 2405 | 43.95% | 88279 / 194373 | 45.42% | 1348 fn |
| **P50-60 (91-122B)** | 1159 / 2405 | 48.19% | 125290 / 256906 | 48.77% | 1246 fn |
| **P60-70 (122-159B)** | 911 / 2405 | 37.88% | 122493 / 339038 | 36.13% | 1494 fn |
| **P70-80 (159-178B)** | 203 / 2405 | 8.44% | 34192 / 400567 | 8.54% | 2202 fn |
| **P80-90 (178-335B)** | 530 / 2405 | 22.04% | 118277 / 583211 | 20.28% | 1875 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 90.27% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.98% |
| `claude-haiku-5.5@low` | 108 | 19006 | 1.45% |
| `claude-sonnet-5.5@low` | 83 | 14171 | 1.11% |
| `gemini-3.8-flash@low` | 51 | 8853 | 0.68% |
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
