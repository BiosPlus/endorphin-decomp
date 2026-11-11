# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `6708 / 24049` (**27.89%**) — `3616` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `202923 / 4496005 bytes` (**4.51%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **Tiny (<32B)** | 4427 / 4590 | 96.45% | 75660 / 79730 | 94.90% | 163 fn |
| **Small (32-256B)** | 2281 / 16285 | 14.01% | 127263 / 1796884 | 7.08% | 14004 fn |
| **Medium (256-512B)** | 0 / 1757 | 0.00% | 0 / 632676 | 0.00% | 1757 fn |
| **Large (>512B)** | 0 / 1417 | 0.00% | 0 / 1986715 | 0.00% | 1417 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 3590 | 155187 | 99.28% |
| `claude-sonnet-5.5` | 21 | 1047 | 0.58% |
| `gemini-3.8-flash` | 3 | 145 | 0.08% |
| `claude-opus-5.5` | 1 | 49 | 0.03% |
| `gemini-4-argon` | 1 | 10 | 0.03% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
