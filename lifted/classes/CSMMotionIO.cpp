// Lifted C++ translation unit: lifted/classes/CSMMotionIO.cpp
#include "lift_compat.h"
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
extern "C" void ext_00553720(void* self, void* arg);
extern "C" const char mem_0092A0D4[];
#include <cstddef>
#include <cstdint>
#include <fstream>
#include <string>
#include <vector>

#include <cstdint>
#include <fstream>
#include <string>
#include <vector>
void* fn_00571DF0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092A0D4, 0);
    ext_00553720(self, resolved);
    return arg;
}
