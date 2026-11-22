// Lifted C++ translation unit: lifted/NMData/BackGroundData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9ED98;
// Callee sub_005A7FA0 takes (arg, 0); its full signature is not yet recovered.
extern "C" void ext_005A7FA0(void* arg, int flag);

extern "C" void ext_005A7FA0(void* arg, int flag);
// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9ED98; this is unused.
std::string* fn_005A98F0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9ED98);
    return out;
}

// [0x005A9880] NMData::BackGroundData::vfunc_3_off_4 (37 bytes)
// @name NMData::BackGroundData::vfunc_3_off_4
// @class NMData::BackGroundData
// @summary Calls the virtual at vtable byte offset 0x24 (thiscall, no args), which returns a std::string*, and copy-constructs that string into the caller's hidden return buffer (ret 4).
// @field NMData::BackGroundData +0x00 void** vtable
std::string* fn_005A9880(void* self, std::string* out) {
    using NameFn = const std::string* (*)(void*);

    void* vtable = lift_field<void*>(self, 0x00);
    NameFn get_name = reinterpret_cast<NameFn>(lift_field<void*>(vtable, 0x24));
    const std::string* src = get_name(self);

    new (out) std::string(*src);
    return out;
}

// [0x0059DD70] NMData::BackGroundData::vfunc_4_off_10 (40 bytes)
// @name NMData::BackGroundData::vfunc_4_off_10
// @class NMData::BackGroundData
// @summary Scales the float at +0x4dc by the float pointed to by the argument and forwards the product to virtual slot 0x64 of the sub-object at this-0x0C (stdcall, ret 4; ECX = this).
// @field NMData::BackGroundData +0x4dc float field_0x4dc
void fn_0059DD70(void* self, const float* scale) {
    const float product = lift_field<float>(self, 0x4dc) * *scale;
    uint8_t* base = static_cast<uint8_t*>(self) - 0x0C;
    void** vtbl = *reinterpret_cast<void***>(base);
    void* slotAddr = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x64);
    auto slot = reinterpret_cast<void (*)(void*, float)>(slotAddr);
    slot(base, product);
}

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// @name NMData::BackGroundData::vfunc_1
// @class NMData::BackGroundData
// @summary Stdcall (ret 4) thunk: forwards its single argument to ext_005A7FA0 together with a zero flag.
void fn_005A9960(void* arg) {
    ext_005A7FA0(arg, 0);
}

// [0x0059FF60]
// @name NMData::BackGroundData::vfunc_10_off_10
// @class NMData::BackGroundData
// @summary Iterates the pointer vector at +0x74..+0x78 and, for each element, calls its AnimationInterface (+0xC) vtable slots 9 (arg) and 10 (arg, 1).
// @field NMData::BackGroundData +0x74 void** field_0x74
// @field NMData::BackGroundData +0x78 void** field_0x78
void fn_0059FF60(void* self, uint32_t arg) {
    void** begin = lift_field<void**>(self, 0x74);
    void** end = lift_field<void**>(self, 0x78);

    for (void** it = begin; it != end; ++it) {
        uint8_t* obj = reinterpret_cast<uint8_t*>(*it);
        void* iface = obj + 0x0C;
        void** vtbl = *reinterpret_cast<void***>(iface);

        auto slot9 = reinterpret_cast<void (*)(void*, uint32_t)>(vtbl[0x24 / sizeof(void*)]);
        slot9(iface, arg);

        vtbl = *reinterpret_cast<void***>(iface);
        auto slot10 = reinterpret_cast<void (*)(void*, uint32_t, uint32_t)>(vtbl[0x28 / sizeof(void*)]);
        slot10(iface, arg, 1u);
    }
}
