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
