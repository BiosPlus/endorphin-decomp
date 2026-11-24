// Lifted C++ translation unit: lifted/templates/TerminalParentType.cpp
#include "lift_compat.h"

// [0x00511930] Properties::TerminalParentType<DoubleWithProperties>::vfunc_0 (38 bytes)
namespace lift_00511930 {
// @name Properties::TerminalParentType<DoubleWithProperties>::vfunc_0
// @class Properties::TerminalParentType<DoubleWithProperties>
// @summary Reads the dword pointed to by the second argument, forwards it as the ecx value with self to 0x00695E20, and returns self (stdcall, ret 0xc).
//
// Notes:
//  - Stdcall-style (ret 0xc): three stack arguments. The third (arg3) is pushed
//    to the callee as its second stack argument, which the 0x00695E20 clone never
//    reads (same convention as NMData::RealChannel::vfunc_8), so it is not modelled.
//  - The original zeroes a saved-ecx stack slot before the call; that scratch slot
//    is not part of the result and is not modelled.
//  - No fields of the TerminalParentType object are accessed directly; the only
//    memory read is the dword at *arg2 (offset +0 of the pointed-to object).

uint32_t mem_r32(uint32_t addr);
void ext_00695E20(uint32_t self, uint32_t ecx_in);

uint32_t fn_00511930(uint32_t self, uint32_t src_ptr, uint32_t arg3) {
    (void)arg3;
    uint32_t ecx_in = mem_r32(src_ptr);
    ext_00695E20(self, ecx_in);
    return self;
}
} // namespace lift_00511930
