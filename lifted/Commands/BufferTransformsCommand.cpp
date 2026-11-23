// Lifted C++ translation unit: lifted/Commands/BufferTransformsCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004801F0] Commands::BufferTransformsCommand::vfunc_3 (34 bytes)
namespace lift_004801F0 {
extern const char mem_0093C3E0[];

// @name Commands::BufferTransformsCommand::vfunc_3
// @class Commands::BufferTransformsCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_004801F0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0093C3E0);
    return out;
}
} // namespace lift_004801F0

// [0x004816E0] Commands::BufferTransformsCommand::vfunc_1 (10 bytes)
namespace lift_004816E0 {
// @name Commands::BufferTransformsCommand::vfunc_1
// @class Commands::BufferTransformsCommand
// @summary Auto-lifted identical-shape clone of 0x00419E20 (FolderDialog::vfunc_79).
// @field Commands::BufferTransformsCommand +0x50 uint8_t field_0x50
namespace lift_00419E20 {
// @name FolderDialog::vfunc_79
// @class FolderDialog
// @summary Forwards pointer to field_0x68 to sub_00419DF0
// @field FolderDialog +0x68 uint8_t field_0x68


extern uint32_t ext_00480B00(uintptr_t arg0);

uint32_t __thiscall fn_004816E0(uintptr_t self) {
    return ext_00480B00(self + 0x50);
}
} // namespace lift_00419E20
} // namespace lift_004816E0

// [0x004816F0] Commands::BufferTransformsCommand::vfunc_2 (10 bytes)
namespace lift_004816F0 {
// @name Commands::BufferTransformsCommand::vfunc_2
// @class Commands::BufferTransformsCommand
// @summary Auto-lifted identical-shape clone of 0x00419E20 (FolderDialog::vfunc_79).
// @field Commands::BufferTransformsCommand +0x40 uint8_t field_0x40
namespace lift_00419E20 {
// @name FolderDialog::vfunc_79
// @class FolderDialog
// @summary Forwards pointer to field_0x68 to sub_00419DF0
// @field FolderDialog +0x68 uint8_t field_0x68


extern uint32_t ext_00480B00(uintptr_t arg0);

uint32_t __thiscall fn_004816F0(uintptr_t self) {
    return ext_00480B00(self + 0x40);
}
} // namespace lift_00419E20
} // namespace lift_004816F0
