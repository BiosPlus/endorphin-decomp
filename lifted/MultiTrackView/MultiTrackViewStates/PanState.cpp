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

// [0x00442CC0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_2 (16 bytes)
// @name MultiTrackView::MultiTrackViewStates::PanState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::PanState
// @summary Forwards the +0x08 member to ext_0043C900(0), then tail-calls ReleaseCapture and returns its result.
// @field MultiTrackView::MultiTrackViewStates::PanState +0x08 void* field_0x08
BOOL __thiscall fn_00442CC0(void* self) {
    void* inner = lift_field<void*>(self, 0x08);
    ext_0043C900(inner, 0);
    using ReleaseCaptureFn = BOOL(__stdcall*)();
    return reinterpret_cast<ReleaseCaptureFn>(mem_009256E0)();
}
