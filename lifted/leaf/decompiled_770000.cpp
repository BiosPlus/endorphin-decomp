// Lifted C++ translation unit: lifted/leaf/decompiled_770000.cpp
#include "lift_compat.h"
#include <cstring>

// [0x0077FAC0] sub_0077FAC0 (32 bytes)
namespace lift_0077FAC0 {
// @name sub_0077FAC0
// @summary Auto-lifted identical-shape clone of 0x006D2390 (ForwardArgToCalleeReturnThis).
namespace lift_006D2390 {
extern void ext_0074AE20(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_0077FAC0(void* self, uint32_t arg1) {
    ext_0074AE20(self, arg1);
    return self;
}
} // namespace lift_006D2390
} // namespace lift_0077FAC0

// [0x0077FF70] sub_0077FF70 (32 bytes)
namespace lift_0077FF70 {
// @name Unknown::GetDwordElement16
// @class Unknown
// @summary Returns the DWORD at element index (16-byte stride) of the array referenced via self->field_0x00->field_0x04.
// @field Unknown +0x00 void* field_0x00 (pointer to the array-owning object)
// @field Unknown +0x04 void* field_0x04 (base pointer of the 16-byte element array, on the object at field_0x00)
DWORD fn_0077FF70(void* self, DWORD index) {
    uint8_t* owner = *reinterpret_cast<uint8_t**>(self);
    uint8_t* base = *reinterpret_cast<uint8_t**>(owner + 0x04);
    DWORD offset = index << 4;
    return *reinterpret_cast<DWORD*>(base + offset);
}
} // namespace lift_0077FF70

// [0x0077FFB0] sub_0077FFB0 (32 bytes)
namespace lift_0077FFB0 {
// @name Unknown::GetDoubleElement16
// @class Unknown
// @summary Returns the double at element index (16-byte stride, +8 within element) of the array referenced via self->field_0x00->field_0x04. Callee pops 8 bytes (ret 0x8); second stack arg is unused.
// @field Unknown +0x00 void* field_0x00 (pointer to the array-owning object)
// @field Unknown +0x04 void* field_0x04 (base pointer of the 16-byte element array, on the object at field_0x00)
namespace lift_0077FFB0 {
double fn_0077FFB0(void* self, DWORD index) {
    uint8_t* owner = *reinterpret_cast<uint8_t**>(self);
    uint8_t* base = *reinterpret_cast<uint8_t**>(owner + 0x04);
    DWORD offset = index << 4;
    return *reinterpret_cast<double*>(base + offset + 0x08);
}
} // namespace lift_0077FFB0
} // namespace lift_0077FFB0

// [0x0077FF90] sub_0077FF90 (32 bytes)
namespace lift_0077FF90 {
// @name Unknown::SetDoubleElement16
// @class Unknown
// @summary Stores a double at byte offset 8 of the 16-byte element selected by index in the array pointed to by inner->+0x04.
// @field Unknown +0x00 void* field_0x00 (pointer to inner object; inner->+0x04 holds the element array base)
void fn_0077FF90(void* self, int32_t index, double value) {
    // self->+0x00 -> inner object; inner->+0x04 -> element array base.
    uint32_t inner_addr = *reinterpret_cast<const uint32_t*>(self);
    uint32_t base_addr = *reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(inner_addr) + 0x04);
    uint32_t element_off = static_cast<uint32_t>(index) << 4;
    uint8_t* dst = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(base_addr))
                   + element_off + 0x08;
    std::memcpy(dst, &value, sizeof(value));
}
} // namespace lift_0077FF90

// [0x0077F5A0]
namespace lift_0077F5A0 {
// @name sub_0077F5A0
// @summary Returns one of three constant addresses selected by the first stack argument (0, 1, 2); any other value yields the default 0x00AAF03C.

uint32_t sub_0077F5A0(uint32_t arg0) {
    switch (arg0) {
        case 0:
            return 0x00AAF03Cu;
        case 1:
            return 0x00AAE5C0u;
        case 2:
            return 0x00AAE5B0u;
        default:
            return 0x00AAF03Cu;
    }
}
} // namespace lift_0077F5A0
