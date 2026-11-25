// Lifted C++ translation unit: lifted/ExprParser/Operators/Print.cpp
#include "lift_compat.h"
#include <iostream>
#include <string>
#include <new>

// [0x006A1B10]
namespace lift_006A1B10 {
// @name ExprParser::Operators::Print::vfunc_3
// @class ExprParser::Operators::Print
// @summary If the global mute flag is clear, formats the stack argument via ext_0041CEB0 into a string and writes it followed by std::endl to std::cout.

extern uint8_t mem_00B5A0C0;   // mute flag
extern uint32_t mem_00924E90;  // IAT slot: std::endl
extern uint32_t mem_00924E94;  // IAT slot: operator<<(ostream&, string const&)
extern uint32_t mem_00924E98;  // IAT slot: ostream::operator<<(manipulator)
extern uint32_t mem_00924FA0;  // IAT slot: std::cout
extern uint32_t mem_00924FF4;  // IAT slot: basic_string::~basic_string

uint32_t ext_0041CEB0(void* self, void* arg1);

template <typename T>
static inline T iat_fn(uint32_t slot_value) {
    return reinterpret_cast<T>(static_cast<uintptr_t>(slot_value));
}

void __stdcall fn_006A1B10(void* arg0) {
    if (mem_00B5A0C0 != 0) {
        return;
    }

    alignas(std::string) unsigned char buf[sizeof(std::string)];
    auto* text = new (buf) std::string();

    ext_0041CEB0(arg0, text);

    using OpStrFn = void* (*)(void* os, const std::string* s);
    using OpManipFn = void* (*)(void* os, void* manip);
    using DtorFn = void (*)(void* self);

    void* os = iat_fn<OpStrFn>(mem_00924E94)(iat_fn<void*>(mem_00924FA0), text);
    iat_fn<OpManipFn>(mem_00924E98)(os, iat_fn<void*>(mem_00924E90));
    iat_fn<DtorFn>(mem_00924FF4)(text);
}
} // namespace lift_006A1B10
