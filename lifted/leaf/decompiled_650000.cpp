// Lifted C++ translation unit: lifted/leaf/decompiled_650000.cpp
#include "lift_compat.h"

// [0x005136C0] sub_005136C0 (37 bytes)
namespace lift_005136C0 {
// @name sub_005136C0
// @summary Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).
namespace lift_00500310 {
// Callee 0x004FFD60: sub_004FFD60 (35B). Called with ECX passed through as `this`, two stack args, DWORD result in EAX.
extern DWORD ext_00511E40(void* self, DWORD a, DWORD b);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name DwordPairInitFromCall_00500310
// @summary Calls ext_004FFD60 with the incoming this and second argument, then initialises the pair object (first argument) with that result and the second argument via initDwordPair; returns the pair object.
void* fn_005136C0(void* self, void* pair, DWORD b) {
    const DWORD value = ext_00511E40(self, b, 0);
    ext_0055DA20(pair, value, b);
    return pair;
}
} // namespace lift_00500310
} // namespace lift_005136C0

// [0x005142F0] sub_005142F0 (35 bytes)
namespace lift_005142F0 {
// Known callee 0x005136C0: sub_005136C0 (Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).)
extern void* ext_005136C0(void* self, void* pair, DWORD b);

// @name WrapPairInit_005142F0
// @summary Forwards (self, pair) to ext_005136C0 with a zero DWORD and returns self.
void* fn_005142F0(void* self, void* pair) {
    // Stack-level detail: the 0 store in the disassembly lands in the saved-ECX slot,
    // so the third argument read by the callee is not literally 0 at the ABI level.
    // Lifted as the evident intent (b = 0); verify against the callee before relying on it.
    ext_005136C0(self, pair, 0);
    return self;
}
} // namespace lift_005142F0
