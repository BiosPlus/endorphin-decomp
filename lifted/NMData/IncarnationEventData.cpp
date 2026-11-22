// Lifted C++ translation unit: lifted/NMData/IncarnationEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EFB8;
#include <new>
extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);

extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);
// @name NMData::IncarnationEventData::vfunc_59
// @class NMData::IncarnationEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::IncarnationEventData +0x0 void** vptr
extern "C" void __thiscall fn_004CE710(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EFB8;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004CE830] NMData::IncarnationEventData::vfunc_14 (32 bytes)
// @name NMData::IncarnationEventData::vfunc_14
// @class NMData::IncarnationEventData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_004CE830(void* self, void* a, void* b) {
    ext_004C2070(self, a, b);
    return a;
}
