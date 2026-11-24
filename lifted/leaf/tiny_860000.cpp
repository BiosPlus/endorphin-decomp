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
