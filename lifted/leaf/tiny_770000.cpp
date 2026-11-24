// Lifted C++ translation unit: lifted/leaf/tiny_770000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00771C10(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9D70(void);
extern "C" void __fastcall ext_007720F0(void* self);
extern "C" void __fastcall ext_00774B30(void* self);
extern "C" void __fastcall ext_0077FA20(void* self);
extern "C" int mem_00996D48;

// [0x00771BF0] sub_00771BF0 (30 bytes)
// @name sub_00771BF0
// @summary MSVC scalar deleting destructor: calls sub_00771C10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00771BF0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00771C10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00772040] sub_00772040 (16 bytes)
// @name sub_00772040
// @summary Pure jump thunk forwarding to sub_006B9D70.
extern "C" void fn_00772040(void) {
    ext_006B9D70();
}

// [0x007720D0] sub_007720D0 (30 bytes)
// @name sub_007720D0
// @summary MSVC scalar deleting destructor: calls sub_007720F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007720D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007720F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00774B10] sub_00774B10 (30 bytes)
// @name sub_00774B10
// @summary MSVC scalar deleting destructor: calls sub_00774B30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00774B10(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00774B30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0077FA00] sub_0077FA00 (30 bytes)
// @name sub_0077FA00
// @summary MSVC scalar deleting destructor: calls sub_0077FA20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0077FA00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0077FA20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0077FA20] sub_0077FA20 (16 bytes)
// @name sub_0077FA20
// @summary Stores address of mem_00996D48 into field at offset +0x0.
extern "C" void __fastcall fn_0077FA20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00996D48;
}

// [0x0077FE40] sub_0077FE40 (16 bytes)
// @name sub_0077FE40
// @summary Returns constant 0xB1.
extern "C" int32_t __cdecl fn_0077FE40(void) {
    return 0xB1;
}

// [0x0077FAB0] sub_0077FAB0 (16 bytes)
namespace lift_0077FAB0 {
// @name Unknown::zeroFourDwords
// @class Unknown
// @summary Zeroes four consecutive 32-bit fields (offsets 0x00, 0x04, 0x08, 0x0C) of the object and returns it.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void* fn_0077FAB0(void* self) {
    auto* p = static_cast<uint32_t*>(self);
    p[0] = 0; // +0x00
    p[2] = 0; // +0x08
    p[1] = 0; // +0x04
    p[3] = 0; // +0x0C
    return self;
}
} // namespace lift_0077FAB0
