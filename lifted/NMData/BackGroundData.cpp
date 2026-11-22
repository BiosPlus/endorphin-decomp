// Lifted C++ translation unit: lifted/NMData/BackGroundData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9ED98;

// [0x005A98F0] NMData::BackGroundData::vfunc_6 (35 bytes)
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
