// Lifted C++ translation unit: lifted/NMData/Characterization.cpp
#include "lift_compat.h"
extern "C" uint32_t mem_00A9ED9C;
extern "C" void* ext_006404E0(void* arg, uint32_t value);
extern "C" void ext_0058F650(void* self, void* arg);

// [0x005AAA70] NMData::Characterization::vfunc_22 (36 bytes)
// @name NMData::Characterization::vfunc_22
// @class NMData::Characterization
// @summary Passes the argument and a global u32 to sub_006404E0, forwards its result to NMData::CollisionModelDataBase::vfunc_22 on this, and returns that result.
void* fn_005AAA70(void* self, void* arg) {
    void* result = ext_006404E0(arg, mem_00A9ED9C);
    ext_0058F650(self, result);
    return result;
}

// [0x005ABEA0]
namespace lift_005ABEA0 {
// @name NMData::Characterization::vfunc_17_off_C
// @class NMData::Characterization
// @summary Allocates and copy-constructs a new NMData::Characterization instance from the +0xC subobject this pointer
// @field NMData::Characterization +0x00 uint32_t vptr_00
// @field NMData::Characterization +0x04 uint32_t vptr_04
// @field NMData::Characterization +0x08 uint32_t vptr_08
// @field NMData::Characterization +0x0C uint32_t vptr_0C
// @field NMData::Characterization +0x150 uint32_t vptr_150


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void __thiscall ext_0058F2F0(void* self, void* src);

extern void* __thiscall fn_005ABEA0(uint8_t* self_off_C) {
    uint8_t* obj = static_cast<uint8_t*>(ext_006A5C62(0x154));
    if (!obj) {
        return nullptr;
    }

    ext_0058F2F0(obj, self_off_C - 0x0C);

    *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x00935AFCu;
    *reinterpret_cast<uint32_t*>(obj + 0x04) = 0x00935AB4u;
    *reinterpret_cast<uint32_t*>(obj + 0x08) = 0x00935A74u;
    *reinterpret_cast<uint32_t*>(obj + 0x0C) = 0x00935A24u;
    *reinterpret_cast<uint32_t*>(obj + 0x150) = 0x00935A10u;

    return obj;
}
} // namespace lift_005ABEA0
