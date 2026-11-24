// Lifted C++ translation unit: lifted/Properties/GWCPropertiesControlDriver.cpp
#include "lift_compat.h"

// [0x0041DED0] Properties::GWCPropertiesControlDriver::vfunc_5 (60 bytes)
namespace lift_0041DED0 {
extern void (*mem_00925134)();

// @name Properties::GWCPropertiesControlDriver::vfunc_5
// @class Properties::GWCPropertiesControlDriver
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
// @field Properties::GWCPropertiesControlDriver +0x30 uint32_t begin
// @field Properties::GWCPropertiesControlDriver +0x34 uint32_t end
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_0048EF80(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_0041DED0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x1C;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_0048EF80(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_0041DED0

// [0x0041CA70] Properties::GWCPropertiesControlDriver::vfunc_8 (21 bytes)
namespace lift_0041CA70 {
// Known callee 0x006AD180: getDerefField0x4 (Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.)
extern uint32_t ext_006AD180(void* self);

// @name Properties::GWCPropertiesControlDriver::vfunc_8
// @class Properties::GWCPropertiesControlDriver
// @summary Returns 0 for a null argument; otherwise forwards the argument to ext_006AD180 and returns its result.
// (no fields accessed by this function; +0x30 begin / +0x34 end are not touched)
uint32_t fn_0041CA70(void* self) {
    if (self == nullptr) {
        return 0;
    }
    return ext_006AD180(self);
}
} // namespace lift_0041CA70
