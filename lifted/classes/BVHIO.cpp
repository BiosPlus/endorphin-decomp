// Lifted C++ translation unit: lifted/classes/BVHIO.cpp
#include "lift_compat.h"

// [0x0056DA30]
// @name BVHIO::vfunc_3
// @class BVHIO
// @summary Formats or resolves a path/string using sub_00640390 and delegates to NMFileIO::vfunc_3, returning arg0.

#include "lift_compat.h"

extern uint32_t mem_00A9ED4C;
extern uint32_t __thiscall ext_00640390(void* self, uint32_t a1, uint32_t a2);
extern uint32_t __thiscall ext_00553720(void* self, uint32_t a1);

void* __thiscall fn_0056DA30(void* self, void* arg0) {
    uint32_t val = ext_00640390(arg0, mem_00A9ED4C, 0);
    ext_00553720(self, val);
    return arg0;
}
