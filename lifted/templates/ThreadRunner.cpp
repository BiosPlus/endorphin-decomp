// Lifted C++ translation unit: lifted/templates/ThreadRunner.cpp
#include "lift_compat.h"

// [0x0046FAB0] ThreadRunner<RuntimeEngine>::vfunc_1 (13 bytes)
namespace lift_0046FAB0 {
// @name ThreadRunner<RuntimeEngine>::vfunc_1
// @class ThreadRunner<RuntimeEngine>
// @summary Thiscall thunk: adjusts this by (+0x18 + +0x14) and forwards to the function pointer stored at +0x10.
// @field ThreadRunner<RuntimeEngine> +0x10 void* field_0x10
// @field ThreadRunner<RuntimeEngine> +0x14 int32_t field_0x14
// @field ThreadRunner<RuntimeEngine> +0x18 int32_t field_0x18
//
// Note: the original ends in `jmp eax`, a tail call that forwards the caller's
// stack arguments untouched. Portable C++ cannot express that, so this version
// makes a normal call with the adjusted `this` and returns the callee's result.
// The callee receives no stack arguments of its own from this thunk.

typedef uintptr_t (__thiscall *ThisCallFn)(void* self);

uintptr_t fn_0046FAB0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    // ecx = [self+0x18] + [self+0x14] (absolute value, not an offset from self)
    uint32_t sum = static_cast<uint32_t>(*reinterpret_cast<int32_t*>(base + 0x18))
                 + static_cast<uint32_t>(*reinterpret_cast<int32_t*>(base + 0x14));
    void*    target = *reinterpret_cast<void**>(base + 0x10);
    void*    adjusted_this = reinterpret_cast<void*>(static_cast<uintptr_t>(sum));
    if (target == nullptr) {
        return 0;
    }
    return reinterpret_cast<ThisCallFn>(target)(adjusted_this);
}
} // namespace lift_0046FAB0
