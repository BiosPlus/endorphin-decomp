// Lifted C++ translation unit: lifted/NMData/DesiredPoseEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EE2C;
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);
extern "C" void ext_00661650(void* self, void* arg);

extern "C" void ext_00661650(void* self, void* arg);
// @name NMData::DesiredPoseEventData::vfunc_59
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::DesiredPoseEventData +0x0 void** vptr
extern "C" void __thiscall fn_004869A0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EE2C;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0048DB80(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0048DB80(void* self, void* owner);
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x0061FF40 (NMData::GraphicData::vfunc_14).
// @field NMData::DesiredPoseEventData +0x224 uint8_t field_0x154 (address of subobject only; not read or written field_0x224
void* fn_00486C40(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x130) {
        void* sub = static_cast<uint8_t*>(self) + 0x224;
        ext_00661650(arg1, sub);
    } else {
        ext_004C2070(self, arg1, arg2);
    }
    return arg1;
}

// [0x0048DD30] NMData::DesiredPoseEventData::vfunc_17_off_C (99 bytes)
// @name NMData::DesiredPoseEventData::vfunc_17_off_C
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0048DD30(void* self) {
    void* mem = ext_006A5C62(0x238);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0048DB80(mem, owner);
}
