// Lifted C++ translation unit: lifted/leaf/tiny_7C0000.cpp
#include "lift_compat.h"
#include <bit>
#include <cstdint>
#include <cstring>

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

// [0x007C9DD0]
namespace lift_007C9DD0 {
// @name addOffset0x30
// @summary Returns the input pointer/value offset by 0x30 bytes.

uint32_t sub_007C9DD0(uint32_t arg0) {
    return arg0 + 0x30;
}
} // namespace lift_007C9DD0

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

// [0x007C6110]
namespace lift_007C6110 {
// @name get_field_0x1cc_f32
// @summary Returns the 32-bit float at offset 0x1CC of the given struct pointer.
// @field unknown +0x1CC float field_0x1cc


float sub_007C6110(uint32_t arg0) {
    return *(const float*)(uintptr_t)(arg0 + 0x1cc);
}
} // namespace lift_007C6110

// [0x007C8810]
namespace lift_007C8810 {
// @name getField0x8cFloat
// @summary Returns the float at offset 0x8c from the given object pointer.
// @field Object +0x8C float field_0x8c
float sub_007C8810(const void* obj) {
    return *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(obj) + 0x8c);
}
} // namespace lift_007C8810

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

// [0x007C8A50] sub_007C8A50 (23 bytes)
namespace lift_007C8A50 {
// @name SetEntryDwordAtIndex
// @summary Stores a 32-bit value at offset 0x1c of entry[index] (40-byte stride) in the table pointed to by self+0x20.
// @field Unknown +0x20 void* field_0x20
void fn_007C8A50(void* self, uint32_t index, uint32_t value) {
    uint8_t* table = lift_field<uint8_t*>(self, 0x20);
    uint32_t offset = (index * 5u) * 8u + 0x1c;
    lift_field<uint32_t>(table, static_cast<ptrdiff_t>(offset)) = value;
}
} // namespace lift_007C8A50

// [0x007C9ED0]
namespace lift_007C9ED0 {
// @name ZeroFloatAndIntFields
// @summary Zeroes three float fields (+0x10, +0x14, +0x20) and two int fields (+0x08, +0x0C) of the target object.
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x0C int32_t field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x20 float field_0x20
void fn_007C9ED0(void* self) {
    lift_field<float>(self, 0x10) = 0.0f;
    lift_field<float>(self, 0x20) = 0.0f;
    lift_field<int32_t>(self, 0x08) = 0;
    lift_field<float>(self, 0x14) = 0.0f;
    lift_field<int32_t>(self, 0x0C) = 0;
}
} // namespace lift_007C9ED0

// [0x007C5C30]
namespace lift_007C5C30 {
// @name setFields_0x1e4_0x1f4
// @summary Sets two 32-bit fields at offsets +0x1e4 and +0x1f4 on the target object.
// @field Object +0x1e4 uint32_t field_0x1e4
// @field Object +0x1f4 uint32_t field_0x1f4


void sub_007C5C30(void* self, uint32_t val1, uint32_t val2) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x1e4, &val1, sizeof(val1));
    std::memcpy(base + 0x1f4, &val2, sizeof(val2));
}
} // namespace lift_007C5C30

// [0x007C9C90]
namespace lift_007C9C90 {
// @name Unknown::InitFloat4ZeroMaxMaxOne
// @class Unknown
// @summary Writes {0.0f, FLT_MAX, FLT_MAX, 1.0f} into the float[4] at the given output pointer.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C

extern const uint32_t mem_0099D148; // .rdata u32 0x7F7FFFFF (FLT_MAX)

struct Float4Out {
    float field_0x00;
    float field_0x04;
    float field_0x08;
    float field_0x0C;
};

void sub_007C9C90(Float4Out* out) {
    const float maxValue = std::bit_cast<float>(mem_0099D148);
    out->field_0x00 = 0.0f;
    out->field_0x0C = 1.0f;
    out->field_0x04 = maxValue;
    out->field_0x08 = maxValue;
}
} // namespace lift_007C9C90

// [0x007C6130] sub_007C6130 (26 bytes)
namespace lift_007C6130 {
// @name CopyVec3FromOffset30
// @class <none>
// @summary Copies three consecutive floats from self+0x30..+0x38 into out[0..2].
// @field self +0x30 float field_0x30
// @field self +0x34 float field_0x34
// @field self +0x38 float field_0x38
void fn_007C6130(const void* self, void* out) {
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint8_t* dst = static_cast<uint8_t*>(out);

    float v0, v1, v2;
    std::memcpy(&v0, src + 0x30, sizeof(float));
    std::memcpy(&v1, src + 0x34, sizeof(float));
    std::memcpy(&v2, src + 0x38, sizeof(float));

    std::memcpy(dst + 0x0, &v0, sizeof(float));
    std::memcpy(dst + 0x4, &v1, sizeof(float));
    std::memcpy(dst + 0x8, &v2, sizeof(float));
}
} // namespace lift_007C6130

// [0x007C8A10]
namespace lift_007C8A10 {
// @name Unknown::LookupTableEntry24Dword
// @class Unknown
// @summary Computes index = (*self) * y + x and returns the DWORD at +0x14 of the 24-byte table entry at that index in the table pointed to by self+0x28.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x28 void* field_0x28
DWORD fn_007C8A10(void* self, DWORD x, DWORD y) {
    DWORD stride = lift_field<DWORD>(self, 0x00);
    DWORD index = stride * y + x;
    const uint8_t* table = lift_field<const uint8_t*>(self, 0x28);
    return *reinterpret_cast<const DWORD*>(table + static_cast<size_t>(index) * 24 + 0x14);
}
} // namespace lift_007C8A10

// [0x007C9F40]
namespace lift_007C9F40 {
// @name CompareIntSign
// @summary Three-way signed int compare: returns -1 if a < b, 1 if a > b, else 0.

extern int __cdecl CompareIntSign(int a, int b) {
    if (a < b) {
        return -1;
    }
    return (a > b) ? 1 : 0;
}
} // namespace lift_007C9F40

// [0x007CD490] sub_007CD490 (26 bytes)
namespace lift_007CD490 {
// @name Unknown::ClearPendingChildF8
// @class Unknown
// @summary Detaches the pointer at self+0x178, zeroes it, and clears the detached object's +0x18 dword if one was present.
// @field Unknown +0x178 uint32_t field_0x178
// @field Unknown +0x18 uint32_t field_0x18
void fn_007CD490(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t old = *reinterpret_cast<uint32_t*>(base + 0x178);
    *reinterpret_cast<uint32_t*>(base + 0x178) = 0;
    if (old != 0) {
        auto* target = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(old));
        *reinterpret_cast<uint32_t*>(target + 0x18) = 0;
    }
}
} // namespace lift_007CD490

// [0x007C8A30] sub_007C8A30 (30 bytes)
namespace lift_007C8A30 {
// @name ArrayRecord::SetWordAt
// @class ArrayRecord
// @summary Computes index = self->+0x00 * stride + base, then stores a 32-bit value at record[index].+0x14 in self->+0x28 array (24-byte records).
// @field ArrayRecord +0x00 int32_t count_or_stride
// @field ArrayRecord +0x28 uint8_t* records
void fn_007C8A30(uint8_t* self, int32_t base, int32_t stride, uint32_t value) {
    int32_t index = (*reinterpret_cast<int32_t*>(self + 0x00)) * stride + base;
    uint8_t* records = *reinterpret_cast<uint8_t**>(self + 0x28);
    // Record stride is 24 bytes (lea eax,[eax+2*eax]; scaled by 8).
    *reinterpret_cast<uint32_t*>(records + static_cast<intptr_t>(index) * 24 + 0x14) = value;
}
} // namespace lift_007C8A30

// [0x007C5440] sub_007C5440 (31 bytes)
namespace lift_007C5440 {
// @name BitReverseLowBits
// @summary Returns the low n bits of x in reversed order (bit 0 -> bit n-1); n <= 0 is treated as one pass.
// Cdecl: x at [esp+4], n at [esp+8]; result in eax.
uint32_t fn_007C5440(uint32_t x, int32_t n) {
    uint32_t result = 0;
    do {
        result |= x & 1u;
        result <<= 1;
        x >>= 1;
    } while (--n > 0);
    result >>= 1;
    return result;
}
} // namespace lift_007C5440

// [0x007CD510] sub_007CD510 (31 bytes)
namespace lift_007CD510 {
// @name Unknown::ClearOwnerBackref
// @class Unknown
// @summary If self's owner (self+0x28) points back to self (owner+0x210), clear both links.
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x210 uint32_t field_0x210
void fn_007CD510(void* self) {
    // Guest 32-bit addresses are stored as uint32_t fields.
    const uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    const uint32_t owner_addr = lift_field<uint32_t>(self, 0x28);
    if (owner_addr == 0) {
        return;
    }

    void* owner = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_addr));
    if (lift_field<uint32_t>(owner, 0x210) != self_addr) {
        return;
    }

    lift_field<uint32_t>(owner, 0x210) = 0;
    lift_field<uint32_t>(self, 0x28) = 0;
}
} // namespace lift_007CD510

// [0x007C8BB0] sub_007C8BB0 (16 bytes)
namespace lift_007C8BB0 {
// Known callee 0x007DCC20: fillValuesFromBucketCursor_007DCC20 (Walks a bucketed node map from a cursor, copying node values into an output buffer until it is full or the map is exhausted; returns true if the buffer filled up.)
extern bool ext_007DCC20(void* map, void* cur, void* out);

// @name forwardBucketMapFromOwner_007C8BB0
// @summary Forwards the bucket map stored at +0x2C of the owner to fillValuesFromBucketCursor with the caller's cursor and output buffer; tail-calls it.
// @field Unknown +0x2C BucketMap* field_0x2c
bool fn_007C8BB0(void* self, void* cur, void* out) {
    void* map = lift_field<void*>(self, 0x2C);
    return ext_007DCC20(map, cur, out);
}
} // namespace lift_007C8BB0

// [0x007CD530] sub_007CD530 (31 bytes)
namespace lift_007CD530 {
// @name sub_007CD530
// @summary Auto-lifted identical-shape clone of 0x007CD510 (Unknown::ClearOwnerBackref).
namespace lift_007CD510 {
// @name Unknown::ClearOwnerBackref
// @class Unknown
// @summary If self's owner (self+0x28) points back to self (owner+0x210), clear both links.
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x210 uint32_t field_0x210
void fn_007CD530(void* self) {
    // Guest 32-bit addresses are stored as uint32_t fields.
    const uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    const uint32_t owner_addr = lift_field<uint32_t>(self, 0x210);
    if (owner_addr == 0) {
        return;
    }

    void* owner = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_addr));
    if (lift_field<uint32_t>(owner, 0x28) != self_addr) {
        return;
    }

    lift_field<uint32_t>(owner, 0x28) = 0;
    lift_field<uint32_t>(self, 0x210) = 0;
}
} // namespace lift_007CD510
} // namespace lift_007CD530

// [0x007C9270]
namespace lift_007C9270 {
// @name sub_007C9270
// @summary Returns the dword at offset +0x40 of the object passed as the single stack argument.
// @field Unknown +0x40 uint32_t field_0x40


uint32_t sub_007C9270(std::uintptr_t self) {
    const auto* base = reinterpret_cast<const std::uint8_t*>(self);
    return *reinterpret_cast<const std::uint32_t*>(base + 0x40);
}
} // namespace lift_007C9270

// [0x007C6FF0] sub_007C6FF0 (8 bytes)
namespace lift_007C6FF0 {
// @name loadDwordAtOffset7CFromArg
// @class <ClassName> (optional)
// @summary Returns the DWORD stored at offset +0x7C of the object pointed to by the first stack argument.
// @field <ClassName> +0x7C DWORD field_0x7C
DWORD fn_007C6FF0(void* self) {
    return lift_field<DWORD>(self, 0x7C);
}
} // namespace lift_007C6FF0

// [0x007C6F30]
namespace lift_007C6F30 {
// @name readFloatAt1C
// @summary Returns the float stored at offset +0x1C of the object pointed to by the single argument.

float __cdecl readFloatAt1C(void* self) {
    return lift_field<float>(self, 0x1C);
}
} // namespace lift_007C6F30

// [0x007C6FC0]
namespace lift_007C6FC0 {
// @name readDwordAt0x14
// @summary Returns the 32-bit value stored at offset +0x14 of the object passed as the single stack argument.
// @field <unknown> +0x14 DWORD field_0x14

DWORD sub_007C6FC0(const void* self) {
    return lift_field<DWORD>(self, 0x14);
}
} // namespace lift_007C6FC0

// [0x007CAFC0] sub_007CAFC0 (8 bytes)
namespace lift_007CAFC0 {
// @name getFloatField14
// @summary Returns the float stored at offset 0x14 of the object passed as the single stack argument (x87 ST0 return).
// @field Unknown +0x14 float field_0x14

float fn_007CAFC0(void* self) {
    return lift_field<float>(self, 0x14);
}
} // namespace lift_007CAFC0

// [0x007CC600]
namespace lift_007CC600 {
// @name readDwordAt0x28
// @summary Returns the DWORD stored at offset 0x28 of the object passed as the single argument.
// @field <unknown> +0x28 DWORD field_0x28
DWORD fn_007CC600(const void* self) {
    return lift_field<DWORD>(self, 0x28);
}
} // namespace lift_007CC600

// [0x007CB970] sub_007CB970 (8 bytes)
namespace lift_007CB970 {
// @name readFloatAt10
// @summary Returns the float stored at offset 0x10 of the object passed as the first argument.
// @field self +0x10 float field_0x10
float fn_007CB970(void* self) {
    return lift_field<float>(self, 0x10);
}
} // namespace lift_007CB970

// [0x007CC9F0] sub_007CC9F0 (8 bytes)
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007CC9F0(void* self) {
    return lift_field<uint32_t>(self, 0x0C);
}
} // namespace lift_007CC9F0

// [0x007C5900] sub_007C5900 (11 bytes)
namespace lift_007C5900 {
// @name sub_007C5900
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007C5900(void* self) {
    return lift_field<uint32_t>(self, 0x1A4);
}
} // namespace lift_007CC9F0
} // namespace lift_007C5900

// [0x007C5910] sub_007C5910 (11 bytes)
namespace lift_007C5910 {
// @name sub_007C5910
// @summary Auto-lifted identical-shape clone of 0x007CB970 (readFloatAt10).
namespace lift_007CB970 {
// @name readFloatAt10
// @summary Returns the float stored at offset 0x10 of the object passed as the first argument.
// @field self +0x10 float field_0x10
float fn_007C5910(void* self) {
    return lift_field<float>(self, 0x1A8);
}
} // namespace lift_007CB970
} // namespace lift_007C5910

// [0x007C59B0] sub_007C59B0 (11 bytes)
namespace lift_007C59B0 {
// @name sub_007C59B0
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007C59B0(void* self) {
    return lift_field<uint32_t>(self, 0x1B8);
}
} // namespace lift_007CC9F0
} // namespace lift_007C59B0

// [0x007C5F90] sub_007C5F90 (11 bytes)
namespace lift_007C5F90 {
// @name sub_007C5F90
// @summary Auto-lifted identical-shape clone of 0x007CB970 (readFloatAt10).
namespace lift_007CB970 {
// @name readFloatAt10
// @summary Returns the float stored at offset 0x10 of the object passed as the first argument.
// @field self +0x10 float field_0x10
float fn_007C5F90(void* self) {
    return lift_field<float>(self, 0x1C8);
}
} // namespace lift_007CB970
} // namespace lift_007C5F90

// [0x007C6120] sub_007C6120 (11 bytes)
namespace lift_007C6120 {
// @name sub_007C6120
// @summary Auto-lifted identical-shape clone of 0x007CB970 (readFloatAt10).
namespace lift_007CB970 {
// @name readFloatAt10
// @summary Returns the float stored at offset 0x10 of the object passed as the first argument.
// @field self +0x10 float field_0x10
float fn_007C6120(void* self) {
    return lift_field<float>(self, 0x1D0);
}
} // namespace lift_007CB970
} // namespace lift_007C6120

// [0x007C8880] sub_007C8880 (11 bytes)
namespace lift_007C8880 {
// @name sub_007C8880
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007C8880(void* self) {
    return lift_field<uint32_t>(self, 0xA8);
}
} // namespace lift_007CC9F0
} // namespace lift_007C8880

// [0x007C6C10]
namespace lift_007C6C10 {
// @name SetFlag0x4
// @summary Sets bit 0x4 in the dword at +0x0C of the object pointed to by the argument.
// @field <unknown> +0x0C uint32_t field_0x0C

void __cdecl sub_007C6C10(void* self) {
    lift_field<uint32_t>(self, 0x0C) |= 0x4u;
}
} // namespace lift_007C6C10

// [0x007C70E0]
namespace lift_007C70E0 {
// @name getWordAt24
// @summary Returns the 16-bit value stored at offset +0x24 of the object passed as the single stack argument.
// @field Object +0x24 uint16_t field_0x24

// Original asm: mov eax,[esp+4]; mov ax,[eax+0x24]; ret
// Only the low 16 bits (AX) are defined by the original; the upper half of EAX is
// the object pointer and is not modeled here.
WORD __cdecl sub_007C70E0(const void* obj) {
    return lift_field<const WORD>(obj, 0x24);
}
} // namespace lift_007C70E0

// [0x007C6C20]
namespace lift_007C6C20 {
// @name fn_007C6C20
// @summary Sets bit 0x08 in the dword at +0x0C of the object passed as the first argument.
// @field UnknownObject +0x0C uint32_t field_0x0C

void fn_007C6C20(void* self) {
    lift_field<uint32_t>(self, 0x0C) |= 0x8u;
}
} // namespace lift_007C6C20

// [0x007C6F20]
namespace lift_007C6F20 {
// @name descriptiveName: ReadBytePointeeAt44
// @class <Class> (unknown; accessed via this->field_0x44)
// @summary Loads the pointer at this+0x44 and returns the byte it points to, zero-extended.
// @field <Class> +0x44 uint8_t* field_0x44 (pointer dereferenced as byte)

uint8_t fn_007C6F20(void* self) {
    uint8_t* p = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x44);
    return *p;
}
} // namespace lift_007C6F20
