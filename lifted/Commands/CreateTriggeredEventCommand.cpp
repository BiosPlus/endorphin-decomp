// Lifted C++ translation unit: lifted/Commands/CreateTriggeredEventCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0048E0F0] Commands::CreateTriggeredEventCommand::vfunc_3 (34 bytes)
namespace lift_0048E0F0 {
extern const char mem_0093E574[];

// @name Commands::CreateTriggeredEventCommand::vfunc_3
// @class Commands::CreateTriggeredEventCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_0048E0F0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0093E574);
    return out;
}
} // namespace lift_0048E0F0
