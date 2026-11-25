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

// [0x00458900] SpinButtonStates::ClickedDownState::vfunc_5 (63 bytes)
namespace lift_00458900 {
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Takes its argument in ecx and returns a value in eax.
extern uintptr_t ext_006A5EC0(void* self);
// Known callee 0x00458860: Unknown::setCurrentByIndex (Releases the current element via vtable slot 2, selects element `index` from the array at +0x04..+0x08, stores it as current at +0x10, and invokes its vtable slot 1.)
extern void ext_00458860(void* self, uint32_t index);

// Thiscall virtual slot taking one pointer-sized argument (ecx = object, arg on stack).
using VSlotArgFn = void (*)(void* self, uintptr_t arg);

// @name SpinButtonStates::ClickedDownState::vfunc_5
// @class SpinButtonStates::ClickedDownState
// @summary Calls slot 1 then slot 2 on the object at +0x04, passing each the result of ext_006A5EC0(+0x08), then calls setCurrentByIndex(+0x0C, 0).
// @field SpinButtonStates::ClickedDownState +0x04 void* field_0x04
// @field SpinButtonStates::ClickedDownState +0x08 void* field_0x08
// @field SpinButtonStates::ClickedDownState +0x0C void* field_0x0C
void fn_00458900(void* self) {
    uint8_t* s = static_cast<uint8_t*>(self);

    void* obj = lift_field<void*>(s, 0x04);
    void** vt = *reinterpret_cast<void***>(obj);
    uintptr_t r0 = ext_006A5EC0(lift_field<void*>(s, 0x08));
    reinterpret_cast<VSlotArgFn>(vt[1])(obj, r0);

    obj = lift_field<void*>(s, 0x04);
    vt = *reinterpret_cast<void***>(obj);
    uintptr_t r1 = ext_006A5EC0(lift_field<void*>(s, 0x08));
    reinterpret_cast<VSlotArgFn>(vt[2])(lift_field<void*>(s, 0x04), r1);

    ext_00458860(lift_field<void*>(s, 0x0C), 0);
}
} // namespace lift_00458900

// [0x00458740] SpinButtonStates::ClickedDownState::vfunc_3 (70 bytes)
namespace lift_00458740 {
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Caller loads ecx from self+0x08 before the call; the result in eax is forwarded as an argument.
extern UINT_PTR ext_006A5EC0(void* ecx);
// Known callee 0x004586C0: KillOwnerTimerWithId (Kills the timer identified by the argument, owned by the window handle at self+0x20.)
extern BOOL ext_004586C0(void* self, UINT_PTR timerId);
// Known callee 0x004586A0: StartOwnerTimerWithId (Starts a Win32 timer (no callback) with the given id and interval on the owner window stored at self+0x20.)
extern void ext_004586A0(void* self, UINT_PTR nIDEvent, UINT uElapse);

// @name SpinButtonStates::ClickedDownState::vfunc_3
// @class SpinButtonStates::ClickedDownState
// @summary Dispatches state arg 3 to the child object's vtable slot 1; for arg 2 restarts the owner's timer 3 with a 50 ms interval after killing timer 2.
// @field SpinButtonStates::ClickedDownState +0x04 void* field_0x04
// @field SpinButtonStates::ClickedDownState +0x08 void* field_0x08
void fn_00458740(void* self, UINT arg) {
    if (arg == 3) {
        void* child = lift_field<void*>(self, 0x04);
        void* owner = lift_field<void*>(self, 0x08);
        void** vtbl = *reinterpret_cast<void***>(child);

        UINT_PTR result = ext_006A5EC0(owner);

        auto slot1 = reinterpret_cast<void(__thiscall*)(void*, UINT_PTR)>(vtbl[1]);
        slot1(child, result);
    } else if (arg == 2) {
        void* owner = lift_field<void*>(self, 0x08);

        ext_004586C0(owner, 2);
        ext_004586A0(owner, 3, 50);
    }
}
} // namespace lift_00458740
