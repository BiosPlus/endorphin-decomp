// Lifted C++ translation unit: lifted/leaf/decompiled_550000.cpp
#include "lift_compat.h"

// [0x005528E0] sub_005528E0 (14 bytes)
namespace lift_005528E0 {
// Known callee 0x005528D0: HandleGraphic::vfunc_1 (Sets the floats at +0x04 and +0x08 to 1.0f, then tail-calls SubObject::resetScaleAndIndex on the same object.)
extern void __fastcall fn_005528D0(void* self);

// @name SetVtableAndInitGraphic
// @summary Stores constant vtable-like word at +0x00 of self, calls fn_005528D0(self), returns self.
// @field self +0x00 uint32_t field_0x00 (constant 0x00957534 stored here)
void* fn_005528E0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x00957534u;
    fn_005528D0(self);
    return self;
}
} // namespace lift_005528E0

// [0x00553960] sub_00553960 (27 bytes)
namespace lift_00553960 {
// Known callee 0x00584C10: sub_00584C10 (takes the pointer in ecx, returns a bool in al)
extern uint8_t ext_00584C10(void* arg);

// @name descriptiveName_00553960
// @summary Returns 1 if the pointer argument is non-null and ext_00584C10 returns false for it; otherwise 0.
// @field none (no direct field accesses; the argument is only passed through to ext_00584C10)
uint8_t descriptiveName_00553960(void* arg) {
    if (arg == nullptr) {
        return 0;
    }
    if (ext_00584C10(arg) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00553960

// [0x00554CE0] sub_00554CE0 (27 bytes)
namespace lift_00554CE0 {
extern float ext_005530B0(float x);

// @name descriptiveName_00554CE0
// @summary Returns the argument passed through ext_005530B0, scaled by the float at self+0x20.
// @field (unknown) +0x20 float field_0x20
float fn_00554CE0(void* self, float x) {
    const float scale = *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    return ext_005530B0(x) * scale;
}
} // namespace lift_00554CE0

// [0x005571E0] sub_005571E0 (27 bytes)
namespace lift_005571E0 {
// @name sub_005571E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_005566D0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005571E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005566D0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_005571E0

// [0x005572D0] sub_005572D0 (27 bytes)
namespace lift_005572D0 {
// @name sub_005572D0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00556740(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005572D0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00556740(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_005572D0

// [0x00557360] sub_00557360 (27 bytes)
namespace lift_00557360 {
// @name sub_00557360
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_005567D0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00557360(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005567D0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00557360

// [0x00559620] sub_00559620 (27 bytes)
namespace lift_00559620 {
// @name sub_00559620
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558F20(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559620(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558F20(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559620

// [0x00559640] sub_00559640 (27 bytes)
namespace lift_00559640 {
// @name sub_00559640
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558F80(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559640(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558F80(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559640

// [0x00559660] sub_00559660 (27 bytes)
namespace lift_00559660 {
// @name sub_00559660
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558FE0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559660(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558FE0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559660

// [0x00559C30] sub_00559C30 (27 bytes)
namespace lift_00559C30 {
// @name sub_00559C30
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00559840(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559C30(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00559840(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559C30

// [0x0055B860] sub_0055B860 (27 bytes)
namespace lift_0055B860 {
// @name sub_0055B860
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0055B780(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0055B860(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0055B780(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0055B860

// [0x00553760] sub_00553760 (31 bytes)
namespace lift_00553760 {
// Known callee 0x00661A00: sub_00661A00 (Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D570.)
// Returns the callee's eax value (tail-call passthrough), so it is declared with an int result.
extern int __fastcall ext_00661A00(void* self);
// Callee 0x00553080 (41B): takes `this` in ecx and one stack argument; callee cleans the stack.
extern void __thiscall ext_00553080(void* self, int arg);

// @name Unknown::CallSubobjectThenDecrement
// @class Unknown
// @summary Forwards to the subobject at +0x420 via ext_00661A00, decrements the result, and passes it to ext_00553080 on the member at +0x16C.
// @field Unknown +0x420 void* field_0x420
void fn_00553760(void* self) {
    void* subobject = lift_field<void*>(self, 0x420);
    int result = ext_00661A00(subobject);
    result = result - 1;
    ext_00553080(static_cast<char*>(self) + 0x16C, result);
}
} // namespace lift_00553760

// [0x0055E180] sub_0055E180 (32 bytes)
namespace lift_0055E180 {
extern void ext_0055E150();

// Virtual slot 0 of the object, called with the object in ECX (thiscall) and one stack arg.
typedef void (__thiscall *VirtualSlot0Fn)(void* self, uint32_t arg);

// @name ForwardVirtualSlot0WithOne
// @class Unknown
// @summary Calls ext_0055E150, then if the object pointed to by the argument is non-null, invokes its vtable slot 0 with the object as this and 1 as the argument.
// @field Unknown +0x00 void* field_0x00
extern void __stdcall fn_0055E180(void** objRef) {
    ext_0055E150();

    void* obj = *objRef;
    if (obj == nullptr) {
        return;
    }

    void** vtable = lift_field<void**>(obj, 0x00);
    auto slot0 = reinterpret_cast<VirtualSlot0Fn>(vtable[0]);
    slot0(obj, 1u);
}
} // namespace lift_0055E180
