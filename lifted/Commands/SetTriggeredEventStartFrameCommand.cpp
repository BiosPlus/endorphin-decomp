// Lifted C++ translation unit: lifted/Commands/SetTriggeredEventStartFrameCommand.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x0048E920] Commands::SetTriggeredEventStartFrameCommand::vfunc_3 (163 bytes)
namespace lift_0048E920 {
// @name Commands::SetTriggeredEventStartFrameCommand::vfunc_3
// @class Commands::SetTriggeredEventStartFrameCommand
// @summary Auto-lifted identical-shape clone of 0x0048E4D0 (Commands::SetPlaybackStartFrameCommand::vfunc_3).
// @field Commands::SetTriggeredEventStartFrameCommand +0x14 int32_t field_0x14
namespace lift_0048E4D0 {
// @name Commands::SetPlaybackStartFrameCommand::vfunc_3
// @class Commands::SetPlaybackStartFrameCommand
// @summary Formats the command description string with the playback start frame.
// @field Commands::SetPlaybackStartFrameCommand +0x14 int32_t field_0x14


extern void* ext_00435D00(void*, const char*);
extern void* (__thiscall *mem_00924E4C)(void*, int, int);
extern void* (__thiscall *mem_00924E5C)(void*, int32_t);
extern void* (__thiscall *mem_00924E54)(void*, void*);
extern void (__thiscall *mem_00924E58)(void*);

void* __thiscall fn_0048E920(void* self, void* out) {
    alignas(8) uint8_t oss[0x80]{};
    mem_00924E4C(oss, 2, 1);
    void* stream = ext_00435D00(oss, reinterpret_cast<const char*>(0x93E6C4));
    mem_00924E5C(stream, lift_field<int32_t>(self, 0x14));
    mem_00924E54(oss, out);
    mem_00924E58(oss);
    return out;
}
} // namespace lift_0048E4D0
} // namespace lift_0048E920
