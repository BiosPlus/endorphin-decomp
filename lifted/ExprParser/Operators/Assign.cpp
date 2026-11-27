// Lifted C++ translation unit: lifted/ExprParser/Operators/Assign.cpp
#include "lift_compat.h"

// [0x0067F630]
namespace lift_0067F630 {
void ext_00672040(void* self);
void* __thiscall ext_004ECB40(void* self, void* out);
void* __thiscall ext_0041CF50(void* self, void* other);

// @name ExprParser::Operators::Assign::vfunc_3
// @class ExprParser::Operators::Assign
// @summary Evaluates assignment operator on operands and assigns result into output
// @field ExprParser::Operators::Assign +0x04 void* field_0x04

void __stdcall fn_0067F630(void* self_out, void* other) {
    ext_00672040(self_out);

    void* field04 = lift_field<void*>(self_out, 0x04);
    void** vtbl = *reinterpret_cast<void***>(field04);
    auto vfunc_a4 = reinterpret_cast<void(__thiscall*)(void*, void*, void*)>(vtbl[0xA4 / 4]);
    vfunc_a4(field04, self_out, other);

    struct TempPair {
        void* field_0x00;
        void* field_0x04;
    } temp;

    void* res = ext_004ECB40(other, &temp);
    ext_0041CF50(self_out, res);

    if (temp.field_0x04 != nullptr) {
        void** temp_vtbl = *reinterpret_cast<void***>(temp.field_0x04);
        auto vfunc_78 = reinterpret_cast<void(__thiscall*)(void*, void*)>(temp_vtbl[0x78 / 4]);
        uint32_t dummy = 0;
        vfunc_78(temp.field_0x04, &dummy);
    }
}
} // namespace lift_0067F630
