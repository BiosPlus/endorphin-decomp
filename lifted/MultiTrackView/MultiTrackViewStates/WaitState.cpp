// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/WaitState.cpp
#include "lift_compat.h"

// [0x00442DC0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_20 (167 bytes)
namespace lift_00442DC0 {
// USER32 import slots the original asm calls indirectly (call dword ptr [mem_X]).
extern void* mem_00925718; // USER32!GetCursorPos
extern void* mem_0092570C; // USER32!ScreenToClient
extern void* mem_009256E4; // USER32!GetAsyncKeyState

    // sub_0043CDA0 (35B), thiscall: ecx=owner, one stack arg.
    void ext_0043CDA0(void* ecx_arg, int32_t arg);
    // Known callee 0x0043CD80: KillOwnerTimer (Kills the timer whose ID is stored at self+0x138, owned by the window handle at self+0x20.)
    void ext_0043CD80(void* ecx_arg);
    // Known callee 0x0043CD60: Window::StartRedrawTimer (Calls USER32!SetTimer(this->hwnd(+0x20), nIDEvent, 1, NULL) and stores the returned timer id at +0x138.)
    void ext_0043CD60(void* ecx_arg, uint32_t nIDEvent);
    // sub_0043D620 (225B), thiscall: ecx=owner, one stack arg (&pt); returns a pointer in eax.
    void* ext_0043D620(void* ecx_arg, POINT* pt);

// @name MultiTrackView::MultiTrackViewStates::WaitState::vfunc_20
// @class MultiTrackView::MultiTrackViewStates::WaitState
// @summary Toggles the owner's redraw timer based on the armed byte at +0x0D, then, if the left button is held and the cursor is left of owner+0xfc, marks the hit item at +0x38 when its id matches +0x10.
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x0D uint8_t field_0x0d
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x10 uint32_t field_0x10
uint8_t fn_00442DC0(void* self, int32_t /* stack arg, popped by callee (ret 4); unused */)
{
    if (lift_field<uint8_t>(self, 0x0D) != 0) {
        ext_0043CDA0(lift_field<void*>(self, 0x08), 0);
        ext_0043CD80(lift_field<void*>(self, 0x08));
        lift_field<uint8_t>(self, 0x0D) = 0;
    } else {
        ext_0043CD80(lift_field<void*>(self, 0x08));
        void* owner = lift_field<void*>(self, 0x08);
        uint32_t timer_arg = lift_field<uint32_t>(owner, 0x16C);
        ext_0043CD60(lift_field<void*>(self, 0x08), timer_arg);
        ext_0043CDA0(lift_field<void*>(self, 0x08), 1);
        lift_field<uint8_t>(self, 0x0D) = 1;
    }

    POINT pt{};
    reinterpret_cast<BOOL(__stdcall*)(POINT*)>(mem_00925718)(&pt);

    void* owner = lift_field<void*>(self, 0x08);
    HWND hwnd = lift_field<HWND>(owner, 0x20);
    reinterpret_cast<BOOL(__stdcall*)(HWND, POINT*)>(mem_0092570C)(hwnd, &pt);

    int16_t key_state = reinterpret_cast<SHORT(__stdcall*)(int)>(mem_009256E4)(1);
    bool left_down = key_state < 0;

    owner = lift_field<void*>(self, 0x08);
    bool left_of_limit = pt.x < lift_field<int32_t>(owner, 0xFC);

    if (left_of_limit && left_down) {
        void* hit = ext_0043D620(owner, &pt);
        if (hit != nullptr && lift_field<uint32_t>(hit, 0x14) == lift_field<uint32_t>(self, 0x10)) {
            lift_field<uint8_t>(hit, 0x38) = 1;
        }
    }

    return 1;
}
} // namespace lift_00442DC0
