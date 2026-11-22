// Lifted C++ translation unit: lifted/leaf/tiny_5C0000.cpp
#include "lift_compat.h"

// [0x005C3640] sub_005C3640 (5 bytes)
// @name VirtualSlot27Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 27 (offset +0x6C) with the same this pointer.
// @field VTable +0x6C void* slot27
void fn_005C3640(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x6C]      ; tail-jump to vtable slot 27 (0x6C / 4 on x86), this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[27]);
    target(self);
}
