# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `5546 / 24049` (**23.06%**) — `2454` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `122981 / 4496005 bytes` (**2.74%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **Tiny (<32B)** | 4341 / 4590 | 94.58% | 73077 / 79730 | 91.66% | 249 fn |
| **Small (32-256B)** | 1205 / 16285 | 7.40% | 49904 / 1796884 | 2.78% | 15080 fn |
| **Medium (256-512B)** | 0 / 1757 | 0.00% | 0 / 632676 | 0.00% | 1757 fn |
| **Large (>512B)** | 0 / 1417 | 0.00% | 0 / 1986715 | 0.00% | 1417 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 2234 | 70975 | 91.04% |
| `claude-haiku` | 199 | 4550 | 8.11% |
| `claude-sonnet-5.5` | 17 | 826 | 0.69% |
| `gemini-3.8-flash` | 2 | 86 | 0.08% |
| `claude-opus-5.5` | 1 | 49 | 0.04% |
| `gemini-4-argon` | 1 | 10 | 0.04% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
