// Lifted C++ translation unit: lifted/leaf/tiny_6C0000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00B5F1F8;
extern "C" int32_t mem_00B5F208;
extern "C" int mem_00B5F200;
extern "C" int32_t mem_00B5F060;
extern "C" int32_t mem_00B5F058;
extern "C" int mem_00B5F050;
extern "C" int32_t mem_00B5D448;
extern "C" int32_t mem_00B5D458;
extern "C" int mem_00B5D450;
extern "C" void __fastcall ext_006C1670(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_006C03C0
// @summary Returns global int32 value from mem_00B5F1F8.
extern "C" int32_t __cdecl fn_006C03C0(void) {
    return mem_00B5F1F8;
}
extern "C" void __fastcall ext_006C1DD0(void* self);
extern "C" void __fastcall ext_006D80A0(void* self);
extern "C" void ext_006E7460(void);
extern "C" void __fastcall ext_006CA250(void* self);
#include <cstdint>

// [0x006C03D0] sub_006C03D0 (6 bytes)
// @name sub_006C03D0
// @summary Returns global int32 value from mem_00B5F208.
extern "C" int32_t __cdecl fn_006C03D0(void) {
    return mem_00B5F208;
}

// [0x006C03E0] sub_006C03E0 (6 bytes)
// @name sub_006C03E0
// @summary Returns address of global mem_00B5F200.
extern "C" void* __cdecl fn_006C03E0(void) {
    return &mem_00B5F200;
}

// [0x006C04A0] sub_006C04A0 (6 bytes)
// @name sub_006C04A0
// @summary Returns global int32 value from mem_00B5F060.
extern "C" int32_t __cdecl fn_006C04A0(void) {
    return mem_00B5F060;
}

// [0x006C04B0] sub_006C04B0 (6 bytes)
// @name sub_006C04B0
// @summary Returns global int32 value from mem_00B5F058.
extern "C" int32_t __cdecl fn_006C04B0(void) {
    return mem_00B5F058;
}

// [0x006C04C0] sub_006C04C0 (6 bytes)
// @name sub_006C04C0
// @summary Returns address of global mem_00B5F050.
extern "C" void* __cdecl fn_006C04C0(void) {
    return &mem_00B5F050;
}

// [0x006C0510] sub_006C0510 (6 bytes)
// @name sub_006C0510
// @summary Returns global int32 value from mem_00B5D448.
extern "C" int32_t __cdecl fn_006C0510(void) {
    return mem_00B5D448;
}

// [0x006C0520] sub_006C0520 (6 bytes)
// @name sub_006C0520
// @summary Returns global int32 value from mem_00B5D458.
extern "C" int32_t __cdecl fn_006C0520(void) {
    return mem_00B5D458;
}

// [0x006C0530] sub_006C0530 (6 bytes)
// @name sub_006C0530
// @summary Returns address of global mem_00B5D450.
extern "C" void* __cdecl fn_006C0530(void) {
    return &mem_00B5D450;
}

// [0x006C1560] sub_006C1560 (30 bytes)
// @name sub_006C1560
// @summary MSVC scalar deleting destructor: calls sub_006C1670 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006C1560(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006C1670(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006C1DB0] sub_006C1DB0 (30 bytes)
// @name sub_006C1DB0
// @summary MSVC scalar deleting destructor: calls sub_006C1DD0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006C1DB0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006C1DD0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006C2F10] sub_006C2F10 (16 bytes)
// @name sub_006C2F10
// @summary Setter storing int32_t argument into field at offset +0x15C.
extern "C" void __fastcall fn_006C2F10(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x15C) = value;
}

// [0x006C2F20] sub_006C2F20 (16 bytes)
// @name sub_006C2F20
// @summary Getter returning int32_t field at offset +0x15C.
extern "C" int32_t __fastcall fn_006C2F20(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x15C));
}

// [0x006C2F30] sub_006C2F30 (16 bytes)
// @name sub_006C2F30
// @summary Setter storing int32_t argument into field at offset +0x164.
extern "C" void __fastcall fn_006C2F30(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x164) = value;
}

// [0x006C2F40] sub_006C2F40 (16 bytes)
// @name sub_006C2F40
// @summary Getter returning int32_t field at offset +0x164.
extern "C" int32_t __fastcall fn_006C2F40(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x164));
}

// [0x006C3030] sub_006C3030 (16 bytes)
// @name sub_006C3030
// @summary Getter returning int32_t field at offset +0x158.
extern "C" int32_t __fastcall fn_006C3030(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x158));
}

// [0x006C59E0] sub_006C59E0 (16 bytes)
// @name sub_006C59E0
// @summary Getter returning int32_t field at offset +0xF4.
extern "C" int32_t __fastcall fn_006C59E0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xF4));
}

// [0x006C8500] sub_006C8500 (16 bytes)
// @name sub_006C8500
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006D80A0.
extern "C" void __fastcall fn_006C8500(void* self) {
    ext_006D80A0(static_cast<char*>(self) + 0x8);
}

// [0x006C8510] sub_006C8510 (16 bytes)
// @name sub_006C8510
// @summary Sets int32_t field at offset +0x0 to constant 0xFFFFFFFF.
extern "C" void __fastcall fn_006C8510(void* self) {
    lift_field<int32_t>(self, 0x0) = static_cast<int32_t>(0xFFFFFFFF);
}

// [0x006C8810] sub_006C8810 (8 bytes)
// @name sub_006C8810
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x27C.
extern "C" void __fastcall fn_006C8810(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x27C);
    target(self);
}

// [0x006C8820] sub_006C8820 (8 bytes)
// @name sub_006C8820
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x25C.
extern "C" void __fastcall fn_006C8820(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x25C);
    target(self);
}

// [0x006C8830] sub_006C8830 (8 bytes)
// @name sub_006C8830
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x23C.
extern "C" void __fastcall fn_006C8830(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x23C);
    target(self);
}

// [0x006C8840] sub_006C8840 (8 bytes)
// @name sub_006C8840
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x21C.
extern "C" void __fastcall fn_006C8840(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x21C);
    target(self);
}

// [0x006C8850] sub_006C8850 (8 bytes)
// @name sub_006C8850
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1FC.
extern "C" void __fastcall fn_006C8850(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1FC);
    target(self);
}

// [0x006C8860] sub_006C8860 (8 bytes)
// @name sub_006C8860
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1DC.
extern "C" void __fastcall fn_006C8860(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1DC);
    target(self);
}

// [0x006C8870] sub_006C8870 (8 bytes)
// @name sub_006C8870
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1BC.
extern "C" void __fastcall fn_006C8870(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1BC);
    target(self);
}

// [0x006C8880] sub_006C8880 (8 bytes)
// @name sub_006C8880
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x19C.
extern "C" void __fastcall fn_006C8880(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x19C);
    target(self);
}

// [0x006C8890] sub_006C8890 (8 bytes)
// @name sub_006C8890
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x17C.
extern "C" void __fastcall fn_006C8890(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x17C);
    target(self);
}

// [0x006C88A0] sub_006C88A0 (8 bytes)
// @name sub_006C88A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x15C.
extern "C" void __fastcall fn_006C88A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x15C);
    target(self);
}

// [0x006C88B0] sub_006C88B0 (8 bytes)
// @name sub_006C88B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x13C.
extern "C" void __fastcall fn_006C88B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x13C);
    target(self);
}

// [0x006C88C0] sub_006C88C0 (8 bytes)
// @name sub_006C88C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2A0.
extern "C" void __fastcall fn_006C88C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2A0);
    target(self);
}

// [0x006C88D0] sub_006C88D0 (8 bytes)
// @name sub_006C88D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x280.
extern "C" void __fastcall fn_006C88D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x280);
    target(self);
}

// [0x006C88E0] sub_006C88E0 (8 bytes)
// @name sub_006C88E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x260.
extern "C" void __fastcall fn_006C88E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x260);
    target(self);
}

// [0x006C88F0] sub_006C88F0 (8 bytes)
// @name sub_006C88F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x240.
extern "C" void __fastcall fn_006C88F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x240);
    target(self);
}

// [0x006C8900] sub_006C8900 (8 bytes)
// @name sub_006C8900
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x220.
extern "C" void __fastcall fn_006C8900(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x220);
    target(self);
}

// [0x006C8910] sub_006C8910 (8 bytes)
// @name sub_006C8910
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x200.
extern "C" void __fastcall fn_006C8910(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x200);
    target(self);
}

// [0x006C8920] sub_006C8920 (8 bytes)
// @name sub_006C8920
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1E0.
extern "C" void __fastcall fn_006C8920(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1E0);
    target(self);
}

// [0x006C8930] sub_006C8930 (8 bytes)
// @name sub_006C8930
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1C0.
extern "C" void __fastcall fn_006C8930(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1C0);
    target(self);
}

// [0x006C8940] sub_006C8940 (8 bytes)
// @name sub_006C8940
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1A0.
extern "C" void __fastcall fn_006C8940(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1A0);
    target(self);
}

// [0x006C8950] sub_006C8950 (8 bytes)
// @name sub_006C8950
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x180.
extern "C" void __fastcall fn_006C8950(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x180);
    target(self);
}

// [0x006C8960] sub_006C8960 (8 bytes)
// @name sub_006C8960
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x160.
extern "C" void __fastcall fn_006C8960(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x160);
    target(self);
}

// [0x006C8970] sub_006C8970 (8 bytes)
// @name sub_006C8970
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x140.
extern "C" void __fastcall fn_006C8970(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x140);
    target(self);
}

// [0x006C8980] sub_006C8980 (8 bytes)
// @name sub_006C8980
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2A4.
extern "C" void __fastcall fn_006C8980(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2A4);
    target(self);
}

// [0x006C8990] sub_006C8990 (8 bytes)
// @name sub_006C8990
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x284.
extern "C" void __fastcall fn_006C8990(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x284);
    target(self);
}

// [0x006C89A0] sub_006C89A0 (8 bytes)
// @name sub_006C89A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x264.
extern "C" void __fastcall fn_006C89A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x264);
    target(self);
}

// [0x006C89B0] sub_006C89B0 (8 bytes)
// @name sub_006C89B0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x244.
extern "C" void __fastcall fn_006C89B0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x244);
    target(self);
}

// [0x006C89C0] sub_006C89C0 (8 bytes)
// @name sub_006C89C0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x224.
extern "C" void __fastcall fn_006C89C0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x224);
    target(self);
}

// [0x006C89D0] sub_006C89D0 (8 bytes)
// @name sub_006C89D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x204.
extern "C" void __fastcall fn_006C89D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x204);
    target(self);
}

// [0x006C89E0] sub_006C89E0 (8 bytes)
// @name sub_006C89E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1E4.
extern "C" void __fastcall fn_006C89E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1E4);
    target(self);
}

// [0x006C89F0] sub_006C89F0 (8 bytes)
// @name sub_006C89F0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1C4.
extern "C" void __fastcall fn_006C89F0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1C4);
    target(self);
}

// [0x006C8A00] sub_006C8A00 (8 bytes)
// @name sub_006C8A00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1A4.
extern "C" void __fastcall fn_006C8A00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1A4);
    target(self);
}

// [0x006C8A10] sub_006C8A10 (8 bytes)
// @name sub_006C8A10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x184.
extern "C" void __fastcall fn_006C8A10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x184);
    target(self);
}

// [0x006C8A20] sub_006C8A20 (8 bytes)
// @name sub_006C8A20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x164.
extern "C" void __fastcall fn_006C8A20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x164);
    target(self);
}

// [0x006C8A30] sub_006C8A30 (8 bytes)
// @name sub_006C8A30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x144.
extern "C" void __fastcall fn_006C8A30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x144);
    target(self);
}

// [0x006C8A40] sub_006C8A40 (8 bytes)
// @name sub_006C8A40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2A8.
extern "C" void __fastcall fn_006C8A40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2A8);
    target(self);
}

// [0x006C8A50] sub_006C8A50 (8 bytes)
// @name sub_006C8A50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x288.
extern "C" void __fastcall fn_006C8A50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x288);
    target(self);
}

// [0x006C8A60] sub_006C8A60 (8 bytes)
// @name sub_006C8A60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x268.
extern "C" void __fastcall fn_006C8A60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x268);
    target(self);
}

// [0x006C8A70] sub_006C8A70 (8 bytes)
// @name sub_006C8A70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x248.
extern "C" void __fastcall fn_006C8A70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x248);
    target(self);
}

// [0x006C8A80] sub_006C8A80 (8 bytes)
// @name sub_006C8A80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x228.
extern "C" void __fastcall fn_006C8A80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x228);
    target(self);
}

// [0x006C8A90] sub_006C8A90 (8 bytes)
// @name sub_006C8A90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x208.
extern "C" void __fastcall fn_006C8A90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x208);
    target(self);
}

// [0x006C8AA0] sub_006C8AA0 (8 bytes)
// @name sub_006C8AA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1E8.
extern "C" void __fastcall fn_006C8AA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1E8);
    target(self);
}

// [0x006C8AB0] sub_006C8AB0 (8 bytes)
// @name sub_006C8AB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1C8.
extern "C" void __fastcall fn_006C8AB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1C8);
    target(self);
}

// [0x006C8AC0] sub_006C8AC0 (8 bytes)
// @name sub_006C8AC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1A8.
extern "C" void __fastcall fn_006C8AC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1A8);
    target(self);
}

// [0x006C8AD0] sub_006C8AD0 (8 bytes)
// @name sub_006C8AD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x188.
extern "C" void __fastcall fn_006C8AD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x188);
    target(self);
}

// [0x006C8AE0] sub_006C8AE0 (8 bytes)
// @name sub_006C8AE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x168.
extern "C" void __fastcall fn_006C8AE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x168);
    target(self);
}

// [0x006C8AF0] sub_006C8AF0 (8 bytes)
// @name sub_006C8AF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x148.
extern "C" void __fastcall fn_006C8AF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x148);
    target(self);
}

// [0x006C8B00] sub_006C8B00 (8 bytes)
// @name sub_006C8B00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x2AC.
extern "C" void __fastcall fn_006C8B00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x2AC);
    target(self);
}

// [0x006C8B10] sub_006C8B10 (8 bytes)
// @name sub_006C8B10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x28C.
extern "C" void __fastcall fn_006C8B10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x28C);
    target(self);
}

// [0x006C8B20] sub_006C8B20 (8 bytes)
// @name sub_006C8B20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x26C.
extern "C" void __fastcall fn_006C8B20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x26C);
    target(self);
}

// [0x006C8B30] sub_006C8B30 (8 bytes)
// @name sub_006C8B30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x24C.
extern "C" void __fastcall fn_006C8B30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x24C);
    target(self);
}

// [0x006C8B40] sub_006C8B40 (8 bytes)
// @name sub_006C8B40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x22C.
extern "C" void __fastcall fn_006C8B40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x22C);
    target(self);
}

// [0x006C8B50] sub_006C8B50 (8 bytes)
// @name sub_006C8B50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x20C.
extern "C" void __fastcall fn_006C8B50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x20C);
    target(self);
}

// [0x006C8B60] sub_006C8B60 (8 bytes)
// @name sub_006C8B60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1EC.
extern "C" void __fastcall fn_006C8B60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1EC);
    target(self);
}

// [0x006C8B70] sub_006C8B70 (8 bytes)
// @name sub_006C8B70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1CC.
extern "C" void __fastcall fn_006C8B70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1CC);
    target(self);
}

// [0x006C8B80] sub_006C8B80 (8 bytes)
// @name sub_006C8B80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1AC.
extern "C" void __fastcall fn_006C8B80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1AC);
    target(self);
}

// [0x006C8B90] sub_006C8B90 (8 bytes)
// @name sub_006C8B90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x18C.
extern "C" void __fastcall fn_006C8B90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x18C);
    target(self);
}

// [0x006C8BA0] sub_006C8BA0 (8 bytes)
// @name sub_006C8BA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x16C.
extern "C" void __fastcall fn_006C8BA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x16C);
    target(self);
}

// [0x006C8BB0] sub_006C8BB0 (8 bytes)
// @name sub_006C8BB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x14C.
extern "C" void __fastcall fn_006C8BB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x14C);
    target(self);
}

// [0x006C8BC0] sub_006C8BC0 (8 bytes)
// @name sub_006C8BC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x290.
extern "C" void __fastcall fn_006C8BC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x290);
    target(self);
}

// [0x006C8BD0] sub_006C8BD0 (8 bytes)
// @name sub_006C8BD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x270.
extern "C" void __fastcall fn_006C8BD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x270);
    target(self);
}

// [0x006C8BE0] sub_006C8BE0 (8 bytes)
// @name sub_006C8BE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x250.
extern "C" void __fastcall fn_006C8BE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x250);
    target(self);
}

// [0x006C8BF0] sub_006C8BF0 (8 bytes)
// @name sub_006C8BF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x230.
extern "C" void __fastcall fn_006C8BF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x230);
    target(self);
}

// [0x006C8C00] sub_006C8C00 (8 bytes)
// @name sub_006C8C00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x210.
extern "C" void __fastcall fn_006C8C00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x210);
    target(self);
}

// [0x006C8C10] sub_006C8C10 (8 bytes)
// @name sub_006C8C10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1F0.
extern "C" void __fastcall fn_006C8C10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1F0);
    target(self);
}

// [0x006C8C20] sub_006C8C20 (8 bytes)
// @name sub_006C8C20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1D0.
extern "C" void __fastcall fn_006C8C20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1D0);
    target(self);
}

// [0x006C8C30] sub_006C8C30 (8 bytes)
// @name sub_006C8C30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1B0.
extern "C" void __fastcall fn_006C8C30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1B0);
    target(self);
}

// [0x006C8C40] sub_006C8C40 (8 bytes)
// @name sub_006C8C40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x190.
extern "C" void __fastcall fn_006C8C40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x190);
    target(self);
}

// [0x006C8C50] sub_006C8C50 (8 bytes)
// @name sub_006C8C50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x170.
extern "C" void __fastcall fn_006C8C50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x170);
    target(self);
}

// [0x006C8C60] sub_006C8C60 (8 bytes)
// @name sub_006C8C60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x150.
extern "C" void __fastcall fn_006C8C60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x150);
    target(self);
}

// [0x006C8C70] sub_006C8C70 (8 bytes)
// @name sub_006C8C70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x130.
extern "C" void __fastcall fn_006C8C70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x130);
    target(self);
}

// [0x006C8C80] sub_006C8C80 (8 bytes)
// @name sub_006C8C80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x294.
extern "C" void __fastcall fn_006C8C80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x294);
    target(self);
}

// [0x006C8C90] sub_006C8C90 (8 bytes)
// @name sub_006C8C90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x274.
extern "C" void __fastcall fn_006C8C90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x274);
    target(self);
}

// [0x006C8CA0] sub_006C8CA0 (8 bytes)
// @name sub_006C8CA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x254.
extern "C" void __fastcall fn_006C8CA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x254);
    target(self);
}

// [0x006C8CB0] sub_006C8CB0 (8 bytes)
// @name sub_006C8CB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x234.
extern "C" void __fastcall fn_006C8CB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x234);
    target(self);
}

// [0x006C8CC0] sub_006C8CC0 (8 bytes)
// @name sub_006C8CC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x214.
extern "C" void __fastcall fn_006C8CC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x214);
    target(self);
}

// [0x006C8CD0] sub_006C8CD0 (8 bytes)
// @name sub_006C8CD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1F4.
extern "C" void __fastcall fn_006C8CD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1F4);
    target(self);
}

// [0x006C8CE0] sub_006C8CE0 (8 bytes)
// @name sub_006C8CE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1D4.
extern "C" void __fastcall fn_006C8CE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1D4);
    target(self);
}

// [0x006C8CF0] sub_006C8CF0 (8 bytes)
// @name sub_006C8CF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1B4.
extern "C" void __fastcall fn_006C8CF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1B4);
    target(self);
}

// [0x006C8D00] sub_006C8D00 (8 bytes)
// @name sub_006C8D00
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x194.
extern "C" void __fastcall fn_006C8D00(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x194);
    target(self);
}

// [0x006C8D10] sub_006C8D10 (8 bytes)
// @name sub_006C8D10
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x174.
extern "C" void __fastcall fn_006C8D10(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x174);
    target(self);
}

// [0x006C8D20] sub_006C8D20 (8 bytes)
// @name sub_006C8D20
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x154.
extern "C" void __fastcall fn_006C8D20(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x154);
    target(self);
}

// [0x006C8D30] sub_006C8D30 (8 bytes)
// @name sub_006C8D30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x134.
extern "C" void __fastcall fn_006C8D30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x134);
    target(self);
}

// [0x006C8D40] sub_006C8D40 (8 bytes)
// @name sub_006C8D40
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x298.
extern "C" void __fastcall fn_006C8D40(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x298);
    target(self);
}

// [0x006C8D50] sub_006C8D50 (8 bytes)
// @name sub_006C8D50
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x278.
extern "C" void __fastcall fn_006C8D50(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x278);
    target(self);
}

// [0x006C8D60] sub_006C8D60 (8 bytes)
// @name sub_006C8D60
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x258.
extern "C" void __fastcall fn_006C8D60(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x258);
    target(self);
}

// [0x006C8D70] sub_006C8D70 (8 bytes)
// @name sub_006C8D70
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x238.
extern "C" void __fastcall fn_006C8D70(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x238);
    target(self);
}

// [0x006C8D80] sub_006C8D80 (8 bytes)
// @name sub_006C8D80
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x218.
extern "C" void __fastcall fn_006C8D80(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x218);
    target(self);
}

// [0x006C8D90] sub_006C8D90 (8 bytes)
// @name sub_006C8D90
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1F8.
extern "C" void __fastcall fn_006C8D90(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1F8);
    target(self);
}

// [0x006C8DA0] sub_006C8DA0 (8 bytes)
// @name sub_006C8DA0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1D8.
extern "C" void __fastcall fn_006C8DA0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1D8);
    target(self);
}

// [0x006C8DB0] sub_006C8DB0 (8 bytes)
// @name sub_006C8DB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1B8.
extern "C" void __fastcall fn_006C8DB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1B8);
    target(self);
}

// [0x006C8DC0] sub_006C8DC0 (8 bytes)
// @name sub_006C8DC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x198.
extern "C" void __fastcall fn_006C8DC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x198);
    target(self);
}

// [0x006C8DD0] sub_006C8DD0 (8 bytes)
// @name sub_006C8DD0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x178.
extern "C" void __fastcall fn_006C8DD0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x178);
    target(self);
}

// [0x006C8DE0] sub_006C8DE0 (8 bytes)
// @name sub_006C8DE0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x158.
extern "C" void __fastcall fn_006C8DE0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x158);
    target(self);
}

// [0x006C8DF0] sub_006C8DF0 (8 bytes)
// @name sub_006C8DF0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x138.
extern "C" void __fastcall fn_006C8DF0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x138);
    target(self);
}

// [0x006C9330] sub_006C9330 (16 bytes)
// @name sub_006C9330
// @summary Pure jump thunk forwarding to sub_006E7460.
extern "C" void fn_006C9330(void) {
    ext_006E7460();
}

// [0x006C9360] sub_006C9360 (16 bytes)
// @name sub_006C9360
// @summary Getter returning int32_t field at offset +0x4C.
extern "C" int32_t __fastcall fn_006C9360(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x4C));
}

// [0x006C9E80] sub_006C9E80 (16 bytes)
// @name sub_006C9E80
// @summary Getter returning float field at offset +0x0.
extern "C" float __fastcall fn_006C9E80(void* self) {
    return static_cast<float>(lift_field<float>(self, 0x0));
}

// [0x006C9F70] sub_006C9F70 (16 bytes)
// @name sub_006C9F70
// @summary Getter returning float field at offset +0x14.
extern "C" float __fastcall fn_006C9F70(void* self) {
    return static_cast<float>(lift_field<float>(self, 0x14));
}

// [0x006C9FA0] sub_006C9FA0 (16 bytes)
// @name sub_006C9FA0
// @summary Getter returning int32_t field at offset +0x30.
extern "C" int32_t __fastcall fn_006C9FA0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x30));
}

// [0x006C9FD0] sub_006C9FD0 (16 bytes)
// @name sub_006C9FD0
// @summary Getter returning int32_t field at offset +0x34.
extern "C" int32_t __fastcall fn_006C9FD0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x34));
}

// [0x006CA230] sub_006CA230 (30 bytes)
// @name sub_006CA230
// @summary MSVC scalar deleting destructor: calls sub_006CA250 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006CA230(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006CA250(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006CA6A0] sub_006CA6A0 (16 bytes)
// @name sub_006CA6A0
// @summary Getter returning int32_t field at offset +0x24.
extern "C" int32_t __fastcall fn_006CA6A0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x24));
}

// [0x006CD310] sub_006CD310 (16 bytes)
// @name sub_006CD310
// @summary Setter storing int32_t argument into field at offset +0x40.
extern "C" void __fastcall fn_006CD310(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x40) = value;
}

// [0x006CD320] sub_006CD320 (16 bytes)
// @name sub_006CD320
// @summary Getter returning int32_t field at offset +0x40.
extern "C" int32_t __fastcall fn_006CD320(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x40));
}

// [0x006C03F0] sub_006C03F0 (17 bytes)
// @name sub_006C03F0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006C03F0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x48) = a0;
    lift_field<uint32_t>(self, 0x4C) = a1;
}

// [0x006C0AE0] sub_006C0AE0 (23 bytes)
// @name sub_006C0AE0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006C0AE0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xBB0) = a0;
    lift_field<uint32_t>(self, 0xBB4) = a1;
}

// [0x006C0D70] sub_006C0D70 (23 bytes)
// @name sub_006C0D70
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006C0D70(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xF40) = a0;
    lift_field<uint32_t>(self, 0xF44) = a1;
}

// [0x006C0DA0] sub_006C0DA0 (23 bytes)
// @name sub_006C0DA0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006C0DA0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xFC8) = a0;
    lift_field<uint32_t>(self, 0xFCC) = a1;
}

// [0x006C0DD0] sub_006C0DD0 (23 bytes)
// @name sub_006C0DD0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006C0DD0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1050) = a0;
    lift_field<uint32_t>(self, 0x1054) = a1;
}

// [0x006C2070]
namespace lift_006C2070 {
// @name forwardVtableSlot4
// @summary Tail-calls vtable slot +0x10 on the subobject at offset 0xf0.
// @field Unknown +0xf0 void* field_0xf0
void __thiscall sub_006C2070(void* self) {
    void* obj = *reinterpret_cast<void* const*>(static_cast<const uint8_t*>(self) + 0xf0);
    void* const* vtbl = *reinterpret_cast<void* const* const*>(obj);
    using Fn = void(__thiscall*)(void*);
    auto fn = reinterpret_cast<Fn>(vtbl[0x10 / sizeof(void*)]);
    fn(obj);
}
} // namespace lift_006C2070

// [0x006CA080]
namespace lift_006CA080 {
// @name ClearGlobalDwordPair
// @summary Zeroes two adjacent global 32-bit values at 0x00B5D760 and 0x00B5D764.

extern uint32_t mem_00B5D760;
extern uint32_t mem_00B5D764;

void ClearGlobalDwordPair() {
    uint32_t zero = 0;
    mem_00B5D760 = zero;
    mem_00B5D764 = zero;
}
} // namespace lift_006CA080

// [0x006C9E70]
namespace lift_006C9E70 {
// @name Unknown::sub_006C9E70
// @class Unknown
// @summary Stores a float into element idx of the float array at this+0x14 (idx * 4 byte stride).
// @field Unknown +0x14 float field_0x14 (float array base; indexed by idx)

struct Unknown {
    unsigned char field_0x00[0x14];
    // Array of floats starting at offset 0x14, indexed with a 4-byte stride.
    float field_0x14[1];

    void sub_006C9E70(int idx, float value);
};

// Thiscall-style member: ecx = this, args: idx (esp+4), value (esp+8), callee cleans 8 bytes.
void Unknown::sub_006C9E70(int idx, float value) {
    field_0x14[idx] = value;
}
} // namespace lift_006C9E70

// [0x006C78B0] sub_006C78B0 (19 bytes)
namespace lift_006C78B0 {
// @name sub_006C78B0
// @summary Auto-lifted identical-shape clone of 0x005304A0 (Unknown::SetByteAt1D8).
namespace lift_005304A0 {
// @name Unknown::SetByteAt1D8
// @class Unknown
// @summary Stores a byte argument into the sub-object at this->+0x10 at offset +0x1D8.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x1D8 uint8_t field_0x1D8

struct Unknown {
    uint8_t pad_0000[0xF0];
    uint8_t* field_0x10;
};

void __thiscall fn_006C78B0(Unknown* self, uint8_t value) {
    uint8_t* sub = self->field_0x10;
    sub[0xD78] = value;
}
} // namespace lift_005304A0
} // namespace lift_006C78B0

// [0x006C9C30]
namespace lift_006C9C30 {
// @name sub_006C9C30
// @summary Returns the low-nibble flag bits (mask 0x0E) of the dword at this+0x10.
// @field Unknown +0x10 uint32_t field_0x10
uint32_t sub_006C9C30(uint8_t* ecx) {
    uint32_t eax = *reinterpret_cast<uint32_t*>(ecx + 0x10);
    eax &= 0x0E;
    return eax;
}
} // namespace lift_006C9C30

// [0x006C9CC0]
namespace lift_006C9CC0 {
// @name Unknown::GetFlag100
// @class Unknown
// @summary Returns the 0x100 bit of the dword at +0x10 of this object.
// @field Unknown +0x10 DWORD field_0x10
DWORD fn_006C9CC0(void* self) {
    DWORD v = *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(self) + 0x10);
    return v & 0x100u;
}
} // namespace lift_006C9CC0

// [0x006C9CD0] sub_006C9CD0 (16 bytes)
namespace lift_006C9CD0 {
// @name Unknown::GetFlagsMask0F00
// @class Unknown
// @summary Returns the 0x0F00 bit-field of the dword at this+0x10.
// @field Unknown +0x10 uint32_t field_0x10
uint32_t fn_006C9CD0(void* self) {
    const uint32_t field_0x10 = *reinterpret_cast<const uint32_t*>(
        static_cast<const uint8_t*>(self) + 0x10);
    return field_0x10 & 0x00000F00u;
}
} // namespace lift_006C9CD0

// [0x006C9D20] sub_006C9D20 (16 bytes)
namespace lift_006C9D20 {
// @name Unknown::GetMaskedFlags18
// @class Unknown
// @summary Returns the bits 0x03000000 of the DWORD at this+0x10.
// @field Unknown +0x10 uint32_t field_0x10
uint32_t fn_006C9D20(void* self) {
    const auto* base = static_cast<const unsigned char*>(self);
    uint32_t value;
    std::memcpy(&value, base + 0x10, sizeof(value));
    return value & 0x03000000u;
}
} // namespace lift_006C9D20

// [0x006C9D60] sub_006C9D60 (16 bytes)
namespace lift_006C9D60 {
// @name Unknown::GetMaskedFlags30
// @class Unknown
// @summary Returns the bits 28-29 (mask 0x30000000) of the dword at this+0x10.
// @field Unknown +0x10 uint32_t flags
uint32_t fn_006C9D60(void* self) {
    const auto* base = static_cast<const uint8_t*>(self);
    uint32_t flags = *reinterpret_cast<const uint32_t*>(base + 0x10);
    return flags & 0x30000000u;
}
} // namespace lift_006C9D60

// [0x006C9E60] sub_006C9E60 (16 bytes)
namespace lift_006C9E60 {
// @name Unknown::GetFloatAt
// @class Unknown
// @summary Returns the float element at index idx of the float array stored at this+0x14 (thiscall, one stack arg).
// @field Unknown +0x14 float field_0x14
float fn_006C9E60(void* self, uint32_t idx) {
    const auto* base = static_cast<const uint8_t*>(self);
    return *reinterpret_cast<const float*>(base + 0x14 + static_cast<size_t>(idx) * 4u);
}
} // namespace lift_006C9E60

// [0x006C9F50]
namespace lift_006C9F50 {
// @name Unknown::GetFlagBit16
// @class Unknown
// @summary Returns bit 16 of the dword at this+0x10 as a 0/1 byte.
// @field Unknown +0x10 uint32_t field_0x10 (bit 16 read)


uint8_t GetFlagBit16(const void* self) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    uint32_t value;
    __builtin_memcpy(&value, base + 0x10, sizeof(value));
    return static_cast<uint8_t>((value >> 16) & 0x1u);
}
} // namespace lift_006C9F50

// [0x006C9F60]
namespace lift_006C9F60 {
// @name Unknown::ClearFieldsA
// @class Unknown
// @summary Zeroes four 32-bit fields of the object at this (offsets 0x00, 0x08, 0x0C, 0x10).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10


// Thiscall: this arrives in ECX.
void Unknown_ClearFieldsA(void* self) {
    auto* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(p + 0x00) = 0u;
    *reinterpret_cast<uint32_t*>(p + 0x08) = 0u;
    *reinterpret_cast<uint32_t*>(p + 0x0C) = 0u;
    *reinterpret_cast<uint32_t*>(p + 0x10) = 0u;
}
} // namespace lift_006C9F60

// [0x006C9E90] sub_006C9E90 (16 bytes)
namespace lift_006C9E90 {
// @name Unknown::ScaleFloatField
// @class Unknown
// @summary Multiplies the float at [this+0x00] by the float argument and stores it back in place.
// @field Unknown +0x00 float field_0x00
//
// Original: fld [esp+4]; fmul [ecx]; fstp [ecx]; ret 4
// Convention: thiscall (this in ECX), one float stack argument, callee pops 4 bytes.
void fn_006C9E90(void* self, float factor) {
    auto* value = static_cast<float*>(self);
    *value = *value * factor;
}
} // namespace lift_006C9E90

// [0x006C0420]
namespace lift_006C0420 {
// @name Unknown::CallVirtualSlot41WithGlobalArgs
// @class Unknown
// @summary Calls virtual slot 0xA4 (index 41) of the object's vtable with four constant stack args (0x17, &mem_00B5EB80, 0, -1) and returns its result.
// @field Unknown +0x00 void* vtable

extern char mem_00B5EB80;

// Thiscall virtual slot: this in ecx, four stack arguments (callee pops them via ret 0x10).
typedef DWORD (__thiscall* VirtualSlot41Fn)(void* self, DWORD a0, DWORD a1, DWORD a2, DWORD a3);

DWORD __thiscall fn_006C0420(void* self) {
    void* vtable = lift_field<void*>(self, 0x00);
    VirtualSlot41Fn slot = lift_field<VirtualSlot41Fn>(vtable, 0xA4);
    DWORD global_addr = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00B5EB80));
    return slot(self, 0x17, global_addr, 0, static_cast<DWORD>(-1));
}
} // namespace lift_006C0420

// [0x006C0440]
namespace lift_006C0440 {
// @name ForwardConstantsToVirtualSlot41
// @class Unknown
// @summary Calls vtable slot 41 (+0xA4) on the receiver with (0x18, mem_00B5EB80, 0, -1) and returns its result.
// @field Unknown +0x00 void* field_0x00

extern BYTE mem_00B5EB80[];

typedef DWORD(__thiscall* VirtualSlot41Fn)(void* self, DWORD a0, DWORD a1, DWORD a2, DWORD a3);

DWORD __thiscall ForwardConstantsToVirtualSlot41(void* self) {
    void* const* vtbl = *reinterpret_cast<void* const* const*>(self);
    // Slot at +0xA4 in the 32-bit vtable is index 41 (4-byte entries).
    VirtualSlot41Fn fn = reinterpret_cast<VirtualSlot41Fn>(vtbl[41]);
    return fn(self,
              static_cast<DWORD>(0x18),
              static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_00B5EB80)),
              static_cast<DWORD>(0),
              static_cast<DWORD>(-1));
}
} // namespace lift_006C0440

// [0x006C12B0] sub_006C12B0 (26 bytes)
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006C12B0(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x1AE8;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x1AE8);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0

// [0x006C12F0] sub_006C12F0 (26 bytes)
namespace lift_006C12F0 {
// @name sub_006C12F0
// @summary Auto-lifted identical-shape clone of 0x006C12B0 (Unknown::ForwardArgToSubobjectSlotB0).
namespace lift_006C12B0 {
// @name Unknown::ForwardArgToSubobjectSlotB0
// @class Unknown
// @summary Forwards its single stack argument to virtual slot +0xB0 of the object at this+0x1AE8, passing (this+0x1AE8) as the callee's this, and returns the callee's result.
// @field Unknown +0x1AE8 void* field_1AE8
extern int __fastcall fn_006C12F0(void* self, int edx_unused, int arg) {
    (void)edx_unused;
    using SlotFn = int(__fastcall*)(void* self, int edx_unused, int arg);

    char* base = static_cast<char*>(self);
    void* sub = base + 0x1B78;                              // add ecx, 0x1ae8
    void* obj = *reinterpret_cast<void**>(base + 0x1B78);   // mov eax, [ecx+0x1ae8]
    char* vtbl = *reinterpret_cast<char**>(obj);            // vptr of obj
    SlotFn target = *reinterpret_cast<SlotFn*>(vtbl + 0xB0); // call dword ptr [eax+0xb0]
    return target(sub, 0, arg);                             // push edx; ret 4 pops caller's arg
}
} // namespace lift_006C12B0
} // namespace lift_006C12F0

// [0x006C03A0] sub_006C03A0 (31 bytes)
namespace lift_006C03A0 {
extern int mem_00B5F1F8;
extern int mem_00B5E400;

// @name IsValueOneOfGlobalSentinels
// @summary Returns 1 if the stack argument equals mem_00B5F1F8; otherwise returns 1 only if it equals mem_00B5E400. Callee cleans 4 bytes (ret 4).
// @field none (no struct member accesses; operates on globals only)
extern uint8_t __stdcall fn_006C03A0(DWORD value) {
    if (value == static_cast<DWORD>(mem_00B5F1F8)) {
        return 1;
    }
    return static_cast<uint8_t>(value == static_cast<DWORD>(mem_00B5E400));
}
} // namespace lift_006C03A0

// [0x006CA0C0] sub_006CA0C0 (31 bytes)
namespace lift_006CA0C0 {
// Global running total (VA 0x00B5D768), advanced by each allocation size.
extern int32_t mem_00B5D768;
// Import slot for MSVCR80!calloc (VA 0x0092522C).
extern void* (*mem_0092522C)(size_t count, size_t size);

// @name AllocZeroedAndAdvanceTotal
// @summary Adds n to the global running total at mem_00B5D768, then returns calloc(n, 1).
extern void* __cdecl fn_006CA0C0(int32_t n) {
    mem_00B5D768 = mem_00B5D768 + n;
    return mem_0092522C(static_cast<size_t>(n), 1);
}
} // namespace lift_006CA0C0
