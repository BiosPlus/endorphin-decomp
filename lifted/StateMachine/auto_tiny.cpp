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
