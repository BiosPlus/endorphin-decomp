// Lifted C++ translation unit: lifted/leaf/tiny_690000.cpp
#include "lift_compat.h"
extern "C" int mem_0098FABC;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_00699040
// @summary Stores address of mem_0098FABC into field at offset +0x0.
extern "C" void __fastcall fn_00699040(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098FABC;
}

// [0x00692210] sub_00692210 (19 bytes)
// @name sub_00692210
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00692210(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0xC);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x10);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x00699930] sub_00699930 (19 bytes)
// @name sub_00699930
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00699930(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x1C);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x20);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x00692000] sub_00692000 (12 bytes)
namespace lift_00692000 {
// Table of 32-bit entries at global mem_00B5AE98, indexed by the first stack argument.
extern DWORD mem_00B5AE98[];

// @name lookupTableEntry00B5AE98
// @summary Returns mem_00B5AE98[index] where index is the single stack argument (__cdecl).
extern DWORD fn_00692000(DWORD index) {
    return mem_00B5AE98[index];
}
} // namespace lift_00692000
