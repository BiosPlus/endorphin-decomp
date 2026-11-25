// Lifted C++ translation unit: lifted/Commands/ResizeCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00480220] Commands::ResizeCommand::vfunc_3 (34 bytes)
namespace lift_00480220 {
extern const std::string mem_0092AAFC;

// @name Commands::ResizeCommand::vfunc_3
// @class Commands::ResizeCommand
// @summary Auto-lifted identical-shape clone of 0x005C3270 (NMData::FluidObjectData::vfunc_62).
// @field Commands::ResizeCommand +0x0 void** vptr
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_0092AAFC;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE4)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_00480220(void* self, void* out) {
    (void)self;
    mem_00924FE4(out, mem_0092AAFC);
    return out;
}
} // namespace lift_005C3270
} // namespace lift_00480220
