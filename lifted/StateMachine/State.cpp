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

// [0x0051DE30] StateMachine::State::vfunc_1 (17 bytes)
// @name StateMachine::State::vfunc_1
// @class StateMachine::State
// @summary Thiscall tail-forwarder: takes the object at this->field_0x154, reads the pointer at its +0x10, and tail-jumps to the code address stored at that pointer's +0x4 with this = (object + 0x10).
// @field StateMachine::State +0x154 uint32_t field_0x154

// Guest addresses are 32-bit; they are converted to host pointers only at the point of use.
using GuestCodePtr = uint32_t (__thiscall*)(void* self);

static inline void* guest_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

uint32_t __thiscall fn_0051DE30(void* self) {
    // mov ecx, [ecx+0x154]           -> inner = this->field_0x154
    const uint32_t inner = lift_field<uint32_t>(self, 0x154);
    // mov eax, [ecx+0x10]            -> holder = [inner+0x10]  (member at inner+0x10 is not a State field)
    const uint32_t holder = lift_field<uint32_t>(guest_ptr(inner), 0x10);
    // add ecx, 0x10                  -> this for the forwarded call = inner+0x10
    const uint32_t forward_this = inner + 0x10;
    // mov eax, [eax+0x4]             -> code = [holder+0x4]
    const uint32_t code = lift_field<uint32_t>(guest_ptr(holder), 0x4);
    // jmp eax                        -> tail call; modelled as a call returning the callee's eax
    const GuestCodePtr target = reinterpret_cast<GuestCodePtr>(static_cast<uintptr_t>(code));
    return target(guest_ptr(forward_this));
}
