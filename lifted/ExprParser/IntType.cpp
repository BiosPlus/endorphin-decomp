// Lifted C++ translation unit: lifted/ExprParser/IntType.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_006720C0(void* self, int32_t value);
extern "C" int __cdecl ext_006A6C87(void (*fn)(void));
extern "C" void ext_00921750(void);
extern "C" uint8_t mem_00B59658[8];
extern "C" uint32_t mem_00B59660;

// [0x0066CF10] ExprParser::IntType::vfunc_18 (94 bytes)
// @name ExprParser::IntType::vfunc_18
// @class ExprParser::IntType
// @summary Lazily initializes and returns the static default value object at 0x00B59658.
void* __thiscall fn_0066CF10(void* /*self*/, uint32_t /*unused_arg*/) {
    if ((mem_00B59660 & 1u) == 0u) {
        mem_00B59660 |= 1u;
        ext_006720C0(mem_00B59658, 0);
        ext_006A6C87(&ext_00921750);
    }
    return mem_00B59658;
}
