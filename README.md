# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11061 / 24049` (**45.99%**) — `7969` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `792739 / 4496005 bytes` (**17.63%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1212 / 2405 | 50.40% | 47237 / 97731 | 48.33% | 1193 fn |
| **P30-40 (48-71B)** | 982 / 2405 | 40.83% | 58364 / 144549 | 40.38% | 1423 fn |
| **P40-50 (71-91B)** | 1077 / 2405 | 44.78% | 89892 / 194373 | 46.25% | 1328 fn |
| **P50-60 (91-122B)** | 1212 / 2405 | 50.40% | 130771 / 256906 | 50.90% | 1193 fn |
| **P60-70 (122-159B)** | 938 / 2405 | 39.00% | 126226 / 339038 | 37.23% | 1467 fn |
| **P70-80 (159-178B)** | 222 / 2405 | 9.23% | 37405 / 400567 | 9.34% | 2183 fn |
| **P80-90 (178-335B)** | 700 / 2405 | 29.11% | 168697 / 583211 | 28.93% | 1705 fn |
| **P90-100 (335-36100B)** | 139 / 2404 | 5.78% | 53761 / 2392860 | 2.25% | 2265 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 84.65% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.61% |
| `claude-haiku-5.5@low` | 348 | 77795 | 4.37% |
| `gemini-3.8-flash@low` | 200 | 45269 | 2.51% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.05% |
| `gemini-4-hydrogen@low` | 25 | 6581 | 0.31% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.31% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
