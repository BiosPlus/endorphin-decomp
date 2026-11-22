// Lifted C++ translation unit: lifted/NMData/MetaBodyConstraintData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F314;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004CCE20(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004CCE20(void* self, void* owner);
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

// [0x004CD020] NMData::MetaBodyConstraintData::vfunc_17_off_C (99 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_17_off_C
// @class NMData::MetaBodyConstraintData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004CD020(void* self) {
    void* mem = ext_006A5C62(0x1A4);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004CCE20(mem, owner);
}
