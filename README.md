# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11996 / 24049` (**49.88%**) — `8904` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1147543 / 4496005 bytes` (**25.52%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2210 / 2405 | 91.89% | 56034 / 61769 | 90.72% | 195 fn |
| **P20-30 (32-48B)** | 1265 / 2405 | 52.60% | 49276 / 97731 | 50.42% | 1140 fn |
| **P30-40 (48-71B)** | 1048 / 2405 | 43.58% | 62316 / 144549 | 43.11% | 1357 fn |
| **P40-50 (71-91B)** | 1140 / 2405 | 47.40% | 94984 / 194373 | 48.87% | 1265 fn |
| **P50-60 (91-122B)** | 1279 / 2405 | 53.18% | 137858 / 256906 | 53.66% | 1126 fn |
| **P60-70 (122-159B)** | 988 / 2405 | 41.08% | 133098 / 339038 | 39.26% | 1417 fn |
| **P70-80 (159-178B)** | 256 / 2405 | 10.64% | 43139 / 400567 | 10.77% | 2149 fn |
| **P80-90 (178-335B)** | 878 / 2405 | 36.51% | 210549 / 583211 | 36.10% | 1527 fn |
| **P90-100 (335-36100B)** | 553 / 2404 | 23.00% | 335620 / 2392860 | 14.03% | 1851 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 75.79% |
| `claude-haiku-5.5@low` | 733 | 210406 | 8.23% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.02% |
| `gemini-3.8-flash@low` | 424 | 124423 | 4.76% |
| `gemini-4-hydrogen@low` | 346 | 147248 | 3.89% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.83% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.28% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.04% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
