// Lifted C++ translation unit: lifted/SpinButtonStates/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004584E0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x00458720] SpinButtonStates::ClickedDownState::vfunc_0 (30 bytes)
// @name SpinButtonStates::ClickedDownState::vfunc_0
// @class SpinButtonStates::ClickedDownState
// @summary MSVC scalar deleting destructor: calls sub_004584E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00458720(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004584E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
