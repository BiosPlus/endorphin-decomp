// Lifted C++ translation unit: lifted/leaf/tiny_860000.cpp
#include "lift_compat.h"

// [0x00867850]
namespace lift_00867850 {
// @name clampInt32InPlace
// @summary Clamps a signed 32-bit integer in-place to the inclusive range [min_val, max_val].
void sub_00867850(int32_t* val, int32_t min_val, int32_t max_val) {
    if (*val < min_val) {
        *val = min_val;
    }
    if (*val > max_val) {
        *val = max_val;
    }
}
} // namespace lift_00867850

// [0x0086B200] sub_0086B200 (28 bytes)
namespace lift_0086B200 {
// @name ZeroDwordArray5
// @summary Zeroes five consecutive DWORD slots starting at the target buffer.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0C DWORD field_0x0C
// @field Unknown +0x10 DWORD field_0x10
void fn_0086B200(void* self) {
    DWORD* slots = static_cast<DWORD*>(self);
    for (WORD i = 0; i < 5; ++i) {
        slots[i] = 0;
    }
}
} // namespace lift_0086B200
