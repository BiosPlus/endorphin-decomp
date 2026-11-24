// Lifted C++ translation unit: lifted/classes/GWCPropertyFeel.cpp
#include "lift_compat.h"

// [0x006B0C10] GWCPropertyFeel::vfunc_5 (30 bytes)
namespace lift_006B0C10 {
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern void ext_006A5E72(DWORD arg);

// @name GWCPropertyFeel::vfunc_5
// @class GWCPropertyFeel
// @summary Returns the field at +0x04; if it is non-zero, first calls ext_006A5E72(5) and then re-reads the field.
// @field GWCPropertyFeel +0x04 DWORD field_0x04
DWORD fn_006B0C10(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    DWORD value = *reinterpret_cast<DWORD*>(base + 0x04);
    if (value != 0) {
        ext_006A5E72(5);
        value = *reinterpret_cast<DWORD*>(base + 0x04);
    }
    return value;
}
} // namespace lift_006B0C10
