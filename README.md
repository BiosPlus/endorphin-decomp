# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9772 / 24049` (**40.63%**) — `6680` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `542200 / 4496005 bytes` (**12.06%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2166 / 2405 | 90.06% | 54683 / 61769 | 88.53% | 239 fn |
| **P20-30 (32-48B)** | 1137 / 2405 | 47.28% | 44318 / 97731 | 45.35% | 1268 fn |
| **P30-40 (48-71B)** | 877 / 2405 | 36.47% | 52313 / 144549 | 36.19% | 1528 fn |
| **P40-50 (71-91B)** | 1024 / 2405 | 42.58% | 85570 / 194373 | 44.02% | 1381 fn |
| **P50-60 (91-122B)** | 1020 / 2405 | 42.41% | 111257 / 256906 | 43.31% | 1385 fn |
| **P60-70 (122-159B)** | 868 / 2405 | 36.09% | 116460 / 339038 | 34.35% | 1537 fn |
| **P70-80 (159-178B)** | 183 / 2405 | 7.61% | 30823 / 400567 | 7.69% | 2222 fn |
| **P80-90 (178-335B)** | 118 / 2405 | 4.91% | 22107 / 583211 | 3.79% | 2287 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6354 | 454394 | 95.12% |
| `gemini-3.8-flash` | 300 | 39922 | 4.49% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.36% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
