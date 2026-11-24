// Lifted C++ translation unit: lifted/leaf/tiny_6F0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006F24E0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006F7280(void* self);
extern "C" void __fastcall ext_006B9D70(void* self);
extern "C" int32_t mem_00B5E240;
extern "C" int32_t mem_00B5E250;
extern "C" int mem_00B5E248;
extern "C" void __fastcall ext_006F96B0(void* self);
extern "C" void __fastcall ext_006F9830(void* self);
extern "C" void __fastcall ext_006F9AA0(void* self);
extern "C" int32_t mem_00B5E400;
extern "C" int32_t mem_00B5E3F8;
extern "C" int mem_00B5E3F0;
extern "C" void __fastcall ext_006FA230(void* self);
extern "C" int32_t mem_00B608B0;
extern "C" int32_t mem_00B608D0;
extern "C" int mem_00B608C8;
extern "C" int32_t mem_00AAB8E8;
extern "C" void __fastcall ext_006FC670(void* self);
extern "C" int mem_00995104;
extern "C" int32_t mem_00B608B4;
extern "C" int32_t mem_00B608C0;
extern "C" int mem_00B608B8;
extern "C" void __fastcall ext_006FC820(void* self);
extern "C" int mem_00995180;
extern "C" void __fastcall ext_006FC830(void* self);

extern "C" void __fastcall ext_006FC830(void* self);
// @name sub_006F24C0
// @summary MSVC scalar deleting destructor: calls sub_006F24E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006F24C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006F24E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
#include <cstdint>

// [0x006F7260] sub_006F7260 (30 bytes)
// @name sub_006F7260
// @summary MSVC scalar deleting destructor: calls sub_006F7280 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006F7260(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006F7280(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F7550] sub_006F7550 (16 bytes)
// @name sub_006F7550
// @summary Getter returning int32_t field at offset +0x198.
extern "C" int32_t __fastcall fn_006F7550(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x198));
}

// [0x006F76E0] sub_006F76E0 (16 bytes)
// @name sub_006F76E0
// @summary Getter returning int32_t field at offset +0x8AE8.
extern "C" int32_t __fastcall fn_006F76E0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x8AE8));
}

// [0x006F76F0] sub_006F76F0 (16 bytes)
// @name sub_006F76F0
// @summary Getter returning int32_t field at offset +0x8AEC.
extern "C" int32_t __fastcall fn_006F76F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x8AEC));
}

// [0x006F7900] sub_006F7900 (8 bytes)
// @name sub_006F7900
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_006B9D70.
extern "C" void __fastcall fn_006F7900(void* self) {
    ext_006B9D70(static_cast<char*>(self) + 0x4);
}

// [0x006F79E0] sub_006F79E0 (8 bytes)
// @name sub_006F79E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5BC.
extern "C" void __fastcall fn_006F79E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5BC);
    target(self);
}

// [0x006F79F0] sub_006F79F0 (8 bytes)
// @name sub_006F79F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x59C.
extern "C" void __fastcall fn_006F79F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x59C);
    target(self);
}

// [0x006F7A00] sub_006F7A00 (8 bytes)
// @name sub_006F7A00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x57C.
extern "C" void __fastcall fn_006F7A00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x57C);
    target(self);
}

// [0x006F7A10] sub_006F7A10 (8 bytes)
// @name sub_006F7A10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x55C.
extern "C" void __fastcall fn_006F7A10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x55C);
    target(self);
}

// [0x006F7A20] sub_006F7A20 (8 bytes)
// @name sub_006F7A20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x53C.
extern "C" void __fastcall fn_006F7A20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x53C);
    target(self);
}

// [0x006F7A30] sub_006F7A30 (8 bytes)
// @name sub_006F7A30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x51C.
extern "C" void __fastcall fn_006F7A30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x51C);
    target(self);
}

// [0x006F7A40] sub_006F7A40 (8 bytes)
// @name sub_006F7A40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4FC.
extern "C" void __fastcall fn_006F7A40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4FC);
    target(self);
}

// [0x006F7A50] sub_006F7A50 (8 bytes)
// @name sub_006F7A50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4DC.
extern "C" void __fastcall fn_006F7A50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4DC);
    target(self);
}

// [0x006F7A60] sub_006F7A60 (8 bytes)
// @name sub_006F7A60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4BC.
extern "C" void __fastcall fn_006F7A60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4BC);
    target(self);
}

// [0x006F7A70] sub_006F7A70 (8 bytes)
// @name sub_006F7A70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x49C.
extern "C" void __fastcall fn_006F7A70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x49C);
    target(self);
}

// [0x006F7A80] sub_006F7A80 (8 bytes)
// @name sub_006F7A80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x47C.
extern "C" void __fastcall fn_006F7A80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x47C);
    target(self);
}

// [0x006F7A90] sub_006F7A90 (8 bytes)
// @name sub_006F7A90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x45C.
extern "C" void __fastcall fn_006F7A90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x45C);
    target(self);
}

// [0x006F7AA0] sub_006F7AA0 (8 bytes)
// @name sub_006F7AA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x43C.
extern "C" void __fastcall fn_006F7AA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x43C);
    target(self);
}

// [0x006F7AB0] sub_006F7AB0 (8 bytes)
// @name sub_006F7AB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x41C.
extern "C" void __fastcall fn_006F7AB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x41C);
    target(self);
}

// [0x006F7AC0] sub_006F7AC0 (8 bytes)
// @name sub_006F7AC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3FC.
extern "C" void __fastcall fn_006F7AC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3FC);
    target(self);
}

// [0x006F7AD0] sub_006F7AD0 (8 bytes)
// @name sub_006F7AD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3DC.
extern "C" void __fastcall fn_006F7AD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3DC);
    target(self);
}

// [0x006F7AE0] sub_006F7AE0 (8 bytes)
// @name sub_006F7AE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3BC.
extern "C" void __fastcall fn_006F7AE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3BC);
    target(self);
}

// [0x006F7AF0] sub_006F7AF0 (8 bytes)
// @name sub_006F7AF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x39C.
extern "C" void __fastcall fn_006F7AF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x39C);
    target(self);
}

// [0x006F7B00] sub_006F7B00 (8 bytes)
// @name sub_006F7B00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x37C.
extern "C" void __fastcall fn_006F7B00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x37C);
    target(self);
}

// [0x006F7B10] sub_006F7B10 (8 bytes)
// @name sub_006F7B10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x35C.
extern "C" void __fastcall fn_006F7B10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x35C);
    target(self);
}

// [0x006F7B20] sub_006F7B20 (8 bytes)
// @name sub_006F7B20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x33C.
extern "C" void __fastcall fn_006F7B20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x33C);
    target(self);
}

// [0x006F7B30] sub_006F7B30 (8 bytes)
// @name sub_006F7B30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x31C.
extern "C" void __fastcall fn_006F7B30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x31C);
    target(self);
}

// [0x006F7B40] sub_006F7B40 (8 bytes)
// @name sub_006F7B40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2FC.
extern "C" void __fastcall fn_006F7B40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2FC);
    target(self);
}

// [0x006F7B50] sub_006F7B50 (8 bytes)
// @name sub_006F7B50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2DC.
extern "C" void __fastcall fn_006F7B50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2DC);
    target(self);
}

// [0x006F7B60] sub_006F7B60 (8 bytes)
// @name sub_006F7B60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2BC.
extern "C" void __fastcall fn_006F7B60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2BC);
    target(self);
}

// [0x006F7B70] sub_006F7B70 (8 bytes)
// @name sub_006F7B70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5E0.
extern "C" void __fastcall fn_006F7B70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5E0);
    target(self);
}

// [0x006F7B80] sub_006F7B80 (8 bytes)
// @name sub_006F7B80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5C0.
extern "C" void __fastcall fn_006F7B80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5C0);
    target(self);
}

// [0x006F7B90] sub_006F7B90 (8 bytes)
// @name sub_006F7B90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5A0.
extern "C" void __fastcall fn_006F7B90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5A0);
    target(self);
}

// [0x006F7BA0] sub_006F7BA0 (8 bytes)
// @name sub_006F7BA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x580.
extern "C" void __fastcall fn_006F7BA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x580);
    target(self);
}

// [0x006F7BB0] sub_006F7BB0 (8 bytes)
// @name sub_006F7BB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x560.
extern "C" void __fastcall fn_006F7BB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x560);
    target(self);
}

// [0x006F7BC0] sub_006F7BC0 (8 bytes)
// @name sub_006F7BC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x540.
extern "C" void __fastcall fn_006F7BC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x540);
    target(self);
}

// [0x006F7BD0] sub_006F7BD0 (8 bytes)
// @name sub_006F7BD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x520.
extern "C" void __fastcall fn_006F7BD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x520);
    target(self);
}

// [0x006F7BE0] sub_006F7BE0 (8 bytes)
// @name sub_006F7BE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x500.
extern "C" void __fastcall fn_006F7BE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x500);
    target(self);
}

// [0x006F7BF0] sub_006F7BF0 (8 bytes)
// @name sub_006F7BF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4E0.
extern "C" void __fastcall fn_006F7BF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4E0);
    target(self);
}

// [0x006F7C00] sub_006F7C00 (8 bytes)
// @name sub_006F7C00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4C0.
extern "C" void __fastcall fn_006F7C00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4C0);
    target(self);
}

// [0x006F7C10] sub_006F7C10 (8 bytes)
// @name sub_006F7C10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4A0.
extern "C" void __fastcall fn_006F7C10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4A0);
    target(self);
}

// [0x006F7C20] sub_006F7C20 (8 bytes)
// @name sub_006F7C20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x480.
extern "C" void __fastcall fn_006F7C20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x480);
    target(self);
}

// [0x006F7C30] sub_006F7C30 (8 bytes)
// @name sub_006F7C30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x460.
extern "C" void __fastcall fn_006F7C30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x460);
    target(self);
}

// [0x006F7C40] sub_006F7C40 (8 bytes)
// @name sub_006F7C40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x440.
extern "C" void __fastcall fn_006F7C40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x440);
    target(self);
}

// [0x006F7C50] sub_006F7C50 (8 bytes)
// @name sub_006F7C50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x420.
extern "C" void __fastcall fn_006F7C50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x420);
    target(self);
}

// [0x006F7C60] sub_006F7C60 (8 bytes)
// @name sub_006F7C60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x400.
extern "C" void __fastcall fn_006F7C60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x400);
    target(self);
}

// [0x006F7C70] sub_006F7C70 (8 bytes)
// @name sub_006F7C70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3E0.
extern "C" void __fastcall fn_006F7C70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3E0);
    target(self);
}

// [0x006F7C80] sub_006F7C80 (8 bytes)
// @name sub_006F7C80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3C0.
extern "C" void __fastcall fn_006F7C80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3C0);
    target(self);
}

// [0x006F7C90] sub_006F7C90 (8 bytes)
// @name sub_006F7C90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3A0.
extern "C" void __fastcall fn_006F7C90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3A0);
    target(self);
}

// [0x006F7CA0] sub_006F7CA0 (8 bytes)
// @name sub_006F7CA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x380.
extern "C" void __fastcall fn_006F7CA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x380);
    target(self);
}

// [0x006F7CB0] sub_006F7CB0 (8 bytes)
// @name sub_006F7CB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x360.
extern "C" void __fastcall fn_006F7CB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x360);
    target(self);
}

// [0x006F7CC0] sub_006F7CC0 (8 bytes)
// @name sub_006F7CC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x340.
extern "C" void __fastcall fn_006F7CC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x340);
    target(self);
}

// [0x006F7CD0] sub_006F7CD0 (8 bytes)
// @name sub_006F7CD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x320.
extern "C" void __fastcall fn_006F7CD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x320);
    target(self);
}

// [0x006F7CE0] sub_006F7CE0 (8 bytes)
// @name sub_006F7CE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x300.
extern "C" void __fastcall fn_006F7CE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x300);
    target(self);
}

// [0x006F7CF0] sub_006F7CF0 (8 bytes)
// @name sub_006F7CF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2E0.
extern "C" void __fastcall fn_006F7CF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2E0);
    target(self);
}

// [0x006F7D00] sub_006F7D00 (8 bytes)
// @name sub_006F7D00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2C0.
extern "C" void __fastcall fn_006F7D00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2C0);
    target(self);
}

// [0x006F7D10] sub_006F7D10 (8 bytes)
// @name sub_006F7D10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5E4.
extern "C" void __fastcall fn_006F7D10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5E4);
    target(self);
}

// [0x006F7D20] sub_006F7D20 (8 bytes)
// @name sub_006F7D20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5C4.
extern "C" void __fastcall fn_006F7D20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5C4);
    target(self);
}

// [0x006F7D30] sub_006F7D30 (8 bytes)
// @name sub_006F7D30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5A4.
extern "C" void __fastcall fn_006F7D30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5A4);
    target(self);
}

// [0x006F7D40] sub_006F7D40 (8 bytes)
// @name sub_006F7D40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x584.
extern "C" void __fastcall fn_006F7D40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x584);
    target(self);
}

// [0x006F7D50] sub_006F7D50 (8 bytes)
// @name sub_006F7D50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x564.
extern "C" void __fastcall fn_006F7D50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x564);
    target(self);
}

// [0x006F7D60] sub_006F7D60 (8 bytes)
// @name sub_006F7D60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x544.
extern "C" void __fastcall fn_006F7D60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x544);
    target(self);
}

// [0x006F7D70] sub_006F7D70 (8 bytes)
// @name sub_006F7D70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x524.
extern "C" void __fastcall fn_006F7D70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x524);
    target(self);
}

// [0x006F7D80] sub_006F7D80 (8 bytes)
// @name sub_006F7D80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x504.
extern "C" void __fastcall fn_006F7D80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x504);
    target(self);
}

// [0x006F7D90] sub_006F7D90 (8 bytes)
// @name sub_006F7D90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4E4.
extern "C" void __fastcall fn_006F7D90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4E4);
    target(self);
}

// [0x006F7DA0] sub_006F7DA0 (8 bytes)
// @name sub_006F7DA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4C4.
extern "C" void __fastcall fn_006F7DA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4C4);
    target(self);
}

// [0x006F7DB0] sub_006F7DB0 (8 bytes)
// @name sub_006F7DB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4A4.
extern "C" void __fastcall fn_006F7DB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4A4);
    target(self);
}

// [0x006F7DC0] sub_006F7DC0 (8 bytes)
// @name sub_006F7DC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x484.
extern "C" void __fastcall fn_006F7DC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x484);
    target(self);
}

// [0x006F7DD0] sub_006F7DD0 (8 bytes)
// @name sub_006F7DD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x464.
extern "C" void __fastcall fn_006F7DD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x464);
    target(self);
}

// [0x006F7DE0] sub_006F7DE0 (8 bytes)
// @name sub_006F7DE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x444.
extern "C" void __fastcall fn_006F7DE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x444);
    target(self);
}

// [0x006F7DF0] sub_006F7DF0 (8 bytes)
// @name sub_006F7DF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x424.
extern "C" void __fastcall fn_006F7DF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x424);
    target(self);
}

// [0x006F7E00] sub_006F7E00 (8 bytes)
// @name sub_006F7E00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x404.
extern "C" void __fastcall fn_006F7E00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x404);
    target(self);
}

// [0x006F7E10] sub_006F7E10 (8 bytes)
// @name sub_006F7E10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3E4.
extern "C" void __fastcall fn_006F7E10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3E4);
    target(self);
}

// [0x006F7E20] sub_006F7E20 (8 bytes)
// @name sub_006F7E20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3C4.
extern "C" void __fastcall fn_006F7E20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3C4);
    target(self);
}

// [0x006F7E30] sub_006F7E30 (8 bytes)
// @name sub_006F7E30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3A4.
extern "C" void __fastcall fn_006F7E30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3A4);
    target(self);
}

// [0x006F7E40] sub_006F7E40 (8 bytes)
// @name sub_006F7E40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x384.
extern "C" void __fastcall fn_006F7E40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x384);
    target(self);
}

// [0x006F7E50] sub_006F7E50 (8 bytes)
// @name sub_006F7E50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x364.
extern "C" void __fastcall fn_006F7E50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x364);
    target(self);
}

// [0x006F7E60] sub_006F7E60 (8 bytes)
// @name sub_006F7E60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x344.
extern "C" void __fastcall fn_006F7E60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x344);
    target(self);
}

// [0x006F7E70] sub_006F7E70 (8 bytes)
// @name sub_006F7E70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x324.
extern "C" void __fastcall fn_006F7E70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x324);
    target(self);
}

// [0x006F7E80] sub_006F7E80 (8 bytes)
// @name sub_006F7E80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x304.
extern "C" void __fastcall fn_006F7E80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x304);
    target(self);
}

// [0x006F7E90] sub_006F7E90 (8 bytes)
// @name sub_006F7E90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2E4.
extern "C" void __fastcall fn_006F7E90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2E4);
    target(self);
}

// [0x006F7EA0] sub_006F7EA0 (8 bytes)
// @name sub_006F7EA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2C4.
extern "C" void __fastcall fn_006F7EA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2C4);
    target(self);
}

// [0x006F7EB0] sub_006F7EB0 (8 bytes)
// @name sub_006F7EB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5E8.
extern "C" void __fastcall fn_006F7EB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5E8);
    target(self);
}

// [0x006F7EC0] sub_006F7EC0 (8 bytes)
// @name sub_006F7EC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5C8.
extern "C" void __fastcall fn_006F7EC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5C8);
    target(self);
}

// [0x006F7ED0] sub_006F7ED0 (8 bytes)
// @name sub_006F7ED0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5A8.
extern "C" void __fastcall fn_006F7ED0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5A8);
    target(self);
}

// [0x006F7EE0] sub_006F7EE0 (8 bytes)
// @name sub_006F7EE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x588.
extern "C" void __fastcall fn_006F7EE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x588);
    target(self);
}

// [0x006F7EF0] sub_006F7EF0 (8 bytes)
// @name sub_006F7EF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x568.
extern "C" void __fastcall fn_006F7EF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x568);
    target(self);
}

// [0x006F7F00] sub_006F7F00 (8 bytes)
// @name sub_006F7F00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x548.
extern "C" void __fastcall fn_006F7F00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x548);
    target(self);
}

// [0x006F7F10] sub_006F7F10 (8 bytes)
// @name sub_006F7F10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x528.
extern "C" void __fastcall fn_006F7F10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x528);
    target(self);
}

// [0x006F7F20] sub_006F7F20 (8 bytes)
// @name sub_006F7F20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x508.
extern "C" void __fastcall fn_006F7F20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x508);
    target(self);
}

// [0x006F7F30] sub_006F7F30 (8 bytes)
// @name sub_006F7F30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4E8.
extern "C" void __fastcall fn_006F7F30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4E8);
    target(self);
}

// [0x006F7F40] sub_006F7F40 (8 bytes)
// @name sub_006F7F40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4C8.
extern "C" void __fastcall fn_006F7F40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4C8);
    target(self);
}

// [0x006F7F50] sub_006F7F50 (8 bytes)
// @name sub_006F7F50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4A8.
extern "C" void __fastcall fn_006F7F50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4A8);
    target(self);
}

// [0x006F7F60] sub_006F7F60 (8 bytes)
// @name sub_006F7F60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x488.
extern "C" void __fastcall fn_006F7F60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x488);
    target(self);
}

// [0x006F7F70] sub_006F7F70 (8 bytes)
// @name sub_006F7F70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x468.
extern "C" void __fastcall fn_006F7F70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x468);
    target(self);
}

// [0x006F7F80] sub_006F7F80 (8 bytes)
// @name sub_006F7F80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x448.
extern "C" void __fastcall fn_006F7F80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x448);
    target(self);
}

// [0x006F7F90] sub_006F7F90 (8 bytes)
// @name sub_006F7F90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x428.
extern "C" void __fastcall fn_006F7F90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x428);
    target(self);
}

// [0x006F7FA0] sub_006F7FA0 (8 bytes)
// @name sub_006F7FA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x408.
extern "C" void __fastcall fn_006F7FA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x408);
    target(self);
}

// [0x006F7FB0] sub_006F7FB0 (8 bytes)
// @name sub_006F7FB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3E8.
extern "C" void __fastcall fn_006F7FB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3E8);
    target(self);
}

// [0x006F7FC0] sub_006F7FC0 (8 bytes)
// @name sub_006F7FC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3C8.
extern "C" void __fastcall fn_006F7FC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3C8);
    target(self);
}

// [0x006F7FD0] sub_006F7FD0 (8 bytes)
// @name sub_006F7FD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3A8.
extern "C" void __fastcall fn_006F7FD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3A8);
    target(self);
}

// [0x006F7FE0] sub_006F7FE0 (8 bytes)
// @name sub_006F7FE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x388.
extern "C" void __fastcall fn_006F7FE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x388);
    target(self);
}

// [0x006F7FF0] sub_006F7FF0 (8 bytes)
// @name sub_006F7FF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x368.
extern "C" void __fastcall fn_006F7FF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x368);
    target(self);
}

// [0x006F8000] sub_006F8000 (8 bytes)
// @name sub_006F8000
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x348.
extern "C" void __fastcall fn_006F8000(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x348);
    target(self);
}

// [0x006F8010] sub_006F8010 (8 bytes)
// @name sub_006F8010
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x328.
extern "C" void __fastcall fn_006F8010(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x328);
    target(self);
}

// [0x006F8020] sub_006F8020 (8 bytes)
// @name sub_006F8020
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x308.
extern "C" void __fastcall fn_006F8020(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x308);
    target(self);
}

// [0x006F8030] sub_006F8030 (8 bytes)
// @name sub_006F8030
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2E8.
extern "C" void __fastcall fn_006F8030(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2E8);
    target(self);
}

// [0x006F8040] sub_006F8040 (8 bytes)
// @name sub_006F8040
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2C8.
extern "C" void __fastcall fn_006F8040(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2C8);
    target(self);
}

// [0x006F8050] sub_006F8050 (8 bytes)
// @name sub_006F8050
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5EC.
extern "C" void __fastcall fn_006F8050(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5EC);
    target(self);
}

// [0x006F8060] sub_006F8060 (8 bytes)
// @name sub_006F8060
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5CC.
extern "C" void __fastcall fn_006F8060(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5CC);
    target(self);
}

// [0x006F8070] sub_006F8070 (8 bytes)
// @name sub_006F8070
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5AC.
extern "C" void __fastcall fn_006F8070(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5AC);
    target(self);
}

// [0x006F8080] sub_006F8080 (8 bytes)
// @name sub_006F8080
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x58C.
extern "C" void __fastcall fn_006F8080(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x58C);
    target(self);
}

// [0x006F8090] sub_006F8090 (8 bytes)
// @name sub_006F8090
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x56C.
extern "C" void __fastcall fn_006F8090(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x56C);
    target(self);
}

// [0x006F80A0] sub_006F80A0 (8 bytes)
// @name sub_006F80A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x54C.
extern "C" void __fastcall fn_006F80A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x54C);
    target(self);
}

// [0x006F80B0] sub_006F80B0 (8 bytes)
// @name sub_006F80B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x52C.
extern "C" void __fastcall fn_006F80B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x52C);
    target(self);
}

// [0x006F80C0] sub_006F80C0 (8 bytes)
// @name sub_006F80C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x50C.
extern "C" void __fastcall fn_006F80C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x50C);
    target(self);
}

// [0x006F80D0] sub_006F80D0 (8 bytes)
// @name sub_006F80D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4EC.
extern "C" void __fastcall fn_006F80D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4EC);
    target(self);
}

// [0x006F80E0] sub_006F80E0 (8 bytes)
// @name sub_006F80E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4CC.
extern "C" void __fastcall fn_006F80E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4CC);
    target(self);
}

// [0x006F80F0] sub_006F80F0 (8 bytes)
// @name sub_006F80F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4AC.
extern "C" void __fastcall fn_006F80F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4AC);
    target(self);
}

// [0x006F8100] sub_006F8100 (8 bytes)
// @name sub_006F8100
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x48C.
extern "C" void __fastcall fn_006F8100(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x48C);
    target(self);
}

// [0x006F8110] sub_006F8110 (8 bytes)
// @name sub_006F8110
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x46C.
extern "C" void __fastcall fn_006F8110(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x46C);
    target(self);
}

// [0x006F8120] sub_006F8120 (8 bytes)
// @name sub_006F8120
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x44C.
extern "C" void __fastcall fn_006F8120(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x44C);
    target(self);
}

// [0x006F8130] sub_006F8130 (8 bytes)
// @name sub_006F8130
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x42C.
extern "C" void __fastcall fn_006F8130(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x42C);
    target(self);
}

// [0x006F8140] sub_006F8140 (8 bytes)
// @name sub_006F8140
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x40C.
extern "C" void __fastcall fn_006F8140(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x40C);
    target(self);
}

// [0x006F8150] sub_006F8150 (8 bytes)
// @name sub_006F8150
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3EC.
extern "C" void __fastcall fn_006F8150(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3EC);
    target(self);
}

// [0x006F8160] sub_006F8160 (8 bytes)
// @name sub_006F8160
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3CC.
extern "C" void __fastcall fn_006F8160(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3CC);
    target(self);
}

// [0x006F8170] sub_006F8170 (8 bytes)
// @name sub_006F8170
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3AC.
extern "C" void __fastcall fn_006F8170(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3AC);
    target(self);
}

// [0x006F8180] sub_006F8180 (8 bytes)
// @name sub_006F8180
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x38C.
extern "C" void __fastcall fn_006F8180(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x38C);
    target(self);
}

// [0x006F8190] sub_006F8190 (8 bytes)
// @name sub_006F8190
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x36C.
extern "C" void __fastcall fn_006F8190(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x36C);
    target(self);
}

// [0x006F81A0] sub_006F81A0 (8 bytes)
// @name sub_006F81A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x34C.
extern "C" void __fastcall fn_006F81A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x34C);
    target(self);
}

// [0x006F81B0] sub_006F81B0 (8 bytes)
// @name sub_006F81B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x32C.
extern "C" void __fastcall fn_006F81B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x32C);
    target(self);
}

// [0x006F81C0] sub_006F81C0 (8 bytes)
// @name sub_006F81C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x30C.
extern "C" void __fastcall fn_006F81C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x30C);
    target(self);
}

// [0x006F81D0] sub_006F81D0 (8 bytes)
// @name sub_006F81D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2EC.
extern "C" void __fastcall fn_006F81D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2EC);
    target(self);
}

// [0x006F81E0] sub_006F81E0 (8 bytes)
// @name sub_006F81E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2CC.
extern "C" void __fastcall fn_006F81E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2CC);
    target(self);
}

// [0x006F81F0] sub_006F81F0 (8 bytes)
// @name sub_006F81F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5F0.
extern "C" void __fastcall fn_006F81F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5F0);
    target(self);
}

// [0x006F8200] sub_006F8200 (8 bytes)
// @name sub_006F8200
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5D0.
extern "C" void __fastcall fn_006F8200(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5D0);
    target(self);
}

// [0x006F8210] sub_006F8210 (8 bytes)
// @name sub_006F8210
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5B0.
extern "C" void __fastcall fn_006F8210(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5B0);
    target(self);
}

// [0x006F8220] sub_006F8220 (8 bytes)
// @name sub_006F8220
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x590.
extern "C" void __fastcall fn_006F8220(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x590);
    target(self);
}

// [0x006F8230] sub_006F8230 (8 bytes)
// @name sub_006F8230
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x570.
extern "C" void __fastcall fn_006F8230(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x570);
    target(self);
}

// [0x006F8240] sub_006F8240 (8 bytes)
// @name sub_006F8240
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x550.
extern "C" void __fastcall fn_006F8240(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x550);
    target(self);
}

// [0x006F8250] sub_006F8250 (8 bytes)
// @name sub_006F8250
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x530.
extern "C" void __fastcall fn_006F8250(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x530);
    target(self);
}

// [0x006F8260] sub_006F8260 (8 bytes)
// @name sub_006F8260
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x510.
extern "C" void __fastcall fn_006F8260(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x510);
    target(self);
}

// [0x006F8270] sub_006F8270 (8 bytes)
// @name sub_006F8270
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4F0.
extern "C" void __fastcall fn_006F8270(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4F0);
    target(self);
}

// [0x006F8280] sub_006F8280 (8 bytes)
// @name sub_006F8280
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4D0.
extern "C" void __fastcall fn_006F8280(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4D0);
    target(self);
}

// [0x006F8290] sub_006F8290 (8 bytes)
// @name sub_006F8290
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4B0.
extern "C" void __fastcall fn_006F8290(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4B0);
    target(self);
}

// [0x006F82A0] sub_006F82A0 (8 bytes)
// @name sub_006F82A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x490.
extern "C" void __fastcall fn_006F82A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x490);
    target(self);
}

// [0x006F82B0] sub_006F82B0 (8 bytes)
// @name sub_006F82B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x470.
extern "C" void __fastcall fn_006F82B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x470);
    target(self);
}

// [0x006F82C0] sub_006F82C0 (8 bytes)
// @name sub_006F82C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x450.
extern "C" void __fastcall fn_006F82C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x450);
    target(self);
}

// [0x006F82D0] sub_006F82D0 (8 bytes)
// @name sub_006F82D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x430.
extern "C" void __fastcall fn_006F82D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x430);
    target(self);
}

// [0x006F82E0] sub_006F82E0 (8 bytes)
// @name sub_006F82E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x410.
extern "C" void __fastcall fn_006F82E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x410);
    target(self);
}

// [0x006F82F0] sub_006F82F0 (8 bytes)
// @name sub_006F82F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3F0.
extern "C" void __fastcall fn_006F82F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3F0);
    target(self);
}

// [0x006F8300] sub_006F8300 (8 bytes)
// @name sub_006F8300
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3D0.
extern "C" void __fastcall fn_006F8300(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3D0);
    target(self);
}

// [0x006F8310] sub_006F8310 (8 bytes)
// @name sub_006F8310
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3B0.
extern "C" void __fastcall fn_006F8310(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3B0);
    target(self);
}

// [0x006F8320] sub_006F8320 (8 bytes)
// @name sub_006F8320
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x390.
extern "C" void __fastcall fn_006F8320(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x390);
    target(self);
}

// [0x006F8330] sub_006F8330 (8 bytes)
// @name sub_006F8330
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x370.
extern "C" void __fastcall fn_006F8330(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x370);
    target(self);
}

// [0x006F8340] sub_006F8340 (8 bytes)
// @name sub_006F8340
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x350.
extern "C" void __fastcall fn_006F8340(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x350);
    target(self);
}

// [0x006F8350] sub_006F8350 (8 bytes)
// @name sub_006F8350
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x330.
extern "C" void __fastcall fn_006F8350(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x330);
    target(self);
}

// [0x006F8360] sub_006F8360 (8 bytes)
// @name sub_006F8360
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x310.
extern "C" void __fastcall fn_006F8360(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x310);
    target(self);
}

// [0x006F8370] sub_006F8370 (8 bytes)
// @name sub_006F8370
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2F0.
extern "C" void __fastcall fn_006F8370(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2F0);
    target(self);
}

// [0x006F8380] sub_006F8380 (8 bytes)
// @name sub_006F8380
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2D0.
extern "C" void __fastcall fn_006F8380(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2D0);
    target(self);
}

// [0x006F8390] sub_006F8390 (8 bytes)
// @name sub_006F8390
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2B0.
extern "C" void __fastcall fn_006F8390(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2B0);
    target(self);
}

// [0x006F83A0] sub_006F83A0 (8 bytes)
// @name sub_006F83A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5F4.
extern "C" void __fastcall fn_006F83A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5F4);
    target(self);
}

// [0x006F83B0] sub_006F83B0 (8 bytes)
// @name sub_006F83B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5D4.
extern "C" void __fastcall fn_006F83B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5D4);
    target(self);
}

// [0x006F83C0] sub_006F83C0 (8 bytes)
// @name sub_006F83C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5B4.
extern "C" void __fastcall fn_006F83C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5B4);
    target(self);
}

// [0x006F83D0] sub_006F83D0 (8 bytes)
// @name sub_006F83D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x594.
extern "C" void __fastcall fn_006F83D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x594);
    target(self);
}

// [0x006F83E0] sub_006F83E0 (8 bytes)
// @name sub_006F83E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x574.
extern "C" void __fastcall fn_006F83E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x574);
    target(self);
}

// [0x006F83F0] sub_006F83F0 (8 bytes)
// @name sub_006F83F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x554.
extern "C" void __fastcall fn_006F83F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x554);
    target(self);
}

// [0x006F8400] sub_006F8400 (8 bytes)
// @name sub_006F8400
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x534.
extern "C" void __fastcall fn_006F8400(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x534);
    target(self);
}

// [0x006F8410] sub_006F8410 (8 bytes)
// @name sub_006F8410
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x514.
extern "C" void __fastcall fn_006F8410(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x514);
    target(self);
}

// [0x006F8420] sub_006F8420 (8 bytes)
// @name sub_006F8420
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4F4.
extern "C" void __fastcall fn_006F8420(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4F4);
    target(self);
}

// [0x006F8430] sub_006F8430 (8 bytes)
// @name sub_006F8430
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4D4.
extern "C" void __fastcall fn_006F8430(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4D4);
    target(self);
}

// [0x006F8440] sub_006F8440 (8 bytes)
// @name sub_006F8440
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4B4.
extern "C" void __fastcall fn_006F8440(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4B4);
    target(self);
}

// [0x006F8450] sub_006F8450 (8 bytes)
// @name sub_006F8450
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x494.
extern "C" void __fastcall fn_006F8450(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x494);
    target(self);
}

// [0x006F8460] sub_006F8460 (8 bytes)
// @name sub_006F8460
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x474.
extern "C" void __fastcall fn_006F8460(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x474);
    target(self);
}

// [0x006F8470] sub_006F8470 (8 bytes)
// @name sub_006F8470
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x454.
extern "C" void __fastcall fn_006F8470(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x454);
    target(self);
}

// [0x006F8480] sub_006F8480 (8 bytes)
// @name sub_006F8480
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x434.
extern "C" void __fastcall fn_006F8480(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x434);
    target(self);
}

// [0x006F8490] sub_006F8490 (8 bytes)
// @name sub_006F8490
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x414.
extern "C" void __fastcall fn_006F8490(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x414);
    target(self);
}

// [0x006F84A0] sub_006F84A0 (8 bytes)
// @name sub_006F84A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3F4.
extern "C" void __fastcall fn_006F84A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3F4);
    target(self);
}

// [0x006F84B0] sub_006F84B0 (8 bytes)
// @name sub_006F84B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3D4.
extern "C" void __fastcall fn_006F84B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3D4);
    target(self);
}

// [0x006F84C0] sub_006F84C0 (8 bytes)
// @name sub_006F84C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3B4.
extern "C" void __fastcall fn_006F84C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3B4);
    target(self);
}

// [0x006F84D0] sub_006F84D0 (8 bytes)
// @name sub_006F84D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x394.
extern "C" void __fastcall fn_006F84D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x394);
    target(self);
}

// [0x006F84E0] sub_006F84E0 (8 bytes)
// @name sub_006F84E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x374.
extern "C" void __fastcall fn_006F84E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x374);
    target(self);
}

// [0x006F84F0] sub_006F84F0 (8 bytes)
// @name sub_006F84F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x354.
extern "C" void __fastcall fn_006F84F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x354);
    target(self);
}

// [0x006F8500] sub_006F8500 (8 bytes)
// @name sub_006F8500
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x334.
extern "C" void __fastcall fn_006F8500(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x334);
    target(self);
}

// [0x006F8510] sub_006F8510 (8 bytes)
// @name sub_006F8510
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x314.
extern "C" void __fastcall fn_006F8510(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x314);
    target(self);
}

// [0x006F8520] sub_006F8520 (8 bytes)
// @name sub_006F8520
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2F4.
extern "C" void __fastcall fn_006F8520(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2F4);
    target(self);
}

// [0x006F8530] sub_006F8530 (8 bytes)
// @name sub_006F8530
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2D4.
extern "C" void __fastcall fn_006F8530(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2D4);
    target(self);
}

// [0x006F8540] sub_006F8540 (8 bytes)
// @name sub_006F8540
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2B4.
extern "C" void __fastcall fn_006F8540(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2B4);
    target(self);
}

// [0x006F8550] sub_006F8550 (8 bytes)
// @name sub_006F8550
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5F8.
extern "C" void __fastcall fn_006F8550(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5F8);
    target(self);
}

// [0x006F8560] sub_006F8560 (8 bytes)
// @name sub_006F8560
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5D8.
extern "C" void __fastcall fn_006F8560(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5D8);
    target(self);
}

// [0x006F8570] sub_006F8570 (8 bytes)
// @name sub_006F8570
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x5B8.
extern "C" void __fastcall fn_006F8570(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x5B8);
    target(self);
}

// [0x006F8580] sub_006F8580 (8 bytes)
// @name sub_006F8580
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x598.
extern "C" void __fastcall fn_006F8580(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x598);
    target(self);
}

// [0x006F8590] sub_006F8590 (8 bytes)
// @name sub_006F8590
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x578.
extern "C" void __fastcall fn_006F8590(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x578);
    target(self);
}

// [0x006F85A0] sub_006F85A0 (8 bytes)
// @name sub_006F85A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x558.
extern "C" void __fastcall fn_006F85A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x558);
    target(self);
}

// [0x006F85B0] sub_006F85B0 (8 bytes)
// @name sub_006F85B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x538.
extern "C" void __fastcall fn_006F85B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x538);
    target(self);
}

// [0x006F85C0] sub_006F85C0 (8 bytes)
// @name sub_006F85C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x518.
extern "C" void __fastcall fn_006F85C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x518);
    target(self);
}

// [0x006F85D0] sub_006F85D0 (8 bytes)
// @name sub_006F85D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4F8.
extern "C" void __fastcall fn_006F85D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4F8);
    target(self);
}

// [0x006F85E0] sub_006F85E0 (8 bytes)
// @name sub_006F85E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4D8.
extern "C" void __fastcall fn_006F85E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4D8);
    target(self);
}

// [0x006F85F0] sub_006F85F0 (8 bytes)
// @name sub_006F85F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x4B8.
extern "C" void __fastcall fn_006F85F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x4B8);
    target(self);
}

// [0x006F8600] sub_006F8600 (8 bytes)
// @name sub_006F8600
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x498.
extern "C" void __fastcall fn_006F8600(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x498);
    target(self);
}

// [0x006F8610] sub_006F8610 (8 bytes)
// @name sub_006F8610
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x478.
extern "C" void __fastcall fn_006F8610(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x478);
    target(self);
}

// [0x006F8620] sub_006F8620 (8 bytes)
// @name sub_006F8620
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x458.
extern "C" void __fastcall fn_006F8620(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x458);
    target(self);
}

// [0x006F8630] sub_006F8630 (8 bytes)
// @name sub_006F8630
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x438.
extern "C" void __fastcall fn_006F8630(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x438);
    target(self);
}

// [0x006F8640] sub_006F8640 (8 bytes)
// @name sub_006F8640
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x418.
extern "C" void __fastcall fn_006F8640(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x418);
    target(self);
}

// [0x006F8650] sub_006F8650 (8 bytes)
// @name sub_006F8650
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3F8.
extern "C" void __fastcall fn_006F8650(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3F8);
    target(self);
}

// [0x006F8660] sub_006F8660 (8 bytes)
// @name sub_006F8660
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3D8.
extern "C" void __fastcall fn_006F8660(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3D8);
    target(self);
}

// [0x006F8670] sub_006F8670 (8 bytes)
// @name sub_006F8670
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x3B8.
extern "C" void __fastcall fn_006F8670(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x3B8);
    target(self);
}

// [0x006F8680] sub_006F8680 (8 bytes)
// @name sub_006F8680
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x398.
extern "C" void __fastcall fn_006F8680(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x398);
    target(self);
}

// [0x006F8690] sub_006F8690 (8 bytes)
// @name sub_006F8690
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x378.
extern "C" void __fastcall fn_006F8690(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x378);
    target(self);
}

// [0x006F86A0] sub_006F86A0 (8 bytes)
// @name sub_006F86A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x358.
extern "C" void __fastcall fn_006F86A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x358);
    target(self);
}

// [0x006F86B0] sub_006F86B0 (8 bytes)
// @name sub_006F86B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x338.
extern "C" void __fastcall fn_006F86B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x338);
    target(self);
}

// [0x006F86C0] sub_006F86C0 (8 bytes)
// @name sub_006F86C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x318.
extern "C" void __fastcall fn_006F86C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x318);
    target(self);
}

// [0x006F86D0] sub_006F86D0 (8 bytes)
// @name sub_006F86D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2F8.
extern "C" void __fastcall fn_006F86D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2F8);
    target(self);
}

// [0x006F86E0] sub_006F86E0 (8 bytes)
// @name sub_006F86E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2D8.
extern "C" void __fastcall fn_006F86E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2D8);
    target(self);
}

// [0x006F86F0] sub_006F86F0 (8 bytes)
// @name sub_006F86F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2B8.
extern "C" void __fastcall fn_006F86F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2B8);
    target(self);
}

// [0x006F8E00] sub_006F8E00 (16 bytes)
// @name sub_006F8E00
// @summary Setter storing uint8_t argument into field at offset +0x8.
extern "C" void __fastcall fn_006F8E00(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x8) = value;
}

// [0x006F8E10] sub_006F8E10 (16 bytes)
// @name sub_006F8E10
// @summary Setter storing uint8_t argument into field at offset +0x9.
extern "C" void __fastcall fn_006F8E10(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x9) = value;
}

// [0x006F8E20] sub_006F8E20 (16 bytes)
// @name sub_006F8E20
// @summary Getter returning uint8_t field at offset +0x9.
extern "C" uint8_t __fastcall fn_006F8E20(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0x9));
}

// [0x006F8E30] sub_006F8E30 (16 bytes)
// @name sub_006F8E30
// @summary Setter storing uint8_t argument into field at offset +0xA.
extern "C" void __fastcall fn_006F8E30(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xA) = value;
}

// [0x006F8E40] sub_006F8E40 (16 bytes)
// @name sub_006F8E40
// @summary Getter returning uint8_t field at offset +0xA.
extern "C" uint8_t __fastcall fn_006F8E40(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xA));
}

// [0x006F9620] sub_006F9620 (6 bytes)
// @name sub_006F9620
// @summary Returns global int32 value from mem_00B5E240.
extern "C" int32_t __cdecl fn_006F9620(void) {
    return mem_00B5E240;
}

// [0x006F9630] sub_006F9630 (6 bytes)
// @name sub_006F9630
// @summary Returns global int32 value from mem_00B5E250.
extern "C" int32_t __cdecl fn_006F9630(void) {
    return mem_00B5E250;
}

// [0x006F9640] sub_006F9640 (6 bytes)
// @name sub_006F9640
// @summary Returns address of global mem_00B5E248.
extern "C" void* __cdecl fn_006F9640(void) {
    return &mem_00B5E248;
}

// [0x006F9690] sub_006F9690 (30 bytes)
// @name sub_006F9690
// @summary MSVC scalar deleting destructor: calls sub_006F96B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006F9690(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006F96B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F9810] sub_006F9810 (30 bytes)
// @name sub_006F9810
// @summary MSVC scalar deleting destructor: calls sub_006F9830 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006F9810(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006F9830(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F9A80] sub_006F9A80 (30 bytes)
// @name sub_006F9A80
// @summary MSVC scalar deleting destructor: calls sub_006F9AA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006F9A80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006F9AA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F9B20] sub_006F9B20 (16 bytes)
// @name sub_006F9B20
// @summary Returns constant 0x9.
extern "C" int32_t __cdecl fn_006F9B20(void) {
    return 0x9;
}

// [0x006F9DA0] sub_006F9DA0 (16 bytes)
// @name sub_006F9DA0
// @summary Getter returning int32_t field at offset +0x114.
extern "C" int32_t __fastcall fn_006F9DA0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x114));
}

// [0x006F9DB0] sub_006F9DB0 (16 bytes)
// @name sub_006F9DB0
// @summary Setter storing int32_t argument into field at offset +0x114.
extern "C" void __fastcall fn_006F9DB0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x114) = value;
}

// [0x006FA1B0] sub_006FA1B0 (6 bytes)
// @name sub_006FA1B0
// @summary Returns global int32 value from mem_00B5E400.
extern "C" int32_t __cdecl fn_006FA1B0(void) {
    return mem_00B5E400;
}

// [0x006FA1C0] sub_006FA1C0 (6 bytes)
// @name sub_006FA1C0
// @summary Returns global int32 value from mem_00B5E3F8.
extern "C" int32_t __cdecl fn_006FA1C0(void) {
    return mem_00B5E3F8;
}

// [0x006FA1D0] sub_006FA1D0 (6 bytes)
// @name sub_006FA1D0
// @summary Returns address of global mem_00B5E3F0.
extern "C" void* __cdecl fn_006FA1D0(void) {
    return &mem_00B5E3F0;
}

// [0x006FA210] sub_006FA210 (30 bytes)
// @name sub_006FA210
// @summary MSVC scalar deleting destructor: calls sub_006FA230 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006FA210(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006FA230(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006FA8E0] sub_006FA8E0 (16 bytes)
// @name sub_006FA8E0
// @summary Returns constant 0.
extern "C" int32_t __cdecl fn_006FA8E0(void) {
    return 0;
}

// [0x006FC5A0] sub_006FC5A0 (6 bytes)
// @name sub_006FC5A0
// @summary Returns global int32 value from mem_00B608B0.
extern "C" int32_t __cdecl fn_006FC5A0(void) {
    return mem_00B608B0;
}

// [0x006FC5B0] sub_006FC5B0 (6 bytes)
// @name sub_006FC5B0
// @summary Returns global int32 value from mem_00B608D0.
extern "C" int32_t __cdecl fn_006FC5B0(void) {
    return mem_00B608D0;
}

// [0x006FC5C0] sub_006FC5C0 (6 bytes)
// @name sub_006FC5C0
// @summary Returns address of global mem_00B608C8.
extern "C" void* __cdecl fn_006FC5C0(void) {
    return &mem_00B608C8;
}

// [0x006FC5D0] sub_006FC5D0 (6 bytes)
// @name sub_006FC5D0
// @summary Returns global int32 value from mem_00AAB8E8.
extern "C" int32_t __cdecl fn_006FC5D0(void) {
    return mem_00AAB8E8;
}

// [0x006FC650] sub_006FC650 (30 bytes)
// @name sub_006FC650
// @summary MSVC scalar deleting destructor: calls sub_006FC670 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006FC650(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006FC670(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006FC670] sub_006FC670 (11 bytes)
// @name sub_006FC670
// @summary Destructor tail-call: restores vtable mem_00995104 and tail-calls base destructor sub_006FA230.
extern "C" void __fastcall fn_006FC670(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00995104;
    ext_006FA230(self);
}

// [0x006FC6A0] sub_006FC6A0 (6 bytes)
// @name sub_006FC6A0
// @summary Returns global int32 value from mem_00B608B4.
extern "C" int32_t __cdecl fn_006FC6A0(void) {
    return mem_00B608B4;
}

// [0x006FC6B0] sub_006FC6B0 (6 bytes)
// @name sub_006FC6B0
// @summary Returns global int32 value from mem_00B608C0.
extern "C" int32_t __cdecl fn_006FC6B0(void) {
    return mem_00B608C0;
}

// [0x006FC6C0] sub_006FC6C0 (6 bytes)
// @name sub_006FC6C0
// @summary Returns address of global mem_00B608B8.
extern "C" void* __cdecl fn_006FC6C0(void) {
    return &mem_00B608B8;
}

// [0x006FC800] sub_006FC800 (30 bytes)
// @name sub_006FC800
// @summary MSVC scalar deleting destructor: calls sub_006FC820 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006FC800(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006FC820(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006FC820] sub_006FC820 (16 bytes)
// @name sub_006FC820
// @summary Destructor tail-call: restores vtable mem_00995180 and tail-calls base destructor sub_006FC830.
extern "C" void __fastcall fn_006FC820(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00995180;
    ext_006FC830(self);
}

// [0x006FC930] sub_006FC930 (16 bytes)
// @name sub_006FC930
// @summary Getter returning int32_t field at offset +0x14.
extern "C" int32_t __fastcall fn_006FC930(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x14));
}

// [0x006FC940] sub_006FC940 (16 bytes)
// @name sub_006FC940
// @summary Getter returning int32_t field at offset +0x18.
extern "C" int32_t __fastcall fn_006FC940(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x18));
}

// [0x006FC9B0] sub_006FC9B0 (16 bytes)
// @name sub_006FC9B0
// @summary Setter storing int32_t argument into field at offset +0x8.
extern "C" void __fastcall fn_006FC9B0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x8) = value;
}

// [0x006FC9C0] sub_006FC9C0 (16 bytes)
// @name sub_006FC9C0
// @summary Setter storing int32_t argument into field at offset +0x10.
extern "C" void __fastcall fn_006FC9C0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x10) = value;
}

// [0x006FC9D0] sub_006FC9D0 (16 bytes)
// @name sub_006FC9D0
// @summary Setter storing int32_t argument into field at offset +0x14.
extern "C" void __fastcall fn_006FC9D0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x14) = value;
}

// [0x006FC9E0] sub_006FC9E0 (16 bytes)
// @name sub_006FC9E0
// @summary Setter storing int32_t argument into field at offset +0x18.
extern "C" void __fastcall fn_006FC9E0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x18) = value;
}

// [0x006F0010] sub_006F0010 (23 bytes)
// @name sub_006F0010
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F0010(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x2170) = a0;
    lift_field<uint32_t>(self, 0x2174) = a1;
}

// [0x006F00B0] sub_006F00B0 (23 bytes)
// @name sub_006F00B0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F00B0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x2280) = a0;
    lift_field<uint32_t>(self, 0x2284) = a1;
}

// [0x006F1AD0] sub_006F1AD0 (23 bytes)
// @name sub_006F1AD0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1AD0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x59C0) = a0;
    lift_field<uint32_t>(self, 0x59C4) = a1;
}

// [0x006F1B70] sub_006F1B70 (23 bytes)
// @name sub_006F1B70
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1B70(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5AD0) = a0;
    lift_field<uint32_t>(self, 0x5AD4) = a1;
}

// [0x006F1C10] sub_006F1C10 (23 bytes)
// @name sub_006F1C10
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1C10(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5BE0) = a0;
    lift_field<uint32_t>(self, 0x5BE4) = a1;
}

// [0x006F1CB0] sub_006F1CB0 (23 bytes)
// @name sub_006F1CB0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1CB0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5CF0) = a0;
    lift_field<uint32_t>(self, 0x5CF4) = a1;
}

// [0x006F1D50] sub_006F1D50 (23 bytes)
// @name sub_006F1D50
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1D50(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5E00) = a0;
    lift_field<uint32_t>(self, 0x5E04) = a1;
}

// [0x006F1DF0] sub_006F1DF0 (23 bytes)
// @name sub_006F1DF0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1DF0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5F10) = a0;
    lift_field<uint32_t>(self, 0x5F14) = a1;
}

// [0x006F1ED0] sub_006F1ED0 (23 bytes)
// @name sub_006F1ED0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1ED0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x60A8) = a0;
    lift_field<uint32_t>(self, 0x60AC) = a1;
}

// [0x006F1F70] sub_006F1F70 (23 bytes)
// @name sub_006F1F70
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F1F70(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x61B8) = a0;
    lift_field<uint32_t>(self, 0x61BC) = a1;
}

// [0x006F2010] sub_006F2010 (23 bytes)
// @name sub_006F2010
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F2010(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x62C8) = a0;
    lift_field<uint32_t>(self, 0x62CC) = a1;
}

// [0x006F20B0] sub_006F20B0 (23 bytes)
// @name sub_006F20B0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F20B0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x63D8) = a0;
    lift_field<uint32_t>(self, 0x63DC) = a1;
}

// [0x006F2150] sub_006F2150 (23 bytes)
// @name sub_006F2150
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F2150(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x64E8) = a0;
    lift_field<uint32_t>(self, 0x64EC) = a1;
}

// [0x006F21F0] sub_006F21F0 (23 bytes)
// @name sub_006F21F0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006F21F0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x65F8) = a0;
    lift_field<uint32_t>(self, 0x65FC) = a1;
}

// [0x006FA940]
namespace lift_006FA940 {
// @name hasField0x08
// @summary Returns whether the 32-bit field at offset +0x08 is non-zero.
// @field unknown +0x08 uint32_t field_0x08


extern uint32_t mem_read32(uint32_t addr);

uint8_t __thiscall sub_006FA940(uint32_t self, uint32_t unused) {
    (void)unused;
    return mem_read32(self + 0x8) != 0 ? 1 : 0;
}
} // namespace lift_006FA940

// [0x006F7700]
namespace lift_006F7700 {
extern uint32_t mem_read32(uint32_t addr);

// @name getTableEntry_00994764
// @summary Reads a 32-bit value from the lookup table at 0x00994764 by index.
uint32_t sub_006F7700(uint32_t index) {
    return mem_read32(0x00994764u + index * 4u);
}
} // namespace lift_006F7700

// [0x006FA3B0]
namespace lift_006FA3B0 {
// @name getField34Shifted27
// @summary Reads the 32-bit signed integer at offset 0x34 and arithmetic-shifts it right by 27 bits.
// @field Self +0x34 int32_t field_0x34


int32_t __thiscall sub_006FA3B0(uintptr_t self) {
    return *reinterpret_cast<const int32_t*>(self + 0x34) >> 27;
}
} // namespace lift_006FA3B0

// [0x006F8AC0]
namespace lift_006F8AC0 {
// @name Unknown::InitZeroAndDelegate
// @class Unknown
// @summary Zeroes the first dword of this and tail-calls fn_006B9960 on this + 4.
// @field Unknown +0x00 uint32_t field_0x00

extern void* ext_006B9960(void* ecx);

void* fn_006F8AC0(void* ecx) {
    *static_cast<uint32_t*>(ecx) = 0;
    return ext_006B9960(static_cast<uint8_t*>(ecx) + 4);
}
} // namespace lift_006F8AC0

// [0x006FA190] sub_006FA190 (18 bytes)
namespace lift_006FA190 {
extern int mem_00B5E400;

// @name descriptiveName_006FA190 (equalsGlobal: returns (arg == mem_00B5E400))
// @class (none, free function)
// @summary Compares its single stack argument against the global at 0x00B5E400; returns 1 if equal, else 0 (stdcall, ret 4).
// @field (none)
BOOL fn_006FA190(int arg) {
    return arg == mem_00B5E400 ? TRUE : FALSE;
}
} // namespace lift_006FA190

// [0x006FC1C0] sub_006FC1C0 (19 bytes)
namespace lift_006FC1C0 {
// @name sub_006FC1C0
// @class <ClassName> (optional)
// @summary Virtual dispatch: calls vtable slot 16 (offset +0x40) on self with args (0, 0x10, self, -1, 0, 0, 0).
// @field <ClassName> +0x00 void* vptr (field_0x00)

// Callee signature for the vtable entry. The original pushes seven stack
// arguments in this order (arg1 first) with `self` in the this register.
using VSlot16Fn = void (*)(void* self,
                           int32_t a1,
                           int32_t a2,
                           void* a3,
                           int32_t a4,
                           int32_t a5,
                           int32_t a6,
                           int32_t a7);

void fn_006FC1C0(void* self) {
    // self->vptr (field_0x00); the entry is at vtable + 0x40.
    void** vtbl = *static_cast<void***>(self);
    VSlot16Fn slot = reinterpret_cast<VSlot16Fn>(vtbl[0x40 / sizeof(void*)]);
    slot(self, 0, 0x10, self, -1, 0, 0, 0);
}
} // namespace lift_006FC1C0

// [0x006FC1E0] sub_006FC1E0 (19 bytes)
namespace lift_006FC1E0 {
// @name forwardVirtual0x40WithFixedArgs
// @summary Tail-dispatches vtable slot 0x40/4 (index 16) on self with fixed arguments (0, 0x11, self, -1, 0, 0, 0) and returns its result; the callee pops the 7 stack args.
// @field Unknown +0x00 void* vtbl
//
// Original: mov eax,[ecx]; push 0; push 0; push 0; push -1; push ecx;
//           push 0x11; push 0; call [eax+0x40]; ret
//
// The seven stack arguments are pushed in the order shown above, so the callee
// sees (first to last): 0, 0x11, self, -1, 0, 0, 0. `self` is also passed as the
// this-pointer (ecx). The wrapper has a plain `ret`, so the callee cleans up.
DWORD fn_006FC1E0(void* self) {
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<DWORD>(self, 0x00)));
    DWORD target = lift_field<DWORD>(vtbl, 0x40);
    using VSlot16 = DWORD (*)(void* self, DWORD a0, DWORD a1, void* a2, int32_t a3,
                              DWORD a4, DWORD a5, DWORD a6);
    auto fn = reinterpret_cast<VSlot16>(static_cast<uintptr_t>(target));
    return fn(self, 0, 0x11, self, -1, 0, 0, 0);
}
} // namespace lift_006FC1E0

// [0x006F22E0] sub_006F22E0 (26 bytes)
namespace lift_006F22E0 {
// @name sub_006F22E0
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006F22E0(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x6688;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x6688);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006F22E0

// [0x006F2350] sub_006F2350 (26 bytes)
namespace lift_006F2350 {
// @name sub_006F2350
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006F2350(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x6718;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x6718);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006F2350

// [0x006F23C0] sub_006F23C0 (26 bytes)
namespace lift_006F23C0 {
// @name sub_006F23C0
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006F23C0(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x67A8;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x67A8);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006F23C0

// [0x006F2430] sub_006F2430 (26 bytes)
namespace lift_006F2430 {
// @name sub_006F2430
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006F2430(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x6838;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x6838);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006F2430

// [0x006F24A0] sub_006F24A0 (26 bytes)
namespace lift_006F24A0 {
// @name sub_006F24A0
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006F24A0(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x68C8;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x68C8);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006F24A0

// [0x006FA920] sub_006FA920 (26 bytes)
namespace lift_006FA920 {
// @name Unknown::NotifySlot17IfSelfLinked
// @class Unknown
// @summary If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x08 void* field_0x08
bool fn_006FA920(void* self) {
    void** vtable = lift_field<void**>(self, 0x00);
    if (lift_field<void*>(self, 0x08) != self) {
        return false;
    }
    using NotifyFn = void (*)(void* self, int arg);
    auto notify = reinterpret_cast<NotifyFn>(lift_field<void*>(vtable, 0x44));
    notify(self, 0);
    return true;
}
} // namespace lift_006FA920

// [0x006FC7E0]
namespace lift_006FC7E0 {
// @name Unknown::initVtableAndClearFields
// @class Unknown
// @summary Writes vtable pointer 0x00995180 to +0x00 and zeroes the six dwords at +0x04..+0x18.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
void fn_006FC7E0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x00995180u;
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
}
} // namespace lift_006FC7E0

// [0x006FAF10] sub_006FAF10 (30 bytes)
namespace lift_006FAF10 {
// @name ForwardToSubobjectVfn30
// @summary Thiscall forwarder: if this->field_0x08 is null returns 0, otherwise tail-calls the subobject's vtable slot 12 with the two arguments.
// @field Unknown +0x08 void* field_0x08
extern BYTE __thiscall fn_006FAF10(void* self, DWORD a1, DWORD a2) {
    void* sub = lift_field<void*>(self, 0x08);
    if (sub == nullptr) {
        return 0;
    }
    using VirtualFn = BYTE(__thiscall*)(void* self, DWORD a1, DWORD a2);
    void** vtbl = *reinterpret_cast<void***>(sub);
    auto fn = reinterpret_cast<VirtualFn>(vtbl[0x30 / sizeof(void*)]);
    return fn(sub, a1, a2);
}
} // namespace lift_006FAF10

// [0x006F22C0] sub_006F22C0 (31 bytes)
namespace lift_006F22C0 {
// @name Unknown::ForwardToSubobjectVirtual0xB8_6688
// @class Unknown
// @summary Forwards two stack arguments (in original order) to virtual slot 0xB8 of the embedded sub-object at +0x6688 and returns its result; callee cleans the 8 bytes of arguments (ret 8).
// @field Unknown +0x6688 void* subobjVtbl

// Original: thiscall-style, two stack args, callee cleans up (ret 8).
DWORD fn_006F22C0(void* self, DWORD arg1, DWORD arg2) {
    // Embedded sub-object at self + 0x6688; its first dword is its vtable pointer.
    uint8_t* sub = reinterpret_cast<uint8_t*>(self) + 0x6688;
    uintptr_t vtbl = static_cast<uintptr_t>(lift_field<DWORD>(sub, 0));

    // Slot 0xB8 is a byte offset into the vtable (32-bit layout).
    using VirtualFn = DWORD (*)(void* thisPtr, DWORD a, DWORD b);
    VirtualFn target = reinterpret_cast<VirtualFn>(lift_field<DWORD>(reinterpret_cast<void*>(vtbl), 0xB8));
    return target(sub, arg1, arg2);
}
} // namespace lift_006F22C0

// [0x006F2330] sub_006F2330 (31 bytes)
namespace lift_006F2330 {
// @name Unknown::ForwardTwoArgsToSubobjectVirtual0xB8
// @class Unknown
// @summary Forwards two stack arguments to virtual slot 0xB8 of the embedded subobject at +0x6718 and returns its result.
// @field Unknown +0x6718 void* field_0x6718
uint32_t fn_006F2330(void* self, uint32_t arg1, uint32_t arg2) {
    // Embedded subobject lives at self + 0x6718; its first dword is the vtable pointer.
    void* subobject = static_cast<uint8_t*>(self) + 0x6718;
    void* vtable = lift_field<void*>(self, 0x6718);
    using VirtualFn = uint32_t (*)(void* thisPtr, uint32_t a, uint32_t b);
    VirtualFn target = *reinterpret_cast<VirtualFn*>(static_cast<uint8_t*>(vtable) + 0xB8);
    return target(subobject, arg1, arg2);
}
} // namespace lift_006F2330
