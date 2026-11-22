// Lifted C++ translation unit: lifted/NMData/Transition.cpp
#include "lift_compat.h"
// Tail-call target (original: jmp 0x4871D0 with ecx = this).
extern "C" uint32_t ext_004871D0(void* ecx);

// [0x00496FE0] NMData::Transition::vfunc_1_off_8 (30 bytes)
// @name NMData::Transition::vfunc_1_off_8
// @class NMData::Transition
// @summary Forwards to ext_004871D0 when +0xB0 is null; otherwise calls vtable slot 1 of the object at +0xB0+0x10 and returns its result.
// @field NMData::Transition +0xB0 void* field_0xB0
uint32_t fn_00496FE0(void* self) {
    void* sub = lift_field<void*>(self, 0xB0);
    if (sub == nullptr) {
        return ext_004871D0(self);
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = uint32_t (*)(void* obj);
    return reinterpret_cast<VFn>(vtbl[1])(obj);
}
