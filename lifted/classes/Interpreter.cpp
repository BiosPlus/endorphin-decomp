// Lifted C++ translation unit: lifted/classes/Interpreter.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00504940]
namespace lift_00504940 {
// @name Interpreter::vfunc_25
// @class Interpreter
// @summary Returns a std::string initialized from global C-string pointer at 0x00A9EE78.


extern uint32_t mem_00A9EE78;

extern void* __thiscall fn_00504940(void* self, void* ret_buf, uint32_t arg1, uint32_t arg2) {
    (void)self;
    (void)arg1;
    (void)arg2;
    const char* str = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EE78));
    new (ret_buf) std::string(str ? str : "");
    return ret_buf;
}
} // namespace lift_00504940
