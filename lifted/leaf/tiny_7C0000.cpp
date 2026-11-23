// Lifted C++ translation unit: lifted/leaf/tiny_7C0000.cpp
#include "lift_compat.h"
#include <bit>

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

// [0x007C9270]
namespace lift_007C9270 {
uint32_t mem_read32(uint32_t addr);

// @name getField0x40
// @summary Returns the 32-bit value at offset +0x40 of the given object.
// @field Object +0x40 uint32_t field_0x40
uint32_t __cdecl sub_007C9270(uint32_t arg0) {
    return mem_read32(arg0 + 0x40);
}
} // namespace lift_007C9270

// [0x007C9DE0]
namespace lift_007C9DE0 {
// @name addOffset0x40
// @summary Adds 0x40 to the first 32-bit argument and returns the result.
uint32_t sub_007C9DE0(uint32_t arg0) {
    return arg0 + 0x40u;
}
} // namespace lift_007C9DE0

// [0x007CA8D0]
namespace lift_007CA8D0 {
// @name add_0x10
// @summary Adds 0x10 to the 32-bit argument and returns the result.
uint32_t sub_007CA8D0(uint32_t arg0) {
    return arg0 + 0x10u;
}
} // namespace lift_007CA8D0

// [0x007CAFC0]
namespace lift_007CAFC0 {
// @name getField0x14Float
// @summary Loads and returns a 32-bit float from offset 0x14 of the struct pointer argument.
// @field Struct +0x14 float field_0x14

extern uint32_t mem_read32(uint32_t addr);

float sub_007CAFC0(uint32_t obj) {
    return std::bit_cast<float>(mem_read32(obj + 0x14));
}
} // namespace lift_007CAFC0

// [0x007CB970]
namespace lift_007CB970 {
// @name getField0x10Float
// @summary Reads a 32-bit float from offset 0x10 of the passed struct pointer.
// @field struct_0x10 +0x10 float field_0x10


float mem_r32f(uint32_t addr);

float sub_007CB970(uint32_t arg0) {
    return mem_r32f(arg0 + 0x10);
}
} // namespace lift_007CB970

// [0x007CC600]
namespace lift_007CC600 {
extern uint32_t mem_r32(uint32_t addr);

// @name get_field_0x28
// @summary Reads and returns the 32-bit value at offset 0x28 of the given object pointer.
// @field Object +0x28 uint32_t field_0x28
uint32_t sub_007CC600(uint32_t arg0) {
    return mem_r32(arg0 + 0x28u);
}
} // namespace lift_007CC600

// [0x007CC9F0]
namespace lift_007CC9F0 {
extern uint32_t mem_read32(uintptr_t addr);

// @name getField0x0C
// @summary Reads and returns the 32-bit field at offset 0x0C of the object passed as arg0.
// @field Object +0x0C uint32_t field_0x0C
uint32_t sub_007CC9F0(uintptr_t arg0) {
    return mem_read32(arg0 + 0x0C);
}
} // namespace lift_007CC9F0

// [0x007C6C10]
namespace lift_007C6C10 {
// @name setFlag0x4At0x0C
// @summary Sets bit 0x4 in the 32-bit flags field at offset +0x0C of the passed object.
// @field Object +0x0C uint32_t field_0x0C


extern uint32_t& mem_u32(uint32_t addr);

void sub_007C6C10(uint32_t arg0) {
    mem_u32(arg0 + 0x0C) |= 0x4u;
}
} // namespace lift_007C6C10

// [0x007C6C20]
namespace lift_007C6C20 {
uint32_t mem_read32(uintptr_t addr);
void mem_write32(uintptr_t addr, uint32_t val);

// @name setFlag0x8At0xC
// @summary Sets bit 0x8 in the 32-bit flags field at offset +0xC of the given object.
// @field Object +0x0C uint32_t field_0x0C
void sub_007C6C20(uintptr_t obj) {
    mem_write32(obj + 0x0C, mem_read32(obj + 0x0C) | 0x8u);
}
} // namespace lift_007C6C20

// [0x007C70E0]
namespace lift_007C70E0 {
uint16_t mem_read16(uint32_t addr);

// @name getField0x24
// @summary Reads a 16-bit value at offset 0x24 from the given pointer.
// @field Object +0x24 uint16_t field_0x24
uint16_t sub_007C70E0(uint32_t obj) {
    return mem_read16(obj + 0x24);
}
} // namespace lift_007C70E0

// [0x007C60A0]
namespace lift_007C60A0 {
// @name addOffset0xC0
// @summary Adds 0xC0 to the 32-bit argument and returns the result.

uint32_t sub_007C60A0(uint32_t arg0) {
    return arg0 + 0xC0u;
}
} // namespace lift_007C60A0

// [0x007C5F80]
namespace lift_007C5F80 {
// @name getOffset0x110
// @summary Returns the input pointer or value offset by 0x110 bytes.


uint32_t sub_007C5F80(uint32_t arg0) {
    return arg0 + 0x110u;
}
} // namespace lift_007C5F80

// [0x007C6060]
namespace lift_007C6060 {
// @name addOffset0xB0
// @summary Returns the first argument plus 0xb0
uint32_t sub_007C6060(uint32_t a1) {
    return a1 + 0xb0u;
}
} // namespace lift_007C6060

// [0x007C9C50]
namespace lift_007C9C50 {
// @name addOffset0x160
// @summary Returns the first argument plus 0x160.
uint32_t sub_007C9C50(uint32_t arg0) {
    return arg0 + 0x160u;
}
} // namespace lift_007C9C50

// [0x007CC9C0]
namespace lift_007CC9C0 {
// @name getShiftedField0
// @summary Dereferences a 32-bit unsigned integer pointer and shifts the value right by 8 bits.
uint32_t sub_007CC9C0(const uint32_t* ptr) {
    return (*ptr) >> 8;
}
} // namespace lift_007CC9C0

// [0x007C5F90]
namespace lift_007C5F90 {
// @name getField0x1c8
// @summary Loads and returns the float at offset 0x1c8 from the first argument.
// @field Unknown +0x1c8 float field_0x1c8


extern float mem_f32(uint32_t addr);

float sub_007C5F90(uint32_t arg0) {
    return mem_f32(arg0 + 0x1c8);
}
} // namespace lift_007C5F90

// [0x007C5900]
namespace lift_007C5900 {
uint32_t mem_read32(uint32_t addr);

// @name getField0x1A4
// @summary Returns the 32-bit field at offset 0x1A4 of the given object.
// @field Object +0x1A4 uint32_t field_0x1A4
extern uint32_t sub_007C5900(uint32_t obj) {
    return mem_read32(obj + 0x1A4);
}
} // namespace lift_007C5900

// [0x007C59B0]
namespace lift_007C59B0 {
extern uint32_t mem_read32(uint32_t addr);

// @name getField0x1B8
// @summary Reads a 32-bit field at offset 0x1B8 from the passed object pointer.
// @field Object +0x1B8 uint32_t field_0x1b8

uint32_t sub_007C59B0(uint32_t obj) {
    return mem_read32(obj + 0x1B8);
}
} // namespace lift_007C59B0

// [0x007C5910]
namespace lift_007C5910 {
// @name get_field_0x1a8
// @summary Returns the float field at offset 0x1a8 from the given object pointer.
// @field struct_0 +0x1a8 float field_0x1a8


extern float mem_read_f32(uint32_t);

float sub_007C5910(uint32_t arg0) {
    return mem_read_f32(arg0 + 0x1a8);
}
} // namespace lift_007C5910

// [0x007C6110]
namespace lift_007C6110 {
// @name get_field_0x1cc_f32
// @summary Returns the 32-bit float at offset 0x1CC of the given struct pointer.
// @field unknown +0x1CC float field_0x1cc


float sub_007C6110(uint32_t arg0) {
    return *(const float*)(uintptr_t)(arg0 + 0x1cc);
}
} // namespace lift_007C6110
