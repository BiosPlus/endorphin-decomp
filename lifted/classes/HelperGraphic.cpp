// Lifted C++ translation unit: lifted/classes/HelperGraphic.cpp
#include "lift_compat.h"

// [0x005F5220] HelperGraphic::vfunc_14 (30 bytes)
namespace lift_005F5220 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(uint32_t, uint32_t);

// @name HelperGraphic::vfunc_14
// @class HelperGraphic
// @summary Calls ext_0046F7D0(arg1, 0) and returns its first argument unchanged.
uint32_t __stdcall fn_005F5220(uint32_t self, uint32_t arg2) {
    (void)arg2;
    ext_0046F7D0(self, 0);
    return self;
}
} // namespace lift_005F5220
