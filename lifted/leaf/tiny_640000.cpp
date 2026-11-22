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

// [0x0064F900] sub_0064F900 (5 bytes)
// @name VirtualSlot21Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.
// @field VTable +0x54 void* slot21
void* fn_0064F900(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x54]      ; tail-jump to vtable slot 21 (byte offset 0x54), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x54));
    return target(self);
}

// [0x0064F8F0] sub_0064F8F0 (5 bytes)
// @name VirtualSlot24Thunk
// @class Unknown
// @summary Loads the object's vtable pointer and dispatches through vtable slot 24 (offset +0x60), tail-jumping with the caller's arguments.
// @field Unknown +0x00 void* const* vtable
void fn_0064F8F0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void* const* vtable = *reinterpret_cast<void* const* const*>(self);
    // jmp [eax + 0x60]     ; slot index 0x60 / sizeof(void*) = 24
    // The original is a tail jump, so the callee receives the caller's
    // arguments unchanged. That cannot be expressed portably without
    // knowing the slot's signature, so only the slot lookup is kept here.
    void* slot = vtable[0x60 / sizeof(void*)];
    (void)slot;
}

// [0x0064F910] sub_0064F910 (5 bytes)
// @name VirtualSlot29Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 29 (offset +0x74) with the same this pointer; the callee's result is passed through.
// @field VTable +0x74 void* slot29
void* fn_0064F910(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x74]      ; tail-jump to vtable slot 29 (byte offset 0x74), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x74));
    return target(self);
}
