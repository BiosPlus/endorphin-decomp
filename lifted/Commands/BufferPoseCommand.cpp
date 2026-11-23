// Lifted C++ translation unit: lifted/Commands/BufferPoseCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0048DF90] Commands::BufferPoseCommand::vfunc_3 (34 bytes)
namespace lift_0048DF90 {
extern const char mem_0093E540[];

// @name Commands::BufferPoseCommand::vfunc_3
// @class Commands::BufferPoseCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_0048DF90(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0093E540);
    return out;
}
} // namespace lift_0048DF90
