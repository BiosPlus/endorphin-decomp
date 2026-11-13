# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11873 / 24049` (**49.37%**) — `8781` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1092119 / 4496005 bytes` (**24.29%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2208 / 2405 | 91.81% | 55972 / 61769 | 90.62% | 197 fn |
| **P20-30 (32-48B)** | 1251 / 2405 | 52.02% | 48759 / 97731 | 49.89% | 1154 fn |
| **P30-40 (48-71B)** | 1028 / 2405 | 42.74% | 61151 / 144549 | 42.30% | 1377 fn |
| **P40-50 (71-91B)** | 1135 / 2405 | 47.19% | 94589 / 194373 | 48.66% | 1270 fn |
| **P50-60 (91-122B)** | 1272 / 2405 | 52.89% | 137147 / 256906 | 53.38% | 1133 fn |
| **P60-70 (122-159B)** | 984 / 2405 | 40.91% | 132564 / 339038 | 39.10% | 1421 fn |
| **P70-80 (159-178B)** | 255 / 2405 | 10.60% | 42969 / 400567 | 10.73% | 2150 fn |
| **P80-90 (178-335B)** | 854 / 2405 | 35.51% | 204918 / 583211 | 35.14% | 1551 fn |
| **P90-100 (335-36100B)** | 507 / 2404 | 21.09% | 289381 / 2392860 | 12.09% | 1897 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 76.85% |
| `claude-haiku-5.5@low` | 685 | 191640 | 7.80% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.09% |
| `gemini-3.8-flash@low` | 389 | 112304 | 4.43% |
| `gemini-4-hydrogen@low` | 306 | 122709 | 3.48% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.86% |
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
