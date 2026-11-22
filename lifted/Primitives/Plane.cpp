// Lifted C++ translation unit: lifted/Primitives/Plane.cpp
#include "lift_compat.h"
// Known callee 0x00661A80: sub_00661A80 (Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E440.)
// Called thiscall on the global object with one stack argument; returns a pointer.
extern "C" void* ext_00661A80(void* self, void* arg);
extern "C" void* mem_00AEE8A8;

// [0x0053A610] Primitives::Plane::vfunc_25 (55 bytes)
// @name Primitives::Plane::vfunc_25
// @class Primitives::Plane
// @summary If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.
// @field Primitives::Plane +0x04 uint8_t field_0x04
// @field Primitives::Plane +0x08 uint32_t field_0x08
// @field Primitives::Plane +0x20 uint32_t field_0x20
// @field Primitives::Plane +0x30 void* field_0x30
// arg1 and arg2 are unused by this body; the callee cleans them (ret 0xC).
void fn_0053A610(void* self, uint32_t /*arg1*/, uint32_t /*arg2*/, uint32_t arg3) {
    void* global = mem_00AEE8A8;
    if (global != nullptr) {
        void* subobject = (self != nullptr) ? reinterpret_cast<uint8_t*>(self) + 0x14 : nullptr;
        void* result = ext_00661A80(global, subobject);
        lift_field<void*>(self, 0x30) = result;
    }

    lift_field<uint32_t>(self, 0x08) = arg3;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint8_t>(self, 0x04) = 1;
}
