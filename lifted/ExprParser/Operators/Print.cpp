// Lifted C++ translation unit: lifted/ExprParser/Operators/Print.cpp
#include "lift_compat.h"
#include <iostream>
#include <string>

// [0x006A1B10] ExprParser::Operators::Print::vfunc_3 (120 bytes)
namespace lift_006A1B10 {
extern uint8_t mem_00B5A0C0;

// Known callee 0x0041CEB0: UnknownClass::forwardToSubobjectSlot4 (Calls vtable slot 4 of the subobject at +0x04 with (arg1, self, 0, 0), then returns arg1.)
// Lifted form: ecx carries arg1, the stack carries a pointer to a std::string that receives the result.
extern void __thiscall ext_0041CEB0(uint32_t arg1, std::string* out);

// @name ExprParser::Operators::Print::vfunc_3
// @class ExprParser::Operators::Print
// @summary Once guard byte mem_00B5A0C0 is clear, builds a string from arg1 via ext_0041CEB0 and writes it to std::cout followed by std::endl.
void fn_006A1B10(uint32_t arg1) {
    if (mem_00B5A0C0 != 0) {
        return;
    }
    std::string text;
    ext_0041CEB0(arg1, &text);
    std::cout << text << std::endl;
}
} // namespace lift_006A1B10
