// Lifted C++ translation unit: lifted/clones/auto_clones_720000.cpp
#include "lift_compat.h"

// [0x0072B850]
namespace lift_0072B850 {
void ext_0072B860(void);
void ext_0072B870(void);

// @name initAndRegisterGlobal_0072B850
// @summary Calls initGlobalNoop_0072B860 and tail-calls sub_0072B870.
void __cdecl fn_0072B850(void) {
    ext_0072B860();
    ext_0072B870();
}
} // namespace lift_0072B850

// [0x0072B810] sub_0072B810 (10 bytes)
namespace lift_0072B810 {
// @name sub_0072B810
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_0072B820(void);
extern void ext_0072B830(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_0072B810(void) {
    ext_0072B820();
    ext_0072B830();
}
} // namespace lift_007AE0F0
} // namespace lift_0072B810

// [0x0072B3D0]
namespace lift_0072B3D0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B60118;
extern uint32_t mem_00B6011C;
extern uint32_t mem_00B60120;
extern uint32_t mem_00B60124;
extern uint32_t mem_00B60128;
extern uint32_t mem_00B6012C;

void sub_0072B3D0() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60118 = huge_ptr[0];
    mem_00B6011C = huge_ptr[1];
    mem_00B60120 = huge_ptr[0];
    mem_00B60124 = huge_ptr[1];
    mem_00B60128 = huge_ptr[0];
    mem_00B6012C = huge_ptr[1];
}
} // namespace lift_0072B3D0
