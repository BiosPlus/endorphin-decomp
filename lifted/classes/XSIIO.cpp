// Lifted C++ translation unit: lifted/classes/XSIIO.cpp
#include "lift_compat.h"

// [0x00563600] XSIIO::vfunc_3 (37 bytes)
namespace lift_00563600 {
extern void* ext_00640390(void* object, const char* key, uint32_t flags);
extern void ext_00553720(void* self, void* arg);
extern const char mem_0092CE4C[];

// @name XSIIO::vfunc_3
// @class XSIIO
// @summary Auto-lifted identical-shape clone of 0x005731A0 (OBJIO::vfunc_3).
void* fn_00563600(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092CE4C, 0);
    ext_00553720(self, resolved);
    return arg;
}
} // namespace lift_00563600
