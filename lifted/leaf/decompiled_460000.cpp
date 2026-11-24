// Lifted C++ translation unit: lifted/leaf/decompiled_460000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00467320] sub_00467320 (8 bytes)
namespace lift_00467320 {
// @name sub_00467320
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467050(void* arg);

void fn_00467320() {
    ext_00467050(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00467320

// [0x00467330] sub_00467330 (8 bytes)
namespace lift_00467330 {
// @name sub_00467330
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467050(void* arg);

void fn_00467330() {
    ext_00467050(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00467330

// [0x00467380] sub_00467380 (8 bytes)
namespace lift_00467380 {
// @name sub_00467380
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467340(void* arg);

void fn_00467380() {
    ext_00467340(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00467380

// [0x00467390] sub_00467390 (8 bytes)
namespace lift_00467390 {
// @name sub_00467390
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467340(void* arg);

void fn_00467390() {
    ext_00467340(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00467390

// [0x00469C50] sub_00469C50 (8 bytes)
namespace lift_00469C50 {
// @name sub_00469C50
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C50() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C50

// [0x00469C60] sub_00469C60 (8 bytes)
namespace lift_00469C60 {
// @name sub_00469C60
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C60() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(3)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C60

// [0x00469C70] sub_00469C70 (8 bytes)
namespace lift_00469C70 {
// @name sub_00469C70
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C70() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(2)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C70

// [0x00469C80] sub_00469C80 (8 bytes)
namespace lift_00469C80 {
// @name sub_00469C80
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C80() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C80

// [0x00465B30]
namespace lift_00465B30 {
// @name get_global_field_0x58
// @summary Calls ext_004658C0 and returns the int32_t field at offset +0x58.

extern int32_t __cdecl ext_004658C0(void);

extern int32_t __cdecl fn_00465B30(void) {
    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_004658C0())));
    return *reinterpret_cast<int32_t*>(base + 0x58);
}
} // namespace lift_00465B30

// [0x0046FAC0]
namespace lift_0046FAC0 {
// @name sub_0046FAC0
// @summary Loads the 32-bit value at [ecx+0x00] and passes it to thunk_MFC80_ord_764.
// @field unknown +0x00 uint32_t field_0x00


extern void ext_006A5C5C(uint32_t arg);

void __thiscall fn_0046FAC0(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(self);
    ext_006A5C5C(val);
}
} // namespace lift_0046FAC0

// [0x00465B40] sub_00465B40 (12 bytes)
namespace lift_00465B40 {
// @name sub_00465B40
// @summary Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).
namespace lift_00430360 {
// @name getGlobalField0x58AndCall00469040
// @summary Calls get_global_field_0x58 and tail-calls ext_00469040 with the returned pointer in ECX.


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_00468660(int32_t self);

extern void __cdecl fn_00465B40(void) {
    int32_t obj = ext_00465B30();
    ext_00468660(obj);
}
} // namespace lift_00430360
} // namespace lift_00465B40

// [0x004691C0]
namespace lift_004691C0 {
// @name fn_004691C0 (descriptiveName: ForwardFieldAt26CFromGlobalResult)
// @class (none)
// @summary Calls ext_00594000 to obtain an int32 handle, reads the dword at handle+0x26C, and tail-forwards that value to ext_00477380.
// @field Unknown +0x26C int32_t field_0x26C

extern int32_t ext_00594000(void);
extern int32_t ext_00477380(int32_t ecx);

extern int32_t fn_004691C0(void) {
    const int32_t eax = ext_00594000();
    void* const base = reinterpret_cast<void*>(static_cast<intptr_t>(eax));
    const int32_t ecx = lift_field<int32_t>(base, 0x26C);
    return ext_00477380(ecx);
}
} // namespace lift_004691C0

// [0x00464760] sub_00464760 (17 bytes)
namespace lift_00464760 {
// @name sub_00464760
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_004658C0();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_00464760() {
    void* obj = ext_004658C0();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xA4));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_00464760

// [0x00468750] sub_00468750 (17 bytes)
namespace lift_00468750 {
// Known callee 0x0046FE50: sub_0046FE50 (Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).)
extern uint8_t ext_0046FE50(void* self);

// @name guardedForwardToChild
// @summary If the flag byte at self+0x10 is set, tail-forward to ext_0046FE50 with the pointer at self+0x14; otherwise return 0.
// @field self +0x10 uint8_t field_0x10
// @field self +0x14 uint32_t field_0x14
uint8_t fn_00468750(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    if (base[0x10] == 0) {
        return 0;
    }
    uint32_t child = 0;
    std::memcpy(&child, base + 0x14, sizeof(child));
    return ext_0046FE50(reinterpret_cast<void*>(static_cast<uintptr_t>(child)));
}
} // namespace lift_00468750

// [0x00468770] sub_00468770 (17 bytes)
namespace lift_00468770 {
// Known callee 0x0046FE70: sub_0046FE70 (Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).)
extern uint8_t ext_0046FE70(void* self);

// @name Unknown::forwardIfFlag10
// @class Unknown
// @summary If the byte at +0x10 is nonzero, tail-forward to the object at +0x14 via ext_0046FE70; otherwise return 0.
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 void* field_0x14
uint8_t fn_00468770(void* self) {
    if (lift_field<uint8_t>(self, 0x10) != 0) {
        void* child = lift_field<void*>(self, 0x14);
        return ext_0046FE70(child);
    }
    return 0;
}
} // namespace lift_00468770

// [0x00464780] sub_00464780 (22 bytes)
namespace lift_00464780 {
// Known callee 0x004658C0: sub_004658C0 (Returns global int32 value from mem_00AD6C80.)
extern int32_t ext_004658C0(void);
// Known callee 0x00467380: sub_00467380 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// Received in ECX by the original tail jump.
extern void ext_00467380(uint32_t ecx);

// @name SetField0xB4ThenForwardResult
// @class Unknown
// @summary Stores 8 into self+0xB4, then tail-forwards the int32 result of ext_004658C0 (as ECX) to ext_00467380.
// @field Unknown +0xB4 int32_t field_0xB4
void fn_00464780(void* self) {
    lift_field<int32_t>(self, 0xB4) = 8;
    const int32_t result = ext_004658C0();
    ext_00467380(static_cast<uint32_t>(result));
}
} // namespace lift_00464780

// [0x004647A0] sub_004647A0 (22 bytes)
namespace lift_004647A0 {
// @name sub_004647A0
// @summary Auto-lifted identical-shape clone of 0x00464780 (SetField0xB4ThenForwardResult).
namespace lift_00464780 {
// Known callee 0x004658C0: sub_004658C0 (Returns global int32 value from mem_00AD6C80.)
extern int32_t ext_004658C0(void);
// Known callee 0x00467380: sub_00467380 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// Received in ECX by the original tail jump.
extern void ext_00467390(uint32_t ecx);

// @name SetField0xB4ThenForwardResult
// @class Unknown
// @summary Stores 8 into self+0xB4, then tail-forwards the int32 result of ext_004658C0 (as ECX) to ext_00467380.
// @field Unknown +0xB4 int32_t field_0xB4
void fn_004647A0(void* self) {
    lift_field<int32_t>(self, 0xB4) = 8;
    const int32_t result = ext_004658C0();
    ext_00467390(static_cast<uint32_t>(result));
}
} // namespace lift_00464780
} // namespace lift_004647A0

// [0x004693D0] sub_004693D0 (25 bytes)
namespace lift_004693D0 {
// @name sub_004693D0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004AEB60(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004693D0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004AEB60(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004693D0

// [0x004693F0] sub_004693F0 (25 bytes)
namespace lift_004693F0 {
// @name sub_004693F0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00666360(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004693F0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00666360(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004693F0

// [0x0046F7D0]
namespace lift_0046F7D0 {
// @name CallInitWithZeroAndReturnArg
// @summary Calls sub_00661620 with the argument as this (ecx) and 0 as its stack argument, then returns the argument.
// @field unknown +0x00 uint32_t vtable


extern uint32_t __thiscall ext_00661620(uint32_t self, uint32_t arg0);

uint32_t __stdcall sub_0046F7D0(uint32_t arg0) {
    ext_00661620(arg0, 0);
    return arg0;
}
} // namespace lift_0046F7D0
