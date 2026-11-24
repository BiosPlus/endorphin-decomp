// Lifted C++ translation unit: lifted/leaf/decompiled_740000.cpp
#include "lift_compat.h"
#include <cstring>

// [0x0074F820] sub_0074F820 (48 bytes)
namespace lift_0074F820 {
// @name sub_0074F820
// @summary Auto-lifted identical-shape clone of 0x006D2AA0 (ForwardIndexedElementToCallee).
namespace lift_006D2AA0 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* __thiscall ext_0077FAC0(void* self, uint32_t arg1);

// @name ForwardIndexedElementToCallee
// @class Unknown
// @summary Computes the address of element `index` (32-byte stride) in the table at self+0x10, forwards it to ext_006D2390 on obj, and returns obj.
// @field Unknown +0x10 uint32_t field_0x10
void* __thiscall fn_0074F820(void* self, void* obj, uint32_t index) {
    const uint32_t table = *reinterpret_cast<const uint32_t*>(static_cast<const char*>(self) + 0x10);
    const uint32_t element = table + (index << 4);

    ext_0077FAC0(obj, element);
    return obj;
}
} // namespace lift_006D2AA0
} // namespace lift_0074F820

// [0x0074F650] sub_0074F650 (48 bytes)
namespace lift_0074F650 {
// @name descriptiveName: wrapIndexOrSentinel
// @summary Stdcall(a, n): if a is in (-n, 0) returns a + n; if a is in (0, n] returns a - 1; otherwise returns -1.
// Pure arithmetic on its two stack arguments; no fields, globals, or external calls.
int __stdcall fn_0074F650(int32_t a, int32_t n) {
    if (a < 0) {
        // Negate via unsigned arithmetic so INT32_MIN wraps instead of being UB.
        const int32_t neg = static_cast<int32_t>(0u - static_cast<uint32_t>(a));
        if (neg <= n) {
            return static_cast<int32_t>(static_cast<uint32_t>(a) + static_cast<uint32_t>(n));
        }
    }
    if (a > 0 && a <= n) {
        return a - 1;
    }
    return -1;
}
} // namespace lift_0074F650

// [0x0074B080]
namespace lift_0074B080 {
// @name Unknown::initStateFlags
// @class Unknown
// @summary Calls ext_00784620(self, 0x14) to reset base state, sets byte flags +0x14..+0x16 to 1, clears byte +0x17, zeroes dword +0x18, and returns self.
// @field Unknown +0x14 uint8_t field_0x14
// @field Unknown +0x15 uint8_t field_0x15
// @field Unknown +0x16 uint8_t field_0x16
// @field Unknown +0x17 uint8_t field_0x17
// @field Unknown +0x18 uint32_t field_0x18


// Known callee 0x00784620: sub_00784620 (thiscall: reset object state, store one DWORD argument)
extern void ext_00784620(void* self, DWORD arg);

void* __thiscall fn_0074B080(void* self) {
    ext_00784620(self, 0x14);
    lift_field<uint8_t>(self, 0x14) = 1;
    lift_field<uint8_t>(self, 0x15) = 1;
    lift_field<uint8_t>(self, 0x16) = 1;
    lift_field<uint8_t>(self, 0x17) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    return self;
}
} // namespace lift_0074B080

// [0x0074F680] sub_0074F680 (48 bytes)
namespace lift_0074F680 {
// @name divModCombine
// @summary Returns (a / b) + (a % b) * c using signed 32-bit division; stdcall, 3 args (a, c, b).
int32_t __stdcall fn_0074F680(int32_t a, int32_t c, int32_t b) {
    const int32_t quotient = a / b;
    const int32_t remainder = a % b;
    return quotient + remainder * c;
}
} // namespace lift_0074F680
