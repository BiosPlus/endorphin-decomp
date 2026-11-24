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

// [0x004B6530] Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0 (38 bytes)
namespace lift_004B6530 {
// @name Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0
// @class Properties::TerminalParentType<NMData::GraphEntryData>
// @summary Auto-lifted identical-shape clone of 0x00511930 (Properties::TerminalParentType<DoubleWithProperties>::vfunc_0).
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
void ext_004B64C0(uint32_t self, uint32_t ecx_in);

uint32_t fn_004B6530(uint32_t self, uint32_t src_ptr, uint32_t arg3) {
    (void)arg3;
    uint32_t ecx_in = mem_r32(src_ptr);
    ext_004B64C0(self, ecx_in);
    return self;
}
} // namespace lift_00511930
} // namespace lift_004B6530

// [0x004BBBF0] Properties::TerminalParentType<NMData::MaterialInteraction>::vfunc_0 (38 bytes)
namespace lift_004BBBF0 {
// @name Properties::TerminalParentType<NMData::MaterialInteraction>::vfunc_0
// @class Properties::TerminalParentType<NMData::MaterialInteraction>
// @summary Auto-lifted identical-shape clone of 0x00511930 (Properties::TerminalParentType<DoubleWithProperties>::vfunc_0).
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
void ext_004BA950(uint32_t self, uint32_t ecx_in);

uint32_t fn_004BBBF0(uint32_t self, uint32_t src_ptr, uint32_t arg3) {
    (void)arg3;
    uint32_t ecx_in = mem_r32(src_ptr);
    ext_004BA950(self, ecx_in);
    return self;
}
} // namespace lift_00511930
} // namespace lift_004BBBF0

// [0x004C5560] Properties::TerminalParentType<MatrixWithProperties>::vfunc_0 (38 bytes)
namespace lift_004C5560 {
// @name Properties::TerminalParentType<MatrixWithProperties>::vfunc_0
// @class Properties::TerminalParentType<MatrixWithProperties>
// @summary Auto-lifted identical-shape clone of 0x00511930 (Properties::TerminalParentType<DoubleWithProperties>::vfunc_0).
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
void ext_004F9610(uint32_t self, uint32_t ecx_in);

uint32_t fn_004C5560(uint32_t self, uint32_t src_ptr, uint32_t arg3) {
    (void)arg3;
    uint32_t ecx_in = mem_r32(src_ptr);
    ext_004F9610(self, ecx_in);
    return self;
}
} // namespace lift_00511930
} // namespace lift_004C5560

// [0x004FDF50] sub_004FDF50 (40 bytes)
namespace lift_004FDF50 {
// @name Properties::TerminalParentType<NMData::ValuePtrData>::vfunc_0
// @class Properties::TerminalParentType<NMData::ValuePtrData>
// @summary Forwards (arg1, arg3, 0) to virtual slot 15 of the object referenced by arg2, then returns arg1.
// @field arg2 +0x00 void* vptr (object at *arg2 is dispatched through its vtable at slot 15, offset 0x3C)
void* fn_004FDF50(void* arg1, void** arg2, uint32_t arg3) {
    // Dispatch: obj = *arg2; vtable = obj->vptr; vtable[0x3C/4 = 15](obj, arg1, arg3, 0)
    void* obj = arg2 ? *arg2 : nullptr;
    if (obj) {
        void** vtable = *reinterpret_cast<void***>(obj);
        using SlotFn = void (*)(void* self, void* a, uint32_t b, uint32_t c);
        SlotFn slot = reinterpret_cast<SlotFn>(vtable[0x3C / sizeof(void*)]);
        if (slot) {
            slot(obj, arg1, arg3, 0u);
        }
    }
    return arg1;
}
} // namespace lift_004FDF50
