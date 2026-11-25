// Lifted C++ translation unit: lifted/leaf/decompiled_6E0000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstdint>
#include <new>
#include <string>

#include <string>
namespace lift_006E7390 {
// @name sub_006E7390
// @summary Auto-lifted identical-shape clone of 0x006D2390 (ForwardArgToCalleeReturnThis).
namespace lift_006D2390 {
extern void ext_006E7340(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_006E7390(void* self, uint32_t arg1) {
    ext_006E7340(self, arg1);
    return self;
}
} // namespace lift_006D2390
} // namespace lift_006E7390
#include <cstdlib>

// [0x006E67C0]
namespace lift_006E67C0 {
// @name Unknown::InitFields0x0C
// @class Unknown
// @summary Initializes a 16-byte object: stores arg2 at +0x00, zeroes +0x04 and +0x08, stores arg1 at +0x0C (thiscall, ret 8).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C


struct Unknown {
    uint32_t field_0x00;
    uint32_t field_0x04;
    uint32_t field_0x08;
    uint32_t field_0x0C;
};

// Thiscall-style: self in ECX, two stack args. Stack args are passed as plain parameters.
void Unknown_InitFields0x0C(Unknown* self, uint32_t arg1, uint32_t arg2) {
    self->field_0x00 = arg2;
    self->field_0x04 = 0;
    self->field_0x08 = 0;
    self->field_0x0C = arg1;
}
} // namespace lift_006E67C0

// [0x006E62A0] sub_006E62A0 (32 bytes)
namespace lift_006E62A0 {
// @name Unknown::SetChainField0x60
// @class Unknown
// @summary Stores a DWORD into +0x60 of this and of every node reached by following the +0x40 link chain.
// @field Unknown +0x40 void* nextNode
// @field Unknown +0x60 DWORD chainValue
void fn_006E62A0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x60) = value;
    void* node = lift_field<void*>(self, 0x40);
    while (node != nullptr) {
        lift_field<DWORD>(node, 0x60) = value;
        node = lift_field<void*>(node, 0x40);
    }
}
} // namespace lift_006E62A0

// [0x006E5710] sub_006E5710 (32 bytes)
namespace lift_006E5710 {
// Known callee 0x006DEEB0: Unknown::GetFlag40 (Returns bit 0x40 of the dword at this+0x18 (0 or 0x40).)
extern uint32_t __fastcall ext_006DEEB0(void* self);

// @name Unknown::MaskByFlag40
// @class Unknown
// @summary Returns `value` if GetFlag40(self) is nonzero, otherwise 0 (branchless select via neg/sbb/and).
extern uint32_t __stdcall fn_006E5710(void* self, uint32_t value) {
    const uint32_t flag = ext_006DEEB0(self);
    const uint32_t mask = (flag != 0u) ? 0xFFFFFFFFu : 0u;
    return value & mask;
}
} // namespace lift_006E5710

// [0x006E8A20]
namespace lift_006E8A20 {
// @name Unknown::SetValueAndFlag
// @class Unknown
// @summary Stores a 32-bit argument at +0x00, sets the flag word at +0x04 to 1, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04

// Thiscall: ECX = this, one stack argument, callee pops 4 bytes (ret 4).
void* __thiscall fn_006E8A20(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x00) = value;
    lift_field<uint32_t>(self, 0x04) = 1;
    return self;
}
} // namespace lift_006E8A20

// [0x006EF810] sub_006EF810 (32 bytes)
namespace lift_006EF810 {
// @name Unknown::SetFlagsLow3Bits
// @class Unknown
// @summary Clears the low 3 bits of this->field_0x34 and ORs in the 32-bit argument (thiscall, ret 4).
// @field Unknown +0x34 uint32_t field_0x34
void fn_006EF810(void* self, uint32_t value) {
    // mov eax,[ecx+0x34]; mov edx,[esp+4]; and al,-8; or eax,edx; mov [ecx+0x34],eax; ret 4
    // "and al,-8" clears only the low byte's bits 0..2, but "or eax,edx" ORs the full
    // 32-bit argument, so the net effect on the whole dword is (field & ~7u) | value.
    uint32_t& field = lift_field<uint32_t>(self, 0x34);
    field = (field & ~7u) | value;
}
} // namespace lift_006EF810

// [0x006E6AD0] sub_006E6AD0 (32 bytes)
namespace lift_006E6AD0 {
// @name Unknown::StoreSlot31ResultIfPresent
// @class Unknown
// @summary If the object pointer at self+0 is non-null, calls its vtable slot 31 (+0x7C) and stores the returned double to *out (stack arg).
// @field Unknown +0x00 void* field_0x00

// Thiscall virtual method returning a double (result left in st0 by the original).
typedef double(__thiscall* Slot31Fn)(void* self);

// ecx = self (pointer whose first dword is an object pointer), [esp+4] = double* out.
extern void __stdcall fn_006E6AD0(void* self, double* out) {
    void* obj = *reinterpret_cast<void**>(self);
    if (obj == nullptr) {
        return;
    }
    void** vtbl = *reinterpret_cast<void***>(obj);
    Slot31Fn slot = reinterpret_cast<Slot31Fn>(vtbl[31]); // +0x7C / 4 = slot 31
    const double value = slot(obj);
    *out = value;
}
} // namespace lift_006E6AD0

// [0x006E9AE0] sub_006E9AE0 (32 bytes)
namespace lift_006E9AE0 {
// Callee 0x006DC460: Unknown::GetValueIfCountPositive (returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0).
extern int32_t ext_006DC460(uint32_t self);
// Callee 0x006C95F0: sub_006C95F0 (15 bytes, not yet lifted; takes ecx, returns eax).
extern uint32_t ext_006C95F0(uint32_t self);
// Callee 0x006C9F70: sub_006C9F70 (getter returning float field at offset +0x14).
extern float ext_006C9F70(uint32_t self);
// Callee 0x00872828: thunk_MSVCR80__ftol (IAT jump thunk forwarding to MSVCR80!_ftol; float -> int64 in edx:eax).
extern int64_t ext_00872828(float value);

// @name Unknown::GetChildFloatAsInt64
// @class Unknown
// @summary Reads the child pointer at +0x04, derives a value from it via helper calls, and returns that float truncated to int64.
// @field Unknown +0x04 uint32_t field_0x04
int64_t fn_006E9AE0(void* self) {
    // mov ecx, [ecx+4]
    uint32_t child = lift_field<uint32_t>(self, 0x04);
    // call ext_006DC460 (ecx = child); mov ecx, eax
    int32_t count_value = ext_006DC460(child);
    // call ext_006C95F0 (ecx = count_value); mov ecx, eax
    uint32_t mid = ext_006C95F0(static_cast<uint32_t>(count_value));
    // call ext_006C9F70 (ecx = mid); result float left on the x87 stack
    float f = ext_006C9F70(mid);
    // jmp ext_00872828: tail call, its int64 result is the return value
    return ext_00872828(f);
}
} // namespace lift_006E9AE0

// [0x006EA410] sub_006EA410 (36 bytes)
namespace lift_006EA410 {
extern double mem_00B5E0E8;
extern double mem_00B5E0F0;
extern double mem_00B5E0F8;
extern uint32_t mem_00925284; // holds address of the CRT _HUGE double constant

// @name negateHugeConstantsToGlobals
// @summary Loads the CRT _HUGE constant, negates it, and stores the result into three globals.
// (no class; no struct field offsets accessed)
void fn_006EA410(void) {
    const double huge =
        *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5E0E8 = -huge;
    mem_00B5E0F0 = -huge;
    mem_00B5E0F8 = -huge;
}
} // namespace lift_006EA410

// [0x006E6410] sub_006E6410 (36 bytes)
namespace lift_006E6410 {
// @name sub_006E6410
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B5DDB8;
extern double mem_00B5DDC0;
extern double mem_00B5DDC8;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_006E6410(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5DDB8 = -huge;
    mem_00B5DDC0 = -huge;
    mem_00B5DDC8 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_006E6410

// [0x006E9D00] sub_006E9D00 (36 bytes)
namespace lift_006E9D00 {
// @name sub_006E9D00
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B5DF50;
extern double mem_00B5DF58;
extern double mem_00B5DF60;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_006E9D00(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5DF50 = -huge;
    mem_00B5DF58 = -huge;
    mem_00B5DF60 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_006E9D00

// [0x006EA820] sub_006EA820 (41 bytes)
namespace lift_006EA820 {
extern uint32_t mem_00B5E0B0;
extern uint32_t mem_00B5E0B4;
extern uint32_t mem_00B5E0B8;
extern uint32_t mem_00B5E0BC;

// @name sub_006EA820_initGlobalTriple
// @summary Stores four 32-bit constants into globals mem_00B5E0B0..mem_00B5E0BC (two pointer-like values, one second pointer, and zero).
void fn_006EA820(void) {
    mem_00B5E0B0 = 0x00B5E0A8u;
    mem_00B5E0B8 = 0x00AAA350u;
    mem_00B5E0B4 = 0x00B5F050u;
    mem_00B5E0BC = 0x00000000u;
}
} // namespace lift_006EA820

// [0x006E7120] sub_006E7120 (41 bytes)
namespace lift_006E7120 {
// Known callee 0x00711BA0: getSubobjectField_0x18 (Calls fn_0071E680 on self and returns the double at offset +0x18 of the returned subobject.)
extern double __fastcall ext_00711BA0(void* self);
// .rdata pointer at 0x00925284 -> 0x0062D360 (a double constant, _HUGE)
extern uint32_t mem_00925284;

// @name getFieldA0OrNegHuge
// @class Unknown
// @summary If self->+0x00 is nonzero, tail-returns ext_00711BA0(self); otherwise returns *(double*)(self->+0x08 + 0xA0), or -_HUGE if that pointer is null.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0xA0 double field_0xA0 (accessed through the pointer at +0x08)
extern double __fastcall fn_006E7120(void* self) {
    auto* s = static_cast<uint32_t*>(self);
    if (s[0x00 / 4] != 0) {
        return ext_00711BA0(self);
    }
    const uintptr_t sub = static_cast<uintptr_t>(s[0x08 / 4]);
    if (sub == 0) {
        const double huge = *reinterpret_cast<const double*>(
            static_cast<uintptr_t>(mem_00925284));
        return -huge;
    }
    return *reinterpret_cast<const double*>(sub + 0xA0);
}
} // namespace lift_006E7120

// [0x006EFE00] sub_006EFE00 (34 bytes)
namespace lift_006EFE00 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobject
// @class Unknown
// @summary Forwards two stack arguments plus two constants to storeArgsAndNotifyChild on the subobject at this+0x1D38.
// @field Unknown +0x1D38 uint8_t field_1D38 (address taken only; passed as `this` to ext_00711D40)
void fn_006EFE00(void* self, uint32_t arg1, void* arg2) {
    void* sub = &lift_field<uint8_t>(self, 0x1D38);
    ext_00711D40(sub, arg1, arg2, 0x006C8820u, 0x006C8D60u);
}
} // namespace lift_006EFE00

// [0x006EFEA0]
namespace lift_006EFEA0 {
// @name Unknown::forwardArgsToSubobject1E48
// @class Unknown
// @summary Forwards two stack arguments plus two constant addresses to ext_00711D40 on the subobject at this+0x1E48.
// @field Unknown +0x1E48 void* field_0x1e48

extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

extern void sub_006EFEA0(void* self, uint32_t arg1, void* arg2) {
    void* subobject = static_cast<uint8_t*>(self) + 0x1E48;
    ext_00711D40(subobject,
                 arg1,
                 arg2,
                 0x006C8B20u,
                 0x006C8A60u);
}
} // namespace lift_006EFEA0

// [0x006EFDC0] sub_006EFDC0 (34 bytes)
namespace lift_006EFDC0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobject1CB0
// @class Unknown
// @summary Forwards two stack arguments, plus two constant immediates, to storeArgsAndNotifyChild on the subobject at this+0x1CB0.
// @field Unknown +0x1CB0 void* field_1CB0 (address computed as this + 0x1CB0 and passed on; not dereferenced here)
void fn_006EFDC0(void* self, uint32_t arg1, void* arg2) {
    // Pushed immediates 0x006C8CA0 and 0x006C8BE0 are passed as the callee's arg3 and arg4 values.
    ext_00711D40(static_cast<uint8_t*>(self) + 0x1CB0, arg1, arg2, 0x006C8CA0u, 0x006C8BE0u);
}
} // namespace lift_006EFDC0

// [0x006EFFE0] sub_006EFFE0 (34 bytes)
namespace lift_006EFFE0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2068
// @class Unknown
// @summary Forwards two arguments plus two constants to the subobject at self+0x2068 via storeArgsAndNotifyChild.
// @field Unknown +0x2068 uint8_t field_2068
void fn_006EFFE0(void* self, uint32_t arg1, void* arg2) {
    void* subobject = static_cast<uint8_t*>(self) + 0x2068;
    ext_00711D40(subobject, arg1, arg2, 0x006C8B10u, 0x006C8A50u);
}
} // namespace lift_006EFFE0

// [0x006EFFA0] sub_006EFFA0 (34 bytes)
namespace lift_006EFFA0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name ForwardToChildSubobject1FE0
// @summary Forwards its two stack arguments, plus two constants, to ext_00711D40 on the subobject at this+0x1FE0 (thiscall, ret 8).
// @field Unknown +0x1FE0 uint8_t field_0x1FE0 (address only; subobject is passed as `this`, not dereferenced here)
void fn_006EFFA0(void* self, uint32_t arg1, void* arg2) {
    void* child = static_cast<uint8_t*>(self) + 0x1FE0;
    ext_00711D40(child, arg1, arg2, 0x006C8990u, 0x006C88D0u);
}
} // namespace lift_006EFFA0

// [0x006EFCB0] sub_006EFCB0 (34 bytes)
namespace lift_006EFCB0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::ForwardArgsToSubobject1A08
// @class Unknown
// @summary Forwards two stack arguments plus two constant data words to the callee at 0x00711D40, using the subobject at this+0x1A08 as its `this`. Thiscall, callee cleans 8 bytes (ret 8).
// @field Unknown +0x1A08 void* field_0x1A08 (embedded subobject; address only, passed as `this` to 0x00711D40)
extern void __thiscall fn_006EFCB0(void* self, uint32_t arg1, void* arg2) {
    constexpr uint32_t kConstArg3 = 0x006C8B40u;
    constexpr uint32_t kConstArg4 = 0x006C8A80u;
    void* const sub = reinterpret_cast<void*>(static_cast<uintptr_t>(
        reinterpret_cast<uintptr_t>(self) + 0x1A08u));
    ext_00711D40(sub, arg1, arg2, kConstArg3, kConstArg4);
}
} // namespace lift_006EFCB0

// [0x006EFF00] sub_006EFF00 (34 bytes)
namespace lift_006EFF00 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// Data addresses pushed as immediates by the caller.
extern char mem_006C8BD0[];
extern char mem_006C8C90[];

// @name Unknown::forwardArgsToSubobject
// @class Unknown
// @summary Adjusts this by +0x1ED0 and forwards the two stack arguments plus two data-address constants to storeArgsAndNotifyChild.
// @field Unknown +0x1ED0 void* field_0x1ED0
void fn_006EFF00(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<char*>(self) + 0x1ED0;
    ext_00711D40(sub,
                 arg1,
                 arg2,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_006C8C90)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_006C8BD0)));
}
} // namespace lift_006EFF00

// [0x006E0090] sub_006E0090 (48 bytes)
namespace lift_006E0090 {
// @name negateVec3dCopyPair
// @summary Copies a 32-byte record from src to dst, negating three doubles at +0x00/+0x08/+0x10 and copying two 32-bit words at +0x18/+0x1C unchanged.
// @field Unknown +0x00 double field_0x00
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 int32_t field_0x18
// @field Unknown +0x1C int32_t field_0x1c
void fn_006E0090(void* dst, const void* src) {
    auto* d = static_cast<unsigned char*>(dst);
    const auto* s = static_cast<const unsigned char*>(src);

    for (std::size_t off = 0; off < 3 * sizeof(double); off += sizeof(double)) {
        double v;
        std::memcpy(&v, s + off, sizeof(double));
        v = -v;
        std::memcpy(d + off, &v, sizeof(double));
    }

    std::memcpy(d + 0x18, s + 0x18, sizeof(std::int32_t));
    std::memcpy(d + 0x1C, s + 0x1C, sizeof(std::int32_t));
}
} // namespace lift_006E0090

// [0x006E00C0] sub_006E00C0 (48 bytes)
namespace lift_006E00C0 {
// @name Vec4d::scaleCopy
// @class Vec4d
// @summary Writes out[i] = src[i] * scale for the four doubles of a Vec4d (scale passed by value).
// @field Vec4d +0x00 double x
// @field Vec4d +0x08 double y
// @field Vec4d +0x10 double z
// @field Vec4d +0x18 double w
void fn_006E00C0(void* out, const void* src, double scale) {
    lift_field<double>(out, 0x00) = scale * lift_field<const double>(src, 0x00);
    lift_field<double>(out, 0x08) = scale * lift_field<const double>(src, 0x08);
    lift_field<double>(out, 0x10) = scale * lift_field<const double>(src, 0x10);
    lift_field<double>(out, 0x18) = scale * lift_field<const double>(src, 0x18);
}
} // namespace lift_006E00C0

// [0x006E3660]
namespace lift_006E3660 {
// @name vec4d_add
// @summary Component-wise add of two 4-element double vectors: out = a + b.
void sub_006E3660(double* out, const double* a, const double* b) {
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
    out[3] = a[3] + b[3];
}
} // namespace lift_006E3660

// [0x006E3790]
namespace lift_006E3790 {
// @name ScaleDoubleArray
// @summary Writes dst[i] = src[i] * scale for i in [0, count), one double per element.
void fn_006E3790(double* dst, const double* src, double scale, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        dst[i] = src[i] * scale;
    }
}
} // namespace lift_006E3790

// [0x006E3760] sub_006E3760 (48 bytes)
namespace lift_006E3760 {
// @name VecAddDoubles
// @summary Element-wise sum of two double arrays: dst[i] = a[i] + b[i] for i in [0, count).
void fn_006E3760(double* dst, const double* a, const double* b, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        dst[i] = a[i] + b[i];
    }
}
} // namespace lift_006E3760

// [0x006E8670] sub_006E8670 (48 bytes)
namespace lift_006E8670 {
// @name Unknown::copyIndirectBlock32
// @class Unknown
// @summary Copies 32 bytes from (*self + 0x28) into dest and returns dest.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x28 uint8_t field_0x28[32]
void* fn_006E8670(void* self, void* dest) {
    uint8_t* base = lift_field<uint8_t*>(self, 0x00);
    const uint8_t* src = base + 0x28;
    memcpy(dest, src, 8 * sizeof(uint32_t));
    return dest;
}
} // namespace lift_006E8670

// [0x006E85D0] sub_006E85D0 (48 bytes)
namespace lift_006E85D0 {
// @name copyBlockFromPointerField
// @summary Copies a 32-byte (8 x DWORD) block from the address stored at this+0x00 into the caller-supplied destination buffer.
// @field Unknown +0x00 DWORD* field_0x00
void fn_006E85D0(void* self, void* dst) {
    const DWORD* src = *reinterpret_cast<DWORD* const*>(self);
    std::memcpy(dst, src, 8 * sizeof(DWORD));
}
} // namespace lift_006E85D0

// [0x006E8750] sub_006E8750 (48 bytes)
namespace lift_006E8750 {
// @name Unknown::storeDoubleAgainstLimit
// @class Unknown
// @summary Compares a double argument against the double at +0x50; if the argument is below it (or unordered), copies the +0x50 bits into +0x58, otherwise stores the argument bits into +0x58.
// @field Unknown +0x50 double limit
// @field Unknown +0x54 uint32_t limitHi
// @field Unknown +0x58 uint32_t result
// @field Unknown +0x5c uint32_t resultHi
void fn_006E8750(void** self, double value) {
    void* obj = *self;
    double limit = lift_field<double>(obj, 0x50);

    // Matches fcomp + test ah,1 (C0 set): taken when value < limit or unordered (NaN).
    if (!(value >= limit)) {
        lift_field<uint32_t>(obj, 0x58) = lift_field<uint32_t>(obj, 0x50);
        lift_field<uint32_t>(obj, 0x5c) = lift_field<uint32_t>(obj, 0x54);
    } else {
        uint64_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        lift_field<uint32_t>(obj, 0x58) = static_cast<uint32_t>(bits);
        lift_field<uint32_t>(obj, 0x5c) = static_cast<uint32_t>(bits >> 32);
    }
}
} // namespace lift_006E8750

// [0x006E7190] sub_006E7190 (48 bytes)
namespace lift_006E7190 {
// Known callee 0x00711BB0: sub_00711BB0 (Auto-lifted identical-shape clone of 0x00711BA0 (getSubobjectField_0x18).)
extern double ext_00711BB0(void* self);
// RDATA constant 0x00925284: holds the address of the HUGE_VAL double (0x0062D360).
extern DWORD mem_00925284;

// @name Unknown::getDoubleOrHuge
// @class Unknown
// @summary Returns the double at self->+0xA8 (via self->+8) or delegates to ext_00711BB0 when self->+0 is set; returns HUGE_VAL when self->+8 is null.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0xA8 double field_0xA8
double fn_006E7190(void* self) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));

    void* first = lift_field<void*>(self, 0x00);
    if (first != nullptr) {
        return ext_00711BB0(first);
    }

    void* sub = lift_field<void*>(self, 0x08);
    if (sub == nullptr) {
        return huge;
    }
    return lift_field<double>(sub, 0xA8);
}
} // namespace lift_006E7190

// [0x006E6970]
namespace lift_006E6970 {
// @name ForwardToSubobjectsVfunc
// @summary Calls vfunc +0x78 on the subobject at +0x00 with the argument, then vfunc +0x128 on the subobject at +0x04 passing self; null subobjects are skipped.
// @field ForwardToSubobjectsVfunc +0x00 void* field_0x00
// @field ForwardToSubobjectsVfunc +0x04 void* field_0x04
void fn_006E6970(void* self, void* arg) {
    // First subobject: vtable slot at +0x78 (index 30 on 32-bit), receives arg.
    void* first = lift_field<void*>(self, 0x00);
    if (first != nullptr) {
        void* vt = lift_field<void*>(first, 0x00);
        void* fp = lift_field<void*>(vt, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(fp)(first, arg);
    }

    // Second subobject: vtable slot at +0x128 (index 74 on 32-bit), receives self.
    void* second = lift_field<void*>(self, 0x04);
    if (second != nullptr) {
        void* vt = lift_field<void*>(second, 0x00);
        void* fp = lift_field<void*>(vt, 0x128);
        reinterpret_cast<void (*)(void*, void*)>(fp)(second, self);
    }
}
} // namespace lift_006E6970

// [0x006E6850] sub_006E6850 (48 bytes)
namespace lift_006E6850 {
// @name ForwardFlagThenNotifySecondary
// @class Unknown
// @summary Thiscall: forwards the low byte of flags to vtable slot 30 (offset 0x78) of the object at +0x00, then calls vtable slot 74 (offset 0x128) of the object at +0x04 passing this; each step is skipped when its pointer is null.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
extern void __thiscall fn_006E6850(void* self, uint32_t flags) {
    // Target is 32-bit: fields and vtable slots are 4-byte entries.
    uint32_t* fields = static_cast<uint32_t*>(self);

    uint32_t first = fields[0x00 / 4];
    if (first != 0) {
        uint32_t* obj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(first));
        uint32_t* vtable = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj[0]));
        using FirstFn = void (*)(void* thisPtr, uint32_t arg);
        auto fn = reinterpret_cast<FirstFn>(static_cast<uintptr_t>(vtable[0x78 / 4]));
        fn(obj, flags & 0xFFu);
    }

    uint32_t second = fields[0x04 / 4];
    if (second != 0) {
        uint32_t* obj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(second));
        uint32_t* vtable = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj[0]));
        using SecondFn = void (*)(void* thisPtr, void* arg);
        auto fn = reinterpret_cast<SecondFn>(static_cast<uintptr_t>(vtable[0x128 / 4]));
        fn(obj, self);
    }
}
} // namespace lift_006E6850

// [0x006E72A0] sub_006E72A0 (48 bytes)
namespace lift_006E72A0 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern void* __thiscall ext_006D2130(void* self, int32_t arg1, uint32_t arg2);
extern int mem_00993CE0;

// @name initWithInlineBuffer_006E72A0
// @summary Sets the vtable word, initializes an embedded 20-byte sub-object at +0x04 with count 0x10 and value 4, and links its tail pointer at +0x18 to +0x14.
// @field Unknown +0x00 uint32_t vptr
// @field Unknown +0x18 uint32_t field_0x18
void* fn_006E72A0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Initialize embedded sub-object at self+0x04.
    ext_006D2130(base + 0x04, 0x10, 4);

    // self+0x18 = address of self+0x14 (guest address stored as 32-bit).
    const uint32_t link = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x14));
    std::memcpy(base + 0x18, &link, sizeof(link));

    // self+0x00 = constant vtable/data address 0x00993CE0.
    const uint32_t vptr = 0x00993CE0u;
    std::memcpy(base + 0x00, &vptr, sizeof(vptr));

    return self;
}
} // namespace lift_006E72A0

// [0x006E63C0]
namespace lift_006E63C0 {
// @name initHugeVec3
// @summary Initializes three 64-bit globals (6 dwords at 0x00B5DDA0..0x00B5DDB4) from MSVCR80!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5DDA0;
extern uint32_t mem_00B5DDA4;
extern uint32_t mem_00B5DDA8;
extern uint32_t mem_00B5DDAC;
extern uint32_t mem_00B5DDB0;
extern uint32_t mem_00B5DDB4;

void sub_006E63C0() {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = huge_ptr[0];
    const uint32_t hi = huge_ptr[1];
    mem_00B5DDA0 = lo;
    mem_00B5DDA4 = hi;
    mem_00B5DDA8 = lo;
    mem_00B5DDAC = hi;
    mem_00B5DDB0 = lo;
    mem_00B5DDB4 = hi;
}
} // namespace lift_006E63C0

// [0x006E9CB0]
namespace lift_006E9CB0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit global values to MSVCR80!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5DF38;
extern uint32_t mem_00B5DF3C;
extern uint32_t mem_00B5DF40;
extern uint32_t mem_00B5DF44;
extern uint32_t mem_00B5DF48;
extern uint32_t mem_00B5DF4C;

void sub_006E9CB0() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];

    mem_00B5DF38 = lo;
    mem_00B5DF3C = hi;
    mem_00B5DF40 = lo;
    mem_00B5DF44 = hi;
    mem_00B5DF48 = lo;
    mem_00B5DF4C = hi;
}
} // namespace lift_006E9CB0

// [0x006E9B70]
namespace lift_006E9B70 {
// @name sub_006E9B70
// @summary Looks up an item by key 0x00AA8D80 on the object from ext_006C9360(a1), invokes vtable+0x10 if found, and calls ext_00732CB0(a1).


extern int32_t __fastcall ext_006C9360(void* self);
extern void __stdcall ext_00732CB0(int32_t a1);

using vfn_find_t = int32_t (__thiscall*)(void* self, uint32_t key);
using vfn_remove_t = void (__thiscall*)(void* self, int32_t index);

extern void __fastcall fn_006E9B70(void* self, void* a1) {
    (void)self;
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_006C9360(a1))));
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
    auto fn_28 = reinterpret_cast<vfn_find_t>(vtable[0x28 / sizeof(uintptr_t)]);
    int32_t idx = fn_28(obj, 0x00AA8D80u);
    if (idx != -1) {
        uintptr_t* vtable2 = *reinterpret_cast<uintptr_t**>(obj);
        auto fn_10 = reinterpret_cast<vfn_remove_t>(vtable2[0x10 / sizeof(uintptr_t)]);
        fn_10(obj, idx);
    }
    ext_00732CB0(static_cast<int32_t>(reinterpret_cast<uintptr_t>(a1)));
}
} // namespace lift_006E9B70

// [0x006EA050]
namespace lift_006EA050 {
// @name isKnownGlobalId
// @summary Checks whether the given 32-bit value matches one of four global values.

extern uint32_t mem_00B5DF20;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

bool __stdcall sub_006EA050(uint32_t value) {
    return value == mem_00B5DF20 ||
           value == mem_00B5F060 ||
           value == mem_00B5EB78 ||
           value == mem_00B5E400;
}
} // namespace lift_006EA050

// [0x006EF860]
namespace lift_006EF860 {
extern uint32_t mem_00B5E0A8;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalValue
// @summary Checks whether the argument matches any of four global uint32_t constants.
bool __stdcall sub_006EF860(uint32_t value) {
    return value == mem_00B5E0A8 ||
           value == mem_00B5F060 ||
           value == mem_00B5EB78 ||
           value == mem_00B5E400;
}
} // namespace lift_006EF860

// [0x006E0050] sub_006E0050 (64 bytes)
namespace lift_006E0050 {
// @name Unknown::FillDoubleAndSixDwords
// @class Unknown
// @summary Writes a double at +0x00 and six dwords at +0x08..+0x1C into the output block, then returns the block pointer.
// @field Unknown +0x00 double value
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
void* fn_006E0050(void* out, double value, uint32_t a, uint32_t b, uint32_t c,
                  uint32_t d, uint32_t e, uint32_t f) {
    lift_field<double>(out, 0x00) = value;
    lift_field<uint32_t>(out, 0x08) = a;
    lift_field<uint32_t>(out, 0x0C) = b;
    lift_field<uint32_t>(out, 0x10) = c;
    lift_field<uint32_t>(out, 0x14) = d;
    lift_field<uint32_t>(out, 0x18) = e;
    lift_field<uint32_t>(out, 0x1C) = f;
    return out;
}
} // namespace lift_006E0050

// [0x006E6450] sub_006E6450 (74 bytes)
namespace lift_006E6450 {
// @name sub_006E6450
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5DDD0;
extern uint32_t mem_00B5DDD4;
extern uint32_t mem_00B5DDD8;
extern uint32_t mem_00B5DDDC;
extern uint32_t mem_00B5DDE0;
extern uint32_t mem_00B5DDE4;
extern uint32_t mem_00B5DDE8;
extern uint32_t mem_00B5DDEC;
extern uint32_t mem_00925284;

// @name fn_006E6450 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5DDD0 = lo;
    mem_00B5DDD4 = hi;
    mem_00B5DDD8 = lo;
    mem_00B5DDDC = hi;
    mem_00B5DDE0 = lo;
    mem_00B5DDE4 = hi;
    mem_00B5DDE8 = lo;
    mem_00B5DDEC = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006E6450

// [0x006E9D40] sub_006E9D40 (74 bytes)
namespace lift_006E9D40 {
// @name sub_006E9D40
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5DF68;
extern uint32_t mem_00B5DF6C;
extern uint32_t mem_00B5DF70;
extern uint32_t mem_00B5DF74;
extern uint32_t mem_00B5DF78;
extern uint32_t mem_00B5DF7C;
extern uint32_t mem_00B5DF80;
extern uint32_t mem_00B5DF84;
extern uint32_t mem_00925284;

// @name fn_006E9D40 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5DF68 = lo;
    mem_00B5DF6C = hi;
    mem_00B5DF70 = lo;
    mem_00B5DF74 = hi;
    mem_00B5DF78 = lo;
    mem_00B5DF7C = hi;
    mem_00B5DF80 = lo;
    mem_00B5DF84 = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006E9D40

// [0x006EA450] sub_006EA450 (74 bytes)
namespace lift_006EA450 {
// @name sub_006EA450
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5E100;
extern uint32_t mem_00B5E104;
extern uint32_t mem_00B5E108;
extern uint32_t mem_00B5E10C;
extern uint32_t mem_00B5E110;
extern uint32_t mem_00B5E114;
extern uint32_t mem_00B5E118;
extern uint32_t mem_00B5E11C;
extern uint32_t mem_00925284;

// @name fn_006EA450 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5E100 = lo;
    mem_00B5E104 = hi;
    mem_00B5E108 = lo;
    mem_00B5E10C = hi;
    mem_00B5E110 = lo;
    mem_00B5E114 = hi;
    mem_00B5E118 = lo;
    mem_00B5E11C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006EA450

// [0x006EFC00] sub_006EFC00 (74 bytes)
namespace lift_006EFC00 {
// @name sub_006EFC00
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006EFC00(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x1948, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x194C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x1950, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x1954, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x1958, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x195C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006EFC00

// [0x006EFC50] sub_006EFC50 (74 bytes)
namespace lift_006EFC50 {
// @name sub_006EFC50
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006EFC50(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x19E8, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x19EC, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x19F0, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x19F4, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x19F8, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x19FC, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006EFC50
