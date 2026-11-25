// Lifted C++ translation unit: lifted/ExprParser/VPtrProxyType.cpp
#include "lift_compat.h"
extern "C" void ext_00671FE0(void* self);
// Callee: sub_0041CF50 (thiscall-style: ecx = receiver, one stack argument, callee cleans).
extern "C" uint32_t ext_0041CF50(void* self, void* arg);

extern "C" uint32_t ext_0041CF50(void* self, void* arg);
// @name ExprParser::VPtrProxyType::vfunc_37
// @class ExprParser::VPtrProxyType
// @summary Auto-lifted identical-shape clone of 0x0066BA30 (ExprParser::ExtROType::vfunc_38).
void fn_0066BB90(void* self) {
    ext_00671FE0(self);
}
// Callee: sub_0041CF50 (thiscall-style: ecx = receiver, one stack argument, callee cleans).

// [0x0066BC40]
// @name ExprParser::VPtrProxyType::vfunc_39
// @class ExprParser::VPtrProxyType
// @summary Forwards its argument to ext_0041CF50 with the held pointer (field_0x00) as the receiver and returns the callee's result.
// @field ExprParser::VPtrProxyType +0x00 void* field_0x00
uint32_t fn_0066BC40(void* self, void* arg) {
    // ecx = [self + 0x00] (held pointer becomes the receiver)
    void* held = lift_field<void*>(self, 0x00);
    // push arg; call ext_0041CF50 (callee pops its own argument); ret 8
    return ext_0041CF50(held, arg);
}
