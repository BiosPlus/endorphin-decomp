// Lifted C++ translation unit: lifted/Geometry/AnimationType.cpp
#include "lift_compat.h"

// [0x005B4860]
// @name Geometry::AnimationType::vfunc_12
// @class Geometry::AnimationType
// @summary Lazily initializes shared static state guarded by bit 0 of mem_00B43584, then returns the address of the static object at mem_00B43574.

extern uint32_t mem_00B43574;
extern uint32_t mem_00B43578;
extern uint32_t mem_00B4357C;
extern uint32_t mem_00B43580;
extern uint32_t mem_00B43584;
extern void ext_006A6C87(const void* arg);

void* fn_005B4860() {
    if ((mem_00B43584 & 1u) == 0) {
        mem_00B43584 |= 1u;
        mem_00B43578 = 0;
        mem_00B4357C = 0;
        mem_00B43580 = 0;
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091DD80u)));
    }
    return static_cast<void*>(&mem_00B43574);
}
