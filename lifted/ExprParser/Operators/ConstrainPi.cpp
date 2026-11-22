// Lifted C++ translation unit: lifted/ExprParser/Operators/ConstrainPi.cpp
#include "lift_compat.h"
// Constant pool (x87 qword loads from .rdata).
extern const double mem_00990040; // 3.1415937410125734 (upper wrap test)
extern const double mem_009576E8; // 3.1415927410125732 (pi as float, wrap target)
extern const double mem_00955090; // 6.2831854820251465 (2*pi)
extern const double mem_00990038; // -3.1415927410125732 (lower wrap bound)

// [0x006A1910]
// @name ExprParser::Operators::ConstrainPi::vfunc_3
// @class ExprParser::Operators::ConstrainPi
// @summary Evaluates the operand (vtable slot 1), wraps the resulting angle into [-pi, pi] by adding or subtracting 2*pi, then passes it to the operand's vtable slot 7.
// @field ExprParser::Operators::ConstrainPi +0x04 void* operand
void fn_006A1910(void* self) {
    void* sub = lift_field<void*>(self, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    float x = reinterpret_cast<float (__thiscall*)(void*, void*)>(vtbl[0x04 / 4])(sub, self);

    if (static_cast<double>(x) > mem_00990040) {
        // Too large: subtract 2*pi until within pi.
        while (static_cast<double>(x) > mem_009576E8) {
            x = static_cast<float>(static_cast<double>(x) - mem_00955090);
        }
    } else if (static_cast<double>(x) < mem_00990038) {
        // Too small: add 2*pi until within -pi.
        while (static_cast<double>(x) < mem_00990038) {
            x = static_cast<float>(static_cast<double>(x) + mem_00955090);
        }
    }

    reinterpret_cast<void (__thiscall*)(void*, void*, float)>(vtbl[0x1c / 4])(sub, self, x);
}
