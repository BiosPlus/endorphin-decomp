// Lifted C++ translation unit: lifted/classes/NMMatrixStackManager.cpp
#include "lift_compat.h"

// [0x0054EA30] NMMatrixStackManager::vfunc_1 (77 bytes)
namespace lift_0054EA30 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo (no arguments, returns to caller).
extern void (*mem_00925134)(void);
// IAT slot for OPENGL32!glGetFloatv (WINAPI / stdcall; callee cleans its args).
extern void (*mem_009254B8)(uint32_t pname, float* params);

// @name NMMatrixStackManager::vfunc_1
// @class NMMatrixStackManager
// @summary Validates the unsigned window [field_0x08, field_0x0C] of this, then calls glGetFloatv(GL_MODELVIEW_MATRIX, end - 0x40) to write the 16-float matrix into the 64-byte block ending at field_0x0C.
// @field NMMatrixStackManager +0x08 uint32_t field_0x08 (window lower bound, unsigned compare)
// @field NMMatrixStackManager +0x0C uint32_t field_0x0C (window end; matrix block is [end-0x40, end))
void fn_0054EA30(void* self) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    const uint32_t lo = *reinterpret_cast<const uint32_t*>(base + 0x08);
    const uint32_t hi = *reinterpret_cast<const uint32_t*>(base + 0x0C);

    // Sanity checks; the original falls through after each invalid_parameter call.
    if (lo > hi) {
        mem_00925134();
    }
    const uint32_t start = hi - 0x40;
    if (start > hi || start < lo) {
        mem_00925134();
    }
    if (start >= hi) {
        mem_00925134();
    }

    // glGetFloatv(GL_MODELVIEW_MATRIX, start)
    mem_009254B8(0x0BA6, reinterpret_cast<float*>(static_cast<uintptr_t>(start)));
}
} // namespace lift_0054EA30
