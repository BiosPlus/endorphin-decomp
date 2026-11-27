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

// [0x005433F0]
namespace lift_005433F0 {
// @name CameraTool::vfunc_33
// @class CameraTool
// @summary Copies a float triple from the sub-object's vfunc result into CameraTool and resets two blend constants to 1.0f.
// @field CameraTool +0x34 float field_0x34
// @field CameraTool +0x38 float field_0x38
// @field CameraTool +0x3C float field_0x3c
// @field CameraTool +0x40 float field_0x40
// @field CameraTool +0x74 float field_0x74
// @field CameraTool +0x78 float field_0x78
// @field CameraTool +0x7C float field_0x7c
// @field CameraTool +0x80 float field_0x80
// @field CameraTool +0x88 void* field_0x88

class CameraTool;

void __thiscall CameraTool_vfunc_33(CameraTool* self) {
    auto* this_bytes = reinterpret_cast<uint8_t*>(self);
    void* sub = lift_field<void*>(this_bytes, 0x88);
    if (sub == nullptr) {
        return;
    }

    // self->vtbl[0x78 / 4]() : thiscall, no args, returns a key.
    void** this_vtbl = lift_field<void**>(this_bytes, 0);
    using GetKeyFn = void* (__thiscall*)(void*);
    void* key = reinterpret_cast<GetKeyFn>(this_vtbl[0x78 / 4])(self);

    // sub->vtbl[0x18 / 4](key) : thiscall, one arg, returns a float-triple holder.
    void** sub_vtbl = *reinterpret_cast<void***>(sub);
    using GetDataFn = uint8_t* (__thiscall*)(void*, void*);
    uint8_t* data = reinterpret_cast<GetDataFn>(sub_vtbl[0x18 / 4])(sub, key);

    float a = lift_field<float>(data, 0x30);
    float b = lift_field<float>(data, 0x34);
    float c = lift_field<float>(data, 0x38);

    lift_field<float>(this_bytes, 0x34) = a;
    lift_field<float>(this_bytes, 0x38) = b;
    lift_field<float>(this_bytes, 0x3C) = c;
    lift_field<float>(this_bytes, 0x40) = 1.0f;
    lift_field<float>(this_bytes, 0x80) = 1.0f;
    lift_field<float>(this_bytes, 0x74) = a;
    lift_field<float>(this_bytes, 0x78) = b;
    lift_field<float>(this_bytes, 0x7C) = c;
}
} // namespace lift_005433F0
