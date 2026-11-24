// Lifted C++ translation unit: lifted/classes/UpdateAvailableDialog.cpp
#include "lift_compat.h"

// [0x004614E0] UpdateAvailableDialog::vfunc_7_off_74 (40 bytes)
namespace lift_004614E0 {
// @name UpdateAvailableDialog::vfunc_7_off_74
// @class UpdateAvailableDialog
// @summary Auto-lifted identical-shape clone of 0x00449A00 (RegistrationDialog::initOnceAndGetCounter).
namespace lift_00449A00 {
extern uint32_t mem_00AD592C;
extern uint32_t mem_00A307E0;
extern uint32_t mem_00A307E4;
extern uint32_t mem_00A307D4;

// @name RegistrationDialog::initOnceAndGetCounter
// @class RegistrationDialog
// @summary On first call, sets init bit 0 in mem_00AD08E4 and clears two globals; always returns &mem_00A2FE84.
// @field (none: function does not access this-relative fields; self is unused)
void* fn_004614E0(void* self) {
    (void)self;
    if ((mem_00AD592C & 1u) == 0u) {
        mem_00AD592C |= 1u;
        mem_00A307E0 = 0u;
        mem_00A307E4 = 0u;
    }
    return &mem_00A307D4;
}
} // namespace lift_00449A00
} // namespace lift_004614E0
