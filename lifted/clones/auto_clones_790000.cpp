// Lifted C++ translation unit: lifted/clones/auto_clones_790000.cpp
#include "lift_compat.h"

// [0x0079BBD0] sub_0079BBD0 (36 bytes)
namespace lift_0079BBD0 {
// @name sub_0079BBD0
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B60FE8;
extern double mem_00B60FF0;
extern double mem_00B60FF8;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_0079BBD0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B60FE8 = -huge;
    mem_00B60FF0 = -huge;
    mem_00B60FF8 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_0079BBD0
