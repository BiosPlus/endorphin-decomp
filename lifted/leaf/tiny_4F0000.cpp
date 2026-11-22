// Lifted C++ translation unit: lifted/leaf/tiny_4F0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004F0B10(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" int mem_0094C1E4;
extern "C" void __fastcall ext_0050F0B0(void* self);
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_00515B70(void* self);

// [0x004F1210] sub_004F1210 (30 bytes)
// @name sub_004F1210
// @summary MSVC scalar deleting destructor: calls sub_004F0B10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004F1210(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004F0B10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004F4E00] sub_004F4E00 (10 bytes)
// @name sub_004F4E00
// @summary Setter storing float argument into field at offset +0x30.
extern "C" void __fastcall fn_004F4E00(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x30) = value;
}

// [0x004F4E10] sub_004F4E10 (10 bytes)
// @name sub_004F4E10
// @summary Setter storing float argument into field at offset +0x34.
extern "C" void __fastcall fn_004F4E10(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x34) = value;
}

// [0x004F4E20] sub_004F4E20 (10 bytes)
// @name sub_004F4E20
// @summary Setter storing float argument into field at offset +0x38.
extern "C" void __fastcall fn_004F4E20(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x38) = value;
}

// [0x004F9820] sub_004F9820 (7 bytes)
// @name sub_004F9820
// @summary Stores address of mem_0094C1E4 into field at offset +0x0.
extern "C" void __fastcall fn_004F9820(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0094C1E4;
}

// [0x004FDA90] sub_004FDA90 (8 bytes)
// @name sub_004FDA90
// @summary This-adjustor thunk: adjusts `this` by +0x44 and tail-calls sub_0050F0B0.
extern "C" void __fastcall fn_004FDA90(void* self) {
    ext_0050F0B0(static_cast<char*>(self) + 0x44);
}

// [0x004FDD60] sub_004FDD60 (9 bytes)
// @name sub_004FDD60
// @summary This-adjustor thunk: adjusts `this` by +0xC and forwards through mem_00924FDC.
extern "C" void __fastcall fn_004FDD60(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0xC);
}

// [0x004FFF60] sub_004FFF60 (11 bytes)
// @name sub_004FFF60
// @summary Member forwarding thunk: loads subobject pointer at +0x13C and tail-calls sub_00515B70.
extern "C" void __fastcall fn_004FFF60(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x13C);
    ext_00515B70(delegate_obj);
}
