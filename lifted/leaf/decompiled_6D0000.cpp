// Lifted C++ translation unit: lifted/leaf/decompiled_6D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006D7B50(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006D7DB0(void* self);

// [0x006D7B30] sub_006D7B30 (32 bytes)
// @name sub_006D7B30
// @summary MSVC scalar deleting destructor: calls sub_006D7B50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7B30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7B50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D7D90] sub_006D7D90 (32 bytes)
// @name sub_006D7D90
// @summary MSVC scalar deleting destructor: calls sub_006D7DB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7D90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7DB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D2CA0] sub_006D2CA0 (12 bytes)
namespace lift_006D2CA0 {
extern uint32_t ext_006A6C87(uint32_t arg);
extern int mem_006D2CB0;

// @name forwardMem006D2CB0_006D2CA0
// @summary Pushes the address of mem_006D2CB0 as a single cdecl argument, calls sub_006A6C87, and returns its result unchanged.
uint32_t fn_006D2CA0() {
    const uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_006D2CB0));
    return ext_006A6C87(arg);
}
} // namespace lift_006D2CA0
