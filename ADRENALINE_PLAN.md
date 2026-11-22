# Project Adrenaline — Roadmap & Plan

> **Goal:** Build **Adrenaline**, a native 64-bit Rust reimplementation of **Endorphin 2.7.1** that runs natively on **Linux & Windows**, drops right into an existing Endorphin install folder, lifts old 32-bit/object limits, restores working animation exports, and removes obsolete abandonware registration checks.

---

## Where This Repo Stands Today (Baseline)

- **100% in-scope byte match achieved:** `25,788 / 25,788` functions (`4,190,214` bytes).
- **Important reality check:**
  - `96.24%` of matched code bytes (`23,681` funcs) are MSVC x86 `__declspec(naked) __asm`, not portable C++.
  - `3.76%` (`2,853` funcs) are pure C++.
  - `src/` compiles to individual `.obj` files for byte verification, **not** a linked `.exe` yet (`14,560` `ext_*` and `11,992` `mem_*` placeholders).
  - Non-`.text` sections aren't extracted yet: `.rdata` (`1.09 MB`), `.data` (`1.70 MB`), `.rsrc` (`2.15 MB`).
  - `16` out-of-scope `"not compiler code"` blocks (`267 KB` in `0x00811610–0x0084B2BE`) are likely DRM/licensing or embedded data tables.
  - **Good news for porting:**
    - Physics (**MathEngine Karma / `Mcd`**, `MdtArthur`, `RuntimeEngine`, `NMData`, `Geometry`, `Sensors`) is pure logic — **0% Windows-dependent**.
    - Rendering uses **OpenGL** (`OPENGL32` / `GLU32`) — portable to Linux.
    - All exporter classes are already in the binary (`BVHIO`, `FBXIO`, `AcclaimIO`, `Acclaim2*IO`, `OBJIO`, `CDLCharacterIO`, `CSMMotionIO`, `NMCIO`, `ImageExporter`, `VideoExporter`), alongside `ExportUnavailableDialog` (the Learning Edition gate).

---

## Strategy: Skip C++03 Rewrite → Port Straight to Rust in Playable Slices

Don't spend months trying to force MSVC 2005 to emit matching bytes for portable C++03 if Rust is the destination.
Instead:
1. Treat this 100%-matched decomp + `build/classes.json` + `.local/bin/endorphin.exe` (under Wine) as the **exact specification & oracle**.
2. Build **Adrenaline** as a 64-bit Rust workspace in small, testable slices — starting with pure non-Windows subsystems and ending with a modern native UI shell (replacing 2005 `MFC80.DLL`).

---

## Phase 0 — Housekeeping & Baseline Lock (15 min)

- [ ] Clean untracked scratch files in repo root (`*.obj`, `gdb_*.txt`, `test_*.py`, `dumped_merged*.cpp`, `sim_*.py`, `.worktrees/`, etc.) and leftover files in `src/wip/`.
- [ ] Review and either commit or discard uncommitted edits in `tools/`.
- [ ] Tag the verified 100% asm-match baseline:
  ```bash
  git tag -a v0.1-100pct-asm-match -m "100% in-scope byte match baseline"
  ```
- [ ] Create the Rust workspace (either in a `rust/` / `adrenaline/` folder or a sibling repo) with `cargo init`.

---

## Slice 1 — File Loaders & Working Exporters (First Usable Linux Tool!)

**Why start here:** Zero UI, zero physics, zero Windows dependencies. Fast dopamine win — you get a working Linux/Windows CLI tool that reads Endorphin files and exports animations.

- [ ] **Audit Learning Edition export gating:**
  - Inspect `include/ExportUnavailableDialog.h`, `include/ExportDialog.h`, `src/classes/BVHIO.cpp`, `src/classes/AcclaimIO.cpp`, `src/classes/NMFileIO.cpp`, and `include/FBXIO.h` to see what Learning Edition disables vs. what's intact.
- [ ] **Crate `adrenaline-formats`:**
  - [ ] Port `AdvXMLParser` usage → standard Rust XML (`quick-xml` / `roxmltree`).
  - [ ] Reverse & implement Endorphin native formats (`.ens` scene, character/rig definitions, `NMData` / `NMCIO` / `CDLCharacterIO`).
  - [ ] Implement **BVH** (`BVHIO`) and **Acclaim ASF/AMC** (`AcclaimIO` / `Acclaim2*IO`) import & export.
  - [ ] Add modern **glTF 2.0** export (instant Blender/Godot/Unreal workflow — replaces legacy `XSIFtk-3.6.2.1.dll` and `AVIFIL32`).
- [ ] **Done looks like:** `adrenaline-cli export scene.ens --out anim.bvh` works on Linux & Windows.

---

## Slice 2 — 3D Viewport & Skeleton/Mesh Renderer

**Why second:** Seeing an actual Endorphin character standing in a 64-bit Linux window makes the whole project feel real.

- [ ] **Crate `adrenaline-render`:**
  - [ ] Windowing + OpenGL context via `winit` + `glutin` + `glow` (cross-platform Linux & Windows).
  - [ ] Port `NMCamera` orbit/pan/zoom controls.
  - [ ] Render loaded character skeletons, collision primitives (`Primitives`), tool gizmos (`ToolGraphics`), and ground plane.
  - [ ] Support timeline playback of loaded/baked animation frames.
- [ ] **Done looks like:** Drop `adrenaline` into an Endorphin folder, open a character/scene, orbit around it in 3D at 60+ FPS on Linux & Windows.

---

## Slice 3 — Physics & Simulation Core (The Heart of Endorphin)

**Why third:** Now you have a visual viewport to *see* ragdolls fall, collide, and balance as you port the math.

- [ ] **Crate `adrenaline-math` & `adrenaline-physics`:**
  - [ ] Port core math/geometry (`Geometry`, `Interpolator`, `ExprParser`).
  - [ ] Port **MathEngine Karma** (`Mcd` collision detection + `MdtArthur` rigid-body dynamics / joint constraints).
  - [ ] Remove legacy 32-bit fixed object/body/joint caps → use dynamic `Vec`s + 64-bit IDs.
  - [ ] Port `RuntimeEngine` step loop and `StateMachine` / `Sensors` / active ragdoll torque controllers.
- [ ] **Verification:** Compare simulation trajectories (joint positions/rotations over frames) against `.local/bin/endorphin.exe` running under Wine.
- [ ] **Done looks like:** Drop a ragdoll from height, watch it collide with props, and trigger a basic active behaviour in real time.

---

## Slice 4 — Behaviours, Events & Timeline Engine

- [ ] **Crate `adrenaline-sim`:**
  - [ ] Port `Chromosome` / behaviour parameter system, `Properties`, `Commands`, `TriggeredEventMarkers`, `MultiTrackView` track/event data model.
  - [ ] Port active behaviours (balance, reach, writhe, hit reactions, forces, constraints).
  - [ ] Support deterministic-ish bake-to-keyframe caching for scrubbing and export.
- [ ] **Done looks like:** Open a full `.ens` stunt scene, hit Simulate, scrub the timeline, and export the resulting motion to `.bvh` / `.glb`.

---

## Slice 5 — Native Editor UI & Drop-In Replacement Polish

**Rule:** Do **not** port `MFC80.DLL` dialogs 1:1. Use `.rsrc` layouts purely as UX reference.

- [ ] **Crate `adrenaline-ui` (binary `adrenaline` / `adrenaline.exe`):**
  - [ ] Build the editor shell in Rust (`egui` + `egui_dock` or `slint` / `iced`): viewport, multi-track timeline, property inspector, character/prop outliner, behaviour library, export dialog.
  - [ ] Auto-detect original Endorphin asset directories when dropped next to `endorphin.exe` (or via config/CLI path).
  - [ ] No registration / DRM / `0x0081xxxx–0x0084xxxx` protection layer — clean standalone binary.
- [ ] **Release targets:**
  - [ ] `adrenaline.exe` (`x86_64-pc-windows-msvc`) — drop-in replacement on Windows.
  - [ ] `adrenaline` (`x86_64-unknown-linux-gnu`) — native Linux binary.

---

## Quick Reference: Key Repo Paths

- Decompiled sources: `src/` (`src/classes/BVHIO.cpp`, `src/classes/AcclaimIO.cpp`, `src/classes/NMFileIO.cpp`, `src/MdtArthur/`, `src/RuntimeEngine/`, `src/Geometry/`, `src/Sensors/`, `src/StateMachine/`)
- RTTI class map: `build/classes.json` (`2,352` classes, vtable & inheritance layouts)
- Function ledger: `build/units/<shard>/<VA>.json`
- Original binary (oracle): `.local/bin/endorphin.exe`
- Byte-match verifier: `tools/build_and_match/main.go`
