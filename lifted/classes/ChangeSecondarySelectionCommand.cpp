// Lifted C++ translation unit: lifted/classes/ChangeSecondarySelectionCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004AFDE0] ChangeSecondarySelectionCommand::vfunc_3 (34 bytes)
namespace lift_004AFDE0 {
extern const char mem_00941F98[];

// @name ChangeSecondarySelectionCommand::vfunc_3
// @class ChangeSecondarySelectionCommand
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_004AFDE0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00941F98);
    return out;
}
} // namespace lift_004AFDE0
