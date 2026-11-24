// Lifted C++ translation unit: lifted/clones/auto_clones_700000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00704BE0] sub_00704BE0 (10 bytes)
namespace lift_00704BE0 {
// @name sub_00704BE0
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_00704BF0(void);
extern void ext_00704C10(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_00704BE0(void) {
    ext_00704BF0();
    ext_00704C10();
}
} // namespace lift_007AE0F0
} // namespace lift_00704BE0

// [0x00702F60] sub_00702F60 (35 bytes)
namespace lift_00702F60 {
// @name sub_00702F60
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006B9D20(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_00702F60(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x1F8);
    ext_006B9D20(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_00702F60
