// Lifted C++ translation unit: lifted/Commands/MirrorCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC640] Commands::MirrorCommand::vfunc_3 (34 bytes)
namespace lift_005AC640 {
extern const char mem_0095F4D8[];

// @name Commands::MirrorCommand::vfunc_3
// @class Commands::MirrorCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC640(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F4D8);
    return out;
}
} // namespace lift_005AC640

// [0x005AC560]
namespace lift_005AC560 {
extern uint32_t mem_read32(uintptr_t addr);

// @name Commands::MirrorCommand::vfunc_1
// @class Commands::MirrorCommand
// @summary Applies a mirror operation via field_0x14 and notifies it and up to two chained objects via vfunc_0x8c
// @field Commands::MirrorCommand +0x10 uint32_t field_0x10
// @field Commands::MirrorCommand +0x14 uint32_t field_0x14
// @field Commands::MirrorCommand +0x18 uint32_t field_0x18

void __thiscall fn_005AC560(void* self) {
    auto base = reinterpret_cast<uintptr_t>(self);
    uint32_t obj = mem_read32(base + 0x14);
    uint32_t vtable = mem_read32(obj);

    using FnA0 = void(__thiscall*)(uint32_t, uint32_t, uintptr_t);
    auto fn_a0 = reinterpret_cast<FnA0>(static_cast<uintptr_t>(mem_read32(vtable + 0xA0)));
    fn_a0(obj, mem_read32(base + 0x10), base + 0x18);

    using Fn8C = void(__thiscall*)(uint32_t);
    obj = mem_read32(base + 0x14);
    vtable = mem_read32(obj);
    reinterpret_cast<Fn8C>(static_cast<uintptr_t>(mem_read32(vtable + 0x8C)))(obj);

    uint32_t next1 = mem_read32(mem_read32(base + 0x14) + 0x94);
    if (next1 == 0) {
        return;
    }
    vtable = mem_read32(next1);
    reinterpret_cast<Fn8C>(static_cast<uintptr_t>(mem_read32(vtable + 0x8C)))(next1);

    uint32_t next2 = mem_read32(mem_read32(mem_read32(base + 0x14) + 0x94) + 0x94);
    if (next2 == 0) {
        return;
    }
    vtable = mem_read32(next2);
    reinterpret_cast<Fn8C>(static_cast<uintptr_t>(mem_read32(vtable + 0x8C)))(next2);
}
} // namespace lift_005AC560
