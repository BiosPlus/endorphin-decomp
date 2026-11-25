// Lifted C++ translation unit: lifted/clones/auto_clones_6B0000.cpp
#include "lift_compat.h"

// [0x006B98D0]
namespace lift_006B98D0 {
extern void ext_006B98E0(void);
extern void ext_006B98F0(void);

// @name sub_006B98D0
// @summary Calls sub_006B98E0 and tail-calls sub_006B98F0
void fn_006B98D0(void) {
    ext_006B98E0();
    ext_006B98F0();
}
} // namespace lift_006B98D0

// [0x006BE9E0] sub_006BE9E0 (74 bytes)
namespace lift_006BE9E0 {
// Data-only references: mem_00925284 holds a pointer (to .rdata 0x0062D360) to an 8-byte value (MSVCR80 _HUGE).
extern uint32_t mem_00925284;
extern uint32_t mem_00B5D4A0;
extern uint32_t mem_00B5D4A4;
extern uint32_t mem_00B5D4A8;
extern uint32_t mem_00B5D4AC;
extern uint32_t mem_00B5D4B0;
extern uint32_t mem_00B5D4B4;
extern uint32_t mem_00B5D4B8;
extern uint32_t mem_00B5D4BC;

// @name CopyHugeConstantPairToGlobals_006BE9E0
// @summary Dereferences the _HUGE pointer and copies its 8-byte value into four adjacent 8-byte globals.
void fn_006BE9E0() {
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B5D4A0 = src[0];
    mem_00B5D4A4 = src[1];

    mem_00B5D4A8 = src[0];
    mem_00B5D4AC = src[1];

    mem_00B5D4B0 = src[0];
    mem_00B5D4B4 = src[1];

    mem_00B5D4B8 = src[0];
    mem_00B5D4BC = src[1];
}
} // namespace lift_006BE9E0
