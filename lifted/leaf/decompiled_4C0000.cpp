// Lifted C++ translation unit: lifted/leaf/decompiled_4C0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_004CCDE0 {
extern void (*mem_00925134)();

// @name sub_004CCDE0
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00406510(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_004CCDE0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x16C;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00406510(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_004CCDE0

// [0x004CFFE0] sub_004CFFE0 (34 bytes)
namespace lift_004CFFE0 {
extern const char mem_00947AC0[];

// @name sub_004CFFE0
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004CFFE0(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_00947AC0);
    return dst;
}
} // namespace lift_004CFFE0
