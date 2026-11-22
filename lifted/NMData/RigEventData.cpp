// Lifted C++ translation unit: lifted/NMData/RigEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F218;

// [0x004D3D00] NMData::RigEventData::vfunc_59 (34 bytes)
// @name NMData::RigEventData::vfunc_59
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::RigEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D3D00(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F218;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
