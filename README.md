# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10264 / 24049` (**42.68%**) — `7172` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `616887 / 4496005 bytes` (**13.72%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1181 / 2405 | 49.11% | 46101 / 97731 | 47.17% | 1224 fn |
| **P30-40 (48-71B)** | 913 / 2405 | 37.96% | 54452 / 144549 | 37.67% | 1492 fn |
| **P40-50 (71-91B)** | 1045 / 2405 | 43.45% | 87292 / 194373 | 44.91% | 1360 fn |
| **P50-60 (91-122B)** | 1080 / 2405 | 44.91% | 117613 / 256906 | 45.78% | 1325 fn |
| **P60-70 (122-159B)** | 897 / 2405 | 37.30% | 120489 / 339038 | 35.54% | 1508 fn |
| **P70-80 (159-178B)** | 199 / 2405 | 8.27% | 33530 / 400567 | 8.37% | 2206 fn |
| **P80-90 (178-335B)** | 372 / 2405 | 15.47% | 77086 / 583211 | 13.22% | 2033 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6710 | 507916 | 93.56% |
| `gemini-3.8-flash` | 436 | 61087 | 6.08% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.33% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
