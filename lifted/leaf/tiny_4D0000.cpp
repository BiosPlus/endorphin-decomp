// Lifted C++ translation unit: lifted/leaf/tiny_4D0000.cpp
#include "lift_compat.h"

// [0x004D0AE0] sub_004D0AE0 (13 bytes)
// @name sub_004D0AE0
// @summary Setter storing float argument into field at offset +0x194.
extern "C" void __fastcall fn_004D0AE0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x194) = value;
}

// [0x004DDE80] sub_004DDE80 (13 bytes)
// @name sub_004DDE80
// @summary Setter storing float argument into field at offset +0x998.
extern "C" void __fastcall fn_004DDE80(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x998) = value;
}

// [0x004DDE90] sub_004DDE90 (13 bytes)
// @name sub_004DDE90
// @summary Setter storing float argument into field at offset +0x994.
extern "C" void __fastcall fn_004DDE90(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x994) = value;
}

// [0x004DDE00]
namespace lift_004DDE00 {
extern uint32_t mem_00A85D54;

// @name clearFlag_004DDE00
// @summary Clears the low byte flag at mem_00A85D54 to zero.
void sub_004DDE00() {
    *reinterpret_cast<uint8_t*>(&mem_00A85D54) = 0;
}
} // namespace lift_004DDE00
