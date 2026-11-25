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
