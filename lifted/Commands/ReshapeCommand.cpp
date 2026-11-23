// Lifted C++ translation unit: lifted/Commands/ReshapeCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00480250] Commands::ReshapeCommand::vfunc_3 (34 bytes)
namespace lift_00480250 {
extern const char mem_0092AB0C[];

// @name Commands::ReshapeCommand::vfunc_3
// @class Commands::ReshapeCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_00480250(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0092AB0C);
    return out;
}
} // namespace lift_00480250
