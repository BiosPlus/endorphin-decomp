# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11618 / 24049` (**48.31%**) — `8526` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `968972 / 4496005 bytes` (**21.55%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2205 / 2405 | 91.68% | 55877 / 61769 | 90.46% | 200 fn |
| **P20-30 (32-48B)** | 1231 / 2405 | 51.19% | 48017 / 97731 | 49.13% | 1174 fn |
| **P30-40 (48-71B)** | 1020 / 2405 | 42.41% | 60659 / 144549 | 41.96% | 1385 fn |
| **P40-50 (71-91B)** | 1115 / 2405 | 46.36% | 92986 / 194373 | 47.84% | 1290 fn |
| **P50-60 (91-122B)** | 1246 / 2405 | 51.81% | 134380 / 256906 | 52.31% | 1159 fn |
| **P60-70 (122-159B)** | 975 / 2405 | 40.54% | 131286 / 339038 | 38.72% | 1430 fn |
| **P70-80 (159-178B)** | 248 / 2405 | 10.31% | 41769 / 400567 | 10.43% | 2157 fn |
| **P80-90 (178-335B)** | 819 / 2405 | 34.05% | 196154 / 583211 | 33.63% | 1586 fn |
| **P90-100 (335-36100B)** | 380 / 2404 | 15.81% | 183175 / 2392860 | 7.66% | 2024 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 79.15% |
| `claude-haiku-5.5@low` | 589 | 148721 | 6.91% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.24% |
| `gemini-3.8-flash@low` | 325 | 85330 | 3.81% |
| `gemini-4-hydrogen@low` | 211 | 69455 | 2.47% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.91% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.29% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
