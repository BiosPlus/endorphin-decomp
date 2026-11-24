// Lifted C++ translation unit: lifted/classes/RelationshipHinge.cpp
#include "lift_compat.h"

// [0x00658910] RelationshipHinge::vfunc_10 (31 bytes)
namespace lift_00658910 {
// Known callee 0x007C9310: copyVec3AtStride32 (Copies 3 floats from base + index * 32 to out.)
extern void ext_007C9310(uint32_t base, uint32_t index, uint32_t out);
// Known callee 0x007D8700: sub_007D8700 (Returns its first stack argument unchanged (mov eax, [esp+4]; ret).)
extern uint32_t ext_007D8700(uint32_t arg0);

// @name RelationshipHinge::vfunc_10
// @class RelationshipHinge
// @summary Copies three floats from the element at index 0 of the buffer referenced by this+0x64 into the caller-supplied output.
// @field RelationshipHinge +0x64 uint32_t field_0x64
void fn_00658910(void* self, uint32_t out) {
    const uint32_t base = lift_field<uint32_t>(self, 0x64);
    const uint32_t resolved = ext_007D8700(base);
    ext_007C9310(resolved, 0, out);
}
} // namespace lift_00658910

// [0x006588F0] RelationshipHinge::vfunc_9 (31 bytes)
namespace lift_006588F0 {
// Known callee 0x007D8700: sub_007D8700 (Returns its first stack argument unchanged (mov eax, [esp+4]; ret).)
extern uint32_t ext_007D8700(uint32_t arg0);
// Known callee 0x007C9340: copyVec3FromIndexedElement (Copies three floats at +0x10 of the idx-th 32-byte element of base into out[0..2].)
extern void ext_007C9340(const void* base, UINT idx, FLOAT* out);

// @name RelationshipHinge::vfunc_9
// @class RelationshipHinge
// @summary Copies the vec3 at +0x10 of element 0 of the buffer pointed to by this+0x64 into out.
// @field RelationshipHinge +0x64 uint32_t field_0x64
void fn_006588F0(void* self, FLOAT* out) {
    // Original code passes this->field_0x64 through sub_007D8700 (identity on its first argument),
    // then calls copyVec3FromIndexedElement(base, 0, out).
    const uint32_t base = ext_007D8700(lift_field<uint32_t>(self, 0x64));
    ext_007C9340(reinterpret_cast<const void*>(static_cast<uintptr_t>(base)), 0, out);
}
} // namespace lift_006588F0
