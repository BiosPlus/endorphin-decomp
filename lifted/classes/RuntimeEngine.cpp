// Lifted C++ translation unit: lifted/classes/RuntimeEngine.cpp
#include "lift_compat.h"
// Known callee 0x0046F930: sub_0046F930 (65B). Signature not recovered; passed the adjusted this.
extern "C" void ext_0046F930(void* self);

// [0x0046FA30] RuntimeEngine::vfunc_0_off_C (11 bytes)
// @name RuntimeEngine::vfunc_0_off_C
// @class RuntimeEngine
// @summary Adjusts this from the +0xC (BaseEventListener) subobject back to RuntimeEngine and forwards to 0x0046F930.
void fn_0046FA30(void* self) {
    // Thunk: non-primary base subobject adjustment (this -= 12), then tail-forward.
    void* adjusted = static_cast<unsigned char*>(self) - 12;
    ext_0046F930(adjusted);
}
