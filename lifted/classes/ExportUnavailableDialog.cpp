// Lifted C++ translation unit: lifted/classes/ExportUnavailableDialog.cpp
#include "lift_compat.h"
// Known callee 0x006A5F44: thunk_MFC80_ord_1794 (IAT jump thunk forwarding to MFC80!ord_1794.)
// Arity inferred from the three pushes before the call (arg, 1, subobject address).
extern "C" void ext_006A5F44(uint32_t arg0, int arg1, uint32_t arg2);
extern "C" uint32_t mem_00ACB004;   // guard word; bit 0 = initialized
extern "C" uint8_t mem_00A2ECD0[];  // static block at 0x00A2ECD0 (dwords at +0xC and +0x10)

extern "C" uint8_t mem_00A2ECD0[];  // static block at 0x00A2ECD0 (dwords at +0xC and +0x10)
// @name ExportUnavailableDialog::vfunc_63
// @class ExportUnavailableDialog
// @summary Calls ext_006A5F44(arg, 1, &this->field_0x11c), passing the stack argument and the address of the embedded sub-object at +0x11C.
// @field ExportUnavailableDialog +0x11c uint8_t field_0x11c
void fn_00461630(void* self, uint32_t arg) {
    // Only the address of the sub-object at +0x11C is taken; it is not dereferenced here.
    const uint32_t subobject = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x11c);
    ext_006A5F44(arg, 1, subobject);
}

// [0x00419770] ExportUnavailableDialog::vfunc_7_off_74 (40 bytes)
namespace lift_00419770 {
// @name ExportUnavailableDialog::vfunc_7_off_74
// @class ExportUnavailableDialog
// @summary Auto-lifted identical-shape clone of 0x00464670 (CAboutDlg::vfunc_7_off_74).
namespace lift_00464670 {
// @name CAboutDlg::vfunc_7_off_74
// @class CAboutDlg
// @summary Auto-lifted identical-shape clone of 0x00449A00 (RegistrationDialog::initOnceAndGetCounter).
namespace lift_00449A00 {
extern uint32_t mem_00ACB004;
extern uint32_t mem_00A2ECDC;
extern uint32_t mem_00A2ECE0;
extern uint32_t mem_00A2ECD0;

// @name RegistrationDialog::initOnceAndGetCounter
// @class RegistrationDialog
// @summary On first call, sets init bit 0 in mem_00AD08E4 and clears two globals; always returns &mem_00A2FE84.
// @field (none: function does not access this-relative fields; self is unused)
void* fn_00419770(void* self) {
    (void)self;
    if ((mem_00ACB004 & 1u) == 0u) {
        mem_00ACB004 |= 1u;
        mem_00A2ECDC = 0u;
        mem_00A2ECE0 = 0u;
    }
    return &mem_00A2ECD0;
}
} // namespace lift_00449A00
} // namespace lift_00464670
} // namespace lift_00419770
