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

// [0x00546780] RotateTool::vfunc_28 (92 bytes)
namespace lift_00546780 {
// Known callee 0x00552860: UnknownClass::SetIndexInRange (Accepts an index if it lies within [vfunc_2(), vfunc_3()]; stores 0.3f and the index on success, else stores -1 as the index.)
extern void ext_00552860(void* self);

// @name RotateTool::vfunc_28
// @class RotateTool
// @summary If mode == 5, clear flags 0xE4/0xE5 and dispatch vtable slot 0x80; otherwise forward to SetIndexInRange on sub-object 0xB8 (flag set) or 0x98 (flag clear), then dispatch vtable slot 0x80 when the flag is clear.
// @field RotateTool +0x98 unknown field_0x98
// @field RotateTool +0xB8 unknown field_0xB8
// @field RotateTool +0xE4 uint8_t field_0xE4
// @field RotateTool +0xE5 uint8_t field_0xE5
void fn_00546780(void* self, int32_t /*arg1*/, int32_t mode) {
    auto* bytes = static_cast<uint8_t*>(self);
    void** vtbl = *reinterpret_cast<void***>(self);
    using VoidThisFn = void (*)(void*);
    auto slot80 = reinterpret_cast<VoidThisFn>(vtbl[0x80 / sizeof(void*)]);

    if (mode == 5) {
        bytes[0xE4] = 0;
        bytes[0xE5] = 0;
        slot80(self);
        return;
    }

    if (bytes[0xE4] != 0) {
        ext_00552860(bytes + 0xB8);
        return;
    }

    ext_00552860(bytes + 0x98);
    slot80(self);
}
} // namespace lift_00546780
