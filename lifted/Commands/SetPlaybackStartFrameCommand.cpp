// Lifted C++ translation unit: lifted/Commands/SetPlaybackStartFrameCommand.cpp
#include "lift_compat.h"

// [0x0048E070] Commands::SetPlaybackStartFrameCommand::vfunc_1 (13 bytes)
namespace lift_0048E070 {
extern void ext_00473670(void* ecxArg, uint32_t stackArg);

// @name Commands::SetPlaybackStartFrameCommand::vfunc_1
// @class Commands::SetPlaybackStartFrameCommand
// @summary Forwards two dwords from this+0x10/+0x14 to ext_00473670 (ecx = +0x10, stack arg = +0x14).
// @field SetPlaybackStartFrameCommand +0x10 uint32_t field_0x10
// @field SetPlaybackStartFrameCommand +0x14 uint32_t field_0x14
void fn_0048E070(void* self) {
    uint32_t field14 = lift_field<uint32_t>(self, 0x14);
    void* field10 = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x10)));
    ext_00473670(field10, field14);
}
} // namespace lift_0048E070
