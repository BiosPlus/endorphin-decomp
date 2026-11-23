// Lifted C++ translation unit: lifted/Commands/RemoveCollisionModelCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AC750] Commands::RemoveCollisionModelCommand::vfunc_3 (34 bytes)
namespace lift_005AC750 {
extern const char mem_0095F520[];

// @name Commands::RemoveCollisionModelCommand::vfunc_3
// @class Commands::RemoveCollisionModelCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_005AC750(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0095F520);
    return out;
}
} // namespace lift_005AC750
