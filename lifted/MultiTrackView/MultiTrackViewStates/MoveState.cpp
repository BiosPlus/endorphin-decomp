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

// [0x00442C70]
// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Calls sub_0043C900 on the object's +0x08 member, releases mouse capture, and clears the byte at +0x30.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x30 uint8_t field_0x30

extern "C" {
    // sub_0043C900 (21B), reached via ext_0043C900; takes this-like arg in ecx and one stack arg (0).
    extern void (*ext_0043C900)(void* ecx_arg, int arg);
    // USER32!ReleaseCapture, pointer stored at mem_009256E0.
    extern int (*mem_009256E0)(void);
}

void MultiTrackView_MoveState_vfunc_2(uint8_t* self)
{
    void* inner = *reinterpret_cast<void**>(self + 0x08);
    ext_0043C900(inner, 0);
    mem_009256E0();
    *(self + 0x30) = 0;
}
