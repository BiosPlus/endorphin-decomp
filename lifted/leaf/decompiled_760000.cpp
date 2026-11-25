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

// [0x00766240] sub_00766240 (64 bytes)
namespace lift_00766240 {
// Known callee 0x006D2A30: sub_006D2A30 (Returns `this` pointer unchanged.)
extern void* __fastcall ext_006D2A30(void* self);

// @name Unknown::AccumulateSixteenDoubles
// @class Unknown
// @summary Adds a 16-element double array (128 bytes) from src into dst in place: dst[i] += src[i].
// @field Unknown +0x00 double field_0x00
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
// @field Unknown +0x20 double field_0x20
// @field Unknown +0x28 double field_0x28
// @field Unknown +0x30 double field_0x30
// @field Unknown +0x38 double field_0x38
// @field Unknown +0x40 double field_0x40
// @field Unknown +0x48 double field_0x48
// @field Unknown +0x50 double field_0x50
// @field Unknown +0x58 double field_0x58
// @field Unknown +0x60 double field_0x60
// @field Unknown +0x68 double field_0x68
// @field Unknown +0x70 double field_0x70
// @field Unknown +0x78 double field_0x78
void fn_00766240(void* dst, const void* src) {
    void* d = ext_006D2A30(dst);
    const void* s = ext_006D2A30(const_cast<void*>(src));
    for (ptrdiff_t off = 0; off < 0x80; off += 8) {
        lift_field<double>(d, off) += lift_field<double>(s, off);
    }
}
} // namespace lift_00766240

// [0x00764620] sub_00764620 (80 bytes)
namespace lift_00764620 {
extern int32_t __fastcall ext_006C3030(void* self);

// @name fn_00764620
// @summary Gets an object pointer from ext_006C3030; if non-null, calls virtual slot 0 on it three times and returns true when the 1st result is 4, the 2nd is 5, or the 3rd is 6.
extern bool __stdcall fn_00764620(void* self) {
    using VirtSlot0 = int32_t(__fastcall*)(void*);

    const int32_t raw = ext_006C3030(self);
    if (raw == 0) {
        return false;
    }

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(raw)));

    auto call_slot0 = [obj]() -> int32_t {
        void* vtable = *reinterpret_cast<void**>(obj);
        VirtSlot0 target = reinterpret_cast<VirtSlot0>(*reinterpret_cast<void**>(vtable));
        return target(obj);
    };

    if (call_slot0() == 4) {
        return true;
    }
    if (call_slot0() == 5) {
        return true;
    }
    return call_slot0() == 6;
}
} // namespace lift_00764620
