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
