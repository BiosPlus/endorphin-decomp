// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
// @name NMData::State::vfunc_6
// @class NMData::State
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00AA237C.
void fn_0049FA70(void* self) {
    new (self) std::string(mem_00AA237C);
}
