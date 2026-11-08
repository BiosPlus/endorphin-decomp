# Endorphin 2.7.1 Decompilation — Worker Runbook

Decompile `.local/bin/endorphin.exe` (MSVC 2005 RTM `14.00.50727.42`, x86) into 100% byte-matching C++ in `src/` and `include/`.

---

## The 4-Step Worker Loop

When asked to **"pick a function and match it"** (or match a batch of functions), execute this exact loop:

### Step 1: Claim the Next Function
```bash
go run ./tools/work next
```
*(Or `go run ./tools/work next -n 5` to inspect a batch.)*
This picks the smallest unmatched in-scope leaf function (whose callees are already matched or out-of-scope), creates or locates its target `.cpp` file in `src/`, and prints:
- Virtual address (`0xXXXXXXXX`), symbol name, byte size, and target `.cpp` path.
- Class/vtable hierarchy context from `build/classes.json` and `include/`.
- Annotated target x86 disassembly from `.local/cache/funcs/<address>.txt`.

### Step 2: Implement the Function in C++
Edit the target `.cpp` file (and corresponding class header in `include/` if struct fields or virtual tables are needed):
- **Required Annotation & Symbol Name**: Every function **must** be preceded by `// [0xXXXXXXXX]` and exported as `extern "C" ... fn_XXXXXXXX(...)` so the COFF `.obj` verifier can locate it deterministically:
  ```cpp
  // [0x0046FAB0] ThreadRunner<RuntimeEngine>::vfunc_1 (13 bytes)
  extern "C" void __fastcall fn_0046FAB0(ThreadRunner<RuntimeEngine>* self) {
      (self->m_target->*(self->m_pfn))();
  }
  ```
- **MSVC 2005 Calling Convention Tips (`/O2 /Ob2 /Oy /Gy /EHsc /GR /Gd`)**:
  - MSVC 2005 disallows explicit `__thiscall` on free `extern "C"` functions. Use `__fastcall` (`ClassName* self` for 0 stack args, or `ClassName* self, int edx_unused, ...` when stack arguments are present) to place `this` in `ecx` with callee stack cleanup (`ret N`).
  - For functions that do not use `ecx` as `this`, use standard `__cdecl` (`ret`) or `__stdcall` (`ret N`).
  - External callees or globals at `0xXXXXXXXX` are masked at relocation offsets during verification; declare them as `extern "C" void ext_XXXXXXXX();` or `extern "C" int mem_XXXXXXXX;`.

### Step 3: Compile & Verify Byte Parity (Max 15 Tries)
```bash
go run ./tools/work check 0xXXXXXXXX
```
- **Compile Error**: Prints the exact `cl.exe` (`14.00.50727.42`) error messages.
- **Byte Mismatch**: Prints the byte similarity percentage and a side-by-side `TARGET ASM` vs `COMPILED ASM` table marking every mismatched instruction (`<-- MISMATCH`). Adjust types, control flow, or struct offsets and re-run `check`.
- **100% Match**: Prints `EXACT MATCH (100%)` and automatically marks the function `"status": "matched"` in `build/units.json` and refreshes `README.md` + `docs/index.html`.
- **Stuck After 15 Attempts**: Remove the unfinished function from the `.cpp` file and defer it so the queue moves on:
  ```bash
  go run ./tools/work skip 0xXXXXXXXX "<brief reason>"
  ```

### Step 4: Verify Full Build & Commit
Before committing, verify `git status` and commit the matched function(s):
```bash
go run ./tools/build_and_match src/path/to/file.cpp
```

---

## Hard Rules
1. **Repo Safety**: NEVER commit `.local/`, `.exe`, `.dll`, `.obj`, `.lib`, `.pdb`, `.idb`, or `.iso` files to Git.
2. **Go / Bash Tooling Only**: All CLI tools in `tools/` are written in Go or Bash. NEVER use Python.
3. **C++03 Only**: Target compiler is MSVC 2005 (`cl.exe` 14.00.50727.42). Do not use C++11 features (`auto`, `nullptr`, variadic templates `typename...`).
4. **Commit Attribution**: Every Git commit MUST include a `Co-authored-by:` trailer (`Co-authored-by: Antigravity <antigravity@google.com>` or `Co-authored-by: Claude <noreply@anthropic.com>`).
