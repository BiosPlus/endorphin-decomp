// Lifted C++ translation unit: lifted/classes/IdentityNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>

#include <new>
namespace lift_0059CC60 {
extern void ext_00480920(uint32_t arg);

// @name IdentityNode::vfunc_2_off_4
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_0059CC60(uint32_t arg) {
    ext_00480920(arg);
}
} // namespace lift_0059CC60

// [0x00620EF0] IdentityNode::vfunc_17_off_C (99 bytes)
namespace lift_00620EF0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_00620EB0(void* self, void* owner);

// @name IdentityNode::vfunc_17_off_C
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x004D3070 (NMData::TransitionEventData::vfunc_17_off_C).
void* fn_00620EF0(void* self) {
    void* mem = ext_006A5C62(0xE8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_00620EB0(mem, owner);
}
} // namespace lift_00620EF0
