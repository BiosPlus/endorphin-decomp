# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12255 / 24049` (**50.96%**) — `9163` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1312715 / 4496005 bytes` (**29.20%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1361 / 2405 | 56.59% | 52656 / 97731 | 53.88% | 1044 fn |
| **P30-40 (48-71B)** | 1054 / 2405 | 43.83% | 62647 / 144549 | 43.34% | 1351 fn |
| **P40-50 (71-91B)** | 1145 / 2405 | 47.61% | 95407 / 194373 | 49.08% | 1260 fn |
| **P50-60 (91-122B)** | 1284 / 2405 | 53.39% | 138384 / 256906 | 53.87% | 1121 fn |
| **P60-70 (122-159B)** | 996 / 2405 | 41.41% | 134207 / 339038 | 39.58% | 1409 fn |
| **P70-80 (159-178B)** | 259 / 2405 | 10.77% | 43643 / 400567 | 10.90% | 2146 fn |
| **P80-90 (178-335B)** | 892 / 2405 | 37.09% | 214023 / 583211 | 36.70% | 1513 fn |
| **P90-100 (335-36100B)** | 634 / 2404 | 26.37% | 489762 / 2392860 | 20.47% | 1770 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6752 | 525991 | 73.69% |
| `claude-haiku-5.5@low` | 830 | 248381 | 9.06% |
| `gemini-3.8-flash@low` | 480 | 188750 | 5.24% |
| `gemini-4-hydrogen@low` | 448 | 200024 | 4.89% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.88% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.78% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.27% |
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
