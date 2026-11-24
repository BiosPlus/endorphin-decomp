// Lifted C++ translation unit: lifted/leaf/decompiled_5E0000.cpp
#include "lift_compat.h"

// [0x005E2770] sub_005E2770 (27 bytes)
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2770(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 0);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x11C);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 0);
}
} // namespace lift_005E2770
