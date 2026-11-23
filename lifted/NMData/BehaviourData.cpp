// Lifted C++ translation unit: lifted/NMData/BehaviourData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F240;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004AC750(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004AC750(void* self, void* owner);
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
extern "C" void __thiscall ext_0047D300(void* self, uint32_t arg);
extern "C" void* mem_00AE29D0;

extern "C" void* mem_00AE29D0;
// @name NMData::BehaviourData::vfunc_17_off_C
// @class NMData::BehaviourData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004AC9F0(void* self) {
    void* mem = ext_006A5C62(0x3E8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004AC750(mem, owner);
}

// [0x00486C20] NMData::BehaviourData::vfunc_68 (31 bytes)
// @name NMData::BehaviourData::vfunc_68
// @class NMData::BehaviourData
// @summary Stores the byte argument at +0x17C, then tail-calls ext_0047D300 on the global object at mem_00AE29D0 passing the dword at +0x168 as its argument.
// @field NMData::BehaviourData +0x168 uint32_t field_0x168
// @field NMData::BehaviourData +0x17C uint8_t field_0x17c
extern "C" void __thiscall fn_00486C20(void* self, uint8_t v) {
    lift_field<uint8_t>(self, 0x17C) = v;
    uint32_t f = lift_field<uint32_t>(self, 0x168);
    ext_0047D300(mem_00AE29D0, f);
}
