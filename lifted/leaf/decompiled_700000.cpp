// Lifted C++ translation unit: lifted/leaf/decompiled_700000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0070A1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x0070A1D0] sub_0070A1D0 (32 bytes)
// @name sub_0070A1D0
// @summary MSVC scalar deleting destructor: calls sub_0070A1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070A1D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070A1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00707980] sub_00707980 (13 bytes)
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006FA920(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_00707980(void* self) {
    return ext_006FA920(self);
}
} // namespace lift_00707980

// [0x00707970] sub_00707970 (13 bytes)
namespace lift_00707970 {
// @name sub_00707970
// @summary Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006FA8F0(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_00707970(void* self) {
    return ext_006FA8F0(self);
}
} // namespace lift_00707980
} // namespace lift_00707970

// [0x007008F0] sub_007008F0 (32 bytes)
namespace lift_007008F0 {
// Known callee 0x006B9950: sub_006B9950 (returns a bool-like flag in al; takes this in ecx)
extern uint8_t ext_006B9950(void* self);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t ext_006E7460(void* self);

// @name Unknown::GetSubObjectValue
// @class Unknown
// @summary Passes the embedded sub-object at +0x10 to a flag check; returns 0 if the flag is set, otherwise the sub-object's int32 getter value.
// @field Unknown +0x10 <embedded object> field_0x10
int32_t fn_007008F0(void* self) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x10;
    if (ext_006B9950(sub) != 0) {
        return 0;
    }
    return ext_006E7460(sub);
}
} // namespace lift_007008F0
