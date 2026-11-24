// Lifted C++ translation unit: lifted/Commands/SetPlaybackEndFrameCommand.cpp
#include "lift_compat.h"

// [0x0048E090] Commands::SetPlaybackEndFrameCommand::vfunc_1 (13 bytes)
namespace lift_0048E090 {
extern void __thiscall ext_004736B0(uintptr_t self, uint32_t arg0);

// @name Commands::SetPlaybackEndFrameCommand::vfunc_1
// @class Commands::SetPlaybackEndFrameCommand
// @summary Forwards the command's field at +0x10 as the receiver and its field at +0x14 as the single argument to ext_004736B0.
// @field Commands::SetPlaybackEndFrameCommand +0x10 uint32_t field_0x10
// @field Commands::SetPlaybackEndFrameCommand +0x14 uint32_t field_0x14
void fn_0048E090(void* self) {
    const uint32_t arg0 = lift_field<uint32_t>(self, 0x14);
    const uint32_t recv = lift_field<uint32_t>(self, 0x10);
    ext_004736B0(static_cast<uintptr_t>(recv), arg0);
}
} // namespace lift_0048E090

// [0x0048E0A0] Commands::SetPlaybackEndFrameCommand::vfunc_2 (13 bytes)
namespace lift_0048E0A0 {
extern void ext_004736B0(void* ecx, DWORD arg);

// @name Commands::SetPlaybackEndFrameCommand::vfunc_2
// @class Commands::SetPlaybackEndFrameCommand
// @summary Forwards this->field_0x18 as an argument to ext_004736B0, using this->field_0x10 as the receiver.
// @field Commands::SetPlaybackEndFrameCommand +0x10 void* field_0x10
// @field Commands::SetPlaybackEndFrameCommand +0x18 DWORD field_0x18
void fn_0048E0A0(void* self) {
    DWORD value = lift_field<DWORD>(self, 0x18);
    void* target = lift_field<void*>(self, 0x10);
    ext_004736B0(target, value);
}
} // namespace lift_0048E0A0
