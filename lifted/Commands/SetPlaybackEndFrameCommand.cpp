// Lifted C++ translation unit: lifted/Commands/SetPlaybackEndFrameCommand.cpp
#include "lift_compat.h"

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
