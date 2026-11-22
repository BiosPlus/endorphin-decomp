// Lifted C++ translation unit: lifted/leaf/tiny_6D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006C9A40(void* self);
extern "C" void ext_006D2250(void);
extern "C" void __fastcall ext_006D2FB0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_006D03D0
// @summary This-adjustor thunk: adjusts `this` by +0x54 and tail-calls sub_006C9A40.
extern "C" void __fastcall fn_006D03D0(void* self) {
    ext_006C9A40(static_cast<char*>(self) + 0x54);
}
extern "C" void __fastcall ext_006D5A60(void* self);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_00755000(void* self);
extern "C" void __fastcall ext_006D5D60(void* self);
extern "C" void __fastcall ext_006D6C20(void* self);
extern "C" void __fastcall ext_006D7910(void* self);
extern "C" int32_t mem_00B5D8F8;
extern "C" int32_t mem_00B5D908;
extern "C" int mem_00B5D900;
extern "C" void __fastcall ext_006D8D60(void* self);
extern "C" void __fastcall ext_006D8E70(void* self);
extern "C" int32_t mem_00AA91C0;
extern "C" int32_t mem_00AA91C4;
extern "C" void __fastcall ext_006DC2C0(void* self);
extern "C" void __fastcall ext_006DE060(void* self);

// [0x006D2160] sub_006D2160 (16 bytes)
// @name sub_006D2160
// @summary Pure jump thunk forwarding to sub_006D2250.
extern "C" void fn_006D2160(void) {
    ext_006D2250();
}

// [0x006D2A30] sub_006D2A30 (16 bytes)
// @name sub_006D2A30
// @summary Returns `this` pointer unchanged.
extern "C" void* __fastcall fn_006D2A30(void* self) {
    return self;
}

// [0x006D2F90] sub_006D2F90 (30 bytes)
// @name sub_006D2F90
// @summary MSVC scalar deleting destructor: calls sub_006D2FB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D2F90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D2FB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D55F0] sub_006D55F0 (16 bytes)
// @name sub_006D55F0
// @summary Getter returning int32_t field at offset +0x1C.
extern "C" int32_t __fastcall fn_006D55F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1C));
}

// [0x006D5A40] sub_006D5A40 (30 bytes)
// @name sub_006D5A40
// @summary MSVC scalar deleting destructor: calls sub_006D5A60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D5A40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D5A60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D5C30] sub_006D5C30 (16 bytes)
// @name sub_006D5C30
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_006D5C30(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x4);
}

// [0x006D5C40] sub_006D5C40 (16 bytes)
// @name sub_006D5C40
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00755000.
extern "C" void __fastcall fn_006D5C40(void* self) {
    ext_00755000(static_cast<char*>(self) + 0x4);
}

// [0x006D5D40] sub_006D5D40 (30 bytes)
// @name sub_006D5D40
// @summary MSVC scalar deleting destructor: calls sub_006D5D60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D5D40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D5D60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D6C00] sub_006D6C00 (30 bytes)
// @name sub_006D6C00
// @summary MSVC scalar deleting destructor: calls sub_006D6C20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D6C00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D6C20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D78F0] sub_006D78F0 (30 bytes)
// @name sub_006D78F0
// @summary MSVC scalar deleting destructor: calls sub_006D7910 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D78F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7910(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D7A90] sub_006D7A90 (16 bytes)
// @name sub_006D7A90
// @summary Getter returning int32_t field at offset +0x28.
extern "C" int32_t __fastcall fn_006D7A90(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x28));
}

// [0x006D7E50] sub_006D7E50 (16 bytes)
// @name sub_006D7E50
// @summary Returns constant 0x4.
extern "C" int32_t __cdecl fn_006D7E50(void) {
    return 0x4;
}

// [0x006D80A0] sub_006D80A0 (16 bytes)
// @name sub_006D80A0
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_006D80A0(void) {
    return;
}

// [0x006D81F0] sub_006D81F0 (16 bytes)
// @name sub_006D81F0
// @summary Getter returning int32_t field at offset +0x1C4.
extern "C" int32_t __fastcall fn_006D81F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1C4));
}

// [0x006D8200] sub_006D8200 (16 bytes)
// @name sub_006D8200
// @summary Getter returning int32_t field at offset +0x1EC.
extern "C" int32_t __fastcall fn_006D8200(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1EC));
}

// [0x006D89C0] sub_006D89C0 (16 bytes)
// @name sub_006D89C0
// @summary Returns pointer to subobject/field at offset +0x8.
extern "C" void* __fastcall fn_006D89C0(void* self) {
    return static_cast<char*>(self) + 0x8;
}

// [0x006D8CD0] sub_006D8CD0 (6 bytes)
// @name sub_006D8CD0
// @summary Returns global int32 value from mem_00B5D8F8.
extern "C" int32_t __cdecl fn_006D8CD0(void) {
    return mem_00B5D8F8;
}

// [0x006D8CE0] sub_006D8CE0 (6 bytes)
// @name sub_006D8CE0
// @summary Returns global int32 value from mem_00B5D908.
extern "C" int32_t __cdecl fn_006D8CE0(void) {
    return mem_00B5D908;
}

// [0x006D8CF0] sub_006D8CF0 (6 bytes)
// @name sub_006D8CF0
// @summary Returns address of global mem_00B5D900.
extern "C" void* __cdecl fn_006D8CF0(void) {
    return &mem_00B5D900;
}

// [0x006D8D40] sub_006D8D40 (30 bytes)
// @name sub_006D8D40
// @summary MSVC scalar deleting destructor: calls sub_006D8D60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D8D40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D8D60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D8E50] sub_006D8E50 (30 bytes)
// @name sub_006D8E50
// @summary MSVC scalar deleting destructor: calls sub_006D8E70 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D8E50(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D8E70(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D9450] sub_006D9450 (8 bytes)
// @name sub_006D9450
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x128.
extern "C" void __fastcall fn_006D9450(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x128);
    target(self);
}

// [0x006D9460] sub_006D9460 (8 bytes)
// @name sub_006D9460
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x12C.
extern "C" void __fastcall fn_006D9460(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x12C);
    target(self);
}

// [0x006D98D0] sub_006D98D0 (16 bytes)
// @name sub_006D98D0
// @summary Returns global int32 value from mem_00AA91C0.
extern "C" int32_t __cdecl fn_006D98D0(void) {
    return mem_00AA91C0;
}

// [0x006D98E0] sub_006D98E0 (16 bytes)
// @name sub_006D98E0
// @summary Returns global int32 value from mem_00AA91C4.
extern "C" int32_t __cdecl fn_006D98E0(void) {
    return mem_00AA91C4;
}

// [0x006DC2A0] sub_006DC2A0 (30 bytes)
// @name sub_006DC2A0
// @summary MSVC scalar deleting destructor: calls sub_006DC2C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006DC2A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006DC2C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006DC550] sub_006DC550 (16 bytes)
// @name sub_006DC550
// @summary Getter returning int32_t field at offset +0xB8.
extern "C" int32_t __fastcall fn_006DC550(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xB8));
}

// [0x006DDEE0] sub_006DDEE0 (30 bytes)
// @name sub_006DDEE0
// @summary MSVC scalar deleting destructor: calls sub_006DE060 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006DDEE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006DE060(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006DECD0] sub_006DECD0 (16 bytes)
// @name sub_006DECD0
// @summary Getter returning int32_t field at offset +0x44.
extern "C" int32_t __fastcall fn_006DECD0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x44));
}

// [0x006DECE0] sub_006DECE0 (16 bytes)
// @name sub_006DECE0
// @summary Setter storing int32_t argument into field at offset +0x44.
extern "C" void __fastcall fn_006DECE0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x44) = value;
}

// [0x006DEEC0] sub_006DEEC0 (16 bytes)
// @name sub_006DEEC0
// @summary Getter returning int32_t field at offset +0x38.
extern "C" int32_t __fastcall fn_006DEEC0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x38));
}
