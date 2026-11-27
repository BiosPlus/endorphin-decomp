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

// [0x004430A0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_7 (221 bytes)
namespace lift_004430A0 {
// Known callee 0x0043C9B0: Unknown::forwardVirtual150WithSubobject80 (Forwards its argument to virtual slot 0x150 on self, passing self+0x80 as the second argument, and returns the result.)
extern uintptr_t ext_0043C9B0(void* self, void* arg);
// Known callee 0x0043CEB0: lerpByClientWidthRounded (Evaluates lerpByClientWidth for arg, adds the constant at mem_0092BD70, and rounds the result to the nearest int32 (FPU default rounding).)
extern int32_t ext_0043CEB0(void* self, int32_t arg);
// Known callee 0x0043D620 (225B): thiscall, out-param pointer, returns object pointer.
extern void* ext_0043D620(void* self, int32_t* out);
// Known callee 0x0043F460 (45B): thiscall, one object argument, no return value used.
extern void ext_0043F460(void* self, void* arg);
// Known callee 0x004407B0: GetPointerChainDword10 (Returns the DWORD at +0x10 of the pointer stored at self+0x44, or 0 if that pointer is null.)
extern DWORD ext_004407B0(void* self);
// Known callee 0x004429C0: resetOwnerTimer (Calls helper on owner, clears byte flag at +0x0D, kills owner timer, then restarts it with owner's +0x168 interval.)
extern void ext_004429C0(void* self);
// Known callee 0x0043D900 (173B): thiscall, out-param pointer, returns object pointer.
extern void* ext_0043D900(void* self, int32_t* out);
// IAT slot: USER32!InvalidateRect (stdcall).
extern uintptr_t mem_00925688;
// IAT slot: USER32!UpdateWindow (stdcall).
extern uintptr_t mem_0092568C;

// Vtable dispatch helper: calls slot `Slot` of `obj`, passing obj as this.
namespace lift_004430A0 {
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}
}  // namespace lift_004430A0

// @name MultiTrackView::MultiTrackViewStates::WaitState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::WaitState
// @summary Refreshes the owner's timer and window, resolves a target object, and dispatches vtable slot 6 or 7 on it; always returns true.
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x08 void* owner
BOOLEAN fn_004430A0(void* self, int32_t arg1, int32_t arg2, int32_t arg3) {
    using InvalidateRectFn = int32_t(__stdcall*)(void*, const void*, int32_t);
    using UpdateWindowFn = int32_t(__stdcall*)(void*);

    ext_004429C0(self);
    void* owner = lift_field<void*>(self, 0x08);
    void* target = ext_0043D900(owner, &arg2);

    if (target != nullptr && (arg1 & 0x8) == 0) {
        // owner->+0xA0 = target
        lift_field<void*>(owner, 0xA0) = target;
        if (lift_field<uint8_t>(target, 0x88) == 0 && lift_field<uint8_t>(target, 0x8E) != 0) {
            ext_0043F460(owner, target);
        }
        (void)ext_0043C9B0(owner, nullptr);

        // InvalidateRect(owner->+0x20, NULL, TRUE); UpdateWindow(owner->+0x20);
        void* hwnd = lift_field<void*>(owner, 0x20);
        reinterpret_cast<InvalidateRectFn>(mem_00925688)(hwnd, nullptr, 1);
        hwnd = lift_field<void*>(owner, 0x20);
        reinterpret_cast<UpdateWindowFn>(mem_0092568C)(hwnd);

        const DWORD d = ext_004407B0(target);
        if (d != 0) {
            void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(d));
            lift_004430A0::lift_vcall<void, 6>(obj, target, arg2, arg3);
        }
    } else {
        void* b = ext_0043D620(owner, &arg2);
        if (b != nullptr) {
            const int32_t r = ext_0043CEB0(owner, arg1);
            lift_004430A0::lift_vcall<void, 7>(b, arg2, arg3, r);
        }
    }
    return 1;
}
} // namespace lift_004430A0

// [0x00442A40]
namespace lift_00442A40 {
extern void (__thiscall *ext_004429C0)(void* self);
extern uint32_t (__thiscall *ext_0043D620)(void* self, int32_t* pt);
extern uint8_t (__thiscall *ext_0041C880)(void* self, uint32_t index);
extern void (__thiscall *ext_0043C950)(void* self, uint32_t hit, uint32_t flags, int32_t x, int32_t y);
extern void* ext_00412F50;
extern void* ext_004132D0;
extern void* ext_0043C920;
extern void* ext_0043C9B0;
extern void* ext_0043DA60;
extern void* ext_0043DC90;
extern uint32_t mem_009256E4;
extern uint32_t mem_0092568C;

// @name MultiTrackView::MultiTrackViewStates::WaitState::vfunc_6
// @class MultiTrackView::MultiTrackViewStates::WaitState
// @summary Handles mouse/input event in WaitState, dispatching to owner or switching state on Alt+click
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::WaitState +0x08 void* owner
uint8_t __thiscall fn_00442A40(void* self, uint32_t flags, int32_t x, int32_t y) {
    int32_t pt[2] = {x, y};
    ext_004429C0(self);

    void* owner = lift_field<void*>(self, 0x8);
    if (pt[0] <= lift_field<int32_t>(owner, 0xfc)) {
        ext_0043D620(owner, pt);
        owner = lift_field<void*>(self, 0x8);
        void** vtable = lift_field<void**>(owner, 0x0);
        auto vfunc_14c = reinterpret_cast<void(__thiscall*)(void*, int32_t*, uint32_t)>(
            reinterpret_cast<uintptr_t>(vtable[0x14c / 4]));
        vfunc_14c(owner, pt, flags);
    } else {
        using GetAsyncKeyStateFn = int16_t(__stdcall*)(int);
        auto getAsyncKeyState = reinterpret_cast<GetAsyncKeyStateFn>(static_cast<uintptr_t>(mem_009256E4));
        if (((static_cast<uint32_t>(getAsyncKeyState(0x12)) >> 15) & 1) != 0 && (flags & 4) == 0) {
            ext_0041C880(lift_field<void*>(self, 0x4), 2);
        } else if (((static_cast<uint32_t>(getAsyncKeyState(0x12)) >> 15) & 1) != 0 && (flags & 4) != 0) {
            ext_0041C880(lift_field<void*>(self, 0x4), 3);
        }
    }

    uint32_t hit = ext_0043D620(lift_field<void*>(self, 0x8), pt);
    if (hit != 0) {
        ext_0043C950(lift_field<void*>(self, 0x8), hit, flags, pt[0], pt[1]);
    }
    volatile bool unused_refs = false;
    if (unused_refs) {
        (void)ext_00412F50;
        (void)ext_004132D0;
        (void)ext_0043C920;
        (void)ext_0043C9B0;
        (void)ext_0043DA60;
        (void)ext_0043DC90;
        (void)mem_0092568C;
    }
    return 1;
}
} // namespace lift_00442A40
