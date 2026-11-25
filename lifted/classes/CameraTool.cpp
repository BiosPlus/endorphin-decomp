// Lifted C++ translation unit: lifted/classes/CameraTool.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

// [0x00543470] CameraTool::vfunc_32 (71 bytes)
namespace lift_00543470 {
// Virtual dispatch stand-ins. The original code calls through vtable slots:
//   ext_vfunc_0x78: CameraTool vtable[0x78 / 4] (no args), returns a 64-byte block pointer.
//   ext_vfunc_0x18: sub-object vtable[0x18 / 4] (one arg), returns a 64-byte block pointer.
extern const void* (*ext_vfunc_0x78)(void* self);
extern const void* (*ext_vfunc_0x18)(void* self, const void* arg);

// @name CameraTool::vfunc_32
// @class CameraTool
// @summary Fetches a 64-byte block via two virtual calls, copies it into this+0x04, then duplicates it into this+0x44.
// @field CameraTool +0x04 uint8_t[64] field_0x04
// @field CameraTool +0x44 uint8_t[64] field_0x44
// @field CameraTool +0x88 void* field_0x88
void fn_00543470(void* self) {
    if (lift_field<void*>(self, 0x88) == nullptr) {
        return;
    }

    const void* src = ext_vfunc_0x78(self);
    void* sub = lift_field<void*>(self, 0x88);
    const void* block = ext_vfunc_0x18(sub, src);

    std::memcpy(static_cast<uint8_t*>(self) + 0x04, block, 64);
    std::memcpy(static_cast<uint8_t*>(self) + 0x44, static_cast<uint8_t*>(self) + 0x04, 64);
}
} // namespace lift_00543470
