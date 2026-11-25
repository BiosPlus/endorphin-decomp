// Lifted C++ translation unit: lifted/leaf/decompiled_470000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0047A010] sub_0047A010 (41 bytes)
namespace lift_0047A010 {
// @name sub_0047A010
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00477340(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0047A010(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00477340(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0047A010

// [0x00479A90]
namespace lift_00479A90 {
// @name fill_n_float
// @summary Fills count floats starting at dst with *value and returns dst + count.


float* __stdcall sub_00479A90(float* dst, uint32_t count, const float* value) {
    if (count > 0) {
        float v = *value;
        for (uint32_t i = 0; i < count; ++i) {
            dst[i] = v;
        }
    }
    return dst + count;
}
} // namespace lift_00479A90

// [0x00476630] sub_00476630 (47 bytes)
namespace lift_00476630 {
// @name makeStdStringFromCStr
// @summary Constructs a std::string in caller-provided storage from a C string; if the pointer is null, constructs an empty string. Returns the storage pointer.
void* fn_00476630(std::string* out, const char* s)
{
    if (s != nullptr) {
        ::new (static_cast<void*>(out)) std::string(s);
    } else {
        ::new (static_cast<void*>(out)) std::string();
    }
    return out;
}
} // namespace lift_00476630

// [0x00477E60] sub_00477E60 (49 bytes)
namespace lift_00477E60 {
// @name FillTriplesFromSource
// @summary Writes the 12-byte triple at src into each of `count` consecutive 12-byte slots starting at dst (skipping writes when dst is null).
// @field none (free function, no class members accessed)
void fn_00477E60(DWORD* dst, DWORD count, const DWORD* src) {
    if (count == 0) {
        return;
    }
    do {
        if (dst != nullptr) {
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
        }
        dst += 3;
        --count;
    } while (count != 0);
}
} // namespace lift_00477E60

// [0x00478C20]
namespace lift_00478C20 {
// @name FillTriplesAndAdvance
// @summary Fills `count` consecutive 12-byte slots at dst with the triple at src, then returns the pointer one past the last slot.
extern void ext_00477E60(DWORD* dst, DWORD count, const DWORD* src);

__stdcall DWORD* fn_00478C20(DWORD* dst, DWORD count, const DWORD* src) {
    ext_00477E60(dst, count, src);
    return dst + 3 * count;
}
} // namespace lift_00478C20

// [0x00477D90] sub_00477D90 (59 bytes)
namespace lift_00477D90 {
extern void ext_00477280(uint32_t* begin, int32_t index, int32_t count, uint32_t value);

// @name make_heap_dword
// @summary Builds a heap in place over a 32-bit element range by sifting down each parent from n/2-1 to 0.
void fn_00477D90(uint32_t* first, uint32_t* last) {
    const int32_t count = static_cast<int32_t>(last - first);
    int32_t index = count / 2;
    while (index > 0) {
        --index;
        const uint32_t value = first[index];
        ext_00477280(first, index, count, value);
    }
}
} // namespace lift_00477D90

// [0x00477B70] sub_00477B70 (62 bytes)
namespace lift_00477B70 {
// Known callee 0x00477210: sub_00477210 (102 bytes), called as (arr, index, count, value).
extern void ext_00477210(float* arr, int32_t index, int32_t count, float value);

// @name HeapBuildFloats
// @summary Builds a heap over a float array in [first, last) by sifting down each parent node from n/2 to 1 via ext_00477210.
void fn_00477B70(float* first, float* last) {
    int32_t diffBytes = (int32_t)((char*)last - (char*)first);
    int32_t count = diffBytes >> 2;
    int32_t half = count / 2;

    while (half > 0) {
        float value = first[half - 1];
        half--;
        ext_00477210(first, half, count, value);
    }
}
} // namespace lift_00477B70

// [0x004788D0]
namespace lift_004788D0 {
// @name CopyBackwardElements8
// @summary Copies an array of 8-byte elements [begin, end) so it ends at dstEnd, copying back-to-front; returns the new begin.

// Memory base for the 32-bit guest address space.
extern uint8_t* mem_;

static inline uint32_t ReadU32(uint32_t addr) {
    return lift_field<uint32_t>(mem_, static_cast<ptrdiff_t>(addr));
}

static inline void WriteU32(uint32_t addr, uint32_t value) {
    lift_field<uint32_t>(mem_, static_cast<ptrdiff_t>(addr)) = value;
}

uint32_t CopyBackwardElements8(uint32_t begin, uint32_t end, uint32_t dstEnd) {
    // (end - begin) >> 3 << 3, using arithmetic shift as in the original.
    const int32_t diff = static_cast<int32_t>(end - begin);
    const uint32_t size = static_cast<uint32_t>((diff >> 3) * 8);
    const uint32_t result = dstEnd - size;

    if (begin == end) {
        return result;
    }

    const uint32_t delta = dstEnd - end;
    uint32_t src = end;
    do {
        src -= 8;
        const uint32_t lo = ReadU32(src);
        const uint32_t hi = ReadU32(src + 4);
        WriteU32(delta + src, lo);
        WriteU32(delta + src + 4, hi);
    } while (src != begin);

    return result;
}
} // namespace lift_004788D0

// [0x00476660] sub_00476660 (62 bytes)
namespace lift_00476660 {
// @name FormatIndexedString
// @summary Formats an int with a fixed .rdata format into a 50-byte buffer and constructs a std::string in the caller-provided slot.
std::string* fn_00476660(std::string* out, int value) {
    char buf[50];
    std::snprintf(buf, sizeof(buf), "%d", value);
    new (out) std::string(buf);
    return out;
}
} // namespace lift_00476660

// [0x00478D00] sub_00478D00 (67 bytes)
namespace lift_00478D00 {
extern void ext_00477280(uint32_t* first, ptrdiff_t hole, ptrdiff_t len, uint32_t value);

// @name SortHeapRange
// @summary Heap-sort tail loop over a uint32 range: repeatedly moves the max to the end and re-sifts the shrinking heap via ext_00477280.
void fn_00478D00(uint32_t* first, uint32_t* last) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00477280(first, 0, n - 1, value);
        n = last - first;
    }
}
} // namespace lift_00478D00
