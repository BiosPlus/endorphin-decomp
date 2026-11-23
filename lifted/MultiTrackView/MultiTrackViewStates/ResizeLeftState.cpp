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
