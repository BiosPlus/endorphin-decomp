// Lifted C++ translation unit: lifted/leaf/tiny_600000.cpp
#include "lift_compat.h"

// [0x00603680] sub_00603680 (5 bytes)
// @name VirtualSlot19Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 19 (offset +0x4C) with the same this pointer.
// @field VTable +0x4C void* slot19
void fn_00603680(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x4C]      ; tail-jump to vtable slot 19, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[0x4C / sizeof(void*)]);
    target(self);
}
