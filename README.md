# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `21412 / 24049` (**89.03%**) — `18315` by AI models, `3097` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `2951121 / 4496005 bytes` (**65.64%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2396 / 2405 | 99.63% | 24941 / 25001 | 99.76% | 9 fn |
| **P10-20 (16-32B)** | 2399 / 2405 | 99.75% | 61646 / 61769 | 99.80% | 6 fn |
| **P20-30 (32-48B)** | 2386 / 2405 | 99.21% | 96908 / 97731 | 99.16% | 19 fn |
| **P30-40 (48-71B)** | 2246 / 2405 | 93.39% | 134557 / 144549 | 93.09% | 159 fn |
| **P40-50 (71-91B)** | 2380 / 2405 | 98.96% | 192380 / 194373 | 98.97% | 25 fn |
| **P50-60 (91-122B)** | 2353 / 2405 | 97.84% | 251602 / 256906 | 97.94% | 52 fn |
| **P60-70 (122-159B)** | 2347 / 2405 | 97.59% | 331099 / 339038 | 97.66% | 58 fn |
| **P70-80 (159-178B)** | 1423 / 2405 | 59.17% | 234167 / 400567 | 58.46% | 982 fn |
| **P80-90 (178-335B)** | 1930 / 2405 | 80.25% | 466699 / 583211 | 80.02% | 475 fn |
| **P90-100 (335-36100B)** | 1552 / 2404 | 64.56% | 1157122 / 2392860 | 48.36% | 852 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 7456 | 1178021 | 40.71% |
| `claude-haiku-5.5@medium` | 6895 | 556983 | 37.65% |
| `gemini-4-hydrogen@low` | 1797 | 612099 | 9.81% |
| `gemini-3.8-flash@low` | 1461 | 446305 | 7.98% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.44% |
| `claude-sonnet-5.5@low` | 185 | 33841 | 1.01% |
| `gemini-4-hydrogen@medium` | 26 | 7180 | 0.14% |
| `claude-sonnet-5.5@medium` | 26 | 1765 | 0.14% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `gemini-3.8-flash@medium` | 9 | 2519 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `claude-opus-5.5@low` | 1 | 47 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
