// Lifted C++ translation unit: lifted/leaf/tiny_680000.cpp
#include "lift_compat.h"

// [0x00682ED0] sub_00682ED0 (5 bytes)
// @name VirtualSlot9Thunk
// @class Object (unidentified; receiver is passed in ecx)
// @summary Virtual dispatch thunk: loads the vtable pointer from the receiver and returns the code address stored at vtable byte offset 0x24 (slot 9 on x86). The original tail-jumps to that address with the same this; this lift returns the target so the caller performs the call.
// @field Object +0x00 void** vptr
//
// Notes:
// - Original: mov eax, [ecx] / jmp [eax + 0x24]. No stack adjustment, so the
//   callee's arguments and return address are untouched by the thunk.
// - Pass-through is expressed as a call with the same this; the callee's
//   signature is unknown, so the result is returned as void*.
void* fn_00682ED0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x24]      ; tail-jump to vtable slot 9 (byte offset 0x24), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x24));
    return target(self);
}
