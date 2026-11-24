// Lifted C++ translation unit: lifted/leaf/decompiled_580000.cpp
#include "lift_compat.h"

// [0x0058F590] sub_0058F590 (16 bytes)
namespace lift_0058F590 {
extern float ext_0058B5A0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F590(float value) {
    return ext_0058B5A0(value);
}
} // namespace lift_0058F590

// [0x0058F570] sub_0058F570 (16 bytes)
namespace lift_0058F570 {
extern void __thiscall ext_0058B4E0(void* self, float value);

// @name sub_0058F570
// @summary Thiscall float forwarder: passes its single float argument and `this` unchanged to sub_0058B4E0.
extern void __thiscall fn_0058F570(void* self, float value) {
    ext_0058B4E0(self, value);
}
} // namespace lift_0058F570

// [0x0058F600] sub_0058F600 (16 bytes)
namespace lift_0058F600 {
// @name sub_0058F600
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058ABC0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F600(float value) {
    return ext_0058ABC0(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F600

// [0x0058F620] sub_0058F620 (16 bytes)
namespace lift_0058F620 {
// @name sub_0058F620
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058AD80(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F620(float value) {
    return ext_0058AD80(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F620

// [0x0058F550] sub_0058F550 (27 bytes)
namespace lift_0058F550 {
extern void ext_0058F4C0(void* self, int32_t flag);

// @name descriptiveName_0058F550
// @summary Calls ext_0058F4C0(self, 0) for its side effects and returns self unchanged.
// (No direct field accesses; the function only forwards its pointer argument.)
void* fn_0058F550(void* self) {
    ext_0058F4C0(self, 0);
    return self;
}
} // namespace lift_0058F550
