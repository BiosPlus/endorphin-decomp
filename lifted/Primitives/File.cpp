// Lifted C++ translation unit: lifted/Primitives/File.cpp
#include "lift_compat.h"

// [0x0053BD10]
// @name Primitives::File::vfunc_29
// @class Primitives::File
// @summary Resets the animation state, re-initialises the sub-object at +0x3C, then zeroes ten dwords at +0x86C..+0x890.
// @field Primitives::File +0x86C uint32_t field_0x86C
// @field Primitives::File +0x870 uint32_t field_0x870
// @field Primitives::File +0x874 uint32_t field_0x874
// @field Primitives::File +0x878 uint32_t field_0x878
// @field Primitives::File +0x87C uint32_t field_0x87C
// @field Primitives::File +0x880 uint32_t field_0x880
// @field Primitives::File +0x884 uint32_t field_0x884
// @field Primitives::File +0x888 uint32_t field_0x888
// @field Primitives::File +0x88C uint32_t field_0x88C
// @field Primitives::File +0x890 uint32_t field_0x890

extern "C" void ext_0053AD10(void* self);             // Primitives::Animation::vfunc_29 (thiscall, ecx=self)
extern "C" void ext_0054FD10(void* ecx, void* arg);   // sub_0054FD10 (thiscall, ecx=self+0x3C, one stack arg)

void fn_0053BD10(void* self) {
    ext_0053AD10(self);

    auto* base = reinterpret_cast<unsigned char*>(self);
    auto* block = reinterpret_cast<uint32_t*>(base + 0x86C);
    ext_0054FD10(base + 0x3C, block);

    for (int i = 0; i < 10; ++i) {
        block[i] = 0;
    }
}
