// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainer.cpp
#include "lift_compat.h"

// [0x0069A1F0]
namespace lift_0069A1F0 {
// @name ExprParser::ExpressionContainer::vfunc_2
// @class ExprParser::ExpressionContainer
// @summary Looks up an expression entry by key and initializes the output handle with the matching element or an empty handle.
// @field ExprParser::ExpressionContainer +0x08 uint8_t field_0x08
// @field ExprParser::ExpressionContainer +0x1C uint8_t* field_0x1c
// @field ExprParser::ExpressionContainer +0x20 uint8_t* field_0x20

uint32_t* __thiscall ext_0057CCE0(void* self, uint32_t key);
void* __cdecl ext_006721F0(void* out, void* elem);
void __cdecl ext_00671F30(void* out);
extern void (__cdecl* mem_00925134)();

void* __thiscall fn_0069A1F0(void* self, void* out, uint32_t key) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t* idx_ptr = ext_0057CCE0(base + 0x08, key);
    if (!idx_ptr) {
        ext_00671F30(out);
        return out;
    }

    uint8_t* vec_begin = lift_field<uint8_t*>(base, 0x1C);
    uint32_t idx = *idx_ptr;
    if (!vec_begin) {
        mem_00925134();
    } else {
        uint8_t* vec_end = lift_field<uint8_t*>(base, 0x20);
        int32_t count = static_cast<int32_t>(vec_end - vec_begin) >> 3;
        if (idx >= static_cast<uint32_t>(count)) {
            mem_00925134();
        }
    }

    vec_begin = lift_field<uint8_t*>(base, 0x1C);
    ext_006721F0(out, vec_begin + idx * 8);
    return out;
}
} // namespace lift_0069A1F0
