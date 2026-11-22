// Lifted C++ translation unit: lifted/NMData/RigNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005ABA70(void* self, void* owner);

// [0x005ABB70] NMData::RigNode::vfunc_17_off_C (99 bytes)
// @name NMData::RigNode::vfunc_17_off_C
// @class NMData::RigNode
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005ABB70(void* self) {
    void* mem = ext_006A5C62(0x194);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005ABA70(mem, owner);
}
