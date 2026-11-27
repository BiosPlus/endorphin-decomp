// Lifted C++ translation unit: lifted/Commands/SetPlaybackEndFrameCommand.cpp
#include "lift_compat.h"
#include <cstdint>

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

// [0x0048E580] Commands::SetPlaybackEndFrameCommand::vfunc_3 (163 bytes)
namespace lift_0048E580 {
// @name Commands::SetPlaybackEndFrameCommand::vfunc_3
// @class Commands::SetPlaybackEndFrameCommand
// @summary Auto-lifted identical-shape clone of 0x0048E4D0 (Commands::SetPlaybackStartFrameCommand::vfunc_3).
// @field Commands::SetPlaybackEndFrameCommand +0x14 int32_t field_0x14
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

void* __thiscall fn_0048E580(void* self, void* out) {
    alignas(8) uint8_t oss[0x80]{};
    mem_00924E4C(oss, 2, 1);
    void* stream = ext_00435D00(oss, reinterpret_cast<const char*>(0x93E62C));
    mem_00924E5C(stream, lift_field<int32_t>(self, 0x14));
    mem_00924E54(oss, out);
    mem_00924E58(oss);
    return out;
}
} // namespace lift_0048E4D0
} // namespace lift_0048E580
