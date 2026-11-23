// Lifted C++ translation unit: lifted/classes/VSKIO.cpp
#include "lift_compat.h"

// [0x005749C0] VSKIO::vfunc_3 (37 bytes)
namespace lift_005749C0 {
extern void* ext_00640390(void* object, const char* key, uint32_t flags);
extern void ext_00553720(void* self, void* arg);
extern const char mem_0092FE14[];

// @name VSKIO::vfunc_3
// @class VSKIO
// @summary Auto-lifted identical-shape clone of 0x005731A0 (OBJIO::vfunc_3).
void* fn_005749C0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE14, 0);
    ext_00553720(self, resolved);
    return arg;
}
} // namespace lift_005749C0
