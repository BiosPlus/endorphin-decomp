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
