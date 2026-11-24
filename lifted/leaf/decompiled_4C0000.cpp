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

// [0x004C1AC0] sub_004C1AC0 (37 bytes)
namespace lift_004C1AC0 {
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();

// @name UnknownClass::setValueAboveField15cAndNotify
// @class UnknownClass
// @summary Stores the argument at +0x160; if it is not greater than the signed value at +0x15c, stores +0x15c + 1 instead, then calls ext_004C0340.
// @field UnknownClass +0x15c int32_t field_0x15c
// @field UnknownClass +0x160 int32_t field_0x160
void fn_004C1AC0(void* self, int32_t value) {
    int32_t& threshold = lift_field<int32_t>(self, 0x15c);
    int32_t& out = lift_field<int32_t>(self, 0x160);

    out = value;
    if (value <= threshold) {
        out = static_cast<int32_t>(static_cast<uint32_t>(threshold) + 1u);
    }
    ext_004C0340();
}
} // namespace lift_004C1AC0

// [0x004C4D80] sub_004C4D80 (45 bytes)
namespace lift_004C4D80 {
// @name Vec3::Scale
// @class Vec3
// @summary Writes this vector (ecx) multiplied by a scalar into the output vector (first stack arg); callee pops 8 bytes.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
void fn_004C4D80(const void* self, void* out, float scale) {
    const float x = lift_field<float>(self, 0x00);
    const float y = lift_field<float>(self, 0x04);
    const float z = lift_field<float>(self, 0x08);

    lift_field<float>(out, 0x00) = x * scale;
    lift_field<float>(out, 0x04) = y * scale;
    lift_field<float>(out, 0x08) = z * scale;
}
} // namespace lift_004C4D80
