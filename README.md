# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11894 / 24049` (**49.46%**) — `8802` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1100578 / 4496005 bytes` (**24.48%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2209 / 2405 | 91.85% | 56004 / 61769 | 90.67% | 196 fn |
| **P20-30 (32-48B)** | 1255 / 2405 | 52.18% | 48917 / 97731 | 50.05% | 1150 fn |
| **P30-40 (48-71B)** | 1031 / 2405 | 42.87% | 61325 / 144549 | 42.43% | 1374 fn |
| **P40-50 (71-91B)** | 1135 / 2405 | 47.19% | 94589 / 194373 | 48.66% | 1270 fn |
| **P50-60 (91-122B)** | 1273 / 2405 | 52.93% | 137247 / 256906 | 53.42% | 1132 fn |
| **P60-70 (122-159B)** | 984 / 2405 | 40.91% | 132564 / 339038 | 39.10% | 1421 fn |
| **P70-80 (159-178B)** | 255 / 2405 | 10.60% | 42969 / 400567 | 10.73% | 2150 fn |
| **P80-90 (178-335B)** | 859 / 2405 | 35.72% | 206037 / 583211 | 35.33% | 1546 fn |
| **P90-100 (335-36100B)** | 514 / 2404 | 21.38% | 296257 / 2392860 | 12.38% | 1890 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 76.66% |
| `claude-haiku-5.5@low` | 690 | 194333 | 7.84% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.08% |
| `gemini-3.8-flash@low` | 398 | 116028 | 4.52% |
| `gemini-4-hydrogen@low` | 313 | 124751 | 3.56% |
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
