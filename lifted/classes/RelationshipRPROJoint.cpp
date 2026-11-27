// Lifted C++ translation unit: lifted/classes/RelationshipRPROJoint.cpp
#include "lift_compat.h"

// [0x006595F0] RelationshipRPROJoint::vfunc_52 (24 bytes)
namespace lift_006595F0 {
// Known callee 0x00645A00: ZeroDoubleTripleRange (Zeroes the three doubles (+0x00, +0x08, +0x10) of every 24-byte entry in the range [begin, end) held at this+0x10/this+0x14.)
extern void ext_00645A00(void* self);
// Callee 0x0065C5E0 (sub_0065C5E0, 10 bytes); receives this+0x68 as its implicit `this` (ecx).
extern void ext_0065C5E0(void* self);

// @name RelationshipRPROJoint::vfunc_52
// @class RelationshipRPROJoint
// @summary Zeroes the entry range via ext_00645A00, clears the bool at +0x64, and invokes the sub-object at +0x68 (ret 8: callee pops two stack args).
// @field RelationshipRPROJoint +0x64 uint8_t flag
void fn_006595F0(void* self) {
    ext_00645A00(self);
    lift_field<uint8_t>(self, 0x64) = 0;
    ext_0065C5E0(static_cast<uint8_t*>(self) + 0x68);
}
} // namespace lift_006595F0
