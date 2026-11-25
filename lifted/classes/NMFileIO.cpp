// Lifted C++ translation unit: lifted/classes/NMFileIO.cpp
#include "lift_compat.h"
extern "C" void ext_00552B00(void* self, void* arg);

// [0x00553720] NMFileIO::vfunc_3 (36 bytes)
// @name NMFileIO::vfunc_3
// @class NMFileIO
// @summary Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.
// @field NMFileIO +0x5C void* field_0x5c
// @field NMFileIO +0x16C void* field_0x16c
void* fn_00553720(void* self, void* arg) {
    ext_00552B00(static_cast<unsigned char*>(self) + 0x5C, arg);
    ext_00552B00(static_cast<unsigned char*>(self) + 0x16C, arg);
    return arg;
}
