// Lifted C++ translation unit: lifted/leaf/decompiled_6E0000.cpp
#include "lift_compat.h"
#include <cstring>

// [0x006E7390] sub_006E7390 (32 bytes)
namespace lift_006E7390 {
// @name sub_006E7390
// @summary Auto-lifted identical-shape clone of 0x006D2390 (ForwardArgToCalleeReturnThis).
namespace lift_006D2390 {
extern void ext_006E7340(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_006E7390(void* self, uint32_t arg1) {
    ext_006E7340(self, arg1);
    return self;
}
} // namespace lift_006D2390
} // namespace lift_006E7390
