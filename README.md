# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10391 / 24049` (**43.21%**) — `7299` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `641753 / 4496005 bytes` (**14.27%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1186 / 2405 | 49.31% | 46289 / 97731 | 47.36% | 1219 fn |
| **P30-40 (48-71B)** | 925 / 2405 | 38.46% | 55128 / 144549 | 38.14% | 1480 fn |
| **P40-50 (71-91B)** | 1053 / 2405 | 43.78% | 87949 / 194373 | 45.25% | 1352 fn |
| **P50-60 (91-122B)** | 1087 / 2405 | 45.20% | 118339 / 256906 | 46.06% | 1318 fn |
| **P60-70 (122-159B)** | 904 / 2405 | 37.59% | 121457 / 339038 | 35.82% | 1501 fn |
| **P70-80 (159-178B)** | 203 / 2405 | 8.44% | 34192 / 400567 | 8.54% | 2202 fn |
| **P80-90 (178-335B)** | 456 / 2405 | 18.96% | 98075 / 583211 | 16.82% | 1949 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6743 | 514752 | 92.38% |
| `gemini-3.8-flash@high` | 447 | 63301 | 6.12% |
| `claude-sonnet-5.5@low` | 29 | 5269 | 0.40% |
| `claude-haiku-5.5@low` | 27 | 5793 | 0.37% |
| `claude-sonnet-5.5@medium` | 24 | 1340 | 0.33% |
| `gemini-3.8-flash@low` | 16 | 2174 | 0.22% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.14% |
| `gemini-3.8-flash@medium` | 1 | 256 | 0.01% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
