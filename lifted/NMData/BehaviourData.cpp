// Lifted C++ translation unit: lifted/NMData/BehaviourData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F240;

// [0x004A9B70] NMData::BehaviourData::vfunc_59 (34 bytes)
// @name NMData::BehaviourData::vfunc_59
// @class NMData::BehaviourData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::BehaviourData +0x0 void** vptr
extern "C" void __thiscall fn_004A9B70(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F240;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
