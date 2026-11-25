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
