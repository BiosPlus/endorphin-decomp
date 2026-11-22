// Lifted C++ translation unit: lifted/classes/FBXIO.cpp
#include "lift_compat.h"
extern "C" int ext_00640390(int self_arg, int a1, int a2);
extern "C" void ext_00553720(void* self, int a1);
extern "C" int mem_00A9EED4;

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
// @name FBXIO::vfunc_3
// @class FBXIO
// @summary Calls sub_00640390 on its argument, forwards the result to NMFileIO::vfunc_3 on this, and returns the original argument.
// (no direct field accesses on this; the this pointer is only forwarded to NMFileIO::vfunc_3)
int fn_0055DE50(void* self, int arg1) {
    int r = ext_00640390(arg1, mem_00A9EED4, 0);
    ext_00553720(self, r);
    return arg1;
}

// [0x00562A30]
// @name FBXIO::vfunc_13
// @class FBXIO
// @summary Initializes FBXIO state if needed and forwards arg1 to ext_0055E990
// @field FBXIO +0x1f8 uint8_t field_0x1f8
// @field FBXIO +0x214 uint8_t field_0x214

#include "lift_compat.h"

extern "C" {
    uint8_t __thiscall ext_0055F4E0(uintptr_t self);
    uint8_t __cdecl ext_006629B0(uintptr_t ptr);
    void __thiscall ext_005605A0(uintptr_t self);
    void __thiscall ext_005619C0(uintptr_t self);
    void __thiscall ext_0055E990(uintptr_t self, uint32_t arg1);
}

void __thiscall fn_00562A30(uintptr_t self, uint32_t arg1) {
    if (ext_0055F4E0(self) == 0) {
        return;
    }

    if (*reinterpret_cast<const uint8_t*>(self + 0x214) == 0 ||
        ext_006629B0(self + 0x1F8) == 0) {
        ext_005605A0(self);
    }

    ext_005619C0(self);
    ext_0055E990(self, arg1);
}
