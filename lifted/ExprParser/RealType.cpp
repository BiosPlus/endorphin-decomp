// Lifted C++ translation unit: lifted/ExprParser/RealType.cpp
#include "lift_compat.h"
// Callee: sub_006720C0 (thiscall-style: this in ecx, one stack argument).
extern "C" uint32_t __thiscall ext_006720C0(uint32_t self, uint32_t arg);

// [0x0066B0B0] ExprParser::RealType::vfunc_8 (17 bytes)
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
