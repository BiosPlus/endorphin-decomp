// Lifted C++ translation unit: lifted/classes/CDLCharacterIO.cpp
#include "lift_compat.h"
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
extern "C" void ext_00553720(void* self, void* arg);
extern "C" const char mem_0092FE0C[];
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

#include <iostream>
#include <stdexcept>
#include <string>
// @summary Auto-lifted identical-shape clone of 0x005731A0 (OBJIO::vfunc_3).
void* fn_00570350(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE0C, 0);
    ext_00553720(self, resolved);
    return arg;
}
