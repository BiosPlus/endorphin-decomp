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
#include <utility>
#include <stdexcept>

#include <stdexcept>
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
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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

// [0x00621740] sub_00621740 (89 bytes)
namespace lift_00621740 {
extern void __cdecl ext_00621680(int a1, int a2, void* self, int a4);

// @name sub_00621740
// @summary Auto-lifted identical-shape clone of 0x0048CCC0 (UnknownElementVector::erase).
namespace lift_0048CCC0 {
extern void (*mem_00925134)();
extern void ext_00621680(uint8_t* first, uint8_t* last);
extern int32_t ext_00621190(int32_t arg1, int32_t arg2, int32_t arg3);

// @name UnknownElementVector::erase
// @class UnknownElementVector
// @summary Erases a checked iterator range [first, last) from a vector of 0x68-byte elements, shifting trailing elements and destroying the vacated tail.
// @field UnknownElementVector +0x08 uint8_t* last
uint32_t* __thiscall fn_00621740(
    uint8_t* self,
    uint32_t* out_iter,
    uint32_t first_container,
    uint32_t first_ptr,
    uint32_t last_container,
    uint32_t last_ptr) {
  if (first_container == 0 || first_container != last_container) {
    mem_00925134();
  }
  if (first_ptr != last_ptr) {
    int32_t old_last = *reinterpret_cast<int32_t*>(self + 0x8);
    int32_t new_last = ext_00621190(
        static_cast<int32_t>(last_ptr),
        old_last,
        static_cast<int32_t>(first_ptr));
    ext_00621680(
        reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(new_last)),
        reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(self + 0x8))));
    *reinterpret_cast<int32_t*>(self + 0x8) = new_last;
  }
  out_iter[0] = first_container;
  out_iter[1] = first_ptr;
  return out_iter;
}
} // namespace lift_0048CCC0
} // namespace lift_00621740

// [0x006259A0] sub_006259A0 (30 bytes)
namespace lift_006259A0 {
// @name sub_006259A0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_006255F0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_006259A0(DWORD* dst, DWORD value) {
    DWORD obj = ext_006255F0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_006259A0

// [0x006255F0] sub_006255F0 (87 bytes)
namespace lift_006255F0 {
// @name sub_006255F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4B198;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4B194;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006255F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AA8BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4B198 & 1u) == 0) {
        mem_00B4B198 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4B194, frame[0]);
        mem_00B4B194 = 0x9772E4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4B194;
}
} // namespace lift_004CAE30
} // namespace lift_006255F0

// [0x00627790] sub_00627790 (87 bytes)
namespace lift_00627790 {
// @name sub_00627790
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4D7A0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4D79C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00627790() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AB83Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4D7A0 & 1u) == 0) {
        mem_00B4D7A0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4D79C, frame[0]);
        mem_00B4D79C = 0x9779B4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4D79C;
}
} // namespace lift_004CAE30
} // namespace lift_00627790

// [0x006277F0] sub_006277F0 (87 bytes)
namespace lift_006277F0 {
// @name sub_006277F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4D7A8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4D7A4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006277F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AB85Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4D7A8 & 1u) == 0) {
        mem_00B4D7A8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4D7A4, frame[0]);
        mem_00B4D7A4 = 0x977A8Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4D7A4;
}
} // namespace lift_004CAE30
} // namespace lift_006277F0

// [0x00627850] sub_00627850 (87 bytes)
namespace lift_00627850 {
// @name sub_00627850
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4D7B0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4D7AC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00627850() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AB87Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4D7B0 & 1u) == 0) {
        mem_00B4D7B0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4D7AC, frame[0]);
        mem_00B4D7AC = 0x977B64u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4D7AC;
}
} // namespace lift_004CAE30
} // namespace lift_00627850

// [0x006278B0] sub_006278B0 (87 bytes)
namespace lift_006278B0 {
// @name sub_006278B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4D7B8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4D7B4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006278B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AB89Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4D7B8 & 1u) == 0) {
        mem_00B4D7B8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4D7B4, frame[0]);
        mem_00B4D7B4 = 0x977C3Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4D7B4;
}
} // namespace lift_004CAE30
} // namespace lift_006278B0

// [0x00627910] sub_00627910 (87 bytes)
namespace lift_00627910 {
// @name sub_00627910
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4D7C0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4D7BC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00627910() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AB8BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4D7C0 & 1u) == 0) {
        mem_00B4D7C0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4D7BC, frame[0]);
        mem_00B4D7BC = 0x977D14u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4D7BC;
}
} // namespace lift_004CAE30
} // namespace lift_00627910

// [0x0062A110] sub_0062A110 (87 bytes)
namespace lift_0062A110 {
// @name sub_0062A110
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B515B8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B515B4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A110() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD2BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B515B8 & 1u) == 0) {
        mem_00B515B8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B515B4, frame[0]);
        mem_00B515B4 = 0x97865Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B515B4;
}
} // namespace lift_004CAE30
} // namespace lift_0062A110

// [0x0062A170] sub_0062A170 (87 bytes)
namespace lift_0062A170 {
// @name sub_0062A170
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B515C0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B515BC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A170() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD2DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B515C0 & 1u) == 0) {
        mem_00B515C0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B515BC, frame[0]);
        mem_00B515BC = 0x978734u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B515BC;
}
} // namespace lift_004CAE30
} // namespace lift_0062A170

// [0x0062A5D0] sub_0062A5D0 (87 bytes)
namespace lift_0062A5D0 {
// @name sub_0062A5D0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B51C08;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B51C04;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A5D0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD5CEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B51C08 & 1u) == 0) {
        mem_00B51C08 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B51C04, frame[0]);
        mem_00B51C04 = 0x978A54u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B51C04;
}
} // namespace lift_004CAE30
} // namespace lift_0062A5D0

// [0x0062A630] sub_0062A630 (87 bytes)
namespace lift_0062A630 {
// @name sub_0062A630
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B51C10;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B51C0C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A630() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD5EEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B51C10 & 1u) == 0) {
        mem_00B51C10 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B51C0C, frame[0]);
        mem_00B51C0C = 0x978B2Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B51C0C;
}
} // namespace lift_004CAE30
} // namespace lift_0062A630

// [0x0062A690] sub_0062A690 (87 bytes)
namespace lift_0062A690 {
// @name sub_0062A690
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B51C18;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B51C14;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A690() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD60Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B51C18 & 1u) == 0) {
        mem_00B51C18 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B51C14, frame[0]);
        mem_00B51C14 = 0x978C04u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B51C14;
}
} // namespace lift_004CAE30
} // namespace lift_0062A690

// [0x0062A6F0] sub_0062A6F0 (87 bytes)
namespace lift_0062A6F0 {
// @name sub_0062A6F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B51C20;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B51C1C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062A6F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AD62Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B51C20 & 1u) == 0) {
        mem_00B51C20 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B51C1C, frame[0]);
        mem_00B51C1C = 0x978CDCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B51C1C;
}
} // namespace lift_004CAE30
} // namespace lift_0062A6F0

// [0x0062EE00] sub_0062EE00 (87 bytes)
namespace lift_0062EE00 {
// @name sub_0062EE00
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B52360;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5235C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062EE00() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADB2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B52360 & 1u) == 0) {
        mem_00B52360 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5235C, frame[0]);
        mem_00B5235C = 0x979784u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5235C;
}
} // namespace lift_004CAE30
} // namespace lift_0062EE00

// [0x0062EE60] sub_0062EE60 (87 bytes)
namespace lift_0062EE60 {
// @name sub_0062EE60
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B52368;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B52364;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0062EE60() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADB4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B52368 & 1u) == 0) {
        mem_00B52368 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B52364, frame[0]);
        mem_00B52364 = 0x97985Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B52364;
}
} // namespace lift_004CAE30
} // namespace lift_0062EE60

// [0x00622C40] sub_00622C40 (93 bytes)
namespace lift_00622C40 {
// @name sub_00622C40
// @summary Auto-lifted identical-shape clone of 0x0051A6D0 (CopyRangeBackward5f_0051A6D0).
namespace lift_0051A6D0 {
extern void* ext_00622700(void* first, void* last, void* destEnd);

// @name CopyRangeBackward5f_0051A6D0
// @summary Copies a range of 20-byte (5-float) elements backward into a destination ending at destEnd and returns the destination begin.
extern void* fn_00622C40(void* first, void* last, void* destEnd) {
    ext_00622700(first, last, destEnd);
    ptrdiff_t count = (static_cast<const char*>(last) - static_cast<const char*>(first)) / 20;
    return static_cast<char*>(destEnd) - count * 20;
}
} // namespace lift_0051A6D0
} // namespace lift_00622C40

// [0x0062BA00] sub_0062BA00 (94 bytes)
namespace lift_0062BA00 {
// Known callee 0x0062B8B0: CopyStringPairRange (Copy-assigns each 0x38-byte record in [first, last) to consecutive records starting at dest (both std::string members per record); returns one past the last destination record.)
extern char* ext_0062B8B0(char* first, char* last, char* dest);

// @name CopyStringPairRangeReturnEnd_0062BA00
// @summary Copies a 0x38-byte record range via sub_0062B8B0, then returns dest advanced by the record count times 0x38.
extern char* __cdecl fn_0062BA00(char* first, char* last, char* dest) {
    ext_0062B8B0(first, last, dest);

    // Record count = (last - first) / 0x38, signed truncating division.
    const ptrdiff_t bytes = last - first;
    const ptrdiff_t count = bytes / 56;
    return dest + count * 56;
}
} // namespace lift_0062BA00

// [0x006202F0] sub_006202F0 (95 bytes)
namespace lift_006202F0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Callee 0x006A6C87 (18B, signature not identified); takes one pointer-sized argument.
extern void ext_006A6C87(void* arg);
// Once-guard flag word; bit 0 means the object below has been initialized.
extern int mem_00B49E40;
// Static string object returned to the caller.
extern int mem_00B49E24;

// @name GetOnceInitString_006202F0
// @summary Once-guarded initializer for a global string object; builds it via ext_0066AD10, registers a cleanup with ext_006A6C87, and returns its address.
void* fn_006202F0() {
    if ((mem_00B49E40 & 1) == 0) {
        mem_00B49E40 |= 1;
        // The original pushes 0xA97C7C as the second argument; the callee's
        // declared parameter is uint8_t, so only its low byte is passed.
        ext_0066AD10(&mem_00B49E24, static_cast<uint8_t>(0xA97C7Cu));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x91ED70u)));
    }
    return &mem_00B49E24;
}
} // namespace lift_006202F0

// [0x00621130] sub_00621130 (95 bytes)
namespace lift_00621130 {
extern void* __cdecl ext_00621090(void* first, void* last, void* dst_last);

// @name RebaseAfterCopyBackward_00621130
// @summary Backward-copies records [first, last) via sub_00621090, then returns dst_last minus the record-aligned byte span (0x48-byte records).

extern void* __cdecl fn_00621130(void* first, void* last, void* dst_last) {
    ext_00621090(first, last, dst_last);

    const std::uintptr_t first_u = reinterpret_cast<std::uintptr_t>(first);
    const std::uintptr_t last_u = reinterpret_cast<std::uintptr_t>(last);
    const std::uintptr_t dst_u = reinterpret_cast<std::uintptr_t>(dst_last);

    // Signed 32-bit byte span; truncating division by the 0x48-byte record size.
    const std::int32_t span = static_cast<std::int32_t>(last_u - first_u);
    const std::int32_t record_bytes = (span / 72) * 72;

    return reinterpret_cast<void*>(dst_u - static_cast<std::uintptr_t>(static_cast<std::int64_t>(record_bytes)));
}
} // namespace lift_00621130

// [0x00621680]
namespace lift_00621680 {
// @name destroyStringPairRange
// @summary Destroys a range of 0x48-byte elements, each containing two std::string members at +0x00 and +0x1C.
// @field Element +0x00 std::string field_0x00
// @field Element +0x1C std::string field_0x1c


extern void(__thiscall* mem_00924FF4)(void* self);

void __cdecl sub_00621680(uint8_t* begin, uint8_t* end) {
    for (uint8_t* cur = begin; cur != end; cur += 0x48) {
        mem_00924FF4(cur + 0x1C);
        mem_00924FF4(cur);
    }
}
} // namespace lift_00621680

// [0x0062B6F0] sub_0062B6F0 (98 bytes)
namespace lift_0062B6F0 {
// @name Node::notifyLinkedObjects
// @class Node
// @summary Calls virtual slot 0x78 on the object at +0x0C (passing &this->+0x08) if set, then on the object at +0x04 (passing this) if set.
// @field Node +0x04 void* linkA
// @field Node +0x08 uint8_t field_0x08 (embedded subobject; only its address is taken)
// @field Node +0x0C void* linkB
void fn_0062B6F0(void* self) {
    // Virtual slot at byte offset 0x78 of an object's vtable, called as a
    // member function with the object as `this` and one pointer argument.
    using SlotFn = void (*)(void* obj, void* arg);
    auto callSlot = [](void* obj, void* arg) {
        void* vtable = *reinterpret_cast<void**>(obj);
        SlotFn fn = reinterpret_cast<SlotFn>(lift_field<void*>(vtable, 0x78));
        fn(obj, arg);
    };

    // Second link is optional; first link receives the address of the
    // embedded subobject at +0x08.
    void* linkB = lift_field<void*>(self, 0x0C);
    if (linkB != nullptr) {
        void* subobject = static_cast<uint8_t*>(self) + 0x08;
        callSlot(linkB, subobject);
    }

    void* linkA = lift_field<void*>(self, 0x04);
    if (linkA != nullptr) {
        callSlot(linkA, self);
    }
}
} // namespace lift_0062B6F0

// [0x00624DC0] sub_00624DC0 (108 bytes)
namespace lift_00624DC0 {
// IAT slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called on debug-iterator misuse).
extern void (*mem_00925134)();

// Node addresses are stored as 32-bit values to match the original layout.
static inline void* node_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name TreeConstIterator::operator++
// @class TreeConstIterator
// @summary Debug-checked MSVC std::_Tree const iterator increment: advances to the in-order successor node.
// @field TreeConstIterator +0x00 uint32_t container
// @field TreeConstIterator +0x04 uint32_t node
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t parent
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x19 uint8_t isnil
void fn_00624DC0(void* self) {
    if (lift_field<uint32_t>(self, 0) == 0) {
        mem_00925134();
    }

    uint32_t node = lift_field<uint32_t>(self, 4);
    if (lift_field<uint8_t>(node_ptr(node), 0x19) != 0) {
        // Incrementing the head/end sentinel is invalid.
        mem_00925134();
        return;
    }

    uint32_t right = lift_field<uint32_t>(node_ptr(node), 0x08);
    if (lift_field<uint8_t>(node_ptr(right), 0x19) == 0) {
        // Successor is the leftmost node of the right subtree.
        uint32_t cur = right;
        for (;;) {
            uint32_t left = lift_field<uint32_t>(node_ptr(cur), 0x00);
            if (lift_field<uint8_t>(node_ptr(left), 0x19) != 0) {
                break;
            }
            cur = left;
        }
        lift_field<uint32_t>(self, 4) = cur;
        return;
    }

    // No right subtree: climb until we come from a left child.
    uint32_t par = lift_field<uint32_t>(node_ptr(node), 0x04);
    if (lift_field<uint8_t>(node_ptr(par), 0x19) == 0) {
        for (;;) {
            uint32_t curPtr = lift_field<uint32_t>(self, 4);
            if (curPtr != lift_field<uint32_t>(node_ptr(par), 0x08)) {
                break;
            }
            lift_field<uint32_t>(self, 4) = par;
            uint32_t gp = lift_field<uint32_t>(node_ptr(par), 0x04);
            par = gp;
            if (lift_field<uint8_t>(node_ptr(gp), 0x19) != 0) {
                break;
            }
        }
    }
    lift_field<uint32_t>(self, 4) = par;
}
} // namespace lift_00624DC0

// [0x006267B0] sub_006267B0 (111 bytes)
namespace lift_006267B0 {
// Known callee 0x0060B910: unknown::ctorWithTwoStrings (Constructor: stamps vtable 0x009720F4 at this+0, default-constructs the std::string members at this+0x04 and this+0x20 via MSVCP80, zeroes the dwords at this+0x3C and this+0x40, and returns this. Exception-frame setup from the original is omitted.)
extern void* ext_0060B910(void* self);

// Known callee 0x0063D8F0: initFields (Initializes float, integer, and flag fields on the object to default values (0.0f, 10.0f, 20.0f, 0, and 1).)
extern void ext_0063D8F0(void* self);

// Vtable for this class (0x00977734).
extern char mem_00977734[];

// @name Unknown::ctorFloatFields_006267B0
// @class Unknown
// @summary Constructor: runs base ctor, stamps vtable 0x00977734, zeroes twelve floats at this+0x44..+0x70, then calls initFields and returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48
// @field Unknown +0x4C float field_0x4C
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x54 float field_0x54
// @field Unknown +0x58 float field_0x58
// @field Unknown +0x5C float field_0x5C
// @field Unknown +0x60 float field_0x60
// @field Unknown +0x64 float field_0x64
// @field Unknown +0x68 float field_0x68
// @field Unknown +0x6C float field_0x6C
// @field Unknown +0x70 float field_0x70
void* fn_006267B0(void* self) {
    ext_0060B910(self);

    *static_cast<void**>(self) = static_cast<void*>(mem_00977734);

    auto* base = static_cast<std::uint8_t*>(self) + 0x44;
    for (std::uintptr_t off = 0; off < 0x2C + 4; off += 4) {
        *reinterpret_cast<float*>(base + off) = 0.0f;
    }

    ext_0063D8F0(self);
    return self;
}
} // namespace lift_006267B0

// [0x00626E80]
namespace lift_00626E80 {
// @name CopyCtor_00626E80
// @summary Copy constructor calling base copy constructor, setting vtable 0x00977734, and copying member at +0x44.
// @field Class +0x00 uint32_t vtable
// @field Class +0x44 uint8_t field_0x44


extern void* __thiscall ext_0060B990(void* self, const void* other);
extern void* __thiscall ext_006035D0(void* self, const void* other);

void* __thiscall sub_00626E80(void* self, const void* other) {
    ext_0060B990(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x00977734u;
    ext_006035D0(
        reinterpret_cast<uint8_t*>(self) + 0x44,
        reinterpret_cast<const uint8_t*>(other) + 0x44);
    return self;
}
} // namespace lift_00626E80

// [0x00629EE0] sub_00629EE0 (36 bytes)
namespace lift_00629EE0 {
extern int32_t __cdecl ext_00594000(void);
extern float __fastcall ext_00594010(void* self);

// @name sub_00629EE0
// @summary Auto-lifted identical-shape clone of 0x00629E80 (SetValueAndDeltaFromBase).
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
void fn_00629EE0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    // ecx = sub_00594000(); then ecx passed as `this` to sub_00594010.
    const int32_t handle = ext_00594000();
    void* subobject = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle)));
    const float value = ext_00594010(subobject);

    float base30;
    std::memcpy(&base30, base + 0x38, sizeof(float));
    const float delta = value - base30;

    std::memcpy(base + 0x30, &value, sizeof(float));
    std::memcpy(base + 0x34, &delta, sizeof(float));
}
} // namespace lift_00629E80
} // namespace lift_00629EE0

// [0x00627450]
namespace lift_00627450 {
// @name copyMatrixFromTarget_0x60
// @summary Copies 64 bytes (16 dwords) from an indirect sub-object's field into this+0x60
// @field Self +0x28 void* field_0x28
// @field Self +0x60 uint8_t[64] field_0x60


extern uint32_t ext_00647F00(void* self);

void fn_00627450(void* self) {
    void* obj1 = lift_field<void*>(self, 0x28);
    void* obj2 = lift_field<void*>(obj1, 0x158);
    void* obj3 = lift_field<void*>(obj2, 0xac);
    uint32_t src = ext_00647F00(obj3);
    std::memcpy(static_cast<uint8_t*>(self) + 0x60, reinterpret_cast<const void*>(static_cast<uintptr_t>(src)), 0x10 * sizeof(uint32_t));
}
} // namespace lift_00627450

// [0x00626770]
namespace lift_00626770 {
// @name findStringIndex
// @summary Searches a 9-element string table at 0x00A97F70 for a match, returning its index or 0 if not found.


extern uint32_t mem_00924FC0;
extern uint32_t mem_00A97F70[];

typedef uint8_t (__cdecl *StringEqFn)(uint32_t strPtr, uint32_t cstrPtr);

uint32_t sub_00626770(uint32_t arg0) {
    StringEqFn eqFn = reinterpret_cast<StringEqFn>(mem_00924FC0);
    for (int32_t esi = 0; esi < 9; ++esi) {
        if (eqFn(arg0, mem_00A97F70[esi]) != 0) {
            return static_cast<uint32_t>(esi);
        }
    }
    return 0;
}
} // namespace lift_00626770

// [0x00624F10]
namespace lift_00624F10 {
// @name Unknown::lowerBoundNode_00624F10
// @class Unknown
// @summary Binary-tree lower-bound search keyed on a (uint32, uint32) pair; returns the last node not less than the key, or the holder node if none.
// @field Unknown +0x04 void* holder
// @field TreeNode +0x00 void* left
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C uint32_t key_hi
// @field TreeNode +0x10 uint32_t key_lo
// @field TreeNode +0x19 uint8_t is_nil
void* __fastcall fn_00624F10(void* self, void* /*edx*/, const uint32_t* key)
{
    void* holder = lift_field<void*>(self, 0x4);
    void* node = lift_field<void*>(holder, 0x4);
    void* result = holder;

    if (lift_field<uint8_t>(node, 0x19) != 0) {
        return result;
    }

    const uint32_t k1 = key[0];
    const uint32_t k2 = key[1];

    do {
        const uint32_t n1 = lift_field<uint32_t>(node, 0x0C);
        bool goLeft;
        if (k1 < n1) {
            goLeft = true;
        } else if (k1 > n1) {
            goLeft = false;
        } else {
            goLeft = lift_field<uint32_t>(node, 0x10) >= k2;
        }

        if (goLeft) {
            result = node;
            node = lift_field<void*>(node, 0x00);
        } else {
            node = lift_field<void*>(node, 0x08);
        }
    } while (lift_field<uint8_t>(node, 0x19) == 0);

    return result;
}
} // namespace lift_00624F10
