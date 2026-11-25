// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;
#include <cstring>

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

// [0x0049E000]
namespace lift_0049E000 {
// @name NMData::State::vfunc_21_off_8
// @class NMData::State
// @summary Checks whether the rectangle returned for the element at +0xE0 has positive width and height.
// @field NMData::State +0xE0 float field_0xE0


extern void* __thiscall ext_00498B60(void* self, void* out_rect, void* arg0);

uint8_t __thiscall fn_0049E000(void* self, void* arg0) {
    float buf[4];
    float* rect = static_cast<float*>(ext_00498B60(static_cast<uint8_t*>(self) + 0xE0, buf, arg0));
    float width = rect[2] - rect[0];
    if (width > 0.0f) {
        float height = rect[3] - rect[1];
        if (height > 0.0f) {
            return 1;
        }
    }
    return 0;
}
} // namespace lift_0049E000

// [0x0049DF50] NMData::State::vfunc_14_off_10 (77 bytes)
namespace lift_0049DF50 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(DWORD arg);
// Known callee 0x0049D360: sub_0049D360 (35B), takes one stack arg (callee pops), returns in EAX.
extern DWORD ext_0049D360(DWORD arg);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name NMData::State::vfunc_14_off_10
// @class NMData::State
// @summary Returns arg1 after forwarding it to 0x0046F7D0 unless byte +0x54 is zero and arg2 == 0x1B3, in which case it initializes the sub-object at +0x10C and returns arg2.
// @field NMData::State +0x54 BYTE field_0x54
// @field NMData::State +0x10C void* field_0x10C
DWORD fn_0049DF50(void* self, DWORD arg1, DWORD arg2) {
    if (lift_field<uint8_t>(self, 0x54) == 0 && arg2 == 0x1B3) {
        // Address of this+0x10C is passed to 0x0049D360.
        DWORD sub = static_cast<DWORD>(reinterpret_cast<uintptr_t>(
            reinterpret_cast<uint8_t*>(self) + 0x10C));
        DWORD t = ext_0049D360(sub);

        // Original pushes eax and the caller's saved ESI as the two stack DWORDs.
        // The caller's ESI is not recoverable here; 0 is a placeholder.
        ext_0055DA20(reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)), t, 0);
        return arg2;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_0049DF50
