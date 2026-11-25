// Lifted C++ translation unit: lifted/leaf/decompiled_460000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cmath>
#include <cstdint>

#include <cstdint>
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
#include <cstdlib>

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

// [0x0046F8D0] sub_0046F8D0 (27 bytes)
namespace lift_0046F8D0 {
extern BOOL ext_0046F8A0(void* self);

// @name Unknown::IsReadyAndFlagClear
// @class Unknown
// @summary Returns TRUE if ext_0046F8A0 succeeds and the byte at self+0x295 is zero; otherwise FALSE.
// @field Unknown +0x295 uint8_t field_0x295
BOOL fn_0046F8D0(void* self) {
    if (!ext_0046F8A0(self)) {
        return FALSE;
    }
    const auto* bytes = static_cast<const uint8_t*>(self);
    if (bytes[0x295] != 0) {
        return FALSE;
    }
    return TRUE;
}
} // namespace lift_0046F8D0

// [0x0046F8B0] sub_0046F8B0 (27 bytes)
namespace lift_0046F8B0 {
extern BOOL ext_0046F8A0(void* self);

// @name Unknown::IsReadyAndFlagSet
// @class Unknown
// @summary Returns TRUE if ext_0046F8A0 succeeds and the byte at self+0x295 is nonzero; otherwise FALSE.
// @field Unknown +0x295 uint8_t field_0x295
BOOL fn_0046F8B0(void* self) {
    if (!ext_0046F8A0(self)) {
        return FALSE;
    }
    const auto* bytes = static_cast<const uint8_t*>(self);
    if (bytes[0x295] == 0) {
        return FALSE;
    }
    return TRUE;
}
} // namespace lift_0046F8B0

// [0x00465EA0] sub_00465EA0 (33 bytes)
namespace lift_00465EA0 {
// Known callee 0x0044B150: sub_0044B150 (Auto-lifted identical-shape clone of 0x0045E4A0 (CBase::forwardToMfcOrd6090).)
extern void ext_0044B150(void* self);
// Global holding a 32-bit object pointer.
extern uint32_t mem_00ACDB40;

// @name forwardGlobalSubobjectVfunc100
// @class <none>
// @summary If the global object pointer and its +0x20 flag are set, forward the object at +0x100 to ext_0044B150; otherwise return.
// @field <none> +0x20 int32_t field_0x20
// @field <none> +0x100 uint32_t field_0x100
void fn_00465EA0(void* self) {
    (void)self;
    const uint32_t obj = mem_00ACDB40;
    if (obj == 0) {
        return;
    }
    const void* base = reinterpret_cast<const void*>(static_cast<uintptr_t>(obj));
    if (lift_field<int32_t>(base, 0x20) == 0) {
        return;
    }
    const uint32_t sub = lift_field<uint32_t>(base, 0x100);
    if (sub == 0) {
        return;
    }
    ext_0044B150(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
}
} // namespace lift_00465EA0

// [0x0046E780] sub_0046E780 (34 bytes)
namespace lift_0046E780 {
// Signature inferred from disassembly: thiscall, 3 stack args, ret 0xc (callee-cleans 12 bytes).
// Calls vtable slot 4 (vptr + 0x10) on self with (a1, a2, <caller ESI>, 0) and returns a1.
// @name Unknown::forwardVtableSlot4
// @class Unknown
// @summary Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.
// @field Unknown +0x00 void* vptr

typedef uint32_t(__thiscall* VirtualSlot4Fn)(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t fn_0046E780(void* self, uint32_t a1, uint32_t a2, uint32_t /*a3 (unused)*/) {
    void** vtbl = *reinterpret_cast<void***>(self);        // mov eax, [ecx]
    void* slot4 = vtbl[4];                                  // mov eax, [eax+0x10]
    // Original pushes the caller's ESI as the 3rd stack arg (not recoverable here) and
    // overwrites the 4th stack slot with 0.
    const uint32_t callerEsiSlot = 0;
    reinterpret_cast<VirtualSlot4Fn>(slot4)(self, a1, a2, callerEsiSlot, 0u);
    return a1;                                              // mov eax, esi (esi == a1)
}
} // namespace lift_0046E780

// [0x00462E50] sub_00462E50 (37 bytes)
namespace lift_00462E50 {
// Known callee 0x00401940: Dispatch::ForwardToField4 (forwards (this, arg) to the pointer at this+0x04).
extern DWORD ext_00401940(void* self, DWORD arg);

// Import slot 0x00924FF0 -> MSVCP80 std::basic_string<char>::c_str (thiscall; string object in ECX).
extern const char* (*mem_00924FF0)(void* self);

// @name Dispatch::forwardStringIfInnerCountOne
// @class Dispatch
// @summary If this->+0x04 object's +0x04 word equals 1, pass the c_str() of the std::string argument to ForwardToField4 on this->+0x0C; otherwise return (word - 1).
// @field Dispatch +0x04 void* field_0x04
// @field Dispatch +0x0C void* field_0x0C
DWORD fn_00462E50(void* self, void* str) {
    void* inner = lift_field<void*>(self, 0x04);
    DWORD v = lift_field<DWORD>(inner, 0x04) - 1;
    if (v != 0) {
        return v;
    }
    const char* s = mem_00924FF0(str);
    void* target = lift_field<void*>(self, 0x0C);
    return ext_00401940(target, static_cast<DWORD>(reinterpret_cast<uintptr_t>(s)));
}
} // namespace lift_00462E50

// [0x004691D0] sub_004691D0 (37 bytes)
namespace lift_004691D0 {
// Known callee 0x00594000: sub_00594000 (cdecl, no args). The original dereferences eax right after
// the call ([eax+0x26C]), so it is modelled as returning a pointer rather than the int32 noted in the callee table.
extern void* __cdecl ext_00594000();
// Known callee 0x004773B0: Unknown::SetByteAndAssignString. thiscall (this in ecx), two stack args
// (flag pushed last, so it is the first argument; rhs second), callee-cleans.
extern void __thiscall ext_004773B0(void* self, uint8_t flag, const void* rhs);

// @name SetOwnerFlagAndString
// @class Unknown
// @summary Gets the pointer from ext_00594000, takes the object stored at its +0x26C, forwards the two stack arguments (flag, rhs) to ext_004773B0 on that object, then sets the object's byte at +0x04 to 1.
// @field Unknown +0x26C void* field_0x26C
// @field Unknown +0x04 uint8_t field_0x04
extern void __stdcall fn_004691D0(uint32_t flag, const void* rhs) {
    uint8_t* base = static_cast<uint8_t*>(ext_00594000());
    uint32_t objBits = *reinterpret_cast<const uint32_t*>(base + 0x26C);
    uint8_t* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(objBits));

    ext_004773B0(obj, static_cast<uint8_t>(flag), rhs);
    obj[0x04] = 1;
}
} // namespace lift_004691D0

// [0x0046FD70]
namespace lift_0046FD70 {
// @name sub_0046FD70
// @summary Copies an 8-byte value from nested member pointers into the output buffer and returns the output pointer.
// @field Self +0xcc uint32_t field_0xcc
// @field SubA +0x26c uint32_t field_0x26c
// @field SubB +0x1e0 uint32_t field_0x1e0
// @field SubB +0x1e4 uint32_t field_0x1e4


uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_0046FD70(uint32_t self, uint32_t out_ptr) {
    uint32_t a = mem_read32(self + 0xCC);
    uint32_t b = mem_read32(a + 0x26C);
    uint32_t lo = mem_read32(b + 0x1E0);
    uint32_t hi = mem_read32(b + 0x1E4);
    mem_write32(out_ptr, lo);
    mem_write32(out_ptr + 4, hi);
    return out_ptr;
}
} // namespace lift_0046FD70

// [0x00460990]
namespace lift_00460990 {
extern int32_t __stdcall ext_006A5E60(uint32_t text, uint32_t type, uint32_t help_id);
extern int32_t __cdecl ext_00665870(void);
extern void __thiscall ext_00666120(int32_t self);

extern uint8_t mem_00938458[];

// @name confirmAndTriggerAction
// @summary Prompts the user with a Yes/No message box and, if Yes (6) is chosen, invokes ext_00666120 on the object from ext_00665870.
extern void __cdecl fn_00460990(void) {
    if (ext_006A5E60(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00938458)), 0x104u, 0u) == 6) {
        int32_t obj = ext_00665870();
        ext_00666120(obj);
    }
}
} // namespace lift_00460990

// [0x0046FBE0]
namespace lift_0046FBE0 {
// @name sub_0046FBE0
// @summary Rounds a float argument by adding a constant double, stores the integer result at +0x288, and returns it
// @field Unknown +0x288 int32_t field_0x288


extern const double mem_0092BD70;

int32_t __thiscall sub_0046FBE0(void* self, float value) {
    double sum = static_cast<double>(value) + mem_0092BD70;
    int32_t result = static_cast<int32_t>(std::llrint(sum));
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x288) = result;
    return result;
}
} // namespace lift_0046FBE0

// [0x0046C2F0]
namespace lift_0046C2F0 {
// @name set_field_0x1c_if_le_limit
// @summary Sets this+0x1c to val if val is less than or equal to the float limit at *( *(this+0x4c) + 0xf8 ) + 0x138.
// @field unknown +0x1c float field_0x1c
// @field unknown +0x4c void* field_0x4c


extern uint32_t mem_read32(uint32_t addr);
extern float mem_read_f32(uint32_t addr);
extern void mem_write_f32(uint32_t addr, float val);

void __thiscall sub_0046C2F0(uint32_t ecx_this, float val) {
    uint32_t eax = mem_read32(ecx_this + 0x4c);
    uint32_t edx = mem_read32(eax + 0xf8);
    float limit = mem_read_f32(edx + 0x138);
    if (!(limit < val)) {
        mem_write_f32(ecx_this + 0x1c, val);
    }
}
} // namespace lift_0046C2F0

// [0x00462D10]
namespace lift_00462D10 {
// @name getByteByMode
// @summary Dispatches on mode (1 or 2) to read a byte from this+0x0C+0x18 or via getInnerByte1C on this+0x08.
// @field this +0x08 uint32_t field_0x08
// @field this +0x0C uint32_t field_0x0C


extern uint8_t __thiscall ext_00462A60(uint32_t this_ptr);

uint8_t __thiscall sub_00462D10(uint32_t this_ptr, uint32_t mode) {
    if (mode == 1) {
        uint32_t ptr = *reinterpret_cast<const uint32_t*>(this_ptr + 0x0C);
        return *reinterpret_cast<const uint8_t*>(ptr + 0x18);
    }
    if (mode == 2) {
        uint32_t inner = *reinterpret_cast<const uint32_t*>(this_ptr + 0x08);
        if (inner == 0) {
            return 0;
        }
        return ext_00462A60(inner);
    }
    return 0;
}
} // namespace lift_00462D10

// [0x00468A00] sub_00468A00 (46 bytes)
namespace lift_00468A00 {
// Known callee 0x0046FD70: sub_0046FD70 (Copies an 8-byte value from nested member pointers into the output buffer and returns the output pointer.)
extern uint32_t ext_0046FD70(uint32_t self, uint32_t out_ptr);

// @name getNestedPairOrZero
// @summary If the flag byte at +0x10 is clear, zero the 8-byte output pair; otherwise forward to the child object at +0x14 and return the output pointer.
// @field <ClassName> +0x10 uint8_t field_0x10
// @field <ClassName> +0x14 void* field_0x14
void fn_00468A00(void* self, void* out_ptr) {
    auto* base = static_cast<uint8_t*>(self);
    auto* out = static_cast<uint32_t*>(out_ptr);

    if (base[0x10] == 0) {
        out[0] = 0;
        out[1] = 0;
        return;
    }

    void* child = *reinterpret_cast<void**>(base + 0x14);
    ext_0046FD70(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(child)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out_ptr)));
}
} // namespace lift_00468A00

// [0x0046C460]
namespace lift_0046C460 {
// @name makeBoolString
// @summary Constructs a std::string from one of two static C-strings based on a boolean flag.


extern uint32_t mem_00924FE4;

void* sub_0046C460(void* out_str, uint8_t flag) {
    const char* str = reinterpret_cast<const char*>(flag != 0 ? 0x0092F10Cu : 0x0093A808u);
    reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4)(out_str, str);
    return out_str;
}
} // namespace lift_0046C460

// [0x0046C500] sub_0046C500 (33 bytes)
namespace lift_0046C500 {
// @name sub_0046C500
// @summary Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).
namespace lift_00497860 {
extern void ext_00404F00(void* self, uint8_t flag);

// @name forwardMakeBoolString
// @summary Forwards out_str and flag to makeBoolString (0x0046C460) and returns out_str.
void* fn_0046C500(void* out_str, uint8_t flag) {
    ext_00404F00(out_str, flag);
    return out_str;
}
} // namespace lift_00497860
} // namespace lift_0046C500

// [0x004663A0] sub_004663A0 (47 bytes)
namespace lift_004663A0 {
// Known callee 0x00465B40: sub_00465B40 (auto-lifted clone of 0x00430360).
// Takes `self` in ECX and returns an object pointer in EAX.
extern void* ext_00465B40(void* self);
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk to MFC80!ord_1123).
// Caller pushes three dwords and does not clean the stack, so the callee pops them.
extern void ext_006A5E60(uint32_t a, uint32_t b, uint32_t str);

// @name sub_004663A0
// @summary Returns true if self+0x60 is nonzero; otherwise queries a helper object's vfunc at +0x84 and, if it returns true, invokes ext_006A5E60 and returns false.
// @field UnknownObject +0x60 uint32_t field_0x60
bool fn_004663A0(void* self) {
    auto* selfBytes = static_cast<uint8_t*>(self);
    const uint32_t flag = *reinterpret_cast<uint32_t*>(selfBytes + 0x60);
    if (flag != 0) {
        return true;
    }

    auto* obj = static_cast<uint8_t*>(ext_00465B40(self));
    // Virtual slot at byte offset 0x84 of the vtable (32-bit layout).
    uint8_t* vtable = *reinterpret_cast<uint8_t**>(obj);
    using VFn = uint8_t (*)(void*);
    VFn vfunc = *reinterpret_cast<VFn*>(vtable + 0x84);
    const uint8_t result = vfunc(obj);
    if (result == 0) {
        return true;
    }

    ext_006A5E60(0u, 0u, 0x00939C7Cu);
    return false;
}
} // namespace lift_004663A0

// [0x00469570]
namespace lift_00469570 {
// @name getVectorElementAt
// @summary Returns the 32-bit element at the given index from a vector, calling _invalid_parameter_noinfo if out of bounds.
// @field Class +0x54 uint32_t* field_0x54
// @field Class +0x58 uint32_t* field_0x58

extern uint32_t mem_00925134;

uint32_t __thiscall sub_00469570(uint8_t* self, uint32_t index) {
    uint32_t* begin = *reinterpret_cast<uint32_t**>(self + 0x54);
    if (begin != nullptr) {
        uint32_t* end = *reinterpret_cast<uint32_t**>(self + 0x58);
        int32_t count = static_cast<int32_t>(reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) >> 2;
        if (index < static_cast<uint32_t>(count)) {
            return begin[index];
        }
    }
    reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134))();
    uint32_t* begin_after = *reinterpret_cast<uint32_t**>(self + 0x54);
    return begin_after[index];
}
} // namespace lift_00469570

// [0x0046A510]
namespace lift_0046A510 {
// @name std::_Tree::_Erase
// @summary Recursively frees all non-nil nodes in a red-black tree subtree
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x11 uint8_t is_nil


extern uint8_t mem_u8(uint32_t addr);
extern uint32_t mem_u32(uint32_t addr);
extern void ext_006A5C5C(uint32_t ptr);

void __thiscall fn_0046A510(uint32_t self, uint32_t node) {
    while (mem_u8(node + 0x11) == 0) {
        fn_0046A510(self, mem_u32(node + 0x08));
        uint32_t left = mem_u32(node + 0x00);
        ext_006A5C5C(node);
        node = left;
    }
}
} // namespace lift_0046A510

// [0x00466360] sub_00466360 (55 bytes)
namespace lift_00466360 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);

// @name UnknownClass::ResetSubobjectAndRelease
// @class UnknownClass
// @summary Clears a counter in a sub-object reached via global context +0x26C, then invokes virtual slot 1 (deleting-style, arg 1) on the owned object at +0xD8 and nulls it.
// @field UnknownClass +0xD8 void* ownedObject
void fn_00466360(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(ext_00594000());
    auto* sub = *reinterpret_cast<uint8_t**>(base + 0x26C);
    *reinterpret_cast<int32_t*>(sub + 0x558) = 0;

    auto* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0xD8);
    if (obj != nullptr) {
        void** vtable = *reinterpret_cast<void***>(obj);
        auto slot = reinterpret_cast<void (*)(void*, int32_t)>(vtable[1]);
        slot(obj, 1);
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0xD8) = nullptr;
    }
}
} // namespace lift_00466360

// [0x00465960] sub_00465960 (56 bytes)
namespace lift_00465960 {
// Empty-string literal used by the original (0x00928B5D); contents not recovered.
extern const char mem_00928B5D[];

// @name Unknown::ResetStringFields0x84
// @class Unknown
// @summary Assigns the same C string constant to three std::string members of the object.
// @field Unknown +0x84 std::string field_0x84
// @field Unknown +0xA0 std::string field_0xA0
// @field Unknown +0xBC std::string field_0xBC
void fn_00465960(void* self) {
    lift_field<std::string>(self, 0x84) = mem_00928B5D;
    lift_field<std::string>(self, 0xA0) = mem_00928B5D;
    lift_field<std::string>(self, 0xBC) = mem_00928B5D;
}
} // namespace lift_00465960

// [0x0046F830] sub_0046F830 (40 bytes)
namespace lift_0046F830 {
// Known callee 0x0067AEB0: Unknown::SetEventAtIndex
// Signals the event handle stored at the given index of the vector referenced by this+0x0C; invalid index returns FALSE.
// Original is thiscall: self in ecx (this+0x160), index pushed on the stack.
extern BOOL ext_0067AEB0(void* self, INT index);

// Known callee 0x0067B050: SubObject::ClearFlagThenVirtualSlot2
// Clears the byte flag at +0x04, calls ext_0067AE50 on self, then dispatches virtual slot 2 on self's vtable (tail jump in original).
// Original is thiscall: self in ecx (this+0x128).
extern void ext_0067B050(void* self);

// @name Unknown::ClearFlagSignalEventAndDispatch
// @class Unknown
// @summary Clears the byte at +0x12C, signals event index +0x148 on the subobject at +0x160, then tail-dispatches the subobject at +0x128.
// @field Unknown +0x12C uint8_t field_0x12C
// @field Unknown +0x148 int32_t field_0x148
void fn_0046F830(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // Index read from this+0x148 (pushed as the argument to ext_0067AEB0).
    INT index = lift_field<INT>(base, 0x148);

    // Clear the flag byte at this+0x12C.
    lift_field<uint8_t>(base, 0x12C) = 0;

    // Signal the event at `index` on the subobject at this+0x160 (result ignored, as in the original).
    (void)ext_0067AEB0(base + 0x160, index);

    // Tail-dispatch on the subobject at this+0x128 (original was `jmp ext_0067B050`).
    ext_0067B050(base + 0x128);
}
} // namespace lift_0046F830

// [0x00469530] sub_00469530 (56 bytes)
namespace lift_00469530 {
// @name Unknown::DispatchToIndexedChild
// @class Unknown
// @summary Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.
// @field Unknown +0x54 void** field_0x54
// @field Unknown +0x58 void** field_0x58
INT fn_00469530(void* self, INT index, INT arg) {
    void** begin = lift_field<void**>(self, 0x54);
    void** end = lift_field<void**>(self, 0x58);

    // Original: null-begin or unsigned index >= element count calls _invalid_parameter_noinfo.
    // That CRT path does not return in practice, so it is modeled as a trap.
    if (begin == nullptr) {
        std::abort();
    }
    const auto count = static_cast<INT>(end - begin);
    if (static_cast<UINT>(index) >= static_cast<UINT>(count)) {
        std::abort();
    }

    void* element = begin[index];
    void** vtable = *reinterpret_cast<void***>(element);
    auto slot1 = reinterpret_cast<INT (*)(void*, INT)>(vtable[1]);
    return slot1(element, arg);
}
} // namespace lift_00469530

// [0x0046FC10] sub_0046FC10 (62 bytes)
namespace lift_0046FC10 {
// Known callee 0x00642630: SubObjectHolder::forwardSetField8Float (Forwards a float argument to the sub-object held at this+0x0C by calling setField8Float on it; the float is passed through unchanged.)
extern void ext_00642630(void* self, float value);

// @name setReciprocalAndStoreValue
// @class unknown
// @summary Forwards 1.0f/value to the sub-object at this+0xD4 via ext_00642630, then stores value as a float at this->+0xCC->+0x26C->+0x1D0.
// @field unknown +0xCC void* field_0xCC
// @field unknown +0xD4 void field_0xD4
// @field unknown +0x26C void* field_0x26C
// @field unknown +0x1D0 float field_0x1D0
void fn_0046FC10(void* self, float value) {
    float reciprocal = 1.0f / value;
    ext_00642630(static_cast<unsigned char*>(self) + 0xD4, reciprocal);

    void* obj = lift_field<void*>(self, 0xCC);
    void* inner = lift_field<void*>(obj, 0x26C);
    lift_field<float>(inner, 0x1D0) = value;
}
} // namespace lift_0046FC10

// [0x004629E0] sub_004629E0 (63 bytes)
namespace lift_004629E0 {
// Known callee 0x004474F0: invokeCallbackIfSet (Invokes a member callback at +0x04 if non-null, passing one argument)
extern uint32_t ext_004474F0(void* ecx, const char* arg1);
// Import slot for MSVCP80 std::string::c_str (IAT value)
extern int mem_00924FF0;
// Import slot for USER32!MessageBoxA (IAT value)
extern int mem_009255E0;

// @name Unknown::DispatchStringCallback
// @class Unknown
// @summary Mode 0 is a no-op; mode 2 dispatches directly; any other mode asks Yes/No first, then dispatches on Yes.
// @field Unknown +0x00 void* field_0x00
void fn_004629E0(void* self, void* str, uint32_t mode) {
    using MessageBoxAFn = int(__stdcall*)(HWND, LPCSTR, LPCSTR, UINT);
    using CStrFn        = const char*(__thiscall*)(void*);

    if (mode == 0) {
        return;
    }

    if (mode != 2) {
        // Yes/No prompt (MB_YESNO = 4); caption/text are rdata strings at 0x00938D28 / 0x00938DD4.
        auto messageBoxA = reinterpret_cast<MessageBoxAFn>(static_cast<uintptr_t>(mem_009255E0));
        int  result = messageBoxA(nullptr,
                                  reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(0x00938D28u)),
                                  reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(0x00938DD4u)),
                                  4u);
        if (result != 6 /* IDYES */) {
            return;
        }
    }

    auto cStr = reinterpret_cast<CStrFn>(static_cast<uintptr_t>(mem_00924FF0));
    const char* text = cStr(str);

    void* callbackOwner = *static_cast<void**>(self);
    ext_004474F0(callbackOwner, text);
}
} // namespace lift_004629E0

// [0x0046F930]
namespace lift_0046F930 {
// @name Unknown::RequestStop
// @class Unknown
// @summary Marks stop-requested flags and signals the event at this+0x160 using index this+0x148 if active.
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x148 int32_t field_0x148
// @field Unknown +0x150 uint8_t field_0x150
// @field Unknown +0x151 uint8_t field_0x151
// @field Unknown +0x152 uint8_t field_0x152
// @field Unknown +0x153 uint8_t field_0x153
// @field Unknown +0x160 void* field_0x160

extern uint8_t ext_0046F890(void* self);
extern BOOL ext_0067AEB0(void* self, INT index);

void fn_0046F930(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    if (ext_0046F890(self) != 0) {
        return;
    }
    if (base[0x153] != 0) {
        return;
    }

    base[0x150] = 1;
    if (base[0x152] != 0) {
        base[0x151] = 1;
    }

    if (*reinterpret_cast<uint32_t*>(base + 0x28) != 0) {
        INT index = *reinterpret_cast<INT*>(base + 0x148);
        ext_0067AEB0(base + 0x160, index);
    }
}
} // namespace lift_0046F930

// [0x00468630] sub_00468630 (37 bytes)
namespace lift_00468630 {
// Known callee 0x0046F930: Unknown::RequestStop (Marks stop-requested flags and signals the event at this+0x160 using index this+0x148 if active.)
extern void ext_0046F930(void* self);
extern int mem_00AD89B4;

// @name Unknown::DecRefAndRequestStop
// @class Unknown
// @summary Decrements a global counter; when it hits zero, clears a flag on the held object and, if a second flag is set, forwards to RequestStop.
// @field Unknown +0x00 uint32_t heldObject
// @field Unknown +0x04 uint8_t requestStopEnabled
void fn_00468630(void* self) {
    // if (self->heldObject == 0) return;
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        return;
    }

    // if (--mem_00AD89B4 != 0) return;
    if (--mem_00AD89B4 != 0) {
        return;
    }

    // obj = self->heldObject; obj->byte_0x153 = 0;
    const uint32_t obj = lift_field<uint32_t>(self, 0x00);
    void* objPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    lift_field<uint8_t>(objPtr, 0x153) = 0;

    // if (self->requestStopEnabled == 0) return;
    if (lift_field<uint8_t>(self, 0x04) == 0) {
        return;
    }

    // return RequestStop(self->heldObject);  (tail call)
    ext_0046F930(objPtr);
}
} // namespace lift_00468630

// [0x0046C490] sub_0046C490 (69 bytes)
namespace lift_0046C490 {
// Tail-called with the biased value (original passes it on the x87 stack).
extern double ext_006A6DE0(double value);

// @name roundBiasedFloatFromString
// @summary Parses a std::string as a float (atof), then adds or subtracts 0.5 by sign (round half away from zero) and tail-calls sub_006A6DE0 with the result.
// @field none (only the std::string object is passed in; no field offsets accessed)
double fn_0046C490(const std::string* text) {
    // Original: atof(text->c_str()) stored as float32.
    const float parsed = static_cast<float>(std::atof(text->c_str()));

    // Original: fcom against 0.0; C0 set for "less than" or unordered -> subtract 0.5, else add 0.5.
    const double biased = (parsed < 0.0f || std::isnan(parsed))
                              ? static_cast<double>(parsed) - 0.5
                              : static_cast<double>(parsed) + 0.5;

    return ext_006A6DE0(biased);
}
} // namespace lift_0046C490

// [0x004689B0] sub_004689B0 (76 bytes)
namespace lift_004689B0 {
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the critical section referenced at offset 0x00 of the object.)
extern void ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void ext_0065C650(void* self);

// @name Unknown::SnapshotLockedPair_004689B0
// @class Unknown
// @summary Copies two dwords from the inner state under its lock into out, or zeroes out when the flag at +0x10 is clear.
// @field Unknown +0x10 uint8_t flag
// @field Unknown +0x14 void* inner
// @field UnknownInner +0x18 uint32_t value0
// @field UnknownInner +0x1c uint32_t value1
// @field UnknownInner +0x20 CriticalSectionLock lock
void* fn_004689B0(void* self, void* out) {
    if (lift_field<uint8_t>(self, 0x10) == 0) {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<uint32_t>(out, 0x4) = 0;
        return out;
    }

    void* inner = lift_field<void*>(self, 0x14);
    void* lock = static_cast<uint8_t*>(inner) + 0x20;

    ext_0065C640(lock);
    uint32_t value0 = lift_field<uint32_t>(inner, 0x18);
    uint32_t value1 = lift_field<uint32_t>(inner, 0x1c);
    lift_field<uint32_t>(out, 0x0) = value0;
    lift_field<uint32_t>(out, 0x4) = value1;
    ext_0065C650(lock);

    return out;
}
} // namespace lift_004689B0

// [0x00460540] sub_00460540 (76 bytes)
namespace lift_00460540 {
// Known callee 0x006A5E5A: thunk_MFC80_ord_4125 (IAT jump thunk forwarding to MFC80!ord_4125.)
extern void ext_006A5E5A();
extern int mem_00925690;

// @name Unknown::PlaceWindowBottomAtPoint_00460540
// @class Unknown
// @summary Reads the window rect of the handle at +0x20 and moves the window so its bottom-left corner sits at the given point (x = pt.x, y = pt.y - height), keeping its size.
// @field Unknown +0x20 HWND hwnd
void fn_00460540(void* self, const POINT* pt) {
    HWND hwnd = lift_field<HWND>(self, 0x20);

    RECT rc{};
    using GetWindowRectFn = int(*)(HWND, RECT*);
    reinterpret_cast<GetWindowRectFn>(static_cast<uintptr_t>(mem_00925690))(hwnd, &rc);

    const LONG width = rc.right - rc.left;
    const LONG height = rc.bottom - rc.top;
    const LONG x = pt->x;
    const LONG y = pt->y - height;

    using MoveWindowFn = void(*)(void*, int, int, int, int, BOOL);
    reinterpret_cast<MoveWindowFn>(&ext_006A5E5A)(self, x, y, width, height, TRUE);
}
} // namespace lift_00460540

// [0x0046FAD0]
namespace lift_0046FAD0 {
// Import slot for MSVCP80 basic_string<char> destructor (IAT entry at 0x00924FF4).
extern uint32_t mem_00924FF4;
// MSVCP80 std::basic_string<char>::~basic_string(), called with this pointer in ECX.
extern void __thiscall ext_std_string_dtor(void* self);

struct Unknown;

// @name Unknown::DestroyStringPair_0046FAD0
// @class Unknown
// @summary Destroys two std::string members, the one at +0x1C first and then the one at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1c
void __thiscall DestroyStringPair_0046FAD0(Unknown* self) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    ext_std_string_dtor(base + 0x1C);
    ext_std_string_dtor(base + 0x00);
}
} // namespace lift_0046FAD0

// [0x0046FB20] sub_0046FB20 (82 bytes)
namespace lift_0046FB20 {
// Import slot for MSVCP80 std::basic_string<char> copy constructor (const string&).
extern int mem_00924FE0;

// Portable stand-in for the MSVCP80 std::string copy constructor. Layout of
// std::string under MSVC 8.0 is 0x1C bytes; the copy is performed by the import.
extern void ext_msvcp80_string_copy_ctor(void* self, const void* src);

// @name ConstructStringPair
// @class Unknown
// @summary Copy-constructs two std::string members from the given string references (+0x00 and +0x1C).
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1C
void fn_0046FB20(void* self, const void* src_first, const void* src_second) {
    ext_msvcp80_string_copy_ctor(self, src_first);
    ext_msvcp80_string_copy_ctor(static_cast<unsigned char*>(self) + 0x1C, src_second);
}
} // namespace lift_0046FB20

// [0x00462980] sub_00462980 (83 bytes)
namespace lift_00462980 {
// Known callee 0x004474E0: invokeCallbackOrReturn (Invokes a non-null callback pointer stored at offset 0 of this, or returns.)
extern void __thiscall ext_004474E0(void* self, const char* arg1);
// Known callee 0x00447500: invokeCallbackOrNull (Tail-calls the callback stored at this+0x8 with arg0 if non-null, otherwise returns 0.)
extern uint32_t __thiscall ext_00447500(void* self, const char* arg0);

// Imports and rdata referenced by the original code.
// IAT 0x009255E0: USER32!MessageBoxA
extern int __stdcall lift_MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
// IAT 0x00924FF0: MSVCP80 std::basic_string<char>::c_str
extern const char* __thiscall lift_string_c_str(const void* str);
// .rdata 0x00938D28: caption string
extern const char mem_00938D28[];
// .rdata 0x00938DA0: prompt text string
extern const char mem_00938DA0[];

static constexpr UINT kMbYesNo = 0x00000004u;
static constexpr int kIdYes = 6;
static constexpr uint32_t kModeNone = 0u;
static constexpr uint32_t kModeDirect = 2u;

// @name Unknown::confirmAndDispatchString
// @class Unknown
// @summary When mode is nonzero, asks Yes/No unless mode==2; on accept, passes the string's c_str to ext_004474E0 and ext_00447500 using the object at this+0x00.
// @field Unknown +0x00 void* field_0x00
void __thiscall fn_00462980(void* self, const void* str, uint32_t mode) {
    if (mode == kModeNone) {
        return;
    }

    if (mode != kModeDirect) {
        int answer = lift_MessageBoxA(nullptr, mem_00938DA0, mem_00938D28, kMbYesNo);
        if (answer != kIdYes) {
            return;
        }
    }

    void* target = lift_field<void*>(self, 0);
    ext_004474E0(target, lift_string_c_str(str));

    target = lift_field<void*>(self, 0);
    (void)ext_00447500(target, lift_string_c_str(str));
}
} // namespace lift_00462980

// [0x004646B0] sub_004646B0 (84 bytes)
namespace lift_004646B0 {
// Import thunk pointer for USER32!GetKeyState (stdcall, takes int vKey, returns SHORT).
extern uint32_t mem_009255F4;
// Import thunk pointer for USER32!GetAsyncKeyState (stdcall, takes int vKey, returns SHORT).
extern uint32_t mem_009256E4;

// @name isAltWithMouseButtonDown_004646B0
// @summary Returns 1 when Alt (VK_MENU) is held per GetAsyncKeyState and any of the left, middle, or right mouse buttons is down per GetKeyState; else 0.
int32_t fn_004646B0(void) {
    using GetKeyStateFn = int16_t(__stdcall*)(int32_t vKey);
    using GetAsyncKeyStateFn = int16_t(__stdcall*)(int32_t vKey);

    auto getKeyState = reinterpret_cast<GetKeyStateFn>(mem_009255F4);
    auto getAsyncKeyState = reinterpret_cast<GetAsyncKeyStateFn>(mem_009256E4);

    // Sign bit of each SHORT result indicates the key is currently down.
    const bool leftDown = getKeyState(0x01) < 0;   // VK_LBUTTON
    const bool middleDown = getKeyState(0x04) < 0; // VK_MBUTTON
    const bool rightDown = getKeyState(0x02) < 0;  // VK_RBUTTON

    const bool altDown = getAsyncKeyState(0x12) < 0; // VK_MENU

    if (altDown && (leftDown || middleDown || rightDown)) {
        return 1;
    }
    return 0;
}
} // namespace lift_004646B0

// [0x0046F980] sub_0046F980 (85 bytes)
namespace lift_0046F980 {
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the critical section referenced at offset 0x00 of the object.)
extern void ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void ext_0065C650(void* self);
// Known callee 0x0067ADE0: SubObject::IsCurrentThreadOwner (Returns 1 if the calling thread matches the owner thread id stored in the object at this+0x0C, else 0.)
extern uint8_t ext_0067ADE0(void* self);
// Known callee 0x0067AE70: HandleTable::waitOnHandle (Waits infinitely on the handle at the given index of the owner's handle array; negative indices return without waiting.)
extern void ext_0067AE70(void* self, int32_t index);

// @name fn_0046F980 (ReleaseLockAndWaitIfNotOwner)
// @class (none)
// @summary If the flag at +0x152 is set, clears the flag at +0x150 under the critical section at +0x154; then if the current thread owns the object at +0x128, clears +0x152, otherwise waits on the handle at +0x160 indexed by the int at +0x14C.
// @field <unknown> +0x14C int32_t field_0x14C
// @field <unknown> +0x150 uint8_t field_0x150
// @field <unknown> +0x152 uint8_t field_0x152
// @field <unknown> +0x154 CriticalSectionLock field_0x154
// @field <unknown> +0x160 HandleTable field_0x160
void fn_0046F980(void* self) {
    if (lift_field<uint8_t>(self, 0x152) == 0) {
        return;
    }

    void* cs = reinterpret_cast<uint8_t*>(self) + 0x154;
    ext_0065C640(cs);
    lift_field<uint8_t>(self, 0x150) = 0;
    ext_0065C650(cs);

    void* owner = reinterpret_cast<uint8_t*>(self) + 0x128;
    if (ext_0067ADE0(owner) != 0) {
        lift_field<uint8_t>(self, 0x152) = 0;
        return;
    }

    int32_t index = lift_field<int32_t>(self, 0x14C);
    void* handles = reinterpret_cast<uint8_t*>(self) + 0x160;
    ext_0067AE70(handles, index);
}
} // namespace lift_0046F980

// [0x004663D0] sub_004663D0 (89 bytes)
namespace lift_004663D0 {
// @name sub_004663D0
// @summary Auto-lifted identical-shape clone of 0x006B28A0 (GWCPropertyEditFeel::vfunc_6).
namespace lift_006B28A0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (allocator; takes byte size, returns block or null).
extern void* ext_006A5C62(size_t size);
// Known callee 0x006B0CA0: sub_006B0CA0 (thiscall initializer for the new object; its eax result is returned).
extern void* ext_00465B60(void* self);

// @name GWCPropertyEditFeel::vfunc_6
// @class GWCPropertyEditFeel
// @summary Allocates a 0x6C-byte object and initializes it; returns the result, or null if allocation fails.
void* fn_004663D0(void* self) {
    (void)self;
    void* obj = ext_006A5C62(0xDC);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_00465B60(obj);
}
} // namespace lift_006B28A0
} // namespace lift_004663D0

// [0x004616F0]
namespace lift_004616F0 {
// MSVCP80!std::basic_string<char>::basic_string(const basic_string&)
extern void(__thiscall* mem_00924FE0)(void* self, const void* other);

// @name NamedStringPair::NamedStringPair
// @class NamedStringPair
// @summary Constructs an object with two std::string fields and a 32-bit value
// @field NamedStringPair +0x00 std::string field_0x00
// @field NamedStringPair +0x1c std::string field_0x1c
// @field NamedStringPair +0x38 uint32_t field_0x38
void* __thiscall sub_004616F0(void* self, const void* arg1, const void* arg2, uint32_t arg3) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    mem_00924FE0(obj, arg1);
    mem_00924FE0(obj + 0x1c, arg2);
    *reinterpret_cast<uint32_t*>(obj + 0x38) = arg3;
    return self;
}
} // namespace lift_004616F0

// [0x0046C120] sub_0046C120 (92 bytes)
namespace lift_0046C120 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);
// Known callee 0x006A5E66 is not reached from this function's code path.
// Indirect-call target stored at mem_00924FF4 (std::string destructor, MSVCP80).
extern int mem_00924FF4;

// @name initStringMemberObject
// @summary Sets two vtable-style pointers on the object, destroys the std::string member at +0x28 via an indirect call, then forwards the +0x4 subobject to ext_0065F440.
// @field Self +0x00 uint32_t field_0x00
// @field Self +0x04 uint32_t field_0x04
// @field Self +0x28 std::string field_0x28
void fn_0046C120(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // Store vtable-style pointers (0x93A7A4 at +0x0, 0x93A74C at +0x4).
    const uint32_t vtbl0 = 0x0093A7A4u;
    const uint32_t vtbl1 = 0x0093A74Cu;
    std::memcpy(base + 0x00, &vtbl0, sizeof(vtbl0));
    std::memcpy(base + 0x04, &vtbl1, sizeof(vtbl1));

    // Destroy the std::string member at +0x28 via the indirect function pointer.
    using StrDtor = void (*)(void*);
    auto dtor = reinterpret_cast<StrDtor>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(base + 0x28);

    // Forward the +0x4 subobject to the helper.
    ext_0065F440(base + 0x04);
}
} // namespace lift_0046C120

// [0x0046C440]
namespace lift_0046C440 {
extern void* __thiscall ext_00401C60(void* self, const void* other);
extern uint32_t mem_0093A7DC;

// @name std::out_of_range::out_of_range
// @class std::out_of_range
// @summary Copy constructor for a std::logic_error-derived exception class.
// @field std::out_of_range +0x00 void* vftable
void* __thiscall sub_0046C440(void* self, const void* other) {
    ext_00401C60(self, other);
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0093A7DC));
    return self;
}
} // namespace lift_0046C440

// [0x0046F3A0]
namespace lift_0046F3A0 {
// @name lazyInitStaticObject_0046F3A0
// @summary Function-local static guard: constructs the global object at mem_00AD834C once (ctor ext_0067A670 with arg 0), then sets its first DWORD to 0x0093A9DC and returns its address.
// @field <unknown> +0x00 DWORD field_0x00

extern DWORD ext_0067A670(void* self, DWORD value);  // thiscall: ECX = self, one stack arg
extern DWORD mem_00AD8350;                           // init-guard flags (bit 0 = initialized/started)
extern BYTE mem_00AD834C[];                          // global object storage

void* lazyInitStaticObject_0046F3A0() {
    if ((mem_00AD8350 & 1u) == 0) {
        mem_00AD8350 |= 1u;
        ext_0067A670(mem_00AD834C, 0);
        lift_field<DWORD>(mem_00AD834C, 0) = 0x0093A9DCu;
    }
    return mem_00AD834C;
}
} // namespace lift_0046F3A0

// [0x0046F460] sub_0046F460 (87 bytes)
namespace lift_0046F460 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD8360;
extern DWORD mem_00AD835C;

// @name getStaticDwordSingleton_0046F460
// @summary Lazily initializes the function-local static at mem_00AD835C (guard bit 0 in mem_00AD8360) and returns its address.
void* fn_0046F460() {
    if ((mem_00AD8360 & 1u) == 0) {
        mem_00AD8360 |= 1u;
        ext_0067A670(&mem_00AD835C, 0u);
        mem_00AD835C = 0x0093AD3Cu;
    }
    return reinterpret_cast<void*>(&mem_00AD835C);
}
} // namespace lift_0046F460

// [0x0046F580] sub_0046F580 (87 bytes)
namespace lift_0046F580 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern BYTE mem_00AD8378;
extern DWORD mem_00AD8374;

// @name ConstructOnce_0046F580
// @summary One-time guarded initializer for the global object at 0x00AD8374: runs the base init on first call, then sets its vtable-like first DWORD to 0x0093B24C and returns its address.
// @field Unknown +0x00 DWORD field_0x00
DWORD fn_0046F580() {
    // Original SEH frame setup/teardown (fs:[0] push/restore) is compiler/runtime
    // scaffolding with no portable equivalent and is intentionally omitted.
    if ((mem_00AD8378 & 1) == 0) {
        mem_00AD8378 |= 1;
        // thiscall: ECX = &mem_00AD8374, single argument 0
        ext_0067A670(reinterpret_cast<void*>(&mem_00AD8374), 0);
        mem_00AD8374 = 0x0093B24C;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AD8374));
}
} // namespace lift_0046F580

// [0x0046F340] sub_0046F340 (87 bytes)
namespace lift_0046F340 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD8348;
extern DWORD mem_00AD8344;

// @name initOnceGlobalObject_0046F340
// @summary One-time lazy initializer: on first call, runs ext_0067A670 on the global at 0xAD8344, stores 0x93A82C there, and returns that global's address.
// @field (none: no class; accessed globals are mem_00AD8348 (flag byte, bit 0) and mem_00AD8344 (DWORD object slot))
DWORD fn_0046F340() {
    if ((mem_00AD8348 & 1u) == 0u) {
        mem_00AD8348 |= 1u;
        ext_0067A670(&mem_00AD8344, 0u);
        mem_00AD8344 = 0x0093A82Cu;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AD8344));
}
} // namespace lift_0046F340

// [0x0046F400] sub_0046F400 (87 bytes)
namespace lift_0046F400 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD8358;
extern DWORD mem_00AD8354;

// @name ensureGlobalObjectInit_0046F400
// @summary One-time initializer for the global object at 0xAD8354: guarded by bit 0 of 0xAD8358, calls ext_0067A670 once, then stores vtable 0x93AB8C; returns the object address.
// Note: the original installs/restores an SEH registration frame via fs:[0]. That is not portable C++ and is omitted; the saved-frame argument is passed as 0.
void* fn_0046F400() {
    if ((mem_00AD8358 & 1u) == 0) {
        mem_00AD8358 |= 1u;
        ext_0067A670(&mem_00AD8354, 0);
        mem_00AD8354 = 0x93ab8c;
    }
    return &mem_00AD8354;
}
} // namespace lift_0046F400

// [0x0046F4C0] sub_0046F4C0 (87 bytes)
namespace lift_0046F4C0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD8368;
extern DWORD mem_00AD8364;

// @name ensureStaticObjectInitialized_0046F4C0
// @summary One-time guarded initializer for the static object at mem_00AD8364; runs the constructor helper once, then installs vtable 0x0093AEEC and returns the object's address.
// The original SEH frame (fs:[0] push/pop) is exception-state bookkeeping with no portable equivalent; it is omitted.
void* fn_0046F4C0() {
    // Guard bit 0 of the init-flag dword at mem_00AD8368.
    if ((mem_00AD8368 & 1u) == 0) {
        mem_00AD8368 |= 1u;
        // Constructor helper runs with ECX = &mem_00AD8364 (thiscall).
        ext_0067A670(&mem_00AD8364, 0u);
        mem_00AD8364 = 0x0093AEECu; // installed vtable pointer
    }
    return reinterpret_cast<void*>(&mem_00AD8364);
}
} // namespace lift_0046F4C0

// [0x0046F660]
namespace lift_0046F660 {
// @name fillStaticPair_0046F660
// @summary Stores a dword value and the address of the guarded static object into a two-slot output buffer.

void* ext_0046F4C0();

void fillStaticPair_0046F660(uint32_t* out, uint32_t value) {
    void* obj = ext_0046F4C0();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0046F660

// [0x0046F6A0]
namespace lift_0046F6A0 {
DWORD ext_0046F580();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0046F6A0(DWORD* dst, DWORD value) {
    DWORD obj = ext_0046F580();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0

// [0x0046F640]
namespace lift_0046F640 {
// @name fillStaticPair_0046F640
// @summary Stores a dword value and the address of the guarded static object into a two-slot output buffer.

void* ext_0046F460();

void fillStaticPair_0046F640(uint32_t* out, uint32_t value) {
    void* obj = ext_0046F460();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0046F640

// [0x0046F5E0]
namespace lift_0046F5E0 {
// @name storePairWithLazyGlobal
// @summary Stores a value into dst[0] and the lazily initialized global's address into dst[1].

DWORD ext_0046F340(DWORD unused);

// cdecl: void(DWORD* dst, DWORD value)
void sub_0046F5E0(DWORD* dst, DWORD value) {
    DWORD global_addr = ext_0046F340(0);
    dst[0] = value;
    dst[1] = global_addr;
}
} // namespace lift_0046F5E0

// [0x0046F600] sub_0046F600 (30 bytes)
namespace lift_0046F600 {
// Known callee 0x0046F3A0: lazyInitStaticObject_0046F3A0 (Function-local static guard: constructs the global object at mem_00AD834C once (ctor ext_0067A670 with arg 0), then sets its first DWORD to 0x0093A9DC and returns its address.)
// Called with one pushed stack argument (value 0), caller-cleaned.
extern void* ext_0046F3A0(DWORD arg);

// @name storeValueAndStaticObjectAddr
// @summary Writes value into out[0] and the address of the lazily-initialized static object into out[1].
void fn_0046F600(DWORD* out, DWORD value) {
    void* obj = ext_0046F3A0(0);
    out[0] = value;
    out[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0046F600

// [0x0046F620] sub_0046F620 (30 bytes)
namespace lift_0046F620 {
// Known callee 0x0046F400: ensureGlobalObjectInit_0046F400 (One-time initializer for the global object at 0xAD8354: guarded by bit 0 of 0xAD8358, calls ext_0067A670 once, then stores vtable 0x93AB8C; returns the object address.)
extern void* ext_0046F400();

// @name storePairWithGlobalObject_0046F620
// @summary Stores the value argument into dst[0] and the address of the lazily-initialized global object (via ext_0046F400) into dst[1].
// @field dst+0x00 DWORD value
// @field dst+0x04 DWORD globalObjectAddr
void fn_0046F620(DWORD* dst, DWORD value) {
    void* obj = ext_0046F400();
    dst[0] = value;
    dst[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0046F620

// [0x0046F520] sub_0046F520 (87 bytes)
namespace lift_0046F520 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD8370;
extern DWORD mem_00AD836C;

// @name initStaticObjectAD836C_0046F520
// @summary One-time guarded initializer for the static object at mem_00AD836C: runs the constructor helper once, installs vtable 0x0093B09C, and returns the object's address.
// @field StaticObjectAD836C +0x00 DWORD field_0x00
void* fn_0046F520() {
    // Guard bit (bit 0 of mem_00AD8370) ensures one-time initialization.
    if ((mem_00AD8370 & 1u) == 0) {
        mem_00AD8370 |= 1u;
        ext_0067A670(&mem_00AD836C, 0);
        mem_00AD836C = 0x0093B09Cu;
    }
    return &mem_00AD836C;
}
} // namespace lift_0046F520

// [0x0046F680] sub_0046F680 (30 bytes)
namespace lift_0046F680 {
// @name sub_0046F680
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0046F520();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0046F680(DWORD* dst, DWORD value) {
    DWORD obj = ext_0046F520();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0046F680

// [0x00462440] sub_00462440 (98 bytes)
namespace lift_00462440 {
extern int mem_00938BC4;

extern void __fastcall ext_006A5DFA(void* self); // thunk_MFC80_ord_587
extern void __fastcall ext_006A5F2C(void* self); // thunk_MFC80_ord_591
extern void __fastcall ext_006A5F6E(void* self); // thunk_MFC80_ord_605

// @name VersionControlDialog::~VersionControlDialog
// @class VersionControlDialog
// @summary Destructor: restores the VersionControlDialog vtable, destroys the member at +0xCC, the member at +0x78, then tail-destroys the base dialog.
// @field VersionControlDialog +0x00 void* vfptr
// @field VersionControlDialog +0x78 undefined field_0x78
// @field VersionControlDialog +0xCC undefined field_0xCC
extern void __fastcall fn_00462440(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00938BC4;
    ext_006A5DFA(static_cast<char*>(self) + 0xCC);
    ext_006A5F2C(static_cast<char*>(self) + 0x78);
    ext_006A5F6E(self);
}
} // namespace lift_00462440

// [0x004638E0] sub_004638E0 (98 bytes)
namespace lift_004638E0 {
extern LRESULT (__stdcall* mem_00925694)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

// @name deleteSelectedListViewItems
// @summary Repeatedly deletes every selected item of the list-view control at this+0x2E4 (LVM_GETNEXTITEM/LVM_DELETEITEM loop).
// @field <none> +0x2e4 HWND field_0x2e4
void __thiscall fn_004638E0(void* self) {
    constexpr UINT kLvmDeleteItem = 0x1008;   // LVM_DELETEITEM
    constexpr UINT kLvmGetNextItem = 0x100C;  // LVM_GETNEXTITEM
    constexpr LPARAM kLvniSelected = 0x0002;  // LVNI_SELECTED
    constexpr WPARAM kStartFromTop = static_cast<WPARAM>(-1);

    LPARAM index = mem_00925694(lift_field<HWND>(self, 0x2e4), kLvmGetNextItem, kStartFromTop, kLvniSelected);
    while (index != -1) {
        mem_00925694(lift_field<HWND>(self, 0x2e4), kLvmGetNextItem, static_cast<WPARAM>(index), kLvniSelected);
        mem_00925694(lift_field<HWND>(self, 0x2e4), kLvmDeleteItem, static_cast<WPARAM>(index), 0);
        index = mem_00925694(lift_field<HWND>(self, 0x2e4), kLvmGetNextItem, kStartFromTop, kLvniSelected);
    }
}
} // namespace lift_004638E0

// [0x00462AA0] sub_00462AA0 (98 bytes)
namespace lift_00462AA0 {
// Known callee 0x006A5FA4: thunk_MFC80_ord_2020 (IAT jump thunk forwarding to MFC80!ord_2020.)
extern void fn_006A5FA4(void);
// Known callee 0x004624C0: sub_004624C0 (no lifted body yet; called with a frame-local object as `this`).
extern void __fastcall ext_004624C0(void* self);
// Known callee 0x00462440: sub_00462440 (VersionControlDialog-style cleanup; takes `this`).
extern void __fastcall ext_00462440(void* self);

// @name SehGuardedInitAndCleanup
// @summary Builds a 0x120-byte local frame, runs an init call and a cleanup call under a guard state, then unwinds.
void fn_00462AA0(void* self) {
    (void)self;  // self is only passed through to callees as a frame pointer; no direct field access.

    // Local frame (0x120 bytes) followed by the unwind bookkeeping slots the original code keeps on the stack.
    alignas(8) uint8_t frame[0x120] = {};
    int32_t saved_link = 0;   // previous exception-frame link (fs:[0] in the original; not reproducible portably)
    int32_t unwind_state = 0; // guard state: 0 = init phase, -1 = cleanup phase

    ext_004624C0(frame);      // init the frame object
    fn_006A5FA4();            // MFC80 ord_2020 thunk (declared void(void) in the thunks file)

    unwind_state = -1;        // enter cleanup phase
    ext_00462440(frame);      // cleanup call

    (void)saved_link;         // original restores fs:[0] from the saved link here; no portable equivalent
}
} // namespace lift_00462AA0

// [0x00463D00]
namespace lift_00463D00 {
// @name sub_00463D00
// @summary Iterates over a vector of pointers at +0x414 and invokes thunk_MFC80_ord_2164 on each element with the given argument.
// @field Unknown +0x418 uint32_t* vec_first
// @field Unknown +0x41c uint32_t* vec_last


extern void ext_006A5FDA(void);
extern uint32_t mem_00925134;

void sub_00463D00(uint8_t* self, uint32_t arg) {
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));
    uint8_t* vec = self + 0x414;
    uint32_t* it = *reinterpret_cast<uint32_t**>(self + 0x418);
    if (it > *reinterpret_cast<uint32_t**>(self + 0x41c)) {
        invalid_param();
    }

    while (true) {
        uint32_t* end = *reinterpret_cast<uint32_t**>(vec + 0x8);
        if (*reinterpret_cast<uint32_t**>(vec + 0x4) > end) {
            invalid_param();
        }
        if (vec == nullptr) {
            invalid_param();
        }
        if (it == end) {
            break;
        }
        if (vec == nullptr || it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
            invalid_param();
        }
        uint32_t elem = *it;
        reinterpret_cast<void (*)(uint32_t, uint32_t)>(ext_006A5FDA)(elem, arg);
        if (it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
            invalid_param();
        }
        ++it;
    }
}
} // namespace lift_00463D00

// [0x0046A4D0] sub_0046A4D0 (61 bytes)
namespace lift_0046A4D0 {
// Known callee 0x00474FF0: sub_00474FF0 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00474FF0(void* self);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void (*mem_00925134)();

// @name advanceIteratorCounted
// @summary Advances an iterator with TreeIterator::increment until it equals `last`, incrementing `*counter` once per step; asserts the iterator is non-null and equal to `guard` before each step.
void fn_0046A4D0(void* it, void* last, void* guard, void* end, int32_t* counter) {
    for (;;) {
        if (it == nullptr || it != guard) {
            mem_00925134();
        }
        if (last == end) {
            return;
        }
        ++*counter;
        ext_00474FF0(&it);
    }
}
} // namespace lift_0046A4D0
