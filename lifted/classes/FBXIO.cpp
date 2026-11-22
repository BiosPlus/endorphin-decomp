// Lifted C++ translation unit: lifted/classes/FBXIO.cpp
#include "lift_compat.h"
extern "C" int ext_00640390(int self_arg, int a1, int a2);
extern "C" void ext_00553720(void* self, int a1);
extern "C" int mem_00A9EED4;

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
// @name FBXIO::vfunc_3
// @class FBXIO
// @summary Calls sub_00640390 on its argument, forwards the result to NMFileIO::vfunc_3 on this, and returns the original argument.
// (no direct field accesses on this; the this pointer is only forwarded to NMFileIO::vfunc_3)
int fn_0055DE50(void* self, int arg1) {
    int r = ext_00640390(arg1, mem_00A9EED4, 0);
    ext_00553720(self, r);
    return arg1;
}
