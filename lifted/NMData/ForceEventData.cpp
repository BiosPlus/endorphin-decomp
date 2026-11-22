// Lifted C++ translation unit: lifted/NMData/ForceEventData.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_004C64D0(void* self, uint32_t arg);
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;

extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;
// @class NMData::ForceEventData
// @summary Reads the dword at this+0x184; if non-zero, calls ext_004C64D0 on the subobject at this+0x184 with a single zero argument.
// @field NMData::ForceEventData +0x184 uint32_t field_0x184
void fn_004C66F0(void* self) {
    void* sub = static_cast<uint8_t*>(self) + 0x184;
    if (lift_field<uint32_t>(self, 0x184) != 0) {
        ext_004C64D0(sub, 0);
    }
}

// [0x004C4DD0] NMData::ForceEventData::vfunc_59 (34 bytes)
// @name NMData::ForceEventData::vfunc_59
// @class NMData::ForceEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::ForceEventData +0x0 void** vptr
extern "C" void __thiscall fn_004C4DD0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EF28;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004C4E40] NMData::ForceEventData::vfunc_60 (34 bytes)
// @name NMData::ForceEventData::NotifyEvent0x266
// @class NMData::ForceEventData
// @summary Invokes virtual slot 15 (vtable +0x3C) on self with (arg, 0x266, 0), then returns arg.
// @field NMData::ForceEventData +0x00 void** vtable
void* fn_004C4E40(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot15 = void (*)(void* self, void* arg, uint32_t id, uint32_t flags);
    Slot15 slot = reinterpret_cast<Slot15>(vtbl[15]);
    slot(self, arg, 0x266u, 0u);
    return arg;
}
