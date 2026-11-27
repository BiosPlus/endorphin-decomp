// Lifted C++ translation unit: lifted/Commands/MirrorCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC640] Commands::MirrorCommand::vfunc_3 (34 bytes)
namespace lift_005AC640 {
extern const std::string mem_0095F4D8;

// @name Commands::MirrorCommand::vfunc_3
// @class Commands::MirrorCommand
// @summary Auto-lifted identical-shape clone of 0x005C3270 (NMData::FluidObjectData::vfunc_62).
// @field Commands::MirrorCommand +0x0 void** vptr
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_0095F4D8;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE4)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_005AC640(void* self, void* out) {
    (void)self;
    mem_00924FE4(out, mem_0095F4D8);
    return out;
}
} // namespace lift_005C3270
} // namespace lift_005AC640

// [0x005AC560] Commands::MirrorCommand::vfunc_1 (92 bytes)
namespace lift_005AC560 {
// @name Commands::MirrorCommand::vfunc_1
// @class Commands::MirrorCommand
// @summary Calls vfunc+0xA0 on the target at +0x14 with (+0x10 value, &+0x18), then vfunc+0x8C on the target, then vfunc+0x8C on the child at +0x94 and tail-calls vfunc+0x8C on its +0x94 child.
// @field Commands::MirrorCommand +0x10 uint32_t field_0x10
// @field Commands::MirrorCommand +0x14 void* target
// @field Commands::MirrorCommand +0x18 uint32_t field_0x18

namespace {
// Vtable slots are read at their byte offsets, matching the 32-bit original.
inline void* vslot(void* obj, ptrdiff_t byteOffset) {
    void* vtbl = lift_field<void*>(obj, 0);
    return lift_field<void*>(vtbl, byteOffset);
}
} // namespace

void fn_005AC560(void* self) {
    // Forward (value at +0x10, address of +0x18) to target's vfunc at +0xA0.
    void* target = lift_field<void*>(self, 0x14);
    using FwdFn = void (*)(void* thisPtr, uint32_t value, void* outPtr);
    reinterpret_cast<FwdFn>(vslot(target, 0xA0))(
        target,
        lift_field<uint32_t>(self, 0x10),
        &lift_field<uint32_t>(self, 0x18));

    // Call target's vfunc at +0x8C with no arguments.
    target = lift_field<void*>(self, 0x14);
    using NoArgFn = void (*)(void* thisPtr);
    reinterpret_cast<NoArgFn>(vslot(target, 0x8C))(target);

    // Child at target+0x94: if null, return; else call its vfunc at +0x8C.
    void* child = lift_field<void*>(lift_field<void*>(self, 0x14), 0x94);
    if (child == nullptr) {
        return;
    }
    reinterpret_cast<NoArgFn>(vslot(child, 0x8C))(child);

    // Grandchild at child+0x94: if null, return; else tail-call its vfunc at +0x8C.
    void* grandchild = lift_field<void*>(lift_field<void*>(lift_field<void*>(self, 0x14), 0x94), 0x94);
    if (grandchild == nullptr) {
        return;
    }
    reinterpret_cast<NoArgFn>(vslot(grandchild, 0x8C))(grandchild);
}
} // namespace lift_005AC560

// [0x005AC5C0] Commands::MirrorCommand::vfunc_2 (123 bytes)
namespace lift_005AC5C0 {
extern int mem_00B40640;

// @name Commands::MirrorCommand::vfunc_2
// @class Commands::MirrorCommand
// @summary Copies a 64-byte block from this+0x68 into a buffer returned by the target's accessor, notifies the target's subobject, then chains virtual calls through target+0x94 and tail-dispatches target vfunc 0x8C.
// @field Commands::MirrorCommand +0x14 void* target
// @field Commands::MirrorCommand +0x28 uint8_t field_0x28
// @field Commands::MirrorCommand +0x68 uint8_t field_0x68[64]

namespace {

using VFnSelf = void* (*)(void* self);
using VFnNotify = void (*)(void* self, int arg0, void* arg1, int arg2);

inline void* vtbl(void* obj) {
    return *reinterpret_cast<void**>(obj);
}

// Reads the function pointer stored at byte offset `off` in obj's vtable
// (32-bit layout, offsets as in the original asm).
inline void* vslot(void* obj, ptrdiff_t off) {
    return lift_field<void*>(vtbl(obj), off);
}

} // namespace

void fn_005AC5C0(void* self) {
    void* target = lift_field<void*>(self, 0x14);

    // Embedded subobject at target+0x04 (its address is the `this` for these calls).
    void* sub = static_cast<uint8_t*>(target) + 0x04;

    // dst = sub->vfunc_2C(); memcpy(dst, self+0x68, 64);
    void* dst = reinterpret_cast<VFnSelf>(vslot(sub, 0x2C))(sub);
    std::memcpy(dst, static_cast<uint8_t*>(self) + 0x68, 0x10 * sizeof(uint32_t));

    // sub->vfunc_0(2, self+0x28, mem_00B40640);
    reinterpret_cast<VFnNotify>(vslot(sub, 0x00))(
        sub, 2, static_cast<uint8_t*>(self) + 0x28, mem_00B40640);

    // if (target->+0x94) { p->vfunc_8C(); if (p->+0x94) q->vfunc_8C(); }
    void* p = lift_field<void*>(target, 0x94);
    if (p != nullptr) {
        reinterpret_cast<VFnSelf>(vslot(p, 0x8C))(p);
        void* q = lift_field<void*>(p, 0x94);
        if (q != nullptr) {
            reinterpret_cast<VFnSelf>(vslot(q, 0x8C))(q);
        }
    }

    // Tail call: return target->vfunc_8C();
    reinterpret_cast<VFnSelf>(vslot(target, 0x8C))(target);
}
} // namespace lift_005AC5C0
