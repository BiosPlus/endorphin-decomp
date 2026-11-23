// Lifted C++ translation unit: lifted/NMData/Task.cpp
#include "lift_compat.h"

// [0x0050AAB0] NMData::Task::vfunc_13 (69 bytes)
namespace lift_0050AAB0 {
extern DWORD ext_0050A140();
extern void ext_0055DA20(void* self, DWORD value, void* addr);
extern DWORD mem_00AEBCB8;  // one-time-init guard word (bit 0 = initialized)
extern DWORD mem_00AEBCB4;  // cached result of ext_0050A140()

// @name NMData::Task::vfunc_13
// @class NMData::Task
// @summary Lazily caches ext_0050A140() once, then calls ext_0055DA20 on arg1 with the cached value and this+0x04; returns arg1.
// @field NMData::Task +0x04 void* field_0x04 (address taken only, not dereferenced)
void* fn_0050AAB0(void* self, void* arg1, void* /*arg2*/) {
    // One-time initialisation of the cached value (guard bit set before the call).
    if ((mem_00AEBCB8 & 1u) == 0) {
        mem_00AEBCB8 |= 1u;
        mem_00AEBCB4 = ext_0050A140();
    }

    DWORD value = mem_00AEBCB4;
    void* addr = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x04);
    ext_0055DA20(arg1, value, addr);
    return arg1;
}
} // namespace lift_0050AAB0

// [0x0050C770] NMData::Task::vfunc_0 (96 bytes)
namespace lift_0050C770 {
extern void __thiscall ext_0050B960(void* self);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void __fastcall ext_0065F440(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; used as operator delete.)
extern void ext_006A5C5C(void* p);

// @name NMData::Task::~Task (scalar deleting destructor)
// @class NMData::Task
// @summary Runs the base-subobject teardown on this+4, resets the vptr via ext_0065F440, and frees the object when the deleting flag (bit 0 of the stack argument) is set; returns this.
// @field NMData::Task +0x00 void* field_0x00
// @field NMData::Task +0x04 void* field_0x04
// Note: the MSVC SEH frame (fs:[0] push/pop, -1 state slot) is unwinding bookkeeping and is not modeled.
extern void* __thiscall fn_0050C770(void* self, uint32_t flags) {
    ext_0050B960(static_cast<char*>(self) + 0x04);
    ext_0065F440(self);
    if ((flags & 0x1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0050C770
