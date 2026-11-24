// Lifted C++ translation unit: lifted/classes/CompoundRenderable.cpp
#include "lift_compat.h"

// [0x00537CA0]
namespace lift_00537CA0 {
// @name CompoundRenderable::vfunc_2
// @class CompoundRenderable
// @summary Calls virtual slot 2 on the object at +0x14 (if non-null), then tail-calls virtual slot 2 on the object at +0x18 with this+0x18 as the receiver.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 uint32_t* field_0x18

extern void CompoundRenderable_vfunc_2(void* self) {
    // mov ecx, [esi+0x14]; if (ecx) ecx->vtbl[2]();
    void* obj14 = lift_field<void*>(self, 0x14);
    if (obj14 != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj14);
        using Fn = void (*)(void*);
        reinterpret_cast<Fn>(vtbl[2])(obj14);
    }

    // eax = [esi+0x18]; edx = eax->vtbl[2]; ecx = esi+0x18; jmp edx
    void* obj18 = lift_field<void*>(self, 0x18);
    void** vtbl18 = *reinterpret_cast<void***>(obj18);
    using Fn = void (*)(void*);
    reinterpret_cast<Fn>(vtbl18[2])(&lift_field<void*>(self, 0x18));
}
} // namespace lift_00537CA0
