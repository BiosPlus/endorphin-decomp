// Lifted C++ translation unit: lifted/leaf/decompiled_560000.cpp
#include "lift_compat.h"

// [0x005694F0] sub_005694F0 (27 bytes)
namespace lift_005694F0 {
extern void __cdecl ext_005693E0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005694F0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005693E0(a1, a2, self, a2);
}
} // namespace lift_005694F0
