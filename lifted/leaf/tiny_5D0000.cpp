// Lifted C++ translation unit: lifted/leaf/tiny_5D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_005DA190(void* self);
extern "C" void __fastcall ext_005DC480(void* self);
#include <cstdint>

// [0x005DC420] sub_005DC420 (8 bytes)
// @name sub_005DC420
// @summary Member forwarding thunk: loads subobject pointer at +0x44 and tail-calls sub_005DA190.
extern "C" void __fastcall fn_005DC420(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x44);
    ext_005DA190(delegate_obj);
}

// [0x005DC960] sub_005DC960 (8 bytes)
// @name sub_005DC960
// @summary Member forwarding thunk: loads subobject pointer at +0x44 and tail-calls sub_005DC480.
extern "C" void __fastcall fn_005DC960(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x44);
    ext_005DC480(delegate_obj);
}

// [0x005D0AF0]
namespace lift_005D0AF0 {
// @name sub_005D0AF0
// @summary Returns 1 if the object at this+0x44 has a nonzero dword at offset +0x4, else 0.
// @field Unknown +0x44 void* field_0x44
// @field Unknown +0x04 uint32_t field_0x04

uint8_t sub_005D0AF0(void* self) {
    auto* obj = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x44);
    uint32_t value = *reinterpret_cast<uint32_t*>(obj + 0x4);
    return value != 0 ? 1 : 0;
}
} // namespace lift_005D0AF0

// [0x005DA190] sub_005DA190 (17 bytes)
namespace lift_005DA190 {
// @name sub_005DA190
// @summary Auto-lifted identical-shape clone of 0x00537C10 (CompoundRenderable::vfunc_19).
namespace lift_00537C10 {
// @name CompoundRenderable::vfunc_19
// @class CompoundRenderable
// @summary Forwards to vtable slot 19 (byte offset 0x4C) of the object at +0x14, passing that object as this; returns 0 if the pointer is null.
// @field CompoundRenderable +0x14 void* field_0x14
void* fn_005DA190(void* self) {
    void* child = lift_field<void*>(self, 0x4);
    if (child == nullptr) {
        return nullptr;
    }
    // Vtable pointer is the first word of the child object; slot 19 lives at byte offset 0x4C.
    void* vtbl = lift_field<void*>(child, 0);
    auto target = reinterpret_cast<void* (*)(void*)>(lift_field<void*>(vtbl, 0x5C));
    return target(child);
}
} // namespace lift_00537C10
} // namespace lift_005DA190
