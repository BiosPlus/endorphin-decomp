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
