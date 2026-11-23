// Lifted C++ translation unit: lifted/classes/ChangePrimarySelectionCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004B00E0] ChangePrimarySelectionCommand::vfunc_3 (34 bytes)
namespace lift_004B00E0 {
extern const char mem_0092AB40[];

// @name ChangePrimarySelectionCommand::vfunc_3
// @class ChangePrimarySelectionCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_004B00E0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0092AB40);
    return out;
}
} // namespace lift_004B00E0
