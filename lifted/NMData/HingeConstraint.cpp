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
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D2A0(void* self, void* owner);

extern "C" void* ext_0061D2A0(void* self, void* owner);
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

// [0x0061E930] NMData::HingeConstraint::vfunc_17_off_C (99 bytes)
// @name NMData::HingeConstraint::vfunc_17_off_C
// @class NMData::HingeConstraint
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0061E930(void* self) {
    void* mem = ext_006A5C62(0x1D4);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0061D2A0(mem, owner);
}

// [0x006115F0]
namespace lift_006115F0 {
// @name NMData::HingeConstraint::vfunc_14
// @class NMData::HingeConstraint
// @summary Returns arg1; if arg2 == 0xc8, dispatches to sub_00661650 on arg1 with +0x164 when +0x160 is nonzero or sub_0046F7D0(arg1) otherwise; else delegates to NMData::AxisDefineSensorData::vfunc_14.
// @field NMData::HingeConstraint +0x160 uint8_t field_0x160
// @field NMData::HingeConstraint +0x164 uint8_t subobject


void __cdecl ext_0046F7D0(void* arg1);
void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
void __thiscall ext_00661650(void* self, void* arg1);

void* __thiscall fn_006115F0(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0xc8) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    auto* base = static_cast<uint8_t*>(self);
    if (base[0x160] != 0) {
        ext_00661650(arg1, base + 0x164);
    } else {
        ext_0046F7D0(arg1);
    }
    return arg1;
}
} // namespace lift_006115F0
