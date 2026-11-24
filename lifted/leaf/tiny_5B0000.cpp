// Lifted C++ translation unit: lifted/leaf/tiny_5B0000.cpp
#include "lift_compat.h"
extern "C" int mem_0095F7EC;

// [0x005B1140] sub_005B1140 (7 bytes)
// @name sub_005B1140
// @summary Stores address of mem_0095F7EC into field at offset +0x0.
extern "C" void __fastcall fn_005B1140(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095F7EC;
}

// [0x005B6600] sub_005B6600 (8 bytes)
// @name sub_005B6600
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x100.
extern "C" void __fastcall fn_005B6600(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x100);
    target(self);
}

// [0x005B11D0]
namespace lift_005B11D0 {
// @name UnknownClass::getElementPtr
// @class UnknownClass
// @summary Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.
// @field UnknownClass +0x10 uint32_t[] field_0x10


uint32_t* __thiscall sub_005B11D0(uintptr_t self, uint32_t index) {
    return reinterpret_cast<uint32_t*>(self + 0x10 + index * 4);
}
} // namespace lift_005B11D0

// [0x005B11E0]
namespace lift_005B11E0 {
// @name getFloatAt
// @summary Returns a float from a 32-bit float array at offset +0x10 indexed by the argument
// @field Object +0x10 float[] field_0x10


float mem_read_f32(uint32_t addr);

float __thiscall sub_005B11E0(uint32_t ecx, uint32_t index) {
    return mem_read_f32(ecx + 4 * index + 0x10);
}
} // namespace lift_005B11E0

// [0x005B64D0]
namespace lift_005B64D0 {
// @name sub_005B64D0_IsField184Equal6
// @summary Returns true if the int32 at this+0x184 equals 6, otherwise false (thiscall, this in ECX).
// @field Unknown +0x184 int32_t field_0x184

bool sub_005B64D0(const unsigned char* self) {
    const int32_t value = *reinterpret_cast<const int32_t*>(self + 0x184);
    return value == 6;
}
} // namespace lift_005B64D0
