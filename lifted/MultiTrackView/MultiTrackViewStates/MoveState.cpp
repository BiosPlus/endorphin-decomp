// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/MoveState.cpp
#include "lift_compat.h"
// Win32 imports (USER32). Declared with the original stdcall ABI.
extern "C" int __stdcall GetCursorPos(void* lpPoint);
extern "C" int __stdcall SetCursorPos(int32_t x, int32_t y);

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

// [0x00443650]
namespace lift_00443650 {
// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Fetches the current cursor position, warps the cursor to (this->field_0x1c, cursor.x), and returns whether SetCursorPos succeeded.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x1c int32_t field_0x1c

// Import-address-table slots that the original asm calls indirectly.
extern void* mem_00925718; // USER32!GetCursorPos
extern void* mem_009256DC; // USER32!SetCursorPos

// Thiscall-style virtual; the original `ret 0xc` pops three caller-pushed
// stack arguments that the body never reads, so they are kept as unused params.
bool MultiTrackView_MultiTrackViewStates_MoveState_vfunc_7(void* self,
                                                           uint32_t /*arg1*/,
                                                           uint32_t /*arg2*/,
                                                           uint32_t /*arg3*/) {
    using GetCursorPosFn = BOOL(__stdcall*)(POINT*);
    using SetCursorPosFn = BOOL(__stdcall*)(int32_t, int32_t);

    POINT pt{};
    reinterpret_cast<GetCursorPosFn>(mem_00925718)(&pt);

    const int32_t target_x = lift_field<int32_t>(self, 0x1c);
    // Argument order preserved from the asm: X = field_0x1c, Y = pt.x.
    const BOOL ok = reinterpret_cast<SetCursorPosFn>(mem_009256DC)(target_x, pt.x);
    return ok != 0;
}
} // namespace lift_00443650
