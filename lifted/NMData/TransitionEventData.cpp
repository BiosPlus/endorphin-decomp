// Lifted C++ translation unit: lifted/NMData/TransitionEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F358;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::TransitionEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D0B80(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F358;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004D3070] NMData::TransitionEventData::vfunc_17_off_C (99 bytes)
// @name NMData::TransitionEventData::vfunc_17_off_C
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004D3070(void* self) {
    void* mem = ext_006A5C62(0x32C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004D2F60(mem, owner);
}

// [0x004D0C80]
namespace lift_004D0C80 {
// @name NMData::TransitionEventData::vfunc_14
// @class NMData::TransitionEventData
// @summary Returns property value for ID 0x40 from field_0x198 if field_0x168->vfunc_10() is false, otherwise delegates to base vfunc_14.
// @field NMData::TransitionEventData +0x168 void* field_0x168
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198


extern void __thiscall ext_00661650(void* dst, const void* src);
extern void* __thiscall ext_004C2070(void* self, void* out, uint32_t id);

void* __thiscall fn_004D0C80(void* self, void* out, uint32_t id) {
    if (id == 0x40) {
        void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x168);
        void** vtable = *reinterpret_cast<void***>(obj);
        auto vfunc = reinterpret_cast<uint8_t(__thiscall*)(void*)>(vtable[0x28 / 4]);
        if (vfunc(obj) == 0) {
            ext_00661650(out, reinterpret_cast<uint8_t*>(self) + 0x198);
            return out;
        }
    }
    ext_004C2070(self, out, id);
    return out;
}
} // namespace lift_004D0C80
