// Lifted C++ translation unit: lifted/leaf/tiny_700000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00B5E5C0;
extern "C" int32_t mem_00B5E5D0;
extern "C" int mem_00B5E5C8;
extern "C" void __fastcall ext_007005B0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_007004F0
// @summary Returns global int32 value from mem_00B5E5C0.
extern "C" int32_t __cdecl fn_007004F0(void) {
    return mem_00B5E5C0;
}
extern "C" void __fastcall ext_00700840(void* self);
extern "C" int32_t mem_00B5E768;
extern "C" int mem_00B5E760;
extern "C" void __fastcall ext_00701C10(void* self);
extern "C" void ext_00711220(void);
extern "C" void __fastcall ext_00702130(void* self);
extern "C" int32_t mem_00B5E75C;
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" int32_t mem_00B5E9B8;
extern "C" int32_t mem_00B5E9B0;
extern "C" int mem_00B5E9A8;
extern "C" int32_t mem_00AABD2C;
extern "C" int32_t mem_00AABD28;
extern "C" void __fastcall ext_00704780(void* self);
extern "C" void __fastcall ext_00704D00(void* self);
extern "C" int32_t mem_00B5EB78;
extern "C" int32_t mem_00B5EB58;
extern "C" int mem_00B5EB50;
extern "C" void __fastcall ext_00705450(void* self);
extern "C" int32_t mem_00B5EBA0;
extern "C" int32_t mem_00B5EBB0;
extern "C" int mem_00B5EBA8;
extern "C" void __fastcall ext_0070ADF0(void* self);
extern "C" void __fastcall ext_0070B040(void* self);
extern "C" void ext_0070BE80(void);
extern "C" void ext_0070BF00(void);
extern "C" void __fastcall ext_0070CD30(void* self);
extern "C" void __fastcall ext_006D2250(void* self);
extern "C" void __fastcall ext_00714580(void* self);
extern "C" void __fastcall ext_0070E710(void* self);
extern "C" int32_t mem_00B5EEC8;
extern "C" int mem_00B5EEC0;
extern "C" void __fastcall ext_0072B7E0(void* self);
extern "C" int mem_00AA87B0;
extern "C" void __fastcall ext_0070FE20(void* self);
extern "C" int mem_00AA8788;

// [0x00700500] sub_00700500 (6 bytes)
// @name sub_00700500
// @summary Returns global int32 value from mem_00B5E5D0.
extern "C" int32_t __cdecl fn_00700500(void) {
    return mem_00B5E5D0;
}

// [0x00700510] sub_00700510 (6 bytes)
// @name sub_00700510
// @summary Returns address of global mem_00B5E5C8.
extern "C" void* __cdecl fn_00700510(void) {
    return &mem_00B5E5C8;
}

// [0x00700590] sub_00700590 (30 bytes)
// @name sub_00700590
// @summary MSVC scalar deleting destructor: calls sub_007005B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00700590(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007005B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00700820] sub_00700820 (30 bytes)
// @name sub_00700820
// @summary MSVC scalar deleting destructor: calls sub_00700840 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00700820(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00700840(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007019D0] sub_007019D0 (6 bytes)
// @name sub_007019D0
// @summary Returns global int32 value from mem_00B5E768.
extern "C" int32_t __cdecl fn_007019D0(void) {
    return mem_00B5E768;
}

// [0x007019E0] sub_007019E0 (6 bytes)
// @name sub_007019E0
// @summary Returns address of global mem_00B5E760.
extern "C" void* __cdecl fn_007019E0(void) {
    return &mem_00B5E760;
}

// [0x00701BE0] sub_00701BE0 (30 bytes)
// @name sub_00701BE0
// @summary MSVC scalar deleting destructor: calls sub_00701C10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00701BE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00701C10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00701C00] sub_00701C00 (16 bytes)
// @name sub_00701C00
// @summary Pure jump thunk forwarding to sub_00711220.
extern "C" void fn_00701C00(void) {
    ext_00711220();
}

// [0x00702110] sub_00702110 (30 bytes)
// @name sub_00702110
// @summary MSVC scalar deleting destructor: calls sub_00702130 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00702110(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00702130(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007021F0] sub_007021F0 (16 bytes)
// @name sub_007021F0
// @summary Returns global int32 value from mem_00B5E75C.
extern "C" int32_t __cdecl fn_007021F0(void) {
    return mem_00B5E75C;
}

// [0x00702200] sub_00702200 (16 bytes)
// @name sub_00702200
// @summary This-adjustor thunk: adjusts `this` by +0x114 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_00702200(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x114);
}

// [0x00702210] sub_00702210 (16 bytes)
// @name sub_00702210
// @summary This-adjustor thunk: adjusts `this` by +0x160 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_00702210(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x160);
}

// [0x00702410] sub_00702410 (16 bytes)
// @name sub_00702410
// @summary Setter storing int32_t argument into field at offset +0x108.
extern "C" void __fastcall fn_00702410(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x108) = value;
}

// [0x00702420] sub_00702420 (16 bytes)
// @name sub_00702420
// @summary Getter returning int32_t field at offset +0x108.
extern "C" int32_t __fastcall fn_00702420(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x108));
}

// [0x00702460] sub_00702460 (16 bytes)
// @name sub_00702460
// @summary Getter returning int32_t field at offset +0xF8.
extern "C" int32_t __fastcall fn_00702460(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xF8));
}

// [0x00702470] sub_00702470 (16 bytes)
// @name sub_00702470
// @summary Getter returning int32_t field at offset +0xFC.
extern "C" int32_t __fastcall fn_00702470(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xFC));
}

// [0x00702480] sub_00702480 (16 bytes)
// @name sub_00702480
// @summary Getter returning int32_t field at offset +0x100.
extern "C" int32_t __fastcall fn_00702480(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x100));
}

// [0x00702490] sub_00702490 (16 bytes)
// @name sub_00702490
// @summary Getter returning int32_t field at offset +0x104.
extern "C" int32_t __fastcall fn_00702490(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x104));
}

// [0x007025B0] sub_007025B0 (16 bytes)
// @name sub_007025B0
// @summary Getter returning int32_t field at offset +0x10C.
extern "C" int32_t __fastcall fn_007025B0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x10C));
}

// [0x00703B50] sub_00703B50 (16 bytes)
// @name sub_00703B50
// @summary Returns pointer to subobject/field at offset +0x1AC.
extern "C" void* __fastcall fn_00703B50(void* self) {
    return static_cast<char*>(self) + 0x1AC;
}

// [0x00703BA0] sub_00703BA0 (16 bytes)
// @name sub_00703BA0
// @summary Returns pointer to subobject/field at offset +0x258.
extern "C" void* __fastcall fn_00703BA0(void* self) {
    return static_cast<char*>(self) + 0x258;
}

// [0x00703BD0] sub_00703BD0 (16 bytes)
// @name sub_00703BD0
// @summary Returns pointer to subobject/field at offset +0x248.
extern "C" void* __fastcall fn_00703BD0(void* self) {
    return static_cast<char*>(self) + 0x248;
}

// [0x007045E0] sub_007045E0 (6 bytes)
// @name sub_007045E0
// @summary Returns global int32 value from mem_00B5E9B8.
extern "C" int32_t __cdecl fn_007045E0(void) {
    return mem_00B5E9B8;
}

// [0x007045F0] sub_007045F0 (6 bytes)
// @name sub_007045F0
// @summary Returns global int32 value from mem_00B5E9B0.
extern "C" int32_t __cdecl fn_007045F0(void) {
    return mem_00B5E9B0;
}

// [0x00704600] sub_00704600 (6 bytes)
// @name sub_00704600
// @summary Returns address of global mem_00B5E9A8.
extern "C" void* __cdecl fn_00704600(void) {
    return &mem_00B5E9A8;
}

// [0x00704610] sub_00704610 (6 bytes)
// @name sub_00704610
// @summary Returns global int32 value from mem_00AABD2C.
extern "C" int32_t __cdecl fn_00704610(void) {
    return mem_00AABD2C;
}

// [0x00704620] sub_00704620 (6 bytes)
// @name sub_00704620
// @summary Returns global int32 value from mem_00AABD28.
extern "C" int32_t __cdecl fn_00704620(void) {
    return mem_00AABD28;
}

// [0x00704760] sub_00704760 (30 bytes)
// @name sub_00704760
// @summary MSVC scalar deleting destructor: calls sub_00704780 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00704760(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00704780(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00704CE0] sub_00704CE0 (30 bytes)
// @name sub_00704CE0
// @summary MSVC scalar deleting destructor: calls sub_00704D00 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00704CE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00704D00(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00705400] sub_00705400 (6 bytes)
// @name sub_00705400
// @summary Returns global int32 value from mem_00B5EB78.
extern "C" int32_t __cdecl fn_00705400(void) {
    return mem_00B5EB78;
}

// [0x00705410] sub_00705410 (6 bytes)
// @name sub_00705410
// @summary Returns global int32 value from mem_00B5EB58.
extern "C" int32_t __cdecl fn_00705410(void) {
    return mem_00B5EB58;
}

// [0x00705420] sub_00705420 (6 bytes)
// @name sub_00705420
// @summary Returns address of global mem_00B5EB50.
extern "C" void* __cdecl fn_00705420(void) {
    return &mem_00B5EB50;
}

// [0x00705430] sub_00705430 (30 bytes)
// @name sub_00705430
// @summary MSVC scalar deleting destructor: calls sub_00705450 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00705430(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00705450(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007057C0] sub_007057C0 (16 bytes)
// @name sub_007057C0
// @summary Returns constant 0.
extern "C" int32_t __stdcall fn_007057C0(int a1, int a2, int a3) {
    return 0;
}

// [0x0070AB10] sub_0070AB10 (6 bytes)
// @name sub_0070AB10
// @summary Returns global int32 value from mem_00B5EBA0.
extern "C" int32_t __cdecl fn_0070AB10(void) {
    return mem_00B5EBA0;
}

// [0x0070AB20] sub_0070AB20 (6 bytes)
// @name sub_0070AB20
// @summary Returns global int32 value from mem_00B5EBB0.
extern "C" int32_t __cdecl fn_0070AB20(void) {
    return mem_00B5EBB0;
}

// [0x0070AB30] sub_0070AB30 (6 bytes)
// @name sub_0070AB30
// @summary Returns address of global mem_00B5EBA8.
extern "C" void* __cdecl fn_0070AB30(void) {
    return &mem_00B5EBA8;
}

// [0x0070ADD0] sub_0070ADD0 (30 bytes)
// @name sub_0070ADD0
// @summary MSVC scalar deleting destructor: calls sub_0070ADF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070ADD0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070ADF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070AF50] sub_0070AF50 (16 bytes)
// @name sub_0070AF50
// @summary Getter returning int32_t field at offset +0x4F8.
extern "C" int32_t __fastcall fn_0070AF50(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x4F8));
}

// [0x0070B020] sub_0070B020 (30 bytes)
// @name sub_0070B020
// @summary MSVC scalar deleting destructor: calls sub_0070B040 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070B020(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070B040(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070BFF0] sub_0070BFF0 (16 bytes)
// @name sub_0070BFF0
// @summary Setter storing uint8_t argument into field at offset +0x198.
extern "C" void __fastcall fn_0070BFF0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x198) = value;
}

// [0x0070C000] sub_0070C000 (16 bytes)
// @name sub_0070C000
// @summary Getter returning uint8_t field at offset +0x198.
extern "C" uint8_t __fastcall fn_0070C000(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0x198));
}

// [0x0070C370] sub_0070C370 (16 bytes)
// @name sub_0070C370
// @summary Pure jump thunk forwarding to sub_0070BE80.
extern "C" void fn_0070C370(void) {
    ext_0070BE80();
}

// [0x0070C3A0] sub_0070C3A0 (16 bytes)
// @name sub_0070C3A0
// @summary Pure jump thunk forwarding to sub_0070BF00.
extern "C" void fn_0070C3A0(void) {
    ext_0070BF00();
}

// [0x0070CD10] sub_0070CD10 (30 bytes)
// @name sub_0070CD10
// @summary MSVC scalar deleting destructor: calls sub_0070CD30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070CD10(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070CD30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070CEF0] sub_0070CEF0 (16 bytes)
// @name sub_0070CEF0
// @summary This-adjustor thunk: adjusts `this` by +0x40 and tail-calls sub_006D2250.
extern "C" void __fastcall fn_0070CEF0(void* self) {
    ext_006D2250(static_cast<char*>(self) + 0x40);
}

// [0x0070CF00] sub_0070CF00 (16 bytes)
// @name sub_0070CF00
// @summary Getter returning int32_t field at offset +0x58.
extern "C" int32_t __fastcall fn_0070CF00(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x58));
}

// [0x0070E380] sub_0070E380 (16 bytes)
// @name sub_0070E380
// @summary This-adjustor thunk: adjusts `this` by +0xD0 and tail-calls sub_00714580.
extern "C" void __fastcall fn_0070E380(void* self) {
    ext_00714580(static_cast<char*>(self) + 0xD0);
}

// [0x0070E6F0] sub_0070E6F0 (30 bytes)
// @name sub_0070E6F0
// @summary MSVC scalar deleting destructor: calls sub_0070E710 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070E6F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070E710(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070EAF0] sub_0070EAF0 (16 bytes)
// @name sub_0070EAF0
// @summary Getter returning int32_t field at offset +0x5C.
extern "C" int32_t __fastcall fn_0070EAF0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x5C));
}

// [0x0070EC20] sub_0070EC20 (16 bytes)
// @name sub_0070EC20
// @summary Setter storing int32_t argument into field at offset +0x58.
extern "C" void __fastcall fn_0070EC20(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x58) = value;
}

// [0x0070F2D0] sub_0070F2D0 (16 bytes)
// @name sub_0070F2D0
// @summary Getter returning int32_t field at offset +0x2D0.
extern "C" int32_t __fastcall fn_0070F2D0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x2D0));
}

// [0x0070F330] sub_0070F330 (16 bytes)
// @name sub_0070F330
// @summary Getter returning int32_t field at offset +0x2E0.
extern "C" int32_t __fastcall fn_0070F330(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x2E0));
}

// [0x0070F340] sub_0070F340 (16 bytes)
// @name sub_0070F340
// @summary Getter returning int32_t field at offset +0x2F8.
extern "C" int32_t __fastcall fn_0070F340(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x2F8));
}

// [0x0070FB60] sub_0070FB60 (6 bytes)
// @name sub_0070FB60
// @summary Returns global int32 value from mem_00B5EEC8.
extern "C" int32_t __cdecl fn_0070FB60(void) {
    return mem_00B5EEC8;
}

// [0x0070FB70] sub_0070FB70 (6 bytes)
// @name sub_0070FB70
// @summary Returns address of global mem_00B5EEC0.
extern "C" void* __cdecl fn_0070FB70(void) {
    return &mem_00B5EEC0;
}

// [0x0070FB80] sub_0070FB80 (30 bytes)
// @name sub_0070FB80
// @summary MSVC scalar deleting destructor: calls sub_0072B7E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070FB80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072B7E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070FC20] sub_0070FC20 (6 bytes)
// @name sub_0070FC20
// @summary Returns address of global mem_00AA87B0.
extern "C" void* __cdecl fn_0070FC20(void) {
    return &mem_00AA87B0;
}

// [0x0070FE00] sub_0070FE00 (30 bytes)
// @name sub_0070FE00
// @summary MSVC scalar deleting destructor: calls sub_0070FE20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070FE00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070FE20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0070FEB0] sub_0070FEB0 (6 bytes)
// @name sub_0070FEB0
// @summary Returns address of global mem_00AA8788.
extern "C" void* __cdecl fn_0070FEB0(void) {
    return &mem_00AA8788;
}

// [0x00704630] sub_00704630 (23 bytes)
// @name sub_00704630
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00704630(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x160) = a0;
    lift_field<uint32_t>(self, 0x164) = a1;
}

// [0x007046C0] sub_007046C0 (23 bytes)
// @name sub_007046C0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_007046C0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x518) = a0;
    lift_field<uint32_t>(self, 0x51C) = a1;
}

// [0x0070AD40] sub_0070AD40 (23 bytes)
// @name sub_0070AD40
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0070AD40(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x3E0) = a0;
    lift_field<uint32_t>(self, 0x3E4) = a1;
}

// [0x0070AD70] sub_0070AD70 (23 bytes)
// @name sub_0070AD70
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0070AD70(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x468) = a0;
    lift_field<uint32_t>(self, 0x46C) = a1;
}

// [0x0070ADA0] sub_0070ADA0 (23 bytes)
// @name sub_0070ADA0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0070ADA0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x4F0) = a0;
    lift_field<uint32_t>(self, 0x4F4) = a1;
}

// [0x00700980] sub_00700980 (16 bytes)
namespace lift_00700980 {
// @name sub_00700980
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_00700980(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x160) = value;
}
} // namespace lift_004F9840
} // namespace lift_00700980

// [0x00705250] sub_00705250 (13 bytes)
namespace lift_00705250 {
extern int mem_00B5EB44;
extern int mem_00B5EB40;

// @name ClearGlobalDwordPair
// @summary Zeroes two global DWORD variables at 0x00B5EB44 and 0x00B5EB40.
void fn_00705250(void* self) {
    (void)self;
    mem_00B5EB44 = 0;
    mem_00B5EB40 = 0;
}
} // namespace lift_00705250

// [0x00705270] sub_00705270 (13 bytes)
namespace lift_00705270 {
// @name sub_00705270
// @summary Auto-lifted identical-shape clone of 0x00705250 (ClearGlobalDwordPair).
namespace lift_00705250 {
extern int mem_00B5EB80;
extern int mem_00B5EB84;

// @name ClearGlobalDwordPair
// @summary Zeroes two global DWORD variables at 0x00B5EB44 and 0x00B5EB40.
void fn_00705270(void* self) {
    (void)self;
    mem_00B5EB80 = 0;
    mem_00B5EB84 = 0;
}
} // namespace lift_00705250
} // namespace lift_00705270

// [0x00704FD0] sub_00704FD0 (17 bytes)
namespace lift_00704FD0 {
// @name sub_00704FD0
// @summary Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_006E7460(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_00704FD0(void* self) {
    void* inner = lift_field<void*>(self, 0xF0);
    return ext_006E7460(static_cast<uint8_t*>(inner) + 0x820);
}
} // namespace lift_00515840
} // namespace lift_00704FD0

// [0x007057E0] sub_007057E0 (15 bytes)
namespace lift_007057E0 {
// @name Unknown::sub_007057E0
// @class Unknown
// @summary Returns true if any bit of the argument mask is set in the object's field at +0x78.
// @field Unknown +0x78 uint32_t field_0x78
bool fn_007057E0(void* self, uint32_t mask) {
    const uint32_t flags = lift_field<uint32_t>(self, 0x78);
    return (mask & flags) != 0;
}
} // namespace lift_007057E0
