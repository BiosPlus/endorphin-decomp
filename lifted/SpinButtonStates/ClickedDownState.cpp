// Lifted C++ translation unit: lifted/SpinButtonStates/ClickedDownState.cpp
#include "lift_compat.h"

// [0x004587A0]
namespace lift_004587A0 {
// @name SpinButtonStates::ClickedDownState::vfunc_2
// @class SpinButtonStates::ClickedDownState
// @summary Kills timers 2 and 3 on the owner object stored at self+0x08.
// @field SpinButtonStates::ClickedDownState +0x08 void* field_0x08

extern BOOL ext_004586C0(void* self, UINT_PTR timerId);

struct ClickedDownState {
    unsigned char _pad_0x00[0x08];
    void* field_0x08;
};

void vfunc_2(ClickedDownState* self) {
    ext_004586C0(self->field_0x08, 2);
    ext_004586C0(self->field_0x08, 3);
}
} // namespace lift_004587A0
