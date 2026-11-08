# Endorphin 2.7.1 Decompilation — Haiku Worker Runbook

Target: `.local/bin/endorphin.exe` (MSVC 2005 RTM `14.00.50727.42`, x86, `/O2 /Ob2 /Oy /Gy /EHsc /GR /Gd`).

## Strict Worker Loop

1. **Claim next leaf function (`size <= 256`):**
   ```bash
   go run ./tools/work next
   ```
2. **Implement in C++03:**
   - Edit only the target `.cpp` file in `src/` (and struct header in `include/` if an offset is required).
   - Keep the `// [0xXXXXXXXX]` marker and `extern "C" ... fn_XXXXXXXX(...)` signature name.
   - Calling conventions:
     - `this` in `ecx` with `ret`: `extern "C" Ret __fastcall fn_XXXXXXXX(Class* self)`
     - `this` in `ecx` with `ret N`: `extern "C" Ret __fastcall fn_XXXXXXXX(Class* self, int edx_unused, Arg1 a1, ...)`
     - No `ecx` `this`: `extern "C" Ret __cdecl fn_XXXXXXXX(...)` (`ret`) or `__stdcall` (`ret N`).
   - Relocated globals/callees are masked automatically; declare as `extern "C" void ext_XXXXXXXX();` or `extern "C" int mem_XXXXXXXX;`.
3. **Compile & verify (iterate max 10 tries):**
   ```bash
   go run ./tools/work check 0xXXXXXXXX
   ```
   - `EXACT MATCH (100%)` automatically marks `"status": "matched"` in `build/units.json`, updates `README.md`, and commits the match.
4. **If stuck after 10 tries, remove your broken code from the `.cpp` file and skip:**
   ```bash
   go run ./tools/work skip 0xXXXXXXXX "brief reason"
   ```

## Hard Rules
- **ALWAYS** commit every successful translation immediately (if `tools/work check` did not already auto-commit it). Never leave matched functions uncommitted.
- **NEVER** edit `build/units.json` by hand.
- **NEVER** touch, generate, or commit HTML files (`docs/`).
- **NEVER** commit `.local/`, `.exe`, `.dll`, `.obj`, `.lib`, `.pdb`, or `.idb` files.
- **C++03 only** (no `auto`, `nullptr`, or variadic templates).
- **No Python** (Go/Bash tooling only).
- Include `Co-authored-by: Claude <noreply@anthropic.com>` (or `Antigravity <antigravity@google.com>`) on commits.
