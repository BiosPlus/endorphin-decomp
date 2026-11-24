// Lifted C++ translation unit: lifted/leaf/decompiled_7E0000.cpp
#include "lift_compat.h"
#include <bit>

// [0x007EC6E0] sub_007EC6E0 (55 bytes)
namespace lift_007EC6E0 {
extern uint32_t mem_0099EC8C;

// @name reciprocalOrZero_007EC6E0
// @summary Returns 1/x for x with |x| > FLT_MIN (0x00800000), otherwise 0.0f (also for NaN).
// @summary Sign of x is preserved in the reciprocal.
float fn_007EC6E0(float x) {
    const float threshold = std::bit_cast<float>(mem_0099EC8C);
    const float absX = std::fabs(x);
    // Negated comparison so NaN (unordered) yields 0.0f, matching the x87 C0/C3 test.
    if (!(absX > threshold)) {
        return 0.0f;
    }
    return 1.0f / x;
}
} // namespace lift_007EC6E0
