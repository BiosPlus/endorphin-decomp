// Lifted C++ translation unit: lifted/classes/OBJIO.cpp
#include "lift_compat.h"
// sub_00640390: thiscall(ecx=object, key, flags) -> resolved pointer (eax)
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
// NMFileIO::vfunc_3: thiscall(ecx=this, arg) (stdcall-style, callee cleans stack)
extern "C" void ext_00553720(void* self, void* arg);
// String constant pushed at 0x92FE24
extern "C" const char mem_0092FE24[];

// [0x005731A0] OBJIO::vfunc_3 (37 bytes)
// @name OBJIO::vfunc_3
// @class OBJIO
// @summary Resolves a pointer from the argument object via sub_00640390 using the constant key at 0x92FE24, forwards it to NMFileIO::vfunc_3 on this, and returns the argument.
void* fn_005731A0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE24, 0);
    ext_00553720(self, resolved);
    return arg;
}
