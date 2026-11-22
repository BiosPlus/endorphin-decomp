// Lifted C++ translation unit: lifted/NMData/NameTableLoader.cpp
#include "lift_compat.h"
extern "C" void ext_004EBC80(void* self, void* a, void* b);

// [0x0049CCC0] NMData::NameTableLoader::vfunc_1 (20 bytes)
// @name NMData::NameTableLoader::vfunc_1
// @class NMData::NameTableLoader
// @summary Forwards the argument plus two loader fields to ext_004EBC80, using field +0x04 as the receiver.
// @field NMData::NameTableLoader +0x04 void* field_0x04
// @field NMData::NameTableLoader +0x08 void* field_0x08
void fn_0049CCC0(void* self, void* arg) {
    void* f04 = lift_field<void*>(self, 0x04);
    void* f08 = lift_field<void*>(self, 0x08);
    ext_004EBC80(f04, arg, f08);
}
