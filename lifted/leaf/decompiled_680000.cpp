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
