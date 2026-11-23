// Lifted C++ translation unit: lifted/Commands/MirrorCollisionModelCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC720] Commands::MirrorCollisionModelCommand::vfunc_3 (34 bytes)
namespace lift_005AC720 {
extern const char mem_0095F508[];

// @name Commands::MirrorCollisionModelCommand::vfunc_3
// @class Commands::MirrorCollisionModelCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC720(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F508);
    return out;
}
} // namespace lift_005AC720
