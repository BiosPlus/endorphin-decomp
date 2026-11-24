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
#include <cstdint>

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

// [0x0072B840]
namespace lift_0072B840 {
extern uint8_t mem_00B600B8[];
void ext_006B9D70(void);

// @name tailCall_006B9D70_mem_00B600B8
// @summary Loads global 0x00B600B8 into ECX and tail-calls sub_006B9D70.
void fn_0072B840(void) {
    (void)mem_00B600B8;
    ext_006B9D70();
}
} // namespace lift_0072B840

// [0x0072B880]
namespace lift_0072B880 {
// @name initGlobalNoop_0072B880
// @summary Tail-calls ext_006D80A0 with global 0x00B60020 in ECX.

extern void __cdecl ext_006D80A0(void);

extern void __cdecl fn_0072B880(void) {
    ext_006D80A0();
}
} // namespace lift_0072B880

// [0x0072B860] sub_0072B860 (10 bytes)
namespace lift_0072B860 {
// @name sub_0072B860
// @summary Auto-lifted identical-shape clone of 0x0072B880 (initGlobalNoop_0072B880).
namespace lift_0072B880 {
// @name initGlobalNoop_0072B880
// @summary Tail-calls ext_006D80A0 with global 0x00B60020 in ECX.

extern void __cdecl ext_00714570(void);

extern void __cdecl fn_0072B860(void) {
    ext_00714570();
}
} // namespace lift_0072B880
} // namespace lift_0072B860

// [0x0072DB80]
namespace lift_0072DB80 {
// @name Unknown::hasField_AC
// @class Unknown
// @summary Returns 1 if the dword at this+0xAC is nonzero, otherwise 0.
// @field Unknown +0xAC uint32_t field_0xAC

struct Unknown {
    uint8_t pad_0000[0xAC];
    uint32_t field_0xAC;
};

uint32_t Unknown_hasField_AC(const Unknown* self) {
    return self->field_0xAC != 0 ? 1u : 0u;
}
} // namespace lift_0072DB80

// [0x0072DC50] sub_0072DC50 (15 bytes)
namespace lift_0072DC50 {
// @name VirtualCall_Slot7_Forward
// @summary Thiscall wrapper: calls vtable slot 7 (+0x1c) on self with (0, arg) and returns its result.
// @field Unknown +0x00 void** field_0x00

// Pointer to a thiscall method taking (this, int, int) and returning DWORD.
// On 32-bit MSVC, __thiscall places `this` in ECX and the rest on the stack.
typedef DWORD(__thiscall* VSlotFn)(void* self, DWORD a, DWORD b);

DWORD __thiscall fn_0072DC50(void* self, DWORD arg) {
    // [ecx] -> vtable; vtbl[7] is byte offset +0x1c on the 32-bit target.
    void** vtbl = *reinterpret_cast<void***>(self);
    VSlotFn slot = reinterpret_cast<VSlotFn>(vtbl[7]);
    // Original pushes arg, then 0, so the callee receives (self, 0, arg).
    return slot(self, 0, arg);
}
} // namespace lift_0072DC50

// [0x00726690] sub_00726690 (16 bytes)
namespace lift_00726690 {
// @name sub_00726690
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_00789BE0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_00726690(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x250);
    if (sub != 0) {
        ext_00789BE0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_00726690

// [0x0072B1C0] sub_0072B1C0 (16 bytes)
namespace lift_0072B1C0 {
// @name sub_0072B1C0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_0072B1C0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x4);
}
} // namespace lift_006BB7D0
} // namespace lift_0072B1C0

// [0x00722170] sub_00722170 (16 bytes)
namespace lift_00722170 {
// @name sub_00722170
// @summary Auto-lifted identical-shape clone of 0x006D9020 (Unknown::LoadConstantOne).
namespace lift_006D9020 {
extern double mem_00AACAE0;

// @name Unknown::LoadConstantOne
// @summary Returns the double constant 1.0 (loaded from .rdata mem_0092A270); result is the float return value.
double fn_00722170(void) {
    return mem_00AACAE0;
}
} // namespace lift_006D9020
} // namespace lift_00722170
