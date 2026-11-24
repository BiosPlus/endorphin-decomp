// Lifted C++ translation unit: lifted/leaf/decompiled_780000.cpp
#include "lift_compat.h"
#include <cstdio>

// [0x00780250]
namespace lift_00780250 {
// @name UnknownClass::destroyField04
// @class UnknownClass
// @summary Passes field_0x04 to thunk_MFC80_ord_764.
// @field UnknownClass +0x04 uint32_t field_0x04


extern void ext_006A5C5C(uint32_t arg0);

void __thiscall fn_00780250(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x4);
    ext_006A5C5C(val);
}
} // namespace lift_00780250

// [0x00782B10]
namespace lift_00782B10 {
// @name GetBipedQuadrupedName
// @summary Returns "Biped" for selector 0, "Quadruped" for selector 1, otherwise nullptr.

extern const char mem_00AAF2A4[]; // "Biped"
extern const char mem_00AAF2AC[]; // "Quadruped"

const char* sub_00782B10(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2A4;
    }
    if (selector == 1) {
        return mem_00AAF2AC;
    }
    return nullptr;
}
} // namespace lift_00782B10

// [0x00782B60]
namespace lift_00782B60 {
// @name GetAutoUserModeName
// @summary Returns "Auto" for selector 0, "User" for selector 1, otherwise nullptr.

extern const char mem_00AAF2BC[]; // "Auto"
extern const char mem_00AAF2C4[]; // "User"

const char* sub_00782B60(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2BC;
    }
    if (selector == 1) {
        return mem_00AAF2C4;
    }
    return nullptr;
}
} // namespace lift_00782B60

// [0x00782B80] sub_00782B80 (32 bytes)
namespace lift_00782B80 {
extern const char mem_00AAF2CC[];
extern const char mem_00AAF2D8[];

// @name descriptiveName: sub_00782B80 (selects "Relative"/"Absolute" label)
// @class (none; free function)
// @summary Maps a mode selector (0 = "Relative", 1 = "Absolute") to a static label string; returns nullptr for other values.
const char* sub_00782B80(DWORD mode) {
    switch (mode) {
    case 0:
        return mem_00AAF2CC;
    case 1:
        return mem_00AAF2D8;
    default:
        return nullptr;
    }
}
} // namespace lift_00782B80

// [0x00782CB0] sub_00782CB0 (32 bytes)
namespace lift_00782CB0 {
extern const char mem_00AAF348[];
extern const char mem_00AAF354[];

// @name GetRigidName
// @summary Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.
// @field none
const char* fn_00782CB0(DWORD selector) {
    switch (selector) {
        case 0:
            return mem_00AAF348;
        case 1:
            return mem_00AAF354;
        default:
            return nullptr;
    }
}
} // namespace lift_00782CB0

// [0x00782D00] sub_00782D00 (32 bytes)
namespace lift_00782D00 {
// @name sub_00782D00 (thiscall: reset object state, store one DWORD argument)
// @class <unknown> (self pointer in ECX; class not identified)
// @summary Zeroes the dword fields at +0x00/+0x04/+0x08 and byte flags at +0x10/+0x11, stores the stack argument at +0x0C, then returns (ret 4).
// @field <unknown> +0x00 DWORD field_0x00
// @field <unknown> +0x04 DWORD field_0x04
// @field <unknown> +0x08 DWORD field_0x08
// @field <unknown> +0x0C DWORD field_0x0C
// @field <unknown> +0x10 BYTE field_0x10
// @field <unknown> +0x11 BYTE field_0x11
void fn_00782D00(void* self, DWORD arg) {
    BYTE* obj = static_cast<BYTE*>(self);
    *reinterpret_cast<BYTE*>(obj + 0x11) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x00) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x04) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x08) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x0C) = arg;
    *reinterpret_cast<BYTE*>(obj + 0x10) = 0;
}
} // namespace lift_00782D00

// [0x007833F0] sub_007833F0 (32 bytes)
namespace lift_007833F0 {
// @name CloseOwnedFileIfOpen
// @class Unknown
// @summary If the inner handle's open flag (+0x04) is set, clear it and fclose the FILE* at inner+0x00.
// @field Unknown +0x04 void* inner
// @field Unknown +0x04 uint8_t openFlag (inner+0x04)
// @field Unknown +0x00 FILE* file (inner+0x00)
void fn_007833F0(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(inner, 0x04) == 0) {
        return;
    }
    lift_field<uint8_t>(inner, 0x04) = 0;
    inner = lift_field<void*>(self, 0x04);
    FILE* file = lift_field<FILE*>(inner, 0x00);
    fclose(file);
}
} // namespace lift_007833F0
