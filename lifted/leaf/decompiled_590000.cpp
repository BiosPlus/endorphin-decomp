// Lifted C++ translation unit: lifted/leaf/decompiled_590000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00675650(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00594790(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00675650(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
#include <cstdint>

// [0x0059E060] sub_0059E060 (31 bytes)
namespace lift_0059E060 {
// Callee 0x006AD940 (sub_006AD940): thiscall, takes the object in ECX, returns a pointer-sized value in EAX.
extern uint32_t __thiscall ext_006AD940(void* self);
// Known callee 0x00492550: IsStateOneWithNonZeroField8 (Returns 1 if the dword at self+0x00 equals 1 and the dword at self+0x08 is nonzero, else 0.)
extern int __thiscall ext_00492550(void* self);

// @name IsResolvedChildStateOneWithNonZeroField8
// @summary Returns 0 if the dword at +0x5F8 is null; otherwise resolves the object at +0x26C of that pointer via ext_006AD940 and tail-returns IsStateOneWithNonZeroField8 on the result.
// @field Self +0x5F8 uint32_t field_0x5F8
// @field ChildObject +0x26C uint32_t field_0x26C
int __thiscall fn_0059E060(void* self) {
    const uint32_t child = lift_field<uint32_t>(self, 0x5F8);
    if (child == 0) {
        return 0;
    }

    void* child_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    const uint32_t arg = lift_field<uint32_t>(child_obj, 0x26C);
    const uint32_t resolved = ext_006AD940(reinterpret_cast<void*>(static_cast<uintptr_t>(arg)));

    return ext_00492550(reinterpret_cast<void*>(static_cast<uintptr_t>(resolved)));
}
} // namespace lift_0059E060

// [0x00599E70] sub_00599E70 (42 bytes)
namespace lift_00599E70 {
// Callee: MSVCR80!_invalid_parameter_noinfo, reached via an indirect call through
// the IAT slot at 0x00925134. Takes no arguments; caller does not clean up.
extern void ext_invalid_parameter_noinfo(void);

// @name GetNestedDwordAt38C
// @summary Follows self->+0x26C -> P; returns 0 if P->+0x20 is zero. Otherwise walks P->+0x1C -> Q -> R (Q->+0x00), and returns R->+0x28 -> S's dword at +0x38C.
// @field Self +0x26C uint32_t field_0x26C
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x38C uint32_t field_0x38C
uint32_t __thiscall fn_00599E70(void* self) {
    const uint32_t p = lift_field<uint32_t>(self, 0x26C);
    void* p_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(p));

    if (lift_field<uint32_t>(p_obj, 0x20) == 0) {
        return 0;
    }

    const uint32_t q = lift_field<uint32_t>(p_obj, 0x1C);
    void* q_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(q));
    const uint32_t r = lift_field<uint32_t>(q_obj, 0x00);

    if (r == q) {
        ext_invalid_parameter_noinfo();
    }

    void* r_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(r));
    const uint32_t s = lift_field<uint32_t>(r_obj, 0x28);
    void* s_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(s));

    return lift_field<uint32_t>(s_obj, 0x38C);
}
} // namespace lift_00599E70

// [0x00599C10] sub_00599C10 (41 bytes)
namespace lift_00599C10 {
// @name sub_00599C10
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_004148F0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00599C10(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_004148F0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00599C10

// [0x00596A30] sub_00596A30 (51 bytes)
namespace lift_00596A30 {
// Callback type: the original calls through a register-passed (ECX) single-argument
// function pointer; the result is ignored. Modelled here as a plain one-argument callable.
using OffsetCallback = void (*)(uint32_t value);

// @name CallForEachOffsetPlusBase
// @summary For each DWORD in [begin, end), calls cb(*entry + base); then writes (cb, base) to out[0], out[1].
void fn_00596A30(uint32_t* out,
                 uint32_t /*stack slot +0x08, unused*/,
                 const uint32_t* begin,
                 uint32_t /*stack slot +0x10, unused*/,
                 const uint32_t* end,
                 OffsetCallback cb,
                 uint32_t base) {
    for (const uint32_t* p = begin; p != end; ++p) {
        cb(*p + base);
    }
    out[0] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(cb));
    out[1] = base;
}
} // namespace lift_00596A30

// [0x00595C50] sub_00595C50 (55 bytes)
namespace lift_00595C50 {
// @name sub_00595C50
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_00595C50() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x34);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x30) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x31) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_00595C50

// [0x0059DC60]
namespace lift_0059DC60 {
extern uint32_t __fastcall ext_00661A90(void* self, uint32_t arg);

// @name SetResultFromSubobjectCall
// @summary Calls ext_00661A90 with the stack argument as self and (this+0x158) as its argument (0 when this is null), then stores the result at this+0x61C.
// @field Self +0x158 BYTE field_0x158 (address taken only, passed to ext_00661A90; not dereferenced here)
// @field Self +0x61C uint32_t result (written with the return value of ext_00661A90)
extern void __fastcall fn_0059DC60(void* self, uint32_t arg0) {
    // Null-this path: callee receives 0 as its second argument and the store
    // goes to absolute address 0x61C, exactly as the original code does.
    uint32_t subobjectAddr = 0;
    if (self != nullptr) {
        subobjectAddr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)) + 0x158u;
    }

    void* first = reinterpret_cast<void*>(static_cast<uintptr_t>(arg0));
    uint32_t r = ext_00661A90(first, subobjectAddr);

    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x61Cu) = r;
}
} // namespace lift_0059DC60

// [0x00596330]
namespace lift_00596330 {
// @name getGlobalListHeadPrevCount
// @summary Validates a checked iterator in global object +0x8 and returns node+0x8 decremented by 1 if non-zero.

extern uint32_t mem_00B40640;
extern uint32_t mem_00925134;

uint32_t sub_00596330() {
    uint8_t* iter = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(mem_00B40640)) + 8;
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    uint32_t container_addr = *reinterpret_cast<uint32_t*>(iter);
    if (container_addr == 0) {
        invalid_param();
        container_addr = *reinterpret_cast<uint32_t*>(iter);
    }

    uint32_t node_addr = *reinterpret_cast<uint32_t*>(iter + 4);
    uint32_t head_addr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(container_addr) + 4);
    if (node_addr == head_addr) {
        invalid_param();
        node_addr = *reinterpret_cast<uint32_t*>(iter + 4);
    }

    uint32_t val = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(node_addr) + 8);
    if (val == 0) {
        return 0;
    }
    return val - 1;
}
} // namespace lift_00596330

// [0x00596370]
namespace lift_00596370 {
// @name getGlobalListFrontMinusOne
// @summary Validates a global list iterator at [0xB40644]+8 and returns its node value minus one (or 0 if zero)


extern uint32_t mem_00B40644;
extern uint32_t mem_00925134;

uint32_t sub_00596370() {
    auto esi = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00B40644) + 8);
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    if (esi[0] == 0) {
        invalid_param();
    }

    const auto* proxy = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(esi[0]));
    if (esi[1] == proxy[1]) {
        invalid_param();
    }

    const auto* current_node = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(esi[1]));
    uint32_t val = current_node[2];
    if (val != 0) {
        return val - 1;
    }
    return 0;
}
} // namespace lift_00596370

// [0x0059FE40] sub_0059FE40 (59 bytes)
namespace lift_0059FE40 {
extern void ext_0059F310(void* base, int32_t index, int32_t count, uint32_t value);

// @name makeHeapU32Range
// @summary Heapify a uint32 range [first, last): for each index from count/2 down to 1, call ext_0059F310 (sift-down) with that element as the value.
// @field none (function accesses only the argument array; no struct offsets)
void fn_0059FE40(uint32_t* first, const uint32_t* last) {
    // Element count, rounded toward zero when halving (matches cdq/sub/sar sequence).
    int32_t count = static_cast<int32_t>(last - first);
    int32_t half = (count < 0 ? count + 1 : count) >> 1;

    while (half > 0) {
        uint32_t value = first[half - 1];
        --half;
        ext_0059F310(first, half, count, value);
    }
}
} // namespace lift_0059FE40

// [0x005991D0]
namespace lift_005991D0 {
// @name Unknown::EraseAtAndWritePair
// @class Unknown
// @summary Erases the 8-byte slot at pos by shifting later slots down, decrements end by 8, and writes (a2, pos) to out.
// @field Unknown +0x08 DWORD end
void* fn_005991D0(void* self, void* out, DWORD a2, DWORD pos) {
    DWORD end = lift_field<DWORD>(self, 0x8);
    DWORD src = pos + 8;
    if (src != end) {
        auto* dst = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(pos));
        const auto* from = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(src));
        std::memmove(dst, from, static_cast<size_t>(end - src));
    }
    lift_field<DWORD>(self, 0x8) -= 8;
    lift_field<DWORD>(out, 0x0) = a2;
    lift_field<DWORD>(out, 0x4) = pos;
    return out;
}
} // namespace lift_005991D0

// [0x0059D660] sub_0059D660 (63 bytes)
namespace lift_0059D660 {
// @name Unknown::ForwardUnlessIgnoredId
// @class Unknown
// @summary Returns the id unchanged if it is one of five ignored ids; otherwise tail-forwards it to vtable entry +0x54 of the object at self+0x160.
// @field Unknown +0x160 void* subobject
uint32_t fn_0059D660(void* self, uint32_t id) {
    constexpr uint32_t kIgnoredIds[] = {
        0x00B53A34, 0x00B53B30, 0x00B53AB0, 0x00B53A70, 0x00B53AF0,
    };
    for (uint32_t ignored : kIgnoredIds) {
        if (id == ignored) {
            return id;
        }
    }

    using ForwardFn = uint32_t (*)(void* thisPtr, uint32_t value);

    auto* base = static_cast<uint8_t*>(self);
    void* object = base + 0x160;
    // The object's first dword is its vtable pointer; +0x54 is the byte offset of the slot.
    auto* vtable = *reinterpret_cast<uint8_t**>(object);
    auto target = *reinterpret_cast<ForwardFn*>(vtable + 0x54);
    return target(object, id);
}
} // namespace lift_0059D660

// [0x0059B290] sub_0059B290 (70 bytes)
namespace lift_0059B290 {
// @name sub_0059B290
// @summary Auto-lifted identical-shape clone of 0x004205B0 (TreeMap::lowerBound).
namespace lift_004205B0 {
// MSVCP80 std::operator<(const std::string&, const std::string&), imported via IAT slot mem_00924EF4.
extern bool ext_std_string_less(const void* lhs, const void* rhs);

// @name TreeMap::lowerBound
// @class TreeMap
// @summary Lower-bound search in an MSVC-style std::map tree: returns first node whose key is not less than the argument, or the header node if none.
// @field TreeMap +0x04 void* head
// Node layout used (MSVC _Tree node): +0x00 left, +0x04 parent, +0x08 right, +0x0C key (std::string), +0x59 isNil flag.
void* fn_0059B290(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x04);
    void* node = lift_field<void*>(head, 0x04);   // root
    void* result = head;

    if (lift_field<uint8_t>(node, 0x31) != 0) {
        return head;
    }

    while (lift_field<uint8_t>(node, 0x31) == 0) {
        const void* nodeKey = reinterpret_cast<const uint8_t*>(node) + 0x0C;
        if (ext_std_string_less(nodeKey, key)) {
            node = lift_field<void*>(node, 0x08);     // go right
        } else {
            result = node;                            // candidate
            node = lift_field<void*>(node, 0x00);     // go left
        }
    }
    return result;
}
} // namespace lift_004205B0
} // namespace lift_0059B290

// [0x0059B120] sub_0059B120 (73 bytes)
namespace lift_0059B120 {
// @name sub_0059B120
// @summary Auto-lifted identical-shape clone of 0x004A73F0 (Unknown::FindNodeByStringKey).
namespace lift_004A73F0 {
extern int mem_00924EF4;

// @name Unknown::FindNodeByStringKey
// @class Unknown
// @summary Walks a binary search tree (head sentinel at holder->field_0x04) comparing each node's string key at +0x0C against the argument; returns the last left-branch node visited (or the holder when the tree is empty).
// @field Unknown +0x04 uint32_t field_0x04
// @field UnknownHolder +0x04 uint32_t field_0x04
// @field UnknownNode +0x00 uint32_t field_0x00
// @field UnknownNode +0x08 uint32_t field_0x08
// @field UnknownNode +0x0C uint8_t field_0x0C
// @field UnknownNode +0xAD uint8_t field_0xAD

namespace {

// Pointer-sized address in the 32-bit image space.
inline uint8_t* at(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

// std::string equality routine, resolved through the import slot at 0x00924EF4.
using StringEqFn = bool (*)(const void* lhs, const void* rhs);

inline bool isSentinel(uint32_t node) {
    return lift_field<uint8_t>(at(node), 0xB9) != 0;
}

}  // namespace

void* fn_0059B120(void* self, const void* key) {
    uint32_t holder = lift_field<uint32_t>(self, 0x04);
    uint32_t node = lift_field<uint32_t>(at(holder), 0x04);

    if (isSentinel(node)) {
        return at(holder);
    }

    auto eq = reinterpret_cast<StringEqFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));

    do {
        if (eq(at(node) + 0x0C, key)) {
            node = lift_field<uint32_t>(at(node), 0x08);
        } else {
            holder = node;
            node = lift_field<uint32_t>(at(node), 0x00);
        }
    } while (!isSentinel(node));

    return at(holder);
}
} // namespace lift_004A73F0
} // namespace lift_0059B120

// [0x0059FF10]
namespace lift_0059FF10 {
// Import slot (IAT) holding MSVCR80!_invalid_parameter_noinfo.
extern void (*mem_00925134)(void);

// @name Unknown::GetElementAddress_0059FF10
// @class Unknown
// @summary Validates this->+0x08 / this->+0x0C linkage, then returns begin + 4*index for the 4-byte-element vector at (this->+0x0C)+0x2C, calling the invalid-parameter handler on bad state or out-of-range index.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
uint8_t* __thiscall Unknown_GetElementAddress_0059FF10(void* self, uint32_t index) {
    // this->+0x08 must be non-null.
    void* a = lift_field<void*>(self, 0x08);
    if (a == nullptr) {
        mem_00925134();
    }

    // this->+0x0C must differ from a->+0x04.
    void* b = lift_field<void*>(self, 0x0C);
    if (b == lift_field<void*>(a, 0x04)) {
        mem_00925134();
    }

    // Vector header lives at b+0x2C: begin at +0x04 (b+0x30), end at +0x08 (b+0x34).
    uint8_t* header = static_cast<uint8_t*>(b) + 0x2C;
    uint8_t* begin = lift_field<uint8_t*>(header, 0x04);

    if (begin != nullptr) {
        uint8_t* end = lift_field<uint8_t*>(header, 0x08);
        int32_t diff = static_cast<int32_t>(reinterpret_cast<uintptr_t>(end) -
                                            reinterpret_cast<uintptr_t>(begin));
        uint32_t count = static_cast<uint32_t>(diff >> 2);
        if (index >= count) {
            mem_00925134();
        }
    }

    return begin + 4 * static_cast<uintptr_t>(index);
}
} // namespace lift_0059FF10

// [0x00596C50] sub_00596C50 (76 bytes)
namespace lift_00596C50 {
// Known callee 0x005A3610: sub_005A3610 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// The original passes the element in ecx (thiscall-style); here it is the first argument.
extern void ext_005A3610(void* self);
// Known callee 0x00594020: RaiseFieldF4ToValue (Stores value into self+0xF4 if it is greater than the current value (running max); thiscall, one stack arg, callee pops 4.)
extern void ext_00594020(void* self, int32_t value);

// @name Unknown::ForEachCallAndRaiseF4_00596C50
// @class Unknown
// @summary Calls ext_005A3610 on every element of the pointer array [+0x23C, +0x240) in order, then raises self+0xF4 to at least 2.
// @field Unknown +0x23C void* arrayBegin
// @field Unknown +0x240 void* arrayEnd
void fn_00596C50(void* self) {
    // The original also calls _invalid_parameter_noinfo when begin > end; that
    // diagnostic is omitted here, since it is a CRT check with no portable equivalent.
    void** begin = lift_field<void**>(self, 0x23C);
    void** end   = lift_field<void**>(self, 0x240);

    for (void** it = begin; it != end; ++it) {
        ext_005A3610(*it);
    }

    ext_00594020(self, 2);
}
} // namespace lift_00596C50

// [0x00594140] sub_00594140 (77 bytes)
namespace lift_00594140 {
// @name sub_00594140
// @summary Auto-lifted identical-shape clone of 0x004757F0 (sub_0047A010).
namespace lift_004757F0 {
// Known callee 0x00672D10: sub_00672D10 (Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).)
extern void ext_00682FD0(void* self);
// Imported MSVC CRT slot for std::basic_string<char>::~basic_string (used via explicit dtor call below).
extern int mem_00924FF4;

// @name Unknown::Dtor_004757F0
// @class Unknown
// @summary Destructor body: releases the StringArray at +0x1C, then destroys the std::string at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C StringArray field_0x1C
void fn_00594140(void* self) {
    // ecx+0x1c is passed as `this` to the StringArray release routine.
    ext_00682FD0(static_cast<unsigned char*>(self) + 0x1C);
    // The original calls the MSVC CRT string dtor through mem_00924FF4 on `this`.
    using StdString = std::string;
    reinterpret_cast<StdString*>(self)->~StdString();
}
} // namespace lift_004757F0
} // namespace lift_00594140

// [0x00593D40] sub_00593D40 (78 bytes)
namespace lift_00593D40 {
// @name Unknown::SelectByKeyWithRecursion_00593D40
// @summary Switch on the dword at *p: 1 returns a3, 2 returns a2, 3 recurses with the key forced to 2 (yielding a2), anything else returns a4. Stdcall, callee pops 0x10.
// @field none (no struct field offsets accessed)
extern uint32_t fn_00593D40(uint32_t* p, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t key = *p;
    switch (key) {
    case 1:
        return a3;
    case 2:
        return a2;
    case 3: {
        // Original code pushes a pointer to the key slot, stores 2 into it,
        // and re-enters with the same remaining arguments.
        uint32_t forced_key = 2;
        return fn_00593D40(&forced_key, a2, a3, a4);
    }
    default:
        return a4;
    }
}
} // namespace lift_00593D40
