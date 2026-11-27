// Lifted C++ translation unit: lifted/classes/NMMatrixStackManager.cpp
#include "lift_compat.h"
#include <cstring>

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

// [0x0054ECF0]
namespace lift_0054ECF0 {
// @name NMMatrixStackManager::popMatrix
// @class NMMatrixStackManager
// @summary Pops the top 4x4 matrix from the stack and loads the new top matrix via glLoadMatrixf
// @field NMMatrixStackManager +0x08 uint32_t field_0x08
// @field NMMatrixStackManager +0x0C uint32_t field_0x0C


extern void* mem_00925134;
extern void* mem_009254B4;

void __thiscall fn_0054ECF0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint32_t first = *reinterpret_cast<uint32_t*>(obj + 0x08);
    if (first != 0) {
        uint32_t last = *reinterpret_cast<uint32_t*>(obj + 0x0C);
        int32_t count = static_cast<int32_t>(last - first) >> 6;
        if (count != 0) {
            last -= 0x40;
            *reinterpret_cast<uint32_t*>(obj + 0x0C) = last;
        }
    }

    uint32_t edi = *reinterpret_cast<uint32_t*>(obj + 0x0C);
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    if (first > edi) {
        invalid_param();
    }

    uint32_t top = edi - 0x40;
    if (top > *reinterpret_cast<uint32_t*>(obj + 0x0C) ||
        top < *reinterpret_cast<uint32_t*>(obj + 0x08)) {
        invalid_param();
    }

    if (top >= *reinterpret_cast<uint32_t*>(obj + 0x0C)) {
        invalid_param();
    }

    auto glLoadMatrixf = reinterpret_cast<void(__stdcall*)(const float*)>(mem_009254B4);
    glLoadMatrixf(reinterpret_cast<const float*>(static_cast<uintptr_t>(top)));
}
} // namespace lift_0054ECF0

// [0x0054EB50]
namespace lift_0054EB50 {
// @name NMMatrixStackManager::vfunc_5
// @class NMMatrixStackManager
// @summary Copies a 4x4 matrix into the top slot of the matrix stack and loads it into OpenGL.
// @field NMMatrixStackManager +0x08 uint32_t field_0x08
// @field NMMatrixStackManager +0x0C uint32_t field_0x0C


extern void (*mem_00925134)(void);
extern void (__stdcall *mem_009254B4)(const float*);

void __thiscall fn_0054EB50(void* self, const float* matrix) {
    uint32_t begin = lift_field<uint32_t>(self, 0x08);
    uint32_t end = lift_field<uint32_t>(self, 0x0C);

    if (begin > end) {
        mem_00925134();
    }

    uint32_t dst = end - 0x40u;
    if (dst > lift_field<uint32_t>(self, 0x0C) || dst < lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    if (dst >= lift_field<uint32_t>(self, 0x0C)) {
        mem_00925134();
    }

    std::memcpy(reinterpret_cast<void*>(static_cast<uintptr_t>(dst)), matrix, 0x40);
    mem_009254B4(matrix);
}
} // namespace lift_0054EB50

// [0x0054EC30] NMMatrixStackManager::vfunc_6 (121 bytes)
namespace lift_0054EC30 {
// Import slots (IAT entries) for the CRT invalid-parameter handler and glLoadIdentity.
extern void (*mem_00925134)();
extern void (*mem_009253D4)();

// @name NMMatrixStackManager::resetTopMatrixToIdentity
// @class NMMatrixStackManager
// @summary Validates the matrix window [lower, end), writes an identity 4x4 float matrix at end-0x40, then calls glLoadIdentity.
// @field NMMatrixStackManager +0x08 uint32_t field_0x08 (window lower bound)
// @field NMMatrixStackManager +0x0C uint32_t field_0x0C (window end; matrix block is [end-0x40, end))
void fn_0054EC30(void* self) {
    const uint32_t lower = lift_field<uint32_t>(self, 0x08);
    const uint32_t end = lift_field<uint32_t>(self, 0x0C);

    // Window checks: each failing check calls the CRT invalid-parameter handler
    // (which does not return in practice); execution then continues as in the original.
    if (lower > end) mem_00925134();

    const uint32_t block = end - 0x40;
    if (block > end || block < lower) mem_00925134();
    if (block >= end) mem_00925134();

    // Identity 4x4 float matrix at the block address (16 floats, offsets 0x00..0x3C).
    float* m = reinterpret_cast<float*>(static_cast<uintptr_t>(block));
    m[0]  = 1.0f; m[1]  = 0.0f; m[2]  = 0.0f; m[3]  = 0.0f;
    m[4]  = 0.0f; m[5]  = 1.0f; m[6]  = 0.0f; m[7]  = 0.0f;
    m[8]  = 0.0f; m[9]  = 0.0f; m[10] = 1.0f; m[11] = 0.0f;
    m[12] = 0.0f; m[13] = 0.0f; m[14] = 0.0f; m[15] = 1.0f;

    // Tail-call equivalent: original ends with jmp [glLoadIdentity].
    mem_009253D4();
}
} // namespace lift_0054EC30
