// Lifted C++ translation unit: lifted/classes/Interpreter.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00504940] Interpreter::vfunc_25 (35 bytes)
namespace lift_00504940 {
// Import slot holding the target of `call dword ptr [0x924fe4]`
// (MSVCP80 basic_string<char>(const char*) constructor). Replaced below by a
// placement-new of std::string; kept for traceability against the original asm.
extern uint32_t mem_00924FE4;
// Data slot holding a C string pointer (0x00987140) passed to the constructor.
extern uint32_t mem_00A9EE78;

// @name Interpreter::vfunc_25
// @class Interpreter
// @summary Constructs a std::string in the caller-provided return slot from the C string pointed to by mem_00A9EE78 and returns that slot.
// (No +0xNN offsets of Interpreter are accessed; the function never reads `this`.)
std::string* fn_00504940(std::string* out, uint32_t /*unused*/, uint32_t /*unused*/) {
    // Original asm: `call [0x924fe4]` (string ctor import). Its address is taken
    // only to keep the reference visible; the portable std::string ctor below replaces the call.
    (void)&mem_00924FE4;
    const char* text = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EE78));
    ::new (static_cast<void*>(out)) std::string(text);
    return out;
}
} // namespace lift_00504940
