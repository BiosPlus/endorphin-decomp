// Lifted C++ translation unit: lifted/leaf/tiny_4C0000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;

// [0x004C0EA0] sub_004C0EA0 (8 bytes)
// @name sub_004C0EA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x170.
extern "C" void __fastcall fn_004C0EA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x170);
    target(self);
}

// [0x004C0FE0] sub_004C0FE0 (8 bytes)
// @name sub_004C0FE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x114.
extern "C" void __fastcall fn_004C0FE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x114);
    target(self);
}

// [0x004C1710] sub_004C1710 (8 bytes)
// @name sub_004C1710
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x110.
extern "C" void __fastcall fn_004C1710(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x110);
    target(self);
}

// [0x004C6F50] sub_004C6F50 (12 bytes)
// @name sub_004C6F50
// @summary This-adjustor thunk: adjusts `this` by +0x180 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_004C6F50(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x180);
}

// [0x004CA560] sub_004CA560 (8 bytes)
// @name sub_004CA560
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x160.
extern "C" void __fastcall fn_004CA560(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x160);
    target(self);
}

// [0x004CE570] sub_004CE570 (13 bytes)
// @name sub_004CE570
// @summary Setter storing float argument into field at offset +0x18C.
extern "C" void __fastcall fn_004CE570(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x18C) = value;
}
