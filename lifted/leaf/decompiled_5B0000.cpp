// Lifted C++ translation unit: lifted/leaf/decompiled_5B0000.cpp
#include "lift_compat.h"

// [0x005B6970]
namespace lift_005B6970 {
// @name getField0x04From005B6930
// @summary Calls sub_005B6930 and returns the float at offset +0x04 of the returned object.


extern uint32_t ext_005B6930();

float sub_005B6970() {
    uint32_t ptr = ext_005B6930();
    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(ptr) + 0x4);
}
} // namespace lift_005B6970

// [0x005B67C0] sub_005B67C0 (32 bytes)
namespace lift_005B67C0 {
void __thiscall ext_00647F50(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B67C0(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00647F50(target, value);
}
} // namespace lift_005B67C0

// [0x005B7000] sub_005B7000 (32 bytes)
namespace lift_005B7000 {
// @name sub_005B7000
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_00648180(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7000(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00648180(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7000

// [0x005B7020] sub_005B7020 (32 bytes)
namespace lift_005B7020 {
// @name sub_005B7020
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_006481A0(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7020(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_006481A0(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7020
