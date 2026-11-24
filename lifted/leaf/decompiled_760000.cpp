// Lifted C++ translation unit: lifted/leaf/decompiled_760000.cpp
#include "lift_compat.h"

// [0x00766210] sub_00766210 (48 bytes)
namespace lift_00766210 {
// Known callee 0x006D2A30: sub_006D2A30 (Returns `this` pointer unchanged.)
extern void* __fastcall ext_006D2A30(void* self);

// @name scaleDoubleBlock16
// @summary Multiplies 16 consecutive doubles (128 bytes) in the block returned by ext_006D2A30(self) by a scale factor.
void __stdcall fn_00766210(void* self, double scale) {
    for (ptrdiff_t off = 0; off < 0x80; off += 8) {
        void* base = ext_006D2A30(self);
        lift_field<double>(base, off) *= scale;
    }
}
} // namespace lift_00766210
