# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11847 / 24049` (**49.26%**) — `8755` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1077528 / 4496005 bytes` (**23.97%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2206 / 2405 | 91.73% | 55908 / 61769 | 90.51% | 199 fn |
| **P20-30 (32-48B)** | 1247 / 2405 | 51.85% | 48601 / 97731 | 49.73% | 1158 fn |
| **P30-40 (48-71B)** | 1027 / 2405 | 42.70% | 61099 / 144549 | 42.27% | 1378 fn |
| **P40-50 (71-91B)** | 1134 / 2405 | 47.15% | 94507 / 194373 | 48.62% | 1271 fn |
| **P50-60 (91-122B)** | 1271 / 2405 | 52.85% | 137043 / 256906 | 53.34% | 1134 fn |
| **P60-70 (122-159B)** | 983 / 2405 | 40.87% | 132436 / 339038 | 39.06% | 1422 fn |
| **P70-80 (159-178B)** | 254 / 2405 | 10.56% | 42796 / 400567 | 10.68% | 2151 fn |
| **P80-90 (178-335B)** | 851 / 2405 | 35.38% | 204221 / 583211 | 35.02% | 1554 fn |
| **P90-100 (335-36100B)** | 495 / 2404 | 20.59% | 276248 / 2392860 | 11.54% | 1909 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 77.08% |
| `claude-haiku-5.5@low` | 678 | 184710 | 7.74% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.11% |
| `gemini-3.8-flash@low` | 383 | 109484 | 4.37% |
| `gemini-4-hydrogen@low` | 293 | 117868 | 3.35% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.86% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.29% |
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
