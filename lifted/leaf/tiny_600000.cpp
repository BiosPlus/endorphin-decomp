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

// [0x00603670] sub_00603670 (5 bytes)
// @name VirtualSlot15Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 15 (offset +0x3C) with the same this pointer; the callee's result is passed through.
// @field VTable +0x3C void* slot15
void* fn_00603670(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x3C]      ; tail-jump to vtable slot 15 (0x3C / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[15]);
    return target(self);
}

// [0x006036A0] sub_006036A0 (5 bytes)
// @name VirtualSlot20Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.
// @field VTable +0x50 void* slot20
void* fn_006036A0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x50]      ; tail-jump to vtable slot 20 (0x50 / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[20]);
    return target(self);
}

// [0x00603690] sub_00603690 (5 bytes)
// @name VirtualSlot16Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 16 (offset +0x40) with the same this pointer; the callee's return value is passed through in eax.
// @field VTable +0x40 void* slot16
void fn_00603690(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x40]      ; tail-jump to vtable slot 16 (0x40 / 4 on x86), this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[0x40 / sizeof(void*)]);
    target(self);
}
