// Lifted C++ translation unit: lifted/leaf/tiny_640000.cpp
#include "lift_compat.h"

// [0x0064F8E0] sub_0064F8E0 (5 bytes)
// @name VirtualSlot23Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 23 (offset +0x5C) with the same this pointer; the callee's result is passed through.
// @field VTable +0x5C void* slot23
void* fn_0064F8E0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x5C]      ; tail-jump to vtable slot 23 (0x5C / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[0x5C / sizeof(void*)]);
    return target(self);
}
