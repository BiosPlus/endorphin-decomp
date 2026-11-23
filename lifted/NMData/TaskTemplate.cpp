// Lifted C++ translation unit: lifted/NMData/TaskTemplate.cpp
#include "lift_compat.h"

// [0x0050AA00] NMData::TaskTemplate::vfunc_13 (69 bytes)
namespace lift_0050AA00 {
extern uint32_t ext_0050A030(void* self);
extern void ext_0055DA20(void* self, uint32_t a, void* b);
extern uint32_t mem_00AEBCB0;
extern uint32_t mem_00AEBCAC;

// @name NMData::TaskTemplate::vfunc_13
// @class NMData::TaskTemplate
// @summary Lazily caches a shared value via ext_0050A030 on first call, then forwards it with the this+4 sub-object address to ext_0055DA20 on arg1; returns arg1.
// @field NMData::TaskTemplate +0x04 void* field_0x04
void* fn_0050AA00(void* self, void* arg1, void* arg2) {
    (void)arg2; // second stack argument (ret 8) is never read

    // One-time initialization guarded by bit 0 of mem_00AEBCB0.
    if ((mem_00AEBCB0 & 1u) == 0) {
        mem_00AEBCB0 |= 1u;
        mem_00AEBCAC = ext_0050A030(self);
    }

    // Address of the this+4 sub-object (address only; not dereferenced here).
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x04;
    ext_0055DA20(arg1, mem_00AEBCAC, sub);
    return arg1;
}
} // namespace lift_0050AA00

// [0x0050D0D0] NMData::TaskTemplate::vfunc_0 (96 bytes)
namespace lift_0050D0D0 {
// @name NMData::TaskTemplate::vfunc_0
// @class NMData::TaskTemplate
// @summary Auto-lifted identical-shape clone of 0x0050C770 (NMData::Task::~Task (scalar deleting destructor)).
// @field NMData::TaskTemplate +0x0 void* field_0x00
// @field NMData::TaskTemplate +0x4 void* field_0x04
namespace lift_0050C770 {
extern void __thiscall ext_006246B0(void* self);
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
extern void* __thiscall fn_0050D0D0(void* self, uint32_t flags) {
    ext_006246B0(static_cast<char*>(self) + 0x04);
    ext_0065F440(self);
    if ((flags & 0x1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0050C770
} // namespace lift_0050D0D0
