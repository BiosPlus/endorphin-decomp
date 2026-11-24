// Lifted C++ translation unit: lifted/leaf/tiny_610000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00610A80] sub_00610A80 (13 bytes)
namespace lift_00610A80 {
// @name sub_00610A80
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00610A80(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x130));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 0);
}
} // namespace lift_00629B00
} // namespace lift_00610A80

// [0x00610A90] sub_00610A90 (13 bytes)
namespace lift_00610A90 {
// @name sub_00610A90
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00610A90(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x130));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 1);
}
} // namespace lift_00629B00
} // namespace lift_00610A90

// [0x00610AA0] sub_00610AA0 (13 bytes)
namespace lift_00610AA0 {
// @name sub_00610AA0
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00610AA0(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x130));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 2);
}
} // namespace lift_00629B00
} // namespace lift_00610AA0

// [0x00610A60] sub_00610A60 (20 bytes)
namespace lift_00610A60 {
// @name VirtualSlot66Forward
// @class <unknown> (vtable dispatcher; receiver class not identified)
// @summary Forwards its one argument to virtual slot 0x108 (index 66) of the receiver's vtable, passing 0 as the first argument; returns the callee's result.
// @field <unknown> +0x00 void* vptr
uint32_t fn_00610A60(void* self, uint32_t arg) {
    // Load the vtable pointer stored at offset 0 of the receiver.
    void* vtbl = lift_field<void*>(self, 0x00);
    // Slot at byte offset 0x108 in the vtable (index 66 with 4-byte entries).
    using SlotFn = uint32_t (*)(void* self, uint32_t zero, uint32_t value);
    SlotFn target = reinterpret_cast<SlotFn>(
        lift_field<void*>(vtbl, 0x108));
    return target(self, 0u, arg);
}
} // namespace lift_00610A60

// [0x00610AB0] sub_00610AB0 (20 bytes)
namespace lift_00610AB0 {
// @name ForwardArgToVirtualSlot66
// @class <Unknown> (owning class not yet identified; accessed via vptr at +0x00)
// @summary Calls virtual slot at vtable offset 0x108 on self with (1, arg) and returns its result.
// @field <Unknown> +0x00 void* vptr

// Thiscall-style virtual forwarder: self is passed in ECX, the single stack
// argument is `arg`. The callee receives (self, 1, arg) and its return value
// (EAX) is passed straight through. Callee pops nothing (caller-cleans
// pattern is replaced by the explicit return of the callee's value).
using VirtualSlot66Fn = uint32_t (*)(void* self, uint32_t flag, uint32_t arg);

uint32_t fn_00610AB0(void* self, uint32_t arg) {
    void* vtbl = lift_field<void*>(self, 0x00);              // mov eax, [ecx]
    void* slot = lift_field<void*>(vtbl, 0x108);            // mov eax, [eax+0x108]
    auto target = reinterpret_cast<VirtualSlot66Fn>(slot);
    return target(self, 1u, arg);                           // push edx; push 1; call eax
}
} // namespace lift_00610AB0

// [0x00610AD0] sub_00610AD0 (20 bytes)
namespace lift_00610AD0 {
// @name ForwardArgToVirtualSlot66WithFlag2
// @class <Unknown> (owning class not yet identified; accessed via vptr at +0x00)
// @summary Calls virtual slot at vtable offset 0x108 on self with (2, arg) and returns its result.
// @field <Unknown> +0x00 void* vptr

// Thiscall-style virtual forwarder: self is passed in ECX, the single stack
// argument is `arg` (edx). The callee receives (self, 2, arg) and its return
// value (EAX) is passed straight through.
using VirtualSlot66Fn = uint32_t (*)(void* self, uint32_t flag, uint32_t arg);

uint32_t fn_00610AD0(void* self, uint32_t arg) {
    void* vtbl = lift_field<void*>(self, 0x00);   // mov eax, [ecx]
    void* slot = lift_field<void*>(vtbl, 0x108);  // mov eax, [eax+0x108]
    auto target = reinterpret_cast<VirtualSlot66Fn>(slot);
    return target(self, 2u, arg);                 // push edx; push 2; call eax
}
} // namespace lift_00610AD0
