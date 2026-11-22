// Lifted C++ translation unit: lifted/ExprParser/RealType.cpp
#include "lift_compat.h"
// Callee: sub_006720C0 (thiscall-style: this in ecx, one stack argument).
extern "C" uint32_t __thiscall ext_006720C0(uint32_t self, uint32_t arg);
// Callee 0x00672080: receives the object, a float value, and a zero int.
extern "C" void ext_00672080(void* self, float value, int zero);

extern "C" void ext_00672080(void* self, float value, int zero);
// @name ExprParser::RealType::vfunc_8
// @class ExprParser::RealType
// @summary Two-argument stdcall forwarder: passes the first stack argument as the callee's this and the second as its single stack argument, returning the callee's result.
// Disassembly: mov eax,[esp+8]; mov ecx,[esp+4]; push eax; call ext_006720C0; ret 8.
// The incoming ecx (this) is overwritten before use and is not read, so the function takes no object pointer.
uint32_t __stdcall fn_0066B0B0(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006720C0(first, second);
}
// Callee 0x006A6DE0: receives the rounded value (originally left on the x87 stack).
extern "C" void ext_006A6DE0(double rounded);

extern "C" void ext_006A6DE0(double rounded);
// @name ExprParser::RealType::vfunc_0
// @class ExprParser::RealType
// @summary Forwards the float read from *value (with a zero flag) to 0x00672080 and returns self.
void* fn_0066AD40(void* self, const float* value) {
    ext_00672080(self, *value, 0);
    return self;
}

// [0x0066AD80] ExprParser::RealType::vfunc_2 (55 bytes)
// @name ExprParser::RealType::vfunc_2
// @class ExprParser::RealType
// @summary Rounds the stored float half away from zero (x < 0 ? x - 0.5 : x + 0.5) and passes it to 0x006A6DE0.
// @field ExprParser::RealType +0x00 float field_0x00
void fn_0066AD80(void* self) {
    const float x = lift_field<float>(self, 0);
    const double r = (x < 0.0f) ? static_cast<double>(x) - 0.5
                                : static_cast<double>(x) + 0.5;
    ext_006A6DE0(r);
}
