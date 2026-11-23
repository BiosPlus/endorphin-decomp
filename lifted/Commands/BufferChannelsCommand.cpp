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
