// Lifted C++ translation unit: lifted/classes/VMCSMode.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x004F2830] VMCSMode::vfunc_141 (31 bytes)
namespace lift_004F2830 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);

// @name VMCSMode::vfunc_141
// @class VMCSMode
// @summary Resets the object's vtable to VMCSMode's; if bit 0 of the stack argument is set, calls ext_006A5C5C(this) first. Returns this (stdcall, ret 4).
// @field VMCSMode +0x00 void* vfptr
struct VMCSMode {
    void* vfptr;  // +0x00
};

static constexpr uintptr_t kVMCSModeVtable = 0x0094C1E4;

void* fn_004F2830(VMCSMode* self, uint32_t flags) {
    self->vfptr = reinterpret_cast<void*>(kVMCSModeVtable);
    if (flags & 1u) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_004F2830
