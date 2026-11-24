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
