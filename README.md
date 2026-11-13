# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12016 / 24049` (**49.96%**) — `8924` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1163789 / 4496005 bytes` (**25.88%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2211 / 2405 | 91.93% | 56065 / 61769 | 90.77% | 194 fn |
| **P20-30 (32-48B)** | 1265 / 2405 | 52.60% | 49276 / 97731 | 50.42% | 1140 fn |
| **P30-40 (48-71B)** | 1051 / 2405 | 43.70% | 62482 / 144549 | 43.23% | 1354 fn |
| **P40-50 (71-91B)** | 1140 / 2405 | 47.40% | 94984 / 194373 | 48.87% | 1265 fn |
| **P50-60 (91-122B)** | 1280 / 2405 | 53.22% | 137972 / 256906 | 53.71% | 1125 fn |
| **P60-70 (122-159B)** | 989 / 2405 | 41.12% | 133250 / 339038 | 39.30% | 1416 fn |
| **P70-80 (159-178B)** | 256 / 2405 | 10.64% | 43139 / 400567 | 10.77% | 2149 fn |
| **P80-90 (178-335B)** | 880 / 2405 | 36.59% | 211057 / 583211 | 36.19% | 1525 fn |
| **P90-100 (335-36100B)** | 565 / 2404 | 23.50% | 350895 / 2392860 | 14.66% | 1839 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6749 | 516049 | 75.63% |
| `claude-haiku-5.5@low` | 740 | 215364 | 8.29% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.01% |
| `gemini-3.8-flash@low` | 429 | 128288 | 4.81% |
| `gemini-4-hydrogen@low` | 353 | 154519 | 3.96% |
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
