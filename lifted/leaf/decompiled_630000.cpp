// Lifted C++ translation unit: lifted/leaf/decompiled_630000.cpp
#include "lift_compat.h"

// [0x00630E60]
namespace lift_00630E60 {
// @name Unknown::NotifyAndReturnSubobjectF8
// @class Unknown
// @summary Calls ext_00630580 on self, passes its result to ext_00693F40 on the subobject at self+0xF8, and returns that subobject's address.
// @field Unknown +0xF8 uint8_t field_0xF8 (subobject; address taken only, not loaded)

// Callee: returns a pointer derived from self (self+0x114 per summary).
void* ext_00630580(void* self);

// Callee: thiscall-style, `this` = subobject at self+0xF8, one stack argument.
void ext_00693F40(void* subobject, void* arg);

void* fn_00630E60(void* self) {
    uint8_t* subobject = static_cast<uint8_t*>(self) + 0xF8;
    void* arg = ext_00630580(self);
    ext_00693F40(subobject, arg);
    return subobject;
}
} // namespace lift_00630E60

// [0x0063E240] sub_0063E240 (32 bytes)
namespace lift_0063E240 {
// @name sub_0063E240
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063E0C0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CB8C[];

__thiscall void* fn_0063E240(void* self, DWORD arg1, DWORD arg2) {
    ext_0063E0C0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CB8C));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063E240

// [0x0063F600] sub_0063F600 (32 bytes)
namespace lift_0063F600 {
// @name sub_0063F600
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063F350(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CC60[];

__thiscall void* fn_0063F600(void* self, DWORD arg1, DWORD arg2) {
    ext_0063F350(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CC60));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063F600

// [0x0063EA50] sub_0063EA50 (37 bytes)
namespace lift_0063EA50 {
// @name sub_0063EA50
// @summary Auto-lifted identical-shape clone of 0x00480280 (IsEmptyDwordRange_00480280).
namespace lift_00480280 {
// @name IsEmptyDwordRange_00480280
// @summary Returns true if the range pointer at +0x04 is null, or the byte span [+0x04, +0x08) has fewer than one 4-byte element (signed (end - begin) >> 2 == 0).
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
BOOLEAN fn_0063EA50(void* self) {
    const DWORD begin = lift_field<DWORD>(self, 0x28);
    if (begin == 0) {
        return 1;
    }
    const DWORD end = lift_field<DWORD>(self, 0x2C);
    const auto diff = static_cast<int32_t>(end - begin);  // signed, like sar
    return (diff >> 2) == 0 ? 1 : 0;
}
} // namespace lift_00480280
} // namespace lift_0063EA50

// [0x0063E0C0] sub_0063E0C0 (36 bytes)
namespace lift_0063E0C0 {
// MSVCP80 std::basic_string<char> copy-constructor import (IAT slot 0x00924FE0).
extern int mem_00924FE0;

// Import thunk for the MSVCP80 basic_string copy-constructor (called via mem_00924FE0).
extern void __thiscall ext_00924FE0(void* self, const void* other);

// @name Unknown::Unknown(uint32_t, const std::string&) (string-copy ctor stub)
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Stamps vtable 0x0097CB4C at +0x00, copy-constructs a std::string from the second argument into this+0x04, stores the first argument at +0x20, and returns this.
// @field <unknown> +0x00 uint32_t vftable
// @field <unknown> +0x04 uint8_t field_0x04[0x1C]
// @field <unknown> +0x20 uint32_t field_0x20
void* __thiscall fn_0063E0C0(void* self, uint32_t arg0, const void* name) {
    lift_field<uint32_t>(self, 0x00) = 0x97CB4Cu;                 // mov dword ptr [esi], 0x97cb4c
    ext_00924FE0(static_cast<uint8_t*>(self) + 4, name);          // lea ecx,[esi+4]; call [0x924fe0] (basic_string copy ctor)
    lift_field<uint32_t>(self, 0x20) = arg0;                      // mov [esi+0x20], ecx (ecx = first arg)
    return self;                                                  // mov eax, esi
}
} // namespace lift_0063E0C0

// [0x00630510] sub_00630510 (40 bytes)
namespace lift_00630510 {
// @name Unknown::copyVec3ToFieldsAndSetFlag
// @class Unknown
// @summary Copies three floats from the source pointer into self+0xB4..0xBC and sets the byte flag at self+0xF6 to 1.
// @field Unknown +0xB4 float field_0xB4
// @field Unknown +0xB8 float field_0xB8
// @field Unknown +0xBC float field_0xBC
// @field Unknown +0xF6 uint8_t field_0xF6
void fn_00630510(void* self, const float* src) {
    auto* base = static_cast<uint8_t*>(self);
    float x, y, z;
    std::memcpy(&x, src + 0, sizeof(float));
    std::memcpy(&y, src + 1, sizeof(float));
    std::memcpy(&z, src + 2, sizeof(float));
    std::memcpy(base + 0xB4, &x, sizeof(float));
    std::memcpy(base + 0xB8, &y, sizeof(float));
    std::memcpy(base + 0xBC, &z, sizeof(float));
    base[0xF6] = 1;
}
} // namespace lift_00630510

// [0x0063DAB0] sub_0063DAB0 (29 bytes)
namespace lift_0063DAB0 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern void ext_0062CD30();

// @name sub_0063DAB0_init
// @class <ClassName> (unknown)
// @summary Calls base constructor sub_0062CD30, sets vtable to 0x009792f4, zeroes float fields at +0x3C/+0x40/+0x44, returns this.
// @field <ClassName> +0x00 uint32_t vtable
// @field <ClassName> +0x3C float field_0x3C
// @field <ClassName> +0x40 float field_0x40
// @field <ClassName> +0x44 float field_0x44
void* fn_0063DAB0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    ext_0062CD30();

    const float zero = 0.0f;
    const uint32_t vtable = 0x009792f4u;
    std::memcpy(base + 0x00, &vtable, sizeof(vtable));
    std::memcpy(base + 0x44, &zero, sizeof(zero));
    std::memcpy(base + 0x40, &zero, sizeof(zero));
    std::memcpy(base + 0x3C, &zero, sizeof(zero));
    return self;
}
} // namespace lift_0063DAB0

// [0x0063D950]
namespace lift_0063D950 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern void ext_0062CD30(void* self);

// @name constructWithZeroedFloats
// @summary Runs the base constructor, installs vtable 0x009793d4, and zeroes three float fields at +0x40, +0x44, +0x48. Returns this.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, set to 0x009793d4)
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48
void* fn_0063D950(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    ext_0062CD30(self);

    const uint32_t vtable = 0x009793d4u;
    const float zero = 0.0f;

    std::memcpy(base + 0x00, &vtable, sizeof(vtable));
    std::memcpy(base + 0x48, &zero, sizeof(zero));
    std::memcpy(base + 0x44, &zero, sizeof(zero));
    std::memcpy(base + 0x40, &zero, sizeof(zero));

    return self;
}
} // namespace lift_0063D950
