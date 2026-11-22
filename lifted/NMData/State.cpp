// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;
#include <cstring>

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
// @name NMData::State::vfunc_6
// @class NMData::State
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00AA237C.
void fn_0049FA70(void* self) {
    new (self) std::string(mem_00AA237C);
}

// [0x0049FAC0] NMData::State::vfunc_2_off_8 (42 bytes)
// @name NMData::State::vfunc_2_off_8
// @class NMData::State
// @summary Copies the four dwords at this+0xE0..0xEC into the caller-supplied 16-byte output buffer.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
void fn_0049FAC0(void* self, void* out) {
    std::memcpy(out, static_cast<const uint8_t*>(self) + 0xE0, 16);
}

// [0x0049AF70] NMData::State::vfunc_10_off_8 (84 bytes)
// @name NMData::State::vfunc_10_off_8
// @class NMData::State
// @summary Returns true if the 2D point pt[0..1] lies inside the box (e0,e4)-(e8,ec) stored in this.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
bool fn_0049AF70(void* self, const float* pt) {
    const float x = pt[0];
    const float y = pt[1];
    const float minX = lift_field<float>(self, 0xE0);
    const float minY = lift_field<float>(self, 0xE4);
    const float maxX = lift_field<float>(self, 0xE8);
    const float maxY = lift_field<float>(self, 0xEC);
    // Ordered comparisons: NaN inputs yield false, matching the original fcom checks.
    return minX <= x && x <= maxX && minY <= y && y <= maxY;
}
