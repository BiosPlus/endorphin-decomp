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

// [0x005DA110]
namespace lift_005DA110 {
// @name Unknown::setChildField5C
// @class Unknown
// @summary If this->field_0x04 is non-null, store the argument at ptr->field_0x5C.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x5C std::uint32_t field_0x5C

// Thiscall with one stack argument (ret 4). `self` is ECX, `arg` is [esp+4].
void sub_005DA110(std::uint8_t* self, std::uint32_t arg) {
    std::uint8_t* target = *reinterpret_cast<std::uint8_t**>(self + 0x04);
    if (target != nullptr) {
        *reinterpret_cast<std::uint32_t*>(target + 0x5C) = arg;
    }
}
} // namespace lift_005DA110

// [0x005DA130]
namespace lift_005DA130 {
// @name Unknown::SetChildField60
// @class Unknown
// @summary If this->field_0x04 is non-null, store the stack argument at child->field_0x60 (thiscall, ret 4).
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x60 uint32_t field_0x60
void fn_005DA130(void* self, uint32_t value) {
    void* child = lift_field<void*>(self, 0x04);
    if (child != nullptr) {
        lift_field<uint32_t>(child, 0x60) = value;
    }
}
} // namespace lift_005DA130

// [0x005DA150] sub_005DA150 (17 bytes)
namespace lift_005DA150 {
// @name Unknown::setChildField64
// @class Unknown
// @summary Stores the float argument into field +0x64 of the child object at this+0x04, if that child pointer is non-null.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x64 float field_0x64
extern void __thiscall fn_005DA150(void* self, int edx_unused, float value) {
    (void)edx_unused;
    void* child = lift_field<void*>(self, 0x04);
    if (child != nullptr) {
        lift_field<float>(child, 0x64) = value;
    }
}
} // namespace lift_005DA150

// [0x005DA170] sub_005DA170 (17 bytes)
namespace lift_005DA170 {
// @name Unknown::setChildField68
// @class Unknown
// @summary If the child pointer at +0x04 is non-null, store the stdcall argument into the child's +0x68 field.
// @field Unknown +0x04 void* child
void fn_005DA170(void* self, int32_t value) {
    void* child = lift_field<void*>(self, 0x04);
    if (child != nullptr) {
        lift_field<int32_t>(child, 0x68) = value;
    }
}
} // namespace lift_005DA170
