// Lifted C++ translation unit: lifted/leaf/decompiled_470000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstddef>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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
#include <cstring>
#include <stdexcept>

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

// [0x004722F0] sub_004722F0 (95 bytes)
namespace lift_004722F0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, const void* arg);
// Known callee 0x006A6C87: sub_006A6C87 (18B)
extern void ext_006A6C87(const void* arg);
extern uint8_t mem_00AD9030;
extern uint8_t mem_00AD9014;
extern uint8_t mem_00A32430;
extern uint8_t mem_00916DE0;

// @name Unknown::GetOnceInitializedString_004722F0
// @summary One-time guarded initializer for the string buffer at mem_00AD9014; returns its address.
namespace lift_004722F0 {
void* fn_004722F0() {
    if ((mem_00AD9030 & 1u) == 0) {
        mem_00AD9030 |= 1u;
        ext_0066AD10(&mem_00AD9014, &mem_00A32430);
        ext_006A6C87(&mem_00916DE0);
    }
    return &mem_00AD9014;
}
} // namespace lift_004722F0
} // namespace lift_004722F0

// [0x00477030] sub_00477030 (95 bytes)
namespace lift_00477030 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Known callee 0x006A6C87: sub_006A6C87 (18B), called with a single function-pointer argument (0x00916EF0).
extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern int ext_006A6C87(uintptr_t fn);
extern uint32_t mem_00AD90D8;
extern int mem_00AD90BC;

// @name InitOnceGlobalString_00477030
// @summary One-time initializer for global string at mem_00AD90BC; returns its address.
void* fn_00477030() {
    if ((mem_00AD90D8 & 1u) == 0) {
        mem_00AD90D8 |= 1u;
        ext_0066AD10(&mem_00AD90BC, static_cast<uintptr_t>(0x00A2F0CCu));
        ext_006A6C87(static_cast<uintptr_t>(0x00916EF0u));
    }
    return &mem_00AD90BC;
}
} // namespace lift_00477030

// [0x00476CA0]
namespace lift_00476CA0 {
// @name pushHeap
// @summary Sifts an element up in a binary heap using a predicate functor.

extern bool __thiscall ext_00476860(void* self, uint32_t a, uint32_t b);

extern void __cdecl sub_00476CA0(uint32_t* arr, int32_t holeIndex, int32_t topIndex, uint32_t val, uint32_t pred) {
    int32_t parent = (holeIndex - 1) / 2;
    if (topIndex < holeIndex) {
        do {
            if (!ext_00476860(&pred, arr[parent], val)) {
                break;
            }
            arr[holeIndex] = arr[parent];
            holeIndex = parent;
            parent = (parent - 1) / 2;
        } while (topIndex < holeIndex);
    }
    arr[holeIndex] = val;
}
} // namespace lift_00476CA0

// [0x00476DF0] sub_00476DF0 (102 bytes)
namespace lift_00476DF0 {
// Callee sub_006A6D5C takes four 32-bit arguments and cleans its own stack
// (the caller does not adjust esp after either call).
extern void __stdcall ext_006A6D5C(void* obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t mem_00924FF4;

// @name initStringSubobjects
// @class <unknown>
// @summary Initializes two embedded sub-objects (at +0x90 and +0x18) via sub_006A6D5C, using a literal at 0x00504A70 and the dtor pointer stored at mem_00924FF4.
// @field <unknown> +0x18 uint8_t field_0x18
// @field <unknown> +0x90 uint8_t field_0x90
void fn_00476DF0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    ext_006A6D5C(base + 0x90, 0x54u, 7u, 0x00504A70u);

    const uint32_t dtor = mem_00924FF4;
    ext_006A6D5C(base + 0x18, 0x1Cu, 4u, dtor);
}
} // namespace lift_00476DF0

// [0x00477120]
namespace lift_00477120 {
// @name sortThreeByComparator
// @summary Sorts three 32-bit values in-place using a comparator functor passed by value.

extern uint8_t __thiscall ext_00476860(void* self, uint32_t lhs, uint32_t rhs);

void __cdecl sub_00477120(uint32_t* a, uint32_t* b, uint32_t* c, uint32_t cmp) {
    if (ext_00476860(&cmp, *b, *a)) {
        uint32_t tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if (ext_00476860(&cmp, *c, *b)) {
        uint32_t tmp = *b;
        *b = *c;
        *c = tmp;
    }
    if (ext_00476860(&cmp, *b, *a)) {
        uint32_t tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
} // namespace lift_00477120

// [0x00477EC0]
namespace lift_00477EC0 {
extern uint32_t mem_00925134;

// @name sub_00477EC0
// @summary Iterates over a pointer vector at this+0x30 and invokes vtable+0xEC on each element with arg0
// @field Unknown +0x34 uint32_t* begin_0x34
// @field Unknown +0x38 uint32_t* end_0x38
void __thiscall sub_00477EC0(void* self, uint32_t arg0) {
    auto* base = static_cast<uint8_t*>(self);
    uint8_t* vec = base + 0x30;

    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    uint32_t* edi = *reinterpret_cast<uint32_t**>(vec + 0x04);
    if (edi > *reinterpret_cast<uint32_t**>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t* ebx = *reinterpret_cast<uint32_t**>(vec + 0x08);
    if (*reinterpret_cast<uint32_t**>(vec + 0x04) > ebx) {
        invalid_param();
    }

    while (edi != ebx) {
        if (edi >= *reinterpret_cast<uint32_t**>(vec + 0x08)) {
            invalid_param();
        }

        uint32_t* obj = reinterpret_cast<uint32_t*>(*edi);
        uint32_t* vtable = reinterpret_cast<uint32_t*>(*obj);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtable[0xEC / 4]);
        fn(obj, arg0);

        if (edi >= *reinterpret_cast<uint32_t**>(vec + 0x08)) {
            invalid_param();
        }
        ++edi;
    }
}
} // namespace lift_00477EC0

// [0x00470120] sub_00470120 (108 bytes)
namespace lift_00470120 {
// @name sub_00470120
// @summary Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).
namespace lift_005E0B20 {
// MSVCR80!_invalid_parameter_noinfo, loaded through IAT slot mem_00925134.
extern void (*mem_00925134)(void);

// @name TreeIterator::increment
// @class TreeIterator
// @summary Advances a binary-tree iterator to its in-order successor (red-black tree style, nil sentinel at node+0x51).
// @field TreeIterator +0x00 void* field_0x00
// @field TreeIterator +0x04 uint8_t* node
void fn_00470120(void* self) {
    // Node layout used here: +0x00 left, +0x04 parent, +0x08 right, +0x51 isNil (byte).
    // Iterator layout: +0x00 owner (null-checked), +0x04 current node.
    auto* it = static_cast<uint8_t*>(self);

    auto load_ptr = [](const uint8_t* base, std::size_t off) -> uint8_t* {
        uint8_t* p;
        std::memcpy(&p, base + off, sizeof p);
        return p;
    };
    auto store_ptr = [](uint8_t* base, std::size_t off, uint8_t* v) {
        std::memcpy(base + off, &v, sizeof v);
    };
    auto is_nil = [](const uint8_t* n) -> bool {
        return n[0x45] != 0;
    };
    auto invalid_parameter = []() {
        if (mem_00925134) {
            mem_00925134();
        }
    };

    if (load_ptr(it, 0x00) == nullptr) {
        invalid_parameter();
    }

    uint8_t* node = load_ptr(it, 0x04);
    if (is_nil(node)) {
        invalid_parameter();
        return;
    }

    uint8_t* right = load_ptr(node, 0x08);
    if (!is_nil(right)) {
        // Successor is the leftmost node of the right subtree.
        uint8_t* leftChild = load_ptr(right, 0x00);
        if (is_nil(leftChild)) {
            store_ptr(it, 0x04, right);
            return;
        }
        uint8_t* cur = right;
        do {
            cur = leftChild;
            leftChild = load_ptr(cur, 0x00);
        } while (!is_nil(leftChild));
        store_ptr(it, 0x04, cur);
        return;
    }

    // No right subtree: climb while we are a right child; stop at a left-child link.
    uint8_t* p = load_ptr(node, 0x04);
    if (is_nil(p)) {
        store_ptr(it, 0x04, p);
        return;
    }
    for (;;) {
        uint8_t* cur = load_ptr(it, 0x04);
        if (load_ptr(p, 0x08) != cur) {
            break;
        }
        store_ptr(it, 0x04, p);
        uint8_t* grand = load_ptr(p, 0x04);
        p = grand;
        if (is_nil(grand)) {
            break;
        }
    }
    store_ptr(it, 0x04, p);
}
} // namespace lift_005E0B20
} // namespace lift_00470120

// [0x00474FF0] sub_00474FF0 (108 bytes)
namespace lift_00474FF0 {
// @name sub_00474FF0
// @summary Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).
namespace lift_005E0B20 {
// MSVCR80!_invalid_parameter_noinfo, loaded through IAT slot mem_00925134.
extern void (*mem_00925134)(void);

// @name TreeIterator::increment
// @class TreeIterator
// @summary Advances a binary-tree iterator to its in-order successor (red-black tree style, nil sentinel at node+0x51).
// @field TreeIterator +0x00 void* field_0x00
// @field TreeIterator +0x04 uint8_t* node
void fn_00474FF0(void* self) {
    // Node layout used here: +0x00 left, +0x04 parent, +0x08 right, +0x51 isNil (byte).
    // Iterator layout: +0x00 owner (null-checked), +0x04 current node.
    auto* it = static_cast<uint8_t*>(self);

    auto load_ptr = [](const uint8_t* base, std::size_t off) -> uint8_t* {
        uint8_t* p;
        std::memcpy(&p, base + off, sizeof p);
        return p;
    };
    auto store_ptr = [](uint8_t* base, std::size_t off, uint8_t* v) {
        std::memcpy(base + off, &v, sizeof v);
    };
    auto is_nil = [](const uint8_t* n) -> bool {
        return n[0x11] != 0;
    };
    auto invalid_parameter = []() {
        if (mem_00925134) {
            mem_00925134();
        }
    };

    if (load_ptr(it, 0x00) == nullptr) {
        invalid_parameter();
    }

    uint8_t* node = load_ptr(it, 0x04);
    if (is_nil(node)) {
        invalid_parameter();
        return;
    }

    uint8_t* right = load_ptr(node, 0x08);
    if (!is_nil(right)) {
        // Successor is the leftmost node of the right subtree.
        uint8_t* leftChild = load_ptr(right, 0x00);
        if (is_nil(leftChild)) {
            store_ptr(it, 0x04, right);
            return;
        }
        uint8_t* cur = right;
        do {
            cur = leftChild;
            leftChild = load_ptr(cur, 0x00);
        } while (!is_nil(leftChild));
        store_ptr(it, 0x04, cur);
        return;
    }

    // No right subtree: climb while we are a right child; stop at a left-child link.
    uint8_t* p = load_ptr(node, 0x04);
    if (is_nil(p)) {
        store_ptr(it, 0x04, p);
        return;
    }
    for (;;) {
        uint8_t* cur = load_ptr(it, 0x04);
        if (load_ptr(p, 0x08) != cur) {
            break;
        }
        store_ptr(it, 0x04, p);
        uint8_t* grand = load_ptr(p, 0x04);
        p = grand;
        if (is_nil(grand)) {
            break;
        }
    }
    store_ptr(it, 0x04, p);
}
} // namespace lift_005E0B20
} // namespace lift_00474FF0

// [0x00476530]
namespace lift_00476530 {
// @name sub_00476530
// @class UnknownClass
// @summary Constructor initializing two std::string fields by copy, two by default, and a uint8_t flag to 0
// @field UnknownClass +0x00 uint8_t[0x1C] field_0x00
// @field UnknownClass +0x1C uint8_t[0x1C] field_0x1c
// @field UnknownClass +0x38 uint8_t[0x1C] field_0x38
// @field UnknownClass +0x54 uint8_t[0x1C] field_0x54
// @field UnknownClass +0x70 uint8_t field_0x70

extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE8;

uint32_t __thiscall sub_00476530(uint32_t self, uint32_t arg0, uint32_t arg1) {
    using string_copy_ctor_t = uint32_t(__thiscall*)(uint32_t, uint32_t);
    using string_default_ctor_t = uint32_t(__thiscall*)(uint32_t);

    auto string_copy_ctor = reinterpret_cast<string_copy_ctor_t>(static_cast<uintptr_t>(mem_00924FE0));
    auto string_default_ctor = reinterpret_cast<string_default_ctor_t>(static_cast<uintptr_t>(mem_00924FE8));

    string_copy_ctor(self + 0x00, arg0);
    string_copy_ctor(self + 0x1C, arg1);
    string_default_ctor(self + 0x38);
    string_default_ctor(self + 0x54);
    *reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(self + 0x70)) = 0;

    return self;
}
} // namespace lift_00476530

// [0x00477190]
namespace lift_00477190 {
// @name adjustHeap
// @summary Sifts a hole down in a binary heap and then pushes a value up using a predicate functor.

extern bool __thiscall ext_00476860(void* pred, uint32_t lhs, uint32_t rhs);
extern void __cdecl ext_00476CA0(uint32_t* arr, int32_t holeIndex, int32_t topIndex, uint32_t val, uint32_t pred);

extern void __cdecl sub_00477190(uint32_t* arr, int32_t holeIndex, int32_t bottom, uint32_t val, uint32_t pred) {
    int32_t topIndex = holeIndex;
    int32_t secondChild = 2 * holeIndex + 2;

    while (secondChild < bottom) {
        if (ext_00476860(&pred, arr[secondChild], arr[secondChild - 1])) {
            secondChild -= 1;
        }
        arr[holeIndex] = arr[secondChild];
        holeIndex = secondChild;
        secondChild = 2 * secondChild + 2;
    }

    if (secondChild == bottom) {
        arr[holeIndex] = arr[bottom - 1];
        holeIndex = bottom - 1;
    }

    ext_00476CA0(arr, holeIndex, topIndex, val, pred);
}
} // namespace lift_00477190

// [0x004757F0] sub_004757F0 (77 bytes)
namespace lift_004757F0 {
// @name sub_004757F0
// @summary Auto-lifted identical-shape clone of 0x004AD970 (Unknown::DestroyStringAndArray).
namespace lift_004AD970 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_00672D10(void* self);
// Import slot for MSVCP80 std::basic_string<char>::~basic_string (IAT entry, bound at load time).
extern int mem_00924FF4;

// @name Unknown::DestroyStringAndArray
// @class Unknown
// @summary Releases the StringArray at +0x1c, then runs the std::string destructor on the object itself.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c StringArray field_0x1c
void fn_004757F0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the string elements held in the array at +0x1c.
    ext_00672D10(base + 0x1c);

    // Destroy the std::string at offset 0 via the imported MSVC destructor (thiscall).
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_004AD970
} // namespace lift_004757F0

// [0x00476630] sub_00476630 (47 bytes)
namespace lift_00476630 {
extern int mem_00924FE4;
extern int mem_00924FE8;

// @name constructStdStringFromCStr
// @summary Constructs a std::string at out from s via the MSVCP80 basic_string(const char*) import (default ctor when s is null) and returns out.
extern void* __cdecl fn_00476630(void* out, const char* s) {
    if (s != nullptr) {
        using CtorFromCStr = void(__thiscall*)(void* self, const char* s);
        auto ctor = reinterpret_cast<CtorFromCStr>(static_cast<uintptr_t>(mem_00924FE4));
        ctor(out, s);
    } else {
        using CtorDefault = void(__thiscall*)(void* self);
        auto ctor = reinterpret_cast<CtorDefault>(static_cast<uintptr_t>(mem_00924FE8));
        ctor(out);
    }
    return out;
}
} // namespace lift_00476630

// [0x00476660] sub_00476660 (62 bytes)
namespace lift_00476660 {
// Import slot for MSVCR80!_snprintf (indirect call through IAT).
extern void* mem_009251E0;
// Import slot for MSVCP80 std::basic_string<char>::basic_string(const char*) (IAT).
extern void* mem_00924FE4;
// Format string literal in .rdata at 0x0093BF08.
extern const char mem_0093BF08[];

// @name FormatIntToString
// @summary Formats an int into a 50-byte stack buffer via _snprintf, then constructs the std::string at self from that buffer and returns self.
extern void* fn_00476660(void* self, int32_t value) {
    using SnprintfFn = int (*)(char*, size_t, const char*, ...);
    using StringCtorFn = void (*)(void*, const char*);

    char buf[0x32] = {};
    auto snprintf_fn = reinterpret_cast<SnprintfFn>(mem_009251E0);
    snprintf_fn(buf, sizeof(buf), mem_0093BF08, value, self, 0);

    auto string_ctor = reinterpret_cast<StringCtorFn>(mem_00924FE4);
    string_ctor(self, buf);
    return self;
}
} // namespace lift_00476660

// [0x00476F70]
namespace lift_00476F70 {
extern uint32_t mem_00AD9098;
extern uint8_t mem_00AD907C[];

extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern int ext_006A6C87(void* func);

// @name getStaticString_00AD907C
// @summary Lazily initializes static object at 0x00AD907C with atexit cleanup and returns it.
void* fn_00476F70() {
    if ((mem_00AD9098 & 1u) == 0u) {
        mem_00AD9098 |= 1u;
        ext_0066AD10(mem_00AD907C, 0x00A32888u);
        ext_006A6C87(reinterpret_cast<void*>(0x00916F10u));
    }
    return mem_00AD907C;
}
} // namespace lift_00476F70

// [0x00476FD0]
namespace lift_00476FD0 {
// @name getStaticBoolString
// @summary Lazily initializes a static string/object at 0x00AD909C, registers its destructor, and returns its address.


    extern uint32_t mem_00AD90B8;
    extern uint8_t mem_00AD909C;
    void* ext_0066AD10(void* out_str, uint8_t flag);
    void ext_006A6C87(void* dtor);

void* fn_00476FD0(void) {
    if ((mem_00AD90B8 & 1) == 0) {
        mem_00AD90B8 |= 1;
        ext_0066AD10(&mem_00AD909C, static_cast<uint8_t>(0x00A328A4u));
        ext_006A6C87(reinterpret_cast<void*>(0x00916F00u));
    }
    return &mem_00AD909C;
}
} // namespace lift_00476FD0

// [0x00476770] sub_00476770 (106 bytes)
namespace lift_00476770 {
extern uint32_t mem_00924FF4;

// @name StringExceptionWithMember::~StringExceptionWithMember
// @class StringExceptionWithMember
// @summary Destroys four std::string members (+0x54, +0x38, +0x1c, +0x00) in reverse order via the MSVCP80 basic_string dtor IAT slot.
// @field StringExceptionWithMember +0x00 std::string member0
// @field StringExceptionWithMember +0x1c std::string member1
// @field StringExceptionWithMember +0x38 std::string member2
// @field StringExceptionWithMember +0x54 std::string member3
void fn_00476770(void* self) {
    // The original SEH frame setup/teardown (fs:[0] push/restore) is EH bookkeeping
    // only and has no portable equivalent; the observable effect is the four dtor calls.
    using StrDtor = void (*)(void*);
    const StrDtor dtor = reinterpret_cast<StrDtor>(static_cast<uintptr_t>(mem_00924FF4));

    dtor(&lift_field<uint8_t>(self, 0x54));
    dtor(&lift_field<uint8_t>(self, 0x38));
    dtor(&lift_field<uint8_t>(self, 0x1c));
    dtor(self);
}
} // namespace lift_00476770

// [0x00478410] sub_00478410 (95 bytes)
namespace lift_00478410 {
// Callees (ext_ references from original asm)
void ext_005170D0(void* self, void* arg);
void ext_00678D70(void* self, int arg);

// IAT slot for _invalid_parameter_noinfo (bounds-check boilerplate; metadata-only reference)
extern void* mem_00925134;

// @name ForEachEntryThenVfunc1 (descriptive; owner class not yet identified)
// @summary Calls ext_005170D0(self, entry) for each pointer in the range struct's [begin, end) list, then calls ext_00678D70(self, 1).
void fn_00478410(void* self, void* range) {
    // range is an untyped struct: +0x04 = begin pointer, +0x08 = end pointer.
    // Original bounds checks (_invalid_parameter_noinfo on begin > end / cursor past end)
    // are CRT boilerplate and are omitted here.
    (void)&mem_00925134;
    auto* r = static_cast<unsigned char*>(range);
    void** cur = *reinterpret_cast<void***>(r + 0x04);
    while (cur != *reinterpret_cast<void***>(r + 0x08)) {
        ext_005170D0(self, *cur);
        ++cur;
    }
    ext_00678D70(self, 1);
}
} // namespace lift_00478410

// [0x00477F30]
namespace lift_00477F30 {
extern void (*mem_00925134)();

// @name getMaxField0x160
// @summary Iterates a vector of pointers at +0x30 and returns the maximum signed int32 at +0x160 (or 0 if none > 0).
// @field this +0x34 uint32_t* vec_first
// @field this +0x38 uint32_t* vec_last
int32_t __thiscall sub_00477F30(void* self) {
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x30;
    uint32_t* it = *reinterpret_cast<uint32_t**>(vec + 0x4);
    int32_t max_val = 0;

    if (it > *reinterpret_cast<uint32_t**>(vec + 0x8)) {
        mem_00925134();
    }

    for (;;) {
        uint32_t* end = *reinterpret_cast<uint32_t**>(vec + 0x8);
        if (*reinterpret_cast<uint32_t**>(vec + 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
            mem_00925134();
        }
        uint8_t* item = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*it));
        int32_t val = *reinterpret_cast<int32_t*>(item + 0x160);
        if (val > max_val) {
            max_val = val;
        }
        if (it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
            mem_00925134();
        }
        ++it;
    }

    return max_val;
}
} // namespace lift_00477F30

// [0x004765B0]
namespace lift_004765B0 {
// @name sub_004765B0_ctor
// @summary Constructor initializing four std::string fields (one default, three from arguments) and a bool flag at +0x70
// @field Self +0x00 std::string field_0x00
// @field Self +0x1C std::string field_0x1C
// @field Self +0x38 std::string field_0x38
// @field Self +0x54 std::string field_0x54
// @field Self +0x70 uint8_t field_0x70

extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FE8;

using StringDefaultCtor = void (__thiscall*)(void*);
using StringCopyCtor = void (__thiscall*)(void*, const void*);

void* __thiscall sub_004765B0(void* self, const void* arg1, const void* arg2, const void* arg3) {
    auto* base = static_cast<uint8_t*>(self);
    auto default_ctor = reinterpret_cast<StringDefaultCtor>(mem_00924FE8);
    auto copy_ctor = reinterpret_cast<StringCopyCtor>(mem_00924FE0);

    default_ctor(base);
    copy_ctor(base + 0x1C, arg3);
    copy_ctor(base + 0x38, arg1);
    copy_ctor(base + 0x54, arg2);
    *reinterpret_cast<uint8_t*>(base + 0x70) = 1;

    return self;
}
} // namespace lift_004765B0

// [0x004773D0]
namespace lift_004773D0 {
extern void __fastcall ext_0065F440(void* self);
extern void(__fastcall* mem_00924FF4)(void* self);

// @name sub_004773D0
// @summary Destroys four std::string members and calls base destructor sub_0065F440.
// @field self +0x4 std::string field_0x04
// @field self +0x20 std::string field_0x20
// @field self +0x3c std::string field_0x3C
// @field self +0x58 std::string field_0x58
extern void __fastcall fn_004773D0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    mem_00924FF4(base + 0x58);
    mem_00924FF4(base + 0x3c);
    mem_00924FF4(base + 0x20);
    mem_00924FF4(base + 0x04);
    ext_0065F440(self);
}
} // namespace lift_004773D0

// [0x004767E0] sub_004767E0 (125 bytes)
namespace lift_004767E0 {
// Import slot holding the address of MSVCP80 std::basic_string<char> copy constructor
// (void __thiscall (this, const basic_string& rhs)).
extern uint32_t mem_00924FE0;

// @name Unknown::copyConstructRecord_004767E0
// @class Unknown
// @summary Copy-constructs four std::string members (+0x00, +0x1C, +0x38, +0x54) from the source object, then copies the flag byte at +0x70; returns self.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1c
// @field Unknown +0x38 std::string field_0x38
// @field Unknown +0x54 std::string field_0x54
// @field Unknown +0x70 uint8_t field_0x70
void* fn_004767E0(void* self, const void* src) {
    using StrCopyCtor = void (*)(void* thisObj, const void* rhs);
    auto strCopy = reinterpret_cast<StrCopyCtor>(static_cast<uintptr_t>(mem_00924FE0));

    strCopy(self, src);
    strCopy(static_cast<uint8_t*>(self) + 0x1c, static_cast<const uint8_t*>(src) + 0x1c);
    strCopy(static_cast<uint8_t*>(self) + 0x38, static_cast<const uint8_t*>(src) + 0x38);
    strCopy(static_cast<uint8_t*>(self) + 0x54, static_cast<const uint8_t*>(src) + 0x54);

    lift_field<uint8_t>(self, 0x70) = lift_field<uint8_t>(src, 0x70);
    return self;
}
} // namespace lift_004767E0

// [0x00470090]
namespace lift_00470090 {
// @name TreeIterator::decrement
// @class TreeIterator
// @summary Decrement a red-black tree iterator to the previous in-order node, invoking _invalid_parameter_noinfo on invalid state.
// @field TreeIterator +0x00 uint32_t container
// @field TreeIterator +0x04 void* node
// @field TreeNode +0x00 void* left
// @field TreeNode +0x04 void* parent
// @field TreeNode +0x08 void* right
// @field TreeNode +0x45 uint8_t is_nil


extern void* mem_00925134;

using invalid_param_fn = void(__cdecl*)();

void __thiscall sub_00470090(void* self) {
    auto invalid_param = reinterpret_cast<invalid_param_fn>(mem_00925134);
    if (lift_field<uint32_t>(self, 0x0) == 0) {
        invalid_param();
    }

    void* node = lift_field<void*>(self, 0x4);
    if (lift_field<uint8_t>(node, 0x45) != 0) {
        node = lift_field<void*>(node, 0x8);
        lift_field<void*>(self, 0x4) = node;
        if (lift_field<uint8_t>(node, 0x45) != 0) {
            invalid_param();
        }
        return;
    }

    void* left = lift_field<void*>(node, 0x0);
    if (lift_field<uint8_t>(left, 0x45) == 0) {
        void* right = lift_field<void*>(left, 0x8);
        while (lift_field<uint8_t>(right, 0x45) == 0) {
            left = right;
            right = lift_field<void*>(left, 0x8);
        }
        lift_field<void*>(self, 0x4) = left;
        return;
    }

    void* parent = lift_field<void*>(node, 0x4);
    while (lift_field<uint8_t>(parent, 0x45) == 0) {
        void* cur = lift_field<void*>(self, 0x4);
        if (cur != lift_field<void*>(parent, 0x0)) {
            break;
        }
        lift_field<void*>(self, 0x4) = parent;
        parent = lift_field<void*>(parent, 0x4);
    }

    void* cur = lift_field<void*>(self, 0x4);
    if (lift_field<uint8_t>(cur, 0x45) != 0) {
        invalid_param();
        return;
    }
    lift_field<void*>(self, 0x4) = parent;
}
} // namespace lift_00470090

// [0x00477FA0] sub_00477FA0 (139 bytes)
namespace lift_00477FA0 {
extern int mem_00925134;  // _invalid_parameter_noinfo slot (iterator-check boilerplate)

// @name Unknown::findEntryWithField168Match
// @class Unknown
// @summary Scan the pointer array at self+0x34..+0x38; return true if an entry whose vtable slot 0xF8 returns 0 has field +0x168 equal to arg.
// @field Unknown +0x34 void** field_0x34
// @field Unknown +0x38 void** field_0x38
// @field Unknown +0x00 void** vtable
// @field Unknown +0x168 uint32_t field_0x168
bool fn_00477FA0(void* self, uint32_t arg) {
    using VFn = int(__thiscall*)(void*);
    (void)&mem_00925134;  // debug iterator-check failure path omitted; reference kept for metadata

    void** it = lift_field<void**>(self, 0x34);
    while (true) {
        // End is re-read every iteration, matching the original reload of [edi+8].
        void** end = lift_field<void**>(self, 0x38);
        if (it == end) {
            return false;
        }

        void* obj = *it;
        void** vtbl = lift_field<void**>(obj, 0);
        VFn probe = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0xF8));
        if (probe(obj) == 0 && lift_field<uint32_t>(obj, 0x168) == arg) {
            return true;
        }

        ++it;
    }
}
} // namespace lift_00477FA0

// [0x00477DD0] sub_00477DD0 (142 bytes)
namespace lift_00477DD0 {
// IAT slot holding MSVCR80!memmove_s (original: call dword ptr [0x9251ec]).
extern int mem_009251EC;
using MemmoveSFn = int (*)(void* dst, size_t dst_size, const void* src, size_t count);

// @name insertionSortInt32Range
// @summary Insertion sort of an int32 array in [begin, end); a key smaller than the first element shifts the prefix with memmove_s.
void fn_00477DD0(int32_t* begin, int32_t* end) {
    if (begin == end) {
        return;
    }
    int32_t* next = begin + 1;
    if (next == end) {
        return;
    }
    for (; next != end; ++next) {
        const int32_t key = *next;
        if (key < *begin) {
            // Shift [begin, next) up by one slot, then drop key at begin.
            const ptrdiff_t count = next - begin;
            if (count > 0) {
                const size_t bytes = static_cast<size_t>(count) * 4;
                auto memmove_s_fn = reinterpret_cast<MemmoveSFn>(
                    static_cast<uintptr_t>(static_cast<uint32_t>(mem_009251EC)));
                memmove_s_fn(begin + 1, bytes, begin, bytes);
            }
            *begin = key;
        } else {
            int32_t* hole = next;
            int32_t* p = next - 1;
            if (key < *p) {
                do {
                    *hole = *p;
                    hole = p;
                    --p;
                } while (key < *p);
            }
            *hole = key;
        }
    }
}
} // namespace lift_00477DD0

// [0x00476940]
namespace lift_00476940 {
// @name std_string_isEqualOrDotPrefix
// @summary Checks if arg1 equals this string or starts with this string followed by '.'

extern const char* (__thiscall *mem_00924FF0)(const void* self);
extern const char* (__cdecl *mem_00925240)(const char* haystack, const char* needle);
extern uint32_t (__thiscall *mem_00924EAC)(const void* self);
extern const char* (__thiscall *mem_00924FFC)(const void* self, uint32_t index);

uint8_t __thiscall sub_00476940(const void* self, const void* other) {
    const char* needle = mem_00924FF0(self);
    const char* haystack = mem_00924FF0(other);
    const char* found = mem_00925240(haystack, needle);

    if (found == mem_00924FF0(other) && mem_00924EAC(other) == mem_00924EAC(self)) {
        return 1;
    }

    if (found == mem_00924FF0(other) && mem_00924EAC(other) > mem_00924EAC(self)) {
        uint32_t len = mem_00924EAC(self);
        if (*mem_00924FFC(other, len) == '.') {
            return 1;
        }
    }

    return 0;
}
} // namespace lift_00476940

// [0x00476BC0] sub_00476BC0 (106 bytes)
namespace lift_00476BC0 {
// Known callee 0x00476940: std_string_isEqualOrDotPrefix (Checks if arg1 equals this string or starts with this string followed by '.')
extern uint8_t ext_00476940(const void* self, const void* other);
// MSVCP80 std::string destructor IAT slot (0x924FF4 holds the resolved thunk address).
extern uint32_t mem_00924FF4;

// @name std_string_findInRange
// @summary Linear search over [begin, end) of 28-byte std::string elements; returns the first element matching the key at a 0x1C-byte stride, or end if none match.
void* fn_00476BC0(void* begin, void* end) {
    // Key is the std::string object the original frame keeps at ESP+0x20 (constructed by the caller).
    // It is not a parameter in this calling convention, so it is modeled as an opaque 28-byte buffer.
    alignas(4) uint8_t key[0x1C] = {};
    // Original calls the key's destructor through this IAT slot; the destructor body is not modeled here.
    (void)&mem_00924FF4;

    uint8_t* cur = static_cast<uint8_t*>(begin);
    uint8_t* last = static_cast<uint8_t*>(end);

    while (cur != last) {
        if (ext_00476940(key, cur) != 0) {
            return cur;
        }
        cur += 0x1C;
    }
    return last;
}
} // namespace lift_00476BC0

// [0x004727D0] sub_004727D0 (147 bytes)
namespace lift_004727D0 {
// Known callee 0x006981A0: Unknown::CopyConstructPair_006981A0 (Copy-constructs two std::string members (at +0x00 and +0x1C) from the matching strings of src; returns this.)
extern void* ext_006981A0(void* self, const void* src);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 = operator new.)
extern void* ext_006A5C62(size_t size);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764 = operator delete.)
extern void ext_006A5C5C(void* p);

// @name Unknown::createCopyRecord
// @class Unknown
// @summary Allocates a 0x48-byte record, stores three DWORDs and a byte flag, and copy-constructs the string pair from src; returns the record or null.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x44 uint8_t field_0x44
// @field Unknown +0x45 uint8_t field_0x45
void* __stdcall fn_004727D0(uint32_t a1, uint32_t a2, uint32_t a3, const void* src, uint8_t a5) {
    void* self = ext_006A5C62(0x48);
    if (self == nullptr) {
        return nullptr;
    }
    try {
        lift_field<uint32_t>(self, 0x00) = a1;
        lift_field<uint32_t>(self, 0x04) = a2;
        lift_field<uint32_t>(self, 0x08) = a3;
        ext_006981A0(static_cast<uint8_t*>(self) + 0x0C, src);
        lift_field<uint8_t>(self, 0x44) = a5;
        lift_field<uint8_t>(self, 0x45) = 0;
        return self;
    } catch (...) {
        ext_006A5C5C(self);
        throw;
    }
}
} // namespace lift_004727D0

// [0x00475840] sub_00475840 (82 bytes)
namespace lift_00475840 {
// @name sub_00475840
// @summary Auto-lifted identical-shape clone of 0x0052A140 (Unknown::ctor_CopyPairAt1C).
namespace lift_0052A140 {
// Known callee 0x00532900: Copy-initialize from source (ctor-style copy of vec4 + string + flag) (Sets the vtable, enable flag, copies 4 floats (+0x08..+0x14), a std::string (+0x18), and a byte flag (+0x34) from the source object.)
extern void ext_00475160(void* self, const void* src);
extern int mem_00924FE0;

// @name Unknown::ctor_CopyPairAt1C
// @class Unknown
// @summary Copy-constructs a std::string at +0x00 from src, then copy-initializes the sub-object at +0x1C from src+0x1C.
// @field Unknown +0x00 std::string copy (MSVCP80 basic_string copy ctor, via mem_00924FE0 IAT slot)
// @field Unknown +0x1C <unknown> field_0x1C (copy-initialized by ext_00532900)
void* fn_00475840(void* self, const void* src) {
    // MSVCP80 std::string copy ctor, called indirectly through the IAT slot.
    using StringCopyCtor = void (*)(void* self, const void* src);
    auto copy_string = *reinterpret_cast<StringCopyCtor*>(&mem_00924FE0);
    copy_string(self, src);

    auto* dst_sub = static_cast<unsigned char*>(self) + 0x1C;
    auto* src_sub = static_cast<const unsigned char*>(src) + 0x1C;
    ext_00475160(dst_sub, src_sub);

    return self;
}
} // namespace lift_0052A140
} // namespace lift_00475840

// [0x00477520] sub_00477520 (118 bytes)
namespace lift_00477520 {
// Known callee 0x00476BC0: std_string_findInRange (Linear search over [begin, end) of 28-byte std::string elements; returns the first element matching the key at a 0x1C-byte stride, or end if none match.)
extern void ext_00476BC0();
extern int mem_00924FE0;
extern int mem_00924FF4;

// @name findInRangeStoreResult_00477520
// @summary Searches [out, end) via ext_00476BC0 and stores value and the search result as two DWORDs at out.
void fn_00477520(void* a1, void* out, void* value, void* end, void* a5, void* key) {
    (void)a1;
    (void)a5;
    (void)key;             // key is copy-constructed into a local temp (mem_00924FE0) and destroyed (mem_00924FF4); it never reaches the search call
    (void)&mem_00924FE0;
    (void)&mem_00924FF4;

    auto find = reinterpret_cast<void* (*)(void*, void*)>(&ext_00476BC0);
    void* found = find(out, end);

    auto* words = static_cast<std::uint32_t*>(out);
    words[0] = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(value));
    words[1] = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(found));
}
} // namespace lift_00477520

// [0x0047A4E0]
namespace lift_0047A4E0 {
// @name findByName_0047A4E0
// @summary Iterates a tree container at this+0x18 and returns the first non-null entry whose name at +0x04 matches the given string.
// @field Self +0x18 TreeContainer field_0x18
// @field TreeNode +0x28 void* entry


void* ext_00584A10(void* self);
void ext_00673C20(void* self);
void mem_00925134();
uint8_t mem_00924FC4(void* lhs, void* rhs);

struct TreeIter_0047A4E0 {
    void* cont;
    void* node;
};

void* fn_0047A4E0(void* self, void* targetName) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* container = base + 0x18;
    void* head = *reinterpret_cast<void**>(base + 0x1c);

    TreeIter_0047A4E0 it;
    it.cont = container;
    it.node = *reinterpret_cast<void**>(head);

    for (;;) {
        void* endNode = *reinterpret_cast<void**>(container + 0x04);
        if (!it.cont || it.cont != container) {
            mem_00925134();
        }
        if (it.node == endNode) {
            return nullptr;
        }
        if (!it.cont || it.node == *reinterpret_cast<void**>(static_cast<uint8_t*>(it.cont) + 0x04)) {
            mem_00925134();
        }

        void* entry = *reinterpret_cast<void**>(static_cast<uint8_t*>(it.node) + 0x28);
        if (entry) {
            void* entryName = ext_00584A10(static_cast<uint8_t*>(entry) + 4);
            if (mem_00924FC4(entryName, targetName) != 0) {
                return entry;
            }
        }

        ext_00673C20(&it);
    }
}
} // namespace lift_0047A4E0

// [0x00475A40]
namespace lift_00475A40 {
// @name allocNode_00475A40
// @summary Allocates a 0x3C-byte node, initializes header links and embedded pair at +0x0C, and sets flags at +0x38/+0x39.
// @field Node +0x00 uint32_t field_0x00
// @field Node +0x04 uint32_t field_0x04
// @field Node +0x08 uint32_t field_0x08
// @field Node +0x0C void* field_0x0C
// @field Node +0x38 uint8_t field_0x38
// @field Node +0x39 uint8_t field_0x39


extern void* ext_006A5C62(uint32_t size);
extern void ext_006A5C5C(void* ptr);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_00475840(void* self, const void* src);

void* fn_00475A40(uint32_t a1, uint32_t a2, uint32_t a3, const void* a4, uint8_t a5) {
    uint8_t* node = static_cast<uint8_t*>(ext_006A5C62(0x3Cu));
    if (!node) {
        return nullptr;
    }

    try {
        lift_field<uint32_t>(node, 0x00) = a1;
        lift_field<uint32_t>(node, 0x04) = a2;
        lift_field<uint32_t>(node, 0x08) = a3;
        ext_00475840(node + 0x0C, a4);
        lift_field<uint8_t>(node, 0x38) = a5;
        lift_field<uint8_t>(node, 0x39) = 0;
    } catch (...) {
        ext_006A5C5C(node);
        ext_006A6DD2(nullptr, nullptr);
    }

    return node;
}
} // namespace lift_00475A40

// [0x004736F0]
namespace lift_004736F0 {
// @name sub_004736F0
// @summary Locks critical section, computes ceil(field_0x28 / field_0x24) * field_0x24 + iterator_value + 1, and unlocks
// @field Self +0x24 uint32_t field_0x24
// @field Self +0x28 uint32_t field_0x28
// @field Self +0xf8 uint8_t* field_0xf8
// @field Self +0x154 uint8_t field_0x154


extern void ext_0065C640(void* self);
extern void ext_0065C650(void* self);
extern int32_t ext_006A6DE0(double val);

using CeilFn = double (*)(double);
extern CeilFn mem_0092520C;

using InvalidParamFn = void (*)();
extern InvalidParamFn mem_00925134;

uint32_t fn_004736F0(void* self) {
    uint8_t* lock = static_cast<uint8_t*>(self) + 0x154;
    ext_0065C640(lock);

    uint32_t num = lift_field<uint32_t>(self, 0x28);
    uint32_t den = lift_field<uint32_t>(self, 0x24);
    double ratio = static_cast<double>(num) / static_cast<double>(den);
    int32_t count = ext_006A6DE0(mem_0092520C(ratio));

    uint32_t scaled = den * static_cast<uint32_t>(count);

    uint8_t* obj = lift_field<uint8_t*>(self, 0xf8);
    uint8_t* iter = obj + 0xd4;

    uint32_t* container = lift_field<uint32_t*>(iter, 0x0);
    if (container == nullptr) {
        mem_00925134();
    }
    uint32_t* node = lift_field<uint32_t*>(iter, 0x4);
    if (node == lift_field<uint32_t*>(container, 0x4)) {
        mem_00925134();
    }

    uint32_t val = lift_field<uint32_t>(node, 0x8);
    uint32_t result = val + scaled + 1;

    ext_0065C650(lock);
    return result;
}
} // namespace lift_004736F0

// [0x00472870] sub_00472870 (155 bytes)
namespace lift_00472870 {
// IAT slots (MSVCP80): basic_string copy-ctor and basic_string dtor (thiscall).
// Slot contents are function addresses; read them and call through a thiscall pointer.
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;

using StringCopyCtorFn = void(__thiscall*)(void* self, const void* src);
using StringDtorFn     = void(__thiscall*)(void* self);

// @name CopyStringElementRange
// @summary Copy-constructs a range of 0x20-byte string elements into dst; destroys partial copy and rethrows on failure. Returns end of dst range.
// @field StringElem +0x1c uint32_t field_0x1c
void* fn_00472870(void* src_first, void* src_last, void* dst) {
    uint8_t* src = static_cast<uint8_t*>(src_first);
    uint8_t* const end = static_cast<uint8_t*>(src_last);
    uint8_t* out = static_cast<uint8_t*>(dst);
    uint8_t* const start = out;

    auto copy_ctor = reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0));
    auto dtor      = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));

    try {
        while (src != end) {
            if (out != nullptr) {
                copy_ctor(out, src);
                lift_field<uint32_t>(out, 0x1c) = lift_field<uint32_t>(src, 0x1c);
            }
            out += 0x20;
            src += 0x20;
        }
    } catch (...) {
        // Unwind: destroy fully constructed elements [start, out), then rethrow.
        for (uint8_t* p = start; p != out; p += 0x20) {
            dtor(p);
        }
        throw;
    }

    return out;
}
} // namespace lift_00472870

// [0x00475AE0] sub_00475AE0 (165 bytes)
namespace lift_00475AE0 {
extern void __thiscall ext_00475960(void* self, void* strPtr, void** slotPtr, DWORD flag);
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void __thiscall ext_0067A670(void* self);
extern int mem_00AD9038;
extern int mem_00AD9034;
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name ExprParser::dispatchWithStaticTempString
// @class ExprParser
// @summary Lazily initializes a function-local static string object, builds a temporary std::string from the stack argument, dispatches to ext_00475960 with this->field_0x00, then destroys the temporary.
// @field ExprParser +0x00 void* field_0x00
void fn_00475AE0(void* self, const char* arg) {
    // SEH frame setup/teardown (fs:[0] push/pop, unwind states) is omitted:
    // it is compiler bookkeeping, not program semantics.

    // Function-local static guard (bit 0 of mem_00AD9038).
    if ((mem_00AD9038 & 1) == 0) {
        mem_00AD9038 |= 1;
        ext_0067A670(&mem_00AD9034);      // thiscall, ECX = &static object, no stack args
        mem_00AD9034 = 0x0093B44C;        // post-construction store into the static's first DWORD
    }

    // Temporary std::string (MSVC 2005 layout, 0x1C bytes) constructed from arg.
    alignas(8) unsigned char tmpStr[0x1C];
    using StrCtor = void (__thiscall*)(void* self, const char* s);
    using StrDtor = void (__thiscall*)(void* self);
    auto strCtor = reinterpret_cast<StrCtor>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE4)));
    auto strDtor = reinterpret_cast<StrDtor>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    strCtor(tmpStr, arg);

    // Local slot holding the static object's address; its address is passed onward.
    void* slot = &mem_00AD9034;

    // ECX = *(DWORD*)self; stack: &tmpStr, &slot, 1.
    void* thisObj = lift_field<void*>(self, 0);
    ext_00475960(thisObj, tmpStr, &slot, 1);

    strDtor(tmpStr);
}
} // namespace lift_00475AE0

// [0x00476430] sub_00476430 (140 bytes)
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_00476430(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00A3273Cu)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430

// [0x0047D4D0] sub_0047D4D0 (59 bytes)
namespace lift_0047D4D0 {
// @name sub_0047D4D0
// @summary Auto-lifted identical-shape clone of 0x0042E820 (UnknownClass::resetAndRelease).
namespace lift_0042E820 {
// Callee 0x0042C770: sub_0042C770 (thiscall-style, 5 stack args, callee-cleaned)
extern void ext_005AEC70(void* self, void* out, void* a2, uint32_t a3, void* a4, void* a5);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);
extern int mem_0093C1B0;

// @name UnknownClass::resetAndRelease
// @class UnknownClass
// @summary Installs vtable at +0x00, calls sub_0042C770 with the pointer at +0x08, passes that pointer to thunk_MFC80_ord_764, then clears +0x08 and +0x0C.
// @field UnknownClass +0x00 uint32_t field_0x00
// @field UnknownClass +0x08 void* field_0x08
// @field UnknownClass +0x0C uint32_t field_0x0C
void fn_0047D4D0(void* self) {
    // esi = ecx + 4
    void* const sub = static_cast<uint8_t*>(self) + 4;

    // mov dword ptr [ecx], 0x92f330
    lift_field<uint32_t>(self, 0x00) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0093C1B0));

    // eax = [esi+4] (= [ecx+8]); ecx = [eax]
    void* const p = lift_field<void*>(self, 0x08);
    const uint32_t pval = lift_field<uint32_t>(p, 0);

    uint32_t local[2] = {0, 0};  // [esp+0x0] .. reserved by "sub esp, 8"
    ext_005AEC70(sub, local, sub, pval, sub, p);

    // push [esi+4]; call thunk; add esp, 4
    ext_006A5C5C(lift_field<uint32_t>(self, 0x08));

    // [esi+4] = 0; [esi+8] = 0
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_0042E820
} // namespace lift_0047D4D0

// [0x004758A0] sub_004758A0 (24 bytes)
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_005A6300(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_004758A0(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x50;
    ext_005A6300(sub, &value);
}
} // namespace lift_004758A0

// [0x00476F10] sub_00476F10 (95 bytes)
namespace lift_00476F10 {
extern void ext_00662610(void* a, const void* b);
extern void ext_006A6C87(const void* a);
extern int mem_00AD9078;
extern int mem_00AD905C;

// @name StaticInitOnce_00476F10
// @summary One-time guarded initializer: sets bit 0 of mem_00AD9078, then calls ext_00662610 and ext_006A6C87 (SEH frame bookkeeping omitted).
void fn_00476F10(void* self) {
    (void)self;
    if ((mem_00AD9078 & 1) == 0) {
        mem_00AD9078 |= 1;
        ext_00662610(&mem_00AD905C,
                     reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A32860u)));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00916EE0u)));
    }
}
} // namespace lift_00476F10

// [0x00475B90] sub_00475B90 (165 bytes)
namespace lift_00475B90 {
extern void ext_00475960();
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00AD9040;
extern int mem_00AD903C;
extern int mem_00924FE4; // MSVCP80 basic_string(const char*) ctor thunk slot (replaced by std::string)
extern int mem_00924FF4; // MSVCP80 basic_string dtor thunk slot (replaced by std::string)

// @name StaticInitOnce_00475B90
// @summary One-time guard that constructs the static object at 0x00AD903C, then builds a std::string from the stack argument and forwards it through sub_00475960.
// @field UnknownClass +0x00 void* field_0x00
void fn_00475B90(void* self, const char* name) {
    // Thread-unsafe one-time init guard (bit 0 of mem_00AD9040), replacing the MSVC static-local guard.
    if ((mem_00AD9040 & 1) == 0) {
        mem_00AD9040 |= 1;
        // Original passes &mem_00AD903C as ECX (thiscall); the stub signature takes no arguments.
        ext_0067A670();
        mem_00AD903C = 0x93b5fc;
    }

    // First field of self is the callee's receiver (original: mov ecx, [esi]).
    void* const receiver = lift_field<void*>(self, 0);
    (void)receiver;
    // Metadata-only references to the original import slots; not real accesses.
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    // Temporary std::string built from the stack argument (original: MSVCP80 basic_string(const char*) ctor).
    std::string tmp(name);

    // Original calls sub_00475960 with the receiver, &tmp and the constant 1; the stub signature takes no arguments.
    ext_00475960();
}
} // namespace lift_00475B90

// [0x00474EE0] sub_00474EE0 (24 bytes)
namespace lift_00474EE0 {
// @name sub_00474EE0
// @summary Auto-lifted identical-shape clone of 0x004758A0 (SubObject_004758A0).
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_00451670(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_00474EE0(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x74;
    ext_00451670(sub, &value);
}
} // namespace lift_004758A0
} // namespace lift_00474EE0

// [0x004758C0] sub_004758C0 (24 bytes)
namespace lift_004758C0 {
// @name sub_004758C0
// @summary Auto-lifted identical-shape clone of 0x004758A0 (SubObject_004758A0).
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_005A6300(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_004758C0(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x74;
    ext_005A6300(sub, &value);
}
} // namespace lift_004758A0
} // namespace lift_004758C0

// [0x004758E0] sub_004758E0 (27 bytes)
namespace lift_004758E0 {
// @name sub_004758E0
// @summary Auto-lifted identical-shape clone of 0x004758A0 (SubObject_004758A0).
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_005A6300(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_004758E0(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x98;
    ext_005A6300(sub, &value);
}
} // namespace lift_004758A0
} // namespace lift_004758E0

// [0x00475C40] sub_00475C40 (165 bytes)
namespace lift_00475C40 {
// @name StaticStringHolder::initAndConstruct_00475C40
// @class StaticStringHolder
// @summary One-time guarded init of a static object at 0xAD9044, then builds a temporary string from the argument and passes it to ext_00475960 with the holder's inner pointer.
// @field StaticStringHolder +0x00 void* inner

extern void ext_00475960(void* self, void* ref, void* str, DWORD flag);
extern void ext_0067A670(void* self);
extern uint32_t mem_00AD9048;
extern uint32_t mem_00AD9044;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;

void fn_00475C40(void* self, DWORD arg) {
    if ((mem_00AD9048 & 1) == 0) {
        mem_00AD9048 |= 1;
        ext_0067A670(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AD9044u)));
        mem_00AD9044 = 0x93b7acu;
    }

    // Temporary std::string built from arg (MSVCP80 ctor via IAT slot 0x924FE4).
    alignas(8) uint8_t str[0x18];
    using StrCtor = void (*)(void* self, DWORD arg);
    using StrDtor = void (*)(void* self);
    reinterpret_cast<StrCtor>(static_cast<uintptr_t>(mem_00924FE4))(str, arg);

    DWORD refSlot = 0;
    void* inner = *static_cast<void**>(self);
    ext_00475960(inner, &refSlot, str, 1);

    reinterpret_cast<StrDtor>(static_cast<uintptr_t>(mem_00924FF4))(str);
}
} // namespace lift_00475C40

// [0x00479620] sub_00479620 (168 bytes)
namespace lift_00479620 {
// Callee 0x005DF5C0: thiscall(self) -> void* (non-null means "found").
extern void* __thiscall ext_005DF5C0(void* self);
// Callee 0x0041FF30: thiscall(self = exception object, msg, other); callee pops its 2 stack args.
extern void __thiscall ext_0041FF30(void* self, void* msg, void* other);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* obj, const void* throw_info);

// IAT slots (MSVCP80 std::string): copy-ctor, ctor(const char*), dtor.
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE4;
// .data global holding a const char* used to build the message string.
extern uint32_t mem_00AD9100;

namespace {
using CopyCtorFn = void(__thiscall*)(void* self, const void* src);
using CharCtorFn = void(__thiscall*)(void* self, const char* src);
using DtorFn = void(__thiscall*)(void* self);
} // namespace

// @name ResolveOrThrowMissing
// @summary Copies the std::string argument into a local, calls sub_005DF5C0(self); returns its non-null result, otherwise builds an error string from a global and throws it.
void* fn_00479620(void* self, const void* arg0) {
    // Local frame, addressed with the same offsets as the original esp-relative slots:
    //   +0x00 string copy of arg0, +0x08 message string, +0x24 exception object,
    //   +0x70 unwind state, +0x78 string slot.
    unsigned char frame[0x9C] = {};

    reinterpret_cast<CopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0))(frame, arg0);

    void* result = ext_005DF5C0(self);
    if (result != nullptr) {
        lift_field<int32_t>(frame, 0x70) = -1;
        reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(frame + 0x78);
        return result;
    }

    const char* message = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00AD9100));
    reinterpret_cast<CharCtorFn>(static_cast<uintptr_t>(mem_00924FE4))(frame + 0x08, message);
    lift_field<uint8_t>(frame, 0x70) = 1;
    ext_0041FF30(frame + 0x24, frame + 0x08, frame + 0x78);
    // Throw with the RTTI/ThrowInfo immediate 0x009D3748.
    ext_006A6DD2(frame + 0x24, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009D3748u)));
}
} // namespace lift_00479620

// [0x00475CF0] sub_00475CF0 (165 bytes)
namespace lift_00475CF0 {
extern void ext_00475960();
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00AD9050;
extern int mem_00AD904C;
extern int mem_00924FE4;
extern int mem_00924FF4;

namespace {

// MSVC thiscall (ECX = this, remaining args on stack). Defined as a no-op on non-MSVC hosts by lift_compat.h.
using ThisFn0 = void(__thiscall*)(void* self);
using ThisFn1 = void(__thiscall*)(void* self, const char* s);
using ThisFn3 = void(__thiscall*)(void* self, void* a, void* b, int flag);

// Resolve an imported function address stored in an IAT-style slot.
template <typename F>
inline F importFn(int slot) {
    return reinterpret_cast<F>(static_cast<uintptr_t>(static_cast<uint32_t>(slot)));
}

} // namespace

// @name ProcessNamedString_00475CF0
// @class UnknownOwner
// @summary Lazily initializes a static global, builds a temporary string from the name argument, forwards it with this->field_0x00 to ext_00475960, then destroys the temporary.
// @field UnknownOwner +0x00 void* field_0x00
void fn_00475CF0(void* self, const char* name) {
    // SEH frame setup/teardown from the original prologue/epilogue is omitted (not portable).

    // One-time initialization of the static object at mem_00AD904C.
    if ((mem_00AD9050 & 1) == 0) {
        mem_00AD9050 |= 1;
        reinterpret_cast<ThisFn0>(ext_0067A670)(&mem_00AD904C);
        mem_00AD904C = 0x93b95c;
    }

    // Temporary string object built from the name (MSVC std::string is 0x1C bytes).
    alignas(8) unsigned char tmp[0x1c];
    importFn<ThisFn1>(mem_00924FE4)(tmp, name);

    void* out = nullptr;
    void* obj = lift_field<void*>(self, 0);
    reinterpret_cast<ThisFn3>(ext_00475960)(obj, tmp, &out, 1);

    importFn<ThisFn0>(mem_00924FF4)(tmp);
}
} // namespace lift_00475CF0

// [0x00475710] sub_00475710 (143 bytes)
namespace lift_00475710 {
extern void ext_00475240(void* self, void* a2, uint8_t* a3, uint32_t one, uint32_t a4);
extern int mem_00925134;  // IAT slot for MSVCR80!_invalid_parameter_noinfo

// @name Vector::InsertAndGetIterator_00475710
// @class Vector
// @summary Validates the vector range, calls ext_00475240 to insert one element at a3, then writes {container, iterator} to out.
// @field Vector +0x04 uint8_t* begin
// @field Vector +0x08 uint8_t* end

namespace {

struct VecHeader {
    void*    field_0x00;
    uint8_t* begin;   // +0x04
    uint8_t* end;     // +0x08
};

struct IterResult {
    void*    container;  // written from this
    uint8_t* pos;        // +0x04 in out struct
};

[[noreturn]] void invalid_parameter_noinfo() {
    (void)&mem_00925134;  // original: call dword ptr [0x925134]
    std::abort();
}

} // namespace

void fn_00475710(void* self, IterResult* out, void* a2, uint8_t* a3, uint32_t a4) {
    auto* vec = static_cast<VecHeader*>(self);

    uint8_t* begin = vec->begin;
    ptrdiff_t index = 0;
    if (begin != nullptr && ((vec->end - begin) >> 5) != 0) {
        if (begin > vec->end) {
            invalid_parameter_noinfo();
        }
        if (a2 == nullptr || a2 != self) {
            invalid_parameter_noinfo();
        }
        index = (a3 - begin) >> 5;
    }

    ext_00475240(self, a2, a3, 1, a4);

    begin = vec->begin;
    if (begin > vec->end) {
        invalid_parameter_noinfo();
    }

    uint8_t* newpos = begin + (index << 5);
    if (newpos > vec->end || newpos < vec->begin) {
        invalid_parameter_noinfo();
    }

    out->pos = newpos;
    out->container = self;
}
} // namespace lift_00475710

// [0x00475DA0] sub_00475DA0 (165 bytes)
namespace lift_00475DA0 {
extern void ext_0067A670(void* self);                          // static object base ctor (thiscall)
extern void ext_00475960(void* self, void* out, void** slot, int flag); // thiscall, 3 stack args
extern uint32_t mem_00924FE4;                                  // .rdata: std::string(const char*) thunk address
extern uint32_t mem_00924FF4;                                  // .rdata: std::string dtor thunk address
extern uint32_t mem_00AD9058;                                  // one-time init flag (bit 0)
extern uint32_t mem_00AD9054;                                  // static object (first dword = vptr)

// @name Unknown::invokeWithStaticArg_00475DA0
// @class Unknown
// @summary Lazily constructs the static object at mem_00AD9054, builds a temporary string from the argument, calls sub_00475960 on this->[0] with it, and destroys the string.
// @field Unknown +0x00 void* field_0x00
void fn_00475DA0(void* self, const char* text) {
    // One-time construction of the static object guarded by bit 0 of mem_00AD9058.
    if ((mem_00AD9058 & 1u) == 0) {
        mem_00AD9058 |= 1u;
        ext_0067A670(&mem_00AD9054);
        mem_00AD9054 = 0x93bb0c;
    }

    // Temporary string object (MSVC std::string layout, 0x18 bytes) built from text.
    alignas(8) unsigned char str[0x18];
    void* slot = &mem_00AD9054;
    using CtorFn = void (*)(void* self, const char* text);
    using DtorFn = void (*)(void* self);
    reinterpret_cast<CtorFn>(static_cast<uintptr_t>(mem_00924FE4))(str, text);

    void* inner = lift_field<void*>(self, 0);
    ext_00475960(inner, str, &slot, 1);

    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(str);
}
} // namespace lift_00475DA0

// [0x00476150]
namespace lift_00476150 {
// @name RBTree::insertWithHint
// @class RBTree
// @summary Inserts a key-value pair into a red-black tree using a position hint iterator, returning an iterator to the inserted or existing element.
// @field RBTree +0x04 void* head
// @field RBTree +0x08 uint32_t size


    void* __thiscall ext_00475E50(void* self, void* out_iter, uint32_t left_flag, void* node, void* val);
    void __thiscall ext_00666C00(void* iter);
    uint8_t __thiscall ext_00414510(void* self, void* lhs, void* rhs);
    void __thiscall ext_00667030(void* iter);
    uint8_t __thiscall ext_00666980(void* iter, void* other_iter);
    void* __thiscall ext_00476050(void* self, void* out_pair, void* val);
    extern void (__cdecl *mem_00925134)(void);
    extern uint8_t (__cdecl *mem_00924EF4)(void* lhs, void* rhs);

struct TreeIter {
    void* tree;
    void* node;
};

void* __thiscall sub_00476150(void* self, void* out_iter, void* hint_tree, void* hint_node, void* val) {
    uint32_t size = lift_field<uint32_t>(self, 0x08);
    if (size == 0) {
        void* head = lift_field<void*>(self, 0x04);
        ext_00475E50(self, out_iter, 1, head, val);
        return out_iter;
    }

    void* head = lift_field<void*>(self, 0x04);
    void* leftmost = lift_field<void*>(head, 0x00);

    if (hint_tree == nullptr || hint_tree != self) {
        mem_00925134();
    }

    if (hint_node == leftmost) {
        void* node_key = static_cast<uint8_t*>(hint_node) + 0x0C;
        if (mem_00924EF4(val, node_key) != 0) {
            ext_00475E50(self, out_iter, 1, hint_node, val);
            return out_iter;
        }
    } else {
        if (hint_tree == nullptr || hint_tree != self) {
            mem_00925134();
        }
        head = lift_field<void*>(self, 0x04);
        if (hint_node == head) {
            void* rightmost = lift_field<void*>(head, 0x08);
            void* rightmost_key = static_cast<uint8_t*>(rightmost) + 0x0C;
            if (mem_00924EF4(rightmost_key, val) != 0) {
                ext_00475E50(self, out_iter, 0, rightmost, val);
                return out_iter;
            }
        } else {
            void* node_key = static_cast<uint8_t*>(hint_node) + 0x0C;
            if (mem_00924EF4(val, node_key) != 0) {
                TreeIter prev_iter{hint_tree, hint_node};
                ext_00666C00(&prev_iter);
                void* prev_key = static_cast<uint8_t*>(prev_iter.node) + 0x0C;
                if (ext_00414510(self, prev_key, val) != 0) {
                    void* prev_right = lift_field<void*>(prev_iter.node, 0x08);
                    if (lift_field<uint8_t>(prev_right, 0x39) != 0) {
                        ext_00475E50(self, out_iter, 0, prev_iter.node, val);
                    } else {
                        ext_00475E50(self, out_iter, 1, hint_node, val);
                    }
                    return out_iter;
                }
            }
            if (mem_00924EF4(node_key, val) != 0) {
                TreeIter next_iter{hint_tree, hint_node};
                TreeIter end_iter{self, lift_field<void*>(self, 0x04)};
                ext_00667030(&next_iter);
                if (ext_00666980(&next_iter, &end_iter) != 0 ||
                    ext_00414510(self, val, static_cast<uint8_t*>(next_iter.node) + 0x0C) != 0) {
                    void* cur_right = lift_field<void*>(hint_node, 0x08);
                    if (lift_field<uint8_t>(cur_right, 0x39) != 0) {
                        ext_00475E50(self, out_iter, 0, hint_node, val);
                    } else {
                        ext_00475E50(self, out_iter, 1, next_iter.node, val);
                    }
                    return out_iter;
                }
            }
        }
    }

    TreeIter insert_res{};
    TreeIter* res_pair = static_cast<TreeIter*>(ext_00476050(self, &insert_res, val));
    lift_field<void*>(out_iter, 0x00) = res_pair->tree;
    lift_field<void*>(out_iter, 0x04) = res_pair->node;
    return out_iter;
}
} // namespace lift_00476150

// [0x0047B1E0]
namespace lift_0047B1E0 {
void __thiscall ext_0041A920(void* self, void* item);
    void __thiscall ext_00427A60(void* self);
    void* __thiscall ext_004D2C90(void* self, void* str);
    void __thiscall ext_0050BE20(void* self);
    void* ext_006A5C62(size_t size);

    extern uintptr_t mem_00925134;
    extern uintptr_t mem_00924FC0;
    extern uintptr_t mem_00924FE4;
    extern uintptr_t mem_00924FF4;
    extern char mem_00928B5D[];

struct CheckedVectorIterator {
    void* container;
    void* container_check;
    uint32_t* ptr;
};

// @name collectMatchingItems
// @summary Iterates a checked vector of items, allocates a wrapper for each whose name matches targetName, and appends it to outVec
// @field Container +0x24 uint8_t[12] checked_vector
void fn_0047B1E0(void* arg0, void* arg1, const char* arg2, uint8_t arg3) {
    if (arg3 != 0) {
        ext_0050BE20(arg1);
    }

    uint8_t* vec = static_cast<uint8_t*>(arg0) + 0x24;
    uint32_t* begin_ptr = *reinterpret_cast<uint32_t**>(vec + 0x04);
    uint32_t* end_ptr = *reinterpret_cast<uint32_t**>(vec + 0x08);

    auto invalid_param = reinterpret_cast<void(*)()>(mem_00925134);
    if (begin_ptr > end_ptr) {
        invalid_param();
    }

    CheckedVectorIterator it{vec, vec, begin_ptr};
    ext_00427A60(&it);

    for (;;) {
        uint32_t* cur_end = *reinterpret_cast<uint32_t**>(vec + 0x08);
        if (*reinterpret_cast<uint32_t**>(vec + 0x04) > cur_end) {
            invalid_param();
        }

        CheckedVectorIterator end_it{vec, vec, cur_end};
        ext_00427A60(&end_it);

        if (it.container_check == nullptr || it.container_check != end_it.container_check) {
            invalid_param();
        }

        if (it.ptr >= end_it.ptr) {
            break;
        }

        if (it.container_check == nullptr) {
            invalid_param();
        }
        uint8_t* container_bytes = static_cast<uint8_t*>(it.container_check);
        if (it.ptr >= *reinterpret_cast<uint32_t**>(container_bytes + 0x08)) {
            invalid_param();
        }

        void* elem = reinterpret_cast<void*>(*it.ptr);
        auto str_eq = reinterpret_cast<bool(*)(void*, const char*)>(mem_00924FC0);
        if (str_eq(static_cast<uint8_t*>(elem) + 0x04, arg2)) {
            void* raw = ext_006A5C62(0x32C);
            void* obj = nullptr;
            if (raw != nullptr) {
                uint8_t str_buf[28];
                auto str_ctor = reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4);
                auto str_dtor = reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4);
                str_ctor(str_buf, mem_00928B5D);
                obj = ext_004D2C90(raw, str_buf);
                str_dtor(str_buf);
            }

            void** vtbl = *reinterpret_cast<void***>(obj);
            auto vfunc = reinterpret_cast<void(__thiscall*)(void*, void*)>(vtbl[0x54 / 4]);
            vfunc(obj, elem);

            void* temp_obj = obj;
            ext_0041A920(arg1, &temp_obj);
        }

        if (it.ptr >= *reinterpret_cast<uint32_t**>(container_bytes + 0x08)) {
            invalid_param();
        }
        it.ptr += 1;
        ext_00427A60(&it);
    }
}
} // namespace lift_0047B1E0

// [0x004796D0]
namespace lift_004796D0 {
// @name sub_004796D0
// @summary Validates state via ext_005DF5C0, throwing via ext_006A6DD2 if non-zero, otherwise delegates to ext_00478910.

extern void* ext_004142E0(void* self, const void* a, const void* b);
extern void* ext_00478910(void* self, void* out, void* str);
extern int32_t ext_005DF5C0(void* self);
extern void ext_006A6DD2(void* exc, uint32_t throw_info);

extern void* mem_00924FE0;
extern const char* mem_00AD9100;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

namespace {
struct MsvcString {
    uint8_t data[0x1C];
};
} // namespace

extern void* fn_004796D0(void* self, void* out, MsvcString arg_str) {
    using CopyCtorFn = void (*)(void*, const void*);
    using CStrCtorFn = void (*)(void*, const char*);
    using DtorFn = void (*)(void*);

    auto copy_ctor = reinterpret_cast<CopyCtorFn>(mem_00924FE0);
    auto cstr_ctor = reinterpret_cast<CStrCtorFn>(mem_00924FE4);
    auto dtor = reinterpret_cast<DtorFn>(mem_00924FF4);

    if (ext_005DF5C0(self) != 0) {
        MsvcString tmp_str{};
        cstr_ctor(&tmp_str, mem_00AD9100);
        uint8_t exc_buf[0x34]{};
        ext_004142E0(exc_buf, &tmp_str, &arg_str);
        ext_006A6DD2(exc_buf, 0x009D1278u);
    }

    MsvcString tmp_copy{};
    copy_ctor(&tmp_copy, &arg_str);

    uint8_t local_out[0x28]{};
    *reinterpret_cast<void**>(local_out + 0x24) = out;
    ext_00478910(self, local_out, &tmp_copy);

    dtor(&tmp_copy);
    dtor(&arg_str);
    return out;
}
} // namespace lift_004796D0

// [0x00477A80]
namespace lift_00477A80 {
// @name pivotMedianOfNine_00477A80
// @summary Ninther pivot selection over a uint32 range [first,last): sorts sample triples with sortThreeByComparator; small ranges (<=40) get a single sort3 of first/mid/last.

extern void ext_00477120(uint32_t* a, uint32_t* b, uint32_t* c, uint32_t cmp);

void __cdecl sub_00477A80(uint32_t* first, uint32_t* mid, uint32_t* /*unused: never read by asm*/, uint32_t cmp, uint32_t* last)
{
    int32_t n = static_cast<int32_t>(last - first);
    if (n <= 40) {
        ext_00477120(first, mid, last, cmp);
        return;
    }

    // Sample step: (n + 1) / 8 elements (n > 40, so signed division is exact).
    int32_t step = (n + 1) / 8;

    ext_00477120(first, first + step, first + 2 * step, cmp);
    ext_00477120(mid - step, mid, mid + step, cmp);
    ext_00477120(last - 2 * step, last - step, last, cmp);
    ext_00477120(first + step, mid, last - step, cmp);
}
} // namespace lift_00477A80

// [0x00479890] sub_00479890 (254 bytes)
namespace lift_00479890 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern int32_t ext_005DF5C0(void* self);
extern void* ext_004142E0(void* self, const void* a, const void* b);
extern void ext_006A6DD2(void* exc, uint32_t throw_info);
extern void* ext_00478910(void* self, void* out, const void* str);

// IAT slots (MSVCP80 std::basic_string<char>): copy ctor, const char* ctor, dtor.
extern void* mem_00924FE0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;
// Pointer to the C string used for the exception message.
extern const char* mem_00A32774;

// @name validateAndForwardString_00479890
// @summary Copies a by-value std::string, throws via ext_006A6DD2 (message from mem_00A32774) if ext_005DF5C0(self) is nonzero, otherwise forwards a copy of it to ext_00478910 and returns out.

namespace {
struct MsvcString {
    uint8_t data[0x1C];
};
} // namespace

void* fn_00479890(void* self, MsvcString arg_str, void* out) {
    using CopyCtorFn = void (*)(void*, const void*);
    using CStrCtorFn = void (*)(void*, const char*);
    using DtorFn = void (*)(void*);

    auto copy_ctor = reinterpret_cast<CopyCtorFn>(mem_00924FE0);
    auto cstr_ctor = reinterpret_cast<CStrCtorFn>(mem_00924FE4);
    auto dtor = reinterpret_cast<DtorFn>(mem_00924FF4);

    MsvcString src{};
    copy_ctor(&src, &arg_str);

    if (ext_005DF5C0(self) != 0) {
        MsvcString msg{};
        cstr_ctor(&msg, mem_00A32774);
        uint8_t exc_buf[0x34]{};
        ext_004142E0(exc_buf, &msg, &src);
        ext_006A6DD2(exc_buf, 0x009D1278u);
    }

    MsvcString tmp{};
    copy_ctor(&tmp, &src);

    uint8_t local_out[0x2C]{};
    *reinterpret_cast<void**>(local_out + 0x28) = out;
    ext_00478910(self, local_out, &tmp);

    dtor(&tmp);
    dtor(&src);
    return out;
}
} // namespace lift_00479890

// [0x0047B6A0]
namespace lift_0047B6A0 {
// @name collectMatchingElements
// @summary Iterates a filtered vector at src+0x24, clones matching elements by name into 0x18C-byte objects, and appends them to dstVec.
// @field SrcContainer +0x24 void* elementsVec
// @field Element +0x04 std::string name

void __thiscall ext_0041A920(void* self, void* itemPtr);
void __thiscall ext_00427A60(void* self);
void* __thiscall ext_004C6780(void* self, void* strArg);
void __thiscall ext_0050BE20(void* self);
void* __cdecl ext_006A5C62(uint32_t size);

extern uintptr_t mem_00925134;
extern uintptr_t mem_00924FC0;
extern uintptr_t mem_00924FE4;
extern uintptr_t mem_00924FF4;

namespace {
struct CheckedVectorIter {
    void* container0;
    void* container1;
    uintptr_t cur;
};
} // namespace

extern void __cdecl fn_0047B6A0(void* src, void* dstVec, const char* nameFilter, uint8_t clearFirst) {
    using InvalidParamFn = void(__cdecl*)();
    using StrEqCstrFn = bool(__cdecl*)(const void*, const char*);
    using StrCtorCstrFn = void*(__thiscall*)(void*, const char*);
    using StrDtorFn = void(__thiscall*)(void*);
    using VFunc54Fn = void(__thiscall*)(void*, void*);

    auto invalidParam = [&]() {
        reinterpret_cast<InvalidParamFn>(mem_00925134)();
    };

    if (clearFirst != 0) {
        ext_0050BE20(dstVec);
    }

    uint8_t* srcVec = static_cast<uint8_t*>(src) + 0x24;

    uintptr_t beginPtr = lift_field<uintptr_t>(srcVec, 0x04);
    if (beginPtr > lift_field<uintptr_t>(srcVec, 0x08)) {
        invalidParam();
    }
    CheckedVectorIter it{ srcVec, srcVec, beginPtr };
    ext_00427A60(&it);

    uintptr_t endPtr = lift_field<uintptr_t>(srcVec, 0x08);
    if (lift_field<uintptr_t>(srcVec, 0x04) > endPtr) {
        invalidParam();
    }
    CheckedVectorIter endIt{ srcVec, srcVec, endPtr };
    ext_00427A60(&endIt);

    for (;;) {
        void* container = it.container1;
        if (container == nullptr || container != endIt.container1) {
            invalidParam();
        }
        uintptr_t cur = it.cur;
        if (cur >= endIt.cur) {
            break;
        }
        if (container == nullptr) {
            invalidParam();
        }
        if (cur >= lift_field<uintptr_t>(container, 0x08)) {
            invalidParam();
        }

        void* elem = *reinterpret_cast<void**>(cur);
        const void* elemName = static_cast<const uint8_t*>(elem) + 0x04;
        if (reinterpret_cast<StrEqCstrFn>(mem_00924FC0)(elemName, nameFilter)) {
            void* raw = ext_006A5C62(0x18c);
            void* obj = nullptr;
            if (raw != nullptr) {
                alignas(4) uint8_t tmpStr[0x1c];
                reinterpret_cast<StrCtorCstrFn>(mem_00924FE4)(
                    tmpStr,
                    reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5D)));
                obj = ext_004C6780(raw, tmpStr);
                reinterpret_cast<StrDtorFn>(mem_00924FF4)(tmpStr);
            }

            void** vtbl = *reinterpret_cast<void***>(obj);
            reinterpret_cast<VFunc54Fn>(vtbl[0x54 / sizeof(void*)])(obj, elem);

            void* pushed = obj;
            ext_0041A920(dstVec, &pushed);
        }

        if (cur >= lift_field<uintptr_t>(container, 0x08)) {
            invalidParam();
        }
        it.cur = cur + sizeof(void*);
        ext_00427A60(&it);
    }
}
} // namespace lift_0047B6A0

// [0x00475960] sub_00475960 (211 bytes)
namespace lift_00475960 {
// Known callee 0x004142E0: sub_004142E0 (302B, not yet lifted; thiscall with 2 stack args, callee-cleanup)
extern void ext_004142E0(void* self, void* first, const void* second);
// Known callee 0x004276B0: StdStringCopyConstruct (Copy-constructs a std::string at dst from src via the MSVCP80 copy constructor; returns dst.)
extern void* ext_004276B0(void* dst, const void* src);
// Known callee 0x004722F0: Unknown::GetOnceInitializedString_004722F0 (One-time guarded initializer for the string buffer at mem_00AD9014; returns its address.)
extern void* ext_004722F0();
// Known callee 0x005CD120: Vector::InsertSortedUnique_005CD120 (Inserts a std::string into the sorted vector unless an equal element exists; returns true if inserted.)
extern bool ext_005CD120(void* self, const void* value);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(const void* object, const void* throwInfo);
// MSVCP80 std::string copy-constructor IAT slot (thiscall, one stack arg)
extern int mem_00924FE0;
// MSVCP80 std::string destructor IAT slot (thiscall)
extern int mem_00924FF4;

// @name Vector::InsertUniqueOrThrow_00475960
// @class Vector
// @summary Inserts a copy of the std::string at a1 into the sorted vector self; if it is already present and a3 is set, builds a message and throws it, otherwise returns false.
bool fn_00475960(void* self, const void* a1, const void* a2, bool a3) {
    constexpr size_t kStdStringSize = 0x1C;   // MSVC 2005 std::string: 28 bytes
    constexpr uintptr_t kThrowInfo = 0x009D1278u;

    // Temporary std::string copy of *a1.
    alignas(8) unsigned char tmp[kStdStringSize];
    (*reinterpret_cast<void* (**)(void*, const void*)>(&mem_00924FE0))(tmp, a1);

    // The original reads *a2 into a dead local; the read is kept in case it faults.
    const uint32_t key = *static_cast<const uint32_t*>(a2);
    (void)key;

    const bool inserted = ext_005CD120(self, tmp);
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(tmp);

    if (inserted) {
        return true;
    }
    if (!a3) {
        return false;
    }

    // Build a message from a copy of *a1 and throw it.
    alignas(8) unsigned char copy[kStdStringSize];
    ext_004276B0(copy, a1);

    alignas(8) unsigned char msg[kStdStringSize];
    ext_004142E0(msg, ext_004722F0(), copy);

    ext_006A6DD2(msg, reinterpret_cast<const void*>(kThrowInfo));
    return false;
}
} // namespace lift_00475960

// [0x00476050] sub_00476050 (243 bytes)
namespace lift_00476050 {
// Known callee 0x00475E50: StringMapTree insert-at helper (sub_00475E50). thiscall, 4 stack args (out, flag, insertPos, key), ret 0x10.
extern void* ext_00475E50(void* self, void* out, uint8_t flag, void* pos, const void* key);
// Known callee 0x00666C00: TreeIterator::operator-- (Decrements a red-black tree iterator to the previous node, validating against nil/end.)
extern void ext_00666C00(void* self);
// MSVCP80 std::operator<(const std::string&, const std::string&) IAT slot (cdecl).
extern int mem_00924EF4;

// @name StringMapTree::lowerBoundInsertPos
// @class StringMapTree
// @summary Walks the red-black tree for key (lower-bound style), steps back one node if needed, and returns {tree, node, inserted} via out: inserts at the found position when key is greater, else returns the existing node with inserted=false.
// @field StringMapTree +0x04 void* header
// @field TreeHeader +0x00 void* leftmost
// @field TreeHeader +0x04 void* root
// @field TreeNode +0x00 void* left
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C std::string key
// @field TreeNode +0x39 uint8_t isNil
void* fn_00476050(void* self, void* out, const void* key) {
    using StringLessFn = bool (__cdecl*)(const void* lhs, const void* rhs);
    // Slot value holds the MSVCP80 operator< entry point; the original calls it through [0x924EF4].
    const auto string_less = reinterpret_cast<StringLessFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));

    auto keyOf = [](void* node) -> const void* {
        return static_cast<uint8_t*>(node) + 0x0C;
    };

    void* head = lift_field<void*>(self, 0x04);
    void* y = head;
    void* x = lift_field<void*>(head, 0x04);
    uint8_t comp = 1;

    while (lift_field<uint8_t>(x, 0x39) == 0) {
        y = x;
        comp = string_less(key, keyOf(x)) ? 1 : 0;
        x = comp ? lift_field<void*>(x, 0x00) : lift_field<void*>(x, 0x08);
    }

    auto writeOut = [&](void* tree, void* node, uint8_t inserted) {
        lift_field<void*>(out, 0x00) = tree;
        lift_field<void*>(out, 0x04) = node;
        lift_field<uint8_t>(out, 0x08) = inserted;
        return out;
    };

    // Iterator {tree, node} as built on the stack at [esp+0x14].
    struct TreeIterator {
        void* tree;
        void* node;
    } it{self, y};

    void* j = y;
    if (comp) {
        if (y == lift_field<void*>(head, 0x00)) {
            // Insert at leftmost position.
            alignas(8) uint8_t tmp[16] = {};
            void* r = ext_00475E50(self, tmp, 1, y, key);
            return writeOut(lift_field<void*>(r, 0x00), lift_field<void*>(r, 0x04), 1);
        }
        ext_00666C00(&it);
        j = it.node;
    }

    if (!string_less(keyOf(j), key)) {
        return writeOut(self, j, 0);
    }

    alignas(8) uint8_t tmp[16] = {};
    void* r = ext_00475E50(self, tmp, comp, y, key);
    return writeOut(lift_field<void*>(r, 0x00), lift_field<void*>(r, 0x04), 1);
}
} // namespace lift_00476050

// [0x00473C70] sub_00473C70 (508 bytes)
namespace lift_00473C70 {
// Known callee 0x004727D0 (lifted): Unknown::createCopyRecord
extern void* __stdcall ext_004727D0(uint32_t a1, uint32_t a2, uint32_t a3, const void* src, uint8_t a5);
// Metadata-only callees (listed in CALLEES, never called by the disassembly; address taken only)
extern void ext_0046FF90();
extern void ext_00475A40();
extern void ext_004EF730();
// Metadata-only RDATA/IAT slots of the replaced throw path (address taken only)
extern int mem_00924FE0;
extern int mem_00924FE4;
extern int mem_009251C4;
// Unlifted callee 0x0046FFE0: tree rotate-left (thiscall: this in ecx, node as one stack arg)
extern void ext_0046FFE0(void* self, void* node);
// Unlifted callee 0x00470030: tree rotate-right (thiscall: this in ecx, node as one stack arg)
extern void ext_00470030(void* self, void* node);

namespace {

// Red-black node layout (MSVC std::_Tree style): left +0x00, parent +0x04, right +0x08,
// color +0x44 (0 = red, 1 = black), isnil +0x45.
constexpr uint8_t kRed = 0;
constexpr uint8_t kBlack = 1;

inline uint32_t addr32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}
inline void*& left(void* n) { return lift_field<void*>(n, 0x00); }
inline void*& parent(void* n) { return lift_field<void*>(n, 0x04); }
inline void*& right(void* n) { return lift_field<void*>(n, 0x08); }
inline uint8_t& color(void* n) { return lift_field<uint8_t>(n, 0x44); }
inline uint8_t& isnil(void* n) { return lift_field<uint8_t>(n, 0x45); }

} // namespace

// @name StringMapTree::insertNode_00473C70
// @class StringMapTree
// @summary Inserts a new node carrying value into the red-black tree (hint-based insert), rebalances, and returns the pair {tree, node} via out.
// @field StringMapTree +0x04 void* head
// @field StringMapTree +0x08 uint32_t size
// @field StringMapNode +0x00 void* left
// @field StringMapNode +0x04 void* parent
// @field StringMapNode +0x08 void* right
// @field StringMapNode +0x44 uint8_t color
// @field StringMapNode +0x45 uint8_t isNil
void* fn_00473C70(void* self, void* out, uint8_t insertLeft, void* hint, const void* value) {
    // Metadata-only references (no runtime effect).
    (void)&ext_0046FF90;
    (void)&ext_00475A40;
    (void)&ext_004EF730;
    (void)&mem_00924FE0;
    (void)&mem_00924FE4;
    (void)&mem_009251C4;

    if (lift_field<uint32_t>(self, 0x08) >= 0x4924923u) {
        throw std::length_error("map/set<T> too long");
    }

    void* head = lift_field<void*>(self, 0x04);
    void* node = ext_004727D0(addr32(head), addr32(hint), addr32(head), value, 0);
    lift_field<uint32_t>(self, 0x08) += 1;

    if (hint == head) {
        parent(head) = node;
        left(head) = node;
        right(head) = node;
    } else if (insertLeft == 0) {
        right(hint) = node;
        if (hint == right(head)) {
            right(head) = node;
        }
    } else {
        left(hint) = node;
        if (hint == left(head)) {
            left(head) = node;
        }
    }

    void* z = node;
    while (color(parent(z)) == kRed) {
        void* p = parent(z);
        void* g = parent(p);
        if (p == left(g)) {
            void* u = right(g);
            if (color(u) == kRed) {
                color(p) = kBlack;
                color(u) = kBlack;
                color(g) = kRed;
                z = g;
            } else {
                if (z == right(p)) {
                    z = p;
                    ext_0046FFE0(self, z);
                }
                color(parent(z)) = kBlack;
                void* gg = parent(parent(z));
                color(gg) = kRed;
                ext_00470030(self, gg);
            }
        } else {
            void* u = left(g);
            if (color(u) == kRed) {
                color(p) = kBlack;
                color(u) = kBlack;
                color(g) = kRed;
                z = g;
            } else {
                if (z == left(p)) {
                    z = p;
                    ext_00470030(self, z);
                }
                color(parent(z)) = kBlack;
                void* gg = parent(parent(z));
                color(gg) = kRed;

                // Inline rotate-left about gg.
                void* x = right(gg);
                right(gg) = left(x);
                void* xl = left(x);
                if (isnil(xl) == 0) {
                    parent(xl) = gg;
                }
                parent(x) = parent(gg);
                void* h = lift_field<void*>(self, 0x04);
                if (gg == parent(h)) {
                    parent(h) = x;
                } else if (gg == left(parent(gg))) {
                    left(parent(gg)) = x;
                } else {
                    right(parent(gg)) = x;
                }
                left(x) = gg;
                parent(gg) = x;
            }
        }
    }

    color(parent(lift_field<void*>(self, 0x04))) = kBlack;

    lift_field<void*>(out, 0x00) = self;
    lift_field<void*>(out, 0x04) = node;
    return out;
}
} // namespace lift_00473C70

// [0x004786B0]
namespace lift_004786B0 {
extern bool __thiscall ext_00476860(void* comp, uint32_t a, uint32_t b);
extern void __cdecl ext_00609850(uint32_t* first, uint32_t* mid, uint32_t* last, int a, int b);

// @name InsertionSortWithComparator
// @summary Insertion sort of a dword range [first,last) using a by-value comparator object; shifts via rotate helper.
extern void __cdecl fn_004786B0(uint32_t* first, uint32_t* last, uint32_t comp)
{
    if (first == last) return;
    for (uint32_t* i = first + 1; i != last; ++i) {
        uint32_t* next = i + 1;
        if (ext_00476860(&comp, *i, *first)) {
            if (first != i && i != next)
                ext_00609850(first, i, next, 0, 0);
            continue;
        }
        uint32_t* edi = i - 1;
        if (!ext_00476860(&comp, *i, *edi)) continue;
        uint32_t* hole;
        do {
            hole = edi;
            --edi;
        } while (ext_00476860(&comp, *i, *edi));
        if (hole != i && i != next)
            ext_00609850(hole, i, next, 0, 0);
    }
}
} // namespace lift_004786B0
