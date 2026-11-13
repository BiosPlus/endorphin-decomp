# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11907 / 24049` (**49.51%**) — `8815` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1106066 / 4496005 bytes` (**24.60%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2209 / 2405 | 91.85% | 56004 / 61769 | 90.67% | 196 fn |
| **P20-30 (32-48B)** | 1255 / 2405 | 52.18% | 48917 / 97731 | 50.05% | 1150 fn |
| **P30-40 (48-71B)** | 1033 / 2405 | 42.95% | 61441 / 144549 | 42.51% | 1372 fn |
| **P40-50 (71-91B)** | 1136 / 2405 | 47.23% | 94665 / 194373 | 48.70% | 1269 fn |
| **P50-60 (91-122B)** | 1274 / 2405 | 52.97% | 137343 / 256906 | 53.46% | 1131 fn |
| **P60-70 (122-159B)** | 985 / 2405 | 40.96% | 132696 / 339038 | 39.14% | 1420 fn |
| **P70-80 (159-178B)** | 255 / 2405 | 10.60% | 42969 / 400567 | 10.73% | 2150 fn |
| **P80-90 (178-335B)** | 863 / 2405 | 35.88% | 207036 / 583211 | 35.50% | 1542 fn |
| **P90-100 (335-36100B)** | 518 / 2404 | 21.55% | 300326 / 2392860 | 12.55% | 1886 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 76.55% |
| `claude-haiku-5.5@low` | 696 | 198399 | 7.90% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.07% |
| `gemini-3.8-flash@low` | 401 | 116415 | 4.55% |
| `gemini-4-hydrogen@low` | 317 | 125786 | 3.60% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.85% |
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
