// Lifted C++ translation unit: lifted/StateMachine/State.cpp
#include "lift_compat.h"

// [0x0051F9C0] StateMachine::State::vfunc_9 (17 bytes)
// @name StateMachine::State::vfunc_9
// @class StateMachine::State
// @summary Thunk: forwards to slot 1 of the secondary vtable of the sub-object at this+0x154 (this-adjusted by +8), returning its result.
// @field StateMachine::State +0x154 void* field_0x154
intptr_t fn_0051F9C0(void* self) {
    // obj = this->field_0x154; sub = obj + 8 (secondary interface subobject)
    char* obj = *reinterpret_cast<char**>(static_cast<char*>(self) + 0x154);
    char* sub = obj + 8;
    // sub->vtbl[1] is the target; the original tail-jumps with ecx = sub.
    void** vtbl = *reinterpret_cast<void***>(sub);
    auto target = reinterpret_cast<intptr_t (*)(void*)>(vtbl[1]);
    return target(sub);
}
