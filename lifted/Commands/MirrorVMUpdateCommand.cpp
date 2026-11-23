// Lifted C++ translation unit: lifted/Commands/MirrorVMUpdateCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC6B0] Commands::MirrorVMUpdateCommand::vfunc_3 (34 bytes)
namespace lift_005AC6B0 {
extern const char mem_0095F4F8[];

// @name Commands::MirrorVMUpdateCommand::vfunc_3
// @class Commands::MirrorVMUpdateCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC6B0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F4F8);
    return out;
}
} // namespace lift_005AC6B0
