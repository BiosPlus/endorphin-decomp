// Lifted C++ translation unit: lifted/leaf/tiny_740000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00743AD0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006D2160(void);
extern "C" void __fastcall ext_0074B860(void* self);
extern "C" void __fastcall ext_0074F910(void* self);

// [0x00743AB0] sub_00743AB0 (30 bytes)
// @name sub_00743AB0
// @summary MSVC scalar deleting destructor: calls sub_00743AD0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00743AB0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00743AD0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0074ADF0] sub_0074ADF0 (16 bytes)
// @name sub_0074ADF0
// @summary Pure jump thunk forwarding to sub_006D2160.
extern "C" void fn_0074ADF0(void) {
    ext_006D2160();
}

// [0x0074B840] sub_0074B840 (30 bytes)
// @name sub_0074B840
// @summary MSVC scalar deleting destructor: calls sub_0074B860 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0074B840(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0074B860(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0074F8F0] sub_0074F8F0 (30 bytes)
// @name sub_0074F8F0
// @summary MSVC scalar deleting destructor: calls sub_0074F910 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0074F8F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0074F910(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
