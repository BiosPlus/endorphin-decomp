// Lifted C++ translation unit: lifted/Commands/BufferChannelsCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0048DFC0] Commands::BufferChannelsCommand::vfunc_3 (34 bytes)
namespace lift_0048DFC0 {
extern const char mem_0093E54C[];

// @name Commands::BufferChannelsCommand::vfunc_3
// @class Commands::BufferChannelsCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_0048DFC0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0093E54C);
    return out;
}
} // namespace lift_0048DFC0

// [0x0048F4F0] Commands::BufferChannelsCommand::vfunc_1 (10 bytes)
namespace lift_0048F4F0 {
// @name Commands::BufferChannelsCommand::vfunc_1
// @class Commands::BufferChannelsCommand
// @summary Auto-lifted identical-shape clone of 0x00419E20 (FolderDialog::vfunc_79).
// @field Commands::BufferChannelsCommand +0x20 uint8_t field_0x20
namespace lift_00419E20 {
// @name FolderDialog::vfunc_79
// @class FolderDialog
// @summary Forwards pointer to field_0x68 to sub_00419DF0
// @field FolderDialog +0x68 uint8_t field_0x68


extern uint32_t ext_0048F1F0(uintptr_t arg0);

uint32_t __thiscall fn_0048F4F0(uintptr_t self) {
    return ext_0048F1F0(self + 0x20);
}
} // namespace lift_00419E20
} // namespace lift_0048F4F0

// [0x0048F500] Commands::BufferChannelsCommand::vfunc_2 (10 bytes)
namespace lift_0048F500 {
// @name Commands::BufferChannelsCommand::vfunc_2
// @class Commands::BufferChannelsCommand
// @summary Auto-lifted identical-shape clone of 0x00419E20 (FolderDialog::vfunc_79).
// @field Commands::BufferChannelsCommand +0x14 uint8_t field_0x14
namespace lift_00419E20 {
// @name FolderDialog::vfunc_79
// @class FolderDialog
// @summary Forwards pointer to field_0x68 to sub_00419DF0
// @field FolderDialog +0x68 uint8_t field_0x68


extern uint32_t ext_0048F1F0(uintptr_t arg0);

uint32_t __thiscall fn_0048F500(uintptr_t self) {
    return ext_0048F1F0(self + 0x14);
}
} // namespace lift_00419E20
} // namespace lift_0048F500
