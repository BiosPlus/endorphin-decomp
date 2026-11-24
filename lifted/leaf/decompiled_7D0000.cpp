// Lifted C++ translation unit: lifted/leaf/decompiled_7D0000.cpp
#include "lift_compat.h"

// [0x007D8850]
namespace lift_007D8850 {
// @name sub_007D8850
// @summary Single-argument forwarding wrapper; passes its one stack argument to sub_007D8420 and returns that result unchanged.

extern uint32_t ext_007D8420(uint32_t arg0);

extern uint32_t sub_007D8850(uint32_t arg0) {
    return ext_007D8420(arg0);
}
} // namespace lift_007D8850
