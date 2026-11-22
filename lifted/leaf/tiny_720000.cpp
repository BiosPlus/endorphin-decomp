// Lifted C++ translation unit: lifted/leaf/tiny_720000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00722F80(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_007892B0(void);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_00755000(void* self);
extern "C" void __fastcall ext_0072B180(void* self);
extern "C" void __fastcall ext_0072B2C0(void* self);
extern "C" int mem_00996810;
extern "C" void __fastcall ext_006D7910(void* self);

extern "C" void __fastcall ext_006D7910(void* self);
// @name sub_00722F60
// @summary MSVC scalar deleting destructor: calls sub_00722F80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00722F60(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00722F80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
extern "C" void __fastcall ext_0072B330(void* self);
extern "C" int32_t mem_00B600A0;
extern "C" int32_t mem_00B600B0;
extern "C" int mem_00B600A8;
extern "C" void __fastcall ext_0072B990(void* self);
extern "C" int32_t mem_00B60288;
extern "C" int32_t mem_00B60298;
extern "C" int mem_00B60290;
extern "C" void __fastcall ext_0072CD20(void* self);
extern "C" void __fastcall ext_0072CFB0(void* self);

// [0x00723A30] sub_00723A30 (16 bytes)
// @name sub_00723A30
// @summary Pure jump thunk forwarding to sub_007892B0.
extern "C" void fn_00723A30(void) {
    ext_007892B0();
}

// [0x00728D30] sub_00728D30 (16 bytes)
// @name sub_00728D30
// @summary Returns pointer to subobject/field at offset +0xEF0.
extern "C" void* __fastcall fn_00728D30(void* self) {
    return static_cast<char*>(self) + 0xEF0;
}

// [0x00728D40] sub_00728D40 (16 bytes)
// @name sub_00728D40
// @summary This-adjustor thunk: adjusts `this` by +0xEF0 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_00728D40(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0xEF0);
}

// [0x00728D50] sub_00728D50 (16 bytes)
// @name sub_00728D50
// @summary This-adjustor thunk: adjusts `this` by +0xEF0 and tail-calls sub_00755000.
extern "C" void __fastcall fn_00728D50(void* self) {
    ext_00755000(static_cast<char*>(self) + 0xEF0);
}

// [0x0072B120] sub_0072B120 (16 bytes)
// @name sub_0072B120
// @summary Setter storing int32_t argument into field at offset +0x1C8.
extern "C" void __fastcall fn_0072B120(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x1C8) = value;
}

// [0x0072B1D0] sub_0072B1D0 (16 bytes)
// @name sub_0072B1D0
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_0072B180.
extern "C" void __fastcall fn_0072B1D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_0072B180(delegate_obj);
}

// [0x0072B2A0] sub_0072B2A0 (30 bytes)
// @name sub_0072B2A0
// @summary MSVC scalar deleting destructor: calls sub_0072B2C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072B2A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072B2C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072B2C0] sub_0072B2C0 (16 bytes)
// @name sub_0072B2C0
// @summary Destructor tail-call: restores vtable mem_00996810 and tail-calls base destructor sub_006D7910.
extern "C" void __fastcall fn_0072B2C0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00996810;
    ext_006D7910(self);
}

// [0x0072B310] sub_0072B310 (30 bytes)
// @name sub_0072B310
// @summary MSVC scalar deleting destructor: calls sub_0072B330 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072B310(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072B330(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072B7B0] sub_0072B7B0 (6 bytes)
// @name sub_0072B7B0
// @summary Returns global int32 value from mem_00B600A0.
extern "C" int32_t __cdecl fn_0072B7B0(void) {
    return mem_00B600A0;
}

// [0x0072B7C0] sub_0072B7C0 (6 bytes)
// @name sub_0072B7C0
// @summary Returns global int32 value from mem_00B600B0.
extern "C" int32_t __cdecl fn_0072B7C0(void) {
    return mem_00B600B0;
}

// [0x0072B7D0] sub_0072B7D0 (6 bytes)
// @name sub_0072B7D0
// @summary Returns address of global mem_00B600A8.
extern "C" void* __cdecl fn_0072B7D0(void) {
    return &mem_00B600A8;
}

// [0x0072B970] sub_0072B970 (30 bytes)
// @name sub_0072B970
// @summary MSVC scalar deleting destructor: calls sub_0072B990 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072B970(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072B990(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072C050] sub_0072C050 (16 bytes)
// @name sub_0072C050
// @summary Setter storing uint8_t argument into field at offset +0x14.
extern "C" void __fastcall fn_0072C050(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x14) = value;
}

// [0x0072CCD0] sub_0072CCD0 (6 bytes)
// @name sub_0072CCD0
// @summary Returns global int32 value from mem_00B60288.
extern "C" int32_t __cdecl fn_0072CCD0(void) {
    return mem_00B60288;
}

// [0x0072CCE0] sub_0072CCE0 (6 bytes)
// @name sub_0072CCE0
// @summary Returns global int32 value from mem_00B60298.
extern "C" int32_t __cdecl fn_0072CCE0(void) {
    return mem_00B60298;
}

// [0x0072CCF0] sub_0072CCF0 (6 bytes)
// @name sub_0072CCF0
// @summary Returns address of global mem_00B60290.
extern "C" void* __cdecl fn_0072CCF0(void) {
    return &mem_00B60290;
}

// [0x0072CD00] sub_0072CD00 (30 bytes)
// @name sub_0072CD00
// @summary MSVC scalar deleting destructor: calls sub_0072CD20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072CD00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072CD20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072CF90] sub_0072CF90 (30 bytes)
// @name sub_0072CF90
// @summary MSVC scalar deleting destructor: calls sub_0072CFB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072CF90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072CFB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
