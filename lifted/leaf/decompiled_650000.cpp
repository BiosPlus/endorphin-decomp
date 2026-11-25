// Lifted C++ translation unit: lifted/leaf/decompiled_650000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_005136C0 {
// @name sub_005136C0
// @summary Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).
namespace lift_00500310 {
// Callee 0x004FFD60: sub_004FFD60 (35B). Called with ECX passed through as `this`, two stack args, DWORD result in EAX.
extern DWORD ext_00511E40(void* self, DWORD a, DWORD b);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name DwordPairInitFromCall_00500310
// @summary Calls ext_004FFD60 with the incoming this and second argument, then initialises the pair object (first argument) with that result and the second argument via initDwordPair; returns the pair object.
void* fn_005136C0(void* self, void* pair, DWORD b) {
    const DWORD value = ext_00511E40(self, b, 0);
    ext_0055DA20(pair, value, b);
    return pair;
}
} // namespace lift_00500310
} // namespace lift_005136C0
#include <cstring>
#include <cstdint>

// [0x005142F0] sub_005142F0 (35 bytes)
namespace lift_005142F0 {
// Known callee 0x005136C0: sub_005136C0 (Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).)
extern void* ext_005136C0(void* self, void* pair, DWORD b);

// @name WrapPairInit_005142F0
// @summary Forwards (self, pair) to ext_005136C0 with a zero DWORD and returns self.
void* fn_005142F0(void* self, void* pair) {
    // Stack-level detail: the 0 store in the disassembly lands in the saved-ECX slot,
    // so the third argument read by the callee is not literally 0 at the ABI level.
    // Lifted as the evident intent (b = 0); verify against the callee before relying on it.
    ext_005136C0(self, pair, 0);
    return self;
}
} // namespace lift_005142F0

// [0x00519C80] sub_00519C80 (42 bytes)
namespace lift_00519C80 {
// MSVC std::basic_string<char>::basic_string(const char*) (thiscall), imported via IAT slot mem_00924FE4.
extern void ext_00629122(void* self, const char* s);
// Literal passed to the string constructor (.rdata).
extern const char mem_00928B5D[];

// @name initStringAndCounters
// @summary Constructs a vtable-tagged object holding a std::string built from a literal, then zeroes two counters and sets a flag to 1; returns this.
// @field +0x00 uint32_t vtable (0x0095219C)
// @field +0x04 std::string name (basic_string subobject, constructed from literal)
// @field +0x20 int32_t field_0x20 (set to 1)
// @field +0x24 int32_t field_0x24 (set to 0)
// @field +0x28 int32_t field_0x28 (set to 0)
void* fn_00519C80(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0095219C;
    ext_00629122(reinterpret_cast<uint8_t*>(self) + 0x04, mem_00928B5D);
    lift_field<int32_t>(self, 0x24) = 0;
    lift_field<int32_t>(self, 0x28) = 0;
    lift_field<int32_t>(self, 0x20) = 1;
    return self;
}
} // namespace lift_00519C80

// [0x0051E7D0] sub_0051E7D0 (41 bytes)
namespace lift_0051E7D0 {
// @name sub_0051E7D0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00500430(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0051E7D0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00500430(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0051E7D0

// [0x00519CB0] sub_00519CB0 (44 bytes)
namespace lift_00519CB0 {
// Import thunk reached via indirect call through IAT slot 0x00924FE0
// (its .rdata value is 0x0062916E). Annotated as the MSVCP80
// basic_string copy constructor: basic_string(const basic_string&).
extern void ext_0062916E(void* self, const void* src);

static inline void store_u32(unsigned char* base, std::size_t off, std::uint32_t v) {
    std::memcpy(base + off, &v, sizeof v);
}

// @name ctorFromStdString
// @class Unknown (vtable 0x0095219C)
// @summary Constructor: writes vtable 0x0095219C, copy-constructs a std::string at +0x04 from the argument, sets +0x20 = 1, zeroes +0x24 and +0x28, returns this.
// @field Unknown +0x00 const void* vptr
// @field Unknown +0x04 MSVCP80_basic_string field_0x04
// @field Unknown +0x20 std::uint32_t field_0x20
// @field Unknown +0x24 std::uint32_t field_0x24
// @field Unknown +0x28 std::uint32_t field_0x28
void* fn_00519CB0(void* self, const void* name) {
    auto* obj = static_cast<unsigned char*>(self);
    store_u32(obj, 0x00, 0x0095219Cu);
    ext_0062916E(obj + 0x04, name);
    store_u32(obj, 0x24, 0u);
    store_u32(obj, 0x28, 0u);
    store_u32(obj, 0x20, 1u);
    return self;
}
} // namespace lift_00519CB0

// [0x00519D10]
namespace lift_00519D10 {
// @name checkStringMatchIndex
// @summary Returns 0 if the string matches the first global string, 1 if it matches the second, or 0 otherwise.

extern uint32_t mem_00924FC4;
extern uint8_t mem_00AECC0C[];
extern uint8_t mem_00AECC28[];

using StringEqFn = uint8_t(__cdecl*)(const void*, const void*);

uint32_t __cdecl sub_00519D10(const void* str) {
    auto eq = reinterpret_cast<StringEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    if (eq(str, mem_00AECC0C) != 0) {
        return 0;
    }
    return eq(str, mem_00AECC28) != 0 ? 1u : 0u;
}
} // namespace lift_00519D10

// [0x0051AF30] sub_0051AF30 (54 bytes)
namespace lift_0051AF30 {
extern void ext_0051AA60(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t self, uint32_t a3Copy, uint32_t flagArg);

// @name ComputeStride20Address
// @summary Forwards three stack args plus self to ext_0051AA60, then returns a1 + 20 * a2 (a 20-byte-stride element address).
// (no direct field accesses on self: ecx is only forwarded to the callee, so no @field lines)
uint32_t fn_0051AF30(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3) {
    // The original stores a bool local into a stack slot that still holds the
    // pushed ecx; only the low byte is overwritten, so the pushed dword is
    // self with its low byte cleared.
    const uint32_t flagArg = self & 0xFFFFFF00u;

    ext_0051AA60(a1, a2, a3, self, a3, flagArg);

    // lea ecx,[esi+4*esi] => 5*a2 ; lea eax,[edi+4*ecx] => a1 + 20*a2
    return a1 + 20u * a2;
}
} // namespace lift_0051AF30

// [0x0051AEF0] sub_0051AEF0 (57 bytes)
namespace lift_0051AEF0 {
// Known callee 0x0051AD40: sub_0051AD40 (thiscall taking one float argument; signature inferred from the call site, 127 bytes).
extern void ext_0051AD40(void* self, float value);

// Global data referenced by this function.
// mem_00AECC08: pointer to a fallback object used when self->+0x24 is null.
extern void* mem_00AECC08;
// mem_00AECC04: address of a static object passed as the vtable-call argument in the fallback path.
extern uint8_t mem_00AECC04[];

// Calls vtable slot 1 (byte offset +4) on obj, passing arg; returns the float result.
static float call_vslot1_float(void* obj, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<float (*)(void*, void*)>(vtbl[1]);
    return fn(obj, arg);
}

// @name GetFloatFromSubobjectAndForward_0051AEF0
// @summary Queries a float from the object at self->+0x24 (or a global fallback object) via vtable slot 1, then forwards that float to sub_0051AD40 on self.
// @field Unknown +0x24 void* subobject
// @field Subobject +0x04 void* object
void fn_0051AEF0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* sub = lift_field<void*>(base, 0x24);

    float value;
    if (sub != nullptr) {
        void* obj = lift_field<void*>(sub, 0x04);
        value = call_vslot1_float(obj, sub);
    } else {
        void* obj = mem_00AECC08;
        value = call_vslot1_float(obj, static_cast<void*>(mem_00AECC04));
    }

    ext_0051AD40(self, value);
}
} // namespace lift_0051AEF0

// [0x00519C00] sub_00519C00 (57 bytes)
namespace lift_00519C00 {
// std::operator==(const std::string&, const char*) resolved via import slot.
extern bool (*mem_00924FC0)(const void* str, const char* s);
// Table of three const char* entries.
extern const char* const mem_00A430F4[3];

// @name StringFindInTable3_00519C00
// @summary Compares a std::string against the 3 C-string table entries; returns the matching index (0..2), or 1 if none match.
extern int __cdecl fn_00519C00(const void* str) {
    for (int i = 0; i < 3; ++i) {
        if (mem_00924FC0(str, mem_00A430F4[i])) {
            return i;
        }
    }
    return 1;
}
} // namespace lift_00519C00

// [0x00519C40] sub_00519C40 (57 bytes)
namespace lift_00519C40 {
extern int mem_00924FC0;  // MSVCP80 operator==(const std::string&, const char*) IAT slot
extern int mem_00AECC44;  // .data table of two const char* keys (2 x uint32_t)

// @name MatchStringAgainstKeyTable
// @summary Compares a std::string argument against the two key strings in the table at mem_00AECC44 and returns the index of the first match (0 or 1), or 3 if neither matches.
namespace lift_00519C40 {
// Original behavior (cdecl; caller cleans up the two pushed args):
//   for i in 0..1:
//       if (operator==(*str, table[i])) return i;
//   return 3;
extern uint32_t __cdecl fn_00519C40(void* str) {
    using StringEqualsCStrFn = bool (__cdecl*)(const void* lhs, const char* rhs);
    auto string_equals = reinterpret_cast<StringEqualsCStrFn>(static_cast<uintptr_t>(mem_00924FC0));
    const uint32_t* keys = reinterpret_cast<const uint32_t*>(&mem_00AECC44);

    for (uint32_t i = 0; i < 2; ++i) {
        const char* key = reinterpret_cast<const char*>(static_cast<uintptr_t>(keys[i]));
        if (string_equals(str, key)) {
            return i;
        }
    }
    return 3;
}
} // namespace lift_00519C40
} // namespace lift_00519C40

// [0x0051AE90] sub_0051AE90 (57 bytes)
namespace lift_0051AE90 {
// @name sub_0051AE90
// @summary Auto-lifted identical-shape clone of 0x0051AEF0 (GetFloatFromSubobjectAndForward_0051AEF0).
namespace lift_0051AEF0 {
// Known callee 0x0051AD40: sub_0051AD40 (thiscall taking one float argument; signature inferred from the call site, 127 bytes).
extern void ext_0051AC30(void* self, float value);

// Global data referenced by this function.
// mem_00AECC08: pointer to a fallback object used when self->+0x24 is null.
extern void* mem_00AECC08;
// mem_00AECC04: address of a static object passed as the vtable-call argument in the fallback path.
extern uint8_t mem_00AECC04[];

// Calls vtable slot 1 (byte offset +4) on obj, passing arg; returns the float result.
static float call_vslot1_float(void* obj, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<float (*)(void*, void*)>(vtbl[1]);
    return fn(obj, arg);
}

// @name GetFloatFromSubobjectAndForward_0051AEF0
// @summary Queries a float from the object at self->+0x24 (or a global fallback object) via vtable slot 1, then forwards that float to sub_0051AD40 on self.
// @field Unknown +0x24 void* subobject
// @field Subobject +0x04 void* object
void fn_0051AE90(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* sub = lift_field<void*>(base, 0x24);

    float value;
    if (sub != nullptr) {
        void* obj = lift_field<void*>(sub, 0x04);
        value = call_vslot1_float(obj, sub);
    } else {
        void* obj = mem_00AECC08;
        value = call_vslot1_float(obj, static_cast<void*>(mem_00AECC04));
    }

    ext_0051AC30(self, value);
}
} // namespace lift_0051AEF0
} // namespace lift_0051AE90

// [0x00516EB0] sub_00516EB0 (59 bytes)
namespace lift_00516EB0 {
// Known callee (IAT slot 0x925134): MSVCR80!_invalid_parameter_noinfo, reached on null table or out-of-range index.
extern void ext_00925134();
// Global pointer to the table object (value of dword at 0x00AEC0A4).
extern uint32_t mem_00AEC0A4;

// @name GetTableEntryByIndex
// @class GlobalIndexTable
// @summary Returns the pointer stored at index self->+0x34 of the global table's buffer (begin at +0x14, end at +0x18); returns 0 if the global is null. Stdcall, 1 arg, ret 4.
// @field GlobalIndexTable +0x14 uint32_t begin
// @field GlobalIndexTable +0x18 uint32_t end
// @field Arg +0x34 uint32_t index
uint32_t __stdcall fn_00516EB0(void* self) {
    const uint32_t table = mem_00AEC0A4;
    if (table == 0) {
        return 0;
    }

    const uint32_t index = lift_field<uint32_t>(self, 0x34);
    const uint32_t begin = lift_field<uint32_t>(reinterpret_cast<void*>(table), 0x14);

    if (begin == 0) {
        ext_00925134();
    } else {
        const uint32_t end = lift_field<uint32_t>(reinterpret_cast<void*>(table), 0x18);
        const uint32_t count = (end - begin) >> 2;
        if (index >= count) {
            ext_00925134();
        }
    }

    const uint32_t buffer = lift_field<uint32_t>(reinterpret_cast<void*>(table), 0x14);
    return lift_field<uint32_t>(reinterpret_cast<void*>(buffer), static_cast<ptrdiff_t>(index) * 4);
}
} // namespace lift_00516EB0

// [0x00519E10] sub_00519E10 (61 bytes)
namespace lift_00519E10 {
// @name FillRange5f
// @summary Copies a 5-float source block into every 20-byte element in [begin, end).
void fn_00519E10(float* begin, float* end, const float* src) {
    if (begin == end) {
        return;
    }
    float* p = begin;
    do {
        p[0] = src[0];
        p[1] = src[1];
        p[2] = src[2];
        p[3] = src[3];
        p[4] = src[4];
        p += 5;  // 20-byte stride
    } while (p != end);
}
} // namespace lift_00519E10

// [0x00519170] sub_00519170 (71 bytes)
namespace lift_00519170 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
// Known callee 0x0050F990: sub_0050F990 (Stores address of mem_00950A74 into field at offset +0x0.)
extern void __fastcall ext_0050F990(void* self);

// Vtable for the class, placed at 0x00950A9C.
extern const unsigned char mem_00950A9C[];

// @name SelectionMethodSteadyStateGrid::ResetAndRelease
// @class SelectionMethodSteadyStateGrid
// @summary Installs the class vtable, releases the non-null handles at +0x64 and +0x34 via ext_006A5C5C, zeroes those fields, then tail-calls ext_0050F990.
// @field SelectionMethodSteadyStateGrid +0x00 const void* vptr
// @field SelectionMethodSteadyStateGrid +0x34 uint32_t field_0x34
// @field SelectionMethodSteadyStateGrid +0x38 uint32_t field_0x38
// @field SelectionMethodSteadyStateGrid +0x3c uint32_t field_0x3c
// @field SelectionMethodSteadyStateGrid +0x64 uint32_t field_0x64
// @field SelectionMethodSteadyStateGrid +0x68 uint32_t field_0x68
// @field SelectionMethodSteadyStateGrid +0x6c uint32_t field_0x6c
void fn_00519170(void* self) {
    lift_field<const void*>(self, 0x00) = reinterpret_cast<const void*>(mem_00950A9C);

    void* p64 = lift_field<void*>(self, 0x64);
    if (p64 != nullptr) {
        ext_006A5C5C(p64);
    }
    lift_field<uint32_t>(self, 0x64) = 0;
    lift_field<uint32_t>(self, 0x68) = 0;
    lift_field<uint32_t>(self, 0x6c) = 0;

    void* p34 = lift_field<void*>(self, 0x34);
    if (p34 != nullptr) {
        ext_006A5C5C(p34);
    }
    lift_field<uint32_t>(self, 0x34) = 0;
    lift_field<uint32_t>(self, 0x38) = 0;
    lift_field<uint32_t>(self, 0x3c) = 0;

    ext_0050F990(self);
}
} // namespace lift_00519170

// [0x0051A000] sub_0051A000 (71 bytes)
namespace lift_0051A000 {
// Global holding a pointer to a default object (used when this->+0x24 is null).
extern void* mem_00AECC08;
// Global object whose address is passed as the argument in the null-node path.
extern uint8_t mem_00AECC04;

// Virtual slot signatures, invoked through the object's vtable.
typedef float (*VirtGetFloat_fn)(void* self, void* arg);  // vtable slot 1
typedef void (*VirtApply_fn)(void* self, float a, float b);  // vtable slot 5

// @name Unknown::ApplyFloatFromNodeOrDefault
// @class Unknown
// @summary Gets a float from a node's object (or a default global object) via vtable slot 1, then passes it with the input float to vtable slot 5 of self.
// @field Unknown +0x24 void* field_0x24
void fn_0051A000(void* self, float param) {
    void* node = lift_field<void*>(self, 0x24);

    void* obj;
    void* arg;
    if (node != nullptr) {
        // node->+0x04 holds the object whose slot 1 is queried; the node itself is the argument.
        obj = lift_field<void*>(node, 0x04);
        arg = node;
    } else {
        obj = mem_00AECC08;
        arg = &mem_00AECC04;
    }

    void** objVtbl = *static_cast<void***>(obj);
    float value = reinterpret_cast<VirtGetFloat_fn>(objVtbl[1])(obj, arg);

    void** selfVtbl = *static_cast<void***>(self);
    reinterpret_cast<VirtApply_fn>(selfVtbl[5])(self, value, param);
}
} // namespace lift_0051A000

// [0x0051C5A0] sub_0051C5A0 (71 bytes)
namespace lift_0051C5A0 {
// Known callee 0x00519C80: sub_005136C0 (Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).)
extern void ext_00519C80();

// @name InitBaseThenZeroTail_0051C5A0
// @summary Runs base-class init on self, stamps the vtable word at +0x00, zeroes five DWORDs at +0x30..+0x40, and returns self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x30 DWORD field_0x30
// @field Unknown +0x34 DWORD field_0x34
// @field Unknown +0x38 DWORD field_0x38
// @field Unknown +0x3C DWORD field_0x3C
// @field Unknown +0x40 DWORD field_0x40
void* fn_0051C5A0(void* self) {
    // Original runs the SEH frame setup/teardown and calls the base init with
    // ecx = self (thiscall). A portable C++ build cannot pass ecx, so the base
    // init is invoked through the stub; see notes on the callee.
    ext_00519C80();

    lift_field<DWORD>(self, 0x00) = 0x00952574u;
    lift_field<DWORD>(self, 0x30) = 0u;
    lift_field<DWORD>(self, 0x34) = 0u;
    lift_field<DWORD>(self, 0x38) = 0u;
    lift_field<DWORD>(self, 0x3C) = 0u;
    lift_field<DWORD>(self, 0x40) = 0u;

    return self;
}
} // namespace lift_0051C5A0

// [0x00510830] sub_00510830 (73 bytes)
namespace lift_00510830 {
// Known callee 0x004C72D0: CopyRangeBackward_004C72D0 (Copies [first,last) of 0x20-byte elements backward so they end at d_last; returns the new begin of the destination range (d_last - count), or d_last when the range is empty.)
extern uint8_t* __cdecl ext_004C72D0(uint8_t* first, uint8_t* last, uint8_t* d_last);

// @name CopyRangeBackwardAndComputeDestBegin
// @summary Calls ext_004C72D0 to copy [first,last) backward ending at d_last, then returns d_last minus the byte span of [first,last) rounded down to a multiple of 0x20.
void* fn_00510830(uint8_t* first, uint8_t* last, uint8_t* d_last) {
    (void)ext_004C72D0(first, last, d_last);

    // Byte span of the source range, truncated to 32-bit like the original code.
    int32_t span = static_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last)) -
                                        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first)));
    span = (span >> 5) * 32;  // arithmetic shift, then back to 0x20-element granularity

    uint32_t dst = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(d_last)) - static_cast<uint32_t>(span);
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(dst));
}
} // namespace lift_00510830

// [0x0051E560] sub_0051E560 (76 bytes)
namespace lift_0051E560 {
// @name sub_0051E560
// @summary Auto-lifted identical-shape clone of 0x00505DC0 (Unknown::DestroyElementsAndReset_00505DC0).
namespace lift_00505DC0 {
extern void ext_006A5C5C(void* ptr);

// @name Unknown::DestroyElementsAndReset_00505DC0
// @class Unknown
// @summary Destroys each 0x28-byte element in the vector at this+0x4..this+0x8 via its vtable slot 0 (deleting flag 0), frees the storage, and clears begin/end/capacity.
// @field Unknown +0x04 void* m_begin
// @field Unknown +0x08 void* m_end
// @field Unknown +0x0C void* m_capacity
void fn_0051E560(void* self) {
    void* begin = lift_field<void*>(self, 0x4);
    if (begin != nullptr) {
        void* end = lift_field<void*>(self, 0x8);
        for (uint8_t* p = static_cast<uint8_t*>(begin); p != static_cast<uint8_t*>(end); p += 0x168) {
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
} // namespace lift_0051E560

// [0x00510880] sub_00510880 (74 bytes)
namespace lift_00510880 {
// @name sub_00510880
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_0050FD30(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_00510880(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_0050FD30(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_00510880

// [0x005108D0] sub_005108D0 (74 bytes)
namespace lift_005108D0 {
// @name sub_005108D0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_0050FE00(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_005108D0(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_0050FE00(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_005108D0

// [0x00519060] sub_00519060 (74 bytes)
namespace lift_00519060 {
// @name sub_00519060
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_00518A00(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_00519060(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00518A00(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_00519060

// [0x005190B0] sub_005190B0 (74 bytes)
namespace lift_005190B0 {
// @name sub_005190B0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_00518A80(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_005190B0(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00518A80(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_005190B0

// [0x00518030] sub_00518030 (74 bytes)
namespace lift_00518030 {
// Known callee 0x0050F970: InitZeroedStateWithVTable (Sets the vtable pointer to 0x00950A74 and zeroes the double, dword, and byte state fields.)
extern void ext_0050F970(void* self);
extern const double mem_0092C508;

// @name InitVTableAndState_00518030
// @class <ClassName> (optional)
// @summary Runs the base state initializer, installs the 0x009520C4 vtable, zeroes three dword fields, sets a double field to 0.1, and returns self.
// @field <ClassName> +0x00 void* vtable
// @field <ClassName> +0x30 double field_0x30
// @field <ClassName> +0x3C DWORD field_0x3C
// @field <ClassName> +0x40 DWORD field_0x40
// @field <ClassName> +0x44 DWORD field_0x44
void* fn_00518030(void* self) {
    ext_0050F970(self);

    auto* base = static_cast<std::byte*>(self);
    *reinterpret_cast<std::uint32_t*>(base + 0x00) = 0x009520C4u;
    *reinterpret_cast<double*>(base + 0x30) = mem_0092C508;
    *reinterpret_cast<std::uint32_t*>(base + 0x3C) = 0u;
    *reinterpret_cast<std::uint32_t*>(base + 0x40) = 0u;
    *reinterpret_cast<std::uint32_t*>(base + 0x44) = 0u;

    return self;
}
} // namespace lift_00518030

// [0x0051AE60] sub_0051AE60 (43 bytes)
namespace lift_0051AE60 {
// @name sub_0051AE60
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0051A6D0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0051AE60(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0051A6D0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0051AE60

// [0x00518080] sub_00518080 (76 bytes)
namespace lift_00518080 {
// Known callee 0x0050F970: InitZeroedStateWithVTable (Sets the vtable pointer to 0x00950A74 and zeroes the double, dword, and byte state fields.)
extern void ext_0050F970(void* self);
extern double mem_0092C508;

// @name Unknown::InitStateWithDefaults_00518080
// @class Unknown
// @summary Initializes the object via the base initializer, sets its vtable to 0x009520C4, stores 0.1 at +0x30 and zeroes the three dwords at +0x3C..+0x44; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 double field_0x30
// @field Unknown +0x3C uint32_t field_0x3C
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x44 uint32_t field_0x44
void* fn_00518080(void* self) {
    ext_0050F970(self);

    const double value = mem_0092C508;
    lift_field<uint32_t>(self, 0x00) = 0x009520C4u;
    lift_field<uint32_t>(self, 0x3C) = 0u;
    lift_field<uint32_t>(self, 0x40) = 0u;
    lift_field<uint32_t>(self, 0x44) = 0u;
    lift_field<double>(self, 0x30) = value;

    return self;
}
} // namespace lift_00518080

// [0x00517360] sub_00517360 (76 bytes)
namespace lift_00517360 {
// @name Unknown::CallVirtual6CForEachPtr_00517360
// @class Unknown
// @summary Walks the pointer array stored at self+0x14..+0x18 and invokes virtual slot 0x6C/4 (thiscall, no args) on each element.
// @field Unknown +0x14 void** field_0x14
// @field Unknown +0x18 void** field_0x18
void fn_00517360(void* self) {
    // Range-style loop over the element array. The original invalid-parameter
    // checks (calls through the MSVCR80 handler) are bounds assertions only
    // and are omitted here.
    using VirtualVoidFn = void(__thiscall*)(void*);

    void** it = lift_field<void**>(self, 0x14);
    void** const end = lift_field<void**>(self, 0x18);

    while (it != end) {
        void* obj = *it;
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<VirtualVoidFn>(vtable[0x6C / 4]);
        fn(obj);
        ++it;
    }
}
} // namespace lift_00517360
