// Lifted C++ translation unit: lifted/leaf/tiny_600000.cpp
#include "lift_compat.h"
// Lifted WIP: lifted/wip/fn_006036B0.cpp -> lifted/leaf/tiny_600000.cpp
extern "C" int mem_0096F81C;
extern "C" void __fastcall ext_0065F440(void* self);

extern "C" void __fastcall ext_0065F440(void* self);
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
extern "C" int mem_0097215C;
extern "C" void __fastcall ext_0060BA10(void* self);

extern "C" void __fastcall ext_0060BA10(void* self);
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

// [0x006036B0] sub_006036B0 (5 bytes)
// @name VirtualSlot28Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 28 (offset +0x70) with the same this pointer; the callee's result is passed through in eax.
// @field VTable +0x70 void* slot28
void* fn_006036B0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x70]      ; tail-jump to vtable slot 28 (0x70 / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[0x70 / sizeof(void*)]);
    return target(self);
}

// [0x006036C0] sub_006036C0 (5 bytes)
// @name VTable::VirtualSlot25Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 25 (offset +0x64) with the same this pointer; the callee's result is passed through.
// @field VTable +0x64 void* slot25
void* fn_006036C0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x64]      ; tail-jump to vtable slot 25 (0x64 / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[25]);
    return target(self);
}

// [0x00602EF0] sub_00602EF0 (11 bytes)
// @name sub_00602EF0
// @summary Destructor tail-call: restores vtable mem_0096F81C and tail-calls base destructor sub_0065F440.
extern "C" void __fastcall fn_00602EF0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0096F81C;
    ext_0065F440(self);
}

// [0x0060BCC0] sub_0060BCC0 (11 bytes)
// @name sub_0060BCC0
// @summary Destructor tail-call: restores vtable mem_0097215C and tail-calls base destructor sub_0060BA10.
extern "C" void __fastcall fn_0060BCC0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0097215C;
    ext_0060BA10(self);
}

// [0x00602F00] sub_00602F00 (21 bytes)
namespace lift_00602F00 {
// @name UnknownClass::GetSubobject14ViaVirtual28
// @class UnknownClass
// @summary Calls the vtable slot at +0x28 of the object pointed to by this+0x04, passing the address this+0x14 as its single argument (callee pops), then returns this+0x14; thiscall.
// @field UnknownClass +0x04 void* field_0x04
void* fn_00602F00(void* self) {
    void* subobject = static_cast<uint8_t*>(self) + 0x14;
    void* obj = lift_field<void*>(self, 0x04);
    void* vtable = lift_field<void*>(obj, 0x00);
    using Slot28Fn = void (*)(void* thisPtr, void* arg);
    auto fn = reinterpret_cast<Slot28Fn>(lift_field<void*>(vtable, 0x28));
    fn(obj, subobject);
    return subobject;
}
} // namespace lift_00602F00
