# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9473 / 24049` (**39.39%**) — `6381` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `499764 / 4496005 bytes` (**11.12%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2164 / 2405 | 89.98% | 54622 / 61769 | 88.43% | 241 fn |
| **P20-30 (32-48B)** | 1110 / 2405 | 46.15% | 43212 / 97731 | 44.22% | 1295 fn |
| **P30-40 (48-71B)** | 851 / 2405 | 35.38% | 50819 / 144549 | 35.16% | 1554 fn |
| **P40-50 (71-91B)** | 1008 / 2405 | 41.91% | 84282 / 194373 | 43.36% | 1397 fn |
| **P50-60 (91-122B)** | 992 / 2405 | 41.25% | 108278 / 256906 | 42.15% | 1413 fn |
| **P60-70 (122-159B)** | 845 / 2405 | 35.14% | 113377 / 339038 | 33.44% | 1560 fn |
| **P70-80 (159-178B)** | 124 / 2405 | 5.16% | 20505 / 400567 | 5.12% | 2281 fn |
| **P80-90 (178-335B)** | 0 / 2405 | 0.00% | 0 / 583211 | 0.00% | 2405 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6132 | 423063 | 96.10% |
| `gemini-3.8-flash` | 223 | 28817 | 3.49% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.38% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
