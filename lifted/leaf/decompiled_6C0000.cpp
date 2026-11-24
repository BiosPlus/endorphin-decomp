// Lifted C++ translation unit: lifted/leaf/decompiled_6C0000.cpp
#include "lift_compat.h"

// [0x006CA060] sub_006CA060 (13 bytes)
namespace lift_006CA060 {
// @name sub_006CA060
// @summary Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006CA020(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_006CA060(void* self) {
    return ext_006CA020(self);
}
} // namespace lift_00707980
} // namespace lift_006CA060
