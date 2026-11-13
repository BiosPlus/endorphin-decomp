# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11783 / 24049` (**49.00%**) — `8691` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1040224 / 4496005 bytes` (**23.14%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2206 / 2405 | 91.73% | 55908 / 61769 | 90.51% | 199 fn |
| **P20-30 (32-48B)** | 1242 / 2405 | 51.64% | 48414 / 97731 | 49.54% | 1163 fn |
| **P30-40 (48-71B)** | 1026 / 2405 | 42.66% | 61031 / 144549 | 42.22% | 1379 fn |
| **P40-50 (71-91B)** | 1126 / 2405 | 46.82% | 93886 / 194373 | 48.30% | 1279 fn |
| **P50-60 (91-122B)** | 1265 / 2405 | 52.60% | 136374 / 256906 | 53.08% | 1140 fn |
| **P60-70 (122-159B)** | 981 / 2405 | 40.79% | 132147 / 339038 | 38.98% | 1424 fn |
| **P70-80 (159-178B)** | 252 / 2405 | 10.48% | 42446 / 400567 | 10.60% | 2153 fn |
| **P80-90 (178-335B)** | 845 / 2405 | 35.14% | 202656 / 583211 | 34.75% | 1560 fn |
| **P90-100 (335-36100B)** | 461 / 2404 | 19.18% | 242693 / 2392860 | 10.14% | 1943 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 77.64% |
| `claude-haiku-5.5@low` | 657 | 175054 | 7.56% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.14% |
| `gemini-3.8-flash@low` | 364 | 100828 | 4.19% |
| `gemini-4-hydrogen@low` | 269 | 98876 | 3.10% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.88% |
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
