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
