// Lifted C++ translation unit: lifted/leaf/decompiled_790000.cpp
#include "lift_compat.h"

// [0x0079EBE0]
namespace lift_0079EBE0 {
// @name GetGlobalIndirectInt32
// @summary Calls ext_0079EBD0 (sub_0079EBD0) and returns the int32 stored at the address it yields.
// @field none: no struct field offsets are accessed; the only load is a dereference of the callee's return value at +0.

extern int32_t __cdecl fn_0079EBD0(void);

extern int32_t __cdecl fn_0079EBE0(void) {
    const uint32_t addr = static_cast<uint32_t>(fn_0079EBD0());
    return *reinterpret_cast<const int32_t*>(static_cast<uintptr_t>(addr));
}
} // namespace lift_0079EBE0
