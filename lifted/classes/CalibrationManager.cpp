// Lifted C++ translation unit: lifted/classes/CalibrationManager.cpp
#include "lift_compat.h"

// [0x0065F8E0]
namespace lift_0065F8E0 {
// @name CalibrationManager::vfunc_9
// @class CalibrationManager
// @summary Lazily initializes and returns a static std::string singleton


extern uint32_t mem_00B59014;
extern uint8_t mem_00B58FF8;
extern const char mem_00987724[];
extern uint32_t mem_00924FE4;
extern uint32_t mem_00921410;

extern void ext_006A6C87(void* fn);

uint32_t __thiscall fn_0065F8E0(void* self) {
    (void)self;
    if ((mem_00B59014 & 1u) == 0) {
        mem_00B59014 |= 1u;
        using StringCtor = void(__thiscall*)(void*, const char*);
        auto ctor = reinterpret_cast<StringCtor>(static_cast<uintptr_t>(mem_00924FE4));
        ctor(&mem_00B58FF8, mem_00987724);
        ext_006A6C87(&mem_00921410);
    }
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B58FF8));
}
} // namespace lift_0065F8E0
