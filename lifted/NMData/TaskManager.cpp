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
