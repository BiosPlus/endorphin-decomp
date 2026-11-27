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

// [0x0069B070]
namespace lift_0069B070 {
// @name ExprParser::ExpressionContainer::vfunc_10
// @class ExprParser::ExpressionContainer
// @summary Dynamic-casts the argument to RTTI type 0x00AA3D80; if the cast succeeds, invokes three sub-object helpers pairing this+0x08/+0x18/+0x28 with the cast result's +0x08/+0x18/+0x28.
// @field ExprParser::ExpressionContainer +0x08 uint8_t field_0x08
// @field ExprParser::ExpressionContainer +0x18 uint8_t field_0x18
// @field ExprParser::ExpressionContainer +0x28 uint8_t field_0x28

extern int mem_00A2E2F8;
extern int mem_00AA3D80;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
// Known callee 0x0069A590: sub_0069A590 (366B)
extern void __thiscall ext_0069A590(void* self, void* other);
// Known callee 0x00490C80: sub_00490C80 (317B)
extern void __thiscall ext_00490C80(void* self, void* other);
// Known callee 0x00491150: sub_00491150 (82B)
extern void __thiscall ext_00491150(void* self, void* other);

// Lifted from ExprParser::ExpressionContainer::vfunc_10 (0x0069B070), 0x78 bytes, __thiscall with one stack arg.
void __thiscall fn_0069B070(void* self, void* arg) {
    uint8_t* self_b = static_cast<uint8_t*>(self);
    uint8_t* esi = static_cast<uint8_t*>(ext_006A6E9E(arg, 0, &mem_00A2E2F8, &mem_00AA3D80, 0));
    if (esi == nullptr) {
        return;
    }
    ext_0069A590(self_b + 0x08, esi + 0x08);
    ext_00490C80(self_b + 0x18, esi + 0x18);
    ext_00491150(self_b + 0x28, esi + 0x28);
}
} // namespace lift_0069B070
