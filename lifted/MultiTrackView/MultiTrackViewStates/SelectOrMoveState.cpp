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
