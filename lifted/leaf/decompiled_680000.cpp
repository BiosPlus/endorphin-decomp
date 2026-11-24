// Lifted C++ translation unit: lifted/leaf/decompiled_680000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <new>
#include <string>

#include <string>
namespace lift_006829E0 {
// Known callee 0x0066B080: sub_0066B080 (Auto-lifted identical-shape clone of 0x004D0B60 (GetTableEntry28Address).)
extern void* ext_0066B080(uint32_t index);

// @name VTableDispatch::GetTableEntry28ViaSlot30
// @class VTableDispatch
// @summary Loads the object at this+0x28, calls its vtable slot at +0x30 to obtain an index, and returns GetTableEntry28Address(index).
// @field VTableDispatch +0x28 void* target
void* fn_006829E0(void* self) {
    void* target = lift_field<void*>(self, 0x28);
    void* vtable = lift_field<void*>(target, 0x00);
    using Slot30 = uint32_t (__thiscall*)(void* self);
    Slot30 slot = reinterpret_cast<Slot30>(lift_field<void*>(vtable, 0x30));
    uint32_t index = slot(target);
    return ext_0066B080(index);
}
} // namespace lift_006829E0

// [0x006813B0] sub_006813B0 (27 bytes)
namespace lift_006813B0 {
// @name sub_006813B0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_006812A0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_006813B0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_006812A0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_006813B0

// [0x00687510] sub_00687510 (33 bytes)
namespace lift_00687510 {
// @name sub_00687510
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_00687510(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x28;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_00687510

// [0x00682E20] sub_00682E20 (33 bytes)
namespace lift_00682E20 {
// @name Unknown::computeScaledDeltaDiv128
// @class Unknown
// @summary Returns 0 if field_0x04 is 0; otherwise returns (field_0x08 - field_0x04) scaled by a signed reciprocal multiply and divided by 128 with round-toward-zero correction.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00682E20(void* self) {
    const int32_t a = lift_field<int32_t>(self, 0x04);
    if (a == 0) {
        return 0;
    }

    const int32_t delta = lift_field<int32_t>(self, 0x08) - a;

    // Signed 32x32 -> 64 multiply (imul), keep the high dword.
    const int64_t prod = static_cast<int64_t>(static_cast<int32_t>(0xDD67C8A7u)) *
                         static_cast<int64_t>(delta);
    int32_t hi = static_cast<int32_t>(static_cast<uint64_t>(prod) >> 32);
    hi = static_cast<int32_t>(static_cast<uint32_t>(hi) + static_cast<uint32_t>(delta));

    // Arithmetic shift by 7, then add 1 if the result was negative.
    const int32_t t = hi >> 7;
    return static_cast<int32_t>(t + static_cast<int32_t>(static_cast<uint32_t>(t) >> 31));
}
} // namespace lift_00682E20

// [0x0068BC00] sub_0068BC00 (36 bytes)
namespace lift_0068BC00 {
extern DWORD ext_005111E0(void* self, DWORD* count);

// @name DecrementAndForwardAt0x10
// @summary If the count argument is nonzero, decrement it and forward the decremented count (by pointer) to ext_005111E0 on this+0x10; otherwise return 0.
// @field Unknown +0x10 void* field_0x10 (address only; this+0x10 passed as the this-pointer to ext_005111E0)
DWORD fn_0068BC00(void* self, DWORD count) {
    if (count == 0) {
        return 0;
    }
    count -= 1;
    return ext_005111E0(static_cast<uint8_t*>(self) + 0x10, &count);
}
} // namespace lift_0068BC00

// [0x00688BE0] sub_00688BE0 (37 bytes)
namespace lift_00688BE0 {
extern int mem_00924FF4;

// @name DestroyStringRange
// @summary Destroys the std::string member (at +0x08) of each 0x24-byte element in [begin, end).
// @field Unknown +0x08 std::string field_0x08

using BasicStringDtor = void(__thiscall*)(void* self);

void fn_00688BE0(uint8_t* begin, uint8_t* end) {
    if (begin == end) {
        return;
    }
    auto dtor = reinterpret_cast<BasicStringDtor>(static_cast<uintptr_t>(mem_00924FF4));
    do {
        dtor(begin + 0x08);
        begin += 0x24;
    } while (begin != end);
}
} // namespace lift_00688BE0

// [0x00688B20] sub_00688B20 (37 bytes)
namespace lift_00688B20 {
extern uintptr_t mem_00924FF4;

// @name DestroyStringRange
// @summary Destroys the std::string at +0x10 of each 44-byte element in [begin, end) (__stdcall, ret 8).
// @field Unknown +0x10 std::string field_0x10
void __stdcall fn_00688B20(uint8_t* begin, uint8_t* end) {
    // Element stride is 0x2C; the string destructor is called through the
    // import slot at mem_00924FF4 with `this` = element + 0x10.
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);

    for (uint8_t* p = begin; p != end; p += 0x2C) {
        dtor(p + 0x10);
    }
}
} // namespace lift_00688B20

// [0x0068BDC0]
namespace lift_0068BDC0 {
extern uint32_t __thiscall ext_00508680(uint32_t self);
extern double mem_0093BD38;
extern double mem_0094FF78;

// @name sub_0068BDC0
// @summary Calls ext_00508680 on this+0x10, converts unsigned result to double, scales by mem_0094FF78, and returns float
// @field Class +0x10 uint8_t field_0x10
float __thiscall sub_0068BDC0(uint32_t self) {
    uint32_t val = ext_00508680(self + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0094FF78;
    return static_cast<float>(d);
}
} // namespace lift_0068BDC0

// [0x0068BE70]
namespace lift_0068BE70 {
extern uint32_t __thiscall ext_00508680(void* self);
extern double mem_0093BD38;
extern double mem_0098E428;

// @name sub_0068BE70
// @summary Calls sub_00508680 on this+0x10 and converts the unsigned 32-bit result to a scaled float
// @field Unknown +0x10 uint8_t field_0x10
float __thiscall sub_0068BE70(void* self) {
    uint32_t val = ext_00508680(reinterpret_cast<uint8_t*>(self) + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0098E428;
    return static_cast<float>(d);
}
} // namespace lift_0068BE70

// [0x006829A0]
namespace lift_006829A0 {
extern void __stdcall ext_0065D3F0(int32_t handle);
extern int32_t mem_00B5ACC8;

// @name ReleaseHandleAtOffset88
// @class <ClassName> (optional)
// @summary If the int32 at +0x88 is valid (not -1) and the global at 0x00B5ACC8 is nonzero, releases that handle via ext_0065D3F0 and resets it to -1.
// @field <ClassName> +0x88 int32_t field_0x88
void fn_006829A0(void* self) {
    int32_t handle = lift_field<int32_t>(self, 0x88);
    if (handle != -1 && mem_00B5ACC8 != 0) {
        ext_0065D3F0(handle);
        lift_field<int32_t>(self, 0x88) = -1;
    }
}
} // namespace lift_006829A0

// [0x00681380] sub_00681380 (41 bytes)
namespace lift_00681380 {
// @name sub_00681380
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00681170(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00681380(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00681170(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00681380

// [0x00686800] sub_00686800 (41 bytes)
namespace lift_00686800 {
// @name sub_00686800
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00685DA0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00686800(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00685DA0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00686800

// [0x00688AF0] sub_00688AF0 (41 bytes)
namespace lift_00688AF0 {
// @name sub_00688AF0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00687F10(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00688AF0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00687F10(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00688AF0

// [0x00688D30] sub_00688D30 (41 bytes)
namespace lift_00688D30 {
// @name sub_00688D30
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00687FC0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00688D30(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00687FC0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00688D30

// [0x0068BED0]
namespace lift_0068BED0 {
extern uint32_t __thiscall ext_00508680(void* self);
extern uint64_t mem_0093BD38;
extern uint64_t mem_0098E430;

// @name sub_0068BED0
// @summary Converts an unsigned 32-bit value from sub_00508680(this + 0x10) to float via double scaling
// @field sub_0068BED0 +0x10 uint8_t field_0x10
float __thiscall sub_0068BED0(void* self) {
    uint32_t eax = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double val = static_cast<double>(static_cast<int32_t>(eax));
    if (static_cast<int32_t>(eax) < 0) {
        double adj = *reinterpret_cast<const double*>(&mem_0093BD38);
        val += adj;
    }
    double c = *reinterpret_cast<const double*>(&mem_0098E430);
    double res = val * c + c;
    return static_cast<float>(res);
}
} // namespace lift_0068BED0

// [0x0068BB30] sub_0068BB30 (45 bytes)
namespace lift_0068BB30 {
extern void ext_0065C770(void* self, void* arg1, int value, void* extra);
void* fn_00687510(void* self, void* arg1);

// Opaque C++ exception payload. The original throws a 0x34-byte object built
// in the frame at [ebp-0x64]; that bound comes from the distance to [ebp-0x30].
struct ThrowObject {
    alignas(8) unsigned char bytes[0x34];
};

// @name Lift_0068BB30_throwFromContext
// @summary Builds a 7-tagged exception object from arg1 and a context-derived value, then throws it.
void fn_0068BB30(void* arg1, void* ctx) {
    unsigned char scratch[0x1C];  // frame slot [ebp-0x30], bounded by [ebp-0x14]
    void* derived = fn_00687510(ctx, scratch);

    ThrowObject exc{};
    ext_0065C770(&exc, arg1, 7, derived);
    throw exc;
}
} // namespace lift_0068BB30

// [0x00689570] sub_00689570 (47 bytes)
namespace lift_00689570 {
// @name initDefaultState
// @summary Zeroes a state block and sets default double values (0.0 at +0x10/+0x18, 1.0 at +0x30).
// @class (none)
// @field (none) +0x00 uint8_t field_0x00
// @field (none) +0x01 uint8_t field_0x01
// @field (none) +0x02 uint8_t field_0x02
// @field (none) +0x03 uint8_t field_0x03
// @field (none) +0x04 uint32_t field_0x04
// @field (none) +0x08 uint32_t field_0x08
// @field (none) +0x0C uint32_t field_0x0C
// @field (none) +0x10 double field_0x10
// @field (none) +0x18 double field_0x18
// @field (none) +0x24 uint32_t field_0x24
// @field (none) +0x28 uint32_t field_0x28
// @field (none) +0x2C uint32_t field_0x2C
// @field (none) +0x30 double field_0x30
void fn_00689570(void* self) {
    lift_field<DOUBLE>(self, 0x10) = 0.0;
    lift_field<DOUBLE>(self, 0x18) = 0.0;
    lift_field<BYTE>(self, 0x00) = 0;
    lift_field<BYTE>(self, 0x01) = 0;
    lift_field<BYTE>(self, 0x02) = 0;
    lift_field<BYTE>(self, 0x03) = 0;
    lift_field<DWORD>(self, 0x04) = 0;
    lift_field<DWORD>(self, 0x08) = 0;
    lift_field<DWORD>(self, 0x0C) = 0;
    lift_field<DWORD>(self, 0x24) = 0;
    lift_field<DWORD>(self, 0x28) = 0;
    lift_field<DWORD>(self, 0x2C) = 0;
    lift_field<DOUBLE>(self, 0x30) = 1.0;
}
} // namespace lift_00689570

// [0x0068BEA0] sub_0068BEA0 (47 bytes)
namespace lift_0068BEA0 {
extern int32_t ext_00508680(void* self);
extern double mem_0093BD38; // 2^32 correction added to negative signed inputs (x87 fild sign fixup)
extern double mem_0098E428; // scale constant applied to converted value

// @name Unknown::scaledCallResult
// @class Unknown
// @summary Calls sub_00508680 on self+0x10, converts the unsigned-corrected result to double, scales it by two constants and the float argument, and returns it as float.
// @field Unknown +0x10 void* field_0x10
float fn_0068BEA0(void* self, float scale) {
    int32_t raw = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double value = static_cast<double>(raw);
    if (raw < 0) {
        value += mem_0093BD38;
    }
    value *= mem_0098E428;
    return static_cast<float>(value * static_cast<double>(scale));
}
} // namespace lift_0068BEA0

// [0x0068BE40] sub_0068BE40 (47 bytes)
namespace lift_0068BE40 {
extern int __thiscall ext_00508680(void* self);
extern double mem_0093BD38; // 2^32 bias for unsigned conversion (qword)
extern double mem_0094FF78; // scale constant (qword)

// @name getScaledUnsignedSubvalue
// @summary Calls sub_00508680 on this+0x10, treats its 32-bit result as unsigned, scales by mem_0094FF78 and the float argument, returns float.
float __thiscall fn_0068BE40(void* self, float scale) {
    int v = ext_00508680(static_cast<char*>(self) + 0x10);
    double d = static_cast<double>(v);
    if (v < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0094FF78;
    d *= static_cast<double>(scale);
    return static_cast<float>(d);
}
} // namespace lift_0068BE40

// [0x0068DDD0]
namespace lift_0068DDD0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name copy_0068DDD0
// @summary Copy constructor setting vtables and copying 0x276 dwords from offset 0x10
// @field Obj +0x00 uint32_t vtable_0
// @field Obj +0x04 uint32_t vtable_4
// @field Obj +0x08 uint32_t field_0x08
// @field Obj +0x10 uint8_t[0x9d8] field_0x10

uint32_t __thiscall sub_0068DDD0(uint32_t self, uint32_t other) {
    mem_write32(self, 0x0098dd14u);
    mem_write32(self + 0x4u, 0x0098dce4u);
    mem_write32(self + 0x8u, mem_read32(other + 0x8u));
    for (uint32_t i = 0; i < 0x276u; ++i) {
        mem_write32(self + 0x10u + i * 4u, mem_read32(other + 0x10u + i * 4u));
    }
    return self;
}
} // namespace lift_0068DDD0

// [0x006813D0] sub_006813D0 (55 bytes)
namespace lift_006813D0 {
// @name sub_006813D0
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_006812E0(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_006813D0(uint32_t dst, uint32_t count, uint32_t src) {
    ext_006812E0(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_006813D0

// [0x006878E0]
namespace lift_006878E0 {
// @name fn_006878E0 (fill range with copies of one record)
// @summary Copy-assigns one 36-byte record (u32, u8, string) from src into every slot of [dst, end).
// @field Record36 +0x00 DWORD value
// @field Record36 +0x04 BYTE flag
// @field Record36 +0x08 std_string str

// MSVCP80 std::basic_string<char>::operator=(const basic_string&), thiscall.
// Resolved through the IAT slot mem_00924FDC (.rdata value 0x006291BE).
extern const DWORD mem_00924FDC;
void* ext_std_string_assign(void* self, const void* rhs);

void fn_006878E0(void* dst, void* end, const void* src) {
    if (dst == end) {
        return;
    }
    do {
        lift_field<DWORD>(dst, 0x00) = lift_field<DWORD>(src, 0x00);
        lift_field<BYTE>(dst, 0x04) = lift_field<BYTE>(src, 0x04);
        ext_std_string_assign(static_cast<uint8_t*>(dst) + 0x08,
                              static_cast<const uint8_t*>(src) + 0x08);
        dst = static_cast<uint8_t*>(dst) + 0x24;
    } while (dst != end);
}
} // namespace lift_006878E0

// [0x0068BF00]
namespace lift_0068BF00 {
extern uint32_t __thiscall ext_00508680(void* self);
extern const double mem_0093BD38;
extern const double mem_0098E430;

// @name scaleByRandom_0068BF00
// @summary Scales a float argument using a value from sub_00508680 and two double constants.
// @field unknown +0x10 uint8_t field_0x10[]
extern float __thiscall sub_0068BF00(void* self, float scale) {
    uint32_t val = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    double factor = mem_0098E430;
    double res = (d * factor + factor) * static_cast<double>(scale);
    return static_cast<float>(res);
}
} // namespace lift_0068BF00
