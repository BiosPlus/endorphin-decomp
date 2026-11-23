// Lifted C++ translation unit: lifted/NMData/RigRoot.cpp
#include "lift_compat.h"
extern "C" uint32_t mem_00A9F288;
extern "C" void* ext_006404E0(void* arg, uint32_t value);
extern "C" void ext_005AA6C0(void* self, void* arg);

// [0x005AAA40] NMData::RigRoot::vfunc_22 (36 bytes)
// @name NMData::RigRoot::vfunc_22
// @class NMData::RigRoot
// @summary Auto-lifted identical-shape clone of 0x005AAA70 (NMData::Characterization::vfunc_22).
void* fn_005AAA40(void* self, void* arg) {
    void* result = ext_006404E0(arg, mem_00A9F288);
    ext_005AA6C0(self, result);
    return result;
}
