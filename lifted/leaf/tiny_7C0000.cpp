// Lifted C++ translation unit: lifted/leaf/tiny_7C0000.cpp
#include "lift_compat.h"

// [0x007C9CB0]
namespace lift_007C9CB0 {
// @name readFloatPtr
// @summary Dereference a float pointer and return its value.
float sub_007C9CB0(const float* ptr) {
    return *ptr;
}
} // namespace lift_007C9CB0

// [0x007C6F60]
namespace lift_007C6F60 {
// @name offsetBy0x44
// @summary Returns the first argument offset by 0x44 bytes.

uint32_t sub_007C6F60(uint32_t arg0) {
    return arg0 + 0x44u;
}
} // namespace lift_007C6F60

// [0x007C6FA0]
namespace lift_007C6FA0 {
// @name get_field_0x10
// @summary Returns the 32-bit value at offset 0x10 of the given struct pointer.
// @field struct +0x10 uint32_t field_0x10
uint32_t sub_007C6FA0(const void* ptr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(ptr) + 0x10);
}
} // namespace lift_007C6FA0
