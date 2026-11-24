// Lifted C++ translation unit: lifted/leaf/decompiled_590000.cpp
#include "lift_compat.h"

// [0x00594790] sub_00594790 (25 bytes)
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00675650(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00594790(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00675650(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790

// [0x0059E060] sub_0059E060 (31 bytes)
namespace lift_0059E060 {
// Callee 0x006AD940 (sub_006AD940): thiscall, takes the object in ECX, returns a pointer-sized value in EAX.
extern uint32_t __thiscall ext_006AD940(void* self);
// Known callee 0x00492550: IsStateOneWithNonZeroField8 (Returns 1 if the dword at self+0x00 equals 1 and the dword at self+0x08 is nonzero, else 0.)
extern int __thiscall ext_00492550(void* self);

// @name IsResolvedChildStateOneWithNonZeroField8
// @summary Returns 0 if the dword at +0x5F8 is null; otherwise resolves the object at +0x26C of that pointer via ext_006AD940 and tail-returns IsStateOneWithNonZeroField8 on the result.
// @field Self +0x5F8 uint32_t field_0x5F8
// @field ChildObject +0x26C uint32_t field_0x26C
int __thiscall fn_0059E060(void* self) {
    const uint32_t child = lift_field<uint32_t>(self, 0x5F8);
    if (child == 0) {
        return 0;
    }

    void* child_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    const uint32_t arg = lift_field<uint32_t>(child_obj, 0x26C);
    const uint32_t resolved = ext_006AD940(reinterpret_cast<void*>(static_cast<uintptr_t>(arg)));

    return ext_00492550(reinterpret_cast<void*>(static_cast<uintptr_t>(resolved)));
}
} // namespace lift_0059E060
