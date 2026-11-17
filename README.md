# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `17446 / 24049` (**72.54%**) — `14349` by AI models, `3097` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `2532330 / 4496005 bytes` (**56.32%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2396 / 2405 | 99.63% | 24941 / 25001 | 99.76% | 9 fn |
| **P10-20 (16-32B)** | 2399 / 2405 | 99.75% | 61646 / 61769 | 99.80% | 6 fn |
| **P20-30 (32-48B)** | 2246 / 2405 | 93.39% | 90286 / 97731 | 92.38% | 159 fn |
| **P30-40 (48-71B)** | 1393 / 2405 | 57.92% | 82165 / 144549 | 56.84% | 1012 fn |
| **P40-50 (71-91B)** | 1391 / 2405 | 57.84% | 115793 / 194373 | 59.57% | 1014 fn |
| **P50-60 (91-122B)** | 1880 / 2405 | 78.17% | 203564 / 256906 | 79.24% | 525 fn |
| **P60-70 (122-159B)** | 1570 / 2405 | 65.28% | 214847 / 339038 | 63.37% | 835 fn |
| **P70-80 (159-178B)** | 689 / 2405 | 28.65% | 115267 / 400567 | 28.78% | 1716 fn |
| **P80-90 (178-335B)** | 1930 / 2405 | 80.25% | 466699 / 583211 | 80.02% | 475 fn |
| **P90-100 (335-36100B)** | 1552 / 2404 | 64.56% | 1157122 / 2392860 | 48.36% | 852 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6800 | 546791 | 47.39% |
| `claude-haiku-5.5@low` | 3585 | 769422 | 24.98% |
| `gemini-4-hydrogen@low` | 1797 | 612099 | 12.52% |
| `gemini-3.8-flash@low` | 1461 | 446305 | 10.18% |
| `gemini-3.8-flash@high` | 447 | 63301 | 3.12% |
| `claude-sonnet-5.5@low` | 185 | 33841 | 1.29% |
| `gemini-4-hydrogen@medium` | 26 | 7180 | 0.18% |
| `claude-sonnet-5.5@medium` | 26 | 1765 | 0.18% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.07% |
| `gemini-3.8-flash@medium` | 9 | 2519 | 0.06% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `claude-opus-5.5@low` | 1 | 47 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
