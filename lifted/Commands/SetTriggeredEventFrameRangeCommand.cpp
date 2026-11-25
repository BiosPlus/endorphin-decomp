// Lifted C++ translation unit: lifted/Commands/SetTriggeredEventFrameRangeCommand.cpp
#include "lift_compat.h"

// [0x0048F920] Commands::SetTriggeredEventFrameRangeCommand::vfunc_0 (86 bytes)
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
void* fn_0048F920(void* self, uint8_t flags) {
    void*& p40 = lift_field<void*>(self, 0x40);
    if (p40 != nullptr) {
        ext_006A5C5C(p40);
    }
    p40 = nullptr;
    lift_field<uint32_t>(self, 0x44) = 0;
    lift_field<uint32_t>(self, 0x48) = 0;

    void*& p30 = lift_field<void*>(self, 0x30);
    if (p30 != nullptr) {
        ext_006A5C5C(p30);
    }
    p30 = nullptr;
    lift_field<uint32_t>(self, 0x34) = 0;
    lift_field<uint32_t>(self, 0x38) = 0;

    ext_00665810(self);

    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0048F920
