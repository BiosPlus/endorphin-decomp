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
