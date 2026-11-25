// Lifted C++ translation unit: lifted/classes/GettingStartedDialog.cpp
#include "lift_compat.h"

// [0x0041B3C0] GettingStartedDialog::vfunc_71 (16 bytes)
namespace lift_0041B3C0 {
// Known callee 0x006A5DBE: thunk_MFC80_ord_5152 (IAT jump thunk forwarding to MFC80!ord_5152.)
extern void ext_006A5DBE();
// Tail-jump target 0x004349D0: sub_004349D0. Receives ECX as its implicit first argument.
extern void ext_004349D0(uint32_t ecx);
extern int32_t mem_00ACDB40;

// @name GettingStartedDialog::vfunc_71
// @class GettingStartedDialog
// @summary Calls the MFC80 thunk, then tail-calls sub_004349D0 with the global at 0x00ACDB40 as its ECX argument.
void fn_0041B3C0(void* self) {
    (void)self;
    ext_006A5DBE();
    const uint32_t ecx = static_cast<uint32_t>(mem_00ACDB40);
    ext_004349D0(ecx);
}
} // namespace lift_0041B3C0

// [0x0041B2A0] GettingStartedDialog::vfunc_86 (72 bytes)
namespace lift_0041B2A0 {
// Known callee 0x006A6328: thunk_MFC80_ord_6305 (IAT jump thunk forwarding to MFC80!ord_6305.)
// Called with ecx = 0x00AD6BC8 and three stack arguments (pushed as flag, g1, g2).
extern void ext_006A6328(void* thisArg, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_0093A078;
extern uint32_t mem_0093A068;

// @name GettingStartedDialog::vfunc_86
// @class GettingStartedDialog
// @summary Queries child object at +0x120 (vtable slot 0x148) to set cached flag at +0x11C, reports it via ext_006A6328, then tail-dispatches vtable slot 0x68 on self.
// @field GettingStartedDialog +0x11C uint8_t field_0x11C
// @field GettingStartedDialog +0x120 void* field_0x120
uint32_t fn_0041B2A0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // child = this->field_0x120; r = child->vtbl[0x148](&this->field_0x120)
    void** childSlot = reinterpret_cast<void**>(base + 0x120);
    uint8_t* child = static_cast<uint8_t*>(*childSlot);
    uint8_t* childVtbl = *reinterpret_cast<uint8_t**>(child);
    using QueryFn = uint32_t (*)(void*);
    auto childQuery = reinterpret_cast<QueryFn>(*reinterpret_cast<void**>(childVtbl + 0x148));
    uint32_t r = childQuery(static_cast<void*>(childSlot));

    // field_0x11C = (r != 0)
    uint8_t flag = (r != 0) ? 1u : 0u;
    *(base + 0x11C) = flag;

    // Report via MFC thunk: ecx = 0x00AD6BC8, args = (mem_0093A068, mem_0093A078, flag)
    uint32_t g1 = mem_0093A078;
    uint32_t g2 = mem_0093A068;
    ext_006A6328(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AD6BC8u)),
                 g2, g1, static_cast<uint32_t>(flag));

    // Tail-jump: return self->vtbl[0x68](self)
    uint8_t* selfVtbl = *reinterpret_cast<uint8_t**>(base);
    using DispatchFn = uint32_t (*)(void*);
    auto dispatch = reinterpret_cast<DispatchFn>(*reinterpret_cast<void**>(selfVtbl + 0x68));
    return dispatch(self);
}
} // namespace lift_0041B2A0
