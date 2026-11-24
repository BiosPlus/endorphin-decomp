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

// [0x00599E70] sub_00599E70 (42 bytes)
namespace lift_00599E70 {
// Callee: MSVCR80!_invalid_parameter_noinfo, reached via an indirect call through
// the IAT slot at 0x00925134. Takes no arguments; caller does not clean up.
extern void ext_invalid_parameter_noinfo(void);

// @name GetNestedDwordAt38C
// @summary Follows self->+0x26C -> P; returns 0 if P->+0x20 is zero. Otherwise walks P->+0x1C -> Q -> R (Q->+0x00), and returns R->+0x28 -> S's dword at +0x38C.
// @field Self +0x26C uint32_t field_0x26C
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x38C uint32_t field_0x38C
uint32_t __thiscall fn_00599E70(void* self) {
    const uint32_t p = lift_field<uint32_t>(self, 0x26C);
    void* p_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(p));

    if (lift_field<uint32_t>(p_obj, 0x20) == 0) {
        return 0;
    }

    const uint32_t q = lift_field<uint32_t>(p_obj, 0x1C);
    void* q_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(q));
    const uint32_t r = lift_field<uint32_t>(q_obj, 0x00);

    if (r == q) {
        ext_invalid_parameter_noinfo();
    }

    void* r_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(r));
    const uint32_t s = lift_field<uint32_t>(r_obj, 0x28);
    void* s_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(s));

    return lift_field<uint32_t>(s_obj, 0x38C);
}
} // namespace lift_00599E70
