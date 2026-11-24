// Lifted C++ translation unit: lifted/leaf/decompiled_470000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0047A010] sub_0047A010 (41 bytes)
namespace lift_0047A010 {
// @name sub_0047A010
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00477340(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0047A010(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00477340(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0047A010

// [0x00479A90]
namespace lift_00479A90 {
// @name fill_n_float
// @summary Fills count floats starting at dst with *value and returns dst + count.


float* __stdcall sub_00479A90(float* dst, uint32_t count, const float* value) {
    if (count > 0) {
        float v = *value;
        for (uint32_t i = 0; i < count; ++i) {
            dst[i] = v;
        }
    }
    return dst + count;
}
} // namespace lift_00479A90

// [0x00476630] sub_00476630 (47 bytes)
namespace lift_00476630 {
// @name makeStdStringFromCStr
// @summary Constructs a std::string in caller-provided storage from a C string; if the pointer is null, constructs an empty string. Returns the storage pointer.
void* fn_00476630(std::string* out, const char* s)
{
    if (s != nullptr) {
        ::new (static_cast<void*>(out)) std::string(s);
    } else {
        ::new (static_cast<void*>(out)) std::string();
    }
    return out;
}
} // namespace lift_00476630

// [0x00477E60] sub_00477E60 (49 bytes)
namespace lift_00477E60 {
// @name FillTriplesFromSource
// @summary Writes the 12-byte triple at src into each of `count` consecutive 12-byte slots starting at dst (skipping writes when dst is null).
// @field none (free function, no class members accessed)
void fn_00477E60(DWORD* dst, DWORD count, const DWORD* src) {
    if (count == 0) {
        return;
    }
    do {
        if (dst != nullptr) {
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
        }
        dst += 3;
        --count;
    } while (count != 0);
}
} // namespace lift_00477E60
