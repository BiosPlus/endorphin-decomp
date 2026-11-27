// Lifted C++ translation unit: lifted/NMData/NetworkConnectorData.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_00525E80(void* self, void* pushedSelf);
extern "C" void __thiscall ext_00526E40(void* self, void* pushedSelf);

// [0x005261E0] NMData::NetworkConnectorData::vfunc_27 (10 bytes)
// @name NMData::NetworkConnectorData::vfunc_27
// @class NMData::NetworkConnectorData
// @summary Forwards to ext_00525E80 on the sub-object at this+0x60, passing the original this as a stack argument.
// @field NMData::NetworkConnectorData +0x60 void* field_0x60
extern "C" void __thiscall fn_005261E0(void* self) {
    // Original: push ecx; add ecx,0x60; call ext_00525E80; ret.
    // The pushed value (original this) is modeled as the second argument.
    ext_00525E80(static_cast<char*>(self) + 0x60, self);
}

// [0x005270D0] NMData::NetworkConnectorData::vfunc_26 (10 bytes)
namespace lift_005270D0 {
extern void __thiscall ext_00526E40(void* self, void* pushedSelf);

// @name NMData::NetworkConnectorData::vfunc_26
// @class NMData::NetworkConnectorData
// @summary Auto-lifted identical-shape clone of 0x005261E0 (NMData::NetworkConnectorData::vfunc_27).
// @field NMData::NetworkConnectorData +0x60 void* field_0x60
extern void __thiscall fn_005270D0(void* self) {
    // Original: push ecx; add ecx,0x60; call ext_00525E80; ret.
    // The pushed value (original this) is modeled as the second argument.
    ext_00526E40(static_cast<char*>(self) + 0x60, self);
}
} // namespace lift_005270D0

// [0x005246E0]
namespace lift_005246E0 {
// @name NMData::NetworkConnectorData::vfunc_22
// @class NMData::NetworkConnectorData
// @summary Serializes/interprets NetworkConnectorData fields (name at +0xa4, fields at +0x38 and +0x4c) and delegates to Interpreter::vfunc_22
// @field NMData::NetworkConnectorData +0x38 uint8_t[20] field_0x38
// @field NMData::NetworkConnectorData +0x4c uint8_t[20] field_0x4c
// @field NMData::NetworkConnectorData +0xa4 std::string field_0xa4


extern uint32_t mem_00A9F838;
extern const char* (__thiscall* mem_00924FF0)(void* str);
extern uint32_t mem_00A9EFE0;
extern uint32_t mem_00A9EFE8;
extern uint32_t mem_00A9F154;
extern uint32_t mem_00A9F168;

extern void* __thiscall ext_00640110(void* self, uint32_t a1);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void __thiscall ext_00870300(void* self, void* a1, uint32_t a2, uint32_t a3);
extern int __thiscall ext_005058B0(void* self, void* a1);

int __thiscall fn_005246E0(void* self, void* arg0) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* child = ext_00640110(arg0, mem_00A9F838);
    const char* name = mem_00924FF0(base + 0xa4);
    ext_00427550(&child, name);
    ext_00870300(base + 0x38, arg0, mem_00A9EFE8, mem_00A9EFE0);
    ext_00870300(base + 0x4c, arg0, mem_00A9F168, mem_00A9F154);
    return ext_005058B0(self, arg0);
}
} // namespace lift_005246E0
