// Lifted C++ translation unit: lifted/Commands/MirrorCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC640] Commands::MirrorCommand::vfunc_3 (34 bytes)
namespace lift_005AC640 {
extern const char mem_0095F4D8[];

// @name Commands::MirrorCommand::vfunc_3
// @class Commands::MirrorCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC640(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F4D8);
    return out;
}
} // namespace lift_005AC640
