// Lifted C++ translation unit: lifted/leaf/decompiled_580000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_0058F590 {
extern float ext_0058B5A0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F590(float value) {
    return ext_0058B5A0(value);
}
} // namespace lift_0058F590

// [0x0058F570] sub_0058F570 (16 bytes)
namespace lift_0058F570 {
extern void __thiscall ext_0058B4E0(void* self, float value);

// @name sub_0058F570
// @summary Thiscall float forwarder: passes its single float argument and `this` unchanged to sub_0058B4E0.
extern void __thiscall fn_0058F570(void* self, float value) {
    ext_0058B4E0(self, value);
}
} // namespace lift_0058F570

// [0x0058F600] sub_0058F600 (16 bytes)
namespace lift_0058F600 {
// @name sub_0058F600
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058ABC0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F600(float value) {
    return ext_0058ABC0(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F600

// [0x0058F620] sub_0058F620 (16 bytes)
namespace lift_0058F620 {
// @name sub_0058F620
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058AD80(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F620(float value) {
    return ext_0058AD80(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F620

// [0x0058F550] sub_0058F550 (27 bytes)
namespace lift_0058F550 {
extern void ext_0058F4C0(void* self, int32_t flag);

// @name descriptiveName_0058F550
// @summary Calls ext_0058F4C0(self, 0) for its side effects and returns self unchanged.
// (No direct field accesses; the function only forwards its pointer argument.)
void* fn_0058F550(void* self) {
    ext_0058F4C0(self, 0);
    return self;
}
} // namespace lift_0058F550

// [0x00584A10] sub_00584A10 (34 bytes)
namespace lift_00584A10 {
extern int mem_00924FC8;
extern const char mem_00928B5D[];
extern bool ext_string_eq_cstr(const void* str, const char* s);

// @name descriptiveName: SelectStringByLiteralMatch
// @summary Returns the address of the member at +0x30 if its string equals the literal at mem_00928B5D, otherwise the address of the member at +0x14.
// @field self +0x14 unknown field_0x14
// @field self +0x30 unknown field_0x30
void* fn_00584A10(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    void* at30 = base + 0x30;
    void* at14 = base + 0x14;
    if (ext_string_eq_cstr(at30, mem_00928B5D)) {
        return at30;
    }
    return at14;
}
} // namespace lift_00584A10

// [0x00584BD0] sub_00584BD0 (34 bytes)
namespace lift_00584BD0 {
// Literal string compared against the std::string at this+0x4C (.rdata 0x928B5D).
extern const char mem_00928B5D[];
// MSVCP80 std::operator!=(const std::string&, const char*) reached through the IAT slot mem_00924FC8.
extern bool ext_00924FC8(const void* lhs, const char* rhs);

// @name Unknown::getStrPtrOrFallback
// @class Unknown
// @summary Returns a pointer to the std::string at +0x4C if it differs from a fixed literal, else a pointer to the std::string at +0x14.
// @field Unknown +0x14 std::string field_0x14 (returned address when the +0x4C string equals the literal)
// @field Unknown +0x4C std::string field_0x4C (compared against the literal; returned when it differs)
void* fn_00584BD0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* primary = base + 0x4C;
    if (ext_00924FC8(primary, mem_00928B5D)) {
        return primary;
    }
    return base + 0x14;
}
} // namespace lift_00584BD0

// [0x0058A170]
namespace lift_0058A170 {
extern uintptr_t mem_00A9F3AC;
extern void (__thiscall* mem_00924FE4)(void* self, const char* str);

// @name initDefaultString
// @summary Initializes a std::string at arg1 with the global C-string at mem_00A9F3AC and returns arg1
uint32_t __stdcall sub_0058A170(uint32_t arg1, uint32_t arg2) {
    (void)arg2;
    void* out_str = reinterpret_cast<void*>(static_cast<uintptr_t>(arg1));
    const char* src = reinterpret_cast<const char*>(mem_00A9F3AC);
    mem_00924FE4(out_str, src);
    return arg1;
}
} // namespace lift_0058A170

// [0x005817F0] sub_005817F0 (41 bytes)
namespace lift_005817F0 {
// @name sub_005817F0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00581610(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_005817F0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00581610(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_005817F0
