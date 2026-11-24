// Lifted C++ translation unit: lifted/leaf/decompiled_7A0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007AD590(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>

// [0x007AD5C0] sub_007AD5C0 (32 bytes)
// @name sub_007AD5C0
// @summary MSVC scalar deleting destructor: calls sub_007AD590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AD5C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AD590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AEF70]
namespace lift_007AEF70 {
// @name sub_007AEF70
// @summary Thiscall-style thunk: passes the address of its stack argument block (esp+4) in ecx to fn_006B9D70, then returns 0 (al = 0) and pops 0x54 bytes of arguments.
// @class none
//
// Notes:
//   lea ecx, [esp+4]   ; ecx = address of first stack argument
//   call sub_006B9D70  ; forwards to sub_006B9970
//   xor al, al         ; return value = 0
//   ret 0x54           ; callee cleans 0x54 bytes of stack args

extern void fn_006B9D70(void);

extern unsigned char fn_007AEF70(void) {
    fn_006B9D70();
    return 0;
}
} // namespace lift_007AEF70

// [0x007AA8F0]
namespace lift_007AA8F0 {
// @name Unknown::SetIndexedDwordIfInRange
// @class Unknown
// @summary Stores a dword into this->field_0xF0[index] when 0 < index < 0x12; otherwise does nothing. Callee pops 8 bytes (__thiscall-style, stdcall-like ret 8).
// @field Unknown +0xF0 int32_t field_0xF0 (indexed array base; element stride 4, indices 1..17)

struct Unknown {
    uint8_t pad_0000[0xF0];
    int32_t field_0xF0[18];
};

void Unknown_SetIndexedDwordIfInRange(Unknown* self, int32_t index, int32_t value) {
    if (index > 0 && index < 0x12) {
        self->field_0xF0[index] = value;
    }
}
} // namespace lift_007AA8F0

// [0x007AA910]
namespace lift_007AA910 {
// @name GetIndexedFieldF0
// @summary Returns the 32-bit slot at this+0xF0 + 4*index for index in [1, 17]; returns 0 otherwise.
// @field <unknown> +0xF0 uint32_t field_0xF0 (indexed array base, slots 0x00..0x11 at +0xF0..+0x128; index 0 never read)


uint32_t sub_007AA910(const uint8_t* self, int32_t index) {
    if (index > 0 && index < 0x12) {
        uint32_t value;
        __builtin_memcpy(&value, self + 0xF0 + static_cast<uintptr_t>(index) * 4, sizeof(value));
        return value;
    }
    return 0;
}
} // namespace lift_007AA910
