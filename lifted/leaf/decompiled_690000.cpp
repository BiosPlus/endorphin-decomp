// Lifted C++ translation unit: lifted/leaf/decompiled_690000.cpp
#include "lift_compat.h"

// [0x00692D90] sub_00692D90 (60 bytes)
namespace lift_00692D90 {
extern void (*mem_00925134)();

// @name sub_00692D90
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00490960(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00692D90(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x8;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00490960(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00692D90

// [0x00695E20] sub_00695E20 (31 bytes)
namespace lift_00695E20 {
extern void ext_00695E00(void* self, uint32_t arg2);

// @name sub_00695E20
// @summary Auto-lifted identical-shape clone of 0x0051AED0 (NMData::RealChannel::vfunc_8).
void* fn_00695E20(void* self, uint32_t ecx_in) {
    ext_00695E00(self, ecx_in);
    return self;
}
} // namespace lift_00695E20
