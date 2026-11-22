// Lifted C++ translation unit: lifted/classes/global_tiny.cpp
#include "lift_compat.h"
extern "C" int mem_0092CE00;
extern "C" int mem_0092D178;
extern "C" int mem_00929B20;

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
