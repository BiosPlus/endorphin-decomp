# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11487 / 24049` (**47.76%**) — `8395` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `905930 / 4496005 bytes` (**20.15%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2205 / 2405 | 91.68% | 55877 / 61769 | 90.46% | 200 fn |
| **P20-30 (32-48B)** | 1230 / 2405 | 51.14% | 47980 / 97731 | 49.09% | 1175 fn |
| **P30-40 (48-71B)** | 1017 / 2405 | 42.29% | 60458 / 144549 | 41.83% | 1388 fn |
| **P40-50 (71-91B)** | 1109 / 2405 | 46.11% | 92492 / 194373 | 47.58% | 1296 fn |
| **P50-60 (91-122B)** | 1239 / 2405 | 51.52% | 133628 / 256906 | 52.01% | 1166 fn |
| **P60-70 (122-159B)** | 971 / 2405 | 40.37% | 130726 / 339038 | 38.56% | 1434 fn |
| **P70-80 (159-178B)** | 244 / 2405 | 10.15% | 41093 / 400567 | 10.26% | 2161 fn |
| **P80-90 (178-335B)** | 805 / 2405 | 33.47% | 192722 / 583211 | 33.04% | 1600 fn |
| **P90-100 (335-36100B)** | 288 / 2404 | 11.98% | 126285 / 2392860 | 5.28% | 2116 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 80.38% |
| `claude-haiku-5.5@low` | 532 | 122986 | 6.34% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.32% |
| `gemini-3.8-flash@low` | 295 | 71249 | 3.51% |
| `gemini-4-hydrogen@low` | 169 | 47398 | 2.01% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.94% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.30% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
