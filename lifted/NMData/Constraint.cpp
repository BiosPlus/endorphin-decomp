// Lifted C++ translation unit: lifted/NMData/Constraint.cpp
#include "lift_compat.h"
// Lazily-initialised static triple (x, y, z) plus a one-shot init flag word.
extern "C" uint32_t mem_00AE5598;  // init flag; bit 0 = "defaults initialised"
extern "C" float    mem_00AE558C;  // default component 0
extern "C" float    mem_00AE5590;  // default component 1
extern "C" float    mem_00AE5594;  // default component 2

// [0x0061D250] NMData::Constraint::vfunc_68 (72 bytes)
// @name NMData::Constraint::vfunc_68
// @class NMData::Constraint
// @summary Writes a constant 3-float vector (0,0,0 on first use) to the caller-supplied return buffer.
// @field none: the function does not access `this` (ECX is unused); no class offsets are read.
void fn_0061D250(float* out) {
    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE5598 |= 1u;
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
    }
    out[0] = mem_00AE558C;
    out[1] = mem_00AE5590;
    out[2] = mem_00AE5594;
}
