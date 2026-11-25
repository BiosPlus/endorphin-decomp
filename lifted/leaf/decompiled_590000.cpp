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
#include <cstddef>
#include <cstring>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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

// [0x00593EB0]
namespace lift_00593EB0 {
// @name Unknown::assignGlobalFromLocal_00593EB0
// @summary Assigns the global Unknown at 0x00AECC04 from a local temporary, then invokes the temporary's field_0x04 vtable slot 0x78 (passing the temporary) when that pointer is non-null.
// @field Unknown +0x04 void* field_0x04

extern void* __thiscall ext_0041CF50(void* self, void* other);
extern uint8_t mem_00AECC04[];

extern void fn_00593EB0(void) {
    // Structured-exception frame setup/teardown from the original prologue/epilogue is omitted;
    // it only tracks exception state and has no effect on the data flow below.
    alignas(8) uint8_t tmp[8] = {};

    void* self = mem_00AECC04;
    ext_0041CF50(self, tmp);

    void* p = lift_field<void*>(tmp, 0x04);
    if (p != nullptr) {
        void* vtbl = lift_field<void*>(p, 0x00);
        void* slot = lift_field<void*>(vtbl, 0x78);
        auto fn = reinterpret_cast<void (*)(void*, void*)>(slot);
        fn(p, tmp);
    }
}
} // namespace lift_00593EB0

// [0x005940E0] sub_005940E0 (89 bytes)
namespace lift_005940E0 {
// Import thunk pointer: MSVCP80 std::basic_string<char>::~basic_string (0x00628FF0).
extern uint32_t mem_00924FF4;

// @name Unknown::destructorBody_005940E0
// @class Unknown
// @summary Releases an optional child object at +0x20 through its vtable slot 0x78 (passing &field_0x1c), then destroys the std::string at offset 0.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C void* field_0x1c
// @field Unknown +0x20 void* child
void __thiscall fn_005940E0(uint8_t* self) {
    // Optional virtual notification on the child object at +0x20.
    uint8_t* child = *reinterpret_cast<uint8_t**>(self + 0x20);
    if (child != nullptr) {
        uint8_t* arg = self + 0x1c;
        uint8_t* vtbl = *reinterpret_cast<uint8_t**>(child);
        uintptr_t slot = *reinterpret_cast<uintptr_t*>(vtbl + 0x78);
        using VirtualFn = void(__thiscall*)(void* obj, void* arg);
        reinterpret_cast<VirtualFn>(slot)(child, arg);
    }

    // Destroy the std::string stored at offset 0 of this object.
    using StringDtorFn = void(__thiscall*)(void* obj);
    reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(self);
}
} // namespace lift_005940E0

// [0x00595C90] sub_00595C90 (82 bytes)
namespace lift_00595C90 {
// @name sub_00595C90
// @summary Auto-lifted identical-shape clone of 0x006998D0 (copyStringAndRecord).
namespace lift_006998D0 {
// Known callee 0x00699870: Unknown::copyRecordWithOptionalResolve (Copies a 16-byte record from src into self; when src+0xC is non-null, calls vtable slot 0x70 on it to fetch the +0x8 value, otherwise +0x8 is zeroed. Returns self.)
extern void* ext_0049BD50(void* self, int edx_unused, const void* src);

// MSVCP80 std::string copy constructor, reached through the import slot mem_00924FE0.
extern void ext_std_string_copy_ctor(void* self, const void* src);
extern int mem_00924FE0;

// @name copyStringAndRecord
// @summary Copy-constructs the leading std::string from src, then copies the 16-byte record at +0x1C from src into this; returns this.
// @field Unknown +0x1C uint8_t field_0x1c[16]
extern void* __fastcall fn_00595C90(void* self, int edx_unused, const void* src) {
    ext_std_string_copy_ctor(self, src);

    auto* dst_record = static_cast<uint8_t*>(self) + 0x1C;
    const auto* src_record = static_cast<const uint8_t*>(src) + 0x1C;
    ext_0049BD50(dst_record, 0, src_record);

    return self;
}
} // namespace lift_006998D0
} // namespace lift_00595C90

// [0x0059DDA0]
namespace lift_0059DDA0 {
extern uint8_t __fastcall ext_00410390(uint32_t self);
extern uint32_t mem_00924FC4;
extern uint32_t mem_00924FDC;

// @name sub_0059DDA0
// @summary Validates state via virtual predicate +0x28 and sub_00410390, resetting string at +0x458 to 0x00B41B9C when needed
// @field Self +0x00 uint32_t vtable
// @field Self +0x458 std::string field_0x458
void __fastcall sub_0059DDA0(uint32_t self) {
    auto vtable = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(self)), 0);
    auto vfn_28 = reinterpret_cast<uint8_t(__fastcall*)(uint32_t)>(
        static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x28)));

    bool assign_default = false;
    if (vfn_28(self) == 0 && ext_00410390(self) == 0) {
        assign_default = true;
    } else if (vfn_28(self) == 0) {
        auto str_eq = reinterpret_cast<uint8_t(__cdecl*)(uint32_t, uint32_t)>(mem_00924FC4);
        if (str_eq(self + 0x458, 0x00B41B80) != 0) {
            assign_default = true;
        }
    }

    if (assign_default) {
        auto str_assign = reinterpret_cast<uint32_t(__fastcall*)(uint32_t, uint32_t, uint32_t)>(mem_00924FDC);
        str_assign(self + 0x458, 0, 0x00B41B9C);
    }
}
} // namespace lift_0059DDA0

// [0x005957F0] sub_005957F0 (87 bytes)
namespace lift_005957F0 {
// @name sub_005957F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413D0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413CC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005957F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0BEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413D0 & 1u) == 0) {
        mem_00B413D0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413CC, frame[0]);
        mem_00B413CC = 0x95D04Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413CC;
}
} // namespace lift_004CAE30
} // namespace lift_005957F0

// [0x00595850] sub_00595850 (87 bytes)
namespace lift_00595850 {
// @name sub_00595850
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413D8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413D4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595850() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413D8 & 1u) == 0) {
        mem_00B413D8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413D4, frame[0]);
        mem_00B413D4 = 0x95D124u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413D4;
}
} // namespace lift_004CAE30
} // namespace lift_00595850

// [0x005958B0] sub_005958B0 (87 bytes)
namespace lift_005958B0 {
// @name sub_005958B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413E0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413DC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005958B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413E0 & 1u) == 0) {
        mem_00B413E0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413DC, frame[0]);
        mem_00B413DC = 0x95D1FCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413DC;
}
} // namespace lift_004CAE30
} // namespace lift_005958B0

// [0x00595910] sub_00595910 (87 bytes)
namespace lift_00595910 {
// @name sub_00595910
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413E8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413E4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595910() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413E8 & 1u) == 0) {
        mem_00B413E8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413E4, frame[0]);
        mem_00B413E4 = 0x95D2D4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413E4;
}
} // namespace lift_004CAE30
} // namespace lift_00595910

// [0x00595970] sub_00595970 (87 bytes)
namespace lift_00595970 {
// @name sub_00595970
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413F0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413EC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595970() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413F0 & 1u) == 0) {
        mem_00B413F0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413EC, frame[0]);
        mem_00B413EC = 0x95D3ACu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413EC;
}
} // namespace lift_004CAE30
} // namespace lift_00595970

// [0x005959D0] sub_005959D0 (87 bytes)
namespace lift_005959D0 {
// @name sub_005959D0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413F8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413F4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005959D0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413F8 & 1u) == 0) {
        mem_00B413F8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413F4, frame[0]);
        mem_00B413F4 = 0x95D484u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413F4;
}
} // namespace lift_004CAE30
} // namespace lift_005959D0

// [0x00595A30] sub_00595A30 (87 bytes)
namespace lift_00595A30 {
// @name sub_00595A30
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41400;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413FC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595A30() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0CAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41400 & 1u) == 0) {
        mem_00B41400 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413FC, frame[0]);
        mem_00B413FC = 0x95D634u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413FC;
}
} // namespace lift_004CAE30
} // namespace lift_00595A30

// [0x00595A90] sub_00595A90 (87 bytes)
namespace lift_00595A90 {
// @name sub_00595A90
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41408;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41404;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595A90() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0CCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41408 & 1u) == 0) {
        mem_00B41408 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41404, frame[0]);
        mem_00B41404 = 0x95D7E4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41404;
}
} // namespace lift_004CAE30
} // namespace lift_00595A90

// [0x0059E9C0] sub_0059E9C0 (87 bytes)
namespace lift_0059E9C0 {
// @name sub_0059E9C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41480;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4147C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059E9C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41480 & 1u) == 0) {
        mem_00B41480 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4147C, frame[0]);
        mem_00B4147C = 0x95DE0Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4147C;
}
} // namespace lift_004CAE30
} // namespace lift_0059E9C0

// [0x0059EA20] sub_0059EA20 (87 bytes)
namespace lift_0059EA20 {
// @name sub_0059EA20
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41488;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41484;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EA20() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41488 & 1u) == 0) {
        mem_00B41488 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41484, frame[0]);
        mem_00B41484 = 0x95DEE4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41484;
}
} // namespace lift_004CAE30
} // namespace lift_0059EA20

// [0x0059EA80] sub_0059EA80 (87 bytes)
namespace lift_0059EA80 {
// @name sub_0059EA80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41490;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4148C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EA80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41490 & 1u) == 0) {
        mem_00B41490 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4148C, frame[0]);
        mem_00B4148C = 0x95DFBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4148C;
}
} // namespace lift_004CAE30
} // namespace lift_0059EA80

// [0x0059EAE0] sub_0059EAE0 (87 bytes)
namespace lift_0059EAE0 {
// @name sub_0059EAE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41498;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41494;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EAE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A161Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41498 & 1u) == 0) {
        mem_00B41498 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41494, frame[0]);
        mem_00B41494 = 0x95E094u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41494;
}
} // namespace lift_004CAE30
} // namespace lift_0059EAE0

// [0x00596660]
namespace lift_00596660 {
// @name Vector_erase_range
// @class Vector
// @summary Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.
// @field Vector +0x08 uint32_t end


extern uint32_t mem_00925134;
extern uint32_t mem_009251EC;

using InvalidParamFn = void (__cdecl*)();
using MemmoveSFn = int (__cdecl*)(void*, size_t, const void*, size_t);

struct VectorIter {
    uint32_t container;
    uint32_t ptr;
};

VectorIter* __thiscall sub_00596660(
    void* this_ptr,
    VectorIter* out_iter,
    uint32_t first_container,
    uint32_t first_ptr,
    uint32_t last_container,
    uint32_t last_ptr)
{
    if (first_container == 0 || first_container != last_container) {
        reinterpret_cast<InvalidParamFn>(mem_00925134)();
    }

    if (first_ptr != last_ptr) {
        uint32_t end_ptr = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this_ptr) + 0x8);
        int32_t count = static_cast<int32_t>(end_ptr - last_ptr) >> 2;
        uint32_t byte_count = static_cast<uint32_t>(count) * 4;
        uint32_t new_end = first_ptr + byte_count;
        if (count > 0) {
            reinterpret_cast<MemmoveSFn>(mem_009251EC)(
                reinterpret_cast<void*>(static_cast<uintptr_t>(first_ptr)),
                byte_count,
                reinterpret_cast<const void*>(static_cast<uintptr_t>(last_ptr)),
                byte_count);
        }
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this_ptr) + 0x8) = new_end;
    }

    out_iter->container = first_container;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_00596660

// [0x005947B0] sub_005947B0 (95 bytes)
namespace lift_005947B0 {
namespace lift_005947B0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString)).
// Takes (out_str, flag); the second pushed argument is a raw 32-bit constant (0x00A2F0CC).
extern void* ext_0066AD10(void* out_str, uint32_t arg);
// Known callee 0x006A6C87: sub_006A6C87 (one stack argument, the constant 0x0091D670; return value unused).
extern void ext_006A6C87(uint32_t arg);
extern int mem_00B41358;
extern int mem_00B4133C;

// @name GetOnceInitString_005947B0
// @summary Returns the global string at 0x00B4133C, initializing it once on first call (sets bit 0 of 0x00B41358, calls ext_0066AD10, then registers teardown via ext_006A6C87).
void* fn_005947B0() {
    if ((mem_00B41358 & 1) == 0) {
        mem_00B41358 |= 1;
        ext_0066AD10(&mem_00B4133C, 0x00A2F0CCu);
        ext_006A6C87(0x0091D670u);
    }
    return &mem_00B4133C;
}
} // namespace lift_005947B0
} // namespace lift_005947B0

// [0x00599EA0] sub_00599EA0 (98 bytes)
namespace lift_00599EA0 {
// Known callee 0x00599E70: GetNestedDwordAt38C (Follows self->+0x26C -> P; returns 0 if P->+0x20 is zero. Otherwise walks P->+0x1C -> Q -> R (Q->+0x00), and returns R->+0x28 -> S's dword at +0x38C.)
extern uint32_t ext_00599E70(void* self);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (called only on a sentinel self-loop check).
extern int mem_00925134;

// @name GetFirstElementDwordAt22C
// @summary Returns the dword at +0x22C of the first element in S's pointer vector (S = R->+0x28), falling back to GetNestedDwordAt38C(self) when that vector is empty or P->+0x20 is zero.
// @field Self +0x26C void* nodeP
// @field NodeP +0x1C void* nodeQ
// @field NodeP +0x20 uint32_t field_0x20
// @field NodeQ +0x00 void* nodeR
// @field NodeR +0x28 void* nodeS
// @field NodeS +0x334 void* elemBegin
// @field NodeS +0x338 void* elemEnd
// @field NodeT +0x22C uint32_t value22C
uint32_t fn_00599EA0(void* self) {
    void* p = lift_field<void*>(self, 0x26C);
    if (lift_field<uint32_t>(p, 0x20) == 0) {
        return 0;
    }

    void* q = lift_field<void*>(p, 0x1C);
    void* r = lift_field<void*>(q, 0x00);
    if (r == q) {
        // Sentinel self-loop: original calls _invalid_parameter_noinfo (mem_00925134) and continues.
    }

    void* s = lift_field<void*>(r, 0x28);
    void* begin = lift_field<void*>(s, 0x334);
    void* end = lift_field<void*>(s, 0x338);
    if (begin == nullptr || end == begin) {
        return ext_00599E70(self);
    }

    void* first = lift_field<void*>(begin, 0x00);
    return lift_field<uint32_t>(first, 0x22C);
}
} // namespace lift_00599EA0

// [0x00597630] sub_00597630 (99 bytes)
namespace lift_00597630 {
extern int mem_00925134;

namespace {

using InvalidParamFn = void (*)();

inline uint32_t slot_value(int slot) {
    return static_cast<uint32_t>(slot);
}

inline uint32_t read_u32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

// Debug-iterator compatibility failure: MSVCR80 _invalid_parameter_noinfo (noreturn in the CRT).
[[noreturn]] inline void raise_invalid_parameter() {
    reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(slot_value(mem_00925134)))();
    std::abort();
}

}  // namespace

// @name Unknown::findValueByKey
// @class Unknown
// @summary Scans 8-byte {value, key} pairs in the range [this+0x2D0, this+0x2D4) and returns the value of the first pair whose key equals the argument, or 0 if none matches.
// @field Unknown +0x2D0 DWORD field_0x2D0
// @field Unknown +0x2D4 DWORD field_0x2D4
uint32_t fn_00597630(void* self, uint32_t key) {
    uint32_t cur = lift_field<uint32_t>(self, 0x2CC + 0x4);
    const uint32_t last = lift_field<uint32_t>(self, 0x2CC + 0x8);

    // Iterator validity check: the range begin must not be past its end.
    if (cur > last) raise_invalid_parameter();

    while (cur != last) {
        // Each step must still lie inside the range.
        if (!(cur < last)) raise_invalid_parameter();

        if (read_u32(cur + 4) == key) {
            return read_u32(cur);
        }

        cur += 8;
    }
    return 0;
}
} // namespace lift_00597630

// [0x005963F0]
namespace lift_005963F0 {
// @name Unknown::SumElementField5A0
// @class Unknown
// @summary Walks the pointer vector at this+0x238 (begin +0x23C, end +0x240) and returns the wrapping 32-bit sum of each element's dword at +0x5A0.
// @field Unknown +0x23C void** field_0x23C
// @field Unknown +0x240 void** field_0x240
// @field UnknownElement +0x5A0 uint32_t field_0x5A0
extern uint32_t __fastcall fn_005963F0(void* self, int edx_unused) {
    (void)edx_unused;
    uint8_t* base = static_cast<uint8_t*>(self);

    const uintptr_t begin_slot = *reinterpret_cast<uintptr_t*>(base + 0x23C);
    const uintptr_t end_slot = *reinterpret_cast<uintptr_t*>(base + 0x240);

    uint32_t sum = 0;
    for (uintptr_t cur = begin_slot; cur != end_slot; cur += sizeof(uintptr_t)) {
        uint8_t* elem = *reinterpret_cast<uint8_t**>(cur);
        sum += *reinterpret_cast<uint32_t*>(elem + 0x5A0);
    }
    return sum;
}
} // namespace lift_005963F0

// [0x0059DD00] sub_0059DD00 (104 bytes)
namespace lift_0059DD00 {
// @name Unknown::DispatchOrDynamicCastByKey
// @class Unknown
// @summary Compares arg2 (std::string) to a global C string; on match dispatches arg1 via sub_0059DCD0, otherwise dispatches arg1 and dynamic_casts the sub_00586140 result to a fixed RTTI type.
// (no direct field accesses on this; self is only forwarded to callees)

extern void* __thiscall ext_0059DCD0(void* self, void* arg);
extern void* __thiscall ext_00586140(void* self, const void* arg);
extern void* ext_006A6E9E(void* pVoid, int32_t vdelta, const void* srcType, const void* dstType, int32_t isReference);

// Global C string pointer (0x00A34650) and MSVCP80 std::operator==(const std::string&, const char*) (0x00924FC0).
extern uint32_t mem_00A34650;
extern uint32_t mem_00924FC0;

typedef uint8_t (__cdecl *StdStringEqCStrFn)(const void* str, uint32_t cstr);

extern void* __thiscall fn_0059DD00(void* self, void* arg1, const void* arg2) {
    auto str_eq = reinterpret_cast<StdStringEqCStrFn>(static_cast<uintptr_t>(mem_00924FC0));
    if (str_eq(arg2, mem_00A34650)) {
        return ext_0059DCD0(self, arg1);
    }

    void* r = ext_0059DCD0(self, arg1);
    if (r == nullptr) {
        return nullptr;
    }

    void* t = ext_00586140(r, arg2);
    // RTTI type_info addresses (source 0x00A2E2BC, target 0x00A30158).
    const void* src_type = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A2E2BCu));
    const void* dst_type = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A30158u));
    return ext_006A6E9E(t, 0, src_type, dst_type, 0);
}
} // namespace lift_0059DD00

// [0x005943D0] sub_005943D0 (108 bytes)
namespace lift_005943D0 {
// CRT invalid-parameter handler, reached through the import slot at 0x00925134.
extern void __cdecl ext_invalid_parameter_noinfo(void);

namespace {

// Addresses in the 32-bit target are stored as 32-bit values.
inline void* asPtr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

inline uint32_t nodeLink0(uint32_t node) { return lift_field<uint32_t>(asPtr(node), 0x00); }
inline uint32_t nodeLink4(uint32_t node) { return lift_field<uint32_t>(asPtr(node), 0x04); }
inline uint32_t nodeLink8(uint32_t node) { return lift_field<uint32_t>(asPtr(node), 0x08); }
inline bool     nodeIsNil(uint32_t node) { return lift_field<uint8_t>(asPtr(node), 0x31) != 0; }

} // namespace

// @name NodeCursor::advanceSkipSentinels
// @class NodeCursor
// @summary Moves the cursor's current node forward past nil sentinel nodes, using the node's +0x04/+0x08 links.
// @field NodeCursor +0x00 uint32_t field_0x00
// @field NodeCursor +0x04 uint32_t field_0x04
// @field TreeNode +0x00 uint32_t field_0x00
// @field TreeNode +0x04 uint32_t field_0x04
// @field TreeNode +0x08 uint32_t field_0x08
// @field TreeNode +0x31 uint8_t field_0x31
void fn_005943D0(void* self) {
    // Owner pointer must be non-null; the handler is invoked otherwise, and execution continues as in the original.
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        ext_invalid_parameter_noinfo();
    }

    uint32_t node = lift_field<uint32_t>(self, 0x04);
    if (nodeIsNil(node)) {
        ext_invalid_parameter_noinfo();
        return;
    }

    uint32_t next = nodeLink8(node);
    if (!nodeIsNil(next)) {
        // Descend the +0x00 chain from `next` while it stays non-nil.
        uint32_t left = nodeLink0(next);
        if (nodeIsNil(left)) {
            lift_field<uint32_t>(self, 0x04) = next;
            return;
        }
        uint32_t cur = left;
        uint32_t child = nodeLink0(cur);
        while (!nodeIsNil(child)) {
            cur = child;
            child = nodeLink0(cur);
        }
        lift_field<uint32_t>(self, 0x04) = cur;
        return;
    }

    // `next` is nil: follow the +0x04 link and keep stepping while the cursor
    // was the left child of its successor.
    uint32_t succ = nodeLink4(node);
    if (!nodeIsNil(succ)) {
        for (;;) {
            if (lift_field<uint32_t>(self, 0x04) != nodeLink8(succ)) {
                break;
            }
            lift_field<uint32_t>(self, 0x04) = succ;
            succ = nodeLink4(succ);
            if (nodeIsNil(succ)) {
                break;
            }
        }
    }
    lift_field<uint32_t>(self, 0x04) = succ;
}
} // namespace lift_005943D0

// [0x00596A70] sub_00596A70 (102 bytes)
namespace lift_00596A70 {
// Known callee 0x00673C20: advanceTreeIterator (Advances a red-black tree iterator to its in-order successor: goes to the leftmost node of the right subtree if one exists, otherwise climbs parents while the current node is a right child; reports an invalid parameter when the iterator is null or already at the end.)
extern void ext_00673C20(void* self);
// CRT invalid-parameter handler (import slot mem_00925134).
extern void ext_invalid_parameter_noinfo(void);

// Iterator pair as laid out on the stack by the caller of advanceTreeIterator.
struct TreeIterator {
    void* field_0x00; // head/sentinel node (container)
    void* node;       // current node
};

// @name forEachTreeRange
// @summary Walks a red-black tree range [first, last) in order, calling fn(node->field_0x28) for each node, then stores fn to the hidden return slot; reports invalid parameters when the iterators are null, mismatched, or the current node is the head's parent.
// @field TreeIterator +0x00 void* field_0x00
// @field TreeIterator +0x04 void* node
// @field TreeNode +0x04 void* field_0x04
// @field TreeNode +0x28 void* field_0x28
void fn_00596A70(void* ret, void* first_head, void* first_node,
                 void* last_head, void* last_node, void (*fn)(void*)) {
    TreeIterator it{first_head, first_node};
    for (;;) {
        if (it.field_0x00 == nullptr || it.field_0x00 != last_head) {
            ext_invalid_parameter_noinfo();
            return;
        }
        if (it.node == last_node) {
            *static_cast<void (**)(void*)>(ret) = fn;
            return;
        }
        if (it.field_0x00 == nullptr) {
            ext_invalid_parameter_noinfo();
            return;
        }
        if (it.node == lift_field<void*>(it.field_0x00, 0x04)) {
            ext_invalid_parameter_noinfo();
            return;
        }
        fn(lift_field<void*>(it.node, 0x28));
        ext_00673C20(&it);
    }
}
} // namespace lift_00596A70

// [0x0059FDE0] sub_0059FDE0 (88 bytes)
namespace lift_0059FDE0 {
// Known callee 0x00673C20: advanceTreeIterator (Advances a red-black tree iterator to its in-order successor: goes to the leftmost node of the right subtree if one exists, otherwise climbs parents while the current node is a right child; reports an invalid parameter when the iterator is null or already at the end.)
extern void ext_00673C20(void* iter);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (function pointer, not data).
extern int mem_00925134;

static inline void invalid_parameter_noinfo() {
    (*reinterpret_cast<void (**)()>(&mem_00925134))();
}

// @name copyStringRangeFromTreeIterator
// @summary Walks a red-black tree range from (container, node) up to endNode, assigning each node's std::string at +0x0C into consecutive 0x1C-byte output slots and advancing the iterator; returns the final output pointer.
// @field TreeIterator +0x00 void* container
// @field TreeIterator +0x04 void* node
// @field TreeContainer +0x04 void* field_0x04
// @field TreeNode +0x0C std::string field_0x0C
void* fn_0059FDE0(void* container, void* node, void* expectedContainer, void* endNode, std::string* out) {
    struct Iter {
        void* container; // +0x00
        void* node;      // +0x04
    } it{container, node};

    for (;;) {
        void* cur = it.container;
        if (cur == nullptr || cur != expectedContainer) {
            invalid_parameter_noinfo();
        }
        if (it.node == endNode) {
            break;
        }
        if (cur == nullptr) {
            invalid_parameter_noinfo();
        }
        if (it.node == *reinterpret_cast<void* const*>(static_cast<uint8_t*>(cur) + 0x04)) {
            invalid_parameter_noinfo();
        }

        *out = *reinterpret_cast<std::string*>(static_cast<uint8_t*>(it.node) + 0x0C);
        ext_00673C20(&it);
        out = reinterpret_cast<std::string*>(reinterpret_cast<uint8_t*>(out) + 0x1C);
    }
    return out;
}
} // namespace lift_0059FDE0

// [0x00596AE0] sub_00596AE0 (61 bytes)
namespace lift_00596AE0 {
// @name sub_00596AE0
// @summary Auto-lifted identical-shape clone of 0x0046A4D0 (advanceIteratorCounted).
namespace lift_0046A4D0 {
// Known callee 0x00474FF0: sub_00474FF0 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00595AF0(void* self);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void (*mem_00925134)();

// @name advanceIteratorCounted
// @summary Advances an iterator with TreeIterator::increment until it equals `last`, incrementing `*counter` once per step; asserts the iterator is non-null and equal to `guard` before each step.
void fn_00596AE0(void* it, void* last, void* guard, void* end, int32_t* counter) {
    for (;;) {
        if (it == nullptr || it != guard) {
            mem_00925134();
        }
        if (last == end) {
            return;
        }
        ++*counter;
        ext_00595AF0(&it);
    }
}
} // namespace lift_0046A4D0
} // namespace lift_00596AE0

// [0x00596B20] sub_00596B20 (88 bytes)
namespace lift_00596B20 {
// @name sub_00596B20
// @summary Auto-lifted identical-shape clone of 0x0059FDE0 (copyStringRangeFromTreeIterator).
namespace lift_0059FDE0 {
// Known callee 0x00673C20: advanceTreeIterator (Advances a red-black tree iterator to its in-order successor: goes to the leftmost node of the right subtree if one exists, otherwise climbs parents while the current node is a right child; reports an invalid parameter when the iterator is null or already at the end.)
extern void ext_00595AF0(void* iter);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (function pointer, not data).
extern int mem_00925134;

static inline void invalid_parameter_noinfo() {
    (*reinterpret_cast<void (**)()>(&mem_00925134))();
}

// @name copyStringRangeFromTreeIterator
// @summary Walks a red-black tree range from (container, node) up to endNode, assigning each node's std::string at +0x0C into consecutive 0x1C-byte output slots and advancing the iterator; returns the final output pointer.
// @field TreeIterator +0x00 void* container
// @field TreeIterator +0x04 void* node
// @field TreeContainer +0x04 void* field_0x04
// @field TreeNode +0x0C std::string field_0x0C
void* fn_00596B20(void* container, void* node, void* expectedContainer, void* endNode, std::string* out) {
    struct Iter {
        void* container; // +0x00
        void* node;      // +0x04
    } it{container, node};

    for (;;) {
        void* cur = it.container;
        if (cur == nullptr || cur != expectedContainer) {
            invalid_parameter_noinfo();
        }
        if (it.node == endNode) {
            break;
        }
        if (cur == nullptr) {
            invalid_parameter_noinfo();
        }
        if (it.node == *reinterpret_cast<void* const*>(static_cast<uint8_t*>(cur) + 0x04)) {
            invalid_parameter_noinfo();
        }

        *out = *reinterpret_cast<std::string*>(static_cast<uint8_t*>(it.node) + 0x0C);
        ext_00595AF0(&it);
        out = reinterpret_cast<std::string*>(reinterpret_cast<uint8_t*>(out) + 0x1C);
    }
    return out;
}
} // namespace lift_0059FDE0
} // namespace lift_00596B20

// [0x00598930] sub_00598930 (53 bytes)
namespace lift_00598930 {
// Known callee 0x00596B20: invalid_parameter_noinfo (no arguments in lifted form; clone of the MSVCR80 invalid-parameter path).
extern void ext_00596B20(void);

// @name forwardInvalidParameterNoinfo_00598930
// @summary Pushes eight stack copies of its caller's arguments (unused by the callee), calls invalid_parameter_noinfo, and cdecl-cleans the 0x24 bytes.
void __cdecl fn_00598930(void) {
    ext_00596B20();
}
} // namespace lift_00598930

// [0x005969C0]
namespace lift_005969C0 {
// @name BaseEventDispatcher::dispatchRangeThenFinish
// @class BaseEventDispatcher
// @summary Iterates the element range at arg1 (begin at +0x4, end at +0x8), forwarding each element and arg2 to dispatchToElements, then invokes the finishing virtual-slot helper with argument 1.

extern void __thiscall ext_00527690(uint32_t self, uint32_t elem, uint32_t arg2);
extern void __thiscall ext_00678D70(uint32_t self, uint32_t arg);

extern void __thiscall fn_005969C0(uint32_t self, uint32_t range, uint32_t arg2) {
    // Iterator-debug range checks from the original (_invalid_parameter_noinfo
    // paths) are omitted; they only guard against malformed ranges.
    uint32_t it = *reinterpret_cast<uint32_t*>(range + 0x4);
    for (;;) {
        uint32_t end = *reinterpret_cast<uint32_t*>(range + 0x8);
        if (it == end) {
            break;
        }
        uint32_t elem = *reinterpret_cast<uint32_t*>(it);
        ext_00527690(self, elem, arg2);
        it += 0x4;
    }
    ext_00678D70(self, 1);
}
} // namespace lift_005969C0

// [0x0059B170]
namespace lift_0059B170 {
// @name StdMapString::find
// @class StdMapString
// @summary Finds a node by string key in a std::map-like tree, returning an iterator (or end() if not found).
// @field StdMapString +0x04 uint32_t head


extern uint32_t ext_0059B120(uint32_t self, uint32_t key);
extern void (*mem_00925134)();
extern uint8_t (*mem_00924EF4)(uint32_t lhs, uint32_t rhs);

uint32_t sub_0059B170(uint32_t self, uint32_t out_iter, uint32_t key) {
    uint32_t node = ext_0059B120(self, key);
    if (self == 0) {
        mem_00925134();
    }
    uint32_t head = *reinterpret_cast<uint32_t*>(self + 0x04);
    uint32_t result_node = head;
    if (node != head) {
        uint8_t less = mem_00924EF4(key, node + 0x0C);
        if (less == 0) {
            result_node = node;
        }
    }
    *reinterpret_cast<uint32_t*>(out_iter) = self;
    *reinterpret_cast<uint32_t*>(out_iter + 0x04) = result_node;
    return out_iter;
}
} // namespace lift_0059B170
