// Lifted C++ translation unit: lifted/classes/MagnetJoint.cpp
#include "lift_compat.h"

// [0x00645D30]
namespace lift_00645D30 {
// @name MagnetJoint::vfunc_3
// @class MagnetJoint
// @summary Sets the double value at the start of the element at the given index in a 24-byte-stride vector, with bounds checking.
// @field MagnetJoint +0x10 void* field_0x10
// @field MagnetJoint +0x14 void* field_0x14


extern void (__cdecl* mem_00925134)();

void __thiscall fn_00645D30(void* self, uint32_t index, double value) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* begin = *reinterpret_cast<uint8_t**>(obj + 0x10);
    if (begin == nullptr) {
        mem_00925134();
    } else {
        uint8_t* end = *reinterpret_cast<uint8_t**>(obj + 0x14);
        int32_t byte_size = static_cast<int32_t>(end - begin);
        uint32_t count = static_cast<uint32_t>(byte_size / 24);
        if (index >= count) {
            mem_00925134();
        }
    }
    begin = *reinterpret_cast<uint8_t**>(obj + 0x10);
    *reinterpret_cast<double*>(begin + index * 24) = value;
}
} // namespace lift_00645D30
