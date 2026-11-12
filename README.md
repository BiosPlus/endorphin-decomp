# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9816 / 24049` (**40.82%**) — `6724` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `549313 / 4496005 bytes` (**12.22%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2166 / 2405 | 90.06% | 54683 / 61769 | 88.53% | 239 fn |
| **P20-30 (32-48B)** | 1137 / 2405 | 47.28% | 44318 / 97731 | 45.35% | 1268 fn |
| **P30-40 (48-71B)** | 879 / 2405 | 36.55% | 52430 / 144549 | 36.27% | 1526 fn |
| **P40-50 (71-91B)** | 1027 / 2405 | 42.70% | 85824 / 194373 | 44.15% | 1378 fn |
| **P50-60 (91-122B)** | 1028 / 2405 | 42.74% | 112085 / 256906 | 43.63% | 1377 fn |
| **P60-70 (122-159B)** | 871 / 2405 | 36.22% | 116884 / 339038 | 34.48% | 1534 fn |
| **P70-80 (159-178B)** | 185 / 2405 | 7.69% | 31157 / 400567 | 7.78% | 2220 fn |
| **P80-90 (178-335B)** | 144 / 2405 | 5.99% | 27263 / 583211 | 4.67% | 2261 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6385 | 459301 | 94.96% |
| `gemini-3.8-flash` | 313 | 42128 | 4.65% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.36% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
