// Lifted C++ translation unit: lifted/leaf/tiny_780000.cpp
#include "lift_compat.h"
extern "C" void ext_00782D30(void);
extern "C" void __fastcall ext_00783270(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_0078CBD0
// @class UnknownObject
// @summary Increments the 32-bit counter at offset +0x1C of the object passed in ecx; no other effect.
// @field UnknownObject +0x1c int32_t field_0x1c
extern "C" void __fastcall fn_0078CBD0(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x1C);
    ++(*counter);
}
extern "C" void ext_00784720(void);
extern "C" void __fastcall ext_00785430(void* self);
extern "C" void __fastcall ext_00785890(void* self);
extern "C" int mem_00996F00;
extern "C" void __fastcall ext_007862F0(void* self);
extern "C" int mem_00996F30;
extern "C" void __fastcall ext_00787860(void* self);
extern "C" int mem_00996F6C;
extern "C" void __fastcall ext_007892B0(void* self);
extern "C" void __fastcall ext_00723A30(void* self);
extern "C" void __fastcall ext_0078BB30(void* self);
extern "C" int mem_00997028;
extern "C" void __fastcall ext_0078D850(void* self);

// [0x00782D20] sub_00782D20 (16 bytes)
// @name sub_00782D20
// @summary Pure jump thunk forwarding to sub_00782D30.
extern "C" void fn_00782D20(void) {
    ext_00782D30();
}

// [0x00783250] sub_00783250 (30 bytes)
// @name sub_00783250
// @summary MSVC scalar deleting destructor: calls sub_00783270 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00783250(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00783270(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00784640] sub_00784640 (16 bytes)
// @name sub_00784640
// @summary Pure jump thunk forwarding to sub_00784720.
extern "C" void fn_00784640(void) {
    ext_00784720();
}

// [0x00785410] sub_00785410 (30 bytes)
// @name sub_00785410
// @summary MSVC scalar deleting destructor: calls sub_00785430 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00785410(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00785430(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00785440] sub_00785440 (16 bytes)
// @name sub_00785440
// @summary Returns pointer to subobject/field at offset +0x10.
extern "C" void* __fastcall fn_00785440(void* self) {
    return static_cast<char*>(self) + 0x10;
}

// [0x00785470] sub_00785470 (16 bytes)
// @name sub_00785470
// @summary Returns pointer to subobject/field at offset +0x18.
extern "C" void* __fastcall fn_00785470(void* self) {
    return static_cast<char*>(self) + 0x18;
}

// [0x00785870] sub_00785870 (30 bytes)
// @name sub_00785870
// @summary MSVC scalar deleting destructor: calls sub_00785890 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00785870(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00785890(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00785890] sub_00785890 (16 bytes)
// @name sub_00785890
// @summary Destructor tail-call: restores vtable mem_00996F00 and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_00785890(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00996F00;
    ext_00785430(self);
}

// [0x007862D0] sub_007862D0 (30 bytes)
// @name sub_007862D0
// @summary MSVC scalar deleting destructor: calls sub_007862F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007862D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007862F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007862F0] sub_007862F0 (16 bytes)
// @name sub_007862F0
// @summary Destructor tail-call: restores vtable mem_00996F30 and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_007862F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00996F30;
    ext_00785430(self);
}

// [0x00787000] sub_00787000 (16 bytes)
// @name sub_00787000
// @summary Setter storing uint8_t argument into field at offset +0x80.
extern "C" void __fastcall fn_00787000(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x80) = value;
}

// [0x00787840] sub_00787840 (30 bytes)
// @name sub_00787840
// @summary MSVC scalar deleting destructor: calls sub_00787860 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00787840(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00787860(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00787860] sub_00787860 (16 bytes)
// @name sub_00787860
// @summary Destructor tail-call: restores vtable mem_00996F6C and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_00787860(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00996F6C;
    ext_00785430(self);
}

// [0x00789290] sub_00789290 (30 bytes)
// @name sub_00789290
// @summary MSVC scalar deleting destructor: calls sub_007892B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00789290(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007892B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00789880] sub_00789880 (30 bytes)
// @name sub_00789880
// @summary MSVC scalar deleting destructor: calls sub_00723A30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00789880(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00723A30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00789BA0] sub_00789BA0 (16 bytes)
// @name sub_00789BA0
// @summary Setter storing int32_t argument into field at offset +0x0.
extern "C" void __fastcall fn_00789BA0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x0) = value;
}

// [0x0078BB10] sub_0078BB10 (30 bytes)
// @name sub_0078BB10
// @summary MSVC scalar deleting destructor: calls sub_0078BB30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0078BB10(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0078BB30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0078BB30] sub_0078BB30 (16 bytes)
// @name sub_0078BB30
// @summary Destructor tail-call: restores vtable mem_00997028 and tail-calls base destructor sub_007892B0.
extern "C" void __fastcall fn_0078BB30(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00997028;
    ext_007892B0(self);
}

// [0x0078D830] sub_0078D830 (30 bytes)
// @name sub_0078D830
// @summary MSVC scalar deleting destructor: calls sub_0078D850 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0078D830(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0078D850(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007835F0]
namespace lift_007835F0 {
// @name sub_007835F0
// @summary Reads a byte at offset +0x4 from the pointer stored at this+0x4
// @field unknown +0x04 uint32_t field_0x04


uint32_t mem_read32(uint32_t addr);
uint8_t mem_read8(uint32_t addr);

uint8_t __fastcall sub_007835F0(uint32_t ecx) {
    uint32_t eax = mem_read32(ecx + 0x4);
    return mem_read8(eax + 0x4);
}
} // namespace lift_007835F0

// [0x0078D1E0]
namespace lift_0078D1E0 {
extern void __stdcall LeaveCriticalSection(void* lpCriticalSection);

// @name CriticalSectionLock::unlock
// @class CriticalSectionLock
// @summary Leaves the critical section pointed to by the first member field.
// @field CriticalSectionLock +0x00 void* criticalSection
void __thiscall sub_0078D1E0(void* self) {
    void* criticalSection = *reinterpret_cast<void**>(self);
    LeaveCriticalSection(criticalSection);
}
} // namespace lift_0078D1E0

// [0x00780290] sub_00780290 (10 bytes)
namespace lift_00780290 {
// @name sub_00780290
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00780250(void);

extern uint8_t mem_00B608A0[];

extern void fn_00780290(void) {
    (void)mem_00B608A0;
    ext_00780250();
}
} // namespace lift_007AE0A0
} // namespace lift_00780290

// [0x00784510] sub_00784510 (13 bytes)
namespace lift_00784510 {
// @name sub_00784510
// @summary Auto-lifted identical-shape clone of 0x00705250 (ClearGlobalDwordPair).
namespace lift_00705250 {
extern int mem_00B608F4;
extern int mem_00B608F0;

// @name ClearGlobalDwordPair
// @summary Zeroes two global DWORD variables at 0x00B5EB44 and 0x00B5EB40.
void fn_00784510(void* self) {
    (void)self;
    mem_00B608F4 = 0;
    mem_00B608F0 = 0;
}
} // namespace lift_00705250
} // namespace lift_00784510

// [0x00784530] sub_00784530 (13 bytes)
namespace lift_00784530 {
// @name sub_00784530
// @summary Auto-lifted identical-shape clone of 0x00705250 (ClearGlobalDwordPair).
namespace lift_00705250 {
extern int mem_00B608FC;
extern int mem_00B608F8;

// @name ClearGlobalDwordPair
// @summary Zeroes two global DWORD variables at 0x00B5EB44 and 0x00B5EB40.
void fn_00784530(void* self) {
    (void)self;
    mem_00B608FC = 0;
    mem_00B608F8 = 0;
}
} // namespace lift_00705250
} // namespace lift_00784530

// [0x00784550] sub_00784550 (13 bytes)
namespace lift_00784550 {
// @name sub_00784550
// @summary Auto-lifted identical-shape clone of 0x00705250 (ClearGlobalDwordPair).
namespace lift_00705250 {
extern int mem_00B60904;
extern int mem_00B60900;

// @name ClearGlobalDwordPair
// @summary Zeroes two global DWORD variables at 0x00B5EB44 and 0x00B5EB40.
void fn_00784550(void* self) {
    (void)self;
    mem_00B60904 = 0;
    mem_00B60900 = 0;
}
} // namespace lift_00705250
} // namespace lift_00784550

// [0x0078C220] sub_0078C220 (15 bytes)
namespace lift_0078C220 {
// @name Unknown::GetScaledDeltaFromField4
// @class Unknown
// @summary Returns (arg - this->field_0x04) >> 4 as an unsigned value (thiscall, callee pops 4).
// @field Unknown +0x04 uint32_t field_0x04
uint32_t fn_0078C220(void* self, uint32_t arg) {
    const uint32_t base = lift_field<uint32_t>(self, 0x04);
    return (arg - base) >> 4;
}
} // namespace lift_0078C220

// [0x0078C230] sub_0078C230 (15 bytes)
namespace lift_0078C230 {
// @name Unknown::GetScaledOffsetPlusField4
// @class Unknown
// @summary Returns this->field_0x04 + (arg << 4) (thiscall, callee pops 4).
// @field Unknown +0x04 uint32_t field_0x04
uint32_t fn_0078C230(void* self, uint32_t arg) {
    const uint32_t base = lift_field<uint32_t>(self, 0x04);
    return (arg << 4) + base;
}
} // namespace lift_0078C230

// [0x0078C3A0]
namespace lift_0078C3A0 {
// @name Unknown::sub_0078C3A0
// @summary Returns the dword at +0x28 if the dword at +0x20 is nonzero, otherwise the dword at +0x04.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x20 DWORD field_0x20
// @field Unknown +0x28 DWORD field_0x28
DWORD sub_0078C3A0(const void* ecx) {
    if (lift_field<DWORD>(ecx, 0x20) != 0) {
        return lift_field<DWORD>(ecx, 0x28);
    }
    return lift_field<DWORD>(ecx, 0x04);
}
} // namespace lift_0078C3A0

// [0x00785430] sub_00785430 (16 bytes)
namespace lift_00785430 {
// @name sub_00785430
// @summary Auto-lifted identical-shape clone of 0x006F8AC0 (Unknown::InitZeroAndDelegate).
namespace lift_006F8AC0 {
// @name Unknown::InitZeroAndDelegate
// @class Unknown
// @summary Zeroes the first dword of this and tail-calls fn_006B9960 on this + 4.
// @field Unknown +0x00 uint32_t field_0x00

extern void* ext_007641C0(void* ecx);

void* fn_00785430(void* ecx) {
    *static_cast<uint32_t*>(ecx) = 10055388;
    return ext_007641C0(static_cast<uint8_t*>(ecx) + 32);
}
} // namespace lift_006F8AC0
} // namespace lift_00785430

// [0x00783790] sub_00783790 (16 bytes)
namespace lift_00783790 {
// @name Unknown::zeroFourDwords
// @class Unknown
// @summary Zeroes four consecutive uint32_t fields at offsets +0x00..+0x0C and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0c
extern void* __fastcall fn_00783790(void* self, int edx_unused) {
    (void)edx_unused;
    lift_field<uint32_t>(self, 0x00) = 0u;
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x08) = 0u;
    lift_field<uint32_t>(self, 0x0C) = 0u;
    return self;
}
} // namespace lift_00783790

// [0x00788D00] sub_00788D00 (16 bytes)
namespace lift_00788D00 {
// @name Unknown::resetCounters
// @class Unknown
// @summary Zeroes a dword at offset 0x00 and a byte flag at offset 0x654 of the object.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x654 uint8_t field_0x654
void fn_00788D00(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0u;
    base[0x654] = 0u;
}
} // namespace lift_00788D00

// [0x0078CB70]
namespace lift_0078CB70 {
// @name getIndexedDword
// @summary Returns the dword at index arg1 of the array whose pointer is stored at this+0x10 (thiscall, one stack arg, ret 4).
// @field <unknown> +0x10 uint32_t* field_0x10 (array base pointer)

uint32_t getIndexedDword(void* ecx, uint32_t index) {
    uint32_t* base = *reinterpret_cast<uint32_t**>(static_cast<uint8_t*>(ecx) + 0x10);
    return base[index];
}
} // namespace lift_0078CB70

// [0x0078CB80]
namespace lift_0078CB80 {
// @name zeroTwoDwordsAt18
// @class Unknown
// @summary Zeroes the dwords at this+0x18 and this+0x1c.
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c uint32_t field_0x1c

void zeroTwoDwordsAt18(uint8_t* this_) {
    *reinterpret_cast<uint32_t*>(this_ + 0x18) = 0;
    *reinterpret_cast<uint32_t*>(this_ + 0x1c) = 0;
}
} // namespace lift_0078CB80

// [0x00783630] sub_00783630 (21 bytes)
namespace lift_00783630 {
extern int mem_00925194;
extern void __cdecl ext_0062D47C(void* stream);

// @name ClearInnerStreamErrorIfFlagged
// @class UnknownClass
// @summary If the inner object's byte flag at +0x4 is nonzero, call the imported clearerr on its stream pointer at +0x0.
// @field UnknownClass +0x04 void* field_0x04
// @field UnknownInner +0x00 void* field_0x00
// @field UnknownInner +0x04 uint8_t field_0x04
void __fastcall fn_00783630(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    uint8_t flag = lift_field<uint8_t>(inner, 0x04);
    if (flag != 0) {
        void* stream = lift_field<void*>(inner, 0x00);
        ext_0062D47C(stream);
    }
}
} // namespace lift_00783630

// [0x00783610] sub_00783610 (22 bytes)
namespace lift_00783610 {
// @name descriptiveName: ReturnFlag20IfSubFlag4Set
// @class Unknown
// @summary Reads a pointer at this+0x04; if that object's byte at +0x04 is nonzero, returns (object->vtbl-ish dword at +0x00)->dword+0x0C & 0x20, otherwise returns 0.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x0C DWORD field_0x0C
DWORD fn_00783610(void* self) {
    void* sub = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(sub, 0x04) == 0) {
        return 0;
    }
    void* inner = lift_field<void*>(sub, 0x00);
    DWORD flags = lift_field<DWORD>(inner, 0x0C);
    return flags & 0x20;
}
} // namespace lift_00783610

// [0x00783650]
namespace lift_00783650 {
uint32_t mem_u32(uintptr_t);
uint8_t mem_u8(uintptr_t);

// @name sub_00783650
// @summary Checks whether bit 4 of an inner object's flags at +0xc is set when the wrapper at +0x4 is active.
// @field Self +0x04 uint32_t field_0x04

bool __thiscall sub_00783650(uintptr_t ecx) {
    uint32_t eax = mem_u32(ecx + 0x4);
    uint8_t cl = mem_u8(eax + 0x4);
    if (cl == 0) {
        return false;
    }
    uint32_t inner = mem_u32(eax);
    uint32_t flags = mem_u32(inner + 0xc);
    return ((flags >> 4) & 0x1) != 0;
}
} // namespace lift_00783650

// [0x00784790]
namespace lift_00784790 {
// @name compareUint32Ptr
// @summary Three-way unsigned 32-bit integer comparator for pointer arguments (returns -1, 0, or 1).


int32_t __cdecl sub_00784790(const uint32_t* a, const uint32_t* b) {
    uint32_t va = *a;
    uint32_t vb = *b;
    if (va < vb) {
        return -1;
    }
    return (va > vb) ? 1 : 0;
}
} // namespace lift_00784790

// [0x0078D1C0] sub_0078D1C0 (29 bytes)
namespace lift_0078D1C0 {
// @name makeLowBitMask
// @summary Returns a 32-bit value with bits 0..n-1 set (n = stack argument); x86 shift count is masked to 5 bits, so bit index wraps modulo 32.
// @field none (no struct fields accessed)
__cdecl uint32_t fn_0078D1C0(int32_t n) {
    uint32_t result = 0;
    for (int32_t i = 0; i < n; ++i) {
        result |= uint32_t(1) << (uint32_t(i) & 31u);
    }
    return result;
}
} // namespace lift_0078D1C0

// [0x00788D10]
namespace lift_00788D10 {
extern void ext_00788E20(void* self);

// @name FileFindCursor::closeFindIfOpen
// @class FileFindCursor
// @summary Tail-calls closeFind when the find handle at +0x00 is nonzero; otherwise returns.
// @field FileFindCursor +0x00 uint32_t hFind
void fn_00788D10(void* self) {
    auto* cursor = static_cast<uint32_t*>(self);
    if (cursor[0] == 0) {
        return;
    }
    ext_00788E20(self);
}
} // namespace lift_00788D10
