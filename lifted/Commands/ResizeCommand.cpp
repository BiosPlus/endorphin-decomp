// Lifted C++ translation unit: lifted/Commands/ResizeCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00480220] Commands::ResizeCommand::vfunc_3 (34 bytes)
namespace lift_00480220 {
extern const char mem_0092AAFC[];

// @name Commands::ResizeCommand::vfunc_3
// @class Commands::ResizeCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_00480220(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0092AAFC);
    return out;
}
} // namespace lift_00480220
