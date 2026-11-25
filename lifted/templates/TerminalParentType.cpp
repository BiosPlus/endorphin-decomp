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

// [0x00511930] Properties::TerminalParentType<DoubleWithProperties>::vfunc_0 (38 bytes)
namespace lift_00511930 {
// Known callee 0x00695E20: sub_00695E20 (Auto-lifted identical-shape clone of 0x0051AED0 (NMData::RealChannel::vfunc_8).)
// Real call shape from asm: ecx = *arg1 (this), stack args = (arg0, arg2, 0), callee cleans up (ret 0xc).
extern void* ext_00695E20(void* obj, void* arg0, DWORD arg2, DWORD arg3);

// @name Properties::TerminalParentType<DoubleWithProperties>::vfunc_0
// @class Properties::TerminalParentType<DoubleWithProperties>
// @summary Calls ext_00695E20 on the object pointed to by the second argument, passing (self, arg2, 0), and returns self.
void* fn_00511930(void* self, void** ptr_to_obj, DWORD arg2) {
    void* obj = *ptr_to_obj;
    ext_00695E20(obj, self, arg2, 0);
    return self;
}
} // namespace lift_00511930

// [0x004BBBF0] Properties::TerminalParentType<NMData::MaterialInteraction>::vfunc_0 (38 bytes)
namespace lift_004BBBF0 {
// @name Properties::TerminalParentType<NMData::MaterialInteraction>::vfunc_0
// @class Properties::TerminalParentType<NMData::MaterialInteraction>
// @summary Auto-lifted identical-shape clone of 0x004B6530 (Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0).
namespace lift_004B6530 {
// Known callee 0x004B64C0: ConstructBySelector_004B64C0 (Dispatches on selector (arg2 - 0x386): 0/1/2 call the matching StoreValueAndSingleton-style initializer; any other value calls sub_00671F30 on dst. Returns dst.)
extern DWORD* ext_004BA950(DWORD* dst, DWORD selector);

// @name Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0
// @class Properties::TerminalParentType<NMData::GraphEntryData>
// @summary Forwards (dst, selector) to ConstructBySelector_004B64C0 and returns dst; the third stdcall argument is ignored.
DWORD* fn_004BBBF0(DWORD* dst, DWORD selector, DWORD /*arg3*/) {
    ext_004BA950(dst, selector);
    return dst;
}
} // namespace lift_004B6530
} // namespace lift_004BBBF0

// [0x004C5560] Properties::TerminalParentType<MatrixWithProperties>::vfunc_0 (38 bytes)
namespace lift_004C5560 {
// @name Properties::TerminalParentType<MatrixWithProperties>::vfunc_0
// @class Properties::TerminalParentType<MatrixWithProperties>
// @summary Auto-lifted identical-shape clone of 0x004B6530 (Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0).
namespace lift_004B6530 {
// Known callee 0x004B64C0: ConstructBySelector_004B64C0 (Dispatches on selector (arg2 - 0x386): 0/1/2 call the matching StoreValueAndSingleton-style initializer; any other value calls sub_00671F30 on dst. Returns dst.)
extern DWORD* ext_004F9610(DWORD* dst, DWORD selector);

// @name Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0
// @class Properties::TerminalParentType<NMData::GraphEntryData>
// @summary Forwards (dst, selector) to ConstructBySelector_004B64C0 and returns dst; the third stdcall argument is ignored.
DWORD* fn_004C5560(DWORD* dst, DWORD selector, DWORD /*arg3*/) {
    ext_004F9610(dst, selector);
    return dst;
}
} // namespace lift_004B6530
} // namespace lift_004C5560
