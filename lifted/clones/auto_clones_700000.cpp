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

// [0x00701100]
namespace lift_00701100 {
// @name init_huge_vector_globals
// @summary Initializes three 64-bit globals from the MSVCR80 _HUGE double pointer.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5E7D8;
extern uint32_t mem_00B5E7DC;
extern uint32_t mem_00B5E7E0;
extern uint32_t mem_00B5E7E4;
extern uint32_t mem_00B5E7E8;
extern uint32_t mem_00B5E7EC;

void sub_00701100() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5E7D8 = huge_ptr[0];
    mem_00B5E7DC = huge_ptr[1];
    mem_00B5E7E0 = huge_ptr[0];
    mem_00B5E7E4 = huge_ptr[1];
    mem_00B5E7E8 = huge_ptr[0];
    mem_00B5E7EC = huge_ptr[1];
}
} // namespace lift_00701100

// [0x00703C60]
namespace lift_00703C60 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5E9D0;
extern uint32_t mem_00B5E9D4;
extern uint32_t mem_00B5E9D8;
extern uint32_t mem_00B5E9DC;
extern uint32_t mem_00B5E9E0;
extern uint32_t mem_00B5E9E4;

// @name initHugeVec3Globals
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.
void sub_00703C60(void) {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];
    mem_00B5E9D0 = lo;
    mem_00B5E9D4 = hi;
    mem_00B5E9D8 = lo;
    mem_00B5E9DC = hi;
    mem_00B5E9E0 = lo;
    mem_00B5E9E4 = hi;
}
} // namespace lift_00703C60
