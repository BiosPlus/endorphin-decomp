// Lifted C++ translation unit: lifted/leaf/decompiled_610000.cpp
#include "lift_compat.h"

// [0x00611160] sub_00611160 (11 bytes)
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_00611160(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x8u, 3u);
}
} // namespace lift_00611160

// [0x00610B20] sub_00610B20 (32 bytes)
namespace lift_00610B20 {
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern int32_t __cdecl ext_00594000();
// Callee 0x00678130: sub_00678130 (61B, not yet lifted). ecx = this, one float stack arg
// (callee pops it, as the caller does no stack fixup after the call).
extern void __thiscall ext_00678130(void* self, float arg);

// @name ForwardFloat08ToSubobject2E0
// @summary Reads float self+0x08, obtains an int32 key from ext_00594000, then calls ext_00678130 on the object at key+0x2E0 passing the saved float.
// @field Unknown +0x08 float field_0x08
extern void __thiscall fn_00610B20(void* self) {
    // The original loads the float before the call to ext_00594000, which can clobber state;
    // the value is captured first and passed on unchanged.
    const float value = lift_field<float>(self, 0x08);

    const int32_t key = ext_00594000();

    // lea ecx, [eax + 0x2E0]: the subobject address is derived from the returned key.
    void* subobject = reinterpret_cast<void*>(static_cast<intptr_t>(key) + 0x2E0);
    ext_00678130(subobject, value);
}
} // namespace lift_00610B20
