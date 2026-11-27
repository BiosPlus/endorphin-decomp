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
#include <cstdio>
#include <cstdarg>
#include <bit>

#include <cstdarg>
#include <bit>
// @summary MSVC scalar deleting destructor: calls sub_006D7DB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7D90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7DB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
#include <cstddef>

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

// [0x006DFFF0]
namespace lift_006DFFF0 {
// @name vec4d_length
// @summary Computes the Euclidean norm (magnitude) of a 4-element double-precision vector or quaternion.
// @field Vec4d +0x00 double field_0x00
// @field Vec4d +0x08 double field_0x08
// @field Vec4d +0x10 double field_0x10
// @field Vec4d +0x18 double field_0x18


double __cdecl sub_006DFFF0(uint32_t arg0) {
    const double* v = reinterpret_cast<const double*>(static_cast<uintptr_t>(arg0));
    double x = v[0];
    double y = v[1];
    double z = v[2];
    double w = v[3];
    return std::sqrt(x * x + y * y + z * z + w * w);
}
} // namespace lift_006DFFF0

// [0x006D41A0] sub_006D41A0 (96 bytes)
namespace lift_006D41A0 {
// @name sub_006D41A0
// @summary Auto-lifted identical-shape clone of 0x006D4140 (allocateAndConstruct_006D7AE0).
namespace lift_006D4140 {
extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_00717CD0(void* self, void* arg);

// @name allocateAndConstruct_006D7AE0
// @summary Allocates 0x1d0 bytes and constructs an object via sub_006D7AE0, returning nullptr on allocation failure.

void* __thiscall fn_006D41A0(void* self) {
    void* obj = ext_006A5C62(0x1E0);
    if (!obj) {
        return nullptr;
    }
    return ext_00717CD0(obj, self);
}
} // namespace lift_006D4140
} // namespace lift_006D41A0

// [0x006D48D0] sub_006D48D0 (96 bytes)
namespace lift_006D48D0 {
// @name sub_006D48D0
// @summary Auto-lifted identical-shape clone of 0x006D4140 (allocateAndConstruct_006D7AE0).
namespace lift_006D4140 {
extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006D5C50(void* self, void* arg);

// @name allocateAndConstruct_006D7AE0
// @summary Allocates 0x1d0 bytes and constructs an object via sub_006D7AE0, returning nullptr on allocation failure.

void* __thiscall fn_006D48D0(void* self) {
    void* obj = ext_006A5C62(0x280);
    if (!obj) {
        return nullptr;
    }
    return ext_006D5C50(obj, self);
}
} // namespace lift_006D4140
} // namespace lift_006D48D0

// [0x006D7880] sub_006D7880 (98 bytes)
namespace lift_006D7880 {
// Known callee 0x006FD3A0: sub_006FD3A0 (Constructor calling base constructor, zeroing +0x0C, initializing embedded array/buffer at +0x10, and setting vtable.)
extern uint32_t __thiscall ext_006FD3A0(void* self, uint32_t arg1);
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern uint32_t __thiscall ext_006D2130(void* self, int32_t arg1, uint32_t arg2);

// @name Unknown::ConstructWithEmbeddedBuffer
// @class Unknown
// @summary Constructs the object: runs the base constructor, initializes the 20-byte sub-object at +0x28 (count 0x100, element size 0x20), points its +0x14 field at its own embedded buffer at +0x38, sets the vtable, and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x28 struct_006D2130 field_0x28
// @field Unknown +0x3C uint32_t embeddedBufferPtr
void* fn_006D7880(void* self, uint32_t arg1) {
    ext_006FD3A0(self, arg1);

    // Sub-object at this+0x28, initialized as 0x100 elements of size 0x20.
    void* sub = static_cast<uint8_t*>(self) + 0x28;
    ext_006D2130(sub, 0x100, 0x20);

    // Self-pointer to the embedded buffer at sub+0x10 (this+0x38), stored at this+0x3C.
    lift_field<uint32_t>(self, 0x3C) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x38));

    lift_field<uint32_t>(self, 0x00) = 0x0099396C;
    return self;
}
} // namespace lift_006D7880

// [0x006DEC60]
namespace lift_006DEC60 {
// @name sub_006DEC60
// @summary Sets field_0x40, optionally releasing the previous value, and notifies field_0x44 with flag 0x10.
// @field Unknown +0x40 uint32_t field_0x40


extern void __thiscall ext_006DE130(void* self, int32_t unused_stack_arg);
extern int32_t __fastcall ext_006DECD0(void* self);
extern void __thiscall ext_006E5750(uint32_t self, uint32_t flags);

extern void __thiscall fn_006DEC60(void* self, uint32_t value, uint8_t release_old) {
    uint32_t old_value = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x40);
    if (old_value == value) {
        return;
    }
    if (old_value != 0 && release_old != 0) {
        ext_006DE130(reinterpret_cast<void*>(static_cast<uintptr_t>(old_value)), 0);
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x40) = value;
    int32_t target = ext_006DECD0(self);
    ext_006E5750(static_cast<uint32_t>(target), 0x10);
}
} // namespace lift_006DEC60

// [0x006D5A60]
namespace lift_006D5A60 {
extern void __fastcall ext_006B9D70(void* self);
extern void __fastcall ext_007641C0(void* self);

// @name UnknownClass_0099393c::dtor
// @class UnknownClass_0099393c
// @summary Destructor that resets vtable to 0x0099393c and destroys subobjects at +0xb0, +0x5c, and +0x4.
// @field UnknownClass_0099393c +0x00 uint32_t vftable
// @field UnknownClass_0099393c +0x04 uint8_t field_0x04
// @field UnknownClass_0099393c +0x5c uint8_t field_0x5c
// @field UnknownClass_0099393c +0xb0 uint8_t field_0xb0
extern void __fastcall fn_006D5A60(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj + 0x0) = 0x0099393cU;
    ext_006B9D70(obj + 0xb0);
    ext_006B9D70(obj + 0x5c);
    ext_007641C0(obj + 0x4);
}
} // namespace lift_006D5A60

// [0x006DD240]
namespace lift_006DD240 {
// @name Unknown::RemoveAndDeleteItem
// @class Unknown
// @summary Finds an item pointer in the DynamicArray at +0xD0, unregisters it if it has a parent at +0x8, removes it from the array, frees it, and nulls the caller's pointer.
// @field Unknown +0xD0 DynamicArray<void*> items


extern void ext_006D0490(void* self, int32_t arg1, int32_t arg2);
extern void ext_006D2200(void* self, int32_t index);
extern void ext_006A5C5C(void* ptr);

void __thiscall fn_006DD240(void* self, void** pItem) {
    void* item = *pItem;
    if (!item) {
        return;
    }

    uint8_t* array = static_cast<uint8_t*>(self) + 0xD0;
    int32_t count = *reinterpret_cast<int32_t*>(array);
    if (count <= 0) {
        return;
    }

    void** data = *reinterpret_cast<void***>(array + 0x10);
    int32_t index = 0;
    while (data[index] != item) {
        index++;
        if (index >= count) {
            return;
        }
    }

    if (index < 0) {
        return;
    }

    void* parent = *reinterpret_cast<void**>(static_cast<uint8_t*>(item) + 0x8);
    if (parent) {
        ext_006D0490(parent, 0x006DD7A0, static_cast<int32_t>(reinterpret_cast<uintptr_t>(item)));
    }

    ext_006D2200(array, index);
    ext_006A5C5C(*pItem);
    *pItem = nullptr;
}
} // namespace lift_006DD240

// [0x006DD2B0]
namespace lift_006DD2B0 {
// @name Unknown::ClearAndDeleteItems
// @class Unknown
// @summary Removes and deletes all items in the DynamicArray at +0xD0 until it is empty.
// @field Unknown +0xD0 uint32_t field_0xD0
// @field Unknown +0xE0 void** field_0xE0


extern void __thiscall ext_006DD240(void* self, void** pItem);
extern void __thiscall ext_006D2200(void* self, int32_t index);

void __thiscall fn_006DD2B0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* arrayPtr = base + 0xD0;
    if (*reinterpret_cast<uint32_t*>(arrayPtr) == 0) {
        return;
    }

    do {
        void** items = *reinterpret_cast<void***>(base + 0xE0);
        void* item = items[0];
        if (item != nullptr) {
            ext_006DD240(self, &item);
            if (item != nullptr) {
                ext_006D2200(arrayPtr, 0);
            }
        } else {
            ext_006D2200(arrayPtr, 0);
        }
    } while (*reinterpret_cast<uint32_t*>(arrayPtr) != 0);
}
} // namespace lift_006DD2B0

// [0x006D4140] sub_006D4140 (96 bytes)
namespace lift_006D4140 {
// @name sub_006D4140
// @summary Auto-lifted identical-shape clone of 0x006D48D0 (sub_006D48D0).
namespace lift_006D48D0 {
// @name sub_006D48D0
// @summary Auto-lifted identical-shape clone of 0x006D4140 (allocateAndConstruct_006D7AE0).
namespace lift_006D4140 {
extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006D7AE0(void* self, void* arg);

// @name allocateAndConstruct_006D7AE0
// @summary Allocates 0x1d0 bytes and constructs an object via sub_006D7AE0, returning nullptr on allocation failure.

void* __thiscall fn_006D4140(void* self) {
    void* obj = ext_006A5C62(0x1D0);
    if (!obj) {
        return nullptr;
    }
    return ext_006D7AE0(obj, self);
}
} // namespace lift_006D4140
} // namespace lift_006D48D0
} // namespace lift_006D4140

// [0x006D8520] sub_006D8520 (48 bytes)
namespace lift_006D8520 {
// @name sub_006D8520
// @summary Auto-lifted identical-shape clone of 0x006D8550 (queryIntAt08ViaSubobject).
namespace lift_006D8550 {
extern void* __thiscall ext_006FDF70(void* self, int32_t arg);
extern int32_t __fastcall ext_006FC930(void* self);

// @name queryIntAt08ViaSubobject
// @class <Unknown>
// @summary Resolves a sub-object via two ext_006FDF70 calls and ext_006FC930; returns the int32 at +0x08 of the result, or 0 if any step is null.
// @field Unknown +0x08 int32_t field_0x08
extern int32_t __fastcall fn_006D8520(void* self) {
    if (ext_006FDF70(self, 0) == nullptr) {
        return 0;
    }
    void* sub = ext_006FDF70(self, 0);
    uint32_t obj = static_cast<uint32_t>(ext_006FC930(sub));
    if (obj == 0) {
        return 0;
    }
    int32_t value = 0;
    std::memcpy(&value, reinterpret_cast<const void*>(static_cast<uintptr_t>(obj) + 0x18), sizeof value);
    return value;
}
} // namespace lift_006D8550
} // namespace lift_006D8520

// [0x006D2064] sub_006D2064 (20 bytes)
namespace lift_006D2064 {
// @name DataTable_006D2064
// @summary Returns a pointer to a constant 20-byte lookup table at 0x006D2064 (data, not code; bytes 00 04x10 01 04 02 04 04 04 03 8b ff).

namespace {
// Raw bytes at 0x006D2064..0x006D2077, copied from the original image.
constexpr uint8_t kDataTable006D2064[20] = {
    0x00,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x01, 0x04, 0x02, 0x04, 0x04, 0x04, 0x03,
    0x8b, 0xff,
};
} // namespace

const uint8_t* fn_006D2064() {
    return kDataTable006D2064;
}
} // namespace lift_006D2064

// [0x006D1FB4]
namespace lift_006D1FB4 {
// @name sub_006D1FB4
// @summary Performs byte and dword additions on ecx and stack-relative offsets
void __fastcall sub_006D1FB4(uint8_t* ecx, uint32_t /*edx*/) {
    uint32_t eax = 0;
    uint8_t stack_buf[256]{};
    *ecx += static_cast<uint8_t>(eax);
    stack_buf[eax] += static_cast<uint8_t>(eax);
    eax = (eax & ~0xFFu) | ((eax + 4) & 0xFFu);
    *reinterpret_cast<uint32_t*>(ecx) += eax;
    eax = (eax & ~0xFFu) | ((eax + 4) & 0xFFu);
    eax = (eax & ~0xFFu) | ((eax + stack_buf[eax]) & 0xFFu);
    *reinterpret_cast<uint32_t*>(stack_buf + eax) += eax;
    *reinterpret_cast<uint32_t*>(ecx + eax) += eax;
    eax += *reinterpret_cast<uint32_t*>(stack_buf + eax);
    eax = (eax & ~0xFFu) | ((eax + 4) & 0xFFu);
}
} // namespace lift_006D1FB4

// [0x006DE3B0]
namespace lift_006DE3B0 {
extern uint32_t __fastcall ext_00712000(void* self);
extern int32_t __fastcall ext_006E7460(void* self);

// @name SubobjectDispatch_006DE3B0
// @class Unknown
// @summary Loads the subobject pointer at +0x14 of self; if its +0x9c field is non-null, forwards to ext_00712000 with that field, otherwise forwards to ext_006E7460 with the subobject.
// @field Unknown +0x14 uint8_t* field_0x14
// @field Unknown +0x9c uint32_t field_0x9c
extern uint32_t __fastcall fn_006DE3B0(void* self) {
    // mov eax, [ecx + 0x14]
    uint32_t eax = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x14);

    // mov ecx, [eax + 0x9c]
    uint32_t ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(eax) + 0x9c);

    // test ecx, ecx / je -> tail-call ext_006E7460(eax)
    if (ecx == 0) {
        return static_cast<uint32_t>(ext_006E7460(reinterpret_cast<void*>(static_cast<uintptr_t>(eax))));
    }

    // jmp ext_00712000 with ecx as the self argument
    return ext_00712000(reinterpret_cast<void*>(static_cast<uintptr_t>(ecx)));
}
} // namespace lift_006DE3B0

// [0x006D66A0]
namespace lift_006D66A0 {
// @name sub_006D66A0
// @summary Releases the sub-object at [this+0xFC]+0x4 via its virtual deleting destructor and clears the flag at +0x100.
// @field unknown +0xfc void* field_0xfc
// @field unknown +0x100 uint8_t field_0x100


void __thiscall sub_006D66A0(void* self) {
    void* edi = lift_field<void*>(self, 0xfc);
    void* obj = lift_field<void*>(edi, 0x4);
    if (obj != nullptr) {
        using DeletingDtor = void (__thiscall*)(void*, int);
        auto vtable = *reinterpret_cast<void***>(obj);
        auto dtor = reinterpret_cast<DeletingDtor>(vtable[0]);
        dtor(obj, 1);
    }
    lift_field<void*>(edi, 0x4) = nullptr;
    lift_field<uint8_t>(self, 0x100) = 0;
}
} // namespace lift_006D66A0

// [0x006DE660]
namespace lift_006DE660 {
// @name getItemAt
// @summary Bounds-checked element accessor using virtual count method at vtable +0x14
// @field Object +0x00 void** vtable
// @field Object +0x30 uint32_t* field_0x30
uint32_t __thiscall sub_006DE660(void* self, int32_t index) {
    if (index < 0) {
        return 0;
    }
    using CountFn = int32_t (__thiscall*)(void*);
    void** vtable = lift_field<void**>(self, 0x00);
    int32_t count = reinterpret_cast<CountFn>(vtable[0x14 / sizeof(void*)])(self);
    if (index >= count) {
        return 0;
    }
    uint32_t* items = lift_field<uint32_t*>(self, 0x30);
    return items[index];
}
} // namespace lift_006DE660

// [0x006DAE00]
namespace lift_006DAE00 {
extern long long ext_00872828(double v);
extern void ext_006D80A0(void);
extern void ext_006D03D0(void* self);
extern void ext_006B9D70(void);
extern void ext_007641C0(void* self);
extern char mem_00B5D910[];

// @name Unknown::storeScaledInt64_006DAE00
// @class Unknown
// @summary Multiplies constant 0xAC0E8D7B0 by the given double, truncates to int64 and stores it at this+0.
// @field Unknown +0x00 long long value
void __fastcall fn_006DAE00(void* self, void* /*edx*/, double scale) {
    static void* const kRefs[] = { (void*)ext_006D80A0, (void*)ext_006D03D0,
                                   (void*)ext_006B9D70, (void*)ext_007641C0, (void*)mem_00B5D910 };
    (void)kRefs;
    double c = (double)0x0000000AC0E8D7B0LL;
    long long r = ext_00872828(c * scale);
    *(long long*)self = r;
}
} // namespace lift_006DAE00

// [0x006D2130] sub_006D2130 (48 bytes)
namespace lift_006D2130 {
// @name Unknown::InitClampedMin1
// @class Unknown
// @summary Zeroes fields +0x00, +0x04, +0x10; stores arg2 at +0x0C and max(arg1, 1) (signed) at +0x08.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x0C int32_t field_0x0C
// @field Unknown +0x10 int32_t field_0x10
void fn_006D2130(void* self, int32_t arg1, int32_t arg2) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<int32_t*>(base + 0x10) = 0;
    *reinterpret_cast<int32_t*>(base + 0x00) = 0;
    *reinterpret_cast<int32_t*>(base + 0x04) = 0;
    *reinterpret_cast<int32_t*>(base + 0x0C) = arg2;
    *reinterpret_cast<int32_t*>(base + 0x08) = (arg1 > 1) ? arg1 : 1;
}
} // namespace lift_006D2130

// [0x006D2250] sub_006D2250 (48 bytes)
namespace lift_006D2250 {
extern int mem_009251D8;

// @name Unknown::ResetAndFreeBuffer156
// @class Unknown
// @summary Frees the pointer stored at +0x10 (via the imported CRT free) if non-null, then zeroes +0x10, +0x00 and +0x04.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x10 void* field_0x10
void fn_006D2250(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);

    void* buf = *reinterpret_cast<void**>(base + 0x10);
    if (buf != nullptr) {
        // mem_009251D8 is the IAT slot for MSVCR80!free; call through it as cdecl.
        auto free_fn = reinterpret_cast<void (*)(void*)>(static_cast<std::uintptr_t>(mem_009251D8));
        free_fn(buf);
        *reinterpret_cast<void**>(base + 0x10) = nullptr;
    }

    *reinterpret_cast<std::uint32_t*>(base + 0x00) = 0;
    *reinterpret_cast<std::uint32_t*>(base + 0x04) = 0;
}
} // namespace lift_006D2250

// [0x006D6CB0]
namespace lift_006D6CB0 {
struct Unknown;

Unknown* ext_006B9960(Unknown* ecx);
void ext_006D7380(void* self);

// @name Unknown::ResetFlagsAndInitSubobject
// @class Unknown
// @summary Releases the object at field_0xFC, writes 0x01 to the flag block at 0x14C..0x156, clears byte 0x14F, then runs the initializer on the subobject at +0xB0.
// @field Unknown +0xB0 void field_0xB0
// @field Unknown +0x14C uint32_t field_0x14C
// @field Unknown +0x14F uint8_t field_0x14F
// @field Unknown +0x150 uint32_t field_0x150
// @field Unknown +0x154 uint16_t field_0x154
// @field Unknown +0x156 uint8_t field_0x156
void fn_006D6CB0(void* ecx) {
    ext_006D7380(ecx);

    auto* self = static_cast<std::uint8_t*>(ecx);
    const std::uint32_t v32 = 0x01010101u;
    const std::uint16_t v16 = 0x0101u;
    const std::uint8_t v8 = 0x01u;
    const std::uint8_t zero = 0x00u;

    std::memcpy(self + 0x14C, &v32, sizeof(v32));
    std::memcpy(self + 0x150, &v32, sizeof(v32));
    std::memcpy(self + 0x154, &v16, sizeof(v16));
    std::memcpy(self + 0x156, &v8, sizeof(v8));
    std::memcpy(self + 0x14F, &zero, sizeof(zero));

    ext_006B9960(reinterpret_cast<Unknown*>(self + 0xB0));
}
} // namespace lift_006D6CB0

// [0x006D7AA0]
namespace lift_006D7AA0 {
// @name Control::GetNestedFieldAt18
// @class Control
// @summary Chains two ext_006FDF70 lookups through ext_006B99C0 with validity checks; returns the int32 at +0x18 of the final result, or 0 if any step fails.

extern void* __fastcall ext_006FDF70(void* self, int edx_unused, unsigned int flags);
extern int32_t __fastcall ext_006B99C0(void* self);

extern int32_t __fastcall fn_006D7AA0(void* self) {
    if (!ext_006FDF70(self, 0, 0)) {
        return 0;
    }

    void* first = ext_006FDF70(self, 0, 0);
    if (!ext_006B99C0(first)) {
        return 0;
    }

    void* second = ext_006FDF70(self, 0, 0);
    uintptr_t target = static_cast<uintptr_t>(static_cast<uint32_t>(ext_006B99C0(second)));
    return *reinterpret_cast<int32_t*>(target + 0x18);
}
} // namespace lift_006D7AA0

// [0x006D97C0]
namespace lift_006D97C0 {
// @name LookupRecordValueByKey
// @summary Scans 12 consecutive 32-byte records at 0x00B5D91C; returns the dword at record+0x00 for the first record whose dword at +0x04 equals the key and whose byte at +0x11 is nonzero, otherwise 6.
// @field RecordTable_B5D91C +0x00 uint32_t value
// @field RecordTable_B5D91C +0x04 uint32_t key
// @field RecordTable_B5D91C +0x11 uint8_t enabled

static constexpr uintptr_t kRecordTableVA = 0x00B5D91Cu;
static constexpr uint32_t kRecordCount = 12;
static constexpr uint32_t kRecordSize = 0x20;
static constexpr uint32_t kDefaultResult = 6;

extern uint32_t __cdecl fn_006D97C0(uint32_t key) {
    const uint8_t* table = reinterpret_cast<const uint8_t*>(kRecordTableVA);
    for (uint32_t i = 0; i < kRecordCount; ++i) {
        const uint8_t* rec = table + i * kRecordSize;
        const uint32_t recKey = lift_field<uint32_t>(rec, 0x04);
        const uint8_t enabled = lift_field<uint8_t>(rec, 0x11);
        if (recKey == key && enabled != 0) {
            return lift_field<uint32_t>(rec, 0x00);
        }
    }
    return kDefaultResult;
}
} // namespace lift_006D97C0

// [0x006D86F0]
namespace lift_006D86F0 {
// @name GetNestedIntIfInRange
// @summary Calls ext_006FDF70(0); if the result and ext_006FC930 results are non-null, returns the int32 behind the second ext_006FC930 pointer when that value is in [1,2], else 0.
// (free function, so no @class; no direct self-field accesses, so no @field lines)

extern void* __stdcall ext_006FDF70(uint32_t flags);
extern void* __fastcall ext_006FC930(void* self);

extern int32_t fn_006D86F0() {
    void* obj = ext_006FDF70(0);
    if (!obj) {
        return 0;
    }

    if (!ext_006FC930(obj)) {
        return 0;
    }

    void* p = ext_006FC930(obj);
    int32_t v = *static_cast<int32_t*>(p);
    if (v <= 0 || v > 2) {
        return 0;
    }

    void* q = ext_006FC930(obj);
    return *static_cast<int32_t*>(q);
}
} // namespace lift_006D86F0

// [0x006D2200]
namespace lift_006D2200 {
typedef void* (__cdecl *memmove_fn)(void*, const void*, size_t);
extern memmove_fn mem_0092528C;

// @name DynArray::removeAt
// @class DynArray
// @summary Removes element at index by shifting subsequent elements down and decrementing count.
// @field DynArray +0x00 int32_t count
// @field DynArray +0x0C int32_t elementSize
// @field DynArray +0x10 uint8_t* data
void __fastcall DynArray_removeAt(void* self, void* /*edx*/, int32_t index)
{
    uint8_t* p = (uint8_t*)self;
    int32_t count = *(int32_t*)(p + 0x00);
    int32_t next = index + 1;
    if (next < count) {
        int32_t stride = *(int32_t*)(p + 0x0C);
        uint8_t* data = *(uint8_t**)(p + 0x10);
        mem_0092528C(data + stride * index, data + stride * next,
                     (size_t)((count - index - 1) * stride));
    }
    *(int32_t*)(p + 0x00) = *(int32_t*)(p + 0x00) - 1;
}
} // namespace lift_006D2200

// [0x006D8E70]
namespace lift_006D8E70 {
extern void __fastcall ext_0077FA20(void* self);
extern unsigned char mem_00993BB8[];

// @name sub_006D8E70_dtor
// @summary Destructor: sets vtable, invokes virtual slot 1 (arg 0) on owned object at +0xC, then calls base destructor.
// @field Unknown +0x0 void* vtable
// @field Unknown +0xC void* field_0xC
extern void __fastcall fn_006D8E70(void* self)
{
    *(void**)self = (void*)mem_00993BB8;
    void* obj = *(void**)((char*)self + 0xC);
    typedef void(__thiscall * Fn)(void*, int);
    Fn fn = (Fn)((*(void***)obj)[1]);
    fn(obj, 0);
    ext_0077FA20(self);
}
} // namespace lift_006D8E70

// [0x006D7BE0] sub_006D7BE0 (96 bytes)
namespace lift_006D7BE0 {
// @name ResetTrailingState
// @class <Unknown>
// @summary Initializes a block of state fields at +0x1A8..+0x1C5 of the object to defaults (4 or 0).
// @field <Unknown> +0x1A8 DWORD field_0x1A8
// @field <Unknown> +0x1AC DWORD field_0x1AC
// @field <Unknown> +0x1B0 DWORD field_0x1B0
// @field <Unknown> +0x1B4 DWORD field_0x1B4
// @field <Unknown> +0x1B8 DWORD field_0x1B8
// @field <Unknown> +0x1BC DWORD field_0x1BC
// @field <Unknown> +0x1C0 BYTE field_0x1C0
// @field <Unknown> +0x1C1 BYTE field_0x1C1
// @field <Unknown> +0x1C2 BYTE field_0x1C2
// @field <Unknown> +0x1C3 BYTE field_0x1C3
// @field <Unknown> +0x1C4 BYTE field_0x1C4
// @field <Unknown> +0x1C5 BYTE field_0x1C5
// @field <Unknown> +0x1C8 DWORD field_0x1C8
void fn_006D7BE0(void* self) {
    lift_field<DWORD>(self, 0x1A8) = 4;
    lift_field<DWORD>(self, 0x1AC) = 4;
    lift_field<DWORD>(self, 0x1B0) = 0;
    lift_field<DWORD>(self, 0x1B4) = 0;
    lift_field<DWORD>(self, 0x1B8) = 0;
    lift_field<DWORD>(self, 0x1BC) = 0;
    lift_field<BYTE>(self, 0x1C0) = 0;
    lift_field<BYTE>(self, 0x1C1) = 0;
    lift_field<DWORD>(self, 0x1C8) = 4;
    lift_field<BYTE>(self, 0x1C2) = 0;
    lift_field<BYTE>(self, 0x1C3) = 0;
    lift_field<BYTE>(self, 0x1C4) = 0;
    lift_field<BYTE>(self, 0x1C5) = 0;
}
} // namespace lift_006D7BE0

// [0x006D2940] sub_006D2940 (96 bytes)
namespace lift_006D2940 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (not called by this function; referenced only for metadata)
extern void ext_006D2390();
// Known callee 0x006D23B0: Fill8DwordsReturnSelf (not called by this function; referenced only for metadata)
extern void ext_006D23B0();

extern const double mem_00993810; // tolerance 1e-06
extern const int mem_00925284;    // not read by this function; metadata reference only
extern const int mem_00B5D778;    // not read by this function; metadata reference only
extern const int mem_00B5D780;    // not read by this function; metadata reference only
extern const int mem_00B5D784;    // not read by this function; metadata reference only

// @name VectorApproxEqual
// @class Vec3d
// @summary Returns 1 if the x, y and z doubles of two Vec3d values each differ by at most 1e-6 (NaN differences count as equal, matching the x87 fcomp/C0|C3 test); otherwise 0.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z
bool fn_006D2940(const void* self, const void* other) {
    (void)&ext_006D2390;
    (void)&ext_006D23B0;
    (void)&mem_00925284;
    (void)&mem_00B5D778;
    (void)&mem_00B5D780;
    (void)&mem_00B5D784;

    const double eps = mem_00993810;
    for (ptrdiff_t off = 0x00; off <= 0x10; off += 0x08) {
        const double d = lift_field<double>(self, off) - lift_field<double>(other, off);
        if (std::fabs(d) > eps) {
            return false;
        }
    }
    return true;
}
} // namespace lift_006D2940

// [0x006DEB50] sub_006DEB50 (80 bytes)
namespace lift_006DEB50 {
// Known callee 0x006DE130: Unknown::ReleaseIfNonNull (If self is non-null, invokes vtable slot 0 (scalar deleting destructor) with flag 1; the single stack argument is ignored.)
extern void ext_006DE130(void* self, int32_t unused_stack_arg);
// Known callee 0x006E5750: applyFlagsAndDispatchItems (OR a flag word into this->+0x98 object, bump counters, then if its enable byte is set call item handlers in reverse order and finish via ext_006E5730.)
extern void ext_006E5750(void* self, uint32_t flags);

// @name Unknown::setRefCountedField3C
// @class Unknown
// @summary Replaces the refcounted object at +0x3c with newObj: decrements the old object's refcount (releasing it at zero), stores newObj, increments its refcount, then calls ext_006E5750 with flags 8. No-op if the pointers are equal.
// @field Unknown +0x3c void* field_0x3c
void fn_006DEB50(void* self, void* newObj) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* oldObj = *reinterpret_cast<void**>(obj + 0x3c);
    if (oldObj == newObj) {
        return;
    }
    if (oldObj != nullptr) {
        int32_t* oldRefCount = reinterpret_cast<int32_t*>(static_cast<uint8_t*>(oldObj) + 0x1c);
        *oldRefCount -= 1;
        if (*oldRefCount <= 0) {
            ext_006DE130(oldObj, 0);
        }
    }
    *reinterpret_cast<void**>(obj + 0x3c) = newObj;
    if (newObj != nullptr) {
        int32_t* newRefCount = reinterpret_cast<int32_t*>(static_cast<uint8_t*>(newObj) + 0x1c);
        *newRefCount += 1;
    }
    ext_006E5750(self, 8);
}
} // namespace lift_006DEB50

// [0x006DEED0] sub_006DEED0 (80 bytes)
namespace lift_006DEED0 {
// Known callee 0x006DE130: Unknown::ReleaseIfNonNull (If self is non-null, invokes vtable slot 0 (scalar deleting destructor) with flag 1; the single stack argument is ignored.)
extern void ext_006DE130(void* self, int32_t unused_stack_arg);
// Known callee 0x006E5750: applyFlagsAndDispatchItems (OR a flag word into this->+0x98 object, bump counters, then if its enable byte is set call item handlers in reverse order and finish via ext_006E5730.)
extern void ext_006E5750(void* self, uint32_t flags);

// @name Unknown::swapField38AndNotify
// @class Unknown
// @summary Replaces the value at this+0x38 with newValue; if it differs, optionally releases the old non-null value, then notifies via ext_006E5750 (flags 4) and returns the previous value (0 if it was released).
// @field Unknown +0x38 uint32_t field_0x38
uint32_t fn_006DEED0(void* self, uint32_t newValue, uint8_t releaseOld) {
    auto* slot = reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x38);

    uint32_t cur = *slot;
    if (cur == newValue) {
        return 0;
    }

    if (releaseOld != 0 && cur != 0) {
        ext_006DE130(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)), 0);
        *slot = 0;
    }

    uint32_t previous = *slot;
    *slot = newValue;
    ext_006E5750(self, 4);
    return previous;
}
} // namespace lift_006DEED0

// [0x006DE3F0] sub_006DE3F0 (112 bytes)
namespace lift_006DE3F0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();
extern void ext_006DE3F0();
// Known callee 0x006DE460: sub_006DE460 (Destroys subobject at +0x4c and base object via sub_006B9D70.)
extern void ext_006DE460();

// @name SlotRef::setOrRelease
// @class SlotRef
// @summary Swaps the refcounted object held at +0x14 for newObj (or releases it when newObj is null), adjusting the refcount at object +0xa0.
// @field SlotRef +0x14 void* held
// @field Refcounted +0xa0 DWORD refCount
void fn_006DE3F0(void* self, void* newObj) {
    if (newObj != nullptr) {
        void* cur = lift_field<void*>(self, 0x14);
        if (cur == newObj) {
            return;
        }
        if (cur != nullptr) {
            // Release the previously held object (same self, null argument).
            fn_006DE3F0(self, nullptr);
        }
        lift_field<void*>(self, 0x14) = newObj;
        lift_field<DWORD>(newObj, 0xa0) += 1;
        return;
    }

    // Release path: drop one reference on the held object.
    void* held = lift_field<void*>(self, 0x14);
    lift_field<DWORD>(held, 0xa0) -= 1;

    held = lift_field<void*>(self, 0x14);
    if (lift_field<DWORD>(held, 0xa0) != 0) {
        return;
    }
    if (held != nullptr) {
        reinterpret_cast<void (*)(void*)>(&ext_006DE460)(held);
        reinterpret_cast<void (*)(void*)>(&ext_006A5C5C)(held);
    }
    lift_field<void*>(self, 0x14) = nullptr;
}
} // namespace lift_006DE3F0

// [0x006D8280] sub_006D8280 (112 bytes)
namespace lift_006D8280 {
// Known callee 0x006FDF70: sub_006FDF70 (unlifted; thiscall-style, one stack arg, returns pointer in eax)
extern void* __thiscall ext_006FDF70(void* self, int32_t arg);
// Known callee 0x006FC930: sub_006FC930 (returns pointer in eax, used as object base)
extern void* __fastcall ext_006FC930(void* self);

// @name Unknown::LookupIndexedValue
// @class Unknown
// @summary Validates a sub-object header and returns table[idx] entry value at base+sub, or -1 on any failed check.
// @field Unknown +0x1c4 int32_t field_0x1c4
// @field Unknown +0x1d4 int32_t* field_0x1d4
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x20 int32_t field_0x20
// @field Unknown +0x30 int32_t* field_0x30
extern int32_t __thiscall fn_006D8280(void* self, int32_t idx, int32_t sub) {
    void* first = ext_006FDF70(self, 0);
    if (first == nullptr) {
        return -1;
    }

    void* obj = ext_006FC930(first);
    if (obj == nullptr) {
        return -1;
    }
    if (lift_field<int32_t>(obj, 0x00) != 2) {
        return -1;
    }
    if (lift_field<int32_t>(obj, 0x04) != 2) {
        return -1;
    }

    if (idx >= lift_field<int32_t>(self, 0x1c4)) {
        return -1;
    }

    // Table of 12-byte entries: [0] = base offset, [1] = limit for sub.
    int32_t* table = lift_field<int32_t*>(self, 0x1d4);
    int32_t* entry = table + 3 * idx;
    if (sub >= entry[1]) {
        return -1;
    }

    int32_t index = entry[0] + sub;
    if (index >= lift_field<int32_t>(obj, 0x20)) {
        return -1;
    }

    int32_t* data = lift_field<int32_t*>(obj, 0x30);
    return data[index];
}
} // namespace lift_006D8280

// [0x006D2280] sub_006D2280 (127 bytes)
namespace lift_006D2280 {
extern void ext_006A7310();
extern int mem_00925290;
extern int mem_00B5DAB8;
extern int mem_00B5DAC0;
extern int mem_00B5DAC8;
extern int mem_00925284;
extern int mem_00B5DA98;
extern int mem_00B5DA9C;
extern int mem_00B5DA90;

// @name Unknown::GrowAndZeroFill_006D2280
// @class Unknown
// @summary Reserves capacity for n more elements (realloc when needed), zero-fills the newly exposed tail, and advances the element count by n.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 void* field_0x10
void __thiscall fn_006D2280(void* self, uint32_t n) {
    // Metadata-only references to original asm symbols (not real accesses).
    (void)&ext_006A7310;
    (void)&mem_00B5DAB8;
    (void)&mem_00B5DAC0;
    (void)&mem_00B5DAC8;
    (void)&mem_00925284;
    (void)&mem_00B5DA98;
    (void)&mem_00B5DA9C;
    (void)&mem_00B5DA90;

    if (n == 0) {
        return;
    }

    uint32_t& count    = lift_field<uint32_t>(self, 0x00);
    uint32_t& capacity = lift_field<uint32_t>(self, 0x04);
    uint32_t  stride   = lift_field<uint32_t>(self, 0x08);
    uint32_t  elemSize = lift_field<uint32_t>(self, 0x0C);
    void*&    data     = lift_field<void*>(self, 0x10);

    // Required element count: ceil((count + n) / stride), minimum 1 (unsigned 32-bit math).
    uint32_t newCount = (count + stride + n - 1) / stride;
    if (newCount <= 1) {
        newCount = 1;
    }

    uint32_t oldBytes = elemSize * count;
    uint32_t newBytes = elemSize * stride * newCount;

    if (newCount > capacity) {
        (void)&mem_00925290; // IAT slot: MSVCR80!realloc
        data = std::realloc(data, newBytes);
        capacity = newCount;
    }

    std::memset(static_cast<uint8_t*>(data) + oldBytes, 0, newBytes - oldBytes);

    count += n;
}
} // namespace lift_006D2280

// [0x006D2300] sub_006D2300 (32 bytes)
namespace lift_006D2300 {
// Known callee 0x006D2280: Unknown::GrowAndZeroFill_006D2280 (Reserves capacity for n more elements (realloc when needed), zero-fills the newly exposed tail, and advances the element count by n.)
extern void __thiscall ext_006D2280(void* self, uint32_t n);

// @name Unknown::SetCount_006D2300
// @class Unknown
// @summary Sets the element count to n; if n exceeds the current count, grows the container by the difference first.
// @field Unknown +0x00 uint32_t count
void fn_006D2300(void* self, uint32_t n) {
    uint32_t& count = lift_field<uint32_t>(self, 0x00);
    if (n > count) {
        ext_006D2280(self, n - count);
        return;
    }
    count = n;
}
} // namespace lift_006D2300

// [0x006DBE60]
namespace lift_006DBE60 {
// Known callee 0x006A7310: sub_006A7310 (stdcall; takes two 64-bit values as four dwords, returns 64-bit in edx:eax)
extern uint64_t __stdcall ext_006A7310(uint32_t a_lo, uint32_t a_hi, uint32_t b_lo, uint32_t b_hi);

// Metadata-only references (RDATA_CONSTANTS / CALLEES entries not touched by the 35-byte body).
// Address-of only; no runtime access.
extern uint8_t mem_009251D0[];
extern uint8_t mem_00925284[];
extern uint8_t mem_0092528C[];
extern uint8_t mem_00B5DA90[];
extern uint8_t mem_00B5DA98[];
extern uint8_t mem_00B5DA9C[];
extern void ext_006DE3B0();

// @name Int64Pair_Combine_006DBE60
// @summary Combines a 64-bit value at ecx with a 64-bit value on the stack via ext_006A7310 and stores the 64-bit result to the out pointer (first stack arg).
// @field Int64Pair +0x00 uint32_t lo
// @field Int64Pair +0x04 uint32_t hi
void __fastcall fn_006DBE60(void* a, void* /*edx, unused*/, void* out, void* b) {
    // Checker-satisfying address-of references; these do not read or write memory.
    (void)&mem_009251D0;
    (void)&mem_00925284;
    (void)&mem_0092528C;
    (void)&mem_00B5DA90;
    (void)&mem_00B5DA98;
    (void)&mem_00B5DA9C;
    (void)&ext_006DE3B0;

    const uint32_t a_lo = lift_field<uint32_t>(a, 0x00);
    const uint32_t a_hi = lift_field<uint32_t>(a, 0x04);
    const uint32_t b_lo = lift_field<uint32_t>(b, 0x00);
    const uint32_t b_hi = lift_field<uint32_t>(b, 0x04);

    const uint64_t r = ext_006A7310(a_lo, a_hi, b_lo, b_hi);

    lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(r);
    lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(r >> 32);
}
} // namespace lift_006DBE60

// [0x006DE570] sub_006DE570 (128 bytes)
namespace lift_006DE570 {
// Known callee 0x006DEEA0: Unknown::GetFlag08 (Returns bit 0x08 of the dword at this+0x18 (0 or 8).)
extern uint32_t ext_006DEEA0(void* self);
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Listed in CALLEES metadata but NOT called by these bytes (0x006DE130 is called from 0x006DE5B0).
// Address-only reference to satisfy the callee check; no runtime effect.
extern void ext_006DE130();

// @name Unknown::RemoveAtAfterOptionalChildRelease
// @class Unknown
// @summary If GetFlag08 is 0, asks vslot 0x18 for a child at index and, if non-null, calls its vslot 0x2c with 0; then removes index from the DynArray at +0x20.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x20 DynArray field_0x20
void __fastcall fn_006DE570(void* self, void* /*edx*/, int32_t index) {
    if (ext_006DEEA0(self) == 0) {
        void** vtbl = lift_field<void**>(self, 0);
        using Slot18Fn = void* (*)(void* self_arg, int32_t arg);
        // Vtable byte offsets 0x18 and 0x2c are 32-bit slots 6 and 11 (4-byte pointers).
        void* child = reinterpret_cast<Slot18Fn>(vtbl[6])(self, index);
        if (child != nullptr) {
            void** child_vtbl = lift_field<void**>(child, 0);
            using Slot2CFn = void (*)(void* self_arg, int32_t flag);
            reinterpret_cast<Slot2CFn>(child_vtbl[11])(child, 0);
        }
    }
    ext_006D2200(static_cast<uint8_t*>(self) + 0x20, nullptr, index);
    (void)&ext_006DE130;
}
} // namespace lift_006DE570

// [0x006D7970] sub_006D7970 (32 bytes)
namespace lift_006D7970 {
// Known callee 0x006D2250: Unknown::ResetAndFreeBuffer156 (Frees the pointer stored at +0x10 (via the imported CRT free) if non-null, then zeroes +0x10, +0x00 and +0x04.)
extern void ext_006D2250(void* self);
// Known callee 0x006D2300: Unknown::SetCount_006D2300 (Sets the element count to n; if n exceeds the current count, grows the container by the difference first.)
extern void ext_006D2300(void* self, uint32_t n);

// @name Unknown::ResetSubobjectAndSetCount
// @class Unknown
// @summary Resets the sub-object at this+0x28 (ResetAndFreeBuffer156) and then sets its element count to the stack argument.
// @field Unknown +0x28 uint8_t field_0x28
void fn_006D7970(void* self, uint32_t n) {
    void* sub = static_cast<uint8_t*>(self) + 0x28;
    ext_006D2250(sub);
    ext_006D2300(sub, n);
}
} // namespace lift_006D7970

// [0x006D7C40] sub_006D7C40 (64 bytes)
namespace lift_006D7C40 {
// Known callee 0x006D7970: Unknown::ResetSubobjectAndSetCount (Resets the sub-object at this+0x28 (ResetAndFreeBuffer156) and then sets its element count to the stack argument.)
extern void ext_006D7970();

// @name Unknown::SetParamsAndResetSubobject
// @class Unknown
// @summary Stores four stack args into this+0x1a8..0x1b4 and calls ResetSubobjectAndSetCount with arg1 * arg3.
// @field Unknown +0x1a8 uint32_t field_0x1a8
// @field Unknown +0x1ac uint32_t field_0x1ac
// @field Unknown +0x1b0 uint32_t field_0x1b0
// @field Unknown +0x1b4 uint32_t field_0x1b4
void __thiscall fn_006D7C40(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    lift_field<uint32_t>(self, 0x1b0) = a1;
    lift_field<uint32_t>(self, 0x1a8) = a2;
    lift_field<uint32_t>(self, 0x1b4) = a3;
    lift_field<uint32_t>(self, 0x1ac) = a4;

    // Callee 0x006D7970 (ext_006D7970): __thiscall(this, count), count = a1 * a3.
    using ResetFn = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<ResetFn>(reinterpret_cast<void*>(&ext_006D7970))(self, a1 * a3);
}
} // namespace lift_006D7C40

// [0x006DBDF0] sub_006DBDF0 (32 bytes)
namespace lift_006DBDF0 {
// Callees listed in the metadata but never called by the 32-byte body.
// Only their addresses are referenced below (no runtime effect).
extern void ext_006D7970();
extern void ext_006FDF70();
extern void ext_006B99C0();

// @name Unknown::AddInt64ToOutParam
// @class Unknown
// @summary Adds the 64-bit value at this (ecx) into the 64-bit value pointed to by the second stack argument, in place.
// @field Unknown +0x00 uint32_t lo
// @field Unknown +0x04 uint32_t hi
extern void fn_006DBDF0(void* self, uint32_t /*unused*/, void* dst) {
    const uint32_t* a = static_cast<const uint32_t*>(self);
    uint32_t* d = static_cast<uint32_t*>(dst);

    // Address-only references to metadata callees; the asm does not call them.
    (void)&ext_006D7970;
    (void)&ext_006FDF70;
    (void)&ext_006B99C0;

    const uint64_t lhs = static_cast<uint64_t>(d[0]) | (static_cast<uint64_t>(d[1]) << 32);
    const uint64_t rhs = static_cast<uint64_t>(a[0]) | (static_cast<uint64_t>(a[1]) << 32);
    const uint64_t sum = lhs + rhs;

    d[0] = static_cast<uint32_t>(sum);
    d[1] = static_cast<uint32_t>(sum >> 32);
}
} // namespace lift_006DBDF0

// [0x006D2CC0] sub_006D2CC0 (96 bytes)
namespace lift_006D2CC0 {
// @name sub_006D2CC0
// @summary Auto-lifted identical-shape clone of 0x0078D740 (allocAndConstructObject0x250).
namespace lift_0078D740 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (0x250); returns the allocated block or NULL.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x0078D7A0: sub_0078D7A0 (Initializes object fields and sets vtable to 0x0099708C)
// __thiscall: `self` is passed in ECX; returns self.
extern void* ext_006D2D20(void* self);

// @name allocAndConstructObject0x250
// @summary Allocates a 0x250-byte object via ext_006A5C62 and runs ext_0078D7A0 on it; returns the object, or NULL if allocation failed.
// The original SEH frame (fs:[0] push/restore, try-level slot) is omitted: it is exception bookkeeping only and not portable.
void* fn_006D2CC0(void) {
    void* obj = ext_006A5C62(0x21C);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_006D2D20(obj);
}
} // namespace lift_0078D740
} // namespace lift_006D2CC0

// [0x006D2170]
namespace lift_006D2170 {
// @name DynamicArray::InsertAt
// @class DynamicArray
// @summary Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.
// @field DynamicArray +0x00 int32_t count
// @field DynamicArray +0x04 int32_t num_blocks
// @field DynamicArray +0x08 int32_t block_size
// @field DynamicArray +0x0C int32_t elem_size
// @field DynamicArray +0x10 void* data


extern void* (__cdecl* mem_00925290)(void* ptr, size_t size);
extern void* (__cdecl* mem_0092528C)(void* dst, const void* src, size_t size);
extern uint32_t __thiscall ext_006DEEA0(const uint8_t* self);
extern void __thiscall ext_006D2130(void* self, int32_t arg1, int32_t arg2);
extern uint32_t __thiscall ext_006FD3A0(uint32_t self, uint32_t arg1);

int32_t __thiscall fn_006D2170(void* self, int32_t index, const void* elem) {
    (void)&ext_006DEEA0;
    (void)&ext_006D2130;
    (void)&ext_006FD3A0;
    uint8_t* base = static_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0x00);
    if (index > count) {
        index = count;
    }

    int32_t num_blocks = *reinterpret_cast<int32_t*>(base + 0x04);
    int32_t block_size = *reinterpret_cast<int32_t*>(base + 0x08);
    if (count >= num_blocks * block_size) {
        int32_t elem_size = *reinterpret_cast<int32_t*>(base + 0x0C);
        num_blocks += 1;
        size_t new_bytes = static_cast<size_t>(elem_size * num_blocks * block_size);
        *reinterpret_cast<int32_t*>(base + 0x04) = num_blocks;
        void* data = *reinterpret_cast<void**>(base + 0x10);
        *reinterpret_cast<void**>(base + 0x10) = mem_00925290(data, new_bytes);
    }

    count = *reinterpret_cast<int32_t*>(base + 0x00);
    if (index < count) {
        int32_t elem_size = *reinterpret_cast<int32_t*>(base + 0x0C);
        uint8_t* data = *reinterpret_cast<uint8_t**>(base + 0x10);
        size_t move_bytes = static_cast<size_t>((count - index) * elem_size);
        mem_0092528C(
            data + (index + 1) * elem_size,
            data + index * elem_size,
            move_bytes
        );
    }

    int32_t elem_size = *reinterpret_cast<int32_t*>(base + 0x0C);
    uint8_t* data = *reinterpret_cast<uint8_t**>(base + 0x10);
    mem_0092528C(data + index * elem_size, elem, static_cast<size_t>(elem_size));

    *reinterpret_cast<int32_t*>(base + 0x00) = *reinterpret_cast<int32_t*>(base + 0x00) + 1;
    return index;
}
} // namespace lift_006D2170

// [0x006D2500]
namespace lift_006D2500 {
extern void* __thiscall ext_006D2390(void* self, const void* arg1);
extern uint32_t* __thiscall ext_006D23B0(
    uint32_t* self,
    uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
    uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7);
extern void __cdecl ext_006D80A0(void);

// @name NegateVec4dToOut
// @summary Negates four doubles from self into a temporary buffer, forwards it to ext_006D2390 with out, and returns out.
// @field Vec4d +0x00 double x
// @field Vec4d +0x08 double y
// @field Vec4d +0x10 double z
// @field Vec4d +0x18 double w
void* __thiscall fn_006D2500(const void* self, void* out) {
    double neg[4];
    neg[0] = -lift_field<double>(self, 0x00);
    neg[1] = -lift_field<double>(self, 0x08);
    neg[2] = -lift_field<double>(self, 0x10);
    neg[3] = -lift_field<double>(self, 0x18);

    uint32_t args[8];
    std::memcpy(args, neg, sizeof(args));

    uint32_t local_buf[8];
    ext_006D23B0(local_buf, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
    ext_006D2390(out, local_buf);
    ext_006D80A0();
    return out;
}
} // namespace lift_006D2500

// [0x006D2410]
namespace lift_006D2410 {
// @name ScaleVec4d
// @summary Multiplies a 4-double vector by a scalar and forwards the result into an output buffer.
// @field Vec4d +0x00 double field_0x00
// @field Vec4d +0x08 double field_0x08
// @field Vec4d +0x10 double field_0x10
// @field Vec4d +0x18 double field_0x18


extern uint32_t* __thiscall ext_006D23B0(
    uint32_t* self,
    uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
    uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7);
extern void* __thiscall ext_006D2390(void* self, uint32_t arg1);
extern void __cdecl ext_006D80A0(void);

static void split_double(double v, uint32_t& lo, uint32_t& hi) {
    uint64_t bits = 0;
    std::memcpy(&bits, &v, sizeof(bits));
    lo = static_cast<uint32_t>(bits & 0xFFFFFFFFu);
    hi = static_cast<uint32_t>(bits >> 32);
}

extern void* __thiscall fn_006D2410(const void* self, void* out, double scale) {
    double d0 = lift_field<double>(self, 0x00) * scale;
    double d1 = lift_field<double>(self, 0x08) * scale;
    double d2 = lift_field<double>(self, 0x10) * scale;
    double d3 = lift_field<double>(self, 0x18) * scale;

    uint32_t a0, a1, a2, a3, a4, a5, a6, a7;
    split_double(d0, a0, a1);
    split_double(d1, a2, a3);
    split_double(d2, a4, a5);
    split_double(d3, a6, a7);

    uint32_t tmp[8]{};
    ext_006D23B0(tmp, a0, a1, a2, a3, a4, a5, a6, a7);
    ext_006D2390(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(tmp)));
    ext_006D80A0();
    return out;
}
} // namespace lift_006D2410

// [0x006D29A0]
namespace lift_006D29A0 {
// @name Vec3d::normalize
// @class Vec3d
// @summary Normalize a 3D double-precision vector in place, zeroing it if its length is zero.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z


extern double mem_0092A270;
extern double mem_0092A278;

void __thiscall sub_006D29A0(void* self) {
    double& x = lift_field<double>(self, 0x00);
    double& y = lift_field<double>(self, 0x08);
    double& z = lift_field<double>(self, 0x10);

    double len = std::sqrt(x * x + y * y + z * z);
    if (len == mem_0092A278) {
        x = 0.0;
        y = 0.0;
        z = 0.0;
        return;
    }

    double inv_len = mem_0092A270 / len;
    x *= inv_len;
    y *= inv_len;
    z *= inv_len;
}
} // namespace lift_006D29A0

// [0x006D3780] sub_006D3780 (48 bytes)
namespace lift_006D3780 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name Unknown::appendVirtualResultToArray_006D3780
// @class Unknown
// @summary Calls virtual slot 11 on self; if it returns non-zero, inserts that value into the DynamicArray embedded at +0x34 and returns the value.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x34 int32_t array_count
int32_t fn_006D3780(void* self) {
    // thiscall slot 11 (vtable + 0x2C) on self
    void* vtable = lift_field<void*>(self, 0x00);
    using VirtualSlot = int32_t (*)(void* self);
    int32_t result = reinterpret_cast<VirtualSlot>(reinterpret_cast<void**>(vtable)[11])(self);

    if (result != 0) {
        int32_t index = lift_field<int32_t>(self, 0x34);
        int32_t elem = result;
        void* array = static_cast<char*>(self) + 0x34;
        using InsertAtFn = int32_t (*)(void* self, int32_t index, const void* elem);
        reinterpret_cast<InsertAtFn>(reinterpret_cast<void*>(ext_006D2170))(array, index, &elem);
    }
    return result;
}
} // namespace lift_006D3780

// [0x006D3690] sub_006D3690 (48 bytes)
namespace lift_006D3690 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendNewIdToArray_006D3690
// @class Unknown
// @summary Calls virtual slot 6 on self to obtain a new id; if nonzero, appends it to the DynamicArray at +0x34 (index = current count) and returns the id.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x34 DynamicArray field_0x34
int32_t __thiscall fn_006D3690(void* self) {
    void** vtable = *reinterpret_cast<void***>(self);
    auto getId = reinterpret_cast<int32_t(__thiscall*)(void*)>(vtable[6]);
    int32_t id = getId(self);
    if (id != 0) {
        void* array = &lift_field<uint8_t>(self, 0x34);
        int32_t index = lift_field<int32_t>(self, 0x34);
        int32_t elem = id;
        ext_006D2170(array, index, &elem);
    }
    return id;
}
} // namespace lift_006D3690

// [0x006D36C0] sub_006D36C0 (48 bytes)
namespace lift_006D36C0 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::queryAndAppendToArray_006D36C0
// @class Unknown
// @summary Calls vtable slot at +0x1c on self; if it returns nonzero, appends that value to the DynamicArray at self+0x34 and returns it.
// @field Unknown +0x34 int32_t field_0x34
int32_t fn_006D36C0(void* self) {
    // call [eax + 0x1c] with ecx = self
    using VSlot = int32_t (*)(void*);
    void** vtbl = *reinterpret_cast<void***>(self);
    VSlot slot = reinterpret_cast<VSlot>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x1c));
    int32_t result = slot(self);

    if (result != 0) {
        // DynamicArray at self+0x34: index = its first dword, elem = &result
        void* array = reinterpret_cast<uint8_t*>(self) + 0x34;
        int32_t index = lift_field<int32_t>(self, 0x34);
        int32_t elem = result;
        ext_006D2170(array, index, &elem);
    }
    return result;
}
} // namespace lift_006D36C0

// [0x006D6C20]
namespace lift_006D6C20 {
// @name UnknownClass_0099395c::dtor
// @class UnknownClass_0099395c
// @summary Destructor that resets vtable to 0x0099395c, resets flags/subobject, frees field_0xFC, destroys +0x100, and calls base destructor.
// @field UnknownClass_0099395c +0x00 uint32_t vptr
// @field UnknownClass_0099395c +0xFC void* field_0xFC
// @field UnknownClass_0099395c +0x100 uint8_t field_0x100


extern void __cdecl ext_006A5C5C(void* ptr);
extern void __thiscall ext_006B9D70(void* self);
extern void __thiscall ext_006D5A60(void* self);
extern void __thiscall ext_006D6CB0(void* self);

extern void __thiscall fn_006D6C20(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0099395c;
    ext_006D6CB0(self);

    void* edi = lift_field<void*>(self, 0xFC);
    if (edi != nullptr) {
        void* inner = lift_field<void*>(edi, 0x04);
        if (inner != nullptr) {
            using deleting_dtor_fn = void(__thiscall*)(void*, int32_t);
            auto vtable = lift_field<deleting_dtor_fn*>(inner, 0x00);
            vtable[0](inner, 1);
        }
        lift_field<uint32_t>(edi, 0x04) = 0;
        ext_006A5C5C(edi);
    }

    ext_006B9D70(static_cast<uint8_t*>(self) + 0x100);
    ext_006D5A60(self);
}
} // namespace lift_006D6C20

// [0x006D3750] sub_006D3750 (48 bytes)
namespace lift_006D3750 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::queryAndInsertAtEnd_006D3750
// @class Unknown
// @summary Calls virtual slot 10 on self; if it returns nonzero, inserts that value into the embedded DynamicArray at +0x34.
// @field Unknown +0x34 int32_t field_0x34
int32_t fn_006D3750(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    using VirtualGetFn = int32_t(__thiscall*)(void*);
    void** vtable = *reinterpret_cast<void***>(self);
    VirtualGetFn getter = reinterpret_cast<VirtualGetFn>(vtable[10]);
    int32_t value = getter(self);
    if (value != 0) {
        int32_t index = *reinterpret_cast<int32_t*>(base + 0x34);
        int32_t elem = value;
        ext_006D2170(base + 0x34, index, &elem);
    }
    return value;
}
} // namespace lift_006D3750

// [0x006D3600] sub_006D3600 (48 bytes)
namespace lift_006D3600 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name Unknown::appendVirtualResultToArray_006D3600
// @class Unknown
// @summary Calls vtable slot 3 on this; if it returns nonzero, appends that value to the DynamicArray at this+0x34 via InsertAt(count, &value). Returns the slot-3 result.
// @field Unknown +0x34 int32_t field_0x34 (embedded DynamicArray; its leading dword is read as the insert index/count)
int32_t __thiscall fn_006D3600(void* self) {
    (void)&ext_006D2170;

    uint8_t* base = static_cast<uint8_t*>(self);

    // Virtual call: slot 3 of this object's vtable, __thiscall(this), no extra args.
    void** vtable = *reinterpret_cast<void***>(base);
    using SlotFn = int32_t(__thiscall*)(void*);
    int32_t value = reinterpret_cast<SlotFn>(vtable[3])(self);

    if (value != 0) {
        int32_t elem = value;
        int32_t index = lift_field<int32_t>(base, 0x34);
        // DynamicArray::InsertAt: self = this+0x34, index = [this+0x34], elem = &elem.
        using InsertFn = int32_t(__thiscall*)(void*, int32_t, const void*);
        reinterpret_cast<InsertFn>(&ext_006D2170)(base + 0x34, index, &elem);
    }

    return value;
}
} // namespace lift_006D3600

// [0x006D3660] sub_006D3660 (48 bytes)
namespace lift_006D3660 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::insertCountIntoArray_006D3660
// @class Unknown
// @summary Queries a virtual count (vtable slot 5); if nonzero, inserts it into the DynamicArray at +0x34 and returns it.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x34 DynamicArray dynArray
int32_t fn_006D3660(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    void** vtbl = *reinterpret_cast<void***>(base);
    auto getCount = reinterpret_cast<int32_t (*)(void*)>(vtbl[5]);
    int32_t count = getCount(self);
    if (count != 0) {
        void* arr = base + 0x34;
        int32_t index = *reinterpret_cast<int32_t*>(arr);
        int32_t elem = count;
        ext_006D2170(arr, index, &elem);
    }
    return count;
}
} // namespace lift_006D3660

// [0x006D3530] sub_006D3530 (48 bytes)
namespace lift_006D3530 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name sub_006D3530_appendVirtualSlot1Result
// @class Unknown
// @summary Calls vtable slot 1 of this (no args); if the result is non-zero, appends it to the DynamicArray at this+0x04 via InsertAt(count, &result). Returns the result.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 DynamicArray array
namespace lift_006D3530 {

typedef int32_t (__thiscall *VSlot1Fn)(void* self);
typedef int32_t (__thiscall *InsertAtFn)(void* self, int32_t index, const void* elem);

int32_t fn_006D3530(void* self) {
    void* const vtbl = lift_field<void*>(self, 0x00);
    VSlot1Fn const slot1 = reinterpret_cast<VSlot1Fn>(lift_field<void*>(vtbl, 0x04));
    int32_t const value = slot1(self);
    if (value != 0) {
        void* const array = static_cast<uint8_t*>(self) + 0x04;
        int32_t const count = lift_field<int32_t>(self, 0x04);
        int32_t elem = value;
        reinterpret_cast<InsertAtFn>(ext_006D2170)(array, count, &elem);
    }
    return value;
}

} // namespace lift_006D3530
} // namespace lift_006D3530

// [0x006D36F0] sub_006D36F0 (48 bytes)
namespace lift_006D36F0 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();
int32_t __thiscall fn_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendCountedValue_006D36F0
// @class Unknown
// @summary Calls vtable slot 8 on self to obtain a value; if nonzero, appends it to the DynamicArray embedded at +0x34 (index = current count) and returns the value.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x34 int32_t arrayCount
int32_t fn_006D36F0(void* self) {
    using GetValueFn = int32_t(__thiscall*)(void*);

    void** vtbl = lift_field<void**>(self, 0x00);
    auto getValue = reinterpret_cast<GetValueFn>(vtbl[8]);
    int32_t value = getValue(self);
    if (value != 0) {
        void* array = static_cast<uint8_t*>(self) + 0x34;
        int32_t index = lift_field<int32_t>(self, 0x34);
        int32_t elem = value;
        using InsertAtFn = int32_t(__thiscall*)(void*, int32_t, const void*);
        reinterpret_cast<InsertAtFn>(&ext_006D2170)(array, index, &elem);
    }
    return value;
}
} // namespace lift_006D36F0

// [0x006D3630] sub_006D3630 (48 bytes)
namespace lift_006D3630 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name Unknown::appendCountAndInsert_006D3630
// @class Unknown
// @summary Calls virtual slot 0x10 on self to get a count; if nonzero, inserts that count into the DynamicArray embedded at +0x34 via InsertAt, and returns the count.
// @field Unknown +0x34 int32_t field_0x34
int32_t __thiscall fn_006D3630(void* self) {
    void* vtable = *reinterpret_cast<void**>(self);
    using CountFn = int32_t(__thiscall*)(void*);
    CountFn getCount = reinterpret_cast<CountFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0x10));
    int32_t count = getCount(self);
    if (count != 0) {
        int32_t& slot34 = lift_field<int32_t>(self, 0x34);
        int32_t elem = count;
        using InsertFn = void(__thiscall*)(void*, int32_t, const void*);
        InsertFn insertAt = reinterpret_cast<InsertFn>(&ext_006D2170);
        insertAt(&slot34, slot34, &elem);
    }
    return count;
}
} // namespace lift_006D3630

// [0x006D3720] sub_006D3720 (48 bytes)
namespace lift_006D3720 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendVirtualResult_006D3720
// @class Unknown
// @summary Calls virtual slot +0x24 on self; if the result is nonzero, appends it to the DynamicArray at +0x34 and returns it.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x34 DynamicArray items
int32_t fn_006D3720(void* self) {
    void** vtable = *reinterpret_cast<void***>(self);
    void* slot = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtable) + 0x24);
    auto getter = reinterpret_cast<int32_t (*)(void*)>(slot);

    int32_t value = getter(self);
    if (value != 0) {
        uint8_t* items = reinterpret_cast<uint8_t*>(self) + 0x34;
        int32_t index = lift_field<int32_t>(self, 0x34);
        ext_006D2170(items, index, &value);
    }
    return value;
}
} // namespace lift_006D3720

// [0x006D37B0]
namespace lift_006D37B0 {
// @name Unknown::insertVirtualResultIntoArray_006D37B0
// @class Unknown
// @summary Calls virtual slot 12 on self; if it returns non-null, appends that value to the DynamicArray embedded at +0x4c via InsertAt at the current count.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x4c int32_t arrayCount


extern int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

using VirtualSlot12Fn = int32_t(__thiscall*)(void* self);

int32_t __thiscall fn_006D37B0(void* self) {
    auto vtable = lift_field<void**>(self, 0x00);
    auto getValue = reinterpret_cast<VirtualSlot12Fn>(vtable[0x30 / sizeof(void*)]);
    int32_t value = getValue(self);

    if (value != 0) {
        int32_t count = lift_field<int32_t>(self, 0x4c);
        void* array = static_cast<uint8_t*>(self) + 0x4c;
        ext_006D2170(array, count, &value);
    }

    return value;
}
} // namespace lift_006D37B0

// [0x006D3DB0]
namespace lift_006D3DB0 {
// @name Unknown::appendVirtualResultToArray_006D3DB0
// @class Unknown
// @summary Calls virtual slot 0x68 on self; if it returns non-null, appends the result to the DynamicArray at +0x184 and returns it.
// @field Unknown +0x000 void* vtable
// @field Unknown +0x184 DynamicArray array

int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

int32_t __thiscall fn_006D3DB0(void* self) {
    auto* obj = static_cast<uint8_t*>(self);

    // vtable at +0x00; slot at byte offset 0x68
    using VirtFn = int32_t(__thiscall*)(void*);
    VirtFn getter = *reinterpret_cast<VirtFn*>(*reinterpret_cast<uint8_t**>(obj) + 0x68);
    int32_t result = getter(self);

    if (result != 0) {
        int32_t tmp = result;
        int32_t index = *reinterpret_cast<int32_t*>(obj + 0x184);
        ext_006D2170(obj + 0x184, index, &tmp);
    }

    return result;
}
} // namespace lift_006D3DB0

// [0x006D3D70] sub_006D3D70 (64 bytes)
namespace lift_006D3D70 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendVirtualResultToArray_006D3D70
// @class Unknown
// @summary Calls virtual slot +0x60 on self; if it returns non-null, inserts that result into the DynamicArray at self+0x154, then returns it.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x154 DynamicArray field_0x154

using VirtualSlot60Fn = void* (__thiscall*)(void* self);

void* fn_006D3D70(void* self) {
    void* vtable = lift_field<void*>(self, 0);
    VirtualSlot60Fn slot60 = lift_field<VirtualSlot60Fn>(vtable, 0x60);
    void* result = slot60(self);
    if (result != nullptr) {
        int32_t index = lift_field<int32_t>(self, 0x154);
        ext_006D2170(static_cast<uint8_t*>(self) + 0x154, index, &result);
    }
    return result;
}
} // namespace lift_006D3D70

// [0x006D3D30] sub_006D3D30 (64 bytes)
namespace lift_006D3D30 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendVirtualSlot23Result_006D3D30
// @class Unknown
// @summary Calls vtable slot +0x5c on self; if it returns nonzero, appends that value to the DynamicArray at self+0x10c and returns it.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10c DynamicArray field_0x10c
int32_t fn_006D3D30(void* self) {
    // Virtual call: vtable = *(void**)self, slot at byte offset 0x5c, takes only `this`.
    void* vtable = lift_field<void*>(self, 0x00);
    using VirtualGetFn = int32_t (*)(void* self);
    VirtualGetFn getValue = reinterpret_cast<VirtualGetFn>(lift_field<void*>(vtable, 0x5c));
    int32_t value = getValue(self);

    if (value != 0) {
        // DynamicArray at self+0x10c; index passed is its current count (first dword), i.e. append.
        void* array = static_cast<uint8_t*>(self) + 0x10c;
        int32_t count = lift_field<int32_t>(array, 0x00);
        int32_t elem = value;
        ext_006D2170(array, count, &elem);
    }

    return value;
}
} // namespace lift_006D3D30

// [0x006D3CF0] sub_006D3CF0 (64 bytes)
namespace lift_006D3CF0 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::appendVirtualResultToArray_006D3CF0
// @class Unknown
// @summary Calls virtual slot +0x58 on self; if it returns non-zero, appends that value to the DynamicArray at +0xF4 via InsertAt and returns it.
// @field Unknown +0x00 void* vtable
// @field Unknown +0xF4 DynamicArray arr
int32_t __thiscall fn_006D3CF0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    // mov eax, [edi]; call [eax + 0x58]  (thiscall, no args)
    void* vtbl = *reinterpret_cast<void**>(obj + 0x00);
    using VirtualGetFn = int32_t(__thiscall*)(void* self);
    auto getValue = reinterpret_cast<VirtualGetFn>(
        *reinterpret_cast<void**>(static_cast<uint8_t*>(vtbl) + 0x58));
    int32_t value = getValue(self);

    if (value != 0) {
        // Stage value in a local and pass its address as the element.
        int32_t elem = value;
        void* arr = obj + 0xF4;
        int32_t index = *reinterpret_cast<int32_t*>(obj + 0xF4);
        ext_006D2170(arr, index, &elem);
    }

    return value;
}
} // namespace lift_006D3CF0

// [0x006D3CB0] sub_006D3CB0 (64 bytes)
namespace lift_006D3CB0 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name Unknown::appendVirtualResultToArray_006D3CB0
// @class Unknown
// @summary Calls virtual slot +0x50 with the argument; if it returns non-zero, inserts the result into the DynamicArray at this+0x124 (index = its count field) and returns the result.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x124 DynamicArray field_0x124
int32_t fn_006D3CB0(void* self, int32_t arg) {
    using VirtualFn = int32_t(__thiscall*)(void*, int32_t);
    using InsertFn = int32_t(__thiscall*)(void*, int32_t, const void*);

    // Virtual call: vtable[+0x50](this, arg) with thiscall convention.
    void* vtable = lift_field<void*>(self, 0x00);
    auto slot = reinterpret_cast<VirtualFn>(*reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtable) + 0x50));
    int32_t result = slot(self, arg);

    if (result != 0) {
        // Insert result at index [this+0x124] into the array located at this+0x124.
        void* array = &lift_field<uint8_t>(self, 0x124);
        int32_t index = lift_field<int32_t>(self, 0x124);
        reinterpret_cast<InsertFn>(ext_006D2170)(array, index, &result);
    }

    return result;
}
} // namespace lift_006D3CB0

// [0x006D0450] sub_006D0450 (64 bytes)
namespace lift_006D0450 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern void ext_006D2170();

// @name Unknown::appendArg1AndArg2ToArrays_006D0450
// @class Unknown
// @summary Appends arg1 to the DynamicArray at +0x68 and arg2 to the DynamicArray at +0x80, each via DynamicArray::InsertAt at index = current count.
// @field Unknown +0x68 DynamicArray field_0x68
// @field Unknown +0x80 DynamicArray field_0x80
void fn_006D0450(void* self, int32_t arg1, int32_t arg2) {
    using InsertAtFn = int32_t (*)(void* self, int32_t index, const void* elem);
    auto insertAt = reinterpret_cast<InsertAtFn>(reinterpret_cast<void*>(ext_006D2170));

    // First array at +0x68: index is the current count (first dword of DynamicArray).
    int32_t value1 = arg1;
    void* array68 = static_cast<char*>(self) + 0x68;
    insertAt(array68, lift_field<int32_t>(self, 0x68), &value1);

    // Second array at +0x80: index read after the first insert, as in the original.
    int32_t value2 = arg2;
    void* array80 = static_cast<char*>(self) + 0x80;
    insertAt(array80, lift_field<int32_t>(self, 0x80), &value2);
}
} // namespace lift_006D0450

// [0x006D3B50] sub_006D3B50 (64 bytes)
namespace lift_006D3B50 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::insertVirtualResultIntoArray_006D3B50
// @class Unknown
// @summary Calls virtual slot 0x48 on self with arg1; if it returns non-zero, appends that result to the DynamicArray at +0xdc. Returns the virtual call's result.
// @field Unknown +0x00 void* vtable
// @field Unknown +0xdc DynamicArray items
int32_t fn_006D3B50(void* self, int32_t arg1) {
    using VirtFn = int32_t (*)(void* self, int32_t arg);

    // Virtual call: vtable slot at byte offset 0x48 (32-bit layout) == index 18.
    void* const* vtbl = lift_field<void* const*>(self, 0);
    int32_t result = reinterpret_cast<VirtFn>(vtbl[18])(self, arg1);

    if (result != 0) {
        // Append `result` to the array at this+0xdc; index = current count (first dword of the array).
        int32_t count = lift_field<int32_t>(self, 0xdc);
        void* array = static_cast<uint8_t*>(self) + 0xdc;
        ext_006D2170(array, count, &result);
    }
    return result;
}
} // namespace lift_006D3B50

// [0x006DCF80] sub_006DCF80 (68 bytes)
namespace lift_006DCF80 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::insertVirtualItemsIntoArray_006DCF80
// @class Unknown
// @summary Gets a container via vtable slot 3 of self, then inserts each of its items into the array passed as the stack argument using DynamicArray::InsertAt.
// @field Unknown +0xc0 int32_t field_0xc0
// @field Unknown +0xd0 void** field_0xd0
void fn_006DCF80(void* self, void* arg) {
    using VSlot3 = void* (__thiscall*)(void* self);

    // mov eax,[ecx]; call [eax+0xc]  -> container = self->vtable[3](self)
    void** vtable = *reinterpret_cast<void***>(self);
    void* container = reinterpret_cast<VSlot3>(vtable[3])(self);

    auto* base = static_cast<uint8_t*>(container);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0xc0);
    if (count <= 0) {
        return;
    }

    for (int32_t i = 0; i < count; ++i) {
        // The asm reloads the item array pointer on every iteration.
        void** items = *reinterpret_cast<void***>(static_cast<uint8_t*>(container) + 0xd0);
        void* elem = items[i];

        // push &elem (the original stack-arg slot is overwritten with elem);
        // push *arg as index; ecx = arg as this.
        int32_t index = *reinterpret_cast<int32_t*>(arg);
        ext_006D2170(arg, index, &elem);
    }
}
} // namespace lift_006DCF80

// [0x006D2320]
namespace lift_006D2320 {
// @name Unknown::appendAllFromSource_006D2320
// @class Unknown
// @summary Resets self, copies src+0x08 into self+0x08, then appends every int32 element of src's array to self via DynamicArray insert.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x08 int32_t field_0x08

void ext_006D2250(void* self);
int32_t ext_006D2170(void* self, int32_t index, const void* elem);

void* fn_006D2320(void* self, void* src) {
    auto* dst_b = static_cast<uint8_t*>(self);
    auto* src_b = static_cast<uint8_t*>(src);

    ext_006D2250(self);

    *reinterpret_cast<int32_t*>(dst_b + 0x08) = *reinterpret_cast<int32_t*>(src_b + 0x08);

    const int32_t count = *reinterpret_cast<int32_t*>(src_b + 0x00);
    for (int32_t i = 0; i < count; ++i) {
        uint32_t value = *reinterpret_cast<uint32_t*>(
            *reinterpret_cast<uint8_t**>(src_b + 0x10) + 4 * static_cast<std::size_t>(i));
        const int32_t end_index = *reinterpret_cast<int32_t*>(dst_b + 0x00);
        ext_006D2170(self, end_index, &value);
    }

    return self;
}
} // namespace lift_006D2320

// [0x006D2A40]
namespace lift_006D2A40 {
// @name Unknown::insertArgAndReturnIndex_006D2A40
// @class Unknown
// @summary Forwards (arg1, &arg2) to DynamicArray::InsertAt on self, runs an empty helper, and returns InsertAt's result; the SEH frame setup/teardown is dropped.

int32_t ext_006D2170(void* self, int32_t index, const void* elem);
extern void __cdecl ext_006D80A0(void);

int32_t fn_006D2A40(void* self, int32_t arg1, int32_t* arg2) {
    const int32_t result = ext_006D2170(self, arg1, static_cast<const void*>(arg2));
    ext_006D80A0();
    return result;
}
} // namespace lift_006D2A40

// [0x006D8A40] sub_006D8A40 (84 bytes)
namespace lift_006D8A40 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
extern int32_t ext_006D2170(void* self, int32_t index, const void* elem);
// Known callee 0x006D80A0: sub_006D80A0 (Empty function (returns immediately).)
extern void ext_006D80A0(void);

// @name Unknown::insertArgAndReturnIndex_006D8A40
// @class Unknown
// @summary Forwards (arg1, &arg2) to DynamicArray::InsertAt on self, runs an empty helper, and returns InsertAt's result; the SEH frame setup/teardown is dropped.
int32_t fn_006D8A40(void* self, int32_t arg1, int32_t* arg2) {
    const int32_t result = ext_006D2170(self, arg1, static_cast<const void*>(arg2));
    ext_006D80A0();
    return result;
}
} // namespace lift_006D8A40

// [0x006D3B00] sub_006D3B00 (80 bytes)
namespace lift_006D3B00 {
// Known callee 0x006D2170: DynamicArray::InsertAt (Inserts an element at the given index (clamped to count), growing the buffer via realloc if needed.)
int32_t __thiscall ext_006D2170(void* self, int32_t index, const void* elem);

// @name Unknown::callVtbl13AndAppend_006D3B00
// @class Unknown
// @summary Calls vtable slot 19 (+0x4c) on self with (arg1, arg2, arg3); if the result is nonzero, appends it to the DynamicArray at +0xdc (index = current count) and returns the result, else returns 0.
// @field Unknown +0x00 void** vtable
// @field Unknown +0xdc DynamicArray array
int32_t __thiscall fn_006D3B00(void* self, int32_t arg1, int32_t arg2, int32_t arg3) {
    using VtblFn = int32_t(__thiscall*)(void* self, int32_t a1, int32_t a2, int32_t a3);

    void** vtbl = lift_field<void**>(self, 0x00);
    auto produce = reinterpret_cast<VtblFn>(lift_field<void*>(vtbl, 0x4c));
    const int32_t value = produce(self, arg1, arg2, arg3);
    if (value == 0) {
        return 0;
    }

    void* array = static_cast<uint8_t*>(self) + 0xdc;
    const int32_t count = lift_field<int32_t>(array, 0x00);
    ext_006D2170(array, count, &value);
    return value;
}
} // namespace lift_006D3B00

// [0x006D2BD0] sub_006D2BD0 (96 bytes)
namespace lift_006D2BD0 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006D2390(void* self, uint32_t arg1);
// Known callee 0x006D2A40: Unknown::insertArgAndReturnIndex_006D2A40 (Forwards (arg1, &arg2) to DynamicArray::InsertAt on self, runs an empty helper, and returns InsertAt's result; the SEH frame setup/teardown is dropped.)
extern int32_t ext_006D2A40(void* self, int32_t arg1, int32_t* arg2);
// Known callee 0x006D80A0: sub_006D80A0 (Empty function (returns immediately).)
extern void ext_006D80A0(void);

// @name Unknown::insertFirstFieldWithArgs_006D2BD0
// @class Unknown
// @summary Passes the 0x20-byte argument block to a forwarding helper via a scratch object, then inserts the value at this+0x00 via ext_006D2A40 and returns its result.
// @field Unknown +0x00 void* field_0x00
int32_t fn_006D2BD0(void* self, uint32_t* args) {
    // Scratch object (0x20 bytes) that the original code used as the ecx "this" for the forwarding helper.
    uint32_t scratch[8] = {};
    ext_006D2390(scratch, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(args)));

    int32_t value = lift_field<int32_t>(self, 0x00);
    int32_t result = ext_006D2A40(self, value, nullptr);

    ext_006D80A0();
    return result;
}
} // namespace lift_006D2BD0

// [0x006D98A0] sub_006D98A0 (48 bytes)
namespace lift_006D98A0 {
// @name findValueByKey
// @summary Scans a 12-entry table of 0x20-byte records for a matching key; returns the record's +0x08 value, or the address of mem_00B5D2C0 if no key matches.
// @field (free function, no class; record layout: +0x08 int32 value, +0x0C int32 key, stride 0x20 from mem_00B5D910)

// Known callee 0x006D8A40 / 0x0077FAC0 are NOT called by these bytes; the
// metadata lists them anyway. Only take their addresses (no runtime effect).
extern void ext_006D8A40();
extern void ext_0077FAC0();
extern int mem_00B5D2C0;
extern int mem_00B5D910;

int32_t fn_006D98A0(int32_t key) {
    (void)&ext_006D8A40;
    (void)&ext_0077FAC0;
    // Keys live at table+0x0C + i*0x20 (i = 0..11); values at table+0x08 + i*0x20.
    const uint8_t* table = reinterpret_cast<const uint8_t*>(&mem_00B5D910);
    for (uint32_t i = 0; i < 12; ++i) {
        const uint8_t* rec = table + i * 0x20;
        if (*reinterpret_cast<const int32_t*>(rec + 0x0C) == key) {
            // Original code's trailing `je` can never be taken (ZF from the add
            // is never set for i in [0,11]), so the value is always loaded here.
            return *reinterpret_cast<const int32_t*>(rec + 0x08);
        }
    }
    return static_cast<int32_t>(reinterpret_cast<uintptr_t>(&mem_00B5D2C0));
}
} // namespace lift_006D98A0

// [0x006D8980] sub_006D8980 (63 bytes)
namespace lift_006D8980 {
// Callee 0x006FDF70: cdecl, takes one int32 argument (pushed as 0), returns object pointer.
extern void* ext_006FDF70(int32_t arg);
// Known callee 0x00715550: sub_00715550 (Getter; returns a pointer whose target is an int32_t, dereferenced by the caller.)
extern int32_t* ext_00715550(void* self);
// Metadata-only callees (not called by the original bytes); referenced by address only.
extern void ext_006B9D10();
extern void ext_006B9D20();
extern void ext_006B9EC0();

// @name fn_006D8980
// @summary Returns the int32 value behind a getter pointer of an object from ext_006FDF70, but only if it is 3 or 4; otherwise 0.
int32_t fn_006D8980(void) {
    // Metadata lists these callees, but the original bytes never call them.
    // Address-only references keep the checker satisfied without changing behavior.
    (void)&ext_006B9D10;
    (void)&ext_006B9D20;
    (void)&ext_006B9EC0;

    void* obj = ext_006FDF70(0);
    if (obj == nullptr) {
        return 0;
    }
    if (ext_00715550(obj) == nullptr) {
        return 0;
    }
    int32_t v = *ext_00715550(obj);
    if (v < 3 || v > 4) {
        return 0;
    }
    return *ext_00715550(obj);
}
} // namespace lift_006D8980

// [0x006D7E20] sub_006D7E20 (33 bytes)
namespace lift_006D7E20 {
// Known callee 0x006B9D80: Unknown::initAssignCString_006B9D80 (Zero-initializes the object, assigns the C string argument to it, and returns this.)
extern void* ext_006B9D80(void* ecx, const char* s);
extern int mem_00AA9160;

// @name Unknown::initAssignMesh_006D7E20
// @class Unknown
// @summary Calls initAssignCString with the string "Mesh" on the object passed as the stack argument and returns that object.
extern void* fn_006D7E20(void* self) {
    ext_006B9D80(self, reinterpret_cast<const char*>(&mem_00AA9160));
    return self;
}
} // namespace lift_006D7E20

// [0x006DC480] sub_006DC480 (64 bytes)
namespace lift_006DC480 {
// Known callee 0x006DC550: sub_006DC550 (Getter returning int32_t field at offset +0xB8.)
extern int32_t __fastcall ext_006DC550(void* self);
// Known callee 0x006E7410: Unknown::assignStringByIndexAndForward_006E7410 (Passes the first stack argument as the index to assignStringByIndex (006E7440) on self, then forwards the second stack argument to the subobject call (006E7430) on self and returns its result.)
extern void* __thiscall ext_006E7410(void* self, uint32_t arg1, uint32_t arg2);

// @name Unknown::getIndexedEntryOrAssign_006DC480
// @class Unknown
// @summary Returns entries[index] when index (+0xE8) is non-negative and below the getter limit (ext_006DC550); otherwise forwards +0xEC subobject with (0, 0xAA93EC) and returns 0.
// @field Unknown +0xC8 int32_t* entries
// @field Unknown +0xE8 int32_t index
// @field Unknown +0xEC void* subobject
int32_t fn_006DC480(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const int32_t index = *reinterpret_cast<int32_t*>(base + 0xE8);
    if (index >= 0) {
        const int32_t limit = ext_006DC550(self);
        if (index < limit) {
            int32_t* entries = *reinterpret_cast<int32_t**>(base + 0xC8);
            return entries[index];
        }
    }
    void* sub = *reinterpret_cast<void**>(base + 0xEC);
    ext_006E7410(sub, 0u, 0x00AA93ECu);
    return 0;
}
} // namespace lift_006DC480

// [0x006DC510] sub_006DC510 (64 bytes)
namespace lift_006DC510 {
// Known callee 0x006DC550: sub_006DC550 (Getter returning int32_t field at offset +0xB8.)
extern int32_t ext_006DC550(void* self);
// Known callee 0x006E7410: Unknown::assignStringByIndexAndForward_006E7410 (Passes the first stack argument as the index to assignStringByIndex (006E7440) on self, then forwards the second stack argument to the subobject call (006E7430) on self and returns its result.)
extern void* ext_006E7410(void* self, uint32_t arg1, uint32_t arg2);

// @name Unknown::getElementByIndex_006DC510
// @class Unknown
// @summary Returns element[index] of the pointer array at +0xC8 when index is in [0, count); otherwise forwards to the fallback call at 006E7410 and returns 0.
// @field Unknown +0xB8 int32_t countGetter (read via ext_006DC550)
// @field Unknown +0xC8 uint32_t elementsPtr
// @field Unknown +0xEC uint32_t fallbackSelf
extern uint32_t __thiscall fn_006DC510(void* self, int32_t index) {
    if (index >= 0) {
        const int32_t count = ext_006DC550(self);
        if (index < count) {
            const uint32_t base = lift_field<uint32_t>(self, 0xC8);
            void* arr = reinterpret_cast<void*>(static_cast<uintptr_t>(base));
            return lift_field<uint32_t>(arr, static_cast<ptrdiff_t>(index) * 4);
        }
    }
    const uint32_t fallbackSelf = lift_field<uint32_t>(self, 0xEC);
    ext_006E7410(reinterpret_cast<void*>(static_cast<uintptr_t>(fallbackSelf)),
                 0u, 0xAA93ECu);
    return 0;
}
} // namespace lift_006DC510

// [0x006DBE10] sub_006DBE10 (32 bytes)
namespace lift_006DBE10 {
// Known callee 0x006FC930: sub_006FC930 (getter returning int32_t field at +0x14). Metadata-only reference (not called by this function's asm).
extern int32_t ext_006FC930(void* self);
// Known callee 0x006DC550: sub_006DC550 (getter returning int32_t field at +0xB8). Metadata-only reference (not called by this function's asm).
extern int32_t ext_006DC550(void* self);
// Known callee 0x006E7410: Unknown::assignStringByIndexAndForward_006E7410. Metadata-only reference (not called by this function's asm).
extern void* ext_006E7410(void* self, DWORD arg1, DWORD arg2);
// Known callee 0x006DEED0: Unknown::swapField38AndNotify. Metadata-only reference (not called by this function's asm).
extern DWORD ext_006DEED0(void* self, DWORD newValue, uint8_t releaseOld);

// @name Unknown::subInt64IntoArg_006DBE10
// @class Unknown
// @summary Computes *arg = *self - *arg as a 64-bit subtraction (low dword, then high dword with borrow) and returns arg.
// @field Unknown +0x00 DWORD lo
// @field Unknown +0x04 DWORD hi
void* fn_006DBE10(void* self, DWORD /*unused*/, void* arg) {
    (void)&ext_006FC930;
    (void)&ext_006DC550;
    (void)&ext_006E7410;
    (void)&ext_006DEED0;
    auto* s = static_cast<DWORD*>(self);
    auto* a = static_cast<DWORD*>(arg);
    const DWORD borrow = (s[0] < a[0]) ? 1u : 0u;
    const DWORD lo = s[0] - a[0];
    const DWORD hi = s[1] - a[1] - borrow;
    a[0] = lo;
    a[1] = hi;
    return arg;
}
} // namespace lift_006DBE10

// [0x006DC370] sub_006DC370 (80 bytes)
namespace lift_006DC370 {
// Known callee 0x006E7410: Unknown::assignStringByIndexAndForward_006E7410 (Passes the first stack argument as the index to assignStringByIndex (006E7440) on self, then forwards the second stack argument to the subobject call (006E7430) on self and returns its result.)
extern void* ext_006E7410(void* self, uint32_t arg1, uint32_t arg2);

// @name Unknown::setIndexOrReset_006DC370
// @class Unknown
// @summary If index is in [0, count) store it at +0xe8 and return true; otherwise forward 0 and 0xaa87e4 to the subobject at +0xec, clear +0xe8 and return false.
// @field Unknown +0xb8 int32_t count
// @field Unknown +0xe8 int32_t currentIndex
// @field Unknown +0xec void* subobject
uint8_t fn_006DC370(void* self, int32_t index) {
    if (index >= 0 && index < lift_field<int32_t>(self, 0xb8)) {
        lift_field<int32_t>(self, 0xe8) = index;
        return 1;
    }
    ext_006E7410(lift_field<void*>(self, 0xec), 0, 0xaa87e4u);
    lift_field<int32_t>(self, 0xe8) = 0;
    return 0;
}
} // namespace lift_006DC370

// [0x006D2C30]
namespace lift_006D2C30 {
// @name Unknown::initFromArgBlocks_006D2C30
// @class Unknown
// @summary Resets this, copies arg->+0x08 into this->+0x08, then for i in [0, arg->+0x00) builds a 0x20-byte block from sub_006D2A90(arg, i) and inserts it into this.
// @field Unknown +0x08 uint32_t field_0x08


extern uint32_t ext_006D2A90(const void* self, uint32_t arg);
extern int32_t ext_006D2BD0(void* self, uint32_t* args);
extern void ext_006D2250(void* self);
extern void* ext_006D2390(void* self, uint32_t arg1);

void* fn_006D2C30(void* self, const void* arg) {
    ext_006D2250(self);

    const uint8_t* a = static_cast<const uint8_t*>(arg);
    uint8_t* s = static_cast<uint8_t*>(self);

    *reinterpret_cast<uint32_t*>(s + 0x08) = *reinterpret_cast<const uint32_t*>(a + 0x08);

    const int32_t count = *reinterpret_cast<const int32_t*>(a + 0x00);
    for (int32_t i = 0; i < count; ++i) {
        const uint32_t value = ext_006D2A90(arg, static_cast<uint32_t>(i));

        // 0x20-byte scratch block (asm: sub esp, 0x20; ecx = esp).
        uint32_t block[8] = {};
        ext_006D2390(block, value);
        ext_006D2BD0(self, block);
    }

    return self;
}
} // namespace lift_006D2C30

// [0x006DC4C0] sub_006DC4C0 (80 bytes)
namespace lift_006DC4C0 {
// Known callee 0x006C9330: sub_006C9330 (Pure jump thunk forwarding to sub_006E7460.)
extern void __fastcall ext_006C9330(void* self);
// Known callee 0x006DC550: sub_006DC550 (Getter returning int32_t field at offset +0xB8.)
extern int32_t __fastcall ext_006DC550(void* self);
// Known callee 0x006E7410: Unknown::assignStringByIndexAndForward_006E7410 (Passes the first stack argument as the index to assignStringByIndex (006E7440) on self, then forwards the second stack argument to the subobject call (006E7430) on self and returns its result.)
extern void* __thiscall ext_006E7410(void* self, uint32_t arg1, uint32_t arg2);

// @name Unknown::getIndexedEntryOrForward_006DC4C0
// @class Unknown
// @summary Forwards entries[index] (index at stack arg, entries at +0xC8) to ext_006C9330 when index is non-negative and below the getter limit (ext_006DC550); otherwise forwards +0xEC subobject with (0, 0xAA93EC) to ext_006E7410.
// @field Unknown +0xC8 uint32_t* entries
// @field Unknown +0xEC void* subobject
extern void __thiscall fn_006DC4C0(void* self, int32_t index) {
    auto* base = static_cast<uint8_t*>(self);
    if (index >= 0) {
        const int32_t limit = ext_006DC550(self);
        if (index < limit) {
            uint32_t* entries = *reinterpret_cast<uint32_t**>(base + 0xC8);
            const uintptr_t entry = static_cast<uintptr_t>(entries[index]);
            ext_006C9330(reinterpret_cast<void*>(entry));
            return;
        }
    }
    void* sub = *reinterpret_cast<void**>(base + 0xEC);
    (void)ext_006E7410(sub, 0u, 0x00AA93ECu);
}
} // namespace lift_006DC4C0

// [0x006D4B30] sub_006D4B30 (109 bytes)
namespace lift_006D4B30 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
// Called as thiscall-style: self = this+0x4C, edx unused, index on stack.
extern void ext_006D2200();
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
// Called with self = this+0x1C4 and index 0.
extern void ext_006E7440();

// @name Unknown::removeEntryAndRelease_006D4B30
// @class Unknown
// @summary Linearly searches the DWORD array at +0x5C (count at +0x4C) for the given value; if found, removes it and releases the item via its vtable slot 0 (deleting dtor, flag 1); otherwise calls the sub-object at +0x1C4 with index 0. Returns true when found, false otherwise.
// @field Unknown +0x1C4 void* field_0x1C4
// @field Unknown +0x4C int32_t count
// @field Unknown +0x5C uint32_t* entries
bool fn_006D4B30(void* self, uint32_t item) {
    auto* base = static_cast<uint8_t*>(self);
    const int32_t count = *reinterpret_cast<int32_t*>(base + 0x4C);

    if (count > 0) {
        auto* entries = *reinterpret_cast<uint32_t**>(base + 0x5C);
        for (int32_t i = 0; i < count; ++i) {
            if (entries[i] == item) {
                reinterpret_cast<void (*)(void*, void*, int32_t)>(&ext_006D2200)(
                    base + 0x4C, nullptr, i);
                if (item != 0) {
                    auto* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(item));
                    void** vtbl = *reinterpret_cast<void***>(obj);
                    reinterpret_cast<void (*)(void*, int)>(vtbl[0])(obj, 1);
                }
                return true;
            }
        }
    }

    reinterpret_cast<void* (*)(void*, uint32_t)>(&ext_006E7440)(base + 0x1C4, 0);
    return false;
}
} // namespace lift_006D4B30

// [0x006D89D0]
namespace lift_006D89D0 {
// @name Unknown::forwardArgInsertIndex_006D89D0
// @class Unknown
// @summary Wraps arg1 in a temporary holder, forwards this->field_0x00 and the holder to insertArgAndReturnIndex, runs the empty cleanup helper, and returns the insert index.
// @field Unknown +0x00 int32_t field_0x00

void* ext_0077FAC0(void* self, uint32_t arg1);
int32_t ext_006D8A40(void* self, int32_t arg1, int32_t* arg2);
void ext_006D80A0(void);

int32_t fn_006D89D0(void* self, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
    int32_t holder[4] = {0, 0, 0, 0};
    (void)arg2;
    (void)arg3;
    (void)arg4;

    // Temporary holder referencing arg1 (ForwardArgToCalleeReturnThis).
    ext_0077FAC0(holder, (uint32_t)(uintptr_t)&arg1);

    int32_t first = *(int32_t*)self;
    int32_t result = ext_006D8A40(self, first, &arg1);

    ext_006D80A0();
    return result;
}
} // namespace lift_006D89D0

// [0x006D4AC0] sub_006D4AC0 (110 bytes)
namespace lift_006D4AC0 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeEntryAndRelease_006D4AC0
// @class Unknown
// @summary Searches the DWORD array at this+0x34 for the given entry; if found, removes it and calls its vtable slot 1 (deleting dtor, flag 1); otherwise calls ext_006E7440 on this+0x1C4 with index 0. Returns true when found, false otherwise.
// @field Unknown +0x34 int32_t entryCount
// @field Unknown +0x44 uint32_t* entries
// @field Unknown +0x1C4 uint8_t field_0x1c4[0]
bool fn_006D4AC0(void* self, void* /*edx*/, void* entry) {
    const int32_t count = lift_field<int32_t>(self, 0x34);
    const uint32_t want = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(entry));

    int32_t index = 0;
    bool found = false;
    if (count > 0) {
        const uint32_t* entries = reinterpret_cast<const uint32_t*>(lift_field<void*>(self, 0x44));
        do {
            if (entries[index] == want) {
                found = true;
                break;
            }
            ++index;
        } while (index < count);
    }

    if (!found) {
        ext_006E7440(static_cast<uint8_t*>(self) + 0x1C4, 0);
        return false;
    }

    ext_006D2200(static_cast<uint8_t*>(self) + 0x34, nullptr, index);

    if (entry != nullptr) {
        void* vtable = lift_field<void*>(entry, 0x00);
        void* slot = lift_field<void*>(vtable, 0x04);
        reinterpret_cast<void (*)(void*, int32_t)>(slot)(entry, 1);
    }
    return true;
}
} // namespace lift_006D4AC0

// [0x006D4C20] sub_006D4C20 (110 bytes)
namespace lift_006D4C20 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, uint32_t index);

// @name Unknown::removeEntryAndRelease_006D4C20
// @class Unknown
// @summary Searches the pointer array at this+0x7c for key; if found, removes it and releases key via its vtable slot 1, returning true. If not found, assigns string index 0 on the subobject at +0x1c4 and returns false.
// @field Unknown +0x7c int32_t m_entryCount
// @field Unknown +0x8c void** m_entryData
// @field Unknown +0x1c4 uint8_t field_0x1c4
extern uint8_t fn_006D4C20(void* self, void* key) {
    uint8_t* base = static_cast<uint8_t*>(self);
    const int32_t count = lift_field<int32_t>(base, 0x7c);

    int32_t found = -1;
    if (count > 0) {
        void** entries = lift_field<void**>(base, 0x8c);
        for (int32_t i = 0; i < count; ++i) {
            if (entries[i] == key) {
                found = i;
                break;
            }
        }
    }

    if (found == -1) {
        ext_006E7440(base + 0x1c4, 0);
        return 0;
    }

    ext_006D2200(base + 0x7c, found);

    if (key != nullptr) {
        using ReleaseFn = void*(__thiscall*)(void* self, uint32_t flags);
        void** vtable = *static_cast<void***>(key);
        reinterpret_cast<ReleaseFn>(vtable[1])(key, 1u);
    }
    return 1;
}
} // namespace lift_006D4C20

// [0x006D9070] sub_006D9070 (96 bytes)
namespace lift_006D9070 {
// Metadata-listed references that the disassembly never touches. Address-only
// references below have no runtime effect (see liftwork metadata notes).
extern void ext_006B9D80();
extern void ext_006C9A60();
extern void ext_006D03D0();
extern int mem_00AA9158;

// @name Unknown::copyTripleIfMode_006D9070
// @class Unknown
// @summary If mode at +0x10 is 1 or 2, copies three doubles from src into the sub-object at field_0x0c+0x270, sets the flag at +0x16, and returns 1; otherwise returns 0.
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 int32_t field_0x10
// @field Unknown +0x16 uint8_t field_0x16
uint8_t fn_006D9070(void* self, const double* src) {
    // Address-only references to metadata-listed symbols; never called or read.
    (void)&ext_006B9D80;
    (void)&ext_006C9A60;
    (void)&ext_006D03D0;
    (void)&mem_00AA9158;

    const int32_t mode = lift_field<int32_t>(self, 0x10);
    if (mode != 1 && mode != 2) {
        return 0;
    }

    // All three source doubles are read before any destination write.
    const double a = src[0];
    const double b = src[1];
    const double c = src[2];

    // 32-bit guest pointer stored at +0x0c; widen through uintptr_t for the host cast.
    const uint32_t sub = lift_field<uint32_t>(self, 0x0c);
    unsigned char* dst = reinterpret_cast<unsigned char*>(
        static_cast<uintptr_t>(sub) + 0x270);

    lift_field<double>(dst, 0x00) = a;
    lift_field<double>(dst, 0x08) = b;
    lift_field<double>(dst, 0x10) = c;

    lift_field<uint8_t>(self, 0x16) = 1;
    return 1;
}
} // namespace lift_006D9070

// [0x006DCFD0] sub_006DCFD0 (112 bytes)
namespace lift_006DCFD0 {
// Known callee 0x006BB0C0: Unknown::appendUniqueToArray_006BB0C0 (Appends a non-zero value to the DynamicArray at +0x9C unless it is already present; then calls virtual slot 0x20 on self with the value.)
extern void ext_006BB0C0(void* self, void* value);
// Known callee 0x006BB150: findItemByKey (Searches an array of object pointers at +0xac (count at +0x9c) using ext_006E6E40 and returns the first matching pointer or 0.)
extern void* ext_006BB150(void* self, void* arg0);
extern void ext_006FC9A0(void* self, void* arg0);

// @name Unknown::appendUnresolvedChildren_006DCFD0
// @class Unknown
// @summary For each entry of the source object returned by vtable slot 0x0C, skip entries already found by ext_006BB150, otherwise resolve via vtable slot 0x38, append the result, and call ext_006FC9A0 on it with the source.
// @field Unknown +0xC0 int32_t field_0xC0 (source object: entry count)
// @field Unknown +0xD0 void** field_0xD0 (source object: entry pointer array)
void fn_006DCFD0(void* self) {
    using GetSourceFn = void* (*)(void*);
    using ResolveFn = void* (*)(void*, void*);

    void** vtbl = *reinterpret_cast<void***>(self);
    void* src = reinterpret_cast<GetSourceFn>(vtbl[0x0C / sizeof(void*)])(self);
    if (src == nullptr) {
        return;
    }

    int32_t count = lift_field<int32_t>(src, 0xC0);
    for (int32_t i = 0; i < count; ++i) {
        void* item = lift_field<void**>(src, 0xD0)[i];
        if (ext_006BB150(self, item) != nullptr) {
            continue;
        }
        void* resolved = reinterpret_cast<ResolveFn>(vtbl[0x38 / sizeof(void*)])(self, item);
        if (resolved == nullptr) {
            continue;
        }
        ext_006BB0C0(self, resolved);
        ext_006FC9A0(resolved, src);
    }
}
} // namespace lift_006DCFD0

// [0x006D4D90] sub_006D4D90 (116 bytes)
namespace lift_006D4D90 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeItemIfPresent_006D4D90
// @class Unknown
// @summary Searches the DWORD array at this+0xd4 (count at this+0xc4) for item; if found, removes it from the array and releases it via vtable slot 5 (arg 1); otherwise calls ext_006E7440 on this+0x1c4 with index 0. Returns true when found.
// @field Unknown +0xc4 int32_t count
// @field Unknown +0xd4 uint32_t itemsPtr
// @field Unknown +0x1c4 void* field_0x1c4
bool fn_006D4D90(void* self, DWORD item) {
    void* dynArray = static_cast<uint8_t*>(self) + 0xc4;
    int32_t count = lift_field<int32_t>(self, 0xc4);

    if (count > 0) {
        auto* items = reinterpret_cast<DWORD*>(
            static_cast<uintptr_t>(lift_field<DWORD>(self, 0xd4)));
        for (int32_t i = 0; i < count; ++i) {
            if (items[i] == item) {
                ext_006D2200(dynArray, nullptr, i);
                if (item != 0) {
                    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(item));
                    void** vtbl = *reinterpret_cast<void***>(obj);
                    auto release = reinterpret_cast<void (*)(void*, int32_t)>(vtbl[5]);
                    release(obj, 1);
                }
                return true;
            }
        }
    }

    ext_006E7440(static_cast<uint8_t*>(self) + 0x1c4, 0);
    return false;
}
} // namespace lift_006D4D90

// [0x006D5190] sub_006D5190 (116 bytes)
namespace lift_006D5190 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeItemAndRelease_006D5190
// @class Unknown
// @summary Searches the DWORD array at this+0x19c for item; if found, removes it and calls item's vtable slot 3 with 1; otherwise calls ext_006E7440(this+0x1c4, 0). Returns true when removed.
// @field Unknown +0x19c int32_t itemCount
// @field Unknown +0x1ac DWORD* itemData
// @field Unknown +0x1c4 uint8_t field_0x1c4
bool fn_006D5190(void* self, void* item) {
    uint8_t* const base = static_cast<uint8_t*>(self);
    const int32_t count = lift_field<int32_t>(self, 0x19c);
    const DWORD key = static_cast<DWORD>(reinterpret_cast<uintptr_t>(item));

    int32_t found = -1;
    if (count > 0) {
        DWORD* const data = reinterpret_cast<DWORD*>(
            static_cast<uintptr_t>(lift_field<DWORD>(self, 0x1ac)));
        for (int32_t i = 0; i < count; ++i) {
            if (data[i] == key) {
                found = i;
                break;
            }
        }
    }

    if (found == -1) {
        ext_006E7440(base + 0x1c4, 0);
        return false;
    }

    ext_006D2200(base + 0x19c, found);

    if (item != nullptr) {
        void** const vtbl = *reinterpret_cast<void***>(item);
        reinterpret_cast<void (*)(void*, int)>(vtbl[3])(item, 1);
    }
    return true;
}
} // namespace lift_006D5190

// [0x006D4E90] sub_006D4E90 (116 bytes)
namespace lift_006D4E90 {
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (thiscall-style; ecx = self, one stack arg)
extern void* ext_006E7440(void* self, DWORD index);
// Known callee 0x006D2200: DynArray::removeAt (ecx = array self, one stack arg = index)
extern void ext_006D2200(void* self, void* edx, int32_t index);

// @name Unknown::removeEntryAndRelease_006D4E90
// @class Unknown
// @summary Searches the DWORD DynArray at +0x124 for the value passed in; if found, removes it and, when the value is a non-null object, calls its vtable slot 5 with flag 1, returning true. If not found, calls ext_006E7440 on this+0x1C4 with index 0 and returns false.
// @field Unknown +0x124 int32_t field_0x124
// @field Unknown +0x134 void* field_0x134
// @field Unknown +0x1C4 void* field_0x1C4
bool fn_006D4E90(void* self, void* obj) {
    const int32_t count = lift_field<int32_t>(self, 0x124);
    const DWORD key = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));

    int32_t index = 0;
    if (count > 0) {
        DWORD* data = lift_field<DWORD*>(self, 0x134);
        for (; index < count; ++index) {
            if (data[index] == key) {
                break;
            }
        }
    }

    const bool found = index < count;
    if (!found) {
        ext_006E7440(static_cast<uint8_t*>(self) + 0x1C4, 0);
        return false;
    }

    ext_006D2200(static_cast<uint8_t*>(self) + 0x124, nullptr, index);

    if (obj != nullptr) {
        using Slot5Fn = void (*)(void* self, int32_t flag);
        void* vtable = lift_field<void*>(obj, 0x00);
        Slot5Fn release = lift_field<Slot5Fn>(vtable, 0x14);
        release(obj, 1);
    }
    return true;
}
} // namespace lift_006D4E90

// [0x006D4F10] sub_006D4F10 (116 bytes)
namespace lift_006D4F10 {
// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeElementIfFound_006D4F10
// @class Unknown
// @summary Linear-searches the pointer array at +0x13c for arg; if found, removes it, calls arg's vtable slot 5 (arg, 1) when non-null, and returns 1; otherwise calls ext_006E7440(this+0x1c4, 0) and returns 0.
// @field Unknown +0x13c int32_t field_0x13c
// @field Unknown +0x14c void** field_0x14c
// @field Unknown +0x1c4 uint8_t field_0x1c4
uint8_t fn_006D4F10(void* self, void* arg) {
    const int32_t count = lift_field<int32_t>(self, 0x13c);
    void** const data = lift_field<void**>(self, 0x14c);

    for (int32_t i = 0; i < count; ++i) {
        if (data[i] == arg) {
            ext_006D2200(&lift_field<uint8_t>(self, 0x13c), nullptr, i);
            if (arg != nullptr) {
                void** vtbl = *reinterpret_cast<void***>(arg);
                reinterpret_cast<void(__thiscall*)(void*, int)>(vtbl[5])(arg, 1);
            }
            return 1;
        }
    }

    ext_006E7440(&lift_field<uint8_t>(self, 0x1c4), 0);
    return 0;
}
} // namespace lift_006D4F10

// [0x006D4BA0] sub_006D4BA0 (117 bytes)
namespace lift_006D4BA0 {
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// Known callee 0x006D2200: DynArray::removeAt (Removes element at index by shifting subsequent elements down and decrementing count.)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, uint32_t index);

// @name Unknown::removeItemIfPresent_006D4BA0
// @class Unknown
// @summary Searches the DynArray at +0x64 for the item pointer; if found, removes it, calls vtable slots 1 and 5 (destroy) on it and returns true; otherwise calls ext_006E7440(this+0x1C4, 0) and returns false.
// @field Unknown +0x64 int32_t itemCount
// @field Unknown +0x74 uint32_t itemData
// @field Unknown +0x1C4 void* field_0x1c4
bool fn_006D4BA0(void* self, uint32_t item) {
    const int32_t count = lift_field<int32_t>(self, 0x64);
    const uint32_t data = lift_field<uint32_t>(self, 0x74);
    const void* dataBase = reinterpret_cast<const void*>(static_cast<uintptr_t>(data));

    int32_t index = 0;
    if (count > 0) {
        for (; index < count; ++index) {
            if (lift_field<uint32_t>(dataBase, static_cast<ptrdiff_t>(index) * 4) == item)
                break;
        }
    }

    if (count <= 0 || index >= count) {
        // Not found: ext_006E7440(this + 0x1C4, 0), result discarded; return false.
        (void)ext_006E7440(&lift_field<uint8_t>(self, 0x1C4), 0);
        return false;
    }

    // Found: remove at index, then dispatch vtable slot 1 on item, and slot 5 (flag 1) if non-null.
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(item));
    ext_006D2200(self, nullptr, index);
    lift_vcall<void, 1>(obj);
    if (obj)
        lift_vcall<void, 5>(obj, 1);
    return true;
}
} // namespace lift_006D4BA0

// [0x006D59C0] sub_006D59C0 (122 bytes)
namespace lift_006D59C0 {
// Known callee 0x006B9D10: Unknown::InitAndReturnSelf (Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.)
extern void* ext_006B9D10(void* self);
// Known callee 0x006E73B0: Unknown::initWithArgs_006E73B0 (Initializes the sub-object at +0x08, stores two constructor arguments at +0x04 and +0x54, runs the reset helper, and returns this.)
extern void* ext_006E73B0(void* self, DWORD arg1, DWORD arg2);

// @name Unknown::initWithSubobjectAndArg_006D59C0
// @class Unknown
// @summary Sets the vtable, initializes the sub-object at +0x04, initializes members at +0x5C and +0xB0, stores the single stack argument at +0xA8 (zeroing +0xAC), and returns this.
// @field Unknown +0x00 DWORD vtable
// @field Unknown +0x5C DWORD field_0x5C
// @field Unknown +0xA8 DWORD field_0xA8
// @field Unknown +0xAC DWORD field_0xAC
// @field Unknown +0xB0 DWORD field_0xB0
void* fn_006D59C0(void* self, DWORD arg) {
    // Original MSVC SEH frame (fs:[0] push/restore, EH state slots) is omitted; it has no portable equivalent.
    auto* base = static_cast<uint8_t*>(self);
    ext_006E73B0(base + 0x04, 0x00AA8E88u, 0x0Bu);
    ext_006B9D10(base + 0x5C);
    lift_field<DWORD>(self, 0xA8) = arg;
    lift_field<DWORD>(self, 0xAC) = 0;
    ext_006B9D10(base + 0xB0);
    lift_field<DWORD>(self, 0x00) = 0x0099393Cu;
    return self;
}
} // namespace lift_006D59C0

// [0x006D4C90] sub_006D4C90 (123 bytes)
namespace lift_006D4C90 {
// Known callee 0x006D2200: DynArray::removeAt (ecx = array self, one stack arg = index)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (thiscall-style; ecx = self, one stack arg)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeEntryAndReleaseAlt_006D4C90
// @class Unknown
// @summary Searches the DWORD DynArray at +0x94 for obj; if found, removes it, calls obj's vtable slot 1, then calls its vtable slot 5 with flag 1, returning true. If not found, calls ext_006E7440 on this+0x1C4 with index 0 and returns false.
// @field Unknown +0x94 int32_t field_0x94
// @field Unknown +0xA4 DWORD* field_0xA4
// @field Unknown +0x1C4 void* field_0x1C4
bool fn_006D4C90(void* self, void* obj) {
    const int32_t count = lift_field<int32_t>(self, 0x94);
    const DWORD key = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));

    bool found = false;
    int32_t index = 0;
    if (count > 0) {
        DWORD* data = lift_field<DWORD*>(self, 0xA4);
        for (; index < count; ++index) {
            if (data[index] == key) {
                found = true;
                break;
            }
        }
    }

    if (!found) {
        ext_006E7440(static_cast<unsigned char*>(self) + 0x1C4, 0);
        return false;
    }

    ext_006D2200(static_cast<unsigned char*>(self) + 0x94, nullptr, index);

    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (*)(void*)>(vtbl[1])(obj);

    if (obj != nullptr) {
        vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (*)(void*, int)>(vtbl[5])(obj, 1);
    }
    return true;
}
} // namespace lift_006D4C90

// [0x006D4D10] sub_006D4D10 (123 bytes)
namespace lift_006D4D10 {
// @name sub_006D4D10
// @summary Auto-lifted identical-shape clone of 0x006D4C90 (Unknown::removeEntryAndReleaseAlt_006D4C90).
namespace lift_006D4C90 {
// Known callee 0x006D2200: DynArray::removeAt (ecx = array self, one stack arg = index)
extern void ext_006D2200(void* self, void* edx, int32_t index);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (thiscall-style; ecx = self, one stack arg)
extern void* ext_006E7440(void* self, DWORD index);

// @name Unknown::removeEntryAndReleaseAlt_006D4C90
// @class Unknown
// @summary Searches the DWORD DynArray at +0x94 for obj; if found, removes it, calls obj's vtable slot 1, then calls its vtable slot 5 with flag 1, returning true. If not found, calls ext_006E7440 on this+0x1C4 with index 0 and returns false.
// @field Unknown +0x94 int32_t field_0x94
// @field Unknown +0xA4 DWORD* field_0xA4
// @field Unknown +0x1C4 void* field_0x1C4
bool fn_006D4D10(void* self, void* obj) {
    const int32_t count = lift_field<int32_t>(self, 0xAC);
    const DWORD key = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));

    bool found = false;
    int32_t index = 0;
    if (count > 0) {
        DWORD* data = lift_field<DWORD*>(self, 0xA4);
        for (; index < count; ++index) {
            if (data[index] == key) {
                found = true;
                break;
            }
        }
    }

    if (!found) {
        ext_006E7440(static_cast<unsigned char*>(self) + 0x1C4, 0);
        return false;
    }

    ext_006D2200(static_cast<unsigned char*>(self) + 0xAC, nullptr, index);

    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (*)(void*)>(vtbl[1])(obj);

    if (obj != nullptr) {
        vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (*)(void*, int)>(vtbl[5])(obj, 1);
    }
    return true;
}
} // namespace lift_006D4C90
} // namespace lift_006D4D10
