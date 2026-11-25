// Lifted C++ translation unit: lifted/Commands/BufferTransformsCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

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

// [0x004801F0] Commands::BufferTransformsCommand::vfunc_3 (34 bytes)
namespace lift_004801F0 {
extern const std::string mem_0093C3E0;

// @name Commands::BufferTransformsCommand::vfunc_3
// @class Commands::BufferTransformsCommand
// @summary Auto-lifted identical-shape clone of 0x005C3270 (NMData::FluidObjectData::vfunc_62).
// @field Commands::BufferTransformsCommand +0x0 void** vptr
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_0093C3E0;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE4)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_004801F0(void* self, void* out) {
    (void)self;
    mem_00924FE4(out, mem_0093C3E0);
    return out;
}
} // namespace lift_005C3270
} // namespace lift_004801F0
