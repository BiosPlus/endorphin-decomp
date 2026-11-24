// Lifted C++ translation unit: lifted/leaf/tiny_5E0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x005E1360] sub_005E1360 (13 bytes)
namespace lift_005E1360 {
// @name sub_005E1360_forwardVirtualSlot1Field234
// @summary Loads the pointer at this+0x234 and tail-dispatches its vtable slot 1 with that pointer as `this`, returning the callee's result.
// @field Unknown +0x234 void* field_0x234

template <typename T>
static inline T mem_(const void* base, uintptr_t offset) {
    T value;
    std::memcpy(&value, static_cast<const unsigned char*>(base) + offset, sizeof(T));
    return value;
}

using VSlot1Fn = uint32_t (*)(void* self);

uint32_t fn_005E1360(void* self) {
    void* sub = mem_<void*>(self, 0x234);
    void** vtbl = *reinterpret_cast<void***>(sub);
    return reinterpret_cast<VSlot1Fn>(vtbl[1])(sub);
}
} // namespace lift_005E1360

// [0x005E1350] sub_005E1350 (16 bytes)
namespace lift_005E1350 {
// @name sub_005E1350
// @summary Auto-lifted identical-shape clone of 0x00545610 (PoseTool::vfunc_14).
namespace lift_00545610 {
// @name PoseTool::vfunc_14
// @class PoseTool
// @summary Forwards the call to the virtual method at vtable slot 14 (offset 0x38) of the object stored at this+0xA0, passing that object as `this`, and returns its result.
// @field PoseTool +0xA0 void* field_0xa0

typedef uintptr_t (*lift_vfn_t)(void* self);

uintptr_t fn_005E1350(void* self) {
    void* target = lift_field<void*>(self, 0x234);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0xD4));
    return fn(target);
}
} // namespace lift_00545610
} // namespace lift_005E1350

// [0x005E12D0] sub_005E12D0 (18 bytes)
namespace lift_005E12D0 {
// @name forwardToChild
// @summary If the object at self+0x234 is non-null, tail-dispatch to its vtable slot 6 with that object as `this`; otherwise return.
// @field self +0x234 void* field_0x234
void fn_005E12D0(void* self) {
    auto* const base = static_cast<unsigned char*>(self);
    void* const child = *reinterpret_cast<void**>(base + 0x234);
    if (child == nullptr) {
        return;
    }
    // Vtable slot 6 (byte offset 0x18 on a 32-bit target).
    void** const vtbl = *reinterpret_cast<void***>(child);
    auto const fn = reinterpret_cast<void (*)(void*)>(vtbl[6]);
    fn(child);
}
} // namespace lift_005E12D0

// [0x005E0AB0] sub_005E0AB0 (18 bytes)
namespace lift_005E0AB0 {
// @name forwardToChildVfunc0
// @summary If this->field_0x00 is non-null, calls vtable slot 0 of the object at field_0x00->field_0x08 with ecx = &field_0x00->field_0x08 and arg 1.
// @field <unknown> +0x00 void* field_0x00
// @field <unknown> +0x08 void* field_0x08
void fn_005E0AB0(void* self) {
    void* p = lift_field<void*>(self, 0x00);
    if (p == nullptr) {
        return;
    }

    // Address of p->field_0x08 is passed as `this` to the virtual call (ecx).
    void* thisArg = reinterpret_cast<uint8_t*>(p) + 0x08;
    void* obj = lift_field<void*>(p, 0x08);
    void** vtbl = *reinterpret_cast<void***>(obj);

    using VFn0 = void (__thiscall*)(void* thisArg, int arg);
    reinterpret_cast<VFn0>(vtbl[0])(thisArg, 1);
}
} // namespace lift_005E0AB0

// [0x005E12F0] sub_005E12F0 (18 bytes)
namespace lift_005E12F0 {
// @name Unknown::forwardToChildSlot7
// @class Unknown
// @summary If the child pointer at +0x234 is non-null, tail-calls its vtable slot at byte offset 0x1C with the child as this; otherwise returns.
// @field Unknown +0x234 void* child
void fn_005E12F0(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    void* child = *reinterpret_cast<void**>(base + 0x234);
    if (child == nullptr) {
        return;
    }
    // Vtable slot at byte offset 0x1C (32-bit layout: slot index 7).
    unsigned char* vtable = *reinterpret_cast<unsigned char**>(child);
    using SlotFn = void (*)(void*);
    SlotFn target = *reinterpret_cast<SlotFn*>(vtable + 0x1C);
    target(child);
}
} // namespace lift_005E12F0

// [0x005E1310] sub_005E1310 (23 bytes)
namespace lift_005E1310 {
// @name DelegateToSubobjectVfunc49
// @summary Forwards to vfunc slot 49 of the subobject at self+0x234; returns 0 if that subobject is null.
// @field Unknown +0x234 void* field_0x234 (subobject pointer; class unrecovered)
uint8_t fn_005E1310(void* self) {
    // mov ecx, [self+0x234]
    void* sub = lift_field<void*>(self, 0x234);
    // test ecx, ecx / je -> xor al, al; ret
    if (sub == nullptr) {
        return 0;
    }
    // mov eax, [ecx]; mov edx, [eax+0xc4]; jmp edx
    // Slot index is 0xc4 / sizeof(void*) on the 32-bit target; tail-call preserves the callee's return.
    void** vtable = *reinterpret_cast<void***>(sub);
    using VFunc = uint8_t (*)(void*);
    VFunc target = reinterpret_cast<VFunc>(vtable[0xc4 / sizeof(void*)]);
    return target(sub);
}
} // namespace lift_005E1310

// [0x005E1740] sub_005E1740 (23 bytes)
namespace lift_005E1740 {
// @name QueryChildVirtualOrTrue
// @class <unknown> (object type not identified; only offset +0x234 is known)
// @summary Forwards a virtual query (vtable slot 54) to the object at +0x234 if present, otherwise returns 1.
// @field <unknown> +0x234 uint32_t field_0x234
// (vtable slot at +0xD8 used on the child object; no fields accessed on the child itself)
uint32_t fn_005E1740(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    uint32_t child_addr = 0;
    std::memcpy(&child_addr, obj + 0x234, sizeof(child_addr));

    if (child_addr == 0) {
        return 1;
    }

    uint8_t* child = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(child_addr));

    uint32_t vtbl_addr = 0;
    std::memcpy(&vtbl_addr, child, sizeof(vtbl_addr));
    uint8_t* vtbl = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(vtbl_addr));

    uint32_t method_addr = 0;
    std::memcpy(&method_addr, vtbl + 0xD8, sizeof(method_addr));

    using VirtualFn = uint32_t(__thiscall*)(void*);
    auto fn = reinterpret_cast<VirtualFn>(static_cast<uintptr_t>(method_addr));
    return fn(child);
}
} // namespace lift_005E1740
