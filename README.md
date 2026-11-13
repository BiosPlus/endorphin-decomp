# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11970 / 24049` (**49.77%**) — `8878` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1137078 / 4496005 bytes` (**25.29%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2210 / 2405 | 91.89% | 56034 / 61769 | 90.72% | 195 fn |
| **P20-30 (32-48B)** | 1262 / 2405 | 52.47% | 49168 / 97731 | 50.31% | 1143 fn |
| **P30-40 (48-71B)** | 1041 / 2405 | 43.28% | 61922 / 144549 | 42.84% | 1364 fn |
| **P40-50 (71-91B)** | 1139 / 2405 | 47.36% | 94904 / 194373 | 48.83% | 1266 fn |
| **P50-60 (91-122B)** | 1279 / 2405 | 53.18% | 137858 / 256906 | 53.66% | 1126 fn |
| **P60-70 (122-159B)** | 986 / 2405 | 41.00% | 132823 / 339038 | 39.18% | 1419 fn |
| **P70-80 (159-178B)** | 256 / 2405 | 10.64% | 43139 / 400567 | 10.77% | 2149 fn |
| **P80-90 (178-335B)** | 876 / 2405 | 36.42% | 210048 / 583211 | 36.02% | 1529 fn |
| **P90-100 (335-36100B)** | 542 / 2404 | 22.55% | 326513 / 2392860 | 13.65% | 1862 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 76.01% |
| `claude-haiku-5.5@low` | 721 | 208577 | 8.12% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.03% |
| `gemini-3.8-flash@low` | 418 | 120871 | 4.71% |
| `gemini-4-hydrogen@low` | 338 | 142164 | 3.81% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.84% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.28% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
