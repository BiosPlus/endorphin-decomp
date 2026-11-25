// Lifted C++ translation unit: lifted/Properties/TestControl.cpp
#include "lift_compat.h"

// [0x004F0530]
namespace lift_004F0530 {
// @name Properties::TestControl::vfunc_7
// @class Properties::TestControl
// @summary Fetches a string via ext_0041CEB0 into a temporary std::string and assigns it to field_0x1c.
// @field Properties::TestControl +0x1c std::string field_0x1c


extern uint32_t ext_0041CEB0(void* self, uint32_t arg1);
extern uintptr_t mem_00924FDC;
extern uintptr_t mem_00924FF4;

void fn_004F0530(void* self, void* arg1) {
    uint8_t tmp[0x1c];
    uint32_t str_ptr = ext_0041CEB0(arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(tmp)));
    auto assign_fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(mem_00924FDC);
    assign_fn(static_cast<uint8_t*>(self) + 0x1c, str_ptr);
    auto dtor_fn = reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4);
    dtor_fn(tmp);
}
} // namespace lift_004F0530
