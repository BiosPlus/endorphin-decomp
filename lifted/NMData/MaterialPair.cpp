// Lifted C++ translation unit: lifted/NMData/MaterialPair.cpp
#include "lift_compat.h"

// [0x004BAAF0]
namespace lift_004BAAF0 {
// @name NMData::MaterialPair::vfunc_15
// @class NMData::MaterialPair
// @summary Dispatches property/member lookup by key to return a pointer-pair for fields at +0x04, +0x20, or +0x3C, or a default empty pair.
// @field NMData::MaterialPair +0x04 uint32_t field_0x04
// @field NMData::MaterialPair +0x20 uint32_t field_0x20
// @field NMData::MaterialPair +0x3C uint32_t field_0x3C


extern void* ext_00499130(void* out, uint32_t value);
extern void ext_00671F30(uint32_t* out);
extern const uint8_t mem_004BAB84[];

void* __thiscall fn_004BAAF0(void* self, void* out, uint32_t key) {
    uint32_t idx = key - 0x2b5u;
    if (idx <= 0xd1u) {
        switch (mem_004BAB84[idx]) {
        case 0:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(reinterpret_cast<uint8_t*>(self) + 0x04)));
            return out;
        case 1:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(reinterpret_cast<uint8_t*>(self) + 0x20)));
            return out;
        case 2:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(reinterpret_cast<uint8_t*>(self) + 0x3c)));
            return out;
        default:
            break;
        }
    }
    ext_00671F30(reinterpret_cast<uint32_t*>(out));
    return out;
}
} // namespace lift_004BAAF0
