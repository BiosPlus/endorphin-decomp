// Lifted C++ translation unit: lifted/classes/GWCPropertyEditFeel.cpp
#include "lift_compat.h"

// [0x006B28A0] GWCPropertyEditFeel::vfunc_6 (86 bytes)
namespace lift_006B28A0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (allocator; takes byte size, returns block or null).
extern void* ext_006A5C62(size_t size);
// Known callee 0x006B0CA0: sub_006B0CA0 (thiscall initializer for the new object; its eax result is returned).
extern void* ext_006B0CA0(void* self);

// @name GWCPropertyEditFeel::vfunc_6
// @class GWCPropertyEditFeel
// @summary Allocates a 0x6C-byte object and initializes it; returns the result, or null if allocation fails.
void* fn_006B28A0(void* self) {
    (void)self;
    void* obj = ext_006A5C62(0x6c);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_006B0CA0(obj);
}
} // namespace lift_006B28A0
