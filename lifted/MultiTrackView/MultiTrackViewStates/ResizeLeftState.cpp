// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/ResizeLeftState.cpp
#include "lift_compat.h"
// Known callee 0x0043C900: sub_0043C900 (21B). Takes owner in ECX plus one stack argument.
extern "C" void ext_0043C900(void* self, int arg);
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372).
extern "C" void ext_006A5E00(int value);
// IAT slots: USER32!GetCursorPos, USER32!SetCapture.
extern "C" int mem_00925718;
extern "C" int mem_009256D8;

// [0x004436D0] MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_1 (44 bytes)
// @name MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_1
// @class MultiTrackView::MultiTrackViewStates::ResizeLeftState
// @summary Records the current cursor position into the state, starts the owner's capture-based resize.
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x08 void* owner
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x0C int32_t cursorX
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x10 int32_t cursorY
void fn_004436D0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // GetCursorPos(&this->cursor) -- writes POINT at +0x0C/+0x10.
    // (IAT slot call; the Win32 API is resolved at link time.)
    auto get_cursor_pos = reinterpret_cast<int (*)(void*)>(
        static_cast<uintptr_t>(mem_00925718));
    get_cursor_pos(base + 0x0C);

    void* owner = *reinterpret_cast<void**>(base + 0x08);
    ext_0043C900(owner, 3);

    // Owner is the window handle holder: SetCapture(owner->hwnd at +0x20).
    auto* owner_bytes = static_cast<uint8_t*>(*reinterpret_cast<void**>(base + 0x08));
    void* hwnd = *reinterpret_cast<void**>(owner_bytes + 0x20);
    auto set_capture = reinterpret_cast<void* (*)(void*)>(
        static_cast<uintptr_t>(mem_009256D8));
    void* prev = set_capture(hwnd);

    ext_006A5E00(static_cast<int>(reinterpret_cast<uintptr_t>(prev)));
}

// [0x00444090] MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_4 (134 bytes)
namespace lift_00444090 {
// Callee 0x0041A920: sub_0041A920 (106B). thiscall: ecx = object scratch, one stack argument.
extern void ext_0041A920(void* self, void* arg);
// Known callee 0x0041C880: StateManager::setStateByIndex (Switches the active object at +0x8 to the element at index in the vector at +0x4, calling vtable+0x8 on the old and vtable+0x4 on the new.)
extern void ext_0041C880(void* self, uint32_t index);
// Callee 0x0043F520: sub_0043F520 (643B). thiscall on owner with (scratch pointer, 0).
extern void ext_0043F520(void* self, void* out, uint32_t zero);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t value);

// @name MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::ResizeLeftState
// @summary Resize-left state step: passes owner+0xA0 through two owner helpers, switches the state manager to index 0, forwards a nonzero scratch result to MFC80, returns true.
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x08 void* owner
bool fn_00444090(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    (void)arg0;
    (void)arg1;
    (void)arg2;

    auto* base = static_cast<uint8_t*>(self);

    // Local scratch frame (was the callee-visible stack slots in the original):
    //   +0x08: value copied from owner+0xA0, passed by pointer to ext_0041A920
    //   +0x0C: object/out-slot passed as ECX / pointer to ext_0043F520
    //   +0x10: result slot read after the calls (zero-initialised)
    uint8_t frame[0x20] = {};

    void* owner = lift_field<void*>(base, 0x08);
    lift_field<uint32_t>(frame, 0x08) = lift_field<uint32_t>(owner, 0xA0);

    ext_0041A920(frame + 0x0C, frame + 0x08);
    ext_0043F520(lift_field<void*>(base, 0x08), frame + 0x0C, 0);
    ext_0041C880(lift_field<void*>(base, 0x04), 0);

    uint32_t result = lift_field<uint32_t>(frame, 0x10);
    if (result != 0) {
        ext_006A5C5C(result);
    }

    return true;
}
} // namespace lift_00444090
