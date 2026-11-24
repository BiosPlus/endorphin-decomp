// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/SelectOrMoveState.cpp
#include "lift_compat.h"

// [0x00442BF0] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_1 (16 bytes)
namespace lift_00442BF0 {
// Known callee 0x0043CD60: CWndDerived::startTimer (Starts a 1-ID timer on the window at +0x20 with the given interval (ms) and stores the returned timer ID at +0x138.)
extern void ext_0043CD60(void* self, UINT uElapse);

// @name MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_1
// @class MultiTrackView::MultiTrackViewStates::SelectOrMoveState
// @summary Starts the delegate's timer using the interval stored at delegate+0x170.
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x08 void* delegate_0x8
void fn_00442BF0(void* self) {
    // Load delegate pointer from self+0x8 (mov ecx, [ecx+8]).
    void* delegate = lift_field<void*>(self, 0x8);
    // Read interval from delegate+0x170 (mov eax, [ecx+0x170]); the delegate's class is not yet recovered, so no @field for it.
    UINT interval = lift_field<UINT>(delegate, 0x170);
    // Call startTimer on the delegate with that interval (push eax; call 0x43CD60).
    ext_0043CD60(delegate, interval);
}
} // namespace lift_00442BF0

// [0x00442C10] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_20 (44 bytes)
namespace lift_00442C10 {
// Callee 0x0043CEF0 (isCursorOverThis): receives the +0x08 member as implicit `this` (ecx); returns true when the window under the cursor is this object's window.
extern bool ext_0043CEF0(void* self);
// Callee 0x0041C880 (94B): receives the +0x04 member as implicit `this` (ecx), plus one stack argument (6 or 0).
extern void ext_0041C880(void* self, int arg);

// @name MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_20
// @class MultiTrackView::MultiTrackViewStates::SelectOrMoveState
// @summary If the cursor is over the delegate's window, calls ext_0041C880(+0x04, 6); otherwise calls it with 0. Always returns true; the stack argument is ignored.
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x08 void* delegate_0x8
bool __thiscall fn_00442C10(void* self, uint32_t a1) {
    (void)a1;
    void* delegate = lift_field<void*>(self, 0x08);
    bool overThis = ext_0043CEF0(delegate);
    void* target = lift_field<void*>(self, 0x04);
    ext_0041C880(target, overThis ? 6 : 0);
    return true;
}
} // namespace lift_00442C10

// [0x004435D0]
namespace lift_004435D0 {
// @name MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::SelectOrMoveState
// @summary Kills owner timer, updates selection/move state if active, invalidates view, and notifies field_0x04.
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x08 void* delegate_0x8


extern void ext_0043CD80(void* self);
extern void __stdcall ext_0043F490(void* arg);
extern void __stdcall ext_0043F460(void* arg);
extern uintptr_t ext_0043C9B0(void* self, void* arg);
extern void ext_0041C880(void* self, int arg);

using InvalidateRect_t = int(__stdcall*)(void* hWnd, const void* lpRect, int bErase);
extern uintptr_t mem_00925688;

uint8_t fn_004435D0(void* self, uintptr_t arg0, uintptr_t /*arg1*/, uintptr_t /*arg2*/) {
    auto* base = static_cast<uint8_t*>(self);
    void* delegate = *reinterpret_cast<void**>(base + 0x8);
    ext_0043CD80(delegate);

    delegate = *reinterpret_cast<void**>(base + 0x8);
    void* objA0 = *reinterpret_cast<void**>(static_cast<uint8_t*>(delegate) + 0xA0);
    if (objA0 != nullptr) {
        if ((arg0 & 0x8) != 0) {
            ext_0043F490(objA0);
        } else {
            ext_0043F460(objA0);
        }

        delegate = *reinterpret_cast<void**>(base + 0x8);
        ext_0043C9B0(delegate, reinterpret_cast<void*>(arg0));

        delegate = *reinterpret_cast<void**>(base + 0x8);
        void* hwnd = *reinterpret_cast<void**>(static_cast<uint8_t*>(delegate) + 0x20);
        auto invalidateRect = reinterpret_cast<InvalidateRect_t>(mem_00925688);
        invalidateRect(hwnd, nullptr, 1);
    }

    void* field04 = *reinterpret_cast<void**>(base + 0x4);
    ext_0041C880(field04, 0);
    return 1;
}
} // namespace lift_004435D0
