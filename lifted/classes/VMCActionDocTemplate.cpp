// Lifted C++ translation unit: lifted/classes/VMCActionDocTemplate.cpp
#include "lift_compat.h"

// [0x004675E0]
namespace lift_004675E0 {
// @name VMCActionDocTemplate::vfunc_28
// @class VMCActionDocTemplate
// @summary Checks whether a document matching the given path is already open, otherwise delegates to CSingleDocTemplate::MatchDocType.
// @field VMCActionDocTemplate +0x00 uint32_t* vtable

    uint32_t __cdecl ext_006A6B02(uint32_t);
    uint32_t __thiscall ext_006A6AFC(void* self, uint32_t arg1, uint32_t* arg2);
    extern uint32_t mem_00924300;

uint32_t __thiscall fn_004675E0(void* self, uint32_t arg1, uint32_t* arg2) {
    *arg2 = 0;

    uint32_t* vtable = *(uint32_t**)self;
    auto vfunc_23 = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x5C / 4]);
    uint32_t pos = vfunc_23(self);

    if (pos != 0) {
        do {
            vtable = *(uint32_t**)self;
            auto vfunc_24 = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t*)>(vtable[0x60 / 4]);
            uint32_t doc = vfunc_24(self, &pos);

            auto mfc_ord_876 = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t)>(mem_00924300);
            uint32_t path_res = mfc_ord_876(reinterpret_cast<uint8_t*>(doc) + 0x24, arg1);

            if (ext_006A6B02(path_res) != 0) {
                return 4;
            }
        } while (pos != 0);
    }

    return ext_006A6AFC(self, arg1, arg2);
}
} // namespace lift_004675E0
