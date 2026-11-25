// Lifted C++ translation unit: lifted/Commands/ReshapeCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00480250] Commands::ReshapeCommand::vfunc_3 (34 bytes)
namespace lift_00480250 {
extern const std::string mem_0092AB0C;

// @name Commands::ReshapeCommand::vfunc_3
// @class Commands::ReshapeCommand
// @summary Auto-lifted identical-shape clone of 0x005C3270 (NMData::FluidObjectData::vfunc_62).
// @field Commands::ReshapeCommand +0x0 void** vptr
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_0092AB0C;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE4)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_00480250(void* self, void* out) {
    (void)self;
    mem_00924FE4(out, mem_0092AB0C);
    return out;
}
} // namespace lift_005C3270
} // namespace lift_00480250
