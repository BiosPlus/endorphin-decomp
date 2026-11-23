// Lifted C++ translation unit: lifted/NMData/Characterization.cpp
#include "lift_compat.h"
extern "C" uint32_t mem_00A9ED9C;
extern "C" void* ext_006404E0(void* arg, uint32_t value);
extern "C" void ext_0058F650(void* self, void* arg);

// [0x005AAA70] NMData::Characterization::vfunc_22 (36 bytes)
// @name NMData::Characterization::vfunc_22
// @class NMData::Characterization
// @summary Passes the argument and a global u32 to sub_006404E0, forwards its result to NMData::CollisionModelDataBase::vfunc_22 on this, and returns that result.
void* fn_005AAA70(void* self, void* arg) {
    void* result = ext_006404E0(arg, mem_00A9ED9C);
    ext_0058F650(self, result);
    return result;
}
