// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/DragSelectState.cpp
#include "lift_compat.h"

// [0x00443520] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_18 (174 bytes)
namespace lift_00443520 {
// Callee 0x006A6010: thunk_MFC80_ord_5731 (IAT jump thunk; ecx = first arg, one stack arg).
extern void ext_006A6010(void* self, int a0);
// Callee 0x0066A330: Unknown::SetFloat4 (thiscall; four float stack args copied to self+0x00..+0x0C; returns self in eax).
extern void* ext_0066A330(void* self, float a0, float a1, float a2, float a3);
// Callee 0x00419EF0: thiscall, five stack args (first pushed last).
extern void ext_00419EF0(void* self, void* a0, void* a1, void* a2, int a3, int a4);
// Callee 0x00493D90: AddCharacterDialog::vfunc_3 (1 byte body).
extern void ext_00493D90(void* self);
// SEH scope table referenced by the frame setup (not needed by the portable lift).
extern int mem_0087BA58;

// @name MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_18
// @class MultiTrackView::MultiTrackViewStates::DragSelectState
// @summary Notifies the MFC helper with the argument, builds a unit Vector4 and an int4 snapshot from the state at +0x04, invokes the child update routines, and returns false.
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x08 void* field_0x08
bool fn_00443520(void* self, void* arg) {
    (void)mem_0087BA58;

    ext_006A6010(arg, 1);

    // Stack-resident float slots {1.0, 1.0, 1.0, 1.0} from the original frame.
    float frame[4] = {1.0f, 1.0f, 1.0f, 1.0f};

    // Snapshot of four dwords from the struct pointed to by self+0x04.
    uint8_t* state = lift_field<uint8_t*>(self, 0x04);
    int32_t snap[4] = {
        lift_field<int32_t>(state, 0x0C),
        lift_field<int32_t>(state, 0x10),
        lift_field<int32_t>(state, 0x14),
        lift_field<int32_t>(state, 0x18),
    };

    // Vector4 object filled by SetFloat4 with 1.0 in each component.
    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* vecPtr = ext_0066A330(vec, 1.0f, 1.0f, 1.0f, 1.0f);

    // Child update: receiver is self+0x08 + 0x1B4.
    uint8_t* owner = lift_field<uint8_t*>(self, 0x08);
    ext_00419EF0(owner + 0x1B4, arg, &frame[3], vecPtr, 1, 2);

    ext_00493D90(snap);

    return false;
}
} // namespace lift_00443520
