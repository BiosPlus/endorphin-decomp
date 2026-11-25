// Lifted C++ translation unit: lifted/NMData/SourceRigNode.cpp
#include "lift_compat.h"
#include <string>

// [0x005ABF30]
namespace lift_005ABF30 {
extern void* ext_006A5C62(std::size_t size);       // MFC80 operator new (thunk)
extern void ext_005ABA70(void* self, void* outer); // SourceRigNode base constructor (thiscall, one stack arg)

// @name NMData::SourceRigNode::vfunc_17_off_C
// @class NMData::SourceRigNode
// @summary Secondary-vtable (+0xC) slot 17: allocates a 0x194-byte SourceRigNode, runs its base constructor, installs vtables, returns the new object or NULL on allocation failure.
// @field NMData::SourceRigNode +0x00 void* vfptr_RigNode
// @field NMData::SourceRigNode +0x04 void* vfptr_TransformInterface
// @field NMData::SourceRigNode +0x08 void* vfptr_AnimationInterface
// @field NMData::SourceRigNode +0x0C void* vfptr_Updateable
// @field NMData::SourceRigNode +0x150 void* vfptr_HasBufferedTM
void* fn_005ABF30(void* self) {
    // self is the +0xC subobject; the full outer object sits 0xC bytes before it.
    void* outer = static_cast<char*>(self) - 0x0C;

    void* obj = ext_006A5C62(0x194);
    if (obj == nullptr) {
        return nullptr;
    }

    ext_005ABA70(obj, outer);

    auto put_ptr = [](void* base, std::size_t off, std::uintptr_t v) {
        std::memcpy(static_cast<char*>(base) + off, &v, sizeof(v));
    };
    put_ptr(obj, 0x000, 0x009498AC);
    put_ptr(obj, 0x004, 0x00949864);
    put_ptr(obj, 0x008, 0x00949824);
    put_ptr(obj, 0x00C, 0x009497D4);
    put_ptr(obj, 0x150, 0x009497C0);

    return obj;
}
} // namespace lift_005ABF30
