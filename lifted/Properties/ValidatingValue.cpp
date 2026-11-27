// Lifted C++ translation unit: lifted/Properties/ValidatingValue.cpp
#include "lift_compat.h"

// [0x004623B0]
namespace lift_004623B0 {
// @name Properties::ValidatingValue::vfunc_3
// @class Properties::ValidatingValue
// @summary Validates and sets the property value from a CString using the validator at +0x40.
// @field Properties::ValidatingValue +0x08 uint32_t field_0x08
// @field Properties::ValidatingValue +0x40 void* field_0x40
// @field Properties::ValidatingValue +0x44 uint32_t field_0x44


extern void* (__thiscall* const ext_0041CE40)(void* self, const char* str);
extern const char* (__thiscall* const mem_00924300)(void* self);
extern void (__thiscall* const mem_009242F4)(void* self);

void __thiscall fn_004623B0(void* self, void* arg0) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    struct TempValue {
        uint32_t field_0x00;
        void* field_0x04;
    } temp{};

    const char* str = mem_00924300(&arg0);
    void* val = ext_0041CE40(&temp, str);

    uint32_t f08 = lift_field<uint32_t>(obj, 0x08);
    void* validator = lift_field<void*>(obj, 0x40);
    uint32_t f44 = lift_field<uint32_t>(obj, 0x44);

    using ValidateFn = void(__thiscall*)(void*, uint32_t, void*, uint32_t);
    auto vtable = *reinterpret_cast<void***>(validator);
    reinterpret_cast<ValidateFn>(vtable[0])(validator, f44, val, f08);

    if (temp.field_0x04 != nullptr) {
        auto inner_vtable = *reinterpret_cast<void***>(temp.field_0x04);
        using CleanupFn = void(__thiscall*)(void*, void*);
        reinterpret_cast<CleanupFn>(inner_vtable[0x78 / sizeof(void*)])(temp.field_0x04, &temp);
    }

    mem_009242F4(&arg0);
}
} // namespace lift_004623B0
