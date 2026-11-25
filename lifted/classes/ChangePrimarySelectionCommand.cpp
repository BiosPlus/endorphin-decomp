// Lifted C++ translation unit: lifted/classes/ChangePrimarySelectionCommand.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004B0130] ChangePrimarySelectionCommand::vfunc_0 (86 bytes)
namespace lift_004B0130 {
// @name ChangePrimarySelectionCommand::vfunc_0
// @class ChangePrimarySelectionCommand
// @summary Auto-lifted identical-shape clone of 0x0048F920 (SetTriggeredEventFrameRangeCommand::scalarDeletingDtor).
// @field ChangePrimarySelectionCommand +0x18 void* field_0x18
// @field ChangePrimarySelectionCommand +0x1C uint32_t field_0x1C
// @field ChangePrimarySelectionCommand +0x20 uint32_t field_0x20
// @field ChangePrimarySelectionCommand +0x38 void* field_0x38
// @field ChangePrimarySelectionCommand +0x3C uint32_t field_0x3C
// @field ChangePrimarySelectionCommand +0x40 uint32_t field_0x40
namespace lift_0048F920 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void ext_00665810(void* self);

// @name SetTriggeredEventFrameRangeCommand::scalarDeletingDtor
// @class Commands::SetTriggeredEventFrameRangeCommand
// @summary Releases the owned pointers at +0x30 and +0x40, zeroes the range fields, resets the base via sub_00665810, and frees the object when flags bit 0 is set.
// @field Commands::SetTriggeredEventFrameRangeCommand +0x30 void* field_0x30
// @field Commands::SetTriggeredEventFrameRangeCommand +0x34 uint32_t field_0x34
// @field Commands::SetTriggeredEventFrameRangeCommand +0x38 uint32_t field_0x38
// @field Commands::SetTriggeredEventFrameRangeCommand +0x40 void* field_0x40
// @field Commands::SetTriggeredEventFrameRangeCommand +0x44 uint32_t field_0x44
// @field Commands::SetTriggeredEventFrameRangeCommand +0x48 uint32_t field_0x48
void* fn_004B0130(void* self, uint8_t flags) {
    void*& p40 = lift_field<void*>(self, 0x38);
    if (p40 != nullptr) {
        ext_006A5C5C(p40);
    }
    p40 = nullptr;
    lift_field<uint32_t>(self, 0x3C) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;

    void*& p30 = lift_field<void*>(self, 0x18);
    if (p30 != nullptr) {
        ext_006A5C5C(p30);
    }
    p30 = nullptr;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    ext_00665810(self);

    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0048F920
} // namespace lift_004B0130
