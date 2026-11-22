// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/MoveState.cpp
#include "lift_compat.h"
// Win32 imports (USER32). Declared with the original stdcall ABI.
extern "C" int __stdcall GetCursorPos(void* lpPoint);
extern "C" int __stdcall SetCursorPos(int32_t x, int32_t y);

// [0x00443650] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7 (44 bytes)
// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Moves the cursor to X = this->field_0x1c while keeping its current Y; returns whether SetCursorPos succeeded.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x1C int32_t field_0x1c
bool fn_00443650(void* self) {
    struct {
        int32_t x;
        int32_t y;
    } pt{};
    GetCursorPos(&pt);
    const int32_t targetX = lift_field<int32_t>(self, 0x1C);
    return SetCursorPos(targetX, pt.y) != 0;
}
