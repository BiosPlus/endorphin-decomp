// Lifted C++ translation unit: lifted/NMData/TaskManager.cpp
#include "lift_compat.h"
extern "C" void ext_0050D7C0(void* self);

// [0x0050D8B0] NMData::TaskManager::vfunc_1_off_8 (11 bytes)
// @name NMData::TaskManager::vfunc_1_off_8
// @class NMData::TaskManager
// @summary Secondary-base thunk: adjusts this by -8 and forwards to sub_0050D7C0, then pops the 8-byte stack argument block.
extern "C" void __thiscall fn_0050D8B0(void* self) {
    // Original: add ecx,-0x8; call sub_0050D7C0; ret 8.
    // The 8 bytes of stack arguments are passed through to the callee and
    // cleaned up by this thunk's `ret 8`; they are not modeled here.
    ext_0050D7C0(static_cast<char*>(self) - 0x8);
}

// [0x0050B710] NMData::TaskManager::vfunc_3_off_4 (106 bytes)
namespace lift_0050B710 {
extern void* __thiscall ext_00640390(void* self, uint32_t a, uint32_t b);
extern void __thiscall ext_0050A9D0(void* self, void* a);
extern void ext_0050AFA0(void* a0, void* a1, uint32_t a2, uint32_t a3, uint32_t a4);
extern void* __thiscall ext_00640110(void* self, uint32_t a);
extern void __thiscall ext_00427550(void* self, const char* name);
extern uint32_t mem_00A9F308;
extern uint32_t mem_00A9F300;
extern uint32_t mem_00A9F30C;
extern uint32_t mem_00A9F438;
extern uint32_t mem_00A40EF8[];

// @name NMData::TaskManager::vfunc_3_off_4
// @class NMData::TaskManager
// @summary Resolves a value from the object's +0x08 index into a name table, runs the sub-object setup and vector walk, then assigns the resolved object and name into the child via ResetChildAndAssignName; returns the original argument.
// @field NMData::TaskManager +0x08 void* field_0x08
// @field NMData::TaskManager +0x0C unknown field_0x0C
// @field NMData::TaskManager +0x20 unknown field_0x20
extern void* __thiscall fn_0050B710(void* self, void* arg) {
    // Stack arg slot: the original overwrites it with the result of ext_00640110
    // and passes its address as `this` to ext_00427550.
    void* slot = arg;

    void* r1 = ext_00640390(arg, mem_00A9F308, 0);
    ext_0050A9D0(static_cast<char*>(self) + 0x0C, r1);
    ext_0050AFA0(static_cast<char*>(self) + 0x20, arg, mem_00A9F30C, mem_00A9F300, 0);

    void* r2 = ext_00640110(arg, mem_00A9F438);
    slot = r2;

    auto idx = reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x08));
    const char* name = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A40EF8[idx]));
    ext_00427550(&slot, name);

    return arg;
}
} // namespace lift_0050B710
