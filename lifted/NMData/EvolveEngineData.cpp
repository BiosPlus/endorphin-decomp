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

// [0x005004C0]
namespace lift_005004C0 {
// @name NMData::EvolveEngineData::vfunc_13_off_8
// @class NMData::EvolveEngineData
// @summary Looks up a property/symbol by name on EvolveEngineData and writes the result into the output object.
// @field NMData::EvolveEngineData +0x04 uint8_t field_0x04
// @field NMData::EvolveEngineData +0x24 uint8_t field_0x24
// @field NMData::EvolveEngineData +0x9C uint8_t field_0x9C
// @field NMData::EvolveEngineData +0xD8 uint8_t field_0xD8
// @field NMData::EvolveEngineData +0xE4 uint8_t field_0xE4
// @field NMData::EvolveEngineData +0x124 uint8_t field_0x124
// @field NMData::EvolveEngineData +0x134 uint32_t field_0x134

    extern const char* mem_00A9EEA4;
    extern const char* mem_00A9EFC0;
    extern const char* mem_00A9F304;
    extern const char* mem_00A9F3B4;
    extern const char mem_0094EE3C[];
    extern const char mem_0094EE24[];
    extern bool (__cdecl *mem_00924FC0)(const void*, const char*);

    void* __cdecl ext_0046F7D0(void* obj);
    uint32_t __cdecl ext_00500120(void* ptr);
    void __thiscall ext_0055DA20(void* self, uint32_t a, void* b);
    void __thiscall ext_00661650(void* self, void* arg);

void* __thiscall fn_005004C0(void* self, void* ret_buf, const void* name) {
    auto* base = static_cast<uint8_t*>(self);

    if (mem_00924FC0(name, mem_00A9EEA4)) {
        ext_00661650(ret_buf, base + 0x04);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_0094EE3C)) {
        ext_00661650(ret_buf, base + 0x24);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9EFC0)) {
        void* arg = (base + 0xD8 != nullptr) ? (base + 0xE4) : nullptr;
        ext_00661650(ret_buf, arg);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9F304)) {
        ext_00661650(ret_buf, base + 0x9C);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9F3B4)) {
        void* field_ptr = base + 0x124;
        uint32_t val = ext_00500120(field_ptr);
        ext_0055DA20(ret_buf, val, field_ptr);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_0094EE24)) {
        uint32_t val = lift_field<uint32_t>(self, 0x134);
        ext_00661650(ret_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(val)));
        return ret_buf;
    }

    ext_0046F7D0(ret_buf);
    return ret_buf;
}
} // namespace lift_005004C0
