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
