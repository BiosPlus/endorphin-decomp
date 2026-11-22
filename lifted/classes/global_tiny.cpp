// Lifted C++ translation unit: lifted/classes/global_tiny.cpp
#include "lift_compat.h"
extern "C" int mem_0092CE00;

// [0x00417330] ExportDialog::vfunc_0 (6 bytes)
// @name ExportDialog::vfunc_0
// @class ExportDialog
// @summary Returns the address of the global data slot mem_0092CE00 (leaf accessor; self is unused).
void* fn_00417330(void* self) {
    (void)self;
    return reinterpret_cast<void*>(&mem_0092CE00);
}
