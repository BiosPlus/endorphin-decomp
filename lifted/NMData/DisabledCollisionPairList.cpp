// Lifted C++ translation unit: lifted/NMData/DisabledCollisionPairList.cpp
#include "lift_compat.h"

// [0x0060A640]
namespace lift_0060A640 {
// @name NMData::DisabledCollisionPairList::vfunc_13
// @class NMData::DisabledCollisionPairList
// @summary Returns a property/member wrapper for DisabledCollisionPairList based on string key comparison
// @field NMData::DisabledCollisionPairList +0x10 uint32_t field_0x10
// @field NMData::DisabledCollisionPairList +0x20 uint32_t field_0x20

extern uint32_t mem_00924FC0;
extern uint32_t __cdecl ext_0060A520(uint32_t);
extern uint32_t __cdecl ext_004C1BF0(uint32_t);
extern void __thiscall ext_0055DA20(uint32_t, uint32_t);

uint32_t __thiscall fn_0060A640(uint32_t self, uint32_t out, uint32_t key) {
    using EqFn = uint8_t (__cdecl*)(uint32_t, uint32_t);
    uint8_t eq = reinterpret_cast<EqFn>(mem_00924FC0)(key, 0x00971FDCu);
    if (eq != 0) {
        uint32_t val = ext_0060A520(self + 0x10u);
        ext_0055DA20(out, val);
        return out;
    }
    uint32_t val = ext_004C1BF0(self + 0x20u);
    ext_0055DA20(out, val);
    return out;
}
} // namespace lift_0060A640
