// Lifted C++ translation unit: lifted/Commands/RemoveFluidObjectCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC7F0] Commands::RemoveFluidObjectCommand::vfunc_3 (34 bytes)
namespace lift_005AC7F0 {
extern const char mem_0095F54C[];

// @name Commands::RemoveFluidObjectCommand::vfunc_3
// @class Commands::RemoveFluidObjectCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC7F0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F54C);
    return out;
}
} // namespace lift_005AC7F0
