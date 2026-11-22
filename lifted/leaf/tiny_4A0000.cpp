// Lifted C++ translation unit: lifted/leaf/tiny_4A0000.cpp
#include "lift_compat.h"

// [0x004AA580] sub_004AA580 (5 bytes)
// @name VirtualSlot8Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 8 (offset +0x20) with the same this pointer.
// @field VTable +0x20 void* slot8
void fn_004AA580(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x20]      ; tail-jump to vtable slot 8, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[8]);
    target(self);
}
