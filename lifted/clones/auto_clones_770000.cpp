// Lifted C++ translation unit: lifted/clones/auto_clones_770000.cpp
#include "lift_compat.h"

// [0x007747B0] sub_007747B0 (36 bytes)
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B605C8;
extern double mem_00B605D0;
extern double mem_00B605D8;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_007747B0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B605C8 = -huge;
    mem_00B605D0 = -huge;
    mem_00B605D8 = -huge;
}
} // namespace lift_007747B0
