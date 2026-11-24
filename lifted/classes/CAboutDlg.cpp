// Lifted C++ translation unit: lifted/classes/CAboutDlg.cpp
#include "lift_compat.h"

// [0x00464670] CAboutDlg::vfunc_7_off_74 (40 bytes)
namespace lift_00464670 {
// @name CAboutDlg::vfunc_7_off_74
// @class CAboutDlg
// @summary Auto-lifted identical-shape clone of 0x00449A00 (RegistrationDialog::initOnceAndGetCounter).
namespace lift_00449A00 {
extern uint32_t mem_00AD658C;
extern uint32_t mem_00A30A9C;
extern uint32_t mem_00A30AA0;
extern uint32_t mem_00A30A90;

// @name RegistrationDialog::initOnceAndGetCounter
// @class RegistrationDialog
// @summary On first call, sets init bit 0 in mem_00AD08E4 and clears two globals; always returns &mem_00A2FE84.
// @field (none: function does not access this-relative fields; self is unused)
void* fn_00464670(void* self) {
    (void)self;
    if ((mem_00AD658C & 1u) == 0u) {
        mem_00AD658C |= 1u;
        mem_00A30A9C = 0u;
        mem_00A30AA0 = 0u;
    }
    return &mem_00A30A90;
}
} // namespace lift_00449A00
} // namespace lift_00464670
