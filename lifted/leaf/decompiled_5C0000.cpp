// Lifted C++ translation unit: lifted/leaf/decompiled_5C0000.cpp
#include "lift_compat.h"
#include <string>
#include <new>
#include <cstdint>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_005CF3E0 {
// @name sub_005CF3E0
// @summary Auto-lifted identical-shape clone of 0x0048DE30 (NMData::DesiredPoseEventData::vfunc_87).
namespace lift_0048DE30 {
// @name NMData::DesiredPoseEventData::vfunc_87
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004CD090 (NMData::MetaBodyConstraintData::vfunc_87).
// @field NMData::DesiredPoseEventData +0x234 void* field_0x234
namespace lift_004CD090 {
// @name NMData::MetaBodyConstraintData::vfunc_87
// @class NMData::MetaBodyConstraintData
// @summary Cleans up, destroys, and clears the subobject at +0x180 if non-null.
// @field NMData::MetaBodyConstraintData +0x180 void* field_0x180


extern void __thiscall ext_00647CA0(void* self);
extern void __thiscall ext_00648300(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void __thiscall fn_005CF3E0(void* self) {
    void* obj = lift_field<void*>(self, 0xAC);
    if (obj != nullptr) {
        ext_00647CA0(obj);
        void* obj2 = lift_field<void*>(self, 0xAC);
        if (obj2 != nullptr) {
            ext_00648300(obj2);
            ext_006A5C5C(obj2);
        }
        lift_field<void*>(self, 0xAC) = nullptr;
    }
}
} // namespace lift_004CD090
} // namespace lift_0048DE30
} // namespace lift_005CF3E0
#include <cstddef>

// [0x005CF930] sub_005CF930 (14 bytes)
namespace lift_005CF930 {
// @name sub_005CF930
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005CF930(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 1u);
}
} // namespace lift_00611160
} // namespace lift_005CF930

// [0x005C4780] sub_005C4780 (25 bytes)
namespace lift_005C4780 {
// @name sub_005C4780
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00648790(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_005C4780(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00648790(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_005C4780

// [0x005CEA30] sub_005CEA30 (25 bytes)
namespace lift_005CEA30 {
// @name sub_005CEA30
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00648300(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_005CEA30(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00648300(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_005CEA30

// [0x005CFC80] sub_005CFC80 (37 bytes)
namespace lift_005CFC80 {
// Known callee 0x00530730: sub_00530730 (Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).)
extern int ext_00530730(void* arg);

// @name ReleaseHandleAt154IfSet
// @class <ClassName> (unknown; omitted)
// @summary If the dword at this+0x158 is nonzero, passes the dword at this+0x154 to ext_00530730 and then clears this+0x154.
// @field unknown +0x154 uint32_t field_0x154
// @field unknown +0x158 uint32_t field_0x158
void __thiscall fn_005CFC80(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint32_t*>(base + 0x158) != 0) {
        uint32_t handle = *reinterpret_cast<uint32_t*>(base + 0x154);
        ext_00530730(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
        *reinterpret_cast<uint32_t*>(base + 0x154) = 0;
    }
}
} // namespace lift_005CFC80

// [0x005CE8D0] sub_005CE8D0 (20 bytes)
namespace lift_005CE8D0 {
// Known callee 0x00648370: sub_00648370 (Calls ext_0065A8C0 on field_0xa4 and forwards two arguments to ext_00647AE0 on this.)
uint32_t __thiscall ext_00648370(void* self, uint32_t arg1, uint32_t arg2);

// @name Forwarder::ForwardToSubobjectAC
// @class Unknown
// @summary Forwards its stack argument to sub_00648370 with the object at +0xac as "this", passing the original this pointer and the argument.
// @field Unknown +0xac void* field_0xac
uint32_t __thiscall fn_005CE8D0(void* self, uint32_t arg1) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* sub = *reinterpret_cast<void**>(base + 0xac);
    return ext_00648370(sub, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), arg1);
}
} // namespace lift_005CE8D0

// [0x005C3090] sub_005C3090 (54 bytes)
namespace lift_005C3090 {
// @name CObjectHolder::ForwardToSubobject
// @class CObjectHolder
// @summary If the subobject at +0x164 exists, queries the object at +0x04 via vtable slot 5 using global mem_00B40640 and forwards the result (+0x30) with arg to the subobject's handler.
// @field CObjectHolder +0x004 void* m_pObject
// @field CObjectHolder +0x164 void* m_pSubobject

extern void ext_005B72A0(void* self, void* edx, uintptr_t arg1, uintptr_t arg2);
extern uint32_t mem_00B40640;

void fn_005C3090(void* self, uintptr_t arg) {
    auto* base = static_cast<uint8_t*>(self);
    void* sub = *reinterpret_cast<void**>(base + 0x164);
    if (sub == nullptr) {
        return;
    }

    // Virtual call on the object at +0x04: load its vptr, take slot 5 (offset 0x14),
    // call with this = &obj and the global mem_00B40640 as the single argument.
    void* obj = base + 0x04;
    void** vptr = *static_cast<void***>(obj);
    using VFn = uintptr_t (*)(void* thisPtr, uintptr_t param);
    VFn vfn = reinterpret_cast<VFn>(vptr[5]);
    uintptr_t result = vfn(obj, static_cast<uintptr_t>(mem_00B40640));

    ext_005B72A0(sub, nullptr, arg, result + 0x30);
}
} // namespace lift_005C3090

// [0x005C3030] sub_005C3030 (54 bytes)
namespace lift_005C3030 {
// Known callee 0x005B7260: Unknown::forwardIfChild (Forwards the call to ext_005CE970 when the pointer at +0x158 is non-null; otherwise returns, popping 8 bytes of stack arguments.)
extern void ext_005B7260(void* self, DWORD stackArg0, DWORD stackArg1);
extern int mem_00B40640;

// @name Unknown::forwardToChildWithOffset30
// @class Unknown
// @summary If the child pointer at +0x164 is non-null, queries the subobject at +0x4 via its vtable slot +0x14 using the global mem_00B40640, then forwards arg0 and (result + 0x30) to the child via ext_005B7260.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x164 void* field_0x164
typedef DWORD (__thiscall* SubobjectQueryFn)(void* self, DWORD arg);

extern void __thiscall fn_005C3030(void* self, DWORD arg0) {
    if (lift_field<void*>(self, 0x164) == nullptr) {
        return;
    }
    void* subobject = static_cast<char*>(self) + 0x4;
    void* vtable = lift_field<void*>(self, 0x4);
    SubobjectQueryFn query = lift_field<SubobjectQueryFn>(vtable, 0x14);
    DWORD result = query(subobject, static_cast<DWORD>(mem_00B40640));
    ext_005B7260(lift_field<void*>(self, 0x164), arg0, result + 0x30);
}
} // namespace lift_005C3030

// [0x005C40C0] sub_005C40C0 (56 bytes)
namespace lift_005C40C0 {
// Known callee 0x006484F0: sub_006484F0 (Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AF30.)
// The original passes one extra stack argument (the peer pointer) that the thunk forwards; it is modelled here as a second parameter.
extern void ext_006484F0(void* self, void* arg);

// @name ForwardToPeerIfAccepted
// @class <ClassName> (unknown)
// @summary If field +0x16C is set and the peer's virtual slot 0xEC accepts it, forwards the peer's +0x16C into the delegate thunk.
// @field <ClassName> +0x16C void* field_0x16C
void fn_005C40C0(void* self, void* peer) {
    using AcceptFn = BOOLEAN (__thiscall*)(void*);

    if (lift_field<void*>(self, 0x16C) == nullptr) {
        return;
    }

    void* vtbl = lift_field<void*>(peer, 0);
    AcceptFn accept = lift_field<AcceptFn>(vtbl, 0xEC);
    if (!accept(peer)) {
        return;
    }

    void* self_delegate = lift_field<void*>(self, 0x16C);
    void* peer_delegate = lift_field<void*>(peer, 0x16C);
    ext_006484F0(self_delegate, peer_delegate);
}
} // namespace lift_005C40C0

// [0x005C39B0]
namespace lift_005C39B0 {
// @name Unknown::getZeroVec4Ptr
// @class Unknown
// @summary If this+0x164 is non-null, forwards to ext_005B6BF0 with that pointer as self; otherwise lazily zeroes a static 4-float block (guarded by bit 0 of mem_00AE5598) and returns its address.
// @field Unknown +0x164 DWORD field_0x164

extern void ext_005B6BF0(void* self);

extern DWORD mem_00AE5598;
extern float mem_00AE558C;
extern float mem_00AE5590;
extern float mem_00AE5594;

void* fn_005C39B0(void* self) {
    DWORD next = lift_field<DWORD>(self, 0x164);
    if (next != 0) {
        ext_005B6BF0(reinterpret_cast<void*>(static_cast<uintptr_t>(next)));
        // The original tail-jumps; the return value in EAX comes from the callee,
        // which is recovered as void, so it is not representable here.
        return nullptr;
    }

    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE5598 |= 1u;
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
    }
    return &mem_00AE558C;
}
} // namespace lift_005C39B0

// [0x005C3930] sub_005C3930 (60 bytes)
namespace lift_005C3930 {
// Known callee 0x005B6B90: Unknown::forwardToSubobject158 (If the pointer at +0x158 is non-null, forwards this+0x1C4 to ext_005CE9D0 on that pointer.)
extern void ext_005B6B90(void* self);
extern uint32_t mem_00AE5598;
extern float mem_00AE558C;
extern float mem_00AE5590;
extern float mem_00AE5594;

// @name Unknown::forwardToSubobject158OrZeroVec3
// @class Unknown
// @summary If this+0x164 is non-null, forwards to that subobject via ext_005B6B90; otherwise lazily zeroes a three-float global block and returns its address.
// @field Unknown +0x164 uint32_t subobject164
float* fn_005C3930(void* self) {
    const uint32_t subobject = lift_field<uint32_t>(self, 0x164);
    if (subobject != 0) {
        ext_005B6B90(reinterpret_cast<void*>(static_cast<uintptr_t>(subobject)));
        return nullptr;
    }
    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE5598 |= 1u;
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
    }
    return &mem_00AE558C;
}
} // namespace lift_005C3930

// [0x005C3970] sub_005C3970 (60 bytes)
namespace lift_005C3970 {
// @name Unknown::getDefaultZeroVec3
// @class Unknown
// @summary If the pointer at +0x164 is set, tail-forwards to ext_005B6BC0 with it; otherwise lazily zeroes a static 3-float block (once, guarded by a flag bit) and returns its address.
// @field Unknown +0x164 void* field_0x164

// Known callee 0x005B6BC0: Unknown::forwardToSubobjectAt1D0IfSet
// Tail-called with the value of [self+0x164] as its receiver.
extern void* ext_005B6BC0(void* self);

extern uint32_t mem_00AE5598; // init flag word (bit 0 = initialized)
extern float    mem_00AE558C; // static float[0]
extern float    mem_00AE5590; // static float[1]
extern float    mem_00AE5594; // static float[2]

void* fn_005C3970(void* self) {
    void* subobject = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x164);
    if (subobject != nullptr) {
        return ext_005B6BC0(subobject);
    }

    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
        mem_00AE5598 |= 1u;
    }
    return &mem_00AE558C;
}
} // namespace lift_005C3970

// [0x005C39F0] sub_005C39F0 (62 bytes)
namespace lift_005C39F0 {
// Known callee 0x005B6C80: sub_005B6C80 (40 bytes, tail-called with ecx = this->+0x164 and the original stack argument).
extern void* ext_005B6C80(void* self, uint32_t arg);
extern uint32_t mem_00AE5598; // init flags; bit 0 = constants initialized
extern float mem_00AE558C;    // cached 0.0f
extern float mem_00AE5590;    // cached 0.0f
extern float mem_00AE5594;    // cached 0.0f

// @name Owner::ForwardToSubobjectOrGetZeroFloats
// @class Owner
// @summary If the subobject at +0x164 is set, forward the call to it; otherwise lazily initialize three static zero floats once and return the address of the first.
// @field Owner +0x164 uint32_t subobject
void* fn_005C39F0(void* self, uint32_t arg) {
    const uint32_t subobject = lift_field<uint32_t>(self, 0x164);
    if (subobject != 0) {
        return ext_005B6C80(reinterpret_cast<void*>(static_cast<uintptr_t>(subobject)), arg);
    }

    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
        mem_00AE5598 |= 1u;
    }
    return &mem_00AE558C;
}
} // namespace lift_005C39F0

// [0x005CFD20] sub_005CFD20 (64 bytes)
namespace lift_005CFD20 {
// IAT slot holding MSVCP80 std::operator==(basic_string const&, basic_string const&)
extern void* mem_00924FC4;
// Table of 4 MSVC std::string entries (28 bytes each), 0xB45890..0xB45900
extern uint8_t mem_00B45890[];

using StringEqualFn = bool(__cdecl*)(const void* lhs, const void* rhs);

// @name FindStringTableIndex
// @summary Returns the index of the first table string equal to key; returns 0 when no entry matches.
uint32_t __stdcall fn_005CFD20(const void* key) {
    constexpr uintptr_t kEntrySize = 0x1c;
    constexpr uintptr_t kTableBytes = 0xB45900 - 0xB45890;

    const auto equal = reinterpret_cast<StringEqualFn>(mem_00924FC4);
    const uint8_t* entry = mem_00B45890;

    uint32_t index = 0;
    for (uintptr_t offset = 0; offset < kTableBytes; offset += kEntrySize, ++index) {
        if (equal(entry + offset, key)) {
            return index;
        }
    }
    return 0;
}
} // namespace lift_005CFD20

// [0x005CFCE0] sub_005CFCE0 (64 bytes)
namespace lift_005CFCE0 {
// Import slot at 0x924FC4: string equality comparator (cdecl, two pointers to std::string objects).
using StringEqualFn = bool (__cdecl*)(const void* lhs, const void* rhs);
extern StringEqualFn mem_00924FC4;

// Start of a 2-entry table of 28-byte std::string-sized records at 0xB45854..0xB4588C.
extern uint8_t mem_00B45854;

// @name Unknown::FindEntryIndex
// @summary Scans the 2-entry string table and returns the index of the first entry equal to key, or 0 if none match.
int __stdcall fn_005CFCE0(const void* key) {
    constexpr uintptr_t kEntryStride = 0x1C;
    constexpr uintptr_t kEntryCount = 2;

    const uintptr_t base = reinterpret_cast<uintptr_t>(&mem_00B45854);
    const uintptr_t end = base + kEntryStride * kEntryCount;

    int index = 0;
    for (uintptr_t cursor = base; cursor < end; cursor += kEntryStride, ++index) {
        if (mem_00924FC4(key, reinterpret_cast<const void*>(cursor))) {
            return index;
        }
    }
    return 0;
}
} // namespace lift_005CFCE0

// [0x005CFD60]
namespace lift_005CFD60 {
// @name findNamedEntryIndex
// @summary Compares arg with the 2 string entries at 0x00B45900 (stride 0x1C) using std::string operator==; returns the matching index, or 3 if none match.

extern uint32_t mem_00924FC4; // IAT slot: MSVCP80 std::operator==(basic_string<char> const&, basic_string<char> const&)

typedef bool(__cdecl* StrEqFn)(const void*, const void*);

uint32_t __stdcall findNamedEntryIndex(const void* arg) {
    StrEqFn strEq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    uint32_t idx = 0;
    for (uintptr_t entry = 0x00B45900; entry < 0x00B45938; entry += 0x1C, ++idx) {
        if (strEq(arg, reinterpret_cast<const void*>(entry))) {
            return idx;
        }
    }
    return 3;
}
} // namespace lift_005CFD60

// [0x005CC750] sub_005CC750 (30 bytes)
namespace lift_005CC750 {
// @name sub_005CC750
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_005CBF80();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_005CC750(DWORD* dst, DWORD value) {
    DWORD obj = ext_005CBF80();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_005CC750

// [0x005CC770] sub_005CC770 (30 bytes)
namespace lift_005CC770 {
// @name sub_005CC770
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_005CBFE0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_005CC770(DWORD* dst, DWORD value) {
    DWORD obj = ext_005CBFE0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_005CC770

// [0x005CC790] sub_005CC790 (30 bytes)
namespace lift_005CC790 {
// @name sub_005CC790
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_005CC040();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_005CC790(DWORD* dst, DWORD value) {
    DWORD obj = ext_005CC040();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_005CC790

// [0x005CC7B0] sub_005CC7B0 (30 bytes)
namespace lift_005CC7B0 {
// @name sub_005CC7B0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_005CC0A0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_005CC7B0(DWORD* dst, DWORD value) {
    DWORD obj = ext_005CC0A0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_005CC7B0

// [0x005CF4A0] sub_005CF4A0 (30 bytes)
namespace lift_005CF4A0 {
// @name sub_005CF4A0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_005CF420();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_005CF4A0(DWORD* dst, DWORD value) {
    DWORD obj = ext_005CF420();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_005CF4A0

// [0x005C6E00] sub_005C6E00 (87 bytes)
namespace lift_005C6E00 {
// @name sub_005C6E00
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4445C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44458;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6E00() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A46CEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4445C & 1u) == 0) {
        mem_00B4445C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44458, frame[0]);
        mem_00B44458 = 0x9633F4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44458;
}
} // namespace lift_004CAE30
} // namespace lift_005C6E00

// [0x005C6E60] sub_005C6E60 (87 bytes)
namespace lift_005C6E60 {
// @name sub_005C6E60
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44464;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44460;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6E60() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A46EEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44464 & 1u) == 0) {
        mem_00B44464 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44460, frame[0]);
        mem_00B44460 = 0x9634CCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44460;
}
} // namespace lift_004CAE30
} // namespace lift_005C6E60

// [0x005C6EC0] sub_005C6EC0 (87 bytes)
namespace lift_005C6EC0 {
// @name sub_005C6EC0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4446C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44468;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6EC0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A470Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4446C & 1u) == 0) {
        mem_00B4446C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44468, frame[0]);
        mem_00B44468 = 0x9635A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44468;
}
} // namespace lift_004CAE30
} // namespace lift_005C6EC0

// [0x005C6F20] sub_005C6F20 (87 bytes)
namespace lift_005C6F20 {
// @name sub_005C6F20
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44474;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44470;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6F20() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A472Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44474 & 1u) == 0) {
        mem_00B44474 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44470, frame[0]);
        mem_00B44470 = 0x96367Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44470;
}
} // namespace lift_004CAE30
} // namespace lift_005C6F20

// [0x005C6F80] sub_005C6F80 (87 bytes)
namespace lift_005C6F80 {
// @name sub_005C6F80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4447C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44478;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6F80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A474Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4447C & 1u) == 0) {
        mem_00B4447C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44478, frame[0]);
        mem_00B44478 = 0x963754u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44478;
}
} // namespace lift_004CAE30
} // namespace lift_005C6F80

// [0x005C6FE0] sub_005C6FE0 (87 bytes)
namespace lift_005C6FE0 {
// @name sub_005C6FE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44484;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44480;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C6FE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A476Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44484 & 1u) == 0) {
        mem_00B44484 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44480, frame[0]);
        mem_00B44480 = 0x96382Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44480;
}
} // namespace lift_004CAE30
} // namespace lift_005C6FE0

// [0x005C7040] sub_005C7040 (87 bytes)
namespace lift_005C7040 {
// @name sub_005C7040
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4448C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44488;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7040() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A478Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4448C & 1u) == 0) {
        mem_00B4448C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44488, frame[0]);
        mem_00B44488 = 0x963904u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44488;
}
} // namespace lift_004CAE30
} // namespace lift_005C7040

// [0x005C70A0] sub_005C70A0 (87 bytes)
namespace lift_005C70A0 {
// @name sub_005C70A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44494;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44490;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C70A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A47AEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44494 & 1u) == 0) {
        mem_00B44494 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44490, frame[0]);
        mem_00B44490 = 0x9639DCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44490;
}
} // namespace lift_004CAE30
} // namespace lift_005C70A0

// [0x005C7100] sub_005C7100 (87 bytes)
namespace lift_005C7100 {
// @name sub_005C7100
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4449C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44498;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7100() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A47CEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4449C & 1u) == 0) {
        mem_00B4449C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44498, frame[0]);
        mem_00B44498 = 0x963AB4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44498;
}
} // namespace lift_004CAE30
} // namespace lift_005C7100

// [0x005C7160] sub_005C7160 (87 bytes)
namespace lift_005C7160 {
// @name sub_005C7160
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444A4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444A0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7160() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A47EEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444A4 & 1u) == 0) {
        mem_00B444A4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444A0, frame[0]);
        mem_00B444A0 = 0x963B8Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444A0;
}
} // namespace lift_004CAE30
} // namespace lift_005C7160

// [0x005C71C0] sub_005C71C0 (87 bytes)
namespace lift_005C71C0 {
// @name sub_005C71C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444AC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444A8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C71C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A480Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444AC & 1u) == 0) {
        mem_00B444AC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444A8, frame[0]);
        mem_00B444A8 = 0x963C64u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444A8;
}
} // namespace lift_004CAE30
} // namespace lift_005C71C0

// [0x005C7220] sub_005C7220 (87 bytes)
namespace lift_005C7220 {
// @name sub_005C7220
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444B4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444B0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7220() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A482Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444B4 & 1u) == 0) {
        mem_00B444B4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444B0, frame[0]);
        mem_00B444B0 = 0x963D3Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444B0;
}
} // namespace lift_004CAE30
} // namespace lift_005C7220

// [0x005C7280] sub_005C7280 (87 bytes)
namespace lift_005C7280 {
// @name sub_005C7280
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444BC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444B8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7280() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A484Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444BC & 1u) == 0) {
        mem_00B444BC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444B8, frame[0]);
        mem_00B444B8 = 0x963E14u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444B8;
}
} // namespace lift_004CAE30
} // namespace lift_005C7280

// [0x005C72E0] sub_005C72E0 (87 bytes)
namespace lift_005C72E0 {
// @name sub_005C72E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444C4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444C0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C72E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A486Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444C4 & 1u) == 0) {
        mem_00B444C4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444C0, frame[0]);
        mem_00B444C0 = 0x963FC4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444C0;
}
} // namespace lift_004CAE30
} // namespace lift_005C72E0

// [0x005C7340] sub_005C7340 (87 bytes)
namespace lift_005C7340 {
// @name sub_005C7340
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B444CC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B444C8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005C7340() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A488Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B444CC & 1u) == 0) {
        mem_00B444CC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B444C8, frame[0]);
        mem_00B444C8 = 0x964174u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B444C8;
}
} // namespace lift_004CAE30
} // namespace lift_005C7340

// [0x005CBF80] sub_005CBF80 (87 bytes)
namespace lift_005CBF80 {
// @name sub_005CBF80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4451C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44518;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005CBF80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A499Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4451C & 1u) == 0) {
        mem_00B4451C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44518, frame[0]);
        mem_00B44518 = 0x964C6Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44518;
}
} // namespace lift_004CAE30
} // namespace lift_005CBF80

// [0x005CBFE0] sub_005CBFE0 (87 bytes)
namespace lift_005CBFE0 {
// @name sub_005CBFE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44524;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44520;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005CBFE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A49BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44524 & 1u) == 0) {
        mem_00B44524 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44520, frame[0]);
        mem_00B44520 = 0x964E1Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44520;
}
} // namespace lift_004CAE30
} // namespace lift_005CBFE0

// [0x005CC040] sub_005CC040 (87 bytes)
namespace lift_005CC040 {
// @name sub_005CC040
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4452C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44528;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005CC040() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A49DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4452C & 1u) == 0) {
        mem_00B4452C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44528, frame[0]);
        mem_00B44528 = 0x964FCCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44528;
}
} // namespace lift_004CAE30
} // namespace lift_005CC040

// [0x005CC0A0] sub_005CC0A0 (87 bytes)
namespace lift_005CC0A0 {
// @name sub_005CC0A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44534;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44530;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005CC0A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A49FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44534 & 1u) == 0) {
        mem_00B44534 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44530, frame[0]);
        mem_00B44530 = 0x96517Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44530;
}
} // namespace lift_004CAE30
} // namespace lift_005CC0A0

// [0x005CF420] sub_005CF420 (87 bytes)
namespace lift_005CF420 {
// @name sub_005CF420
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B44C20;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B44C1C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005CF420() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A4F9Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B44C20 & 1u) == 0) {
        mem_00B44C20 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B44C1C, frame[0]);
        mem_00B44C1C = 0x965AC4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B44C1C;
}
} // namespace lift_004CAE30
} // namespace lift_005CF420

// [0x005C7D20] sub_005C7D20 (95 bytes)
namespace lift_005C7D20 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Called as (out_str = &mem_00B444F0, arg = &string literal at 0x00A8C778).
extern void* ext_0066AD10(void* out_str, const void* arg);
// Called once with the address 0x0091E050 (registered teardown callback).
extern void ext_006A6C87(const void* fn);
// One-time initialization guard byte (bit 0 = initialized/in-progress).
extern uint8_t mem_00B4450C;
// Storage for the once-initialized string object.
extern char mem_00B444F0[];

// @name GetOnceInitString_005C7D20
// @summary Lazily initializes the global string at 0x00B444F0 once and returns its address.
void* fn_005C7D20(void) {
    if ((mem_00B4450C & 1u) == 0) {
        mem_00B4450C = static_cast<uint8_t>(mem_00B4450C | 1u);
        ext_0066AD10(static_cast<void*>(mem_00B444F0), reinterpret_cast<const void*>(0x00A8C778));
        ext_006A6C87(reinterpret_cast<const void*>(0x0091E050));
    }
    return static_cast<void*>(mem_00B444F0);
}
} // namespace lift_005C7D20

// [0x005C3A30] sub_005C3A30 (107 bytes)
namespace lift_005C3A30 {
// Known callee 0x00648480: GetIndirectField_0x5c_0x00 (Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.)
extern void* ext_00648480(void* self);
extern int mem_00B40640;

// @name UnknownClass::GetCachedVec3Ptr
// @class UnknownClass
// @summary Returns a pointer to a cached float[3] at this+0x170: refreshed from the object returned by ext_00648480(this+0x16C) when the flag at +0x168 is set and +0x16C is non-null, otherwise returns the callback result at this+0x04 plus 0x30.
// @field UnknownClass +0x04 void* field_0x04
// @field UnknownClass +0x168 uint8_t field_0x168
// @field UnknownClass +0x16c void* field_0x16c
// @field UnknownClass +0x170 float field_0x170
// @field UnknownClass +0x174 float field_0x174
// @field UnknownClass +0x178 float field_0x178
float* fn_005C3A30(void* self) {
    void* ptr16c = lift_field<void*>(self, 0x16c);
    uint8_t flag = lift_field<uint8_t>(self, 0x168);

    if (ptr16c != nullptr && flag != 0) {
        // Read all three source floats before writing, matching the original.
        void* src = ext_00648480(ptr16c);
        float x = lift_field<float>(src, 0x30);
        float y = lift_field<float>(src, 0x34);
        float z = lift_field<float>(src, 0x38);
        lift_field<float>(self, 0x170) = x;
        lift_field<float>(self, 0x174) = y;
        lift_field<float>(self, 0x178) = z;
        return &lift_field<float>(self, 0x170);
    }

    // Fallback: call the function pointer stored at obj+0x14 with (&this->field_0x04, mem_00B40640).
    void* obj = lift_field<void*>(self, 0x04);
    using Callback = void* (*)(void*, int);
    auto cb = reinterpret_cast<Callback>(lift_field<void*>(obj, 0x14));
    void* r = cb(&lift_field<void*>(self, 0x04), mem_00B40640);
    return reinterpret_cast<float*>(static_cast<uint8_t*>(r) + 0x30);
}
} // namespace lift_005C3A30

// [0x005C3AA0]
namespace lift_005C3AA0 {
// @name UnknownClass::GetCachedVec3Y
// @class UnknownClass
// @summary Returns the Y component (element 1) of the cached vec3 obtained from GetCachedVec3Ptr.

float* ext_005C3A30(void* self);

float fn_005C3AA0(void* self) {
    float* v = ext_005C3A30(self);
    return v[1];
}
} // namespace lift_005C3AA0
