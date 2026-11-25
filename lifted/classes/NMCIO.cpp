// Lifted C++ translation unit: lifted/classes/NMCIO.cpp
#include "lift_compat.h"
#include <string>
extern "C" int mem_00B37F40;
extern const std::string mem_00B3B084;
extern const std::string mem_00B3B1D4;
// Read the i-th slot of the vtable stored at the start of obj.
static inline void* vtbl_slot(void* obj, size_t index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return vtbl[index];
}
extern "C" void ext_006619D0(void* self, void* arg);
