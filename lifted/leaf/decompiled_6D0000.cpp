// Lifted C++ translation unit: lifted/leaf/decompiled_6D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006D7B50(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006D7DB0(void* self);
#include <cstring>
#include <cstdlib>
#include <new>
#include <string>

#include <string>
// @name sub_006D7B30
// @summary MSVC scalar deleting destructor: calls sub_006D7B50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7B30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7B50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
#include <cstdint>
#include <cmath>

// [0x006D7D90] sub_006D7D90 (32 bytes)
// @name sub_006D7D90
// @summary MSVC scalar deleting destructor: calls sub_006D7DB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7D90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7DB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D2CA0] sub_006D2CA0 (12 bytes)
namespace lift_006D2CA0 {
extern uint32_t ext_006A6C87(uint32_t arg);
extern int mem_006D2CB0;

// @name forwardMem006D2CB0_006D2CA0
// @summary Pushes the address of mem_006D2CB0 as a single cdecl argument, calls sub_006A6C87, and returns its result unchanged.
uint32_t fn_006D2CA0() {
    const uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_006D2CB0));
    return ext_006A6C87(arg);
}
} // namespace lift_006D2CA0

// [0x006D208C] sub_006D208C (15 bytes)
namespace lift_006D208C {
// @name DataTable_006D208C
// @summary 15-byte constant table (values 0x00,0x04,0x01,0x02); bytes decode as nonsense x86, so this is data, not code
// NOTE: this range is not a function; the disassembly is data. No calling code was verified.
static const unsigned char kTable_006D208C[15] = {
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x04, 0x02, 0x04, 0x04, 0x04, 0x04,
};

void fn_006D208C(void* self) {
    (void)self;
    (void)kTable_006D208C;
}
} // namespace lift_006D208C

// [0x006D2064] sub_006D2064 (20 bytes)
namespace lift_006D2064 {
// @name DataTable_006D2064
// @summary 20-byte constant table (00, ten 04s, 01, 04, 02, 04, 04, 04, 03, 8B, FF); the trailing 8B FF is the start of a mov edi,edi prologue, so this is data, not code
// NOTE: this range is not a function; the disassembly is data. No calling code was verified.
static const unsigned char kTable_006D2064[20] = {
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x01, 0x04, 0x02, 0x04, 0x04, 0x04, 0x03, 0x8B, 0xFF,
};

void fn_006D2064(void* self) {
    (void)self;
    (void)kTable_006D2064;
}
} // namespace lift_006D2064

// [0x006D1FB4]
namespace lift_006D1FB4 {
extern uint8_t& mem_u8(uint32_t addr);
extern uint32_t& mem_u32(uint32_t addr);

// @name sub_006D1FB4
// @summary Performs a sequence of byte and dword additions on [ecx], [esp+eax], [ecx+eax], and eax/al.
void sub_006D1FB4(uint32_t eax, uint32_t ecx, uint32_t esp) {
    mem_u8(ecx) += static_cast<uint8_t>(eax);
    mem_u8(esp + eax) += static_cast<uint8_t>(eax);
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
    mem_u32(ecx) += eax;
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
    eax = (eax & ~0xFFu) | ((eax + mem_u8(esp + eax)) & 0xFFu);
    mem_u32(esp + eax) += eax;
    mem_u32(ecx + eax) += eax;
    eax += mem_u32(esp + eax);
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
}
} // namespace lift_006D1FB4

// [0x006D2700] sub_006D2700 (32 bytes)
namespace lift_006D2700 {
// @name Vec3d::Dot
// @class Vec3d
// @summary Returns the dot product of this and another 3-component double vector.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z
double fn_006D2700(const void* self, const void* other) {
    double a[3];
    double b[3];
    std::memcpy(a, self, sizeof(a));
    std::memcpy(b, other, sizeof(b));
    // Same evaluation order as the original: ((z*z' + y*y') + x*x')
    double t = a[2] * b[2];
    t = t + a[1] * b[1];
    t = t + a[0] * b[0];
    return t;
}
} // namespace lift_006D2700

// [0x006D2390] sub_006D2390 (32 bytes)
namespace lift_006D2390 {
extern void ext_007873F0(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_006D2390(void* self, uint32_t arg1) {
    ext_007873F0(self, arg1);
    return self;
}
} // namespace lift_006D2390

// [0x006D7380] sub_006D7380 (32 bytes)
namespace lift_006D7380 {
// @name Unknown::ReleaseSubobjectFC
// @class Unknown
// @summary Releases the object held at this->field_0xFC->field_0x04 via its vtable slot 0 (deleting dtor, flag 1), then nulls that pointer.
// @field Unknown +0xFC void* field_0xFC (pointer to holder struct; owner class not established)
// @field SubobjectHolder +0x04 void* field_0x04 (owned object pointer; released via vtable slot 0 and cleared)

// Holder struct reached through self+0xFC; only its +0x04 slot is touched.
struct SubobjectHolder {
    uint8_t pad_00[0x04];
    void*   field_0x04;
};

void fn_006D7380(void* self) {
    auto* holder = *reinterpret_cast<SubobjectHolder**>(
        reinterpret_cast<uint8_t*>(self) + 0xFC);

    void* obj = holder->field_0x04;
    if (obj != nullptr) {
        // Virtual call: slot 0 of the object's vtable, __thiscall(this, 1)
        // (scalar deleting destructor with "free memory" flag set).
        void** vtable = *reinterpret_cast<void***>(obj);
        using SlotFn = void(__thiscall*)(void*, int);
        reinterpret_cast<SlotFn>(vtable[0])(obj, 1);
    }
    holder->field_0x04 = nullptr;
}
} // namespace lift_006D7380

// [0x006D6AF0]
namespace lift_006D6AF0 {
// @name Unknown::SetByteAtIndex0x1B8
// @class Unknown
// @summary Stores one byte into the byte array at this+0x1B8, indexed by the first stack argument.
// @field Unknown +0x1B8 BYTE field_0x1B8[] (indexed by arg index; byte store target)
void fn_006D6AF0(void* self, DWORD index, BYTE value) {
    lift_field<BYTE>(self, static_cast<ptrdiff_t>(0x1B8) + static_cast<ptrdiff_t>(index)) = value;
}
} // namespace lift_006D6AF0

// [0x006D74E0] sub_006D74E0 (32 bytes)
namespace lift_006D74E0 {
// @name Unknown::SetByteAtIndex0x14C
// @class Unknown
// @summary Stores one byte into the byte array at this+0x14C, indexed by the first stack argument (ret 8).
// @field Unknown +0x14C BYTE field_0x14C[] (indexed by arg index; byte store target)

void fn_006D74E0(void* self, DWORD index, BYTE value) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    base[static_cast<ptrdiff_t>(0x14C) + static_cast<ptrdiff_t>(index)] = value;
}
} // namespace lift_006D74E0

// [0x006D7CA0] sub_006D7CA0 (32 bytes)
namespace lift_006D7CA0 {
// @name sub_006D7CA0
// @class <ClassName> (optional)
// @summary Stores two byte-sized arguments into this+0x1C0 and this+0x1C1 (callee-cleans 8 bytes, ret 0x8).
// @field <ClassName> +0x1C0 uint8_t field_0x1C0
// @field <ClassName> +0x1C1 uint8_t field_0x1C1
void fn_006D7CA0(void* self, uint8_t a, uint8_t b) {
    lift_field<uint8_t>(self, 0x1C0) = a;
    lift_field<uint8_t>(self, 0x1C1) = b;
}
} // namespace lift_006D7CA0

// [0x006D7CC0] sub_006D7CC0 (32 bytes)
namespace lift_006D7CC0 {
// @name descriptiveName: Unknown::SetBytePair0x1C2
// @class Unknown
// @summary Stores two byte arguments into this+0x1C2 and this+0x1C3 (thiscall, ret 8).
// @field Unknown +0x1C2 uint8_t field_0x1C2
// @field Unknown +0x1C3 uint8_t field_0x1C3
void fn_006D7CC0(void* self, uint8_t a, uint8_t b) {
    lift_field<uint8_t>(self, 0x1C2) = a;
    lift_field<uint8_t>(self, 0x1C3) = b;
}
} // namespace lift_006D7CC0

// [0x006D7CE0] sub_006D7CE0 (32 bytes)
namespace lift_006D7CE0 {
// @name Unknown::SetBytesAt0x1C4
// @class Unknown
// @summary Stores two byte arguments into consecutive fields at this+0x1C4 and this+0x1C5 (callee pops 8 bytes).
// @field Unknown +0x1C4 uint8_t field_0x1C4
// @field Unknown +0x1C5 uint8_t field_0x1C5
void fn_006D7CE0(void* self, uint8_t arg1, uint8_t arg2) {
    lift_field<uint8_t>(self, 0x1C4) = arg1;
    lift_field<uint8_t>(self, 0x1C5) = arg2;
}
} // namespace lift_006D7CE0

// [0x006DC460]
namespace lift_006DC460 {
// @name Unknown::GetValueIfCountPositive
// @class Unknown
// @summary Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.
// @field Unknown +0xB8 int32_t field_0xB8
// @field Unknown +0xC8 int32_t* field_0xC8

int32_t Unknown_GetValueIfCountPositive(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0xB8);
    if (count > 0) {
        int32_t* ptr = *reinterpret_cast<int32_t**>(base + 0xC8);
        return *ptr;
    }
    return 0;
}
} // namespace lift_006DC460

// [0x006DE3B0]
namespace lift_006DE3B0 {
// @name Unknown::DispatchViaField0x14
// @class Unknown
// @summary Loads subobject at +0x14; if its +0x9C word is nonzero tail-calls fn_00712000 with it, else tail-calls fn_006E7460 on the subobject.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x9C uint32_t field_0x9c

extern uint32_t __fastcall fn_00712000(void* self);
extern int32_t __fastcall fn_006E7460(void* self);

extern uint32_t __fastcall fn_006DE3B0(void* self) {
    uint8_t* obj = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x14);
    uint32_t v = *reinterpret_cast<uint32_t*>(obj + 0x9C);
    if (v != 0) {
        return fn_00712000(reinterpret_cast<void*>(static_cast<uintptr_t>(v)));
    }
    return static_cast<uint32_t>(fn_006E7460(obj));
}
} // namespace lift_006DE3B0

// [0x006D6AD0] sub_006D6AD0 (32 bytes)
namespace lift_006D6AD0 {
// @name sub_006D6AD0
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_006D6AD0(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x104;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_006D6AD0

// [0x006D7490] sub_006D7490 (32 bytes)
namespace lift_006D7490 {
// @name sub_006D7490
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_006D7490(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x100;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_006D7490

// [0x006D75C0] sub_006D75C0 (36 bytes)
namespace lift_006D75C0 {
// @name sub_006D75C0
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B5D7A0;
extern double mem_00B5D7A8;
extern double mem_00B5D7B0;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_006D75C0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5D7A0 = -huge;
    mem_00B5D7A8 = -huge;
    mem_00B5D7B0 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_006D75C0

// [0x006D1FDC] sub_006D1FDC (36 bytes)
namespace lift_006D1FDC {
// @name GetByteTable006D1FDC
// @class <ClassName> (optional)
// @summary Returns a constant 36-byte lookup table (data, not code) found at 0x006D1FDC; bytes are 00 01, fifteen 02 pairs, 00 01, 8b ff.
// (no @field: function does not access any struct offsets)
static const uint8_t kTable_006D1FDC[36] = {
    0x00, 0x01,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x01,
    0x8b, 0xff,
};

const uint8_t* fn_006D1FDC() {
    return kTable_006D1FDC;
}
} // namespace lift_006D1FDC

// [0x006D66A0]
namespace lift_006D66A0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);
extern void mem_write8(uint32_t addr, uint8_t val);

// @name sub_006D66A0
// @summary Releases and clears the owned sub-object at [this+0xFC]+0x4 and resets flag at +0x100
// @field unknown +0xFC uint32_t field_0xFC
// @field unknown +0x100 uint8_t field_0x100

void __thiscall sub_006D66A0(uint32_t self) {
    uint32_t edi = mem_read32(self + 0xfc);
    uint32_t ecx = mem_read32(edi + 0x4);
    if (ecx != 0) {
        uint32_t vtable = mem_read32(ecx);
        uint32_t dtor = mem_read32(vtable);
        ((void (__thiscall *)(uint32_t, uint32_t))(uintptr_t)dtor)(ecx, 1);
    }
    mem_write32(edi + 0x4, 0);
    mem_write8(self + 0x100, 0);
}
} // namespace lift_006D66A0

// [0x006DE660]
namespace lift_006DE660 {
// @name getItemAt
// @summary Returns the 32-bit element at the given index if within [0, count), or 0 otherwise.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x30 uint32_t* items


extern uint32_t mem_read32(uint32_t addr);

uint32_t __thiscall fn_006DE660(uint32_t self, int32_t index) {
    if (index < 0) {
        return 0;
    }
    uint32_t vtable = mem_read32(self);
    uint32_t fn_count = mem_read32(vtable + 0x14);
    int32_t count = static_cast<int32_t>(
        reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(fn_count)(self));
    if (index >= count) {
        return 0;
    }
    uint32_t items = mem_read32(self + 0x30);
    return mem_read32(items + static_cast<uint32_t>(index) * 4);
}
} // namespace lift_006DE660

// [0x006D8AB0]
namespace lift_006D8AB0 {
// @name init_globals_b5d900
// @summary Stores four constants into globals mem_00B5D900..mem_00B5D90C (two addresses, one address-like value, and zero).

extern uint32_t mem_00B5D900;
extern uint32_t mem_00B5D904;
extern uint32_t mem_00B5D908;
extern uint32_t mem_00B5D90C;

void sub_006D8AB0() {
    mem_00B5D900 = 0x00B5D8F8u;
    mem_00B5D908 = 0x00AA916Cu;
    mem_00B5D904 = 0x00B5EB50u;
    mem_00B5D90C = 0u;
}
} // namespace lift_006D8AB0

// [0x006D8CA0]
namespace lift_006D8CA0 {
extern uint32_t mem_00B5D8F8;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalValue
// @summary Checks whether the given 32-bit value matches any of three global constants.
uint8_t __stdcall sub_006D8CA0(uint32_t val) {
    if (val == mem_00B5D8F8) {
        return 1;
    }
    if (val == mem_00B5EB78) {
        return 1;
    }
    return val == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_006D8CA0

// [0x006D7660] sub_006D7660 (46 bytes)
namespace lift_006D7660 {
// Global double slots written by this function (each 8 bytes at the listed VA).
extern double mem_00B5D7D8;
extern double mem_00B5D7E0;
extern double mem_00B5D7E8;
extern double mem_00B5D7F0;
// Holds a pointer to the CRT _HUGE double (MSVCR80 _HUGE is a double*).
extern double* mem_00925284;

// @name negHugeIntoGlobals
// @summary Stores -(*_HUGE) into four consecutive double globals.
void fn_006D7660(void* self) {
    (void)self; // no arguments are read; signature kept from stub
    const double negHuge = -*mem_00925284;
    mem_00B5D7D8 = negHuge;
    mem_00B5D7E0 = negHuge;
    mem_00B5D7E8 = negHuge;
    mem_00B5D7F0 = negHuge;
}
} // namespace lift_006D7660

// [0x006DAE00] sub_006DAE00 (47 bytes)
namespace lift_006DAE00 {
// @name storeScaledInt64
// @summary Stores (int64_t)(0x0AC0E8D7B0 * scale) into the object's first 8 bytes, where scale is the double argument.
// @field field_0x00 +0x00 int64_t field_0x00
void __fastcall fn_006DAE00(void* self, double scale) {
    // Constant 0x0A'C0E8D7B0 is loaded as an int64 and converted via fild.
    constexpr int64_t kFactorBits = 0x0AC0E8D7B0LL;
    const double product = static_cast<double>(kFactorBits) * scale;
    // Truncating conversion, matching MSVCR80 _ftol.
    const int64_t result = static_cast<int64_t>(product);
    std::memcpy(self, &result, sizeof(result));
}
} // namespace lift_006DAE00

// [0x006D24D0]
namespace lift_006D24D0 {
// @name vec4d_divScalar
// @summary Divides four consecutive doubles at this+0x00..+0x18 by a scalar double argument (stdcall-style, ret 8).
// @field Vec4d +0x00 double field_0x00
// @field Vec4d +0x08 double field_0x08
// @field Vec4d +0x10 double field_0x10
// @field Vec4d +0x18 double field_0x18

void vec4d_divScalar(double divisor, double* self) {
    self[0] = self[0] / divisor;
    self[1] = self[1] / divisor;
    self[2] = self[2] / divisor;
    self[3] = self[3] / divisor;
}
} // namespace lift_006D24D0

// [0x006D74B0] sub_006D74B0 (48 bytes)
namespace lift_006D74B0 {
// @name setFlagWordFromArg
// @class Unknown
// @summary Writes 0 to the dword pointed to by this->field_0xFC if the byte argument is nonzero, otherwise writes 1.
// @field Unknown +0xFC uint32_t* field_0xFC
void fn_006D74B0(void* self, uint8_t flag) {
    auto* base = static_cast<uint8_t*>(self);
    auto* target = *reinterpret_cast<uint32_t**>(base + 0xFC);
    *target = (flag != 0) ? 0u : 1u;
}
} // namespace lift_006D74B0

// [0x006D9030] sub_006D9030 (48 bytes)
namespace lift_006D9030 {
// @name Unknown::setPendingPair
// @class Unknown
// @summary Stores two DWORD arguments into the object at this+0x0C (offsets 0x160/0x164) and sets the flag byte at this+0x15 to 1.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x15 BYTE field_0x15
// @field Unknown +0x160 DWORD field_0x160
// @field Unknown +0x164 DWORD field_0x164
void fn_006D9030(void* self, DWORD arg1, DWORD arg2) {
    void* target = lift_field<void*>(self, 0x0C);
    lift_field<DWORD>(target, 0x160) = arg1;
    lift_field<DWORD>(target, 0x164) = arg2;
    lift_field<BYTE>(self, 0x15) = 1;
}
} // namespace lift_006D9030

// [0x006D26D0] sub_006D26D0 (48 bytes)
namespace lift_006D26D0 {
// @name Vec4d::addAssign
// @class Vec4d
// @summary Adds a source array of four doubles (src, stack arg) element-wise into this (ecx), then returns 4 bytes popped.
// @field Vec4d +0x00 double field_0x00
// @field Vec4d +0x08 double field_0x08
// @field Vec4d +0x10 double field_0x10
// @field Vec4d +0x18 double field_0x18
void fn_006D26D0(double* self, const double* src) {
    self[0] += src[0];
    self[1] += src[1];
    self[2] += src[2];
    self[3] += src[3];
}
} // namespace lift_006D26D0

// [0x006D8210]
namespace lift_006D8210 {
// @name getRecordValueAtIndex
// @class Unknown
// @summary Returns the int32 at +4 of the 12-byte record at the given index in the array at +0x1D4, or -1 if index >= count at +0x1C4.
// @field Unknown +0x1c4 int32_t field_0x1c4
// @field Unknown +0x1d4 uint32_t field_0x1d4
int32_t __thiscall fn_006D8210(void* self, int32_t index) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    int32_t count = lift_field<int32_t>(obj, 0x1c4);
    if (index >= count) {
        return -1;
    }
    uint8_t* records = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(obj, 0x1d4)));
    return lift_field<int32_t>(records, static_cast<ptrdiff_t>(index) * 12 + 4);
}
} // namespace lift_006D8210

// [0x006D8550]
namespace lift_006D8550 {
extern void* __thiscall ext_006FDF70(void* self, int32_t arg);
extern int32_t __fastcall ext_006FC930(void* self);

// @name queryIntAt08ViaSubobject
// @class <Unknown>
// @summary Resolves a sub-object via two ext_006FDF70 calls and ext_006FC930; returns the int32 at +0x08 of the result, or 0 if any step is null.
// @field Unknown +0x08 int32_t field_0x08
extern int32_t __fastcall fn_006D8550(void* self) {
    if (ext_006FDF70(self, 0) == nullptr) {
        return 0;
    }
    void* sub = ext_006FDF70(self, 0);
    uint32_t obj = static_cast<uint32_t>(ext_006FC930(sub));
    if (obj == 0) {
        return 0;
    }
    int32_t value = 0;
    std::memcpy(&value, reinterpret_cast<const void*>(static_cast<uintptr_t>(obj) + 0x08), sizeof value);
    return value;
}
} // namespace lift_006D8550

// [0x006D86C0] sub_006D86C0 (48 bytes)
namespace lift_006D86C0 {
// Known callee 0x006BC380: lifted getter, extern int32_t __fastcall (void* self); returns int32_t field at +0x8.
extern int32_t __fastcall ext_006BC380(void* self);
// Callee 0x006FDF70: unlifted, takes one stack argument (pushed as 0), callee-cleans, returns pointer in eax.
extern uint32_t __stdcall ext_006FDF70(int32_t arg0);

// @name resolveAndReadDword
// @summary Resolves an object via ext_006FDF70(0); if non-null and ext_006BC380 returns non-null, returns the dword the getter points to, else 0.
// (No direct field offsets are accessed in this function body; the +0x8 access lives inside ext_006BC380.)
int32_t fn_006D86C0() {
    uint32_t obj = ext_006FDF70(0);
    if (obj == 0) {
        return 0;
    }
    uint32_t first = static_cast<uint32_t>(ext_006BC380(reinterpret_cast<void*>(static_cast<uintptr_t>(obj))));
    if (first == 0) {
        return 0;
    }
    uint32_t second = static_cast<uint32_t>(ext_006BC380(reinterpret_cast<void*>(static_cast<uintptr_t>(obj))));
    return *reinterpret_cast<int32_t*>(static_cast<uintptr_t>(second));
}
} // namespace lift_006D86C0

// [0x006D8520] sub_006D8520 (48 bytes)
namespace lift_006D8520 {
// External callee (ecx = this, one stack argument of 0; returns eax).
extern int32_t __thiscall ext_006FDF70(void* self, int32_t arg);
// Lifted getter: returns the int32_t at offset +0x14 of its argument.
extern int32_t __fastcall fn_006FC930(void* self);

// @name GetFieldValueViaChain
// @summary Calls ext_006FDF70 to test self; if non-zero, resolves a handle via ext_006FDF70 and fn_006FC930 and returns the int32_t at +0x18 of the result, else returns 0.
// @field Unknown +0x18 int32_t field_0x18
int32_t fn_006D8520(void* self) {
    if (ext_006FDF70(self, 0) == 0) {
        return 0;
    }
    const int32_t handle = ext_006FDF70(self, 0);
    const int32_t raw = fn_006FC930(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle))));
    if (raw == 0) {
        return 0;
    }
    return lift_field<int32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(raw))), 0x18);
}
} // namespace lift_006D8520

// [0x006D2AA0] sub_006D2AA0 (48 bytes)
namespace lift_006D2AA0 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* __thiscall ext_006D2390(void* self, uint32_t arg1);

// @name ForwardIndexedElementToCallee
// @class Unknown
// @summary Computes the address of element `index` (32-byte stride) in the table at self+0x10, forwards it to ext_006D2390 on obj, and returns obj.
// @field Unknown +0x10 uint32_t field_0x10
void* __thiscall fn_006D2AA0(void* self, void* obj, uint32_t index) {
    const uint32_t table = *reinterpret_cast<const uint32_t*>(static_cast<const char*>(self) + 0x10);
    const uint32_t element = table + (index << 5);

    ext_006D2390(obj, element);
    return obj;
}
} // namespace lift_006D2AA0

// [0x006DBE30] sub_006DBE30 (48 bytes)
namespace lift_006DBE30 {
// Known callee 0x006A6F00: sub_006A6F00 (832 bytes), takes two 64-bit values and returns a 64-bit value in edx:eax.
extern int64_t ext_006A6F00(int64_t a, int64_t b);

// @name Unknown::storeInt64Result
// @class Unknown
// @summary Sign-extends a 32-bit value to 64 bits, combines it with the 64-bit value at ecx via ext_006A6F00, and stores the 64-bit result to the output pointer.
// @field Unknown +0x00 int32_t lo
// @field Unknown +0x04 int32_t hi
void fn_006DBE30(void* self, void* out, int32_t value) {
    const uint32_t lo = static_cast<uint32_t>(lift_field<int32_t>(self, 0));
    const uint32_t hi = static_cast<uint32_t>(lift_field<int32_t>(self, 4));
    const int64_t b = static_cast<int64_t>((static_cast<uint64_t>(hi) << 32) | lo);

    const int64_t result = ext_006A6F00(static_cast<int64_t>(value), b);

    lift_field<int32_t>(out, 0) = static_cast<int32_t>(static_cast<uint32_t>(result));
    lift_field<int32_t>(out, 4) = static_cast<int32_t>(static_cast<uint32_t>(static_cast<uint64_t>(result) >> 32));
}
} // namespace lift_006DBE30

// [0x006DECA0] sub_006DECA0 (48 bytes)
namespace lift_006DECA0 {
// @name findNodeByKey
// @summary Walks the chain linked via +0x40 starting at self, returning the first node whose +0x58 key equals the argument (stops early once keys pass it; returns null if none).
// @field <unknown> +0x40 void* field_0x40
// @field <unknown> +0x58 int32_t field_0x58
void* fn_006DECA0(void* self, int32_t key) {
    unsigned char* node = static_cast<unsigned char*>(self);
    for (;;) {
        int32_t k = *reinterpret_cast<int32_t*>(node + 0x58);
        if (k == key) {
            return node;
        }
        if (k >= key) {
            return nullptr;
        }
        node = *reinterpret_cast<unsigned char**>(node + 0x40);
        if (node == nullptr) {
            return nullptr;
        }
    }
}
} // namespace lift_006DECA0

// [0x006D2250]
namespace lift_006D2250 {
// @name Buffer::release
// @class Buffer
// @summary Frees the buffer at +0x10 if non-null and resets fields at +0x00, +0x04, and +0x10 to zero.
// @field Buffer +0x00 uint32_t field_0x00
// @field Buffer +0x04 uint32_t field_0x04
// @field Buffer +0x10 uint32_t field_0x10
void __thiscall sub_006D2250(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t ptr = *reinterpret_cast<uint32_t*>(base + 0x10);
    if (ptr != 0) {
        std::free(reinterpret_cast<void*>(static_cast<uintptr_t>(ptr)));
        *reinterpret_cast<uint32_t*>(base + 0x10) = 0;
    }
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x04) = 0;
}
} // namespace lift_006D2250

// [0x006D2130]
namespace lift_006D2130 {
extern void mem_write32(uint32_t addr, uint32_t val);

// @name sub_006D2130
// @summary Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.
// @field struct_006D2130 +0x00 uint32_t field_0x00
// @field struct_006D2130 +0x04 uint32_t field_0x04
// @field struct_006D2130 +0x08 int32_t field_0x08
// @field struct_006D2130 +0x0C uint32_t field_0x0C
// @field struct_006D2130 +0x10 uint32_t field_0x10

uint32_t __thiscall sub_006D2130(uint32_t self, int32_t arg1, uint32_t arg2) {
    mem_write32(self + 0x10, 0);
    mem_write32(self + 0x00, 0);
    mem_write32(self + 0x04, 0);
    mem_write32(self + 0x0C, arg2);
    int32_t clamped = (arg1 > 1) ? arg1 : 1;
    mem_write32(self + 0x08, static_cast<uint32_t>(clamped));
    return self;
}
} // namespace lift_006D2130

// [0x006D24A0]
namespace lift_006D24A0 {
// @name Vec4d::scale
// @class Vec4d
// @summary Multiplies all four double-precision components of this by a scalar and returns this.
// @field Vec4d +0x00 double field_0x00
// @field Vec4d +0x08 double field_0x08
// @field Vec4d +0x10 double field_0x10
// @field Vec4d +0x18 double field_0x18


void* __thiscall sub_006D24A0(void* this_, double scale) {
    auto* p = static_cast<double*>(this_);
    p[0] *= scale;
    p[1] *= scale;
    p[2] *= scale;
    p[3] *= scale;
    return this_;
}
} // namespace lift_006D24A0

// [0x006DE6E0] sub_006DE6E0 (55 bytes)
namespace lift_006DE6E0 {
// @name FindIndexByValue
// @class <Unknown> (object exposes a vtable; slot 6 returns an element for an index)
// @summary Scans indices 0..count-1 via vtable slot 6 and returns the first index whose element equals target, or -1.
// @field <Unknown> +0x00 void** vtable
// @field <Unknown> +0x20 int32_t count
int32_t fn_006DE6E0(void* self, int32_t target) {
    using GetElementFn = int32_t(__thiscall*)(void*, int32_t);

    auto* base = static_cast<uint8_t*>(self);
    int32_t i = 0;
    if (*reinterpret_cast<int32_t*>(base + 0x20) > 0) {
        void** vtbl = *reinterpret_cast<void***>(base);
        auto getElement = reinterpret_cast<GetElementFn>(vtbl[6]);
        do {
            if (getElement(self, i) == target) {
                return i;
            }
            ++i;
        } while (i < *reinterpret_cast<int32_t*>(base + 0x20));
    }
    return -1;
}
} // namespace lift_006DE6E0

// [0x006D7570]
namespace lift_006D7570 {
// @name initHugeBounds
// @summary Initializes three 64-bit global values (doubles) from MSVCR80.dll!_HUGE


extern uint32_t* mem_00925284;
extern uint32_t mem_00B5D788;
extern uint32_t mem_00B5D78C;
extern uint32_t mem_00B5D790;
extern uint32_t mem_00B5D794;
extern uint32_t mem_00B5D798;
extern uint32_t mem_00B5D79C;

void sub_006D7570() {
    uint32_t* huge_ptr = mem_00925284;
    mem_00B5D788 = huge_ptr[0];
    mem_00B5D78C = huge_ptr[1];
    mem_00B5D790 = huge_ptr[0];
    mem_00B5D794 = huge_ptr[1];
    mem_00B5D798 = huge_ptr[0];
    mem_00B5D79C = huge_ptr[1];
}
} // namespace lift_006D7570

// [0x006DBEF0]
namespace lift_006DBEF0 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5DAA0;
extern uint32_t mem_00B5DAA4;
extern uint32_t mem_00B5DAA8;
extern uint32_t mem_00B5DAAC;
extern uint32_t mem_00B5DAB0;
extern uint32_t mem_00B5DAB4;

// @name initGlobalVec3ToHuge
// @summary Initializes three consecutive 64-bit values (double[3]) at 0x00B5DAA0..0x00B5DAB4 to MSVCR80!_HUGE
void sub_006DBEF0() {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5DAA0 = huge_ptr[0];
    mem_00B5DAA4 = huge_ptr[1];
    mem_00B5DAA8 = huge_ptr[0];
    mem_00B5DAAC = huge_ptr[1];
    mem_00B5DAB0 = huge_ptr[0];
    mem_00B5DAB4 = huge_ptr[1];
}
} // namespace lift_006DBEF0

// [0x006DD980]
namespace lift_006DD980 {
extern uint32_t mem_00925284;
extern uint32_t mem_00B5DC20;
extern uint32_t mem_00B5DC24;
extern uint32_t mem_00B5DC28;
extern uint32_t mem_00B5DC2C;
extern uint32_t mem_00B5DC30;
extern uint32_t mem_00B5DC34;

// @name initHugeVectorGlobals
// @summary Initializes three 64-bit globals from the _HUGE double pointer at 0x00925284.
void sub_006DD980() {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5DC20 = huge_ptr[0];
    mem_00B5DC24 = huge_ptr[1];
    mem_00B5DC28 = huge_ptr[0];
    mem_00B5DC2C = huge_ptr[1];
    mem_00B5DC30 = huge_ptr[0];
    mem_00B5DC34 = huge_ptr[1];
}
} // namespace lift_006DD980

// [0x006D6CB0]
namespace lift_006D6CB0 {
// @name Unknown::InitDefaults
// @class Unknown
// @summary Releases the object at this->field_0xFC, sets default flag bytes at +0x14C..+0x156, and re-initializes the subobject at +0xB0.
// @field Unknown +0x14C uint32_t field_0x14C
// @field Unknown +0x14F uint8_t field_0x14F
// @field Unknown +0x150 uint32_t field_0x150
// @field Unknown +0x154 uint16_t field_0x154
// @field Unknown +0x156 uint8_t field_0x156
// @field Unknown +0xB0 uint8_t field_0xB0

struct Unknown;

void ext_006D7380(void* self);
Unknown* ext_006B9960(Unknown* ecx);

// [0x006D6CB0]
Unknown* fn_006D6CB0(Unknown* ecx) {
    uint8_t* self = reinterpret_cast<uint8_t*>(ecx);

    ext_006D7380(self);

    const uint32_t pattern = 0x01010101u;
    *reinterpret_cast<uint32_t*>(self + 0x14C) = pattern;
    *reinterpret_cast<uint32_t*>(self + 0x150) = pattern;
    *reinterpret_cast<uint16_t*>(self + 0x154) = static_cast<uint16_t>(pattern & 0xFFFFu);
    *reinterpret_cast<uint8_t*>(self + 0x156) = static_cast<uint8_t>(pattern & 0xFFu);
    *reinterpret_cast<uint8_t*>(self + 0x14F) = 0x00;

    return ext_006B9960(reinterpret_cast<Unknown*>(self + 0xB0));
}
} // namespace lift_006D6CB0

// [0x006D23B0]
namespace lift_006D23B0 {
// @name Fill8DwordsReturnSelf
// @summary Copies eight 32-bit stack arguments into the buffer at the hidden pointer and returns that pointer.
uint32_t* Fill8DwordsReturnSelf(uint32_t* self,
                                uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                                uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    self[0] = a0;
    self[1] = a1;
    self[2] = a2;
    self[3] = a3;
    self[4] = a4;
    self[5] = a5;
    self[6] = a6;
    self[7] = a7;
    return self;
}
} // namespace lift_006D23B0

// [0x006D7AA0] sub_006D7AA0 (64 bytes)
namespace lift_006D7AA0 {
extern void* __fastcall ext_006FDF70(void* self, int edx_unused, int arg);
extern int32_t __fastcall fn_006B99C0(void* self);

// @name CheckAndGetNestedInt
// @summary Resolves two chained lookups via sub_006FDF70 and sub_006B99C0; returns the int32 at +0x18 of the second result, or 0 if any lookup is null/zero.
extern int32_t __fastcall fn_006D7AA0(void* self) {
    if (ext_006FDF70(self, 0, 0) == nullptr) {
        return 0;
    }

    void* b = ext_006FDF70(self, 0, 0);
    if (fn_006B99C0(b) == 0) {
        return 0;
    }

    void* c = ext_006FDF70(self, 0, 0);
    int32_t w = fn_006B99C0(c);
    auto base = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(w)));
    return lift_field<int32_t>(base, 0x18);
}
} // namespace lift_006D7AA0

// [0x006D8240]
namespace lift_006D8240 {
// @name descriptiveName (unknown class; two-level indexed table lookup)
// @class (unknown)
// @summary Looks up an entry in a 12-byte-stride table at this+0x1D4 (indexed by arg1, bounded by this+0x1C4); each entry holds a base index and a limit, and the result is this+0x1EC[base + arg2] if arg2 is below the limit, else -1. Thiscall, two stack args, returns int32 in eax.
// @field (unknown) +0x1C4 int32_t field_0x1C4
// @field (unknown) +0x1D4 int32_t* field_0x1D4
// @field (unknown) +0x1EC int32_t* field_0x1EC
int32_t fn_006D8240(void* self, int32_t index, int32_t sub) {
    int32_t result = -1;                                  // or eax, -1
    int32_t count = lift_field<int32_t>(self, 0x1C4);
    if (index < count) {                                  // jge -> return -1
        int32_t* table = lift_field<int32_t*>(self, 0x1D4);
        int32_t* entry = table + index * 3;               // lea edx, [edx+2*edx]; stride 12 bytes
        int32_t limit = entry[1];                         // mov edi, [esi+4*edx+4]
        if (sub < limit) {                                // jge -> return -1
            int32_t base = entry[0];                      // mov eax, [esi]
            int32_t* map = lift_field<int32_t*>(self, 0x1EC);
            result = map[base + sub];                     // mov eax, [eax+4*edx]
        }
    }
    return result;
}
} // namespace lift_006D8240

// [0x006D8680] sub_006D8680 (64 bytes)
namespace lift_006D8680 {
// Known callee 0x006FDF70: sub_006FDF70 (thiscall, this in ecx, one stack arg; returns pointer).
extern void* __thiscall ext_006FDF70(void* self, int32_t arg);
// Known callee 0x006BC380: sub_006BC380 (fastcall, this in ecx; returns object pointer, dereferenced by caller).
extern void* __fastcall ext_006BC380(void* self);

// @name Unknown::GetValueIfTypeOneOrTwo
// @class Unknown
// @summary Looks up a child object via two accessor calls; if its type field at +0x04 is 1 or 2, returns its int32 at +0x30, else 0.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x30 int32_t field_0x30
int32_t GetValueIfTypeOneOrTwo(void* self) {
    if (ext_006FDF70(self, 0) == nullptr) {
        return 0;
    }
    void* child = ext_006FDF70(self, 0);
    void* obj = ext_006BC380(child);
    if (obj == nullptr) {
        return 0;
    }
    int32_t type = lift_field<int32_t>(obj, 0x04);
    if (type == 1 || type == 2) {
        return lift_field<int32_t>(obj, 0x30);
    }
    return 0;
}

extern int32_t fn_006D8680(void* self) {
    return GetValueIfTypeOneOrTwo(self);
}
} // namespace lift_006D8680

// [0x006D86F0] sub_006D86F0 (64 bytes)
namespace lift_006D86F0 {
// Stack-argument call (one int32 pushed, callee pops); returns an int32 handle.
extern int32_t __stdcall ext_006FDF70(int32_t arg);
// Known callee 0x006FC930: sub_006FC930 (Getter returning int32_t field at offset +0x14.)
extern int32_t __fastcall fn_006FC930(void* self);

namespace {
inline void* handle_to_ptr(int32_t value) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(value)));
}
} // namespace

// @name GetChainedValueIfInRange1To2
// @summary Resolves a handle via ext_006FDF70(0) and fn_006FC930; if the resolved pointer is non-null and the int32 it points to is in [1, 2], returns that value, else 0.
// @field Unknown +0x00 int32_t field_0x00
int32_t fn_006D86F0() {
    const int32_t handle = ext_006FDF70(0);
    if (handle == 0) {
        return 0;
    }

    const int32_t ptrValue = fn_006FC930(handle_to_ptr(handle));
    if (ptrValue == 0) {
        return 0;
    }

    const int32_t value = lift_field<int32_t>(handle_to_ptr(ptrValue), 0);
    if (value <= 0 || value > 2) {
        return 0;
    }

    const int32_t result = fn_006FC930(handle_to_ptr(handle));
    return lift_field<int32_t>(handle_to_ptr(result), 0);
}
} // namespace lift_006D86F0

// [0x006D8940] sub_006D8940 (64 bytes)
namespace lift_006D8940 {
// Callee 0x006FDF70: sub_006FDF70 (unlifted). Called as __thiscall-style with
// one stack argument (pushed 0); returns a 32-bit object address (eax).
extern int32_t ext_006FDF70(void* self, int32_t arg);
// Known callee 0x00715550: sub_00715550 (Getter returning int32_t field at offset +0xC.)
extern int32_t ext_00715550(void* self);

// Converts a 32-bit address value returned by the original code into a pointer.
static inline void* lift_ptr_from_u32(int32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v)));
}

// @name GetGatedFieldValue
// @summary Resolves a sub-object via two lookups; if its kind at +0x04 is 1 or 2, returns its +0x30 value, else 0.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x30 int32_t field_0x30
int32_t fn_006D8940(void* self) {
    if (ext_006FDF70(self, 0) == 0) {
        return 0;
    }

    int32_t sub = ext_006FDF70(self, 0);
    int32_t node = ext_00715550(lift_ptr_from_u32(sub));
    if (node == 0) {
        return 0;
    }

    void* obj = lift_ptr_from_u32(node);
    int32_t kind = lift_field<int32_t>(obj, 0x04);
    if (kind == 1 || kind == 2) {
        return lift_field<int32_t>(obj, 0x30);
    }
    return 0;
}
} // namespace lift_006D8940

// [0x006D8FD0] sub_006D8FD0 (64 bytes)
namespace lift_006D8FD0 {
// @name Unknown::SetRangeIfState1
// @class Unknown
// @summary If the state dword at +0x10 equals 1, store two dwords into the object at +0xC (offsets +0x1E8, +0x1EC) and set the flag byte at +0x14 to 1; otherwise return 0.
// @field Unknown +0x0C void* pObj
// @field Unknown +0x10 int32_t state
// @field Unknown +0x14 uint8_t flag
// @field Unknown +0x1E8 uint32_t field_0x1E8  (on the object pointed to by +0x0C)
// @field Unknown +0x1EC uint32_t field_0x1EC  (on the object pointed to by +0x0C)
int fn_006D8FD0(void* self, uint32_t a1, uint32_t a2) {
    if (lift_field<int32_t>(self, 0x10) != 1) {
        return 0;
    }
    void* obj = lift_field<void*>(self, 0x0C);
    lift_field<uint32_t>(obj, 0x1E8) = a1;
    lift_field<uint32_t>(obj, 0x1EC) = a2;
    lift_field<uint8_t>(self, 0x14) = 1;
    return 1;
}
} // namespace lift_006D8FD0

// [0x006D97C0] sub_006D97C0 (64 bytes)
namespace lift_006D97C0 {
extern uint8_t& mem_u8(uint32_t addr);
extern uint32_t& mem_u32(uint32_t addr);

// @name LookupValueByKey
// @summary Scans a 12-entry table (32-byte stride, base 0x00B5D91C) for an entry whose dword key matches the argument and whose flag byte is nonzero; returns that entry's dword value, else 6.
uint32_t fn_006D97C0(uint32_t key) {
    constexpr uint32_t kBase = 0x00B5D91C;
    constexpr uint32_t kStride = 0x20;
    constexpr uint32_t kCount = 0x0C;
    constexpr uint32_t kDefault = 0x6;

    for (uint32_t i = 0; i < kCount; ++i) {
        const uint32_t entry = kBase + i * kStride;
        if (mem_u32(entry + 0x04) == key && mem_u8(entry + 0x0D) != 0) {
            return mem_u32(entry);
        }
    }
    return kDefault;
}
} // namespace lift_006D97C0

// [0x006DE720]
namespace lift_006DE720 {
extern uint32_t __fastcall ext_006DE3E0(void* self);

// @name Unknown::FindItemByUInt32At98
// @class Unknown
// @summary Searches items via vtable+0x18 up to count at +0x20 for one whose ext_006DE3E0 value matches target.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x20 int32_t count
extern void* __fastcall fn_006DE720(void* self, uint32_t /*edx*/, uint32_t target) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0x20);
    if (count <= 0) {
        return nullptr;
    }

    using GetItemFn = void* (__fastcall*)(void*, uint32_t, int32_t);
    for (int32_t i = 0; i < *reinterpret_cast<int32_t*>(base + 0x20); ++i) {
        auto** vtable = *reinterpret_cast<void***>(base);
        auto get_item = reinterpret_cast<GetItemFn>(vtable[0x18 / sizeof(void*)]);
        void* item = get_item(self, 0, i);
        if (ext_006DE3E0(item) == target) {
            return item;
        }
    }

    return nullptr;
}
} // namespace lift_006DE720

// [0x006D7600] sub_006D7600 (74 bytes)
namespace lift_006D7600 {
// @name sub_006D7600
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5D7B8;
extern uint32_t mem_00B5D7BC;
extern uint32_t mem_00B5D7C0;
extern uint32_t mem_00B5D7C4;
extern uint32_t mem_00B5D7C8;
extern uint32_t mem_00B5D7CC;
extern uint32_t mem_00B5D7D0;
extern uint32_t mem_00B5D7D4;
extern uint32_t mem_00925284;

// @name fn_006D7600 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5D7B8 = lo;
    mem_00B5D7BC = hi;
    mem_00B5D7C0 = lo;
    mem_00B5D7C4 = hi;
    mem_00B5D7C8 = lo;
    mem_00B5D7CC = hi;
    mem_00B5D7D0 = lo;
    mem_00B5D7D4 = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006D7600

// [0x006DBF80] sub_006DBF80 (74 bytes)
namespace lift_006DBF80 {
// @name sub_006DBF80
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5DAD0;
extern uint32_t mem_00B5DAD4;
extern uint32_t mem_00B5DAD8;
extern uint32_t mem_00B5DADC;
extern uint32_t mem_00B5DAE0;
extern uint32_t mem_00B5DAE4;
extern uint32_t mem_00B5DAE8;
extern uint32_t mem_00B5DAEC;
extern uint32_t mem_00925284;

// @name fn_006DBF80 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5DAD0 = lo;
    mem_00B5DAD4 = hi;
    mem_00B5DAD8 = lo;
    mem_00B5DADC = hi;
    mem_00B5DAE0 = lo;
    mem_00B5DAE4 = hi;
    mem_00B5DAE8 = lo;
    mem_00B5DAEC = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006DBF80

// [0x006DDA10] sub_006DDA10 (74 bytes)
namespace lift_006DDA10 {
// @name sub_006DDA10
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5DC50;
extern uint32_t mem_00B5DC54;
extern uint32_t mem_00B5DC58;
extern uint32_t mem_00B5DC5C;
extern uint32_t mem_00B5DC60;
extern uint32_t mem_00B5DC64;
extern uint32_t mem_00B5DC68;
extern uint32_t mem_00B5DC6C;
extern uint32_t mem_00925284;

// @name fn_006DDA10 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5DC50 = lo;
    mem_00B5DC54 = hi;
    mem_00B5DC58 = lo;
    mem_00B5DC5C = hi;
    mem_00B5DC60 = lo;
    mem_00B5DC64 = hi;
    mem_00B5DC68 = lo;
    mem_00B5DC6C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006DDA10

// [0x006DE770] sub_006DE770 (74 bytes)
namespace lift_006DE770 {
// @name ListContainsOrAcceptsItem_006DE770
// @class Unknown
// @summary Scans the pointer array at this+0x30 (count at this+0x20). Returns 1 if an entry equals arg1; otherwise, when the low byte of arg2 is nonzero, returns 1 if entry->vtbl[7](arg2, arg1) is nonzero. Returns 0 if no entry matches.
// @field Unknown +0x20 int32_t field_0x20 (entry count)
// @field Unknown +0x30 void** field_0x30 (entry pointer array)
// NOTE: the callee at vtbl[7] is a thiscall (this=entry); it is invoked here through a plain
// function pointer with the entry as the first argument, which matches the original call shape.
uint8_t fn_006DE770(void* self, void* arg1, uint32_t arg2) {
    using VirtualCall7 = uint8_t (*)(void* obj, uint32_t flag, void* item);

    for (int32_t i = 0; i < lift_field<int32_t>(self, 0x20); ++i) {
        void** entries = lift_field<void**>(self, 0x30);
        void* entry = entries[i];
        if (entry == arg1) {
            return 1;
        }
        if ((arg2 & 0xFFu) != 0) {
            void** vtbl = *reinterpret_cast<void***>(entry);
            auto call7 = reinterpret_cast<VirtualCall7>(vtbl[7]);
            if (call7(entry, arg2, arg1) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
} // namespace lift_006DE770

// [0x006D2200]
namespace lift_006D2200 {
// @name DynamicArray::removeAt
// @class DynamicArray
// @summary Removes the element at the given index by shifting subsequent elements left and decrementing the count.
// @field DynamicArray +0x00 int32_t count
// @field DynamicArray +0x0C int32_t elementSize
// @field DynamicArray +0x10 void* data


void __thiscall sub_006D2200(void* self, int32_t index) {
    auto* base = static_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0x00);
    int32_t nextIndex = index + 1;
    if (nextIndex < count) {
        int32_t elementSize = *reinterpret_cast<int32_t*>(base + 0x0C);
        uint8_t* data = *reinterpret_cast<uint8_t**>(base + 0x10);
        size_t bytesToMove = static_cast<size_t>((count - index - 1) * elementSize);
        std::memmove(
            data + index * elementSize,
            data + nextIndex * elementSize,
            bytesToMove);
    }
    *reinterpret_cast<int32_t*>(base + 0x00) = *reinterpret_cast<int32_t*>(base + 0x00) - 1;
}
} // namespace lift_006D2200

// [0x006D9170]
namespace lift_006D9170 {
// @name sub_006D9170
// @summary Sets field_0x10 to the given value, sets field_0x17 to 1, and updates flag 0x10 on field_0x0c + 0x1f0 depending on whether value is 1 or 2.
// @field Self +0x0c void* field_0x0c
// @field Self +0x10 uint32_t field_0x10
// @field Self +0x17 uint8_t field_0x17

extern void __thiscall ext_00711CF0(void* self, uint32_t mask, uint8_t flag);

void __thiscall sub_006D9170(void* self, uint32_t value) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint8_t*>(base + 0x17) = 1;
    *reinterpret_cast<uint32_t*>(base + 0x10) = value;

    uint8_t* target = *reinterpret_cast<uint8_t**>(base + 0x0c) + 0x1f0;
    uint8_t flag = (value == 1 || value == 2) ? 0 : 1;
    ext_00711CF0(target, 0x10, flag);
}
} // namespace lift_006D9170

// [0x006D98F0]
namespace lift_006D98F0 {
extern int32_t __cdecl ext_006D98D0(void);
extern double mem_00993BE0;
extern uint8_t mem_00B5D910[];

// @name getFrameRateForId
// @summary Looks up a double value (defaulting to 30.0) in a 12-entry table at mem_00B5D910 by ID, falling back to ext_006D98D0 when arg0 is 0.
extern double __cdecl fn_006D98F0(int32_t arg0) {
    int32_t id = arg0;
    if (id == 0) {
        if (ext_006D98D0() != 0) {
            id = ext_006D98D0();
        }
    }

    double result = mem_00993BE0;
    for (int32_t i = 0; i < 12; ++i) {
        const uint8_t* entry = mem_00B5D910 + (static_cast<uint32_t>(i) << 5);
        int32_t entry_id = *reinterpret_cast<const int32_t*>(entry + 0x0C);
        if (entry_id == id) {
            if (entry != nullptr) {
                result = *reinterpret_cast<const double*>(entry);
            }
            break;
        }
    }
    return result;
}
} // namespace lift_006D98F0

// [0x006DE690]
namespace lift_006DE690 {
// @name Unknown::FindIndexByName
// @class Unknown
// @summary Searches items [0..count) by case-insensitive name using vtable+0x18 and ext_006DE3B0, returning index or -1.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x20 int32_t count


extern uint32_t __fastcall ext_006DE3B0(void* self);
extern int(__cdecl* mem_009251D0)(const char*, const char*);

extern int32_t __fastcall fn_006DE690(void* self, void* /*edx*/, const char* name) {
    int32_t count = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    if (count <= 0) {
        return -1;
    }

    auto vtable = *reinterpret_cast<void***>(self);
    using GetItemFn = void*(__thiscall*)(void*, int32_t);
    auto get_item = reinterpret_cast<GetItemFn>(vtable[0x18 / sizeof(void*)]);

    for (int32_t i = 0; i < count; ++i) {
        void* item = get_item(self, i);
        const char* item_name = reinterpret_cast<const char*>(static_cast<uintptr_t>(ext_006DE3B0(item)));
        if (mem_009251D0(item_name, name) == 0) {
            return i;
        }
        count = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    }

    return -1;
}
} // namespace lift_006DE690

// [0x006DE460]
namespace lift_006DE460 {
// @name sub_006DE460
// @summary Destroys subobject at +0x4c and base object via sub_006B9D70.
// @field Self +0x4c uint8_t field_0x4c

extern void __thiscall ext_006B9D70(void* self);

extern void __thiscall fn_006DE460(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_006B9D70(base + 0x4c);
    ext_006B9D70(base);
}
} // namespace lift_006DE460

// [0x006D0490] sub_006D0490 (80 bytes)
namespace lift_006D0490 {
// Known callee 0x006D2200: DynamicArray::removeAt (Removes the element at the given index by shifting subsequent elements left and decrementing the count.)
extern void ext_006D2200(void* self, int32_t index);

// @name Unknown::RemoveParallelEntry
// @class Unknown
// @summary Scans backward for an index where the two parallel int32 arrays match (arg1 in the +0x78 array, arg2 in the +0x90 array); on the first match, removes that index from both DynamicArrays at +0x68 and +0x80.
// @field Unknown +0x68 int32_t field_0x68
// @field Unknown +0x78 int32_t* field_0x78
// @field Unknown +0x80 void* field_0x80
// @field Unknown +0x90 int32_t* field_0x90
void fn_006D0490(void* self, int32_t arg1, int32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    const int32_t count = *reinterpret_cast<int32_t*>(base + 0x68);
    int32_t* keysA = *reinterpret_cast<int32_t**>(base + 0x78);
    int32_t* keysB = *reinterpret_cast<int32_t**>(base + 0x90);

    for (int32_t index = count - 1; index >= 0; --index) {
        if (arg2 != keysB[index]) {
            continue;
        }
        if (arg1 != keysA[index]) {
            continue;
        }
        ext_006D2200(base + 0x68, index);
        ext_006D2200(base + 0x80, index);
        return;
    }
}
} // namespace lift_006D0490

// [0x006D8E70]
namespace lift_006D8E70 {
// @name Unknown::resetAndReleaseMember_006D8E70
// @class Unknown
// @summary Re-installs the vtable at +0x0, invokes virtual slot 1 (arg 0) on the member at +0xC, then calls fn_0077FA20 on self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x0C void* member

extern int mem_00993BB8;
extern void __fastcall fn_0077FA20(void* self);

void Unknown_resetAndReleaseMember_006D8E70(void* self) {
    // Install vtable (mem_00993BB8 is the vtable for this class).
    lift_field<void*>(self, 0x00) = reinterpret_cast<void*>(&mem_00993BB8);

    // Virtual call: member->vtable[1](member, 0)
    void* member = lift_field<void*>(self, 0x0C);
    void** vtbl = *reinterpret_cast<void***>(member);
    auto slot1 = reinterpret_cast<void (*)(void*, int)>(vtbl[1]);
    slot1(member, 0);

    // Tail call to the lifted helper with self in the this/fastcall slot.
    fn_0077FA20(self);
}
} // namespace lift_006D8E70

// [0x006DE5F0]
namespace lift_006DE5F0 {
// @name Unknown::removeAndRelease
// @class Unknown
// @summary Removes an item from the owner's pointer array (if present), optionally releases it via its vtable, then calls ReleaseIfNonNull on it.
// @field Unknown +0x18 uint32_t flags (read through GetFlag08)
// @field Unknown +0x20 int32_t count
// @field Unknown +0x30 void** items



// Callees (thiscall lifted as plain functions; self is the first argument).
extern uint32_t ext_006DEEA0(const uint8_t* self);          // Unknown::GetFlag08
extern void     ext_006DE130(void* self, int32_t unused);   // Unknown::ReleaseIfNonNull
extern void     ext_006D2200(void* self, int32_t index);    // DynamicArray::removeAt

// Vtable slot 0x2c (index 11) is invoked with a single argument, flag 0.
using VirtualSlot11Fn = void (*)(void* self, int32_t flag);

void fn_006DE5F0(void* self, void* item) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    if (item != nullptr && ext_006DEEA0(obj) == 0) {
        void** vtable = *static_cast<void***>(item);
        auto slot11 = reinterpret_cast<VirtualSlot11Fn>(vtable[11]);
        slot11(item, 0);
    }

    int32_t count = *reinterpret_cast<int32_t*>(obj + 0x20);
    void** items = *reinterpret_cast<void***>(obj + 0x30);

    for (int32_t i = 0; i < count; ++i) {
        if (items[i] == item) {
            ext_006D2200(obj + 0x20, i);
            break;
        }
    }

    ext_006DE130(item, 0);
}
} // namespace lift_006DE5F0

// [0x006D0370]
namespace lift_006D0370 {
// @name sub_006D0370
// @summary Sets enabled state at +0x1C and, when enabling with positive count at +0x64, invokes callbacks in +0x78 with +0x90 args and calls sub_006D03D0.
// @field Unknown +0x1C uint8_t field_0x1C
// @field Unknown +0x54 uint8_t field_0x54
// @field Unknown +0x64 int32_t field_0x64
// @field Unknown +0x68 int32_t field_0x68
// @field Unknown +0x78 void* field_0x78
// @field Unknown +0x90 void* field_0x90


extern void __fastcall ext_006D03D0(void* self);

extern uint32_t __thiscall fn_006D0370(void* self, uint8_t flag) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (base[0x1C] == flag) {
        return 0;
    }

    if (flag != 0) {
        int32_t count64 = *reinterpret_cast<int32_t*>(base + 0x64);
        if (count64 > 0) {
            int32_t count68 = *reinterpret_cast<int32_t*>(base + 0x68);
            if (count68 > 0) {
                void* sub54 = base + 0x54;
                for (int32_t i = 0; i < count68; ++i) {
                    using CallbackFn = void(__cdecl*)(void*, void*, void*);
                    void** args = *reinterpret_cast<void***>(base + 0x90);
                    CallbackFn* funcs = *reinterpret_cast<CallbackFn**>(base + 0x78);
                    funcs[i](self, sub54, args[i]);
                    count68 = *reinterpret_cast<int32_t*>(base + 0x68);
                }
            }
            ext_006D03D0(self);
        }
    }

    base[0x1C] = flag;
    return 0;
}
} // namespace lift_006D0370

// [0x006D2940]
namespace lift_006D2940 {
// @name Vec3d::equalsEpsilon
// @class Vec3d
// @summary Checks whether two 3D double-precision vectors are component-wise equal within 1e-06.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z


extern const double mem_00993810;

bool __thiscall fn_006D2940(const double* self, const double* other) {
    const double eps = mem_00993810;
    if (std::fabs(self[0] - other[0]) > eps) {
        return false;
    }
    if (std::fabs(self[1] - other[1]) > eps) {
        return false;
    }
    if (std::fabs(self[2] - other[2]) > eps) {
        return false;
    }
    return true;
}
} // namespace lift_006D2940

// [0x006D4140]
namespace lift_006D4140 {
extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006D7AE0(void* self, void* arg);

// @name allocateAndConstruct_006D7AE0
// @summary Allocates 0x1d0 bytes and constructs an object via sub_006D7AE0, returning nullptr on allocation failure.

void* __thiscall fn_006D4140(void* self) {
    void* obj = ext_006A5C62(0x1d0);
    if (!obj) {
        return nullptr;
    }
    return ext_006D7AE0(obj, self);
}
} // namespace lift_006D4140

// [0x006DE970]
namespace lift_006DE970 {
// @name Unknown::FindChildById
// @class Unknown
// @summary Recursively searches child nodes for one whose indirect uint32 at +0x14/+0x98 matches the given ID.
// @field Unknown +0x00 void** vtable


extern uint32_t __fastcall ext_006DE3E0(void* self);

extern void* __thiscall fn_006DE970(void* self, uint32_t id) {
    using GetCountFn = int32_t(__thiscall*)(void*);
    using GetChildFn = void*(__thiscall*)(void*, int32_t);

    void** vtable = *reinterpret_cast<void***>(self);
    int32_t count = reinterpret_cast<GetCountFn>(vtable[0x14 / 4])(self);
    if (count <= 0) {
        return nullptr;
    }

    for (int32_t i = 0; i < count; ++i) {
        vtable = *reinterpret_cast<void***>(self);
        void* child = reinterpret_cast<GetChildFn>(vtable[0x18 / 4])(self, i);

        if (ext_006DE3E0(child) == id) {
            return child;
        }

        void* found = fn_006DE970(child, id);
        if (found != nullptr) {
            return found;
        }

        vtable = *reinterpret_cast<void***>(self);
        count = reinterpret_cast<GetCountFn>(vtable[0x14 / 4])(self);
    }

    return nullptr;
}
} // namespace lift_006DE970

// [0x006D7BE0]
namespace lift_006D7BE0 {
void mem_write32(uint32_t addr, uint32_t val);
void mem_write8(uint32_t addr, uint8_t val);

// @name UnknownClass::resetFields
// @class UnknownClass
// @summary Initializes several dword and byte fields starting at offset 0x1A8 to 4 or 0.
// @field UnknownClass +0x1A8 uint32_t field_0x1a8
// @field UnknownClass +0x1AC uint32_t field_0x1ac
// @field UnknownClass +0x1B0 uint32_t field_0x1b0
// @field UnknownClass +0x1B4 uint32_t field_0x1b4
// @field UnknownClass +0x1B8 uint32_t field_0x1b8
// @field UnknownClass +0x1BC uint32_t field_0x1bc
// @field UnknownClass +0x1C0 uint8_t field_0x1c0
// @field UnknownClass +0x1C1 uint8_t field_0x1c1
// @field UnknownClass +0x1C2 uint8_t field_0x1c2
// @field UnknownClass +0x1C3 uint8_t field_0x1c3
// @field UnknownClass +0x1C4 uint8_t field_0x1c4
// @field UnknownClass +0x1C5 uint8_t field_0x1c5
// @field UnknownClass +0x1C8 uint32_t field_0x1c8
void __thiscall sub_006D7BE0(uint32_t self) {
    mem_write32(self + 0x1A8, 4);
    mem_write32(self + 0x1AC, 4);
    mem_write32(self + 0x1B0, 0);
    mem_write32(self + 0x1B4, 0);
    mem_write32(self + 0x1B8, 0);
    mem_write32(self + 0x1BC, 0);
    mem_write8(self + 0x1C0, 0);
    mem_write8(self + 0x1C1, 0);
    mem_write32(self + 0x1C8, 4);
    mem_write8(self + 0x1C2, 0);
    mem_write8(self + 0x1C3, 0);
    mem_write8(self + 0x1C4, 0);
    mem_write8(self + 0x1C5, 0);
}
} // namespace lift_006D7BE0

// [0x006D6B10]
namespace lift_006D6B10 {
// @name sub_006D6B10
// @summary Copies three int32 fields from +0x1c4/+0x1c8/+0x1cc to output pointers, or clamps to (5, 0, 0) when field_0x1c4 is in [1, 4].
// @field +0x1c4 int32_t field_0x1c4
// @field +0x1c8 int32_t field_0x1c8
// @field +0x1cc int32_t field_0x1cc
void __thiscall sub_006D6B10(void* self, int32_t* out0, int32_t* out1, int32_t* out2) {
    const uint8_t* base = reinterpret_cast<const uint8_t*>(self);
    int32_t v0 = *reinterpret_cast<const int32_t*>(base + 0x1c4);
    if (v0 > 0 && v0 < 5) {
        *out0 = 5;
        *out1 = 0;
        *out2 = 0;
        return;
    }
    *out0 = v0;
    *out1 = *reinterpret_cast<const int32_t*>(base + 0x1c8);
    *out2 = *reinterpret_cast<const int32_t*>(base + 0x1cc);
}
} // namespace lift_006D6B10
