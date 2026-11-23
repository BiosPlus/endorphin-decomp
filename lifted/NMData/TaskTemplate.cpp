// Lifted C++ translation unit: lifted/NMData/TaskTemplate.cpp
#include "lift_compat.h"

// [0x0050AA00] NMData::TaskTemplate::vfunc_13 (69 bytes)
namespace lift_0050AA00 {
extern uint32_t ext_0050A030(void* self);
extern void ext_0055DA20(void* self, uint32_t a, void* b);
extern uint32_t mem_00AEBCB0;
extern uint32_t mem_00AEBCAC;

// @name NMData::TaskTemplate::vfunc_13
// @class NMData::TaskTemplate
// @summary Lazily caches a shared value via ext_0050A030 on first call, then forwards it with the this+4 sub-object address to ext_0055DA20 on arg1; returns arg1.
// @field NMData::TaskTemplate +0x04 void* field_0x04
void* fn_0050AA00(void* self, void* arg1, void* arg2) {
    (void)arg2; // second stack argument (ret 8) is never read

    // One-time initialization guarded by bit 0 of mem_00AEBCB0.
    if ((mem_00AEBCB0 & 1u) == 0) {
        mem_00AEBCB0 |= 1u;
        mem_00AEBCAC = ext_0050A030(self);
    }

    // Address of the this+4 sub-object (address only; not dereferenced here).
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x04;
    ext_0055DA20(arg1, mem_00AEBCAC, sub);
    return arg1;
}
} // namespace lift_0050AA00
