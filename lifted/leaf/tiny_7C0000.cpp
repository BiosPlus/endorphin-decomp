// Lifted C++ translation unit: lifted/leaf/tiny_7C0000.cpp
#include "lift_compat.h"
#include <bit>
#include <cstdint>

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

// [0x007C6120]
namespace lift_007C6120 {
template <typename T>
T mem_read(uintptr_t addr);

// @name getField_0x1D0
// @summary Returns the float field at offset 0x1D0 of the given object.
// @field Object +0x1D0 float field_0x1d0
float __cdecl sub_007C6120(uintptr_t arg0) {
    return mem_read<float>(arg0 + 0x1D0u);
}
} // namespace lift_007C6120

// [0x007C8880]
namespace lift_007C8880 {
extern uint32_t mem_read32(uint32_t addr);

// @name get_field_0xa8
// @summary Reads and returns the 32-bit field at offset 0xA8 from the given object pointer.
// @field Object +0xA8 uint32_t field_0xa8
uint32_t sub_007C8880(uint32_t a1) {
    return mem_read32(a1 + 0xA8u);
}
} // namespace lift_007C8880

// [0x007C8810]
namespace lift_007C8810 {
// @name getField0x8cFloat
// @summary Returns the float at offset 0x8c from the given object pointer.
// @field Object +0x8C float field_0x8c
float sub_007C8810(const void* obj) {
    return *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(obj) + 0x8c);
}
} // namespace lift_007C8810

// [0x007C6F20]
namespace lift_007C6F20 {
uint32_t mem_read32(uint32_t addr);
uint8_t mem_read8(uint32_t addr);

// @name get_byte_at_field_0x44
// @summary Dereferences the pointer at offset +0x44 of the first argument and returns its first byte zero-extended.
// @field Object +0x44 uint32_t field_0x44

uint32_t sub_007C6F20(uint32_t arg0) {
    uint32_t ptr = mem_read32(arg0 + 0x44);
    return static_cast<uint32_t>(mem_read8(ptr));
}
} // namespace lift_007C6F20

// [0x007C7690]
namespace lift_007C7690 {
// @name getField_0x214
// @summary Returns the float field at offset 0x214 of the given object.
// @field Object +0x214 float field_0x214
float sub_007C7690(uintptr_t a1) {
    return *reinterpret_cast<const float*>(a1 + 0x214);
}
} // namespace lift_007C7690

// [0x007C9CC0]
namespace lift_007C9CC0 {
// @name storeFloatAndReturnPtr
// @summary Stores a 32-bit float value to the destination pointer and returns the pointer
float* sub_007C9CC0(float* dst, float val) {
    *dst = val;
    return dst;
}
} // namespace lift_007C9CC0

// [0x007CC9D0]
namespace lift_007CC9D0 {
// @name addOffset0x100
// @summary Adds 0x100 to the 32-bit value pointed to by the first argument.
// @field Target +0x00 uint32_t field_0x00
void sub_007CC9D0(uint32_t* ptr)
{
    *ptr += 0x100u;
}
} // namespace lift_007CC9D0

// [0x007CC9E0] sub_007CC9E0 (11 bytes)
namespace lift_007CC9E0 {
// @name fn_007CC9E0
// @summary Subtracts 0x100 from the 32-bit value that the pointer argument refers to (cdecl, returns nothing).
// @field Unknown +0x00 uint32_t field_0x00
void fn_007CC9E0(uint32_t* p) {
    // add dword ptr [eax], 0xffffff00  ==  *p -= 0x100 (mod 2^32)
    *p += 0xFFFFFF00u;
}
} // namespace lift_007CC9E0

// [0x007C6FD0]
namespace lift_007C6FD0 {
// @name setField18_007C6FD0
// @class unknown
// @summary Stores a 32-bit value (second stack argument) into the object at offset +0x18 of the first argument.
// @field unknown +0x18 uint32_t field_0x18
void setField18_007C6FD0(uint8_t* self, uint32_t value) {
    *reinterpret_cast<uint32_t*>(self + 0x18) = value;
}
} // namespace lift_007C6FD0

// [0x007C6FB0]
namespace lift_007C6FB0 {
// @name storeArgToField14
// @class UnknownClass
// @summary Stores the second stack argument into the object's field at +0x14.
// @field UnknownClass +0x14 uint32_t field_0x14

// Stack args (cdecl): arg0 (esp+4) = object pointer, arg1 (esp+8) = value.
void sub_007C6FB0(uint8_t* self, uint32_t value) {
    *reinterpret_cast<uint32_t*>(self + 0x14) = value;
}
} // namespace lift_007C6FB0

// [0x007C6F90]
namespace lift_007C6F90 {
// @name sub_007C6F90
// @summary Stores the second stack argument into the first argument's dword at +0x10.
// @field field_0x10 +0x10 DWORD field_0x10

void __cdecl sub_007C6F90(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x10) = value;
}
} // namespace lift_007C6F90

// [0x007C6FE0]
namespace lift_007C6FE0 {
// @name setField7C_007C6FE0
// @class (none)
// @summary Stores the second stack argument into the object's field at +0x7C (self = first stack argument).
// @field (none) +0x7C uint32_t field_7C
void setField7C_007C6FE0(uint32_t* self, uint32_t value) {
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x7C) = value;
}
} // namespace lift_007C6FE0

// [0x007C5A20] sub_007C5A20 (15 bytes)
namespace lift_007C5A20 {
// @name sub_007C5A20
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C5A20(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x1A0) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C5A20

// [0x007C5A30] sub_007C5A30 (15 bytes)
namespace lift_007C5A30 {
// @name sub_007C5A30
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C5A30(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x1A4) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C5A30

// [0x007C5AB0] sub_007C5AB0 (15 bytes)
namespace lift_007C5AB0 {
// @name sub_007C5AB0
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C5AB0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x1B8) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C5AB0

// [0x007C5C50] sub_007C5C50 (15 bytes)
namespace lift_007C5C50 {
// @name sub_007C5C50
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C5C50(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x1E4) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C5C50

// [0x007C5C60] sub_007C5C60 (15 bytes)
namespace lift_007C5C60 {
// @name sub_007C5C60
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C5C60(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x1F4) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C5C60

// [0x007C76D0] sub_007C76D0 (15 bytes)
namespace lift_007C76D0 {
// @name sub_007C76D0
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C76D0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x210) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C76D0

// [0x007C8A70] sub_007C8A70 (15 bytes)
namespace lift_007C8A70 {
// @name sub_007C8A70
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007C8A70(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x94) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007C8A70

// [0x007C5A40] sub_007C5A40 (15 bytes)
namespace lift_007C5A40 {
// @name sub_007C5A40
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5A40(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1A8, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5A40

// [0x007C5AC0] sub_007C5AC0 (15 bytes)
namespace lift_007C5AC0 {
// @name sub_007C5AC0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5AC0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1BC, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5AC0

// [0x007C5B30] sub_007C5B30 (15 bytes)
namespace lift_007C5B30 {
// @name sub_007C5B30
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5B30(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1C0, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5B30

// [0x007C5B40] sub_007C5B40 (15 bytes)
namespace lift_007C5B40 {
// @name sub_007C5B40
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5B40(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1DC, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5B40

// [0x007C5B50] sub_007C5B50 (15 bytes)
namespace lift_007C5B50 {
// @name sub_007C5B50
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5B50(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1C4, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5B50

// [0x007C5B60] sub_007C5B60 (15 bytes)
namespace lift_007C5B60 {
// @name sub_007C5B60
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5B60(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1E0, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5B60

// [0x007C5C70] sub_007C5C70 (15 bytes)
namespace lift_007C5C70 {
// @name sub_007C5C70
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5C70(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1E8, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5C70

// [0x007C5C80] sub_007C5C80 (15 bytes)
namespace lift_007C5C80 {
// @name sub_007C5C80
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5C80(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1F8, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5C80

// [0x007C5C90] sub_007C5C90 (15 bytes)
namespace lift_007C5C90 {
// @name sub_007C5C90
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5C90(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x204, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5C90

// [0x007C5CA0] sub_007C5CA0 (15 bytes)
namespace lift_007C5CA0 {
// @name sub_007C5CA0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CA0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1EC, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CA0

// [0x007C5CB0] sub_007C5CB0 (15 bytes)
namespace lift_007C5CB0 {
// @name sub_007C5CB0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CB0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1FC, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CB0

// [0x007C5CC0] sub_007C5CC0 (15 bytes)
namespace lift_007C5CC0 {
// @name sub_007C5CC0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CC0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x208, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CC0

// [0x007C5CD0] sub_007C5CD0 (15 bytes)
namespace lift_007C5CD0 {
// @name sub_007C5CD0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CD0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1F0, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CD0

// [0x007C5CE0] sub_007C5CE0 (15 bytes)
namespace lift_007C5CE0 {
// @name sub_007C5CE0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CE0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x200, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CE0

// [0x007C5CF0] sub_007C5CF0 (15 bytes)
namespace lift_007C5CF0 {
// @name sub_007C5CF0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C5CF0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x20C, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C5CF0

// [0x007C6310] sub_007C6310 (15 bytes)
namespace lift_007C6310 {
// @name sub_007C6310
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C6310(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1CC, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C6310

// [0x007C6320] sub_007C6320 (15 bytes)
namespace lift_007C6320 {
// @name sub_007C6320
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C6320(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1D0, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C6320

// [0x007C76A0] sub_007C76A0 (15 bytes)
namespace lift_007C76A0 {
// @name sub_007C76A0
// @summary Auto-lifted identical-shape clone of 0x007D85D0 (setField58_007D85D0).
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007C76A0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x264, &value, sizeof(float));
}
} // namespace lift_007D85D0
} // namespace lift_007C76A0

// [0x007C2E70]
namespace lift_007C2E70 {
// @name CRT_free_thunk
// @summary Cdecl wrapper that forwards its single pointer argument to the CRT free() via an indirect IAT call.
extern void(__cdecl* mem_009251D8)(void*);

extern void __cdecl fn_007C2E70(void* ptr) {
    mem_009251D8(ptr);
}
} // namespace lift_007C2E70

// [0x007C70F0]
namespace lift_007C70F0 {
// @name Unknown::setWordField24
// @class Unknown
// @summary Stores a 16-bit value into the object at offset +0x24.
// @field Unknown +0x24 uint16_t field_0x24

void setWordField24(uint8_t* self, uint16_t value) {
    *reinterpret_cast<uint16_t*>(self + 0x24) = value;
}
} // namespace lift_007C70F0

// [0x007CD040]
namespace lift_007CD040 {
// @name Unknown::postIncrementField04
// @class Unknown
// @summary Returns the current int32 at this+0x04 and then increments it by one (post-increment counter).
// @field Unknown +0x04 int32_t field_0x04

extern int32_t fn_007CD040(void* self) {
    auto* obj = static_cast<unsigned char*>(self);
    auto* counter = reinterpret_cast<int32_t*>(obj + 0x04);
    int32_t old = *counter;
    *counter = old + 1;
    return old;
}
} // namespace lift_007CD040

// [0x007C9260] sub_007C9260 (14 bytes)
namespace lift_007C9260 {
// @name Unknown::getField9CBit0
// @class Unknown
// @summary Returns bit 0 of the 32-bit field at +0x9C of the object passed as the single stack argument.
// @field Unknown +0x9C uint32_t field_0x9c
uint32_t fn_007C9260(void* self) {
    return lift_field<uint32_t>(self, 0x9C) & 1u;
}
} // namespace lift_007C9260

// [0x007C6780] sub_007C6780 (14 bytes)
namespace lift_007C6780 {
// @name getFlag1C4Bit0
// @summary Returns bit 0 of the dword at offset +0x1C4 of the object (cdecl, one stack argument).
// @field Unknown +0x1C4 uint32_t field_0x1C4
extern int fn_007C6780(void* self) {
    return static_cast<int>(lift_field<uint32_t>(self, 0x1C4) & 0x1u);
}
} // namespace lift_007C6780

// [0x007C9E10]
namespace lift_007C9E10 {
// @name SetField24FromArgMinusField14
// @class Unknown
// @summary Stores (arg + 0x8 float) minus the float at +0x14 into the float at +0x24 of the object passed as first argument.
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x24 float field_0x24


void SetField24FromArgMinusField14(void* self, float value) {
    auto* base = static_cast<std::uint8_t*>(self);
    float field14 = *reinterpret_cast<float*>(base + 0x14);
    *reinterpret_cast<float*>(base + 0x24) = value - field14;
}
} // namespace lift_007C9E10

// [0x007C6F50] sub_007C6F50 (16 bytes)
namespace lift_007C6F50 {
extern void __cdecl ext_007D5B60(void* self);

// @name sub_007C6F50_adjustThisAndTailCall
// @summary Adds 0x44 to the first argument and tail-calls ext_007D5B60 with the adjusted pointer (thunk).
void fn_007C6F50(void* self) {
    ext_007D5B60(static_cast<unsigned char*>(self) + 0x44);
}
} // namespace lift_007C6F50

// [0x007C6F70]
namespace lift_007C6F70 {
// @name GetField_0x44Thunk
// @summary Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.

uint32_t ext_007D48A0(uint32_t arg0);

uint32_t sub_007C6F70(uint32_t arg0) {
    // mov eax, [esp+4]; add eax, 0x44; mov [esp+4], eax; jmp ext_007D48A0
    uint32_t adjusted = arg0 + 0x44;
    return ext_007D48A0(adjusted);
}
} // namespace lift_007C6F70

// [0x007C6F40] sub_007C6F40 (16 bytes)
namespace lift_007C6F40 {
// @name sub_007C6F40
// @summary Auto-lifted identical-shape clone of 0x007C6F50 (sub_007C6F50_adjustThisAndTailCall).
namespace lift_007C6F50 {
extern void __cdecl ext_007D5A40(void* self);

// @name sub_007C6F50_adjustThisAndTailCall
// @summary Adds 0x44 to the first argument and tail-calls ext_007D5B60 with the adjusted pointer (thunk).
void fn_007C6F40(void* self) {
    ext_007D5A40(static_cast<unsigned char*>(self) + 0x44);
}
} // namespace lift_007C6F50
} // namespace lift_007C6F40

// [0x007C70C0]
namespace lift_007C70C0 {
// @name sub_007C70C0_setField20Thunk
// @summary Adjusts this by +0x44 and tail-forwards the call to setField20_007D5BB0, which stores value at +0x20 of that subobject.

void ext_007D5BB0(void* self, DWORD value);

void fn_007C70C0(void* self, DWORD value) {
    ext_007D5BB0(static_cast<char*>(self) + 0x44, value);
}
} // namespace lift_007C70C0

// [0x007C7000]
namespace lift_007C7000 {
// Known callee 0x007D5AE0: derefDword (Dereference a 32-bit pointer and return its uint32_t value.)
extern DWORD ext_007D5AE0(DWORD ptr);

// @name sub_007C7000_derefDwordAt44Thunk
// @summary Adjusts the first argument by +0x44 and tail-forwards to derefDword (ext_007D5AE0), returning the dword read from that address.
// @field none +0x44 DWORD (pointer adjustment only; the function does not read this field directly)

DWORD fn_007C7000(DWORD self) {
    return ext_007D5AE0(self + 0x44);
}
} // namespace lift_007C7000

// [0x007C70D0]
namespace lift_007C70D0 {
// @name getField0x64Thunk
// @summary Adds 0x44 to the passed pointer and tail-calls getField0x20, returning the uint32 at offset 0x64 of the original pointer.
extern uint32_t ext_007D5BC0(uint32_t arg0);

extern uint32_t sub_007C70D0(uint32_t arg0) {
    // Original: mov eax,[esp+4]; add eax,0x44; mov [esp+4],eax; jmp getField0x20
    uint32_t adjusted = arg0 + 0x44u;
    return ext_007D5BC0(adjusted);
}
} // namespace lift_007C70D0

// [0x007C9300]
namespace lift_007C9300 {
// @name sub_007C9300_getIndexedField94
// @summary Returns the 32-bit entry at index `idx` of the 4-byte array stored at +0x94 in the object.
// @field Unknown +0x94 uint32_t field_0x94[] (array of 4-byte entries, indexed by idx)


uint32_t sub_007C9300_getIndexedField94(const void* self, uint32_t idx) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    return *reinterpret_cast<const uint32_t*>(base + 0x94 + 4u * idx);
}
} // namespace lift_007C9300

// [0x007C6F80]
namespace lift_007C6F80 {
namespace lift_007C6F80 {
// @name sub_007C6F80_setField48Thunk
// @summary Adds 0x44 to the first argument and tail-calls ext_007D5BA0 (setField04) with the adjusted pointer, so the 32-bit value lands at object offset +0x48.

void __cdecl ext_007D5BA0(void* self, uint32_t value);

void __cdecl sub_007C6F80(void* self, uint32_t value) {
    // mov ecx, [esp+4]; add ecx, 0x44; mov [esp+4], ecx; jmp ext_007D5BA0
    uint8_t* adjusted = static_cast<uint8_t*>(self) + 0x44;
    ext_007D5BA0(adjusted, value);
}
} // namespace lift_007C6F80
} // namespace lift_007C6F80

// [0x007C9480] sub_007C9480 (16 bytes)
namespace lift_007C9480 {
// @name sub_007C9480_virtualSlot0xA8Thunk
// @summary Forwards the call to the function pointer stored at self+0xa8, passing self unchanged; returns the callee's result.
// @field Unknown +0xa8 void* field_0xa8
uint32_t fn_007C9480(void* self) {
    // Original: mov eax,[esp+4]; mov edx,[eax+0xa8]; mov [esp+4],eax; jmp edx
    using Target = uint32_t (*)(void*);
    const auto target = lift_field<uintptr_t>(self, 0xa8);
    return reinterpret_cast<Target>(target)(self);
}
} // namespace lift_007C9480

// [0x007C8D80] sub_007C8D80 (17 bytes)
namespace lift_007C8D80 {
// @name allocZeroed
// @class (none)
// @summary Thin cdecl wrapper that returns calloc(1, size): a zero-initialised allocation of `size` bytes via the MSVCR80 import at 0x92522C.
void* fn_007C8D80(uint32_t size) {
    // Import slot [0x92522C] resolves to MSVCR80!calloc; the call is calloc(1, size).
    return std::calloc(1, size);
}
} // namespace lift_007C8D80

// [0x007C8C70]
namespace lift_007C8C70 {
// @name descriptiveName_007C8C70
// @summary Zeroes the two dwords at the second stack argument and returns that pointer (cdecl, no class).

// Entry stack: [esp]=return addr, [esp+4]=arg0 (unused), [esp+8]=arg1 (pointer).
// mov eax,[esp+8]; mov [eax],0; mov [eax+4],0; ret  (cdecl: no stack cleanup)
uint32_t* descriptiveName_007C8C70(uint32_t /*arg0_unused*/, uint32_t* p) {
    p[0] = 0;  // mov dword ptr [eax], 0x0
    p[1] = 0;  // mov dword ptr [eax+0x4], 0x0
    return p;  // eax still holds the pointer
}
} // namespace lift_007C8C70

// [0x007CB9C0] sub_007CB9C0 (18 bytes)
namespace lift_007CB9C0 {
// @name descriptiveName_007CB9C0 (doubleFloatField14)
// @summary Returns twice the float at offset +0x14 of the object passed in (self + 0x14) * 2.
// @field <unknown> +0x14 float field_0x14

float fn_007CB9C0(void* self) {
    float value = lift_field<float>(self, 0x14);
    return value + value;
}
} // namespace lift_007CB9C0

// [0x007C9DF0]
namespace lift_007C9DF0 {
// @name addFloatFields_0x24_0x14
// @class <unknown> (free function; single pointer argument on stack)
// @summary Returns the float at +0x24 plus the float at +0x14 of the argument object (result in ST(0)).
// @field <unknown> +0x14 float field_0x14
// @field <unknown> +0x24 float field_0x24

float addFloatFields_0x24_0x14(const unsigned char* self)
{
    const float a = *reinterpret_cast<const float*>(self + 0x24);
    const float b = *reinterpret_cast<const float*>(self + 0x14);
    return a + b;
}
} // namespace lift_007C9DF0

// [0x007C2E50]
namespace lift_007C2E50 {
// @name sub_007C2E50
// @summary Computes count * size and forwards the product to the CRT malloc import.
// @field none

extern uint32_t mem_00925208;

uint32_t sub_007C2E50(uint32_t arg0, uint32_t arg1) {
    uint32_t size = arg0 * arg1;
    return reinterpret_cast<uint32_t (*)(uint32_t)>(mem_00925208)(size);
}
} // namespace lift_007C2E50

// [0x007CA240] sub_007CA240 (20 bytes)
namespace lift_007CA240 {
// @name CopyBlock64
// @summary Copies 16 dwords (64 bytes) from src to dst, equivalent to rep movsd with ecx=16.
void fn_007CA240(void* dst, const void* src) {
    std::memcpy(dst, src, 16 * sizeof(uint32_t));
}
} // namespace lift_007CA240

// [0x007CA260] sub_007CA260 (20 bytes)
namespace lift_007CA260 {
// @name memcpy_16dwords_forward
// @summary Copies 16 DWORDs (64 bytes) forward from src to dst (cdecl, rep movsd semantics).
// @field none
void fn_007CA260(const void* src, void* dst) {
    // Forward dword-by-dword copy, matching `rep movsd` (not memmove/memcpy overlap semantics).
    const uint8_t* s = static_cast<const uint8_t*>(src);
    uint8_t* d = static_cast<uint8_t*>(dst);
    for (int i = 0; i < 16; ++i) {
        uint32_t v;
        std::memcpy(&v, s + i * 4, sizeof(v));
        std::memcpy(d + i * 4, &v, sizeof(v));
    }
}
} // namespace lift_007CA260

// [0x007C76B0] sub_007C76B0 (21 bytes)
namespace lift_007C76B0 {
// @name fn_007C76B0_storeFloatToTwoFields
// @summary Stores a float argument into two float fields (+0x268 and +0x208) of the object pointed to by self.
// @field Unknown +0x208 float field_0x208
// @field Unknown +0x268 float field_0x268
void fn_007C76B0(void* self, float value) {
    char* base = static_cast<char*>(self);
    *reinterpret_cast<float*>(base + 0x268) = value;
    *reinterpret_cast<float*>(base + 0x208) = value;
}
} // namespace lift_007C76B0

// [0x007C58E0] sub_007C58E0 (22 bytes)
namespace lift_007C58E0 {
// @name ReturnSelfIfFieldB0IsNine
// @class Unknown
// @summary Returns self if the uint32 at +0xB0 equals 9, otherwise returns NULL (cdecl, one arg).
// @field Unknown +0xB0 uint32_t field_0xB0
void* fn_007C58E0(void* self) {
    // Equivalent to: return (*(uint32_t*)(self + 0xB0) == 9) ? self : nullptr;
    const uint32_t field = lift_field<uint32_t>(self, 0xB0);
    const uintptr_t mask = (field == 9u) ? ~static_cast<uintptr_t>(0) : static_cast<uintptr_t>(0);
    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) & mask);
}
} // namespace lift_007C58E0
