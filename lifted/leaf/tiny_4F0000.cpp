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

// [0x004FDC80] sub_004FDC80 (21 bytes)
namespace lift_004FDC80 {
// @name Unknown::ForwardFloatToSubobjectSlot1
// @class Unknown
// @summary Loads the object pointer at this+0x48 and invokes its vtable slot 1 (thiscall, ecx=object) with the float argument.
// @field Unknown +0x48 void* field_0x48
void fn_004FDC80(void* self, float value) {
    void* obj = lift_field<void*>(self, 0x48);
    void** vtbl = *static_cast<void***>(obj);
    auto slot1 = reinterpret_cast<void (*)(void*, float)>(vtbl[1]);
    slot1(obj, value);
}
} // namespace lift_004FDC80

// [0x004F4D20] sub_004F4D20 (25 bytes)
namespace lift_004F4D20 {
extern int mem_0094CC14;

// @name initVtableAndStoreTwoArgs
// @summary __thiscall initializer: stores vtable pointer at +0x00, then the two stack arguments at +0x04 and +0x08 (callee cleans 8 bytes).
// @field <Unknown> +0x00 <DWORD> vtable
// @field <Unknown> +0x04 <DWORD> field_0x04
// @field <Unknown> +0x08 <DWORD> field_0x08
void fn_004F4D20(void* self, DWORD arg1, DWORD arg2) {
    lift_field<DWORD>(self, 0x04) = arg1;
    lift_field<DWORD>(self, 0x08) = arg2;
    lift_field<DWORD>(self, 0x00) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_0094CC14));
}
} // namespace lift_004F4D20

// [0x004F9800] sub_004F9800 (25 bytes)
namespace lift_004F9800 {
extern int mem_0094DDEC;

// @name initVtableAndStoreTwoArgsAlt
// @class Unknown
// @summary __thiscall initializer: stores the two stack arguments at +0x04 and +0x08, then sets the vtable pointer at +0x00 to mem_0094DDEC (callee cleans 8 bytes).
// @field Unknown +0x00 DWORD vtable
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
void fn_004F9800(void* self, DWORD arg1, DWORD arg2) {
    lift_field<DWORD>(self, 0x04) = arg1;
    lift_field<DWORD>(self, 0x08) = arg2;
    lift_field<DWORD>(self, 0x00) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_0094DDEC));
}
} // namespace lift_004F9800

// [0x004F9950] sub_004F9950 (29 bytes)
namespace lift_004F9950 {
// @name Unknown::copyVec3WithZeroW_004F9950
// @class Unknown
// @summary Copies three floats from self+0x30..0x38 to out[0..2] and sets out[3] = 0.0f (Vec3 -> Vec4 with w = 0).
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
void fn_004F9950(void* self, float* out) {
    out[0] = lift_field<float>(self, 0x30);
    out[1] = lift_field<float>(self, 0x34);
    out[2] = lift_field<float>(self, 0x38);
    out[3] = 0.0f;
}
} // namespace lift_004F9950
