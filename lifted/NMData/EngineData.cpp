// Lifted C++ translation unit: lifted/NMData/EngineData.cpp
#include "lift_compat.h"

// [0x004BA3B0] NMData::EngineData::vfunc_14 (131 bytes)
namespace lift_004BA3B0 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(DWORD arg);
extern DWORD ext_004BA1D0(void* arg);
extern DWORD ext_004BA200(void* arg);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);
extern void ext_00661680(void* self, DWORD a, DWORD b);

// @name NMData::EngineData::vfunc_14
// @class NMData::EngineData
// @summary Dispatches on the second stack argument (0xA5 / 0xE3 / 0xE6 cases) to sub-object helpers and returns one of the stack arguments.
// @field NMData::EngineData +0x04 void* field_0x04
// @field NMData::EngineData +0x60 void* field_0x60
// @field NMData::EngineData +0x70 void* field_0x70
DWORD fn_004BA3B0(void* self, DWORD a1, DWORD a2) {
    DWORD selector = a2 - 0xA5;
    if (selector == 0) {
        // Case 0xA5: call helper on a1 with (self+4, 3); return a1.
        void* sub = reinterpret_cast<char*>(self) + 0x04;
        ext_00661680(reinterpret_cast<void*>(static_cast<uintptr_t>(a1)), static_cast<DWORD>(reinterpret_cast<uintptr_t>(sub)), 3);
        return a1;
    }
    selector -= 0x3E;
    if (selector == 0) {
        // Case 0xE3: helper on self+0x60, then initDwordPair on a2 object; return a2.
        DWORD r = ext_004BA1D0(reinterpret_cast<char*>(self) + 0x60);
        ext_0055DA20(reinterpret_cast<void*>(static_cast<uintptr_t>(a2)), r, 0);
        return a2;
    }
    selector -= 0x3;
    if (selector == 0) {
        // Case 0xE6: helper on self+0x70, then initDwordPair on a2 object; return a2.
        DWORD r = ext_004BA200(reinterpret_cast<char*>(self) + 0x70);
        ext_0055DA20(reinterpret_cast<void*>(static_cast<uintptr_t>(a2)), r, 0);
        return a2;
    }
    // Default: forward a1 to helper 0x0046F7D0 and return a1.
    ext_0046F7D0(a1);
    return a1;
}
} // namespace lift_004BA3B0
