// Lifted C++ translation unit: lifted/leaf/tiny_460000.cpp
#include "lift_compat.h"

// [0x0046A470] sub_0046A470 (5 bytes)
// @name VirtualSlot1Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 1 (offset +0x4) with the same this pointer.
// @field VTable +0x04 void* slot1
void fn_0046A470(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 4]         ; tail-jump to vtable slot 1, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[1]);
    target(self);
}

// [0x0046A480] sub_0046A480 (5 bytes)
// @name VirtualSlot2Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 2 (offset +0x8) with the same this pointer.
// @field VTable +0x08 void* slot2
void fn_0046A480(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 8]         ; tail-jump to vtable slot 2, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[2]);
    target(self);
}
