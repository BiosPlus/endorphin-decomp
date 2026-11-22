// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/PanState.cpp
#include "lift_compat.h"
extern "C" void ext_0041C880(void* target, int32_t flag);

// [0x00442BA0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_4 (15 bytes)
// @name MultiTrackView::MultiTrackViewStates::PanState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::PanState
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
