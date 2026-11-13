# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12455 / 24049` (**51.79%**) — `9363` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1331460 / 4496005 bytes` (**29.61%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1483 / 2405 | 61.66% | 57889 / 97731 | 59.23% | 922 fn |
| **P30-40 (48-71B)** | 1070 / 2405 | 44.49% | 63487 / 144549 | 43.92% | 1335 fn |
| **P40-50 (71-91B)** | 1150 / 2405 | 47.82% | 95827 / 194373 | 49.30% | 1255 fn |
| **P50-60 (91-122B)** | 1298 / 2405 | 53.97% | 139900 / 256906 | 54.46% | 1107 fn |
| **P60-70 (122-159B)** | 1003 / 2405 | 41.70% | 135136 / 339038 | 39.86% | 1402 fn |
| **P70-80 (159-178B)** | 261 / 2405 | 10.85% | 43986 / 400567 | 10.98% | 2144 fn |
| **P80-90 (178-335B)** | 921 / 2405 | 38.30% | 221116 / 583211 | 37.91% | 1484 fn |
| **P90-100 (335-36100B)** | 639 / 2404 | 26.58% | 492133 / 2392860 | 20.57% | 1765 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6753 | 526035 | 72.12% |
| `claude-haiku-5.5@low` | 912 | 256076 | 9.74% |
| `gemini-3.8-flash@low` | 532 | 194506 | 5.68% |
| `gemini-4-hydrogen@low` | 513 | 205274 | 5.48% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.77% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.74% |
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
