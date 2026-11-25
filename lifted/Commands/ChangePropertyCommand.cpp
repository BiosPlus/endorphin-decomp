// Lifted C++ translation unit: lifted/Commands/ChangePropertyCommand.cpp
#include "lift_compat.h"

// [0x006A0460]
namespace lift_006A0460 {
// @name Commands::ChangePropertyCommand::vfunc_1
// @class Commands::ChangePropertyCommand
// @summary Executes the change property command by invoking vtable+0xA4 on the target object with pointers to field_0x10 and field_0x20.
// @field Commands::ChangePropertyCommand +0x10 uint32_t field_0x10
// @field Commands::ChangePropertyCommand +0x14 void* field_0x14
// @field Commands::ChangePropertyCommand +0x20 uint32_t field_0x20


void __thiscall fn_006A0460(void* this_ptr) {
    uint8_t* self = static_cast<uint8_t*>(this_ptr);
    void* target = *reinterpret_cast<void**>(self + 0x14);
    void** vtable = *reinterpret_cast<void***>(target);
    using VFuncA4 = void(__thiscall*)(void*, void*, void*);
    auto vfunc = reinterpret_cast<VFuncA4>(vtable[0xA4 / sizeof(void*)]);
    vfunc(target, self + 0x10, self + 0x20);
}
} // namespace lift_006A0460
