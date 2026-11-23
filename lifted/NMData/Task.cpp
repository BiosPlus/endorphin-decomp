// Lifted C++ translation unit: lifted/NMData/Task.cpp
#include "lift_compat.h"

// [0x0050AAB0] NMData::Task::vfunc_13 (69 bytes)
namespace lift_0050AAB0 {
extern DWORD ext_0050A140();
extern void ext_0055DA20(void* self, DWORD value, void* addr);
extern DWORD mem_00AEBCB8;  // one-time-init guard word (bit 0 = initialized)
extern DWORD mem_00AEBCB4;  // cached result of ext_0050A140()

// @name NMData::Task::vfunc_13
// @class NMData::Task
// @summary Lazily caches ext_0050A140() once, then calls ext_0055DA20 on arg1 with the cached value and this+0x04; returns arg1.
// @field NMData::Task +0x04 void* field_0x04 (address taken only, not dereferenced)
void* fn_0050AAB0(void* self, void* arg1, void* /*arg2*/) {
    // One-time initialisation of the cached value (guard bit set before the call).
    if ((mem_00AEBCB8 & 1u) == 0) {
        mem_00AEBCB8 |= 1u;
        mem_00AEBCB4 = ext_0050A140();
    }

    DWORD value = mem_00AEBCB4;
    void* addr = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x04);
    ext_0055DA20(arg1, value, addr);
    return arg1;
}
} // namespace lift_0050AAB0
