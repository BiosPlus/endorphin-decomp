// Lifted C++ translation unit: lifted/NMData/EvolveEngineData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EEA0;
extern "C" void ext_004FD870(void* self);
extern "C" void ext_0050E990(void* self);

extern "C" void ext_0050E990(void* self);
// @name NMData::EvolveEngineData::vfunc_6
// @class NMData::EvolveEngineData
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00A9EEA0.
void fn_004BED30(void* self) {
    new (self) std::string(mem_00A9EEA0);
}
#include <cstdint>

// [0x004FDA70] NMData::EvolveEngineData::vfunc_7 (21 bytes)
// @name NMData::EvolveEngineData::vfunc_7
// @class NMData::EvolveEngineData
// @summary Forwards to the initializers for the sub-objects at this+0x0C and this+0x2C.
// @field EvolveEngineData +0x0C <unknown> field_0x0C
// @field EvolveEngineData +0x2C <unknown> field_0x2C
void fn_004FDA70(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    ext_004FD870(base + 0x0C);
    ext_0050E990(base + 0x2C);
}

// [0x004BED30] NMData::EvolveEngineData::vfunc_6 (35 bytes)
namespace lift_004BED30 {
extern int mem_00A9EEA0;
extern int mem_00924FE4;

// @name NMData::EvolveEngineData::vfunc_6
// @class NMData::EvolveEngineData
// @summary Constructs a std::string in the caller-supplied return slot from the C string whose address is stored in mem_00A9EEA0, and returns that slot.
void* fn_004BED30(void* self) {
    // Original calls the MSVCP80 basic_string(const char*) constructor through the
    // import slot mem_00924FE4; the portable std::string constructor below replaces it.
    static_cast<void>(&mem_00924FE4);
    const char* text = reinterpret_cast<const char*>(static_cast<std::uintptr_t>(mem_00A9EEA0));
    new (self) std::string(text);
    return self;
}
} // namespace lift_004BED30
