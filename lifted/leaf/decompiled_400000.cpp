// Lifted C++ translation unit: lifted/leaf/decompiled_400000.cpp
#include "lift_compat.h"

// [0x00407830] sub_00407830 (17 bytes)
namespace lift_00407830 {
// Known callee 0x006A6004: thunk_MFC80_ord_2367 (IAT jump thunk forwarding to MFC80!ord_2367.)
extern void ext_006A6004();
extern int mem_00925658;

// @name sub_00407830
// @class unknown
// @summary Passes the field at self+0x20 to USER32!GetDC, then forwards the returned HDC to MFC80 ord_2367.
// @field unknown +0x20 DWORD field_0x20
void fn_00407830(void* self) {
    DWORD arg = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x20);
    using GetDCFn = DWORD(__stdcall*)(DWORD);
    DWORD hdc = reinterpret_cast<GetDCFn>(static_cast<uintptr_t>(mem_00925658))(arg);
    using ForwardFn = void(__stdcall*)(DWORD);
    reinterpret_cast<ForwardFn>(&ext_006A6004)(hdc);
}
} // namespace lift_00407830
