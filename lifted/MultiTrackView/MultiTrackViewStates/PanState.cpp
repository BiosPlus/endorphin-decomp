// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/PanState.cpp
#include "lift_compat.h"
extern "C" void ext_0041C880(void* target, int32_t flag);
// Callee: receives the field at +0x08 as its implicit `this`, plus one stack argument (0).
extern "C" void ext_0043C900(void* self, int arg);
// Import-address slot holding the address of ReleaseCapture (USER32).
extern "C" void* mem_009256E0;

extern "C" void ext_0043C900(void* self, int arg);
// Import-address slot holding the address of ReleaseCapture (USER32).
extern "C" void* mem_009256E0;
// @summary Forwards this->field_0x04 to ext_0041C880 with flag 0 and returns true.
// @field MultiTrackView::MultiTrackViewStates::PanState +0x04 void* field_0x04
bool fn_00442BA0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    (void)a1;
    (void)a2;
    (void)a3;
    void* target = lift_field<void*>(self, 0x04);
    ext_0041C880(target, 0);
    return true;
}
// Callee 0x0043C900 (21B): receives the +0x08 member as implicit `this`, plus one stack argument (1).
// IAT jump thunk to MFC80!ord_2372; takes one stack argument (the value returned by SetCapture).
extern "C" void ext_006A5E00(void* arg);
// Import-address slot holding the address of USER32!SetCapture.
extern "C" void* mem_009256D8;

// IAT jump thunk to MFC80!ord_2372; takes one stack argument (the value returned by SetCapture).
extern "C" void ext_006A5E00(void* arg);
// Import-address slot holding the address of USER32!SetCapture.
extern "C" void* mem_009256D8;
// @field MultiTrackView::MultiTrackViewStates::PanState +0x08 void* field_0x08
BOOL __thiscall fn_00442CC0(void* self) {
    void* inner = lift_field<void*>(self, 0x08);
    ext_0043C900(inner, 0);
    using ReleaseCaptureFn = BOOL(__stdcall*)();
    return reinterpret_cast<ReleaseCaptureFn>(mem_009256E0)();
}

// [0x004432D0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_1 (34 bytes)
// @name MultiTrackView::MultiTrackViewStates::PanState::vfunc_1
// @class MultiTrackView::MultiTrackViewStates::PanState
// @summary Forwards the +0x08 member to ext_0043C900(1), then calls SetCapture on that member's +0x20 handle and passes the result to ext_006A5E00.
// @field MultiTrackView::MultiTrackViewStates::PanState +0x08 void* field_0x08
// @field <unknown: type of object at PanState +0x08> +0x20 void* field_0x20
void fn_004432D0(void* self) {
    void* inner = lift_field<void*>(self, 0x08);
    ext_0043C900(inner, 1);
    void* handle = lift_field<void*>(inner, 0x20);
    using SetCaptureFn = void*(__stdcall*)(void*);
    void* captured = reinterpret_cast<SetCaptureFn>(mem_009256D8)(handle);
    ext_006A5E00(captured);
}

// [0x00443300] MultiTrackView::MultiTrackViewStates::PanState::vfunc_12 (99 bytes)
namespace lift_00443300 {
// Known callee 0x0043CDD0: pixelToTime (Converts a horizontal pixel coordinate in the client area to a non-negative time/value using the view's range and left margin)
// thiscall: self in ecx, one int32 stack argument; returns double in st0.
extern double ext_0043CDD0(void* self, int32_t x);
// Known callee 0x0043DDF0: Unknown::updateRangeAndDispatch (Adds a double argument to the two doubles at +0xE8/+0xF0 (committing them only if the first is >= -1 and the second is <= 100000, NaN rejected), then dispatches the pair as two floats to the subobject at +0x13C via ext_00466BA0.)
// thiscall: self in ecx, one double stack argument.
extern void ext_0043DDF0(void* self, double a);
// Import-address slot holding the address of USER32!InvalidateRect.
extern void* mem_00925688;

// @name MultiTrackView::MultiTrackViewStates::PanState::vfunc_12
// @class MultiTrackView::MultiTrackViewStates::PanState
// @summary Computes the time delta between the stored pixel x and the new pixel x via pixelToTime, feeds it to updateRangeAndDispatch on +0x08, stores the new x/y at +0x04 +0x0C/+0x10, and invalidates the window at +0x08 +0x20.
// @field MultiTrackView::MultiTrackViewStates::PanState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::PanState +0x08 void* field_0x08
// @field <unknown: type of object at PanState +0x04> +0x0C int32_t field_0x0C
// @field <unknown: type of object at PanState +0x04> +0x10 int32_t field_0x10
// @field <unknown: type of object at PanState +0x08> +0x20 void* field_0x20
BOOL __thiscall fn_00443300(void* self, uint32_t a1, int32_t a2, int32_t a3) {
    (void)a1;
    void* inner4 = lift_field<void*>(self, 0x04);
    void* inner8 = lift_field<void*>(self, 0x08);

    double d1 = ext_0043CDD0(inner8, lift_field<int32_t>(inner4, 0x0C));
    double d2 = ext_0043CDD0(inner8, a2);
    ext_0043DDF0(inner8, d1 - d2);

    lift_field<int32_t>(inner4, 0x0C) = a2;
    lift_field<int32_t>(inner4, 0x10) = a3;

    void* hwnd = lift_field<void*>(inner8, 0x20);
    using InvalidateRectFn = BOOL(__stdcall*)(void*, const RECT*, BOOL);
    reinterpret_cast<InvalidateRectFn>(mem_00925688)(hwnd, nullptr, TRUE);
    return TRUE;
}
} // namespace lift_00443300
