// Lifted C++ translation unit: lifted/Properties/PropInPlaceSpinbuttonEdit.cpp
#include "lift_compat.h"

// [0x00448920]
namespace lift_00448920 {
// @name Properties::PropInPlaceSpinbuttonEdit::vfunc_66
// @class Properties::PropInPlaceSpinbuttonEdit
// @summary Handles WM_KEYDOWN (0x100) by updating arg1+0x0 from this+0x7c before forwarding to MFC80!ord_5214.
// @field Properties::PropInPlaceSpinbuttonEdit +0x5c uint32_t field_0x5c
// @field Properties::PropInPlaceSpinbuttonEdit +0x7c uint32_t field_0x7c


extern void __thiscall ext_006A5DA0(void* self, uint32_t* arg1);

void __thiscall fn_00448920(void* self, uint32_t* arg1) {
    if (arg1[1] == 0x100) {
        uintptr_t ptr = reinterpret_cast<uintptr_t>(self) + 0x5c;
        uint32_t val = (ptr != 0) ? *reinterpret_cast<const uint32_t*>(ptr + 0x20) : 0;
        arg1[0] = val;
    }
    ext_006A5DA0(self, arg1);
}
} // namespace lift_00448920
