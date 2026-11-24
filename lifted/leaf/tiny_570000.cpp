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
