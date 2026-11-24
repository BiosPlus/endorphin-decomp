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

// [0x00458790] SpinButtonStates::ClickedDownState::vfunc_1 (16 bytes)
namespace lift_00458790 {
// Known callee 0x004586A0: StartOwnerTimerWithId (Starts a Win32 timer (no callback) with the given id and interval on the owner window stored at self+0x20.)
extern void ext_004586A0(void* self, UINT_PTR nIDEvent, UINT uElapse);

// @name SpinButtonStates::ClickedDownState::vfunc_1
// @class SpinButtonStates::ClickedDownState
// @summary Starts timer id 2 with a 400 ms interval on the owner window of self->field_0x08.
// @field SpinButtonStates::ClickedDownState +0x08 void* field_0x08
void fn_00458790(void* self) {
    void* target = lift_field<void*>(self, 0x08);
    ext_004586A0(target, 2, 0x190);
}
} // namespace lift_00458790
