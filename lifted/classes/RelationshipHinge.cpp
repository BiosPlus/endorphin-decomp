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

// [0x00645F40] RelationshipHinge::vfunc_11 (50 bytes)
namespace lift_00645F40 {
// Stdcall-style: (float* value, float b, float c), callee pops 12 bytes (ret 0xc).
// @name RelationshipHinge::vfunc_11
// @class RelationshipHinge
// @summary Running update of *value: raise it to b if b > *value, else lower it to c if c < *value (NaN-safe, ordered compares).
void fn_00645F40(float* value, float b, float c) {
    // Phase 1: b > *value (ordered) -> *value = b.
    if (b > *value) {
        *value = b;
        return;
    }
    // Phase 2: otherwise, c < *value (ordered) -> *value = c.
    if (c < *value) {
        *value = c;
    }
}
} // namespace lift_00645F40

// [0x00658B30]
namespace lift_00658B30 {
extern float mem_00984790;
extern uint32_t ext_007C9C50(uint32_t arg0);
extern void ext_007C9E80(void* self, float val1, float val2);

// @name RelationshipHinge::vfunc_53
// @class RelationshipHinge
// @summary Forwards this->field_0x64 through ext_007C9C50 and passes the result to ext_007C9E80 with (0.0f, 80.0f).
// @field RelationshipHinge +0x64 uint32_t field_0x64
void fn_00658B30(void* self) {
    const uint32_t value = lift_field<uint32_t>(self, 0x64);
    const uint32_t adjusted = ext_007C9C50(value);
    ext_007C9E80(reinterpret_cast<void*>(static_cast<uintptr_t>(adjusted)), 0.0f, mem_00984790);
}
} // namespace lift_00658B30

// [0x00658B60] RelationshipHinge::vfunc_1 (34 bytes)
namespace lift_00658B60 {
// Known callee 0x007C9C50: addOffset0x160 (Returns the first argument plus 0x160.)
extern uint32_t ext_007C9C50(uint32_t arg0);
// Known callee 0x007C9E80: sub_007C9E80 (Stores a float parameter, sets a nonzero flag and absolute value for a second float, and clears a field.)
extern void ext_007C9E80(void* self, float val1, float val2);

// @name RelationshipHinge::vfunc_1
// @class RelationshipHinge
// @summary Reads field +0x64, offsets it by 0x160, and calls the helper with (ptr, 0.0f, 0.0f).
// @field RelationshipHinge +0x64 uint32_t field_0x64
void fn_00658B60(void* self) {
    const uint32_t field64 =
        *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x64);
    const uint32_t target = ext_007C9C50(field64);
    ext_007C9E80(reinterpret_cast<void*>(static_cast<uintptr_t>(target)), 0.0f, 0.0f);
}
} // namespace lift_00658B60
