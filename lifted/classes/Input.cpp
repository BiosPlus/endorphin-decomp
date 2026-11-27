// Lifted C++ translation unit: lifted/classes/Input.cpp
#include "lift_compat.h"

// [0x00530400]
namespace lift_00530400 {
extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

// @name Input::vfunc_0_off_4
// @class Input
// @summary Acquires critical section lock, updates Input state from arg0, and releases lock.
// @field Input +0x0c void* field_0x0c
// @field Input +0x6c uint32_t field_0x6c
// @field Input +0x70 uint32_t field_0x70
void __thiscall fn_00530400(void* self, void* arg0) {
    void* obj = lift_field<void*>(self, 0x0c);
    using VfnGetLock = void* (__thiscall*)(void*);
    void* lock = lift_field<VfnGetLock>(lift_field<void*>(obj, 0), 0x1d8)(obj);

    ext_0065C640(lock);

    lift_field<uint32_t>(self, 0x6c) = 1;

    using VfnGetU32 = uint32_t (__thiscall*)(void*);
    lift_field<uint32_t>(self, 0x70) = lift_field<VfnGetU32>(lift_field<void*>(arg0, 0), 0xa4)(arg0);

    using VfnGetU8 = uint8_t (__thiscall*)(void*);
    uint8_t flag = lift_field<VfnGetU8>(lift_field<void*>(arg0, 0), 0x210)(arg0);
    void* obj2 = lift_field<void*>(self, 0x0c);
    lift_field<uint8_t>(obj2, 0x9c + 0x13c) = flag;

    ext_0065C650(lock);
}
} // namespace lift_00530400
