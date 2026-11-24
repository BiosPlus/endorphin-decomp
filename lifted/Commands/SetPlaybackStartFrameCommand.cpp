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

// [0x0048E080] Commands::SetPlaybackStartFrameCommand::vfunc_2 (13 bytes)
namespace lift_0048E080 {
extern void ext_00473670(void* ecx_this, uintptr_t arg0);

// @name Commands::SetPlaybackStartFrameCommand::vfunc_2
// @class Commands::SetPlaybackStartFrameCommand
// @summary Forwards two fields of this command (+0x10 as receiver, +0x18 as argument) to ext_00473670.
// @field Commands::SetPlaybackStartFrameCommand +0x10 void* field_0x10
// @field Commands::SetPlaybackStartFrameCommand +0x18 uintptr_t field_0x18
void fn_0048E080(void* self) {
    void* receiver = lift_field<void*>(self, 0x10);
    uintptr_t arg = lift_field<uintptr_t>(self, 0x18);
    ext_00473670(receiver, arg);
}
} // namespace lift_0048E080
