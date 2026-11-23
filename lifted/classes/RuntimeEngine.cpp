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

// [0x0046F9E0] RuntimeEngine::vfunc_14_off_4 (70 bytes)
namespace lift_0046F9E0 {
extern void ext_0046F7D0(uint32_t arg);
extern void ext_00661650(void* self, void* arg);

// @name RuntimeEngine::vfunc_14_off_4
// @class RuntimeEngine
// @summary Dispatches arg 0x21 to a helper with the address of this+0x180 (when this+0x17c is non-null); otherwise forwards arg to ext_0046F7D0. Returns the second argument.
// @field RuntimeEngine +0x17C uint8_t field_0x17c
// @field RuntimeEngine +0x180 uint8_t field_0x180
uint32_t fn_0046F9E0(void* self, uint32_t a, uint32_t b) {
    (void)a;
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);

    if (b == 0x21) {
        // Only the addresses of this+0x17c / this+0x180 are computed; no loads.
        uintptr_t edx = base + 0x17c;
        uintptr_t p = 0;
        if (edx != 0) {
            p = base + 0x180;
        }
        ext_00661650(reinterpret_cast<void*>(static_cast<uintptr_t>(b)),
                     reinterpret_cast<void*>(p));
        return b;
    }

    ext_0046F7D0(b);
    return b;
}
} // namespace lift_0046F9E0
