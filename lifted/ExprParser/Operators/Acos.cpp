// Lifted C++ translation unit: lifted/ExprParser/Operators/Acos.cpp
#include "lift_compat.h"
#include <cmath>

// [0x006A17D0]
// @name ExprParser::Operators::Acos::vfunc_3
// @class ExprParser::Operators::Acos
// @summary Evaluates the operand's vfunc_1, clamps it to [-1, 1], takes acos of the clamped value and passes it to the operand's vfunc_7 along with the argument.
// @field ExprParser::Operators::UnaryOperator +0x04 void* field_0x04 (operand object pointer; class of the object at +0x04 is not confirmed)

// CRT thunk to _CIacos (x87 st0 in/out). Replaced below by std::acos on float.
extern "C" void ext_006A7256(void);

// Constant float -1.0f in .rdata.
extern const float mem_0093F7B8;

extern "C" float __stdcall fn_006A17D0(void* arg) {
    // Operand object at arg+0x04.
    void* child = lift_field<void*>(arg, 4);

    // child->vfunc_1(arg) -> float
    void** vt = *reinterpret_cast<void***>(child);
    using Vfn1 = float(__thiscall*)(void* self, void* arg);
    float v = reinterpret_cast<Vfn1>(vt[1])(child, arg);

    // Clamp: v > 1 -> 1; v < -1 -> -1; otherwise v (NaN passes through).
    float y;
    if (v > 1.0f) {
        y = 1.0f;
    } else if (v < mem_0093F7B8) {
        y = mem_0093F7B8;
    } else {
        y = v;
    }

    // a = acos(y)
    float a = std::acos(y);

    // child->vfunc_7(arg, a) -> float
    void** vt2 = *reinterpret_cast<void***>(child);
    using Vfn7 = float(__thiscall*)(void* self, void* arg, float a);
    return reinterpret_cast<Vfn7>(vt2[7])(child, arg, a);
}
