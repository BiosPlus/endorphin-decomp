// Lifted C++ translation unit: lifted/classes/global_tiny.cpp
#include "lift_compat.h"
extern "C" int mem_0092CE00;
extern "C" int mem_0092D178;
extern "C" int mem_00929B20;
extern "C" int mem_0092A1CC;
extern "C" int mem_0092AD84;
extern "C" int mem_0092B9AC;
extern "C" int mem_0092C580;

// [0x00417330] ExportDialog::vfunc_0 (6 bytes)
// @name ExportDialog::vfunc_0
// @class ExportDialog
// @summary Returns the address of the global data slot mem_0092CE00 (leaf accessor; self is unused).
void* fn_00417330(void* self) {
    (void)self;
    return reinterpret_cast<void*>(&mem_0092CE00);
}

// [0x00419720] ExportUnavailableDialog::vfunc_0 (6 bytes)
// @name ExportUnavailableDialog::vfunc_0
// @class ExportUnavailableDialog
// @summary Virtual getter returning the address of the global at mem_0092D178 (ignores this).
// @field ExportUnavailableDialog +0x00 void* vtable
extern "C" int* __fastcall fn_00419720(void* self) {
    (void)self;
    return &mem_0092D178;
}

// [0x00404D30] BatchModeDialog::vfunc_0 (6 bytes)
// @name BatchModeDialog::vfunc_0
// @class BatchModeDialog
// @summary Returns the address of the static class-descriptor global at 0x00929B20; ignores self.
// (no instance fields accessed)
void* fn_00404D30(void* self) {
    (void)self;
    return &mem_00929B20;
}

// [0x00407720] BottomPanel::vfunc_0 (6 bytes)
// @name BottomPanel::vfunc_0
// @class BottomPanel
// @summary Returns the address of the global data slot mem_0092A1CC (leaf accessor; self is unused).
extern "C" void* __fastcall fn_00407720(void* self) {
    (void)self;
    return reinterpret_cast<void*>(&mem_0092A1CC);
}

// [0x0040CDF0] NewCharacterDialog::vfunc_92 (6 bytes)
// @name NewCharacterDialog::vfunc_92
// @class NewCharacterDialog
// @summary Returns the address of the constant global mem_0092AD84 (value 0x006A5FCE); does not read or modify `this`.
extern "C" int* __fastcall fn_0040CDF0(void* self) {
    (void)self;
    return &mem_0092AD84;
}

// [0x0040FCF0] CColorCheck::vfunc_0 (6 bytes)
// @name CColorCheck::vfunc_0
// @class CColorCheck
// @summary Virtual getter returning the address of the global at mem_0092B9AC (ignores self).
// (no instance fields accessed)
void* fn_0040FCF0(void* self) {
    (void)self;
    return &mem_0092B9AC;
}

// [0x004153C0] EditBox::vfunc_0 (6 bytes)
// @name EditBox::vfunc_0
// @class EditBox
// @summary Virtual getter returning the address of the global slot mem_0092C580 (self is unused).
extern "C" void* __fastcall fn_004153C0(void* self) {
    (void)self;
    return reinterpret_cast<void*>(&mem_0092C580);
}
