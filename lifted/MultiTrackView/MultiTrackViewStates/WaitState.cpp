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

// [0x00442B20]
namespace lift_00442B20 {
extern double __thiscall ext_0043CDD0(void* self, int32_t x);
extern void __thiscall ext_0043E140(void* self, uint32_t arg1, double time);

// @name MultiTrackView::MultiTrackViewStates::WaitState::vfunc_18
// @class MultiTrackView::MultiTrackViewStates::WaitState
// @summary Converts cursor x-coordinate to time and updates the multi-track view if active
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x0c uint8_t field_0x0c
uint8_t __thiscall fn_00442B20(void* self, uint32_t arg1) {
    if (lift_field<uint8_t>(self, 0x0C) != 0) {
        void* stateData = lift_field<void*>(self, 0x04);
        void* view = lift_field<void*>(self, 0x08);
        int32_t x = lift_field<int32_t>(stateData, 0x14);
        double time = ext_0043CDD0(view, x);
        ext_0043E140(lift_field<void*>(self, 0x08), arg1, time);
    }
    return 0;
}
} // namespace lift_00442B20

// [0x00443200] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_12 (153 bytes)
namespace lift_00443200 {
// Known callee 0x004429C0: resetOwnerTimer (Calls helper on owner, clears byte flag at +0x0D, kills owner timer, then restarts it with owner's +0x168 interval.)
extern void ext_004429C0(void* self);
// Known callee 0x0043CA00: CWindow::trackMouseLeave (Registers the window to receive a WM_MOUSELEAVE notification via TrackMouseEvent.)
extern void ext_0043CA00(void* self);
// Unlifted callee 0x0043D900: thiscall(owner, int* out) -> object pointer
extern void* ext_0043D900(void* self, int32_t* out);
// Known callee 0x0043C900: SetCursorFromTable (Loads a cursor handle from the object's table at +0x128 (indexed by arg) and tail-calls SetCursor through the IAT slot at 0x925704.)
extern HCURSOR ext_0043C900(void* self, uint32_t index);
// Unlifted callee 0x0043D620: stdcall(int* in) -> object pointer
extern void* ext_0043D620(int32_t* in);
// IAT slot for USER32!InvalidateRect (holds the resolved function pointer at runtime)
extern int mem_00925688;

using InvalidateRectFn = int(__stdcall*)(HWND, const void*, int);

// @name MultiTrackView::MultiTrackViewStates::WaitState::vfunc_12
// @class MultiTrackView::MultiTrackViewStates::WaitState
// @summary Re-arms the wait state when the owner is enabled: resets the owner timer, invalidates the owner window, updates the cursor from a hit-test table, and flags a matching item.
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x0C uint8_t field_0x0c
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x10 uint32_t field_0x10
uint8_t fn_00443200(void* self, int32_t a, int32_t b, int32_t c) {
    (void)c;
    void* owner = lift_field<void*>(self, 0x08);
    if (lift_field<uint8_t>(owner, 0x190) != 0) {
        ext_004429C0(self);
        lift_field<uint8_t>(self, 0x0C) = 1;

        uint32_t hwnd = lift_field<uint32_t>(owner, 0x20);
        (*reinterpret_cast<InvalidateRectFn*>(&mem_00925688))(
            reinterpret_cast<HWND>(static_cast<uintptr_t>(hwnd)), nullptr, 1);

        ext_0043CA00(owner);

        uint32_t index = 0;
        void* obj = ext_0043D900(owner, &b);
        if (obj != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(obj);
            using VFnThis = uint32_t(__thiscall*)(void*, int32_t*);
            index = reinterpret_cast<VFnThis>(vtbl[3])(obj, &b);
        }

        ext_0043C900(owner, index);

        if (b < lift_field<int32_t>(owner, 0xFC) && (a & 1) != 0) {
            void* item = ext_0043D620(&b);
            if (item != nullptr &&
                lift_field<int32_t>(item, 0x14) == lift_field<int32_t>(self, 0x10)) {
                lift_field<uint8_t>(item, 0x38) = 1;
            }
        }
    }
    return 1;
}
} // namespace lift_00443200
