// Lifted C++ translation unit: lifted/leaf/tiny_870000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstdint>

#include <cstdint>
namespace lift_00870E30 {
extern int mem_0099F140;

// @name sub_00870E30
// @summary Stores address of mem_0099F140 into field at offset +0x0.
extern void __fastcall fn_00870E30(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0099F140;
}
} // namespace lift_00870E30

// [0x00872730] sub_00872730 (11 bytes)
namespace lift_00872730 {
extern DWORD mem_00AC5B50[];

// @name sub_00872730
// @summary Auto-lifted identical-shape clone of 0x00587D40 (NMData::GraphicData::vfunc_0_off_C).
DWORD NMData_GraphicData_vfunc_0_off_C(const void* self) {
    const DWORD index = lift_field<DWORD>(self, 0x4);
    return mem_00AC5B50[index];
}

void fn_00872730(void* self) {
    (void)NMData_GraphicData_vfunc_0_off_C(self);
}
} // namespace lift_00872730
