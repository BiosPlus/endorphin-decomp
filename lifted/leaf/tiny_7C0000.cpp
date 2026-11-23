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

// [0x007C6F30]
namespace lift_007C6F30 {
// @name getFloatField_0x1c
// @summary Returns the float field at offset +0x1C of the given object.
// @field Object +0x1C float field_0x1C

float mem_f32(uint32_t addr);

float sub_007C6F30(uint32_t obj) {
    return mem_f32(obj + 0x1C);
}
} // namespace lift_007C6F30

// [0x007C6FC0]
namespace lift_007C6FC0 {
extern uint32_t mem_read_u32(uint32_t addr);

// @name getField0x14
// @summary Reads and returns the 32-bit value at offset 0x14 from the pointer argument.
// @field Object +0x14 uint32_t field_0x14
uint32_t sub_007C6FC0(uint32_t arg0) {
    return mem_read_u32(arg0 + 0x14);
}
} // namespace lift_007C6FC0

// [0x007C6FF0]
namespace lift_007C6FF0 {
extern uint32_t mem_read32(uint32_t addr);

// @name get_field_0x7c
// @summary Returns the 32-bit value at offset 0x7C of the given object pointer.
// @field Object +0x7C uint32_t field_0x7c
extern uint32_t sub_007C6FF0(uint32_t obj) {
    return mem_read32(obj + 0x7Cu);
}
} // namespace lift_007C6FF0

// [0x007C9DD0]
namespace lift_007C9DD0 {
// @name addOffset0x30
// @summary Returns the input pointer/value offset by 0x30 bytes.

uint32_t sub_007C9DD0(uint32_t arg0) {
    return arg0 + 0x30;
}
} // namespace lift_007C9DD0
