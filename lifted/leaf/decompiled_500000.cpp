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
#include <cstdint>
#include <cstring>
#include <istream>
#include <bit>

#include <bit>
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
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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
#include <memory>

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

// [0x0050F9A0]
namespace lift_0050F9A0 {
extern uint32_t mem_00924FC0;

// @name sub_0050F9A0
// @summary Stores arg0 at this+0xC, compares string at *arg0+0x3C with 0x950A80, and stores boolean result at this+0x8.
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C

uint32_t __thiscall sub_0050F9A0(void* self, uint32_t arg0) {
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(self_bytes + 0x0C) = arg0;
    uint32_t inner = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg0));
    using EqFn = uint8_t(__cdecl*)(uint32_t, uint32_t);
    uint8_t eq = reinterpret_cast<EqFn>(static_cast<uintptr_t>(mem_00924FC0))(inner + 0x3C, 0x00950A80u);
    uint32_t res = (eq != 0) ? 1u : 0u;
    *reinterpret_cast<uint32_t*>(self_bytes + 0x08) = res;
    return res;
}
} // namespace lift_0050F9A0

// [0x00503CD0]
namespace lift_00503CD0 {
extern void ext_006A5C5C(uint32_t ptr);
extern uint32_t mem_0094F074;

// @name fn_00503CD0
// @summary Sets vtable to 0x0094F074, frees buffer at +0x14 if non-null, and zeroes fields at +0x14, +0x18, +0x1C.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1c
void __thiscall fn_00503CD0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0094F074));

    uint32_t ptr = *reinterpret_cast<uint32_t*>(obj + 0x14);
    if (ptr != 0) {
        ext_006A5C5C(ptr);
    }

    *reinterpret_cast<uint32_t*>(obj + 0x14) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x18) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x1c) = 0;
}
} // namespace lift_00503CD0

// [0x00503C20] sub_00503C20 (49 bytes)
namespace lift_00503C20 {
// @name CopyRangeToDest
// @summary Copies the 8-byte-element range [first, last) to dest and returns dest plus the copied byte count.
uint32_t fn_00503C20(uint32_t first, uint32_t last, uint32_t dest) {
    const int32_t count = static_cast<int32_t>(last - first) >> 3;
    const uint32_t bytes = static_cast<uint32_t>(count) * 8u;
    const uint32_t end = dest + bytes;
    if (count != 0) {
        std::memmove(reinterpret_cast<void*>(static_cast<uintptr_t>(dest)),
                     reinterpret_cast<const void*>(static_cast<uintptr_t>(first)),
                     bytes);
    }
    return end;
}
} // namespace lift_00503C20

// [0x00503C60] sub_00503C60 (55 bytes)
namespace lift_00503C60 {
// @name sub_00503C60
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_00503B20(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_00503C60(uint32_t dst, uint32_t count, uint32_t src) {
    ext_00503B20(dst, count, src);
    return dst + (count << 5);
}
} // namespace lift_00481DE0
} // namespace lift_00503C60

// [0x00506810] sub_00506810 (55 bytes)
namespace lift_00506810 {
// @name sub_00506810
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_005064D0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_00506810(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_005064D0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x68u;
}
} // namespace lift_0054F2C0
} // namespace lift_00506810

// [0x00504970] sub_00504970 (26 bytes)
namespace lift_00504970 {
// Known callee 0x00516EB0: GetTableEntryByIndex (Returns the pointer stored at index self->+0x34 of the global table's buffer (begin at +0x14, end at +0x18); returns 0 if the global is null. Stdcall, 1 arg, ret 4.)
uint32_t __stdcall ext_00516EB0(void* self);

// @name GetTableEntryPlus20
// @summary Returns the table entry at self->+0x34 offset by 0x20, or null if the global table or entry is absent.
// @field field_0x30 +0x30 uint32_t global_table_handle
void* __fastcall fn_00504970(void* self) {
    uint32_t global_table_handle = lift_field<uint32_t>(self, 0x30);
    if (global_table_handle == 0) {
        return nullptr;
    }
    uint32_t entry = ext_00516EB0(self);
    if (entry == 0) {
        return nullptr;
    }
    return reinterpret_cast<void*>(static_cast<uintptr_t>(entry) + 0x20);
}
} // namespace lift_00504970

// [0x005049B0] sub_005049B0 (60 bytes)
namespace lift_005049B0 {
extern int mem_00925134;

// Import thunk for MSVCR80!_invalid_parameter_noinfo (called through the IAT slot at 0x00925134).
extern void ext_invalid_parameter_noinfo();

// @name ElementArray::getElementAt
// @class ElementArray
// @summary Returns the address of element `index` in a contiguous array of 104-byte records whose begin/end pointers are at +0x04/+0x08; calls the invalid-parameter handler if the array is empty or index >= count.
// @field ElementArray +0x04 uint32_t field_0x04
// @field ElementArray +0x08 uint32_t field_0x08
uint8_t* fn_005049B0(void* self, uint32_t index) {
    constexpr uint32_t kElementSize = 0x68;

    auto* base = static_cast<uint8_t*>(self);
    const uint32_t begin = *reinterpret_cast<uint32_t*>(base + 0x04);

    if (begin == 0) {
        ext_invalid_parameter_noinfo();
    } else {
        const uint32_t end = *reinterpret_cast<uint32_t*>(base + 0x08);
        const int32_t count = static_cast<int32_t>(end - begin) / static_cast<int32_t>(kElementSize);
        if (!(index < static_cast<uint32_t>(count))) {
            ext_invalid_parameter_noinfo();
        }
    }

    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(begin + index * kElementSize));
}
} // namespace lift_005049B0

// [0x0050A6E0]
namespace lift_0050A6E0 {
// @name fillElementRange
// @summary Copies the string at +0x04 and float at +0x20 from the source element into every 0x24-byte element in [begin, end).
// @field Element +0x04 uint8_t[28] field_0x04 (std::string sub-object, assigned via ext_MSVCP80_string_assign)
// @field Element +0x20 float field_0x20

// Import slot for MSVCP80 basic_string<char>::operator=(const string&).
extern const uint32_t mem_00924FDC;

// Thiscall string assignment: self = rhs, returns self.
extern void* ext_MSVCP80_string_assign(void* self, const void* rhs);

void fillElementRange(void* begin, void* end, const void* src) {
    uint8_t* e = static_cast<uint8_t*>(begin);
    uint8_t* last = static_cast<uint8_t*>(end);
    const uint8_t* s = static_cast<const uint8_t*>(src);
    while (e != last) {
        ext_MSVCP80_string_assign(e + 0x04, s + 0x04);
        lift_field<float>(e, 0x20) = lift_field<float>(s, 0x20);
        e += 0x24;
    }
}
} // namespace lift_0050A6E0

// [0x00508800] sub_00508800 (61 bytes)
namespace lift_00508800 {
extern int mem_00924FC0;
extern uint32_t mem_00A40EF8[];

// @name FindMatchingNameIndex
// @summary Compares the string argument against a 3-entry name table; on match stores the index at self+0x0C and returns true.
// @field Unknown +0x0C int32_t field_0x0C

namespace {
using NameEqFn = bool (*)(const void* str, const char* name);
}

extern bool fn_00508800(void* self, const void* str) {
    auto eq = reinterpret_cast<NameEqFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FC0)));
    for (int i = 0; i < 3; ++i) {
        const char* name = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A40EF8[i]));
        if (eq(str, name)) {
            *reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x0C) = i;
            return true;
        }
    }
    return false;
}
} // namespace lift_00508800

// [0x00509C10] sub_00509C10 (61 bytes)
namespace lift_00509C10 {
extern int mem_00924FDC;
extern void* ext_string_assign(void* dst, const void* src);

// @name CopyRecordRange
// @summary Copies each 0x24-byte record in [first, last) to dest (string at +0x04, float at +0x20); returns the advanced dest pointer.
// @field Record +0x04 std::string field_0x04
// @field Record +0x20 float field_0x20
void* fn_00509C10(const void* first, const void* last, void* dest) {
    constexpr std::ptrdiff_t kRecordSize = 0x24;

    const uint8_t* src = static_cast<const uint8_t*>(first);
    const uint8_t* end = static_cast<const uint8_t*>(last);
    uint8_t* out = static_cast<uint8_t*>(dest);

    while (src != end) {
        ext_string_assign(out + 0x04, src + 0x04);
        lift_field<float>(out, 0x20) = lift_field<const float>(src, 0x20);
        src += kRecordSize;
        out += kRecordSize;
    }
    return out;
}
} // namespace lift_00509C10

// [0x00509C50] sub_00509C50 (61 bytes)
namespace lift_00509C50 {
extern int mem_00924FDC;
extern void* ext_MSVCP80_basic_string_assign(void* self, const void* rhs);

// @name CopyBackwardElements24
// @summary Copy-backward over 0x24-byte elements (std::string at +0x04, float at +0x20); returns the new destination start.
// @field Element +0x04 std::string field_0x04
// @field Element +0x20 float field_0x20
void* fn_00509C50(void* first, void* last, void* d_last) {
    auto* begin = static_cast<uint8_t*>(first);
    auto* cur = static_cast<uint8_t*>(last);
    auto* dst = static_cast<uint8_t*>(d_last);
    if (begin == cur) {
        return dst;
    }
    do {
        cur -= 0x24;
        dst -= 0x24;
        ext_MSVCP80_basic_string_assign(dst + 0x04, cur + 0x04);
        lift_field<float>(dst, 0x20) = lift_field<float>(cur, 0x20);
    } while (cur != begin);
    return dst;
}
} // namespace lift_00509C50

// [0x00508860]
namespace lift_00508860 {
extern uint32_t mem_00924FC4;

// @name findElementByName
// @summary Linearly searches a range of 0x24-byte elements for one whose std::string at +0x04 equals the target string.
// @field Element +0x04 std::string name
uint32_t __cdecl sub_00508860(uint32_t first, uint32_t last, uint32_t target) {
    using StringEqFn = uint8_t (__cdecl*)(uint32_t lhs, uint32_t rhs);
    auto string_eq = reinterpret_cast<StringEqFn>(mem_00924FC4);

    uint32_t cur = first;
    while (cur != last) {
        if (string_eq(cur + 0x4, target) != 0) {
            return cur;
        }
        cur += 0x24;
    }
    return cur;
}
} // namespace lift_00508860

// [0x0050C480] sub_0050C480 (68 bytes)
namespace lift_0050C480 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);

// @name ctor_0050C480
// @summary Constructs an object: runs the base-class constructor (ext_00661980), installs vtable 0x00950314, zeroes four dwords at +0x08..+0x14, and returns this. Original SEH frame setup/teardown omitted.
// @field self +0x00 uint32_t vtablePtr
// @field self +0x08 uint32_t field_0x08
// @field self +0x0C uint32_t field_0x0C
// @field self +0x10 uint32_t field_0x10
// @field self +0x14 uint32_t field_0x14
void* fn_0050C480(void* self) {
    ext_00661980(self);
    lift_field<uint32_t>(self, 0x00) = 0x00950314u;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    return self;
}
} // namespace lift_0050C480

// [0x00508BC0]
namespace lift_00508BC0 {
// @name Container::selectIndex
// @class Container
// @summary Clears +0x34, then stores element[index] of the array spanning +0x28..+0x2c into +0x34 if index is in range.
// @field Container +0x28 uint32_t* begin
// @field Container +0x2c uint32_t* end
// @field Container +0x34 uint32_t selected

struct Container {
    unsigned char pad_0000[0x28];
    std::uint32_t* begin;   // +0x28
    std::uint32_t* end;     // +0x2c
    unsigned char pad_0030[0x04];
    std::uint32_t selected; // +0x34
};

// Imported CRT invalid-parameter handler (IAT slot at 0x00925134).
extern void (*mem_00925134)();

static std::size_t element_count(const Container* self) {
    return static_cast<std::size_t>(
        reinterpret_cast<const unsigned char*>(self->end) -
        reinterpret_cast<const unsigned char*>(self->begin)) / sizeof(std::uint32_t);
}

void fn_00508BC0(Container* self, std::uint32_t index) {
    self->selected = 0;
    if (self->begin == nullptr) {
        return;
    }
    if (index >= element_count(self)) {
        return;
    }
    if (self->begin == nullptr || index >= element_count(self)) {
        mem_00925134();
    }
    self->selected = self->begin[index];
}
} // namespace lift_00508BC0

// [0x00505DC0]
namespace lift_00505DC0 {
extern void ext_006A5C5C(void* ptr);

// @name Unknown::DestroyElementsAndReset_00505DC0
// @class Unknown
// @summary Destroys each 0x28-byte element in the vector at this+0x4..this+0x8 via its vtable slot 0 (deleting flag 0), frees the storage, and clears begin/end/capacity.
// @field Unknown +0x04 void* m_begin
// @field Unknown +0x08 void* m_end
// @field Unknown +0x0C void* m_capacity
void fn_00505DC0(void* self) {
    void* begin = lift_field<void*>(self, 0x4);
    if (begin != nullptr) {
        void* end = lift_field<void*>(self, 0x8);
        for (uint8_t* p = static_cast<uint8_t*>(begin); p != static_cast<uint8_t*>(end); p += 0x28) {
            void** vtbl = *reinterpret_cast<void***>(p);
            auto dtor = reinterpret_cast<void (*)(void*, int)>(vtbl[0]);
            dtor(p, 0);
        }
        ext_006A5C5C(begin);
    }
    lift_field<void*>(self, 0x4) = nullptr;
    lift_field<void*>(self, 0x8) = nullptr;
    lift_field<void*>(self, 0xC) = nullptr;
}
} // namespace lift_00505DC0

// [0x00505D00] sub_00505D00 (73 bytes)
namespace lift_00505D00 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called with one pointer argument, cdecl, then caller pops 4).
extern void ext_006A5C5C(void* ptr);

// @name Unknown::DestroyElementsAndFreeStorage_00505D00
// @class Unknown
// @summary Destroys each 0x68-byte element in the [begin, end) range via its vtable slot 0 (deleting-dtor flag 0), frees the begin buffer, and nulls begin/end/capacity.
// @field Unknown +0x04 void* field_0x04 (array begin pointer; element stride 0x68)
// @field Unknown +0x08 void* field_0x08 (array end pointer)
// @field Unknown +0x0C DWORD field_0x0C (capacity pointer, zeroed)
void fn_00505D00(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    uint8_t* begin = *reinterpret_cast<uint8_t**>(base + 0x04);
    if (begin != nullptr) {
        uint8_t* end = *reinterpret_cast<uint8_t**>(base + 0x08);
        for (uint8_t* p = begin; p != end; p += 0x68) {
            void** vtbl = *reinterpret_cast<void***>(p);
            reinterpret_cast<void (*)(void*, int)>(vtbl[0])(p, 0);
        }
        // Re-read begin: element destructors may have changed the field.
        begin = *reinterpret_cast<uint8_t**>(base + 0x04);
        ext_006A5C5C(begin);
    }

    *reinterpret_cast<void**>(base + 0x04) = nullptr;
    *reinterpret_cast<void**>(base + 0x08) = nullptr;
    *reinterpret_cast<uint32_t*>(base + 0x0C) = 0;
}
} // namespace lift_00505D00

// [0x0050B960] sub_0050B960 (73 bytes)
namespace lift_0050B960 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);

// @name Unknown::DestroyElementsAndReset_0050B960
// @class Unknown
// @summary Calls vtable slot 0 (deleting-destructor style, flag 0) on each 0x24-byte element between begin and end, frees the buffer at begin, then nulls begin/end/capacity.
// @field Unknown +0x04 void* begin
// @field Unknown +0x08 void* end
// @field Unknown +0x0C void* capacity
void fn_0050B960(void* self) {
    auto* obj = static_cast<uint8_t*>(self);
    uint8_t* begin = *reinterpret_cast<uint8_t**>(obj + 0x04);
    if (begin != nullptr) {
        uint8_t* end = *reinterpret_cast<uint8_t**>(obj + 0x08);
        for (uint8_t* elem = begin; elem != end; elem += 0x24) {
            void** vtable = *reinterpret_cast<void***>(elem);
            auto dtor = reinterpret_cast<void (*)(void*, int)>(vtable[0]);
            dtor(elem, 0);
        }
        ext_006A5C5C(begin);
    }
    *reinterpret_cast<uint8_t**>(obj + 0x04) = nullptr;
    *reinterpret_cast<uint8_t**>(obj + 0x08) = nullptr;
    *reinterpret_cast<uint8_t**>(obj + 0x0C) = nullptr;
}
} // namespace lift_0050B960

// [0x00500B70] sub_00500B70 (43 bytes)
namespace lift_00500B70 {
// @name sub_00500B70
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_004FFE90(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00500B70(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_004FFE90(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00500B70

// [0x00506900] sub_00506900 (43 bytes)
namespace lift_00506900 {
// @name sub_00506900
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00506600(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00506900(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00506600(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00506900

// [0x0050BDF0] sub_0050BDF0 (43 bytes)
namespace lift_0050BDF0 {
// @name sub_0050BDF0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0050A720(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0050BDF0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0050A720(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0050BDF0

// [0x0050C4D0]
namespace lift_0050C4D0 {
// @name Unknown::ResetElementsAndNotify_0050C4D0
// @class Unknown
// @summary Clears the element buffer at this+0x4 via ext_0050B960, then calls ext_0065F440 on this.
// @field Unknown +0x04 uint8_t field_0x04 (subobject passed by address to ext_0050B960; contents not inspected)

void ext_0050B960(void* self);
void ext_0065F440(void* self);

void fn_0050C4D0(void* self) {
    // Original MSVC SEH prologue/epilogue (fs:[0] frame setup/teardown) is
    // omitted; it only manages exception-handler registration and has no
    // effect on the logic below.
    ext_0050B960(static_cast<uint8_t*>(self) + 0x4);
    ext_0065F440(self);
}
} // namespace lift_0050C4D0

// [0x005052F0]
namespace lift_005052F0 {
// Imported MSVCP80 std::basic_string<char> destructor (thunk at 0x00628FF0, reached via import slot 0x00924FF4).
extern void __thiscall ext_00628FF0(void* self);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void __fastcall ext_0065F440(void* self);

// @name Unknown::Dtor_005052F0
// @summary Destroys the std::string member at this+0x0C, then runs the base teardown via ext_0065F440 (which stores the vptr at +0x0). The original MSVC SEH frame (fs:[0] push/pop) is dropped; only the sequential calls are kept.
// @field Unknown +0x0C std::string field_0x0C
extern void __thiscall fn_005052F0(void* self) {
    ext_00628FF0(reinterpret_cast<uint8_t*>(self) + 0x0C);
    ext_0065F440(self);
}
} // namespace lift_005052F0

// [0x00508740]
namespace lift_00508740 {
// @name UnknownClass_0094F92C::UnknownClass_0094F92C
// @class UnknownClass_0094F92C
// @summary Constructor that initializes base vtable, sets vtable 0x0094F92C, default-constructs std::string at +0x04, and zeroes float at +0x20.
// @field UnknownClass_0094F92C +0x00 uint32_t vtable
// @field UnknownClass_0094F92C +0x04 std::string field_0x04
// @field UnknownClass_0094F92C +0x20 float field_0x20


extern void ext_00661980(void* self);
extern uint32_t mem_00924FE8;

void* fn_00508740(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    ext_00661980(self);
    *reinterpret_cast<uint32_t*>(base) = 0x0094F92Cu;
    using StringCtorFn = void(__thiscall*)(void*);
    reinterpret_cast<StringCtorFn>(mem_00924FE8)(base + 0x04);
    *reinterpret_cast<float*>(base + 0x20) = 0.0f;
    return self;
}
} // namespace lift_00508740

// [0x0050FDA0] sub_0050FDA0 (82 bytes)
namespace lift_0050FDA0 {
// @name Sort3PtrsByKey20
// @summary Compare-exchange sorts three object-pointer slots ascending by the double key at +0x20.
// @field unknown +0x20 double field_0x20
void fn_0050FDA0(void** a, void** b, void** c) {
    auto key = [](void* obj) -> double {
        return *reinterpret_cast<double*>(static_cast<unsigned char*>(obj) + 0x20);
    };
    // Swap the pointers in slots x/y when key(*x) > key(*y); NaN compares false (no swap).
    auto cmpSwap = [&](void** x, void** y) {
        if (key(*x) > key(*y)) {
            void* t = *x;
            *x = *y;
            *y = t;
        }
    };
    cmpSwap(a, b);
    cmpSwap(b, c);
    cmpSwap(a, b);
}
} // namespace lift_0050FDA0

// [0x005086E0] sub_005086E0 (83 bytes)
namespace lift_005086E0 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);
extern int mem_00924FF4;

// @name Unknown::~Unknown_005086E0
// @class Unknown
// @summary Derived-class destructor body: sets vptr to 0x0094F8D4, destroys the std::string member at +0x04, then chains to the base destructor sub_0065F440.
// @field Unknown +0x00 uint32_t vptr
// @field Unknown +0x04 std::string field_0x04
void fn_005086E0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    // Install the derived vtable pointer.
    *reinterpret_cast<std::uint32_t*>(base + 0x00) = 0x0094F8D4u;

    // Destroy the std::string member located at +0x04.
    reinterpret_cast<std::string*>(base + 0x04)->~basic_string();

    // Chain to the base-class teardown.
    ext_0065F440(self);
}
} // namespace lift_005086E0

// [0x00508790] sub_00508790 (83 bytes)
namespace lift_00508790 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);
// Address of the MSVC basic_string<char> destructor, stored in .rdata.
extern uint32_t mem_00924FF4;
// Vtable for this class (value 0x0094F92C in the original image).
extern uint32_t mem_0094F92C;

// @name ClassName::~ClassName
// @class ClassName
// @summary Destructor: resets vtable, destroys the std::string member at +0x04, then runs base cleanup via ext_0065F440.
// @field ClassName +0x00 void* field_0x00
// @field ClassName +0x04 std::string field_0x04
void fn_00508790(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Vtable pointer is set to this class's vtable.
    *reinterpret_cast<uint32_t*>(base + 0x00) = mem_0094F92C;

    // Destroy the string member at +0x04.
    using StrDtor = void (*)(void*);
    auto strDtor = reinterpret_cast<StrDtor>(static_cast<uintptr_t>(mem_00924FF4));
    if (strDtor) {
        strDtor(base + 0x04);
    }

    // Run the base-level cleanup on the same object.
    ext_0065F440(self);
}
} // namespace lift_00508790

// [0x005088D0] sub_005088D0 (85 bytes)
namespace lift_005088D0 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
// Import slot holding the MSVCP80 std::basic_string<char> default-constructor thunk.
extern int mem_00924FE8;

// @name Unknown::initVtableAndDefaults_005088D0
// @class Unknown
// @summary Sets the vtable, default-constructs a std::string at +0x04, and initializes two floats (+0x20 = 0.0f, +0x24 = 1.0f).
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 std::string name
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
void fn_005088D0(void* self) {
    // The original SEH frame setup/teardown (fs:[0] push/restore) is MSVC-specific
    // exception bookkeeping and is omitted here.
    ext_00661980(self);

    // Default-construct the string member at this+0x04 via the imported thunk.
    using StringCtorFn = void (*)(void*);
    auto string_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE8));
    string_ctor(static_cast<uint8_t*>(self) + 4);

    // Final vtable value is 0x0094F8D4 (overwrites the value set by ext_00661980).
    lift_field<uint32_t>(self, 0) = 0x0094F8D4u;

    lift_field<float>(self, 0x20) = 0.0f;
    lift_field<float>(self, 0x24) = 1.0f;
}
} // namespace lift_005088D0

// [0x00506740] sub_00506740 (85 bytes)
namespace lift_00506740 {
// @name sub_00506740
// @summary Auto-lifted identical-shape clone of 0x0048CBD0 (ComputeStrideOffset_0048CBD0).
namespace lift_0048CBD0 {
extern void ext_00506270(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint8_t a5, uint8_t a6);

// @name ComputeStrideOffset_0048CBD0
// @summary Calls ext_0048C9A0 with the stack args, then returns arg3 + ((arg2 - arg1) / 104) * 104 (signed, truncating).
int32_t fn_00506740(int32_t arg1, int32_t arg2, int32_t arg3) {
    // Locals cleared to zero before the call (only the low byte is written).
    const uint8_t flag5 = 0;
    const uint8_t flag6 = 0;
    ext_00506270(arg1, arg2, arg3, arg3, flag5, flag6);

    const int32_t diff = static_cast<int32_t>(static_cast<uint32_t>(arg2) - static_cast<uint32_t>(arg1));
    const int32_t quotient = diff / 104;
    const uint32_t scaled = static_cast<uint32_t>(quotient) * 104u;
    return static_cast<int32_t>(static_cast<uint32_t>(arg3) + scaled);
}
} // namespace lift_0048CBD0
} // namespace lift_00506740

// [0x0050B060]
namespace lift_0050B060 {
// @name Unknown::copyRecordRangeAndAdvance_0050B060
// @summary Copies the 0x24-byte records in [first, last) to dest and returns dest advanced past them.

void* ext_00509C10(const void* first, const void* last, void* dest);

void* fn_0050B060(const void* first, const void* last, void* dest) {
    ext_00509C10(first, last, dest);
    const int32_t diff = static_cast<int32_t>(
        reinterpret_cast<const char*>(last) - reinterpret_cast<const char*>(first));
    const int32_t count = diff / 36;  // 0x24-byte records; truncates toward zero like the original sign fixup
    return static_cast<char*>(dest) + static_cast<intptr_t>(count) * 36;
}
} // namespace lift_0050B060

// [0x005007F0] sub_005007F0 (86 bytes)
namespace lift_005007F0 {
// @name sub_005007F0
// @summary Auto-lifted identical-shape clone of 0x0050B060 (Unknown::copyRecordRangeAndAdvance_0050B060).
namespace lift_0050B060 {
// @name Unknown::copyRecordRangeAndAdvance_0050B060
// @summary Copies the 0x24-byte records in [first, last) to dest and returns dest advanced past them.

void* ext_004FFD90(const void* first, const void* last, void* dest);

void* fn_005007F0(const void* first, const void* last, void* dest) {
    ext_004FFD90(first, last, dest);
    const int32_t diff = static_cast<int32_t>(
        reinterpret_cast<const char*>(last) - reinterpret_cast<const char*>(first));
    const int32_t count = diff / 36;  // 0x24-byte records; truncates toward zero like the original sign fixup
    return static_cast<char*>(dest) + static_cast<intptr_t>(count) * 36;
}
} // namespace lift_0050B060
} // namespace lift_005007F0

// [0x00509EB0]
namespace lift_00509EB0 {
// @name UnknownClass::copyCtor_00509EB0
// @class UnknownClass
// @summary Copy constructor setting vtable, copying std::string at +0x4 and float at +0x20
// @field UnknownClass +0x00 void* vtable
// @field UnknownClass +0x04 std::string field_0x04
// @field UnknownClass +0x20 float field_0x20


extern void* (__thiscall* mem_00924FE0)(void* self, const void* other);

void* __thiscall sub_00509EB0(void* self, const void* other) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    const uint8_t* src = static_cast<const uint8_t*>(other);

    *reinterpret_cast<uint32_t*>(dst + 0x00) = 0x0094F92C;
    mem_00924FE0(dst + 0x04, src + 0x04);
    *reinterpret_cast<uint32_t*>(dst + 0x20) = *reinterpret_cast<const uint32_t*>(src + 0x20);

    return self;
}
} // namespace lift_00509EB0

// [0x00506030] sub_00506030 (90 bytes)
namespace lift_00506030 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
// IAT slot for the MSVCP80 std::string default constructor (thiscall, this in ECX).
extern void (*mem_00924FE8)(void* self);

// @name Interpreter::Interpreter
// @class Interpreter
// @summary Constructor: runs the base-class initializer, sets the Interpreter vtable, default-constructs the std::string at +0x04 and zeroes the five dwords at +0x24..+0x34; returns this.
// @field Interpreter +0x00 uint32_t vtable
// @field Interpreter +0x04 std::string field_0x04
// @field Interpreter +0x24 uint32_t field_0x24
// @field Interpreter +0x28 uint32_t field_0x28
// @field Interpreter +0x2c uint32_t field_0x2c
// @field Interpreter +0x30 uint32_t field_0x30
// @field Interpreter +0x34 uint32_t field_0x34
void* fn_00506030(void* self) {
    ext_00661980(self);
    lift_field<uint32_t>(self, 0x00) = 0x0094F564u;
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x04);
    lift_field<uint32_t>(self, 0x24) = 0;
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
    lift_field<uint32_t>(self, 0x30) = 0;
    lift_field<uint32_t>(self, 0x34) = 0;
    return self;
}
} // namespace lift_00506030

// [0x0050FAA0]
namespace lift_0050FAA0 {
// @name pushHeapByDoubleKey
// @summary Sift-up heap insertion of a pointer into an array of pointers, ordered by the double at object +0x20 (std::__push_heap style, max-heap by "less").
// @field Unknown +0x20 double field_0x20


namespace {

// Reads the double key stored at object +0x20.
inline double readKey(const void* obj) {
    double key;
    std::memcpy(&key, static_cast<const std::uint8_t*>(obj) + 0x20, sizeof key);
    return key;
}

}  // namespace

// first:  array of object pointers
// hole:   index to insert at (sift starts here)
// top:    lowest index the sift may reach
// value:  object pointer being inserted
void sub_0050FAA0(void** first, std::int32_t hole, std::int32_t top, void* value) {
    const double valueKey = readKey(value);
    std::int32_t parent = (hole - 1) / 2;

    while (hole > top && readKey(first[parent]) < valueKey) {
        first[hole] = first[parent];
        hole = parent;
        parent = (hole - 1) / 2;
    }
    first[hole] = value;
}
} // namespace lift_0050FAA0

// [0x005013F0] sub_005013F0 (89 bytes)
namespace lift_005013F0 {
// @name sub_005013F0
// @summary Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).
namespace lift_0057E9E0 {
// @name Unknown::eraseStringVectorRange
// @class Unknown
// @summary Erases [first, last) from a 0x14-byte-record vector by shifting [last, end) over first, destroying the trailing elements, and returning the updated iterator.
// @field Unknown +0x08 void* end

void ext_0049ECB0(void* first, void* last);
void* ext_005007F0(const void* first, const void* last, void* out);
extern void (*mem_00925134)();

struct VectorIterator {
    void* container;
    void* ptr;
};

VectorIterator* __thiscall fn_005013F0(void* self, VectorIterator* out_iter, void* first_container, void* first_ptr, void* last_container, void* last_ptr) {
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }
    if (first_ptr != last_ptr) {
        void* end_ptr = *(void**)((char*)self + 0x08);
        void* new_end = ext_005007F0(last_ptr, end_ptr, first_ptr);
        ext_0049ECB0(new_end, end_ptr);
        *(void**)((char*)self + 0x08) = new_end;
    }
    out_iter->container = first_container;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_0057E9E0
} // namespace lift_005013F0

// [0x005015E0] sub_005015E0 (59 bytes)
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_005013F0(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_005015E0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_005013F0(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0

// [0x00506CD0] sub_00506CD0 (59 bytes)
namespace lift_00506CD0 {
// @name sub_00506CD0
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_005067A0(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_00506CD0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_005067A0(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_00506CD0

// [0x0050C610] sub_0050C610 (59 bytes)
namespace lift_0050C610 {
// @name sub_0050C610
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_0050BFF0(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_0050C610(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_0050BFF0(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_0050C610

// [0x00503BC0]
namespace lift_00503BC0 {
// MSVCR80!_invalid_parameter_noinfo IAT slot
extern void* mem_00925134;
// MSVCR80!memmove_s IAT slot
extern void* mem_009251EC;

typedef void (__cdecl* InvalidParameterNoInfoFn)(void);
typedef int (__cdecl* MemmoveSFn)(void* dst, size_t dstSize, const void* src, size_t count);

// @name moveRangeToEnd
// @summary Validates a range pair, shifts the tail [a5, self->end) down to a3 when the range is non-empty, updates self->end, and writes (a2, a3) to the out-pair.
// @field field_0x08 uint32 end
// @class field_0x08 is the only accessed offset; class name unknown.
__attribute__((used)) void __thiscall fn_00503BC0(void* self, uint32_t* out, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    uint32_t ebp = a2;
    if (ebp == 0 || ebp != a4) {
        reinterpret_cast<InvalidParameterNoInfoFn>(mem_00925134)();
    }

    uint32_t esi = a3;
    uint32_t edx = a5;
    if (esi != edx) {
        auto words = static_cast<uint32_t*>(self);
        int32_t count = static_cast<int32_t>(words[2] - edx) >> 3;
        uint32_t bytes = static_cast<uint32_t>(count) * 8u;
        uint32_t newEnd = esi + bytes;
        if (count > 0) {
            reinterpret_cast<MemmoveSFn>(mem_009251EC)(
                reinterpret_cast<void*>(static_cast<uintptr_t>(esi)),
                static_cast<size_t>(bytes),
                reinterpret_cast<const void*>(static_cast<uintptr_t>(edx)),
                static_cast<size_t>(bytes));
        }
        words[2] = newEnd;
    }

    out[0] = ebp;
    out[1] = esi;
}
} // namespace lift_00503BC0

// [0x00500340] sub_00500340 (92 bytes)
namespace lift_00500340 {
// Comparator import (MSVCP80 string-style less-than); data slot holds the function pointer.
extern bool (*mem_00924EF4)(const void* lhs, const void* rhs);

// @name lowerBoundByVirtualKey
// @summary Binary lower_bound over an array of object pointers; each element's virtual slot 9 yields a key compared against value via mem_00924EF4.
void** fn_00500340(void** first, void** last, const void* value) {
    using KeyFn = const void* (*)(void* self, const void* value);

    void** begin = first;
    std::ptrdiff_t count = last - first;

    while (count > 0) {
        std::ptrdiff_t half = count / 2;
        void** mid = begin + half;
        void* elem = *mid;

        void* const* vtable = *reinterpret_cast<void* const* const*>(elem);
        KeyFn key = reinterpret_cast<KeyFn>(vtable[9]);
        const void* keyValue = key(elem, value);

        if (mem_00924EF4(value, keyValue)) {
            begin = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }

    return begin;
}
} // namespace lift_00500340

// [0x00505290]
namespace lift_00505290 {
// @name ConstructFromRecordWithString_00505290
// @class UnknownRecord
// @summary Initializes a record's vtable, copies two dwords and copy-constructs a std::string from the source record.
// @field UnknownRecord +0x00 uint32_t vtable
// @field UnknownRecord +0x04 uint32_t field_0x04
// @field UnknownRecord +0x08 uint32_t field_0x08
// @field UnknownRecord +0x0C std::string field_0x0C
void* fn_00505290(void* self, const void* src) {
    lift_field<uint32_t>(self, 0x00) = 0x0094F484u;
    lift_field<uint32_t>(self, 0x04) = lift_field<const uint32_t>(src, 0x04);
    lift_field<uint32_t>(self, 0x08) = lift_field<const uint32_t>(src, 0x08);
    const auto* srcStr = reinterpret_cast<const std::string*>(
        reinterpret_cast<const uint8_t*>(src) + 0x0C);
    new (reinterpret_cast<uint8_t*>(self) + 0x0C) std::string(*srcStr);
    return self;
}
} // namespace lift_00505290

// [0x00505A10] sub_00505A10 (30 bytes)
namespace lift_00505A10 {
// @name sub_00505A10
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00505850();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00505A10(DWORD* dst, DWORD value) {
    DWORD obj = ext_00505850();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00505A10

// [0x0050A120] sub_0050A120 (30 bytes)
namespace lift_0050A120 {
// @name sub_0050A120
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00509540();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0050A120(DWORD* dst, DWORD value) {
    DWORD obj = ext_00509540();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0050A120

// [0x0050FA40]
namespace lift_0050FA40 {
// @name heapPushSiftUp
// @summary Sifts an element up a min-heap array by comparing its double key at offset +0x20.
// @field Item +0x20 double key
void __cdecl sub_0050FA40(const uint8_t** arr, int32_t hole, int32_t top, const uint8_t* val) {
    int32_t parent = (hole - 1) / 2;
    if (top < hole) {
        double val_key = *reinterpret_cast<const double*>(val + 0x20);
        do {
            const uint8_t* parent_item = arr[parent];
            double parent_key = *reinterpret_cast<const double*>(parent_item + 0x20);
            if (!(val_key < parent_key)) {
                break;
            }
            arr[hole] = parent_item;
            hole = parent;
            parent = (hole - 1) / 2;
        } while (top < hole);
    }
    arr[hole] = val;
}
} // namespace lift_0050FA40

// [0x00505850] sub_00505850 (87 bytes)
namespace lift_00505850 {
// @name sub_00505850
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBB80;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBB7C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00505850() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891C2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBB80 & 1u) == 0) {
        mem_00AEBB80 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBB7C, frame[0]);
        mem_00AEBB7C = 0x94F2D4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBB7C;
}
} // namespace lift_004CAE30
} // namespace lift_00505850

// [0x00509360] sub_00509360 (87 bytes)
namespace lift_00509360 {
// @name sub_00509360
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC58;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC54;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00509360() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891EEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC58 & 1u) == 0) {
        mem_00AEBC58 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC54, frame[0]);
        mem_00AEBC54 = 0x94F994u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC54;
}
} // namespace lift_004CAE30
} // namespace lift_00509360

// [0x005093C0] sub_005093C0 (87 bytes)
namespace lift_005093C0 {
// @name sub_005093C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC60;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC5C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005093C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891F0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC60 & 1u) == 0) {
        mem_00AEBC60 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC5C, frame[0]);
        mem_00AEBC5C = 0x94FA6Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC5C;
}
} // namespace lift_004CAE30
} // namespace lift_005093C0

// [0x00509420] sub_00509420 (87 bytes)
namespace lift_00509420 {
// @name sub_00509420
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC68;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC64;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00509420() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891F2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC68 & 1u) == 0) {
        mem_00AEBC68 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC64, frame[0]);
        mem_00AEBC64 = 0x94FB44u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC64;
}
} // namespace lift_004CAE30
} // namespace lift_00509420

// [0x00509480] sub_00509480 (87 bytes)
namespace lift_00509480 {
// @name sub_00509480
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC70;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC6C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00509480() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891F4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC70 & 1u) == 0) {
        mem_00AEBC70 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC6C, frame[0]);
        mem_00AEBC6C = 0x94FC1Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC6C;
}
} // namespace lift_004CAE30
} // namespace lift_00509480

// [0x005094E0] sub_005094E0 (87 bytes)
namespace lift_005094E0 {
// @name sub_005094E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC78;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC74;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005094E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891F6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC78 & 1u) == 0) {
        mem_00AEBC78 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC74, frame[0]);
        mem_00AEBC74 = 0x94FCF4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC74;
}
} // namespace lift_004CAE30
} // namespace lift_005094E0

// [0x00509540] sub_00509540 (87 bytes)
namespace lift_00509540 {
// @name sub_00509540
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC80;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC7C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00509540() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891F8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC80 & 1u) == 0) {
        mem_00AEBC80 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC7C, frame[0]);
        mem_00AEBC7C = 0x94FDCCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC7C;
}
} // namespace lift_004CAE30
} // namespace lift_00509540

// [0x005095A0] sub_005095A0 (87 bytes)
namespace lift_005095A0 {
// @name sub_005095A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBC88;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBC84;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005095A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x891FAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBC88 & 1u) == 0) {
        mem_00AEBC88 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBC84, frame[0]);
        mem_00AEBC84 = 0x94FEA4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBC84;
}
} // namespace lift_004CAE30
} // namespace lift_005095A0

// [0x0050E7B0] sub_0050E7B0 (87 bytes)
namespace lift_0050E7B0 {
// @name sub_0050E7B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBD30;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBD2C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0050E7B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8922AEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBD30 & 1u) == 0) {
        mem_00AEBD30 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBD2C, frame[0]);
        mem_00AEBD2C = 0x95047Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBD2C;
}
} // namespace lift_004CAE30
} // namespace lift_0050E7B0

// [0x0050E810] sub_0050E810 (87 bytes)
namespace lift_0050E810 {
// @name sub_0050E810
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBD38;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBD34;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0050E810() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8922CEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBD38 & 1u) == 0) {
        mem_00AEBD38 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBD34, frame[0]);
        mem_00AEBD34 = 0x950554u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBD34;
}
} // namespace lift_004CAE30
} // namespace lift_0050E810

// [0x0050E870] sub_0050E870 (87 bytes)
namespace lift_0050E870 {
// @name sub_0050E870
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBD40;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBD3C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0050E870() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8922EEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBD40 & 1u) == 0) {
        mem_00AEBD40 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBD3C, frame[0]);
        mem_00AEBD3C = 0x95062Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBD3C;
}
} // namespace lift_004CAE30
} // namespace lift_0050E870

// [0x0050E8D0] sub_0050E8D0 (87 bytes)
namespace lift_0050E8D0 {
// @name sub_0050E8D0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBD48;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBD44;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0050E8D0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89230Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBD48 & 1u) == 0) {
        mem_00AEBD48 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBD44, frame[0]);
        mem_00AEBD44 = 0x950704u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBD44;
}
} // namespace lift_004CAE30
} // namespace lift_0050E8D0

// [0x0050E930] sub_0050E930 (87 bytes)
namespace lift_0050E930 {
// @name sub_0050E930
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEBD50;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AEBD4C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0050E930() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89232Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEBD50 & 1u) == 0) {
        mem_00AEBD50 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AEBD4C, frame[0]);
        mem_00AEBD4C = 0x9507DCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AEBD4C;
}
} // namespace lift_004CAE30
} // namespace lift_0050E930

// [0x0050A720]
namespace lift_0050A720 {
// @name CopyBackwardElements24Wrapper
// @summary Copies 0x24-byte elements backward from [first, last) to d_last and returns the new destination start.


extern void* ext_00509C50(void* first, void* last, void* d_last);

void* fn_0050A720(void* first, void* last, void* d_last) {
    ext_00509C50(first, last, d_last);
    int32_t byte_diff = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first));
    int32_t count = byte_diff / 0x24;
    return reinterpret_cast<void*>(
        reinterpret_cast<uintptr_t>(d_last) - static_cast<uintptr_t>(count * 0x24));
}
} // namespace lift_0050A720

// [0x00504AA0]
namespace lift_00504AA0 {
// @name allocateElements40
// @summary Allocates count elements of size 40 bytes, throwing std::bad_alloc on integer overflow.


extern void* fn_006A5C62(uint32_t size);

extern void* fn_00504AA0(uint32_t count) {
    if (count > 0) {
        if (0xFFFFFFFFu / count < 0x28u) {
            throw std::bad_alloc();
        }
    } else {
        count = 0;
    }
    return fn_006A5C62(count * 0x28u);
}
} // namespace lift_00504AA0

// [0x0050BE20] sub_0050BE20 (90 bytes)
namespace lift_0050BE20 {
// Known callee 0x00536230: deleteRangeChecked (Deletes each non-null element of a 4-byte-slot range [first, last), validating the owner and its bound at every step.)
// Called with four stack words in the order the original pushes them: (self, begin, self, end).
extern void ext_00536230(void* self, uint32_t arg1, uint32_t first, uint32_t arg3, uint32_t bound);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* self, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// Invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern void mem_00925134();

// @name Vector_eraseTailChecked
// @class Vector
// @summary Validates the vector's begin/end/bound pointers, deletes the owned elements through ext_00536230, then erases the tail range via ext_00596660.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_0050BE20(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t selfValue = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // First pass: check the begin/end ordering, then delete the range.
    uint32_t bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    uint32_t first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    ext_00536230(self, selfValue, first, selfValue, bound);

    // Second pass: re-validate, then erase the tail and capture the returned iterator.
    bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    uint32_t outIter[2] = {0, 0};
    ext_00596660(self, outIter, selfValue, first, selfValue, bound);
}
} // namespace lift_0050BE20

// [0x00509F10] sub_00509F10 (33 bytes)
namespace lift_00509F10 {
// @name sub_00509F10
// @summary Auto-lifted identical-shape clone of 0x004B4AA0 (CopyInitOnceGlobalString_004B4AA0).
namespace lift_004B4AA0 {
// Known callee 0x004B4A40: InitOnceGlobalString_004B4A40 (One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.)
extern void* ext_00508CD0();
// Import slot for the MSVCP80 std::basic_string<char> copy constructor (__thiscall, one stack arg).
extern int mem_00924FE0;

// @name CopyInitOnceGlobalString_004B4AA0
// @summary Copy-constructs the caller's std::string from the lazily initialized global string and returns the destination.
void* fn_00509F10(void* dst) {
    // Original code also zeroes a scratch stack slot before the call; it is unobservable and omitted.
    using CopyCtor = void(__thiscall*)(void* self, const void* other);
    const void* src = ext_00508CD0();
    // Indirect call through the import slot at mem_00924FE0 (thiscall: callee cleans the stack arg).
    (*reinterpret_cast<CopyCtor*>(&mem_00924FE0))(dst, src);
    return dst;
}
} // namespace lift_004B4AA0
} // namespace lift_00509F10

// [0x00509F40] sub_00509F40 (33 bytes)
namespace lift_00509F40 {
// @name sub_00509F40
// @summary Auto-lifted identical-shape clone of 0x004B4AA0 (CopyInitOnceGlobalString_004B4AA0).
namespace lift_004B4AA0 {
// Known callee 0x004B4A40: InitOnceGlobalString_004B4A40 (One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.)
extern void* ext_00508DD0();
// Import slot for the MSVCP80 std::basic_string<char> copy constructor (__thiscall, one stack arg).
extern int mem_00924FE0;

// @name CopyInitOnceGlobalString_004B4AA0
// @summary Copy-constructs the caller's std::string from the lazily initialized global string and returns the destination.
void* fn_00509F40(void* dst) {
    // Original code also zeroes a scratch stack slot before the call; it is unobservable and omitted.
    using CopyCtor = void(__thiscall*)(void* self, const void* other);
    const void* src = ext_00508DD0();
    // Indirect call through the import slot at mem_00924FE0 (thiscall: callee cleans the stack arg).
    (*reinterpret_cast<CopyCtor*>(&mem_00924FE0))(dst, src);
    return dst;
}
} // namespace lift_004B4AA0
} // namespace lift_00509F40

// [0x00503A70] sub_00503A70 (95 bytes)
namespace lift_00503A70 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern void ext_006A6C87(uintptr_t arg);
extern int mem_00AEBB18;
extern int mem_00AEBAFC;

// @name InitOnceGlobalString_00503A70
// @summary One-time initializer for the global string at mem_00AEBAFC; returns its address.
void* fn_00503A70() {
    // Bit 0 of mem_00AEBB18 is the "initialized" guard.
    if ((mem_00AEBB18 & 1) == 0) {
        mem_00AEBB18 |= 1;
        ext_0066AD10(&mem_00AEBAFC, 0x00A4089C);
        ext_006A6C87(0x00919CE0);
    }
    return &mem_00AEBAFC;
}
} // namespace lift_00503A70
