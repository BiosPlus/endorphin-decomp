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

// [0x005467E0] RotateTool::vfunc_21 (128 bytes)
namespace lift_005467E0 {
// Float constant 0.3f read from .rdata at 0x00940690.
extern int mem_00940690;

// Virtual slot dispatch on an object: vtable slot at byte offset `Offset` (thiscall, no args).
template <std::size_t Offset>
inline void lift_vcall_void(void* obj) {
    void** vt = lift_field<void**>(obj, 0);
    reinterpret_cast<void (*)(void*)>(vt[Offset / sizeof(void*)])(obj);
}

// @name RotateTool::vfunc_21
// @class RotateTool
// @summary Updates the mode flag at +0xE4 from the stack flag bit 3 (when it was clear), sets the float at +0xA4 to 0.3f or 1.0f, then either sets +0xE5 or dispatches vtable +0x80 on self; finally dispatches vtable +0x5C on the sub-object at +0x88. Returns 1.
// @field RotateTool +0x88 void* field_0x88
// @field RotateTool +0xA4 float field_0xA4
// @field RotateTool +0xE4 uint8_t field_0xE4
// @field RotateTool +0xE5 uint8_t field_0xE5
// @field RotateTool +0xE6 uint8_t field_0xE6
int fn_005467E0(void* self, uint32_t /*arg1*/, uint32_t arg2) {
    uint8_t& flagE4 = lift_field<uint8_t>(self, 0xE4);
    uint8_t& flagE5 = lift_field<uint8_t>(self, 0xE5);
    uint8_t& flagE6 = lift_field<uint8_t>(self, 0xE6);
    float& valA4 = lift_field<float>(self, 0xA4);

    const uint8_t oldE4 = flagE4;
    flagE6 = 1;
    if (oldE4 == 0) {
        flagE6 = static_cast<uint8_t>((arg2 >> 3) & 1u);
    }

    if (flagE6 != 0) {
        const uint8_t newE4 = (oldE4 == 0) ? 1 : 0;
        flagE4 = newE4;
        if (newE4 != 0) {
            valA4 = *reinterpret_cast<const float*>(&mem_00940690);
        } else {
            valA4 = 1.0f;
        }

        if (flagE4 != 0) {
            flagE5 = 1;
        } else {
            lift_vcall_void<0x80>(self);
        }

        void* sub = lift_field<void*>(self, 0x88);
        lift_vcall_void<0x5C>(sub);
    }

    return 1;
}
} // namespace lift_005467E0
