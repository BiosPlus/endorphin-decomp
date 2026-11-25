// Lifted C++ translation unit: lifted/SpinButtonStates/ClickedUpState.cpp
#include "lift_compat.h"

// [0x00458940] SpinButtonStates::ClickedUpState::vfunc_5 (62 bytes)
namespace lift_00458940 {
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
extern void* ext_006A5EC0(void* self);
// Known callee 0x00458860: Unknown::setCurrentByIndex (Releases the current element via vtable slot 2, selects element `index` from the array at +0x04..+0x08, stores it as current at +0x10, and invokes its vtable slot 1.)
extern void ext_00458860(void* self, UINT index);

// @name SpinButtonStates::ClickedUpState::vfunc_5
// @class SpinButtonStates::ClickedUpState
// @summary Calls vtable slots 0 and 2 on the object at self+0x04 (each fed a result of ext_006A5EC0(self+0x08)), then sets index 0 on the object at self+0x0C.
// @field SpinButtonStates::ClickedUpState +0x04 void* field_0x04
// @field SpinButtonStates::ClickedUpState +0x08 void* field_0x08
// @field SpinButtonStates::ClickedUpState +0x0C void* field_0x0C

namespace {
// Thiscall-style virtual slot: first argument is the object (this), second is one value.
using VSlotFn = void (*)(void* self, void* arg);
} // namespace

void fn_00458940(void* self) {
    // 1) obj = self->field_0x04; vtable read before the first call.
    void* obj = lift_field<void*>(self, 0x04);
    void** vt1 = *reinterpret_cast<void***>(obj);
    // 2) r1 = ext_006A5EC0(self->field_0x08)
    void* r1 = ext_006A5EC0(lift_field<void*>(self, 0x08));
    // 3) obj->vtbl[0](r1)
    reinterpret_cast<VSlotFn>(vt1[0])(obj, r1);

    // 4) re-read obj and its vtable after the call.
    obj = lift_field<void*>(self, 0x04);
    void** vt2 = *reinterpret_cast<void***>(obj);
    // 5) r2 = ext_006A5EC0(self->field_0x08)
    void* r2 = ext_006A5EC0(lift_field<void*>(self, 0x08));
    // 6) obj->vtbl[2](r2)
    reinterpret_cast<VSlotFn>(vt2[2])(obj, r2);

    // 7) setCurrentByIndex(self->field_0x0C, 0)
    ext_00458860(lift_field<void*>(self, 0x0C), 0);
}
} // namespace lift_00458940

// [0x004587C0] SpinButtonStates::ClickedUpState::vfunc_3 (69 bytes)
namespace lift_004587C0 {
namespace lift_004587C0 {
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
extern void* ext_006A5EC0(void* self);
// Known callee 0x004586C0: KillOwnerTimerWithId (Kills the timer identified by the argument, owned by the window handle at self+0x20.)
extern BOOL ext_004586C0(void* self, UINT_PTR timerId);
// Known callee 0x004586A0: StartOwnerTimerWithId (Starts a Win32 timer (no callback) with the given id and interval on the owner window stored at self+0x20.)
extern void ext_004586A0(void* self, UINT_PTR nIDEvent, UINT uElapse);

// @name SpinButtonStates::ClickedUpState::vfunc_3
// @class SpinButtonStates::ClickedUpState
// @summary If arg==3, calls vtable slot 0 of the object at self+0x04 with ext_006A5EC0(self+0x08); if arg==2, kills timer 2 and starts timer 3 (50 ms) on self+0x08.
// @field SpinButtonStates::ClickedUpState +0x04 void* field_0x04
// @field SpinButtonStates::ClickedUpState +0x08 void* field_0x08

namespace {
// Thiscall-style virtual slot: first argument is the object (this), second is one value.
using VSlotFn = void (*)(void* self, void* arg);
} // namespace

void fn_004587C0(void* self, UINT which) {
    if (which == 3) {
        // obj = self->field_0x04; vt = obj's vtable (read before the call).
        void* obj = lift_field<void*>(self, 0x04);
        void** vt = *reinterpret_cast<void***>(obj);
        // r = ext_006A5EC0(self->field_0x08)
        void* r = ext_006A5EC0(lift_field<void*>(self, 0x08));
        // obj->vtbl[0](r)
        reinterpret_cast<VSlotFn>(vt[0])(obj, r);
        return;
    }
    if (which == 2) {
        // KillOwnerTimerWithId(self->field_0x08, 2)
        ext_004586C0(lift_field<void*>(self, 0x08), 2);
        // StartOwnerTimerWithId(self->field_0x08, 3, 50)
        ext_004586A0(lift_field<void*>(self, 0x08), 3, 50);
    }
}
} // namespace lift_004587C0
} // namespace lift_004587C0
