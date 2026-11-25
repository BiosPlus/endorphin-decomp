// Lifted C++ translation unit: lifted/leaf/decompiled_620000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <new>
#include <string>

#include <string>
namespace lift_00629DF0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
// Returns float: the tail-called sub_00642650 leaves its result in st0, which the caller stores via fstp.
extern float __fastcall ext_00594010(void* self);

// @name ComputeFloatIntoField30
// @class <unknown> (owning class not yet identified)
// @summary Fetches an int32 handle from ext_00594000, resolves it through ext_00594010, and stores the float result at this+0x30.
// @field <unknown> +0x30 float field_0x30
extern void __fastcall fn_00629DF0(void* self) {
    const int32_t handle = ext_00594000();
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle)));
    const float value = ext_00594010(target);
    lift_field<float>(self, 0x30) = value;
}
} // namespace lift_00629DF0
#include <cstring>
#include <cstddef>

// [0x006271D0] sub_006271D0 (25 bytes)
namespace lift_006271D0 {
extern void __thiscall ext_00647E00(void* self, uint32_t arg);

// @name descriptiveFunctionName (owner class not identified)
// @summary Forwards a pointer to this+0x30 to ext_00647E00, using this->field_0x28->field_0x158->field_0xac as the receiver.
// @field field_0x28 void* field_0x28
// @field field_0x158 void* field_0x158
// @field field_0xac void* field_0xac
void fn_006271D0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* p28 = *reinterpret_cast<void**>(base + 0x28);
    void* p158 = *reinterpret_cast<void**>(static_cast<uint8_t*>(p28) + 0x158);
    void* receiver = *reinterpret_cast<void**>(static_cast<uint8_t*>(p158) + 0xac);

    uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x30));
    ext_00647E00(receiver, arg);
}
} // namespace lift_006271D0

// [0x00627280] sub_00627280 (25 bytes)
namespace lift_00627280 {
extern void __thiscall ext_00647E20(void* self, uint32_t arg);

// @name Unknown::forwardToNestedObject30
// @class Unknown
// @summary Walks self->field_0x28 -> ->field_0x158 -> ->field_0xAC to get a `this` pointer, then calls sub_00647E20 on it with the address self+0x30 as its single stack argument.
// @field Unknown +0x28 void* field_0x28
void __thiscall fn_00627280(void* self) {
    // mov ecx, [ecx+0x28]      ; sub = self->field_0x28
    uint8_t* sub = lift_field<uint8_t*>(self, 0x28);
    // mov edx, [ecx+0x158]     ; inner = sub->field_0x158
    uint8_t* inner = lift_field<uint8_t*>(sub, 0x158);
    // mov ecx, [edx+0xac]      ; target = inner->field_0xAC (becomes `this` for the call)
    void* target = lift_field<void*>(inner, 0xAC);
    // lea eax, [self+0x30]     ; argument = address of self+0x30
    uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x30));
    // push eax / call sub_00647E20
    ext_00647E20(target, arg);
}
} // namespace lift_00627280

// [0x00629F10] sub_00629F10 (26 bytes)
namespace lift_00629F10 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
// Returns a float on the x87 stack (consumed by fsub in the original).
extern float ext_00594010(void* self);

// @name StoreDeltaToField38
// @class Unknown
// @summary Stores (ext_00594010(self-from-ext_00594000) - arg) into this->+0x38 as float.
// @field Unknown +0x38 float field_0x38
void fn_00629F10(void* self, float arg) {
    const auto ctx = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000()));
    const float value = ext_00594010(reinterpret_cast<void*>(ctx));
    lift_field<float>(self, 0x38) = value - arg;
}
} // namespace lift_00629F10

// [0x00621720] sub_00621720 (27 bytes)
namespace lift_00621720 {
// @name sub_00621720
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00621680(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00621720(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00621680(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00621720

// [0x0062C0E0] sub_0062C0E0 (27 bytes)
namespace lift_0062C0E0 {
// @name sub_0062C0E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0062C010(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0062C0E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0062C010(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0062C0E0

// [0x00627510]
namespace lift_00627510 {
extern void __fastcall ext_00647F20(void* self, void* edx_unused, void* arg);

// @name forwardSubobjectWithOffset54
// @summary Forwards pointer at +0x28 -> +0x158 -> +0xAC with &self[0x54] to sub_00647F20.
// @field Self +0x28 void* field_0x28
// @field Self +0x54 uint8_t field_0x54
extern void __fastcall fn_00627510(void* self) {
    void* arg = static_cast<uint8_t*>(self) + 0x54;
    void* p1 = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x28);
    void* p2 = *reinterpret_cast<void**>(static_cast<uint8_t*>(p1) + 0x158);
    void* target = *reinterpret_cast<void**>(static_cast<uint8_t*>(p2) + 0xAC);
    ext_00647F20(target, nullptr, arg);
}
} // namespace lift_00627510

// [0x006294F0] sub_006294F0 (32 bytes)
namespace lift_006294F0 {
// @name ReadSubobjectVirtualFloatInto0x30
// @class self
// @summary Calls virtual slot 8 (+0x20) on the object chained from self+0x28/+0x20c/+0x234 with arg 0, storing the float result at self+0x30.
// @field self +0x28 void* field_0x28
// @field self +0x30 float field_0x30

namespace {
// Portable stand-in for the original thiscall virtual dispatch (this in ecx, one int argument).
using VirtualFloatFn = float (*)(void* self, int32_t arg);
}

void fn_006294F0(void* self) {
    // self -> subobject at +0x28 -> +0x20c -> +0x234 (object used as `this`)
    void* sub = lift_field<void*>(self, 0x28);
    void* mid = lift_field<void*>(sub, 0x20c);
    void* obj = lift_field<void*>(mid, 0x234);

    // Vtable slot at +0x20 is index 8 (4-byte pointers).
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<VirtualFloatFn>(vtbl[0x20 / sizeof(void*)]);

    float result = fn(obj, 0);
    lift_field<float>(self, 0x30) = result;
}
} // namespace lift_006294F0

// [0x00629E80] sub_00629E80 (36 bytes)
namespace lift_00629E80 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
// Caller consumes the float result from x87 st0, so it is declared float-returning.
extern float __fastcall ext_00594010(void* self);

// @name SetValueAndDeltaFromBase
// @class Unknown
// @summary Stores the float from ext_00594010 at +0x28 and writes (value - float at +0x30) to +0x2C.
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30
void fn_00629E80(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    // ecx = sub_00594000(); then ecx passed as `this` to sub_00594010.
    const int32_t handle = ext_00594000();
    void* subobject = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle)));
    const float value = ext_00594010(subobject);

    float base30;
    std::memcpy(&base30, base + 0x30, sizeof(float));
    const float delta = value - base30;

    std::memcpy(base + 0x28, &value, sizeof(float));
    std::memcpy(base + 0x2C, &delta, sizeof(float));
}
} // namespace lift_00629E80

// [0x00629EE0] sub_00629EE0 (36 bytes)
namespace lift_00629EE0 {
// @name ComputeDeltaFromSource
// @summary Stores a float from a source provider at +0x30 and writes (value - +0x38) to +0x34.
// @field <unknown> +0x30 float field_0x30
// @field <unknown> +0x34 float field_0x34
// @field <unknown> +0x38 float field_0x38

extern int32_t __cdecl ext_00594000(void);
extern float __fastcall ext_00594010(void* self);

void fn_00629EE0(void* self) {
    const int32_t src = ext_00594000();
    void* const provider = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(src)));
    const float value = ext_00594010(provider);

    lift_field<float>(self, 0x30) = value;
    lift_field<float>(self, 0x34) = value - lift_field<float>(self, 0x38);
}
} // namespace lift_00629EE0

// [0x00627450]
namespace lift_00627450 {
// @name copyIndirectMatrix64
// @summary Copies 64 bytes (16 dwords) from an indirectly referenced object into self+0x60.
// @field Object +0x28 uint32_t field_0x28
// @field Object +0x60 uint32_t[16] field_0x60


extern uint32_t mem_read32(uintptr_t addr);
extern void mem_write32(uintptr_t addr, uint32_t val);
extern uint32_t ext_00647F00(void* self);

void fn_00627450(void* self) {
    uint32_t a = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x28u);
    uint32_t b = mem_read32(static_cast<uintptr_t>(a) + 0x158u);
    uint32_t c = mem_read32(static_cast<uintptr_t>(b) + 0xACu);
    uint32_t src = ext_00647F00(reinterpret_cast<void*>(static_cast<uintptr_t>(c)));
    uintptr_t dst = reinterpret_cast<uintptr_t>(self) + 0x60u;
    for (uint32_t i = 0; i < 0x10u; ++i) {
        uint32_t val = mem_read32(static_cast<uintptr_t>(src) + i * 4u);
        mem_write32(dst + i * 4u, val);
    }
}
} // namespace lift_00627450

// [0x00624EE0] sub_00624EE0 (42 bytes)
namespace lift_00624EE0 {
// @name CompareDwordPairIsGreater
// @summary Returns 1 if the second 64-bit (hi:lo dword pair) operand is strictly greater than the first, else 0 (__stdcall, 2 args, ret 8).
// Reads: arg1[0], arg1[1], arg2[0], arg2[1] as unsigned dwords; arg1[0] is compared first, then arg1[1].
int fn_00624EE0(const void* a, const void* b) {
    const uint32_t a0 = lift_field<uint32_t>(a, 0);
    const uint32_t b0 = lift_field<uint32_t>(b, 0);
    if (b0 > a0) {
        return 1;
    }
    if (b0 < a0) {
        return 0;
    }
    const uint32_t a1 = lift_field<uint32_t>(a, 4);
    const uint32_t b1 = lift_field<uint32_t>(b, 4);
    return (a1 < b1) ? 1 : 0;
}
} // namespace lift_00624EE0

// [0x006217A0] sub_006217A0 (41 bytes)
namespace lift_006217A0 {
// @name sub_006217A0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_006211F0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_006217A0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_006211F0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_006217A0

// [0x00623D80] sub_00623D80 (41 bytes)
namespace lift_00623D80 {
// @name sub_00623D80
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00622D80(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00623D80(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00622D80(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00623D80

// [0x0062C100] sub_0062C100 (41 bytes)
namespace lift_0062C100 {
// @name sub_0062C100
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_005558E0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0062C100(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_005558E0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0062C100

// [0x0062C130] sub_0062C130 (41 bytes)
namespace lift_0062C130 {
// @name sub_0062C130
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0062BD30(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0062C130(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0062BD30(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0062C130

// [0x00622290]
namespace lift_00622290 {
extern uint32_t mem_00976FC4;

// @name sub_00622290
// @summary Constructor-like initialization setting vtable to 0x00976FC4 and zeroing 10 float fields (0x04..0x28).
// @field +0x00 uint32_t vftable
// @field +0x04 float field_0x04
// @field +0x08 float field_0x08
// @field +0x0c float field_0x0c
// @field +0x10 float field_0x10
// @field +0x14 float field_0x14
// @field +0x18 float field_0x18
// @field +0x1c float field_0x1c
// @field +0x20 float field_0x20
// @field +0x24 float field_0x24
// @field +0x28 float field_0x28
void* __thiscall sub_00622290(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(p + 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00976FC4));
    for (uint32_t offset = 0x04; offset <= 0x28; offset += 4) {
        *reinterpret_cast<float*>(p + offset) = 0.0f;
    }
    return self;
}
} // namespace lift_00622290

// [0x006233B0] sub_006233B0 (54 bytes)
namespace lift_006233B0 {
// @name sub_006233B0
// @summary Auto-lifted identical-shape clone of 0x0051AF30 (ComputeStride20Address).
namespace lift_0051AF30 {
extern void ext_00622D30(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t self, uint32_t a3Copy, uint32_t flagArg);

// @name ComputeStride20Address
// @summary Forwards three stack args plus self to ext_0051AA60, then returns a1 + 20 * a2 (a 20-byte-stride element address).
// (no direct field accesses on self: ecx is only forwarded to the callee, so no @field lines)
uint32_t fn_006233B0(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3) {
    // The original stores a bool local into a stack slot that still holds the
    // pushed ecx; only the low byte is overwritten, so the pushed dword is
    // self with its low byte cleared.
    const uint32_t flagArg = self & 0xFFFFFF00u;

    ext_00622D30(a1, a2, a3, self, a3, flagArg);

    // lea ecx,[esi+4*esi] => 5*a2 ; lea eax,[edi+4*ecx] => a1 + 20*a2
    return a1 + 20u * a2;
}
} // namespace lift_0051AF30
} // namespace lift_006233B0

// [0x00626770]
namespace lift_00626770 {
// Import thunk at 0x006294AC: forwards to MSVCP80 string-equality helper (std::operator==(basic_string const&, char const*)).
extern uint8_t __cdecl ext_006294AC(const void* lhs, const char* rhs);
// Table of 9 const char* string-literal pointers.
extern uint32_t mem_00A97F70[9];

// @name FindStringTableIndex
// @summary Scans a 9-entry string-pointer table and returns the index of the first entry equal to the argument (0 if none match).
int32_t fn_00626770(const void* arg) {
    for (int32_t i = 0; i < 9; ++i) {
        const char* entry = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A97F70[i]));
        if (ext_006294AC(arg, entry) != 0) {
            return i;
        }
    }
    return 0;
}
} // namespace lift_00626770

// [0x0062B1F0] sub_0062B1F0 (54 bytes)
namespace lift_0062B1F0 {
// @name sub_0062B1F0
// @summary Auto-lifted identical-shape clone of 0x005FF040 (ResourceHolder::ReleaseAndReset).
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_005FF040(void* self);

extern void __fastcall fn_0062B1F0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x978F64;

    const uint32_t handle = lift_field<uint32_t>(base, 0x34);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x34) = 0;
    lift_field<uint32_t>(base, 0x38) = 0;
    lift_field<uint32_t>(base, 0x3C) = 0;

    ext_005FF040(self);
}
} // namespace lift_005FF040
} // namespace lift_0062B1F0

// [0x0062CCF0] sub_0062CCF0 (54 bytes)
namespace lift_0062CCF0 {
// @name sub_0062CCF0
// @summary Auto-lifted identical-shape clone of 0x005FF040 (ResourceHolder::ReleaseAndReset).
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_005FF040(void* self);

extern void __fastcall fn_0062CCF0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x9791A4;

    const uint32_t handle = lift_field<uint32_t>(base, 0x2C);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x2C) = 0;
    lift_field<uint32_t>(base, 0x30) = 0;
    lift_field<uint32_t>(base, 0x34) = 0;

    ext_005FF040(self);
}
} // namespace lift_005FF040
} // namespace lift_0062CCF0

// [0x00625910] sub_00625910 (55 bytes)
namespace lift_00625910 {
// @name sub_00625910
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_00625910() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x1C);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x18) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x19) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_00625910

// [0x0062C0A0] sub_0062C0A0 (55 bytes)
namespace lift_0062C0A0 {
// @name sub_0062C0A0
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_0062BF80(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_0062C0A0(uint32_t dst, uint32_t count, uint32_t src) {
    ext_0062BF80(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_0062C0A0

// [0x006203B0] sub_006203B0 (56 bytes)
namespace lift_006203B0 {
extern uint8_t mem_00976C34[];

// @name Unknown::Unknown_006203B0
// @class Unknown
// @summary Constructor-style init: sets vtable to mem_00976C34 and zeroes three dwords at +0x08..+0x10 (SEH guard frame omitted).
// @field Unknown +0x00 void* vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_006203B0(void* self) {
    // The original MSVC EH frame (fs:[0] push/restore, handler 0x8A6088)
    // guards no user code here, so only the field writes are lifted.
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<void*>(self, 0x00) = static_cast<void*>(mem_00976C34);
}
} // namespace lift_006203B0

// [0x0062A590]
namespace lift_0062A590 {
// @name getAverageValue
// @summary Computes the vtable[0x44] float value divided by the 4-byte element count at +0x34..+0x38.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 uint32_t field_0x38


float __thiscall sub_0062A590(uint32_t self) {
    uint32_t begin = *(const uint32_t*)(self + 0x34);
    uint32_t count = 0;
    if (begin != 0) {
        uint32_t end = *(const uint32_t*)(self + 0x38);
        count = (uint32_t)(((int32_t)(end - begin)) >> 2);
    }

    uintptr_t vtable = *(const uintptr_t*)self;
    auto vfn = *(float (__thiscall**)(uint32_t))(vtable + 0x44);
    float total = vfn(self);

    return (float)((double)total / (double)count);
}
} // namespace lift_0062A590

// [0x00624F10]
namespace lift_00624F10 {
extern uint32_t mem_read32(uintptr_t addr);
extern uint8_t mem_read8(uintptr_t addr);

// @name RBTree::lowerBoundU32Pair
// @class RBTree
// @summary Finds the lower_bound node in an MSVC RB-tree keyed by a pair of uint32_t values.
// @field RBTree +0x04 void* head
// @field RBTreeNode +0x00 void* left
// @field RBTreeNode +0x04 void* parent
// @field RBTreeNode +0x08 void* right
// @field RBTreeNode +0x0C uint32_t key0
// @field RBTreeNode +0x10 uint32_t key1
// @field RBTreeNode +0x19 uint8_t isNil

uint32_t __thiscall sub_00624F10(void* self, const uint32_t* key) {
    uint32_t head = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x04);
    uint32_t node = mem_read32(head + 0x04);
    uint32_t result = head;

    if (mem_read8(node + 0x19) != 0) {
        return result;
    }

    uint32_t key0 = key[0];
    uint32_t key1 = key[1];

    do {
        uint32_t node_key0 = mem_read32(node + 0x0C);
        if (key0 > node_key0) {
            node = mem_read32(node + 0x08);
        } else if (key0 < node_key0 || mem_read32(node + 0x10) >= key1) {
            result = node;
            node = mem_read32(node + 0x00);
        } else {
            node = mem_read32(node + 0x08);
        }
    } while (mem_read8(node + 0x19) == 0);

    return result;
}
} // namespace lift_00624F10

// [0x00621B30] sub_00621B30 (59 bytes)
namespace lift_00621B30 {
// @name ResetFieldsEx4_1C
// @summary Zeroes the 32-bit fields at +0x04, +0x08, +0x0C, +0x14, +0x18 and +0x1C of self (thiscall; the MSVC SEH frame setup/teardown is dropped in the portable form).
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
void fn_00621B30(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
}
} // namespace lift_00621B30

// [0x00622C00] sub_00622C00 (62 bytes)
namespace lift_00622C00 {
// @name FillRangeWithElement
// @summary Copies one 20-byte element from src into every 20-byte slot from dst up to end (exclusive); no-op when dst == end.
void fn_00622C00(uint8_t* dst, const uint8_t* end, const uint8_t* src) {
    constexpr size_t kElemSize = 0x14;
    if (dst == end) {
        return;
    }
    do {
        std::memcpy(dst, src, kElemSize);
        dst += kElemSize;
    } while (dst != end);
}
} // namespace lift_00622C00

// [0x0062B8B0] sub_0062B8B0 (64 bytes)
namespace lift_0062B8B0 {
// @name CopyStringPairRange
// @summary Copy-assigns each 0x38-byte record in [first, last) to consecutive records starting at dest (both std::string members per record); returns one past the last destination record.
// @field StringPairRecord +0x00 std::string field_0x00
// @field StringPairRecord +0x1C std::string field_0x1C
extern char* __cdecl fn_0062B8B0(char* first, char* last, char* dest) {
    constexpr std::ptrdiff_t kRecordSize = 0x38;
    constexpr std::ptrdiff_t kSecondStringOffset = 0x1C;

    char* src = first;
    char* out = dest;
    while (src != last) {
        lift_field<std::string>(out, 0) = lift_field<std::string>(src, 0);
        lift_field<std::string>(out, kSecondStringOffset) =
            lift_field<std::string>(src, kSecondStringOffset);
        src += kRecordSize;
        out += kRecordSize;
    }
    return out;
}
} // namespace lift_0062B8B0

// [0x0062CD30]
namespace lift_0062CD30 {
// @name sub_0062CD30_ctor
// @summary Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.
// @field Object +0x00 uint32_t vtable
// @field Object +0x08 uint32_t field_0x08
// @field Object +0x0c uint32_t field_0x0c
// @field Object +0x10 uint32_t field_0x10
// @field Object +0x2c uint32_t field_0x2c
// @field Object +0x30 uint32_t field_0x30
// @field Object +0x34 uint32_t field_0x34

uint32_t __thiscall sub_0062CD30(uint32_t this_ptr) {
    auto* self = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(this_ptr));
    *reinterpret_cast<uint32_t*>(self + 0x08) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x0c) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x10) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x00) = 0x009791a4u;
    *reinterpret_cast<uint32_t*>(self + 0x2c) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x30) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x34) = 0;
    return this_ptr;
}
} // namespace lift_0062CD30

// [0x00629E20]
namespace lift_00629E20 {
// @name UnknownClass::constructWithVtable
// @class UnknownClass
// @summary Runs base initializer with the first stack argument, then installs the vtable at 0x009785C4 and returns this.
// @field UnknownClass +0x00 uint32_t vtable

uint32_t __thiscall ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

uintptr_t __thiscall sub_00629E20(uintptr_t this_ptr, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg2;
    (void)arg3;
    ext_005FF240(this_ptr, arg0);
    *reinterpret_cast<uint32_t*>(this_ptr) = 0x009785C4u;
    return this_ptr;
}
} // namespace lift_00629E20

// [0x006294D0] sub_006294D0 (25 bytes)
namespace lift_006294D0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(void* this_ptr, uint32_t arg0);

// @name UnknownClass::initWithArgAndSetVtable
// @class UnknownClass
// @summary Runs the base initializer with the argument, sets the vtable pointer to 0x00978154, and returns this.
// @field UnknownClass +0x00 void* vtable
void* fn_006294D0(void* self, uint32_t arg0) {
    ext_005FF240(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x00978154u;
    return self;
}
} // namespace lift_006294D0

// [0x00629D00] sub_00629D00 (33 bytes)
namespace lift_00629D00 {
// Known callee 0x005FF240: sub_005FF240 (LIFTED) - zeroes object fields, stores arg at +0x28, sets vtable 0x0096F154.
extern uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

// @name UnknownClass::ctor_00629D00
// @class UnknownClass
// @summary Initializes base via ext_005FF240, zeroes floats at +0x34/+0x38, sets vtable to 0x0097852C, returns this.
// @field UnknownClass +0x00 uint32_t vtable
// @field UnknownClass +0x34 float field_0x34
// @field UnknownClass +0x38 float field_0x38
uintptr_t fn_00629D00(void* self, uint32_t arg0) {
    const uintptr_t this_ptr = reinterpret_cast<uintptr_t>(self);
    ext_005FF240(this_ptr, arg0);
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<uint32_t>(self, 0x00) = 0x0097852Cu;
    lift_field<float>(self, 0x38) = 0.0f;
    return this_ptr;
}
} // namespace lift_00629D00

// [0x0062A0C0]
namespace lift_0062A0C0 {
// @name Unknown::initZeroFloatsAndVtable
// @class Unknown
// @summary Calls the base initializer with the stack argument, zeroes the floats at +0x34 and +0x38, and sets the vtable to 0x0097880C. Returns this (esi) in eax; the disassembly uses ret 0x10.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38

uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

uintptr_t Unknown_initZeroFloatsAndVtable(uintptr_t this_ptr, uint32_t arg0) {
    ext_005FF240(this_ptr, arg0);
    void* self = reinterpret_cast<void*>(this_ptr);
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<uint32_t>(self, 0x00) = 0x0097880Cu;
    lift_field<float>(self, 0x34) = 0.0f;
    return this_ptr;
}
} // namespace lift_0062A0C0

// [0x00627240] sub_00627240 (36 bytes)
namespace lift_00627240 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(void* self, uint32_t arg0);

// @name Unknown::initVtableAndZeroFloats
// @class Unknown
// @summary Runs base initializer with arg0, then sets vtable to 0x00977884 and zeroes three floats at +0x30/+0x34/+0x38; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
void* fn_00627240(void* self, uint32_t arg0) {
    ext_005FF240(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x00977884u;
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;
    return self;
}
} // namespace lift_00627240

// [0x0062E290] sub_0062E290 (59 bytes)
namespace lift_0062E290 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern uint32_t ext_0062CD30(void* this_ptr);

// @name Unknown::initZeroFloatsAndVtable9795A4
// @class Unknown
// @summary Runs base ctor 0x0062CD30, sets vtable to 0x009795a4, zeroes nine float fields, returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x48 float field_0x48
// @field Unknown +0x4c float field_0x4c
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x78 float field_0x78
// @field Unknown +0x7c float field_0x7c
// @field Unknown +0x80 float field_0x80
// @field Unknown +0x84 float field_0x84
// @field Unknown +0x88 float field_0x88
// @field Unknown +0x8c float field_0x8c
void* fn_0062E290(void* self) {
    ext_0062CD30(self);
    lift_field<uint32_t>(self, 0x00) = 0x009795a4u;
    lift_field<float>(self, 0x48) = 0.0f;
    lift_field<float>(self, 0x4c) = 0.0f;
    lift_field<float>(self, 0x50) = 0.0f;
    lift_field<float>(self, 0x78) = 0.0f;
    lift_field<float>(self, 0x7c) = 0.0f;
    lift_field<float>(self, 0x80) = 0.0f;
    lift_field<float>(self, 0x84) = 0.0f;
    lift_field<float>(self, 0x88) = 0.0f;
    lift_field<float>(self, 0x8c) = 0.0f;
    return self;
}
} // namespace lift_0062E290

// [0x00629370] sub_00629370 (36 bytes)
namespace lift_00629370 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

// @name Unknown::initFloatsAndVtable_00629370
// @class Unknown
// @summary Base-initializes the object via ext_005FF240, sets vtable to 0x0097804C, zeroes three float fields, and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
uintptr_t fn_00629370(uintptr_t this_ptr, uint32_t arg0) {
    ext_005FF240(this_ptr, arg0);

    auto* obj = reinterpret_cast<unsigned char*>(this_ptr);
    const uint32_t vtable = 0x0097804Cu;
    const float zero = 0.0f;

    std::memcpy(obj + 0x00, &vtable, sizeof(vtable));
    std::memcpy(obj + 0x38, &zero, sizeof(zero));
    std::memcpy(obj + 0x34, &zero, sizeof(zero));
    std::memcpy(obj + 0x30, &zero, sizeof(zero));

    return this_ptr;
}
} // namespace lift_00629370

// [0x006293A0] sub_006293A0 (43 bytes)
namespace lift_006293A0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

// @name Unknown::initFieldsWithArg
// @class Unknown
// @summary Runs base init with the stack argument, then sets vtable 0x009780BC, zeroes floats at +0x34/+0x38/+0x3C, sets +0x30 to 4, and returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C float field_0x3C
void* fn_006293A0(void* self, uint32_t arg0) {
    ext_005FF240(reinterpret_cast<uintptr_t>(self), arg0);

    lift_field<uint32_t>(self, 0x00) = 0x009780BCu;
    lift_field<float>(self, 0x3C) = 0.0f;
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<uint32_t>(self, 0x30) = 4u;

    return self;
}
} // namespace lift_006293A0

// [0x006271A0] sub_006271A0 (36 bytes)
namespace lift_006271A0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

// @name Unknown::initWithArgVtableAndZeroFloats
// @class Unknown
// @summary Calls base initializer with arg, sets vtable to 0x009777EC, zeroes floats at +0x30/+0x34/+0x38, returns this
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
void* fn_006271A0(void* self, uint32_t arg0) {
    ext_005FF240(reinterpret_cast<uintptr_t>(self), arg0);

    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x009777ECu;

    const float zero = 0.0f;
    *reinterpret_cast<float*>(base + 0x38) = zero;
    *reinterpret_cast<float*>(base + 0x34) = zero;
    *reinterpret_cast<float*>(base + 0x30) = zero;

    return self;
}
} // namespace lift_006271A0

// [0x00624E50] sub_00624E50 (36 bytes)
namespace lift_00624E50 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154.)
extern uint32_t ext_005FF240(void* self, uint32_t arg0);

// @name Unknown::initWithArgs
// @class Unknown
// @summary Runs the base initializer with arg0, installs the 0x009773BC vtable, clears the byte at +0x30, and stores arg1 at +0x34; returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x30 uint8_t flag
// @field Unknown +0x34 uint32_t value
void* fn_00624E50(void* self, uint32_t arg0, uint32_t arg1) {
    ext_005FF240(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x009773BC;
    lift_field<uint32_t>(self, 0x34) = arg1;
    lift_field<uint8_t>(self, 0x30) = 0;
    return self;
}
} // namespace lift_00624E50

// [0x006296A0] sub_006296A0 (43 bytes)
namespace lift_006296A0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

// @name Unknown::initZeroFloatsStoreArg3C
// @class Unknown
// @summary Runs base initializer with arg0, zeroes three floats at +0x30/+0x34/+0x38, stores arg3 at +0x3C, sets vtable to 0x009782DC, returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C uint32_t field_0x3C
uintptr_t fn_006296A0(uintptr_t self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg2;

    ext_005FF240(self, arg0);

    *reinterpret_cast<uint32_t*>(self) = 0x009782DCu;
    *reinterpret_cast<float*>(self + 0x38) = 0.0f;
    *reinterpret_cast<float*>(self + 0x34) = 0.0f;
    *reinterpret_cast<float*>(self + 0x30) = 0.0f;
    *reinterpret_cast<uint32_t*>(self + 0x3C) = arg3;

    return self;
}
} // namespace lift_006296A0

// [0x006210E0]
namespace lift_006210E0 {
// @name fillStruct0x48Range
// @summary Fills a range of 0x48-byte structs (two std::strings and two doubles) by copying from a source element.
// @field Struct0x48 +0x00 std::string field_0x00
// @field Struct0x48 +0x1c std::string field_0x1c
// @field Struct0x48 +0x38 double field_0x38
// @field Struct0x48 +0x40 double field_0x40

extern uint32_t mem_00924FDC;

using StringAssignFn = uint32_t(__thiscall*)(uint32_t self, uint32_t other);

void __cdecl sub_006210E0(uint32_t begin, uint32_t end, uint32_t src) {
    if (begin == end) {
        return;
    }

    auto assign_str = reinterpret_cast<StringAssignFn>(mem_00924FDC);
    uint32_t src_str2 = src + 0x1c;
    uint32_t cur = begin;

    do {
        assign_str(cur, src);
        assign_str(cur + 0x1c, src_str2);
        *reinterpret_cast<double*>(cur + 0x38) = *reinterpret_cast<const double*>(src + 0x38);
        cur += 0x48;
        *reinterpret_cast<double*>(cur - 0x8) = *reinterpret_cast<const double*>(src + 0x40);
    } while (cur != end);
}
} // namespace lift_006210E0

// [0x00624EA0]
namespace lift_00624EA0 {
// @name Unknown::initWithArgsStoreArg3
// @class Unknown
// @summary Forwards four stack args to Unknown::initWithArgs, stores arg2 at +0x38, installs vtable 0x0097742C, returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x38 uint32_t field_0x38

// Stack-argument callee (ret 0x10); ecx = this.
extern void* ext_00624E50(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

void* fn_00624EA0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    ext_00624E50(self, a1, a2, a3, a4);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x38) = a3;
    *reinterpret_cast<uint32_t*>(self) = 0x0097742Cu;
    return self;
}
} // namespace lift_00624EA0

// [0x00622D30] fillStridedFromSource (68 bytes)
namespace lift_00622D30 {
// @name fillStridedFromSource
// @summary Copies one 20-byte record (5 dwords) from src into each of `count` consecutive 20-byte slots starting at dst; NULL dst skips the copy but still advances.
// @field Record20 +0x00 uint32_t field_0x00
// @field Record20 +0x04 uint32_t field_0x04
// @field Record20 +0x08 uint32_t field_0x08
// @field Record20 +0x0C uint32_t field_0x0C
// @field Record20 +0x10 uint32_t field_0x10
void fn_00622D30(void* dst, uint32_t count, const void* src) {
    if (count == 0) {
        return;
    }
    auto* out = static_cast<uint8_t*>(dst);
    const auto* in = static_cast<const uint8_t*>(src);
    do {
        if (out != nullptr) {
            std::memcpy(out, in, 5 * sizeof(uint32_t));
        }
        out += 0x14;
        --count;
    } while (count != 0);
}
} // namespace lift_00622D30

// [0x00625950] sub_00625950 (69 bytes)
namespace lift_00625950 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used here as operator new(size_t): allocates the 0x1C-byte record.
extern void* ext_006A5C62(size_t size);

// @name allocRecord28
// @summary Allocates a 0x1C-byte record and fills it from three DWORD args, a 3-DWORD source block and a flag byte; returns NULL if allocation fails.
// @field <none> +0x00 DWORD field_0x00
// @field <none> +0x04 DWORD field_0x04
// @field <none> +0x08 DWORD field_0x08
// @field <none> +0x0C DWORD field_0x0C
// @field <none> +0x10 DWORD field_0x10
// @field <none> +0x14 DWORD field_0x14
// @field <none> +0x18 BYTE  field_0x18
// @field <none> +0x19 BYTE  field_0x19
void* fn_00625950(uint32_t a0, uint32_t a1, uint32_t a2,
                  const uint32_t* src, uint8_t flag) {
    void* rec = ext_006A5C62(0x1C);
    if (rec == nullptr) {
        return nullptr;
    }
    lift_field<uint32_t>(rec, 0x00) = a0;
    lift_field<uint32_t>(rec, 0x04) = a1;
    lift_field<uint32_t>(rec, 0x08) = a2;
    lift_field<uint32_t>(rec, 0x0C) = src[0];
    lift_field<uint32_t>(rec, 0x10) = src[1];
    lift_field<uint32_t>(rec, 0x14) = src[2];
    lift_field<uint8_t>(rec, 0x18) = flag;
    lift_field<uint8_t>(rec, 0x19) = 0;
    return rec;
}
} // namespace lift_00625950

// [0x006296D0] sub_006296D0 (72 bytes)
namespace lift_006296D0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t ext_005FF240(void* self, uint32_t arg0);

// @name Unknown::InitFloatFieldsAndVtable
// @class Unknown
// @summary Calls base initializer with arg0, sets vtable, zeroes/ones float fields at +0x30..+0x50, and stores arg2 at +0x54; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C float field_0x3C
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48
// @field Unknown +0x4C float field_0x4C
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x54 uint32_t field_0x54
void* fn_006296D0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg3;

    ext_005FF240(self, arg0);

    uint8_t* p = static_cast<uint8_t*>(self);

    const uint32_t vtable = 0x0097834Cu;
    const float zero = 0.0f;
    const float one = 1.0f;

    std::memcpy(p + 0x00, &vtable, sizeof(uint32_t));

    std::memcpy(p + 0x38, &zero, sizeof(float));
    std::memcpy(p + 0x34, &zero, sizeof(float));
    std::memcpy(p + 0x30, &zero, sizeof(float));
    std::memcpy(p + 0x44, &zero, sizeof(float));
    std::memcpy(p + 0x40, &zero, sizeof(float));
    std::memcpy(p + 0x3C, &zero, sizeof(float));
    std::memcpy(p + 0x50, &zero, sizeof(float));
    std::memcpy(p + 0x4C, &zero, sizeof(float));
    std::memcpy(p + 0x48, &zero, sizeof(float));

    std::memcpy(p + 0x30, &one, sizeof(float));
    std::memcpy(p + 0x40, &one, sizeof(float));
    std::memcpy(p + 0x50, &one, sizeof(float));

    std::memcpy(p + 0x54, &arg2, sizeof(uint32_t));

    return self;
}
} // namespace lift_006296D0

// [0x0062BF30] sub_0062BF30 (73 bytes)
namespace lift_0062BF30 {
// @name sub_0062BF30
// @summary Auto-lifted identical-shape clone of 0x00510830 (CopyRangeBackwardAndComputeDestBegin).
namespace lift_00510830 {
// Known callee 0x004C72D0: CopyRangeBackward_004C72D0 (Copies [first,last) of 0x20-byte elements backward so they end at d_last; returns the new begin of the destination range (d_last - count), or d_last when the range is empty.)
extern uint8_t* __cdecl ext_0062B930(uint8_t* first, uint8_t* last, uint8_t* d_last);

// @name CopyRangeBackwardAndComputeDestBegin
// @summary Calls ext_004C72D0 to copy [first,last) backward ending at d_last, then returns d_last minus the byte span of [first,last) rounded down to a multiple of 0x20.
void* fn_0062BF30(uint8_t* first, uint8_t* last, uint8_t* d_last) {
    (void)ext_0062B930(first, last, d_last);

    // Byte span of the source range, truncated to 32-bit like the original code.
    int32_t span = static_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last)) -
                                        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first)));
    span = (span >> 4) * 32;  // arithmetic shift, then back to 0x20-element granularity

    uint32_t dst = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(d_last)) - static_cast<uint32_t>(span);
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(dst));
}
} // namespace lift_00510830
} // namespace lift_0062BF30

// [0x006215A0] sub_006215A0 (43 bytes)
namespace lift_006215A0 {
// @name sub_006215A0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00621130(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_006215A0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00621130(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_006215A0

// [0x00622FE0] sub_00622FE0 (43 bytes)
namespace lift_00622FE0 {
// @name sub_00622FE0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00622C40(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00622FE0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00622C40(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00622FE0

// [0x00621090] sub_00621090 (76 bytes)
namespace lift_00621090 {
// MSVCP80 basic_string<char>::operator=(const basic_string&), reached through the IAT slot at mem_00924FDC.
extern void* ext_string_assign(void* dst, const void* src);

// @name Unknown::CopyRecordsBackward_00621090
// @class Unknown
// @summary Backward-copies records [first, last) into the block ending at dst_last (0x48-byte records); returns the new begin.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1c
// @field Unknown +0x38 double field_0x38
// @field Unknown +0x40 double field_0x40
void* fn_00621090(void* first, void* last, void* dst_last) {
    constexpr ptrdiff_t kRecordSize = 0x48;

    uint8_t* const begin = static_cast<uint8_t*>(first);
    uint8_t* src = static_cast<uint8_t*>(last);
    uint8_t* dst = static_cast<uint8_t*>(dst_last);

    if (begin == src) {
        return dst;
    }

    do {
        src -= kRecordSize;
        dst -= kRecordSize;

        ext_string_assign(dst, src);
        ext_string_assign(dst + 0x1C, src + 0x1C);
        lift_field<double>(dst, 0x38) = lift_field<double>(src, 0x38);
        lift_field<double>(dst, 0x40) = lift_field<double>(src, 0x40);
    } while (src != begin);

    return dst;
}
} // namespace lift_00621090

// [0x00621040]
namespace lift_00621040 {
// @name CopyRecordRange_00621040
// @summary Copies records in [first, last) (0x48 bytes each: std::string at +0x00 and +0x1c, doubles at +0x38 and +0x40) to dst; returns dst end, or dst unchanged when the range is empty.
// @field Record +0x00 std::string field_0x00
// @field Record +0x1c std::string field_0x1c
// @field Record +0x38 double field_0x38
// @field Record +0x40 double field_0x40

// IAT slot for MSVCP80 basic_string<char>::operator=(const basic_string&); thiscall, one stack arg.
using StrAssignFn = void* (__thiscall*)(void* self, const void* rhs);
extern StrAssignFn mem_00924FDC;

uint8_t* CopyRecordRange_00621040(const uint8_t* first, const uint8_t* last, uint8_t* dst) {
    if (first == last) {
        return dst;
    }

    const uint8_t* src = first;
    uint8_t* out = dst;
    do {
        mem_00924FDC(out, src);
        mem_00924FDC(out + 0x1c, src + 0x1c);
        lift_field<double>(out, 0x38) = lift_field<double>(src, 0x38);
        lift_field<double>(out, 0x40) = lift_field<double>(src, 0x40);
        src += 0x48;
        out += 0x48;
    } while (src != last);

    return out;
}
} // namespace lift_00621040

// [0x006245E0]
namespace lift_006245E0 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo (called on bounds violations).
extern void (*mem_00925134)();

struct Unknown;

// @name Unknown::InvokeVirtual74OverRange_006245E0
// @class Unknown
// @summary Walks the pointer range at this+0x1C..this+0x20 and calls vtable slot 0x74 on each element.
// @field Unknown +0x1C void** field_0x1C
// @field Unknown +0x20 void** field_0x20
void Unknown_InvokeVirtual74OverRange_006245E0(Unknown* self)
{
    auto* base = reinterpret_cast<unsigned char*>(self);
    auto** cur = *reinterpret_cast<void***>(base + 0x1C);
    auto** end = *reinterpret_cast<void***>(base + 0x20);

    if (cur > end) {
        mem_00925134();
    }

    while (cur != end) {
        if (cur >= end) {
            mem_00925134();
        }
        void* obj = *cur;
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<void (*)(void*)>(vtable[0x74 / sizeof(void*)]);
        fn(obj);

        if (cur >= *reinterpret_cast<void***>(base + 0x20)) {
            mem_00925134();
        }
        ++cur;
    }
}
} // namespace lift_006245E0

// [0x00624590] sub_00624590 (76 bytes)
namespace lift_00624590 {
// Invalid-parameter hook: the original calls through the pointer stored at 0x925134 on failed bounds checks.
extern void (*mem_00925134)(void);

// @name Unknown::CallVirtualOnRange_00624590
// @class Unknown
// @summary Iterates a pointer array at self+0x0C..self+0x10 and invokes vtable slot 12 (+0x30) on each element.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_00624590(void* self) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t cur = lift_field<uint32_t>(base, 0x0C);

    for (;;) {
        uint32_t end = lift_field<uint32_t>(base, 0x10);
        if (cur == end) {
            break;
        }
        if (!(cur < lift_field<uint32_t>(base, 0x10))) {
            mem_00925134();
        }

        void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cur))));
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot12 = reinterpret_cast<void (__thiscall*)(void*)>(vtbl[12]);
        slot12(obj);

        if (!(cur < lift_field<uint32_t>(base, 0x10))) {
            mem_00925134();
        }
        cur += 4;
    }
}
} // namespace lift_00624590

// [0x00624540] sub_00624540 (76 bytes)
namespace lift_00624540 {
// Runtime invalid-parameter handler pointer (MSVCR80 _invalid_parameter_noinfo in the original).
extern void (*mem_00925134)();

typedef void (__thiscall *VirtualSlot18Fn)(void*);

static void invalid_param() {
    mem_00925134();
}

template <typename T>
static T* at(DWORD addr) {
    return reinterpret_cast<T*>(static_cast<uintptr_t>(addr));
}

// @name Unknown::InvokeVirtual18ForEach_00624540
// @class Unknown
// @summary Iterates the 32-bit pointer range at self+0x1C..self+0x20 and calls virtual slot 18 (+0x48) on each element object.
// @field Unknown +0x1C DWORD field_0x1C
// @field Unknown +0x20 DWORD field_0x20
void fn_00624540(void* self) {
    DWORD cur = lift_field<DWORD>(self, 0x1C);
    if (cur > lift_field<DWORD>(self, 0x20)) {
        invalid_param();
    }

    for (;;) {
        DWORD end = lift_field<DWORD>(self, 0x20);
        if (lift_field<DWORD>(self, 0x1C) > end) {
            invalid_param();
        }
        if (cur == end) {
            break;
        }
        if (cur >= lift_field<DWORD>(self, 0x20)) {
            invalid_param();
        }

        DWORD obj = *at<DWORD>(cur);
        DWORD vtbl = *at<DWORD>(obj);
        DWORD slot = *at<DWORD>(vtbl + 0x48);
        reinterpret_cast<VirtualSlot18Fn>(static_cast<uintptr_t>(slot))(at<void>(obj));

        if (cur >= lift_field<DWORD>(self, 0x20)) {
            invalid_param();
        }
        cur += 4;
    }
}
} // namespace lift_00624540

// [0x00624630] sub_00624630 (16 bytes)
namespace lift_00624630 {
// Known callee 0x00624540: Unknown::InvokeVirtual18ForEach_00624540 (Iterates the 32-bit pointer range at self+0x1C..self+0x20 and calls virtual slot 18 (+0x48) on each element object.)
extern void ext_00624540(void* self);
// Known callee 0x00624590: Unknown::CallVirtualOnRange_00624590 (Iterates a pointer array at self+0x0C..self+0x10 and invokes vtable slot 12 (+0x30) on each element.)
extern void ext_00624590(void* self);

// @name Unknown::DispatchRangesForSelf_00624630
// @class Unknown
// @summary Runs the virtual-slot-18 range pass (00624540) then the slot-12 range pass (00624590) on the same object.
void fn_00624630(void* self) {
    ext_00624540(self);
    ext_00624590(self);
}
} // namespace lift_00624630

// [0x00622700]
namespace lift_00622700 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);
extern float mem_read_f32(uint32_t addr);
extern void mem_write_f32(uint32_t addr, float val);

// @name copy_backward_20b
// @summary Copies 20-byte elements (1 dword + 4 floats) backward from [src_begin, src_end) to dst_end.
uint32_t sub_00622700(uint32_t src_begin, uint32_t src_end, uint32_t dst_end) {
    uint32_t eax = dst_end;
    uint32_t esi = src_end;
    uint32_t edi = src_begin;
    if (edi == esi) {
        return eax;
    }

    uint32_t edx = eax + 0xc;
    uint32_t ecx = esi + 0xc;
    do {
        mem_write32(eax - 0x14, mem_read32(esi - 0x14));
        float f0 = mem_read_f32(ecx - 0x1c);
        esi -= 0x14;
        mem_write_f32(edx - 0x1c, f0);
        float f1 = mem_read_f32(ecx - 0x18);
        ecx -= 0x14;
        eax -= 0x14;
        mem_write_f32(edx - 0x18, f1);
        float f2 = mem_read_f32(ecx);
        edx -= 0x14;
        mem_write_f32(edx, f2);
        float f3 = mem_read_f32(ecx + 0x4);
        mem_write_f32(edx + 0x4, f3);
    } while (esi != edi);

    return eax;
}
} // namespace lift_00622700

// [0x00622D80] sub_00622D80 (82 bytes)
namespace lift_00622D80 {
// @name CopyRecord20Range
// @summary Copies each 20-byte record in [begin, end) to consecutive 20-byte slots at dst: the dword at +0x00 and the four floats at +0x04..+0x10. A slot whose pointer is null is skipped, but the source still advances.
// @field Record20 +0x00 uint32_t field_0x00
// @field Record20 +0x04 float field_0x04
// @field Record20 +0x08 float field_0x08
// @field Record20 +0x0C float field_0x0C
// @field Record20 +0x10 float field_0x10
extern void __cdecl fn_00622D80(const uint8_t* begin, const uint8_t* end, uint8_t* dst) {
    if (begin == end) {
        return;
    }
    const uint8_t* src = begin;
    uint8_t* out = dst;
    do {
        if (out != nullptr) {
            std::memcpy(out, src, sizeof(uint32_t));
            std::memcpy(out + 0x04, src + 0x04, 4 * sizeof(float));
        }
        src += 0x14;
        out += 0x14;
    } while (src != end);
}
} // namespace lift_00622D80

// [0x00622B40] sub_00622B40 (84 bytes)
namespace lift_00622B40 {
// Import thunk slot mem_00924FE0 (MSVCP80 basic_string copy constructor, thiscall, one stack arg).
extern uint32_t mem_00924FE0;
// Call through the import slot: copy-constructs a std::string at dest from src.
extern void ext_00924FE0(void* self, const void* src);

// @name Unknown::initFromStringAndFloats_00622B40
// @class Unknown
// @summary Stores two dwords, copy-constructs an embedded string plus four floats from a source record, stores a flag byte, clears the following byte, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint8_t field_0x0C
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 uint8_t field_0x38
// @field Unknown +0x39 uint8_t field_0x39
void* fn_00622B40(void* self, uint32_t a1, uint32_t a2, uint32_t a3, const void* a4, uint8_t a5) {
    lift_field<uint32_t>(self, 0x00) = a1;
    lift_field<uint32_t>(self, 0x04) = a2;
    lift_field<uint32_t>(self, 0x08) = a3;

    // Embedded string at +0x0C: copy-constructed from the source record at offset 0.
    ext_00924FE0(static_cast<uint8_t*>(self) + 0x0C, a4);

    // Copy four floats from the source record (offsets 0x1C..0x28) to +0x28..0x34.
    lift_field<float>(self, 0x28) = lift_field<float>(a4, 0x1C);
    lift_field<float>(self, 0x2C) = lift_field<float>(a4, 0x20);
    lift_field<float>(self, 0x30) = lift_field<float>(a4, 0x24);
    lift_field<float>(self, 0x34) = lift_field<float>(a4, 0x28);

    lift_field<uint8_t>(self, 0x38) = a5;
    lift_field<uint8_t>(self, 0x39) = 0;
    return self;
}
} // namespace lift_00622B40

// [0x00629D30] sub_00629D30 (86 bytes)
namespace lift_00629D30 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
extern float ext_00594010(void* self);

// @name Unknown::updateScaledRatio_00629D30
// @class Unknown
// @summary Samples two floats a (virtual getter on a sub-object) and b (via ext_00594000/ext_00594010), sets field_0x30 = (a - old field_0x34) / (b - old field_0x38), then stores field_0x38 = b and field_0x34 = a.
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
void fn_00629D30(void* self) {
    auto* const base = static_cast<uint8_t*>(self);

    // obj = self->field_0x28->field_0x20C->field_0x234 (nested pointer chain, offsets on other classes)
    void* p28 = lift_field<void*>(base, 0x28);
    void* p20c = lift_field<void*>(p28, 0x20C);
    void* obj = lift_field<void*>(p20c, 0x234);

    // a = obj->vtable[0x20 / 4]( 0 )  (virtual getter returning float)
    void** vtable = *static_cast<void***>(obj);
    auto getter = reinterpret_cast<float (*)(void*, int32_t)>(vtable[0x20 / sizeof(void*)]);
    float a = getter(obj, 0);

    // b = ext_00594010( ext_00594000() )
    int32_t key = ext_00594000();
    float b = ext_00594010(reinterpret_cast<void*>(static_cast<intptr_t>(key)));

    float& f30 = lift_field<float>(base, 0x30);
    float& f34 = lift_field<float>(base, 0x34);
    float& f38 = lift_field<float>(base, 0x38);

    float ratio = (a - f34) / (b - f38);
    f30 = ratio;
    f38 = b;
    f34 = a;
}
} // namespace lift_00629D30

// [0x00621190] sub_00621190 (86 bytes)
namespace lift_00621190 {
// Known callee 0x00621040: CopyRecordRange_00621040 (Copies records in [first, last) (0x48 bytes each: std::string at +0x00 and +0x1c, doubles at +0x38 and +0x40) to dst; returns dst end, or dst unchanged when the range is empty.)
uint8_t* ext_00621040(const uint8_t* first, const uint8_t* last, uint8_t* dst);

// @name CopyRecordRangeAndAdvance_00621190
// @summary Copies the 0x48-byte records in [first, last) to dst via ext_00621040, then returns dst advanced by the whole-record count of the range.
uint8_t* fn_00621190(const uint8_t* first, const uint8_t* last, uint8_t* dst) {
    constexpr std::ptrdiff_t kRecordSize = 0x48;

    ext_00621040(first, last, dst);

    const std::ptrdiff_t count = (last - first) / kRecordSize;
    return dst + count * kRecordSize;
}
} // namespace lift_00621190

// [0x00629AA0]
namespace lift_00629AA0 {
// @name sub_00629AA0
// @summary Constructor that initializes base object, sets vtable to 0x00978494, and initializes a 4x4 identity matrix and 3D zero vector.
// @field sub_00629AA0 +0x00 uint32_t vtable
// @field sub_00629AA0 +0x30 float field_0x30
// @field sub_00629AA0 +0x34 float field_0x34
// @field sub_00629AA0 +0x38 float field_0x38
// @field sub_00629AA0 +0x3c float field_0x3c
// @field sub_00629AA0 +0x40 float field_0x40
// @field sub_00629AA0 +0x44 float field_0x44
// @field sub_00629AA0 +0x48 float field_0x48
// @field sub_00629AA0 +0x4c float field_0x4c
// @field sub_00629AA0 +0x50 float field_0x50
// @field sub_00629AA0 +0x54 float field_0x54
// @field sub_00629AA0 +0x58 float field_0x58
// @field sub_00629AA0 +0x5c float field_0x5c
// @field sub_00629AA0 +0x60 float field_0x60
// @field sub_00629AA0 +0x64 float field_0x64
// @field sub_00629AA0 +0x68 float field_0x68
// @field sub_00629AA0 +0x6c float field_0x6c
// @field sub_00629AA0 +0x70 float field_0x70
// @field sub_00629AA0 +0x74 float field_0x74
// @field sub_00629AA0 +0x78 float field_0x78

extern uint32_t& mem_u32(uintptr_t addr);
extern float& mem_f32(uintptr_t addr);
extern uint32_t __thiscall ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

uintptr_t __thiscall sub_00629AA0(uintptr_t this_ptr, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg2;
    (void)arg3;

    ext_005FF240(this_ptr, arg0);
    mem_u32(this_ptr + 0x00) = 0x00978494u;

    mem_f32(this_ptr + 0x30) = 1.0f;
    mem_f32(this_ptr + 0x34) = 0.0f;
    mem_f32(this_ptr + 0x38) = 0.0f;
    mem_f32(this_ptr + 0x3c) = 0.0f;
    mem_f32(this_ptr + 0x40) = 0.0f;
    mem_f32(this_ptr + 0x44) = 1.0f;
    mem_f32(this_ptr + 0x48) = 0.0f;
    mem_f32(this_ptr + 0x4c) = 0.0f;
    mem_f32(this_ptr + 0x50) = 0.0f;
    mem_f32(this_ptr + 0x54) = 0.0f;
    mem_f32(this_ptr + 0x58) = 1.0f;
    mem_f32(this_ptr + 0x5c) = 0.0f;
    mem_f32(this_ptr + 0x60) = 0.0f;
    mem_f32(this_ptr + 0x64) = 0.0f;
    mem_f32(this_ptr + 0x68) = 0.0f;
    mem_f32(this_ptr + 0x6c) = 1.0f;

    mem_f32(this_ptr + 0x70) = 0.0f;
    mem_f32(this_ptr + 0x74) = 0.0f;
    mem_f32(this_ptr + 0x78) = 0.0f;

    return this_ptr;
}
} // namespace lift_00629AA0

// [0x0062C3F0] sub_0062C3F0 (90 bytes)
namespace lift_0062C3F0 {
// Known callee 0x005FF240: sub_005FF240 (Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154)
extern uint32_t __thiscall ext_005FF240(uintptr_t this_ptr, uint32_t arg0);

template<typename T> void mem_write(uintptr_t addr, T val);

// @name Sensors::AxisSensor::AxisSensor
// @class Sensors::AxisSensor
// @summary Constructor: runs base init, sets AxisSensor vtable, zeroes float fields at +0x30/+0x34/+0x38, stores arg2 at +0x3C, zeroes +0x44/+0x48/+0x4C; returns this.
// @field Sensors::AxisSensor +0x00 uint32_t vtable
// @field Sensors::AxisSensor +0x30 float field_0x30
// @field Sensors::AxisSensor +0x34 float field_0x34
// @field Sensors::AxisSensor +0x38 float field_0x38
// @field Sensors::AxisSensor +0x3C uint32_t field_0x3c
// @field Sensors::AxisSensor +0x44 uint32_t field_0x44
// @field Sensors::AxisSensor +0x48 uint32_t field_0x48
// @field Sensors::AxisSensor +0x4C uint32_t field_0x4c
uintptr_t fn_0062C3F0(uintptr_t self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    // arg1 and arg3 are part of the stdcall-style frame (ret 0x10) but unused here.
    (void)arg1;
    (void)arg3;

    ext_005FF240(self, arg0);

    mem_write<uint32_t>(self + 0x00, 0x0097900Cu);
    mem_write<float>(self + 0x30, 0.0f);
    mem_write<float>(self + 0x34, 0.0f);
    mem_write<float>(self + 0x38, 0.0f);
    mem_write<uint32_t>(self + 0x3C, arg2);
    mem_write<uint32_t>(self + 0x44, 0u);
    mem_write<uint32_t>(self + 0x48, 0u);
    mem_write<uint32_t>(self + 0x4C, 0u);

    return self;
}
} // namespace lift_0062C3F0
