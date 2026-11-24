// Lifted C++ translation unit: lifted/leaf/decompiled_6E0000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstdint>

// [0x006E7390] sub_006E7390 (32 bytes)
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
