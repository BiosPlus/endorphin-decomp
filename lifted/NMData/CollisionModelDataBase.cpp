// Lifted C++ translation unit: lifted/NMData/CollisionModelDataBase.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" void __thiscall ext_005DF1F0(void* self, void* a, void* b);
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005CCA70(void* self, void* owner);

extern "C" void* ext_005CCA70(void* self, void* owner);
// @name NMData::CollisionModelDataBase::vfunc_15
// @class NMData::CollisionModelDataBase
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005C3010(void* self, void* a, void* b) {
    ext_005DF1F0(self, a, b);
    return a;
}

// [0x005CCB60] NMData::CollisionModelDataBase::vfunc_17_off_C (99 bytes)
// @name NMData::CollisionModelDataBase::vfunc_17_off_C
// @class NMData::CollisionModelDataBase
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005CCB60(void* self) {
    void* mem = ext_006A5C62(0x19C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005CCA70(mem, owner);
}
