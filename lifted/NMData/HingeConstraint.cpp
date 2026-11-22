// Lifted C++ translation unit: lifted/NMData/HingeConstraint.cpp
#include "lift_compat.h"
// Known callee 0x0061E780: member function (thiscall, 2 stack args) invoked on the subobject at self+0x164.
extern "C" void ext_0061E780(void* subobj, uint32_t a, uint32_t c);

extern "C" void ext_0061E780(void* subobj, uint32_t a, uint32_t c);
// @name NMData::HingeConstraint::setFirstComponentVector
// @class NMData::HingeConstraint
// @summary When index < 1, forwards the vector (value, 0, 0) to virtual slot 61 (offset 0xF4) on self.
// @field NMData::HingeConstraint +0x00 void** vtable
void fn_006116B0(void* self, int32_t index, float value) {
    if (index < 1) {
        float vec[3] = {value, 0.0f, 0.0f};
        void** vtbl = *reinterpret_cast<void***>(self);
        reinterpret_cast<void (*)(void*, const float*)>(vtbl[0xF4 / 4])(self, vec);
    }
}
#include <new>
#include <string>

#include <string>
// @name NMData::HingeConstraint::getValueAtIndex
// @class NMData::HingeConstraint
// @summary When index < 1, calls virtual slot 68 (offset 0x110) to obtain a float array and returns element[index]; otherwise returns 0.0.
// @field NMData::HingeConstraint +0x00 void** vtable
float fn_00611740(void* self, int32_t index) {
    if (index < 1) {
        float scratch[4] = {0.0f, 0.0f, 0.0f, 0.0f};
        void** vtbl = *reinterpret_cast<void***>(self);
        float* arr = reinterpret_cast<float* (*)(void*, void*)>(vtbl[0x110 / 4])(self, scratch);
        return arr[index];
    }
    return 0.0f;
}

// [0x0061E9A0] NMData::HingeConstraint::vfunc_70 (38 bytes)
// @name NMData::HingeConstraint::forwardToSubobject
// @class NMData::HingeConstraint
// @summary Calls ext_0061E780 on the embedded subobject at self+0x164 with (a, c) and returns a unchanged; the second argument is unused.
// @field NMData::HingeConstraint +0x164 uint8_t subobject
uint32_t fn_0061E9A0(void* self, uint32_t a, uint32_t /*unused*/, uint32_t c) {
    void* subobj = reinterpret_cast<uint8_t*>(self) + 0x164;
    ext_0061E780(subobj, a, c);
    return a;
}

// [0x00611580] NMData::HingeConstraint::vfunc_69 (98 bytes)
// @name NMData::HingeConstraint::vfunc_69
// @class NMData::HingeConstraint
// @summary Constructs a std::string in the caller-supplied return slot from one of three names chosen by an int mode argument (0, 1, or other).
// (no fields: the function never reads `this`)
std::string* fn_00611580(void* self, std::string* out, int32_t mode) {
    (void)self;
    // mem_00A9F058 / mem_00A9F380 hold pointers to string literals; mem_00928B5D is the literal for the default case.
    extern const char* const mem_00A9F058;
    extern const char* const mem_00A9F380;
    extern const char mem_00928B5D[];
    const char* name;
    if (mode == 0) {
        name = mem_00A9F058;
    } else if (mode == 1) {
        name = mem_00A9F380;
    } else {
        name = mem_00928B5D;
    }
    return new (out) std::string(name);
}
