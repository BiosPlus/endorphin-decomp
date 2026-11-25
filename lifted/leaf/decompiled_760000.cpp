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

// [0x007648F0] sub_007648F0 (64 bytes)
namespace lift_007648F0 {
// @name Unknown::FindIndexOfKeyPair
// @class Unknown
// @summary Scans the pointer array at +0x16C (count at +0x15C) for an entry whose first two DWORDs match (a, b); returns its index or -1.
// @field Unknown +0x15C int32_t field_0x15C
// @field Unknown +0x16C void** field_0x16C
int32_t fn_007648F0(void* self, uint32_t a, uint32_t b) {
    const int32_t count = lift_field<int32_t>(self, 0x15C);
    if (count <= 0) {
        return -1;
    }

    void** entries = lift_field<void**>(self, 0x16C);
    for (int32_t i = 0; i < count; ++i) {
        const void* entry = entries[i];
        if (lift_field<uint32_t>(entry, 0) == a && lift_field<uint32_t>(entry, 4) == b) {
            return i;
        }
    }
    return -1;
}
} // namespace lift_007648F0
