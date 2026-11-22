// Lifted C++ translation unit: lifted/StateMachine/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0051FBB0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x00520420] StateMachine::State::vfunc_0 (30 bytes)
// @name StateMachine::State::vfunc_0
// @class StateMachine::State
// @summary MSVC scalar deleting destructor: calls sub_0051FBB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00520420(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0051FBB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0051DE10] StateMachine::State::vfunc_11 (28 bytes)
// @name StateMachine::State::vfunc_11
// @class StateMachine::State
// @summary If field +0x154 is set, forward to vtable slot 11 of the sub-object at +0x10 and return its result; else return 0.
// @field StateMachine::State +0x154 void* field_0x154
uint32_t fn_0051DE10(void* self) {
    void* sub = lift_field<void*>(self, 0x154);
    if (sub == nullptr) {
        return 0;
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Slot11 = uint32_t (*)(void*);
    return reinterpret_cast<Slot11>(vtbl[11])(obj);
}
