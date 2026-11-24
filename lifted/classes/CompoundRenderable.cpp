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

// [0x00537D60] CompoundRenderable::vfunc_24 (29 bytes)
namespace lift_00537D60 {
// @name CompoundRenderable::vfunc_24
// @class CompoundRenderable
// @summary Calls vfunc slot 24 on the sub-renderable at +0x14 (if present), then tail-calls slot 24 on the object at +0x18 with this = &field_0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18
void fn_00537D60(void* self) {
    // Slot 24 (byte offset 0x60) of the vtable.
    using VFunc = void (*)(void*);

    void* first = lift_field<void*>(self, 0x14);
    if (first != nullptr) {
        void** vt = *reinterpret_cast<void***>(first);
        reinterpret_cast<VFunc>(vt[24])(first);
    }

    void* second = lift_field<void*>(self, 0x18);
    void** vt2 = *reinterpret_cast<void***>(second);
    // The callee receives the address of the field itself (lea ecx, [esi+0x18]),
    // while the vtable is taken from the object stored at +0x18.
    reinterpret_cast<VFunc>(vt2[24])(static_cast<uint8_t*>(self) + 0x18);
}
} // namespace lift_00537D60
