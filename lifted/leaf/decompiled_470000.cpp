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
