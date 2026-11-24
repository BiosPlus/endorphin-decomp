// Lifted C++ translation unit: lifted/leaf/decompiled_5C0000.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x005CF3E0] sub_005CF3E0 (58 bytes)
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

// [0x005CFE10]
namespace lift_005CFE10 {
// @name sub_005CFE10
// @summary Forwards a byte/flag to child object at +0x2C4 via vtable[1] if present, and stores it at +0x1F2.
// @field Unknown +0x1F2 uint8_t field_0x1F2
// @field Unknown +0x2C4 uint32_t field_0x2C4


extern uint32_t mem_read32(uint32_t addr);
extern void mem_write8(uint32_t addr, uint8_t val);

void __thiscall sub_005CFE10(uint32_t self, uint32_t arg) {
    uint32_t child = mem_read32(self + 0x2C4);
    if (child != 0) {
        uint32_t vtable = mem_read32(child);
        uint32_t fn = mem_read32(vtable + 0x4);
        using FnType = void(__thiscall*)(uint32_t, uint32_t);
        reinterpret_cast<FnType>(static_cast<uintptr_t>(fn))(child, arg);
    }
    mem_write8(self + 0x1F2, static_cast<uint8_t>(arg));
}
} // namespace lift_005CFE10
