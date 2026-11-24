// Lifted C++ translation unit: lifted/leaf/decompiled_4A0000.cpp
#include "lift_compat.h"

// [0x004AEC60] sub_004AEC60 (14 bytes)
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_004AEC60(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0x04);
    void* vt = lift_field<void*>(sub, 0x08);
    ThisFn target = lift_field<ThisFn>(vt, 0x50);

    target(static_cast<uint8_t*>(sub) + 0x08);
}
} // namespace lift_004AEC60

// [0x004A2510] sub_004A2510 (17 bytes)
namespace lift_004A2510 {
// @name Unknown::setFlag4AndForwardToSlot1
// @class Unknown
// @summary Sets byte +0x04 of the object at self+0x14, then tail-calls vtable slot 1 of the object at self+0x1C (passing it as this) and returns that result.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x1C void* field_0x1C
uint32_t fn_004A2510(void* self) {
    void* flagOwner = lift_field<void*>(self, 0x14);
    lift_field<uint8_t>(flagOwner, 0x04) = 1;

    void* target = lift_field<void*>(self, 0x1C);
    void** vtable = *reinterpret_cast<void***>(target);
    using Slot1Fn = uint32_t (*)(void* self);
    return reinterpret_cast<Slot1Fn>(vtable[1])(target);
}
} // namespace lift_004A2510
