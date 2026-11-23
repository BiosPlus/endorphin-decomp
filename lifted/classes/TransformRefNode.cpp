// Lifted C++ translation unit: lifted/classes/TransformRefNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x006264A0] TransformRefNode::vfunc_17_off_C (99 bytes)
namespace lift_006264A0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_00626450(void* self, void* owner);

// @name TransformRefNode::vfunc_17_off_C
// @class TransformRefNode
// @summary Auto-lifted identical-shape clone of 0x004D3070 (NMData::TransitionEventData::vfunc_17_off_C).
void* fn_006264A0(void* self) {
    void* mem = ext_006A5C62(0xEC);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_00626450(mem, owner);
}
} // namespace lift_006264A0
