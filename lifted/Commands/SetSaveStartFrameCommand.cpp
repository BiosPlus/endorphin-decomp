// Lifted C++ translation unit: lifted/Commands/SetSaveStartFrameCommand.cpp
#include "lift_compat.h"

// [0x0048E0B0] Commands::SetSaveStartFrameCommand::vfunc_1 (13 bytes)
namespace lift_0048E0B0 {
// @name Commands::SetSaveStartFrameCommand::vfunc_1
// @class Commands::SetSaveStartFrameCommand
// @summary Auto-lifted identical-shape clone of 0x0048E070 (Commands::SetPlaybackStartFrameCommand::vfunc_1).
namespace lift_0048E070 {
extern void ext_0046FDA0(void* ecxArg, uint32_t stackArg);

// @name Commands::SetPlaybackStartFrameCommand::vfunc_1
// @class Commands::SetPlaybackStartFrameCommand
// @summary Forwards two dwords from this+0x10/+0x14 to ext_00473670 (ecx = +0x10, stack arg = +0x14).
// @field SetPlaybackStartFrameCommand +0x10 uint32_t field_0x10
// @field SetPlaybackStartFrameCommand +0x14 uint32_t field_0x14
void fn_0048E0B0(void* self) {
    uint32_t field14 = lift_field<uint32_t>(self, 0x14);
    void* field10 = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x10)));
    ext_0046FDA0(field10, field14);
}
} // namespace lift_0048E070
} // namespace lift_0048E0B0

// [0x0048E0C0] Commands::SetSaveStartFrameCommand::vfunc_2 (13 bytes)
namespace lift_0048E0C0 {
// @name Commands::SetSaveStartFrameCommand::vfunc_2
// @class Commands::SetSaveStartFrameCommand
// @summary Auto-lifted identical-shape clone of 0x0048E070 (Commands::SetPlaybackStartFrameCommand::vfunc_1).
namespace lift_0048E070 {
extern void ext_0046FDA0(void* ecxArg, uint32_t stackArg);

// @name Commands::SetPlaybackStartFrameCommand::vfunc_1
// @class Commands::SetPlaybackStartFrameCommand
// @summary Forwards two dwords from this+0x10/+0x14 to ext_00473670 (ecx = +0x10, stack arg = +0x14).
// @field SetPlaybackStartFrameCommand +0x10 uint32_t field_0x10
// @field SetPlaybackStartFrameCommand +0x14 uint32_t field_0x14
void fn_0048E0C0(void* self) {
    uint32_t field14 = lift_field<uint32_t>(self, 0x18);
    void* field10 = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x10)));
    ext_0046FDA0(field10, field14);
}
} // namespace lift_0048E070
} // namespace lift_0048E0C0
