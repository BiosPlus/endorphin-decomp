// Lifted C++ translation unit: lifted/templates/TerminalParentType.cpp
#include "lift_compat.h"

// [0x004B6530] Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0 (38 bytes)
namespace lift_004B6530 {
// Known callee 0x004B64C0: ConstructBySelector_004B64C0 (Dispatches on selector (arg2 - 0x386): 0/1/2 call the matching StoreValueAndSingleton-style initializer; any other value calls sub_00671F30 on dst. Returns dst.)
extern DWORD* ext_004B64C0(DWORD* dst, DWORD selector);

// @name Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0
// @class Properties::TerminalParentType<NMData::GraphEntryData>
// @summary Forwards (dst, selector) to ConstructBySelector_004B64C0 and returns dst; the third stdcall argument is ignored.
DWORD* fn_004B6530(DWORD* dst, DWORD selector, DWORD /*arg3*/) {
    ext_004B64C0(dst, selector);
    return dst;
}
} // namespace lift_004B6530
