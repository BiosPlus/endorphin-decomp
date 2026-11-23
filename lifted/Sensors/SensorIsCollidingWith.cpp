// Lifted C++ translation unit: lifted/Sensors/SensorIsCollidingWith.cpp
#include "lift_compat.h"

// [0x00626290] Sensors::SensorIsCollidingWith::vfunc_26 (52 bytes)
namespace lift_00626290 {
extern void ext_00624E80(DWORD* key_ref, DWORD a, DWORD b);
extern DWORD* ext_00626210(void* table, DWORD* key_ref);
extern int mem_00B4B3EC;

// @name Sensors::SensorIsCollidingWith::vfunc_26
// @class Sensors::SensorIsCollidingWith
// @summary Forward two args to ext_00624E80, look up a slot in the global table keyed by arg1, and store self there if the slot is empty.
// (no @field lines: this function never dereferences self, so no offsets are accessed)
// Stack args: 4 DWORDs (callee pops 0x10 bytes); arg3/arg4 are never read.
void fn_00626290(void* self, DWORD arg1, DWORD arg2, DWORD /*arg3*/, DWORD /*arg4*/) {
    ext_00624E80(&arg1, arg1, arg2);

    DWORD* slot = ext_00626210(&mem_00B4B3EC, &arg1);
    if (*slot == 0) {
        *slot = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));
    }
}
} // namespace lift_00626290
