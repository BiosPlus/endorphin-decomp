// Lifted C++ translation unit: lifted/leaf/tiny_570000.cpp
#include "lift_compat.h"
extern "C" int mem_0095993C;
extern "C" void __fastcall ext_0065C660(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_00574CF0
// @summary Destructor tail-call: restores vtable mem_0095993C and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_00574CF0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095993C;
    ext_0065C660(self);
}

// [0x005760E0] sub_005760E0 (18 bytes)
namespace lift_005760E0 {
extern int mem_0095993C;

// @name sub_005760E0
// @summary Auto-lifted identical-shape clone of 0x0041C750 (sub_0041C750).
namespace lift_0041C750 {
extern int mem_0095993C;

// @name sub_0041C750
// @class Unknown
// @summary Constructor-style init: stores vtable mem_0092DB1C at +0x0 and the single stack argument at +0x4.
// @field Unknown +0x00 void* vptr
// @field Unknown +0x04 uint32_t field_0x04
extern void __fastcall fn_005760E0(void* self, int edx_unused, uint32_t arg) {
    lift_field<void*>(self, 0x0) = &mem_0095993C;
    lift_field<uint32_t>(self, 0x4) = arg;
}
} // namespace lift_0041C750
} // namespace lift_005760E0

// [0x0057BB20] sub_0057BB20 (24 bytes)
namespace lift_0057BB20 {
// IAT slot holding the MSVCP80 std::basic_string<char> default constructor.
extern int mem_00924FE8;

// @name Unknown::StoreValueAndInitString
// @class Unknown
// @summary Stores the DWORD argument at offset 0, then default-constructs an std::string at offset 4; returns self.
// @field Unknown +0x00 DWORD field_00
// @field Unknown +0x04 std::string field_04
void* fn_0057BB20(void* self, DWORD value) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<DWORD*>(base + 0x00) = value;

    // Indirect thiscall to the std::string default constructor with this = self + 4.
    using StringCtor = void (*)(void*);
    auto ctor = *reinterpret_cast<StringCtor*>(&mem_00924FE8);
    ctor(base + 0x04);

    return self;
}
} // namespace lift_0057BB20

// [0x00576240] sub_00576240 (30 bytes)
namespace lift_00576240 {
// @name fillBytesFromSource
// @summary Writes the byte at *src into every byte in [dst, dstEnd); does nothing if dst == dstEnd. The source pointer is not advanced.
void fn_00576240(uint8_t* dst, uint8_t* dstEnd, const uint8_t* src) {
    if (dst == dstEnd) {
        return;
    }
    // The original re-reads the source byte on every iteration.
    do {
        *dst = *src;
        ++dst;
    } while (dst != dstEnd);
}
} // namespace lift_00576240

// [0x005731D0] sub_005731D0 (31 bytes)
namespace lift_005731D0 {
// @name Unknown::GetElementCount
// @class Unknown
// @summary Returns (end - begin) / 12 for a 12-byte element array, or 0 when begin is null.
// @field Unknown +0x04 uint32_t field_0x04 (begin pointer)
// @field Unknown +0x08 uint32_t field_0x08 (end pointer)
int32_t fn_005731D0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t begin = *reinterpret_cast<const uint32_t*>(base + 0x04);
    if (begin == 0) {
        return 0;
    }
    const uint32_t end = *reinterpret_cast<const uint32_t*>(base + 0x08);
    const auto bytes = static_cast<int32_t>(end - begin);
    return bytes / 12;
}
} // namespace lift_005731D0

// [0x00571DD0] sub_00571DD0 (18 bytes)
namespace lift_00571DD0 {
// @name sub_00571DD0
// @summary Auto-lifted identical-shape clone of 0x006B6090 (Unknown::resetVtablesAndTailDestruct).
namespace lift_006B6090 {
// Known callee 0x006B5090: sub_006B5090_dtor (Destructor that resets vtables, deletes member at +0xd4, destroys member at +0x68, destroys member at +0x5c via MFC80_ord_1934, and calls base destructor MFC80_ord_760.)
extern void ext_00558920(void* self);
extern int mem_00957BBC;
extern int mem_00957BB0;

// @name Unknown::resetVtablesAndTailDestruct
// @class Unknown
// @summary Sets the primary vtable at +0x00 and the secondary vtable at +0x54, then tail-calls the base destructor sub_006B5090.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x54 void* vtable2
void fn_00571DD0(void* self) {
    lift_field<void*>(self, 0x00) = &mem_00957BBC;
    lift_field<void*>(self, 0x4) = &mem_00957BB0;
    ext_00558920(self);
}
} // namespace lift_006B6090
} // namespace lift_00571DD0

// [0x00573180] sub_00573180 (18 bytes)
namespace lift_00573180 {
// @name sub_00573180
// @summary Auto-lifted identical-shape clone of 0x006B6090 (Unknown::resetVtablesAndTailDestruct).
namespace lift_006B6090 {
// Known callee 0x006B5090: sub_006B5090_dtor (Destructor that resets vtables, deletes member at +0xd4, destroys member at +0x68, destroys member at +0x5c via MFC80_ord_1934, and calls base destructor MFC80_ord_760.)
extern void ext_00558920(void* self);
extern int mem_00957CB4;
extern int mem_00957CA8;

// @name Unknown::resetVtablesAndTailDestruct
// @class Unknown
// @summary Sets the primary vtable at +0x00 and the secondary vtable at +0x54, then tail-calls the base destructor sub_006B5090.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x54 void* vtable2
void fn_00573180(void* self) {
    lift_field<void*>(self, 0x00) = &mem_00957CB4;
    lift_field<void*>(self, 0x4) = &mem_00957CA8;
    ext_00558920(self);
}
} // namespace lift_006B6090
} // namespace lift_00573180

// [0x00579890] sub_00579890 (18 bytes)
namespace lift_00579890 {
// @name sub_00579890
// @summary Auto-lifted identical-shape clone of 0x006B6090 (Unknown::resetVtablesAndTailDestruct).
namespace lift_006B6090 {
// Known callee 0x006B5090: sub_006B5090_dtor (Destructor that resets vtables, deletes member at +0xd4, destroys member at +0x68, destroys member at +0x5c via MFC80_ord_1934, and calls base destructor MFC80_ord_760.)
extern void ext_005797D0(void* self);
extern int mem_00957EA4;
extern int mem_00957E98;

// @name Unknown::resetVtablesAndTailDestruct
// @class Unknown
// @summary Sets the primary vtable at +0x00 and the secondary vtable at +0x54, then tail-calls the base destructor sub_006B5090.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x54 void* vtable2
void fn_00579890(void* self) {
    lift_field<void*>(self, 0x00) = &mem_00957EA4;
    lift_field<void*>(self, 0x4) = &mem_00957E98;
    ext_005797D0(self);
}
} // namespace lift_006B6090
} // namespace lift_00579890
