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
