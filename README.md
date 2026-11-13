# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10776 / 24049` (**44.81%**) — `7684` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `716724 / 4496005 bytes` (**15.94%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1201 / 2405 | 49.94% | 46815 / 97731 | 47.90% | 1204 fn |
| **P30-40 (48-71B)** | 967 / 2405 | 40.21% | 57533 / 144549 | 39.80% | 1438 fn |
| **P40-50 (71-91B)** | 1063 / 2405 | 44.20% | 88759 / 194373 | 45.66% | 1342 fn |
| **P50-60 (91-122B)** | 1181 / 2405 | 49.11% | 127606 / 256906 | 49.67% | 1224 fn |
| **P60-70 (122-159B)** | 918 / 2405 | 38.17% | 123468 / 339038 | 36.42% | 1487 fn |
| **P70-80 (159-178B)** | 209 / 2405 | 8.69% | 35212 / 400567 | 8.79% | 2196 fn |
| **P80-90 (178-335B)** | 660 / 2405 | 27.44% | 157007 / 583211 | 26.92% | 1745 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6745 | 514842 | 87.78% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.82% |
| `claude-haiku-5.5@low` | 219 | 42731 | 2.85% |
| `gemini-3.8-flash@low` | 124 | 24981 | 1.61% |
| `claude-sonnet-5.5@low` | 110 | 19896 | 1.43% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.33% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 2 | 499 | 0.03% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
