// Lifted C++ translation unit: lifted/NMData/SkeletalJointData.cpp
#include "lift_compat.h"
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <new>
#include <string>

extern "C" const char* mem_00A9F280;
extern "C" void ext_00661650(void* self);
extern "C" void ext_005E29F0(void* self, void* arg1, uint32_t arg2);

// [0x005F02B0]
// @class NMData::SkeletalJointData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9F280; this is unused.
std::string* fn_005F02B0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F280);
    return out;
}

// [0x005E2A50]
// @class NMData::SkeletalJointData
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_005E2A50(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x47) {
        ext_00661650(arg1);
    } else {
        ext_005E29F0(self, arg1, arg2);
    }
    return arg1;
}

// [0x005E20F0]
// @name NMData::SkeletalJointData::vfunc_55
// @class NMData::SkeletalJointData
// @summary Returns true if the queried joint axis flag (0..6) is not set in the flags word; short-circuits true when the TransformInterface slot-7 check and +0x17A flag are both set.
// @field NMData::SkeletalJointData +0x04 void* transformInterface
// @field NMData::SkeletalJointData +0x17A uint8_t field_0x17A
// @field NMData::SkeletalJointData +0x308 uint32_t field_0x308
bool __thiscall fn_005E20F0(void* self, uint32_t which) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* iface = base + 0x4;
    void** vtbl = *reinterpret_cast<void***>(iface);
    using Fn = bool(__thiscall*)(void*);
    Fn check = reinterpret_cast<Fn>(vtbl[0x1c / 4]);
    if (check(iface) && *(base + 0x17A) != 0) {
        return true;
    }

    uint32_t f = *reinterpret_cast<uint32_t*>(base + 0x308);
    switch (which) {
        case 0: return (f & 0x1) == 0;
        case 1: return (f & 0x2) == 0;
        case 2: return (f & 0x4) == 0;
        case 3: return (f & 0x100) == 0;
        case 4: return (f & 0x200) == 0;
        case 5: return (f & 0x400) == 0;
        case 6: return !((f & 0x1) && (f & 0x2) && (f & 0x4));
        default: return false;
    }
}

// [0x005E2340]
// @name NMData::SkeletalJointData::vfunc_41
// @class NMData::SkeletalJointData
// @summary Updates the joint's child object via ext_00587450, preserving and restoring its transform matrix when the parent state counter is below mem_009849A8.
// @field NMData::SkeletalJointData +0x179 uint8_t field_0x179
// @field NMData::SkeletalJointData +0x180 void* field_0x180
// @field NMData::SkeletalJointData +0x18c void* field_0x18c
// @field NMData::SkeletalJointData +0x22c void* field_0x22c

#include "lift_compat.h"

extern "C" void __thiscall ext_00587450(void* self, uint32_t arg);
extern "C" const uint32_t mem_009849A8;
extern "C" uint32_t mem_00B40640;

extern "C" void __thiscall fn_005E2340(void* self) {
    uint8_t* s = static_cast<uint8_t*>(self);
    if (s[0x179] == 0) {
        return;
    }

    uint8_t* obj22c = *reinterpret_cast<uint8_t**>(s + 0x22c);
    if (obj22c == nullptr) {
        return;
    }

    uint8_t* obj18c = *reinterpret_cast<uint8_t**>(s + 0x18c);
    uint32_t val600 = *reinterpret_cast<uint32_t*>(obj18c + 0x600);
    if (val600 >= mem_009849A8) {
        uint32_t arg = *reinterpret_cast<uint32_t*>(obj22c + 0x20c);
        void* obj180 = *reinterpret_cast<void**>(s + 0x180);
        ext_00587450(obj180, arg);
        return;
    }

    uint8_t buf[0x40];

    uint8_t* obj180 = *reinterpret_cast<uint8_t**>(s + 0x180);
    void* iface = obj180 + 0x4;
    void** vtbl = *reinterpret_cast<void***>(iface);
    using VfnGet = void(__thiscall*)(void*, void*, uint32_t, uint32_t);
    reinterpret_cast<VfnGet>(vtbl[4])(iface, buf, 0, mem_00B40640);

    uint8_t* obj22c_2 = *reinterpret_cast<uint8_t**>(s + 0x22c);
    uint32_t arg = *reinterpret_cast<uint32_t*>(obj22c_2 + 0x20c);
    void* obj180_2 = *reinterpret_cast<void**>(s + 0x180);
    ext_00587450(obj180_2, arg);

    uint8_t* obj180_3 = *reinterpret_cast<uint8_t**>(s + 0x180);
    void* iface2 = obj180_3 + 0x4;
    void** vtbl2 = *reinterpret_cast<void***>(iface2);
    using VfnSet = void(__thiscall*)(void*, uint32_t, void*, uint32_t);
    reinterpret_cast<VfnSet>(vtbl2[0])(iface2, 0, buf, mem_00B40640);
}
