// Lifted C++ translation unit: lifted/leaf/decompiled_6F0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006FD420(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x006FD400] sub_006FD400 (32 bytes)
// @name sub_006FD400
// @summary MSVC scalar deleting destructor: calls sub_006FD420 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006FD400(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006FD420(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F90D0]
namespace lift_006F90D0 {
// @name Unknown::LookupTableEntry
// @summary Returns the u32 at index idx of the 0x2C-entry table at 0x00AAB3EC, or 0 if idx is out of range [0, 0x2C).

extern const uint32_t mem_00AAB3EC[];

uint32_t sub_006F90D0(int32_t idx) {
    if (idx < 0 || idx >= 0x2C) {
        return 0;
    }
    return mem_00AAB3EC[idx];
}
} // namespace lift_006F90D0

// [0x006F8AF0] sub_006F8AF0 (32 bytes)
namespace lift_006F8AF0 {
// @name Unknown::ResetHeaderState
// @class Unknown
// @summary Zeroes the leading dword, sets byte +0x04 to 1, and clears bytes +0x05..+0x08.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x05 uint8_t field_0x05
// @field Unknown +0x06 uint8_t field_0x06
// @field Unknown +0x07 uint8_t field_0x07
// @field Unknown +0x08 uint8_t field_0x08
void fn_006F8AF0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint8_t>(self, 0x04) = 1;
    lift_field<uint8_t>(self, 0x05) = 0;
    lift_field<uint8_t>(self, 0x06) = 0;
    lift_field<uint8_t>(self, 0x07) = 0;
    lift_field<uint8_t>(self, 0x08) = 0;
}
} // namespace lift_006F8AF0

// [0x006F9DC0] sub_006F9DC0 (32 bytes)
namespace lift_006F9DC0 {
// @name Unknown::SetFourFields
// @class Unknown
// @summary Stores four stack arguments into this object: two dwords at +0x00/+0x04 and +0x08, then a byte at +0x0C.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint8_t field_0x0C
void fn_006F9DC0(void* ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
    lift_field<uint32_t>(ecx, 0x00) = arg0;
    lift_field<uint32_t>(ecx, 0x04) = arg1;
    lift_field<uint32_t>(ecx, 0x08) = arg2;
    lift_field<uint8_t>(ecx, 0x0C) = arg3;
}
} // namespace lift_006F9DC0
