// Lifted C++ translation unit: lifted/leaf/decompiled_470000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>

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

// [0x00472780] sub_00472780 (70 bytes)
namespace lift_00472780 {
// Import slot holding the string less-than comparator (cdecl, two const-ref args).
extern bool (__cdecl* mem_00924EF4)(const void* lhs, const void* rhs);

// @name TreeMap::lowerBound
// @class TreeMap
// @summary Walks the red-black tree and returns the first node whose key is not less than the probe key, or the header node if none.
// @field TreeMap +0x04 void* head
// @field TreeMapNode +0x00 void* left
// @field TreeMapNode +0x04 void* parent
// @field TreeMapNode +0x08 void* right
// @field TreeMapNode +0x0C uint8_t field_0x0C
// @field TreeMapNode +0x45 uint8_t isNil
void* fn_00472780(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x04);
    void* result = head;
    void* cur = lift_field<void*>(head, 0x04);  // root
    while (lift_field<uint8_t>(cur, 0x45) == 0) {
        const void* nodeKey = reinterpret_cast<const uint8_t*>(cur) + 0x0C;
        if (mem_00924EF4(nodeKey, key)) {
            cur = lift_field<void*>(cur, 0x08);  // node key < probe: go right
        } else {
            result = cur;                        // candidate; go left
            cur = lift_field<void*>(cur, 0x00);
        }
    }
    return result;
}
} // namespace lift_00472780

// [0x00472730] sub_00472730 (70 bytes)
namespace lift_00472730 {
// Imported string less-than comparator (function address stored in .rdata).
extern uint32_t mem_00924EF4;

using KeyLess = bool (__cdecl*)(const void* a, const void* b);

// @name Tree::lowerBound
// @class Tree
// @summary MSVC-style std::_Tree lower_bound: walks from the root to the first node whose key is not less than the argument; returns the head (end) sentinel if none.
// @field Tree +0x04 void* head
// @field TreeNode +0x00 void* left
// @field TreeNode +0x04 void* parent_or_root
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C std::string key
// @field TreeNode +0x39 uint8_t is_nil
void* __thiscall fn_00472730(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x4);
    void* node = lift_field<void*>(head, 0x4);  // root
    void* result = head;                         // end() if nothing qualifies

    if (lift_field<uint8_t>(node, 0x39) != 0) {
        return head;
    }

    KeyLess less = reinterpret_cast<KeyLess>(static_cast<uintptr_t>(mem_00924EF4));
    while (lift_field<uint8_t>(node, 0x39) == 0) {
        if (less(static_cast<char*>(node) + 0xC, key)) {
            // node.key < key: answer lies in the right subtree.
            node = lift_field<void*>(node, 0x8);
        } else {
            // node.key >= key: candidate; keep searching left.
            result = node;
            node = lift_field<void*>(node, 0x0);
        }
    }
    return result;
}
} // namespace lift_00472730

// [0x004774B0] sub_004774B0 (73 bytes)
namespace lift_004774B0 {
extern uint32_t mem_00924EF4;

using StringEqFn = bool(__cdecl*)(const void* lhs, const void* rhs);

// @name Unknown::FindNodeByKey_004774B0
// @class Unknown
// @summary Walks a binary search tree rooted at header->parent comparing each node key with the given string; returns the header when empty or the last node reached by a left turn, and the header if no left turn occurred.
// @field Unknown +0x04 void* header
// @field TreeNode +0x00 void* left
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C std::string key
// @field TreeNode +0xC1 uint8_t is_nil
void* fn_004774B0(void* self, const void* key) {
    void* header = lift_field<void*>(self, 0x4);
    void* node = lift_field<void*>(header, 0x4);

    if (lift_field<uint8_t>(node, 0xC1) != 0) {
        return header;
    }

    auto stringEq = reinterpret_cast<StringEqFn>(
        static_cast<uintptr_t>(mem_00924EF4));

    void* result = header;
    while (lift_field<uint8_t>(node, 0xC1) == 0) {
        const void* nodeKey = static_cast<const void*>(static_cast<uint8_t*>(node) + 0xC);
        if (stringEq(nodeKey, key)) {
            node = lift_field<void*>(node, 0x8);
        } else {
            result = node;
            node = lift_field<void*>(node, 0x0);
        }
    }
    return result;
}
} // namespace lift_004774B0

// [0x00478C60] sub_00478C60 (74 bytes)
namespace lift_00478C60 {
// @name sub_00478C60
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_00477190(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_00478C60(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00477190(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_00478C60

// [0x004788A0] sub_004788A0 (43 bytes)
namespace lift_004788A0 {
// @name sub_004788A0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_004772E0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_004788A0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_004772E0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_004788A0

// [0x0047FFA0] sub_0047FFA0 (76 bytes)
namespace lift_0047FFA0 {
// @name Vector4Subtract_0047FFA0
// @summary Component-wise float subtraction of two 4-float vectors: out[i] = a[i] - b[i] for i in 0..3.
// Not a member: `a` arrives in ECX (thiscall-style) but the class is unknown, so no @class or @field lines.
void fn_0047FFA0(const float* a, float* out, const float* b) {
    // Read each pair before writing, so out may alias a or b.
    for (int i = 0; i < 4; ++i) {
        const float av = a[i];
        const float bv = b[i];
        out[i] = av - bv;
    }
}
} // namespace lift_0047FFA0

// [0x004757F0] sub_004757F0 (77 bytes)
namespace lift_004757F0 {
// Known callee 0x00672D10: sub_00672D10 (Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).)
extern void ext_00672D10(void* self);
// Imported MSVC CRT slot for std::basic_string<char>::~basic_string (used via explicit dtor call below).
extern int mem_00924FF4;

// @name Unknown::Dtor_004757F0
// @class Unknown
// @summary Destructor body: releases the StringArray at +0x1C, then destroys the std::string at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C StringArray field_0x1C
void fn_004757F0(void* self) {
    // ecx+0x1c is passed as `this` to the StringArray release routine.
    ext_00672D10(static_cast<unsigned char*>(self) + 0x1C);
    // The original calls the MSVC CRT string dtor through mem_00924FF4 on `this`.
    using StdString = std::string;
    reinterpret_cast<StdString*>(self)->~StdString();
}
} // namespace lift_004757F0

// [0x00478CB0] sub_00478CB0 (78 bytes)
namespace lift_00478CB0 {
// Known callee 0x00477210: ext_00477210 (heap sift-down helper; called as (first, hole=0, len, value)).
extern void ext_00477210(float* first, int32_t hole, int32_t len, float value);

// @name SortFloatHeap_00478CB0
// @summary Heapsort tail loop over a float range [first, last): repeatedly swaps the front element to the end and re-sifts the shrinking heap via ext_00477210.
void fn_00478CB0(float* first, float* last) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        float value = first[n - 1];
        first[n - 1] = first[0];
        ext_00477210(first, 0, static_cast<int32_t>(n - 1), value);
        --n;
    }
}
} // namespace lift_00478CB0

// [0x004772E0] sub_004772E0 (83 bytes)
namespace lift_004772E0 {
// @name MoveBackward12
// @summary Moves the 12-byte elements in [first, last) backward so the range ends at dst_last; returns the new range start.

// Copies the 12-byte elements in [first, last) backward (last element first)
// so that the moved block ends at dst_last. Overlapping ranges are handled
// per element with memmove. Returns dst_last - 12 * count, where
// count = (last - first) / 12 (signed division, as in the original).
std::uint8_t* fn_004772E0(std::uint8_t* first, std::uint8_t* last, std::uint8_t* dst_last) {
    const std::ptrdiff_t count = (last - first) / 12;
    std::uint8_t* const result = dst_last - 12 * count;

    if (first != last) {
        const std::ptrdiff_t offset = dst_last - last;
        std::uint8_t* cur = last;
        do {
            cur -= 12;
            std::memmove(cur + offset, cur, 12);
        } while (cur != first);
    }

    return result;
}
} // namespace lift_004772E0
