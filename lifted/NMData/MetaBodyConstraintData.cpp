// Lifted C++ translation unit: lifted/NMData/MetaBodyConstraintData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F314;

// @class NMData::MetaBodyConstraintData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::MetaBodyConstraintData +0x0 void** vptr
extern "C" void __thiscall fn_004CA380(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F314;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004CCFB0]
// @name NMData::MetaBodyConstraintData::assignFrom
// @class NMData::MetaBodyConstraintData
// @summary Dynamically casts the source object and, if compatible, destroys this instance in-place and copy-constructs from it.
// @field NMData::MetaBodyConstraintData +0x00 void** vptr

#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);
extern "C" void __thiscall ext_004CCE20(void* self, void* src);

extern "C" uint32_t mem_00A2E2F8;
extern "C" uint32_t mem_00A32978;

extern "C" void __thiscall fn_004CCFB0(void* self, void* src) {
    void* casted = ext_006A6E9E(src, 0, &mem_00A2E2F8, &mem_00A32978, 0);
    if (casted != nullptr) {
        using DestructorFn = void(__thiscall*)(void*, uint32_t);
        auto** vtable = *reinterpret_cast<void***>(self);
        auto dtor = reinterpret_cast<DestructorFn>(vtable[0]);
        dtor(self, 0);
        ext_004CCE20(self, casted);
    }
}
