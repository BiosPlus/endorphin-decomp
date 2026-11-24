// Lifted C++ translation unit: lifted/leaf/decompiled_500000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00508310 {
// @name sub_00508310
// @summary Auto-lifted identical-shape clone of 0x0051C6D0 (NMData::RealChannel::vfunc_4).
namespace lift_0051C6D0 {
// @name NMData::RealChannel::vfunc_4
// @class NMData::RealChannel
// @summary Auto-lifted identical-shape clone of 0x0051CDE0 (NMData::QuatChannel::clone).
namespace lift_0051CDE0 {
// @name NMData::QuatChannel::clone
// @class NMData::QuatChannel
// @summary Allocates and copy-constructs a clone of this QuatChannel instance.


void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_005082B0(void* self, const void* other);

void* __thiscall fn_00508310(const void* self) {
    void* copy = ext_006A5C62(0x30);
    if (copy == nullptr) {
        return nullptr;
    }
    return ext_005082B0(copy, self);
}
} // namespace lift_0051CDE0
} // namespace lift_0051C6D0
} // namespace lift_00508310

// [0x00504930] sub_00504930 (10 bytes)
namespace lift_00504930 {
// @name sub_00504930
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_00527280(void);
extern void ext_005220C0(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_00504930(void) {
    ext_00527280();
    ext_005220C0();
}
} // namespace lift_007AE0F0
} // namespace lift_00504930

// [0x0050EE70]
namespace lift_0050EE70 {
extern uintptr_t mem_00924FF4;

// @name destroyStringRange
// @summary Destroys a contiguous range [begin, end) of 0x20-byte std::string objects.
void __stdcall sub_0050EE70(uint32_t begin, uint32_t end) {
    using DtorFn = void(__thiscall*)(uint32_t);
    auto dtor = reinterpret_cast<DtorFn>(mem_00924FF4);
    for (uint32_t cur = begin; cur != end; cur += 0x20) {
        dtor(cur);
    }
}
} // namespace lift_0050EE70

// [0x00503CA0] sub_00503CA0 (37 bytes)
namespace lift_00503CA0 {
// @name initZeroState
// @summary Installs vtable 0x0094F074 at +0x00, zeroes the dword/byte fields, and sets the double at +0x28 to 0.0.
// @field Unknown +0x00 uint32_t vtablePtr
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint8_t field_0x20
// @field Unknown +0x21 uint8_t field_0x21
// @field Unknown +0x28 double field_0x28
void fn_00503CA0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0094F074u;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<double>(self, 0x28) = 0.0;
    lift_field<uint8_t>(self, 0x20) = 0;
    lift_field<uint8_t>(self, 0x21) = 0;
}
} // namespace lift_00503CA0

// [0x0050F9D0]
namespace lift_0050F9D0 {
// @name CompareDoublesByOrder
// @summary Compares two doubles in ascending or descending order based on field_0x08
// @field Unknown +0x08 uint32_t field_0x08


extern uint32_t mem_read32(uintptr_t addr);

bool __thiscall fn_0050F9D0(void* self, double a, double b) {
    uint32_t descending = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x8);
    if (descending == 0) {
        return a < b;
    }
    return a > b;
}
} // namespace lift_0050F9D0

// [0x00500310] sub_00500310 (37 bytes)
namespace lift_00500310 {
// Callee 0x004FFD60: sub_004FFD60 (35B). Called with ECX passed through as `this`, two stack args, DWORD result in EAX.
extern DWORD ext_004FFD60(void* self, DWORD a, DWORD b);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name DwordPairInitFromCall_00500310
// @summary Calls ext_004FFD60 with the incoming this and second argument, then initialises the pair object (first argument) with that result and the second argument via initDwordPair; returns the pair object.
void* fn_00500310(void* self, void* pair, DWORD b) {
    const DWORD value = ext_004FFD60(self, b, 0);
    ext_0055DA20(pair, value, b);
    return pair;
}
} // namespace lift_00500310

// [0x005007C0] sub_005007C0 (35 bytes)
namespace lift_005007C0 {
// Known callee 0x00500310: DwordPairInitFromCall_00500310 (Calls ext_004FFD60 with the incoming this and second argument, then initialises the pair object (first argument) with that result and the second argument via initDwordPair; returns the pair object.)
extern void* ext_00500310(void* self, void* pair, DWORD b);

// @name DwordPairInitWrapper_005007C0
// @summary Forwards (self, pair, b) to ext_00500310 with the result discarded, then returns the pair object (first stack argument).
void* fn_005007C0(void* self, void* pair, DWORD b) {
    ext_00500310(self, pair, b);
    return pair;
}
} // namespace lift_005007C0

// [0x00506D10] sub_00506D10 (41 bytes)
namespace lift_00506D10 {
// @name sub_00506D10
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_005063B0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00506D10(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_005063B0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00506D10

// [0x0050C160] sub_0050C160 (41 bytes)
namespace lift_0050C160 {
// @name sub_0050C160
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0050B3E0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0050C160(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0050B3E0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0050C160

// [0x00503D00] sub_00503D00 (44 bytes)
namespace lift_00503D00 {
// @name fillDoublesFromSource
// @summary Fills `count` consecutive doubles at `dst` with the double loaded from `*src` (re-read each iteration); returns dst + count.
// (Stdcall, 3 args, ret 0xC. No struct field accesses.)
void* fn_00503D00(void* dst, uint32_t count, const void* src) {
    auto* out = static_cast<unsigned char*>(dst);
    for (uint32_t i = count; i != 0; --i) {
        double value;
        std::memcpy(&value, src, sizeof(value));
        std::memcpy(out, &value, sizeof(value));
        out += sizeof(double);
    }
    return out;
}
} // namespace lift_00503D00

// [0x0050E360] sub_0050E360 (44 bytes)
namespace lift_0050E360 {
extern void ext__invalid_parameter_noinfo(void);

// @name ArrayView::elementPtr
// @class ArrayView
// @summary Returns a pointer to element `index` of a pointer-range array (begin at +0x04, end at +0x08), raising the CRT invalid-parameter handler when the index is out of range or the array is empty.
// @field ArrayView +0x04 void* field_0x04
// @field ArrayView +0x08 void* field_0x08
// Original convention: __thiscall (this in ECX), one stack argument, `ret 4`.
void* fn_0050E360(void* self, uint32_t index) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* begin = *reinterpret_cast<uint8_t**>(base + 0x04);
    uint8_t* end = *reinterpret_cast<uint8_t**>(base + 0x08);

    bool valid = false;
    if (begin != nullptr) {
        // (end - begin) >> 2 is the element count (4-byte elements).
        const auto count = static_cast<uint32_t>((end - begin) >> 2);
        valid = index < count;
    }
    if (!valid) {
        ext__invalid_parameter_noinfo();
    }

    return begin + 4u * index;
}
} // namespace lift_0050E360
