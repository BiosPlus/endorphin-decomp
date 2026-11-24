// Lifted C++ translation unit: lifted/leaf/decompiled_4A0000.cpp
#include "lift_compat.h"

// [0x004AEC60] sub_004AEC60 (14 bytes)
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_004AEC60(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0x04);
    void* vt = lift_field<void*>(sub, 0x08);
    ThisFn target = lift_field<ThisFn>(vt, 0x50);

    target(static_cast<uint8_t*>(sub) + 0x08);
}
} // namespace lift_004AEC60

// [0x004A2510] sub_004A2510 (17 bytes)
namespace lift_004A2510 {
// @name Unknown::setFlag4AndForwardToSlot1
// @class Unknown
// @summary Sets byte +0x04 of the object at self+0x14, then tail-calls vtable slot 1 of the object at self+0x1C (passing it as this) and returns that result.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x1C void* field_0x1C
uint32_t fn_004A2510(void* self) {
    void* flagOwner = lift_field<void*>(self, 0x14);
    lift_field<uint8_t>(flagOwner, 0x04) = 1;

    void* target = lift_field<void*>(self, 0x1C);
    void** vtable = *reinterpret_cast<void***>(target);
    using Slot1Fn = uint32_t (*)(void* self);
    return reinterpret_cast<Slot1Fn>(vtable[1])(target);
}
} // namespace lift_004A2510

// [0x004A5BE0] sub_004A5BE0 (25 bytes)
namespace lift_004A5BE0 {
// @name sub_004A5BE0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00644F30(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004A5BE0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00644F30(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004A5BE0

// [0x004AECE0] sub_004AECE0 (25 bytes)
namespace lift_004AECE0 {
// @name sub_004AECE0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00676C90(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004AECE0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00676C90(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004AECE0
