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
// Callee 0x0046C390: receives the object and a float value (cdecl, caller cleans up).
extern "C" void ext_0046C390(void* self, float value);

extern "C" void ext_0046C390(void* self, float value);
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
// Calls into the runtime: ext_00672080 is the constructor-style initializer for the
// function-local static object (object, float value, int zero); ext_006A6C87 registers
// the static's destructor (cdecl, one arg).
extern "C" void ext_006A6C87(const void* arg);
// Guard word for the function-local static (bit 0 = initialized).
extern "C" uint32_t mem_00B59654;
// Storage of the function-local static object (only its address is used).
extern "C" uint8_t mem_00B5964C[];
// Calls into the runtime: ext_00672080 is the constructor-style initializer for the
// function-local static object (object, float value, int zero); ext_006A6C87 registers
// the static's destructor (cdecl, one arg).
// Guard word for the function-local static (bit 0 = initialized).
// Storage of the function-local static object (only its address is used).

// [0x0066CE30] ExprParser::RealType::vfunc_18 (98 bytes)
// @name ExprParser::RealType::vfunc_18
// @class ExprParser::RealType
// @summary Lazily initializes a function-local static real-valued object (from 0.0f) and returns its address; the stack argument is unused.
// (No self-field offsets are accessed; `self` and the stack argument are ignored.)
void* fn_0066CE30(void* self, int32_t arg) {
    (void)self;
    (void)arg;

    void* obj = static_cast<void*>(mem_00B5964C);
    if ((mem_00B59654 & 1u) == 0) {
        mem_00B59654 |= 1u;
        ext_00672080(obj, 0.0f, 0);
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00921730)));
    }
    return obj;
}
