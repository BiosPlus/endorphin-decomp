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
