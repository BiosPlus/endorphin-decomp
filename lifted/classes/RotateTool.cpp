// Lifted C++ translation unit: lifted/classes/RotateTool.cpp
#include "lift_compat.h"

// [0x00546760] RotateTool::vfunc_29 (31 bytes)
namespace lift_00546760 {
// Known callee 0x005528A0: SubObject::resetScaleAndIndex (Sets the float at +0x0C to 1.0f and the int32 at +0x10 to -1 on the object passed in ecx.)
extern void __fastcall ext_005528A0(void* self);

// @name RotateTool::vfunc_29
// @class RotateTool
// @summary Resets the sub-object selected by the byte flag at +0xE4 (offset +0xB8 if set, else +0x98).
// @field RotateTool +0xE4 uint8_t field_0xE4
void fn_00546760(void* self) {
    auto* base = static_cast<char*>(self);
    const uint8_t flag = *reinterpret_cast<const uint8_t*>(base + 0xE4);
    void* sub = base + (flag == 0 ? 0x98 : 0xB8);
    ext_005528A0(sub);
}
} // namespace lift_00546760
