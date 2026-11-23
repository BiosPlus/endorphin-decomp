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
