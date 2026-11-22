// Lifted C++ translation unit: lifted/ExprParser/ExtROType.cpp
#include "lift_compat.h"
// Forwards its single argument (this) to ext_00672000; no fields accessed here.
extern "C" void ext_00672000(void* self);

// [0x0066BA30] ExprParser::ExtROType::vfunc_38 (12 bytes)
// @name ExprParser::ExtROType::vfunc_38
// @class ExprParser::ExtROType
// @summary Forwards the object pointer to ExprParser::ExtROType helper at 0x00672000.
void fn_0066BA30(void* self) {
    ext_00672000(self);
}

// [0x0066AFE0]
// @name ExprParser::ExtROType::vfunc_2
// @class ExprParser::ExtROType
// @summary Tail-forwards to vtable slot 2 of the object at (*this)->+0x04, passing (*this) as the this/arg.
// @field ExprParser::ExtROType +0x00 void* field_0x00

typedef void* (*ExtROForwardFn)(void* self);

void* ExprParser_ExtROType_vfunc_2(void* self) {
    // eax = [this + 0x00]  (inner pointer)
    void* inner = *reinterpret_cast<void**>(self);
    // ecx = [inner + 0x04], edx = [ecx] (vtable of that object)
    void* obj = *reinterpret_cast<void**>(static_cast<char*>(inner) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    // jmp [vtbl + 0x08]  with inner written over the stack argument
    ExtROForwardFn target = reinterpret_cast<ExtROForwardFn>(vtbl[2]);
    return target(inner);
}
