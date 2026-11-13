# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11024 / 24049` (**45.84%**) — `7932` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `785391 / 4496005 bytes` (**17.47%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1206 / 2405 | 50.15% | 47002 / 97731 | 48.09% | 1199 fn |
| **P30-40 (48-71B)** | 975 / 2405 | 40.54% | 57993 / 144549 | 40.12% | 1430 fn |
| **P40-50 (71-91B)** | 1075 / 2405 | 44.70% | 89721 / 194373 | 46.16% | 1330 fn |
| **P50-60 (91-122B)** | 1207 / 2405 | 50.19% | 130298 / 256906 | 50.72% | 1198 fn |
| **P60-70 (122-159B)** | 934 / 2405 | 38.84% | 125707 / 339038 | 37.08% | 1471 fn |
| **P70-80 (159-178B)** | 222 / 2405 | 9.23% | 37405 / 400567 | 9.34% | 2183 fn |
| **P80-90 (178-335B)** | 699 / 2405 | 29.06% | 168431 / 583211 | 28.88% | 1706 fn |
| **P90-100 (335-36100B)** | 127 / 2404 | 5.28% | 48448 / 2392860 | 2.02% | 2277 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 85.05% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.64% |
| `claude-haiku-5.5@low` | 328 | 74762 | 4.14% |
| `gemini-3.8-flash@low` | 193 | 42917 | 2.43% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.05% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.32% |
| `gemini-4-hydrogen@low` | 15 | 4618 | 0.19% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
