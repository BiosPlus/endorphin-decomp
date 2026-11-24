// Lifted C++ translation unit: lifted/clones/auto_clones_6E0000.cpp
#include "lift_compat.h"

// [0x006EA3C0]
namespace lift_006EA3C0 {
// @name initHugeBounds
// @summary Initializes three 64-bit global values from MSVCR80!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5E0D0;
extern uint32_t mem_00B5E0D4;
extern uint32_t mem_00B5E0D8;
extern uint32_t mem_00B5E0DC;
extern uint32_t mem_00B5E0E0;
extern uint32_t mem_00B5E0E4;

void sub_006EA3C0() {
    uint32_t huge_ptr = mem_00925284;
    mem_00B5E0D0 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr));
    mem_00B5E0D4 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr) + 4);
    mem_00B5E0D8 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr));
    mem_00B5E0DC = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr) + 4);
    mem_00B5E0E0 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr));
    mem_00B5E0E4 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(huge_ptr) + 4);
}
} // namespace lift_006EA3C0
