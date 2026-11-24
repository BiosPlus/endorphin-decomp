// Lifted C++ translation unit: lifted/VMCSModes/DefaultImplementation.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
namespace lift_004F9E50 {
// @name VMCSModes::DefaultImplementation::vfunc_133
// @class VMCSModes::DefaultImplementation
// @summary Forwards the call to virtual slot 7 (+0x1c) of the object at this->+0x8->+0x14->+0x34 and returns its result.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
uintptr_t fn_004F9E50(void* self) {
    // Walk the delegate chain: this->delegate_0x8->field_0x14->field_0x34
    void* delegate = lift_field<void*>(self, 0x08);
    void* middle = lift_field<void*>(delegate, 0x14);
    void* target = lift_field<void*>(middle, 0x34);

    // Virtual dispatch on target: vtable slot 7 (0x1c / sizeof(void*) on the 32-bit build)
    void* vtable = lift_field<void*>(target, 0x00);
    uintptr_t slot = lift_field<uintptr_t>(vtable, 0x1c);

    // Original is a tail jump (jmp eax) with target in ecx (thiscall); no stack args are touched here.
    using Fn = uintptr_t (*)(void*);
    return reinterpret_cast<Fn>(slot)(target);
}
} // namespace lift_004F9E50

// [0x004F9D00] VMCSModes::DefaultImplementation::vfunc_97 (19 bytes)
namespace lift_004F9D00 {
// @name VMCSModes::DefaultImplementation::vfunc_97
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004F9E50 (VMCSModes::DefaultImplementation::vfunc_133).
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
namespace lift_004F9E50 {
// @name VMCSModes::DefaultImplementation::vfunc_133
// @class VMCSModes::DefaultImplementation
// @summary Forwards the call to virtual slot 7 (+0x1c) of the object at this->+0x8->+0x14->+0x34 and returns its result.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
uintptr_t fn_004F9D00(void* self) {
    // Walk the delegate chain: this->delegate_0x8->field_0x14->field_0x34
    void* delegate = lift_field<void*>(self, 0x08);
    void* middle = lift_field<void*>(delegate, 0x14);
    void* target = lift_field<void*>(middle, 0x34);

    // Virtual dispatch on target: vtable slot 7 (0x1c / sizeof(void*) on the 32-bit build)
    void* vtable = lift_field<void*>(target, 0x00);
    uintptr_t slot = lift_field<uintptr_t>(vtable, 0xCC);

    // Original is a tail jump (jmp eax) with target in ecx (thiscall); no stack args are touched here.
    using Fn = uintptr_t (*)(void*);
    return reinterpret_cast<Fn>(slot)(target);
}
} // namespace lift_004F9E50
} // namespace lift_004F9D00

// [0x004FA170]
namespace lift_004FA170 {
namespace lift_004FA170 {
// @name VMCSModes::DefaultImplementation::vfunc_106
// @class VMCSModes::DefaultImplementation
// @summary Returns true if the vector at (object reached via this->+0x8 -> +0x14 -> +0x34)+0x3D0 is non-empty (end != begin, nonzero begin); false otherwise.
// @field VMCSModes::DefaultImplementation +0x8 void* field_0x8

extern uint32_t mem_read32(uint32_t guest_addr);

// Guest-address convention: `self` is the guest address of the object.
//   p = *(self + 0x08)
//   s = *(p + 0x14)
//   t = *(s + 0x34)
//   begin = *(t + 0x3D0)
//   if begin == 0: return false
//   end = *(t + 0x3D4)
//   return ((int32_t)(end - begin) >> 2) != 0
extern bool __fastcall fn_004FA170(uint32_t self, int edx_unused) {
    (void)edx_unused;
    uint32_t p = mem_read32(self + 0x08u);
    uint32_t s = mem_read32(p + 0x14u);
    uint32_t t = mem_read32(s + 0x34u);
    uint32_t begin = mem_read32(t + 0x3D0u);
    if (begin == 0) {
        return false;
    }
    uint32_t end = mem_read32(t + 0x3D4u);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    return count != 0;
}
} // namespace lift_004FA170
} // namespace lift_004FA170
