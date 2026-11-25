// Lifted C++ translation unit: lifted/leaf/tiny_7A0000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00B61230;
extern "C" int32_t mem_00B61228;
extern "C" int mem_00B61220;
extern "C" void __fastcall ext_007AA880(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_007AA830
// @summary Returns global int32 value from mem_00B61230.
extern "C" int32_t __cdecl fn_007AA830(void) {
    return mem_00B61230;
}
extern "C" void __fastcall ext_007AB370(void* self);
extern "C" int mem_00998398;
extern "C" void __fastcall ext_00785430(void* self);

extern "C" void __fastcall ext_00785430(void* self);
// @name sub_007AA840
// @summary Returns global int32 value from mem_00B61228.
extern "C" int32_t __cdecl fn_007AA840(void) {
    return mem_00B61228;
}
extern "C" void __fastcall ext_007ABC10(void* self);
extern "C" int mem_009983BC;
extern "C" void __fastcall ext_007ABCA0(void* self);
extern "C" int32_t mem_00B61248;
extern "C" int32_t mem_00B61240;
extern "C" int mem_00B61238;
extern "C" void __fastcall ext_007AC030(void* self);
extern "C" int mem_009983DC;
extern "C" int32_t mem_00B61260;
extern "C" int32_t mem_00B61258;
extern "C" int mem_00B61250;
extern "C" void __fastcall ext_007AC2B0(void* self);
extern "C" void __fastcall ext_007AE1F0(void* self);
extern "C" int mem_00998A0C;
extern "C" void __fastcall ext_007AEBE0(void* self);

// [0x007AA850] sub_007AA850 (6 bytes)
// @name sub_007AA850
// @summary Returns address of global mem_00B61220.
extern "C" void* __cdecl fn_007AA850(void) {
    return &mem_00B61220;
}

// [0x007AA860] sub_007AA860 (30 bytes)
// @name sub_007AA860
// @summary MSVC scalar deleting destructor: calls sub_007AA880 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AA860(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AA880(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AB350] sub_007AB350 (30 bytes)
// @name sub_007AB350
// @summary MSVC scalar deleting destructor: calls sub_007AB370 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AB350(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AB370(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AB370] sub_007AB370 (11 bytes)
// @name sub_007AB370
// @summary Destructor tail-call: restores vtable mem_00998398 and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_007AB370(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00998398;
    ext_00785430(self);
}

// [0x007ABBF0] sub_007ABBF0 (30 bytes)
// @name sub_007ABBF0
// @summary MSVC scalar deleting destructor: calls sub_007ABC10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007ABBF0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007ABC10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007ABC10] sub_007ABC10 (16 bytes)
// @name sub_007ABC10
// @summary Stores address of mem_009983BC into field at offset +0x0.
extern "C" void __fastcall fn_007ABC10(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009983BC;
}

// [0x007ABC80] sub_007ABC80 (30 bytes)
// @name sub_007ABC80
// @summary MSVC scalar deleting destructor: calls sub_007ABCA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007ABC80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007ABCA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007ABFE0] sub_007ABFE0 (6 bytes)
// @name sub_007ABFE0
// @summary Returns global int32 value from mem_00B61248.
extern "C" int32_t __cdecl fn_007ABFE0(void) {
    return mem_00B61248;
}

// [0x007ABFF0] sub_007ABFF0 (6 bytes)
// @name sub_007ABFF0
// @summary Returns global int32 value from mem_00B61240.
extern "C" int32_t __cdecl fn_007ABFF0(void) {
    return mem_00B61240;
}

// [0x007AC000] sub_007AC000 (6 bytes)
// @name sub_007AC000
// @summary Returns address of global mem_00B61238.
extern "C" void* __cdecl fn_007AC000(void) {
    return &mem_00B61238;
}

// [0x007AC010] sub_007AC010 (30 bytes)
// @name sub_007AC010
// @summary MSVC scalar deleting destructor: calls sub_007AC030 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AC010(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AC030(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AC030] sub_007AC030 (16 bytes)
// @name sub_007AC030
// @summary Destructor tail-call: restores vtable mem_009983DC and tail-calls base destructor sub_007AA880.
extern "C" void __fastcall fn_007AC030(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009983DC;
    ext_007AA880(self);
}

// [0x007AC260] sub_007AC260 (6 bytes)
// @name sub_007AC260
// @summary Returns global int32 value from mem_00B61260.
extern "C" int32_t __cdecl fn_007AC260(void) {
    return mem_00B61260;
}

// [0x007AC270] sub_007AC270 (6 bytes)
// @name sub_007AC270
// @summary Returns global int32 value from mem_00B61258.
extern "C" int32_t __cdecl fn_007AC270(void) {
    return mem_00B61258;
}

// [0x007AC280] sub_007AC280 (6 bytes)
// @name sub_007AC280
// @summary Returns address of global mem_00B61250.
extern "C" void* __cdecl fn_007AC280(void) {
    return &mem_00B61250;
}

// [0x007AC290] sub_007AC290 (30 bytes)
// @name sub_007AC290
// @summary MSVC scalar deleting destructor: calls sub_007AC2B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AC290(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AC2B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AE1D0] sub_007AE1D0 (30 bytes)
// @name sub_007AE1D0
// @summary MSVC scalar deleting destructor: calls sub_007AE1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AE1D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AE1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007AE1F0] sub_007AE1F0 (11 bytes)
// @name sub_007AE1F0
// @summary Destructor tail-call: restores vtable mem_00998A0C and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_007AE1F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00998A0C;
    ext_00785430(self);
}

// [0x007AEBC0] sub_007AEBC0 (30 bytes)
// @name sub_007AEBC0
// @summary MSVC scalar deleting destructor: calls sub_007AEBE0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AEBC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AEBE0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007ABBE0]
namespace lift_007ABBE0 {
extern uint32_t mem_009983BC;

// @name sub_007ABBE0
// @summary Sets vtable pointer mem_009983BC at offset 0 of this and returns this
// @field Object +0x00 uint32_t vptr
void* __thiscall sub_007ABBE0(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_009983BC));
    return self;
}
} // namespace lift_007ABBE0

// [0x007AE0A0]
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D70(void);

extern uint8_t mem_00B616B8[];

extern void fn_007AE0A0(void) {
    (void)mem_00B616B8;
    ext_006B9D70();
}
} // namespace lift_007AE0A0

// [0x007AE0E0]
namespace lift_007AE0E0 {
extern uint8_t mem_00B61708[];
extern void __thiscall ext_006B9D70(void* self);

// @name tailCallWithGlobal_007AE0E0
// @summary Sets this pointer to global 0x00B61708 and tail-calls sub_006B9D70.
extern void fn_007AE0E0(void) {
    ext_006B9D70(mem_00B61708);
}
} // namespace lift_007AE0E0

// [0x007AE120]
namespace lift_007AE120 {
extern void* mem_00B61758;
extern void ext_006B9D70(void);

// @name tailCallWithGlobal_007AE120
// @summary Sets ECX to global mem_00B61758 and tail-calls sub_006B9D70
extern void fn_007AE120(void) {
    (void)mem_00B61758;
    ext_006B9D70();
}
} // namespace lift_007AE120

// [0x007AE080] sub_007AE080 (10 bytes)
namespace lift_007AE080 {
// @name sub_007AE080
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D10(void);

extern uint8_t mem_00B616B8[];

extern void fn_007AE080(void) {
    (void)mem_00B616B8;
    ext_006B9D10();
}
} // namespace lift_007AE0A0
} // namespace lift_007AE080

// [0x007AE0C0] sub_007AE0C0 (10 bytes)
namespace lift_007AE0C0 {
// @name sub_007AE0C0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D10(void);

extern uint8_t mem_00B61708[];

extern void fn_007AE0C0(void) {
    (void)mem_00B61708;
    ext_006B9D10();
}
} // namespace lift_007AE0A0
} // namespace lift_007AE0C0

// [0x007AE100] sub_007AE100 (10 bytes)
namespace lift_007AE100 {
// @name sub_007AE100
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D10(void);

extern uint8_t mem_00B61758[];

extern void fn_007AE100(void) {
    (void)mem_00B61758;
    ext_006B9D10();
}
} // namespace lift_007AE0A0
} // namespace lift_007AE100

// [0x007AEEB0] sub_007AEEB0 (14 bytes)
namespace lift_007AEEB0 {
// @name Unknown::getField60IfField58
// @class Unknown
// @summary Returns the DWORD at +0x60 when the DWORD at +0x58 is nonzero; otherwise returns 0.
// @field Unknown +0x58 DWORD field_58
// @field Unknown +0x60 DWORD field_60
DWORD fn_007AEEB0(void* self) {
    if (lift_field<DWORD>(self, 0x58) != 0) {
        return lift_field<DWORD>(self, 0x60);
    }
    return 0;
}
} // namespace lift_007AEEB0

// [0x007AEC60]
namespace lift_007AEC60 {
// @name sub_007AEC60
// @class (unknown)
// @summary Zeroes three dword fields (+0x58, +0x5c, +0x60) of the object passed in ECX.
// @field (unknown) +0x58 uint32_t field_0x58
// @field (unknown) +0x5c uint32_t field_0x5c
// @field (unknown) +0x60 uint32_t field_0x60

void sub_007AEC60(uint8_t* self) {
    auto* fields = reinterpret_cast<uint32_t*>(self);
    fields[0x58 / 4] = 0;
    fields[0x5c / 4] = 0;
    fields[0x60 / 4] = 0;
}
} // namespace lift_007AEC60

// [0x007A9BD0]
namespace lift_007A9BD0 {
// @name SetField06FromGlobal
// @summary Copies the low byte of global mem_00998070 into byte +0x06 of the object passed as the single stack argument.
// @field UnknownClass +0x06 uint8_t field_0x06

extern uint32_t mem_00998070;

void sub_007A9BD0(uint8_t* a1) {
    a1[0x06] = static_cast<uint8_t>(mem_00998070 & 0xFFu);
}
} // namespace lift_007A9BD0

// [0x007AEEF0] sub_007AEEF0 (22 bytes)
namespace lift_007AEEF0 {
// @name IsUnlimitedOrFieldAtLeastLimit
// @class (none)
// @summary Returns 1 if field +0x58 is zero; otherwise returns 1 when field +0x60 >= field +0x5c (unsigned), else 0.
// @field (unknown) +0x58 DWORD field_0x58
// @field (unknown) +0x5c DWORD field_0x5c
// @field (unknown) +0x60 DWORD field_0x60
int fn_007AEEF0(void* self) {
    if (lift_field<DWORD>(self, 0x58) == 0) {
        return 1;
    }
    DWORD value = lift_field<DWORD>(self, 0x60);
    DWORD limit = lift_field<DWORD>(self, 0x5c);
    return value >= limit ? 1 : 0;
}
} // namespace lift_007AEEF0

// [0x007AEEC0] sub_007AEEC0 (24 bytes)
namespace lift_007AEEC0 {
// @name SetValueIfWithinMax
// @class (none; free function taking `this` in ecx, one stack argument)
// @summary If the enable flag at +0x58 is nonzero and the argument is <= the limit at +0x5C (signed), store the argument at +0x60.
// @field <ClassName> +0x58 int32_t enableFlag
// @field <ClassName> +0x5C int32_t maxLimit
// @field <ClassName> +0x60 int32_t value
void fn_007AEEC0(void* self, int32_t value) {
    if (lift_field<int32_t>(self, 0x58) == 0) {
        return;
    }
    if (value > lift_field<int32_t>(self, 0x5C)) {
        return;
    }
    lift_field<int32_t>(self, 0x60) = value;
}
} // namespace lift_007AEEC0

// [0x007AF620] sub_007AF620 (30 bytes)
namespace lift_007AF620 {
extern uint32_t mem_00AAFC28;  // .data u32 0x0079B070: cdecl callback pointer

// @name ForwardToCallbackWithArgPtr
// @class <ClassName> (optional)
// @summary If the global callback pointer is set, call it cdecl with (a1, a2, &a3) and return.
void fn_007AF620(uint32_t a1, uint32_t a2, uint32_t a3) {
    using Callback = void (__cdecl*)(uint32_t, uint32_t, uint32_t*);
    const uint32_t target = mem_00AAFC28;
    if (target != 0) {
        auto fn = reinterpret_cast<Callback>(static_cast<uintptr_t>(target));
        fn(a1, a2, &a3);
    }
}
} // namespace lift_007AF620

// [0x007AEEE0]
namespace lift_007AEEE0 {
// @name descriptiveName: IsNonZeroAt58
// @class Unknown
// @summary Returns 1 if the dword at this+0x58 is nonzero, otherwise 0.
// @field Unknown +0x58 uint32_t field_0x58

uint32_t sub_007AEEE0(const void* self) {
    const uint32_t value = lift_field<uint32_t>(self, 0x58);
    return value != 0 ? 1u : 0u;
}
} // namespace lift_007AEEE0
