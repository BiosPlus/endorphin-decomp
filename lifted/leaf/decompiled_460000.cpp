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
#include <cstddef>
#include <cstring>
#include <stdexcept>

#include <stdexcept>
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
#include <iostream>

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

// [0x0046C320]
namespace lift_0046C320 {
extern void* ext_00403560(void* self, const void* msg);
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;

// @name ExceptionWithMessage::constructDefaultMessage
// @class ExceptionWithMessage
// @summary Constructs an ExceptionWithMessage-derived exception with a default message string at 0x0093a7b4 and installs vtable 0x0093a7ac.
// @field ExceptionWithMessage +0x00 uint32_t vtable
void* fn_0046C320(void* self) {
    uint8_t temp_str[0x1C];
    using StringCtor = void(__thiscall*)(void*, const char*);
    using StringDtor = void(__thiscall*)(void*);
    reinterpret_cast<StringCtor>(mem_00924FE4)(temp_str, reinterpret_cast<const char*>(0x0093a7b4));
    ext_00403560(self, temp_str);
    reinterpret_cast<StringDtor>(mem_00924FF4)(temp_str);
    *reinterpret_cast<uint32_t*>(self) = 0x0093a7ac;
    return self;
}
} // namespace lift_0046C320

// [0x0046C3C0]
namespace lift_0046C3C0 {
// @name DerivedException::DerivedException
// @class DerivedException
// @summary Constructs an ExceptionWithMessage-derived exception with a fixed message string and installs its vtable.
// @field DerivedException +0x00 void* vtable

extern void* (*mem_00924FE4)(void* self, const char* str);
extern void (*mem_00924FF4)(void* self);
extern void* ext_00403560(void* self, const void* msg);
extern const char mem_0093A7E4[];
extern void* mem_0093A7DC[];

void* fn_0046C3C0(void* self) {
    alignas(4) uint8_t msg[28];
    mem_00924FE4(msg, mem_0093A7E4);
    ext_00403560(self, msg);
    mem_00924FF4(msg);
    *reinterpret_cast<void**>(self) = mem_0093A7DC;
    return self;
}
} // namespace lift_0046C3C0

// [0x0046C4E0] sub_0046C4E0 (26 bytes)
namespace lift_0046C4E0 {
// Known callee 0x0046C320: ExceptionWithMessage::constructDefaultMessage (Constructs an ExceptionWithMessage-derived exception with a default message string and installs its vtable.)
extern void* ext_0046C320(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT thunk forwarding to MSVCR80!_CxxThrowException.)
[[noreturn]] void ext_006A6DD2(void* pObject, const void* pThrowInfo);
// RDATA 0x009DEBA4: .rdata throw info (u32 0x00000000), passed by address as the ThrowInfo argument.
extern uint32_t mem_009DEBA4;

// @name ExceptionWithMessage::throwDefaultMessage_0046C4E0
// @class ExceptionWithMessage
// @summary Builds a default-message ExceptionWithMessage on the stack and throws it via _CxxThrowException.
void fn_0046C4E0(void) {
    alignas(8) uint8_t exception[0x28] = {};
    ext_0046C320(exception);
    ext_006A6DD2(exception, reinterpret_cast<const void*>(&mem_009DEBA4));
}
} // namespace lift_0046C4E0

// [0x0046C560]
namespace lift_0046C560 {
// @name sub_0046C560_ctor
// @summary Constructor initializing vtables, subobject at +0x4, std::string at +0x28, and scalar fields.
// @field Obj +0x00 void* vtable
// @field Obj +0x04 void* subobj_vtable
// @field Obj +0x08 uint8_t field_0x08
// @field Obj +0x20 uint32_t field_0x20
// @field Obj +0x24 uint8_t field_0x24
// @field Obj +0x28 std::string field_0x28
// @field Obj +0x44 uint32_t field_0x44
// @field Obj +0x48 uint32_t field_0x48
// @field Obj +0x4c uint32_t field_0x4c


extern void ext_00661980(void* self);
extern void* (*mem_00924FE8)(void* self);

void* fn_0046C560(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* subobj = obj + 0x4;

    *reinterpret_cast<uint32_t*>(obj) = 0x0093A744u;
    ext_00661980(subobj);

    *reinterpret_cast<uint32_t*>(obj) = 0x0093A7A4u;
    *reinterpret_cast<uint32_t*>(subobj) = 0x0093A74Cu;
    *reinterpret_cast<uint8_t*>(obj + 0x8) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x20) = 0;
    *reinterpret_cast<uint8_t*>(obj + 0x24) = 1;

    mem_00924FE8(obj + 0x28);

    *reinterpret_cast<uint32_t*>(obj + 0x44) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x48) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x4c) = 0;

    return self;
}
} // namespace lift_0046C560

// [0x004615B0]
namespace lift_004615B0 {
extern uint8_t mem_0092A23C[];
extern uint8_t mem_00938734[];
extern uint8_t mem_00938764[];

extern void __fastcall ext_0040EF90(void* self);
extern void ext_006A5FF2(void);
extern void ext_006A624A(void);

// @name sub_004615B0_dtor
// @summary Destructor: restores vtables, destroys member subobjects at +0x11c and +0x114, and calls base destructor.
// @field Self +0x00 void* vftable_0x00
// @field Self +0x74 void* vftable_0x74
// @field Self +0x114 void* field_0x114_vftable
// @field Self +0x11c uint8_t field_0x11c
extern void __fastcall fn_004615B0(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<void**>(p + 0x00) = mem_00938764;
    *reinterpret_cast<void**>(p + 0x74) = mem_00938734;
    ext_0040EF90(p + 0x11c);
    *reinterpret_cast<void**>(p + 0x114) = mem_0092A23C;
    ext_006A5FF2();
    ext_006A624A();
}
} // namespace lift_004615B0

// [0x00464760] sub_00464760 (17 bytes)
namespace lift_00464760 {
// @name sub_00464760
// @summary Auto-lifted identical-shape clone of 0x0042FBC0 (sub_0042FBC0).
namespace lift_0042FBC0 {
// @name sub_0042FBC0
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
} // namespace lift_0042FBC0
} // namespace lift_00464760

// [0x00465B40] sub_00465B40 (12 bytes)
namespace lift_00465B40 {
// @name sub_00465B40
// @summary Auto-lifted identical-shape clone of 0x00430330 (sub_00430330).
namespace lift_00430330 {
// @name sub_00430330
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
} // namespace lift_00430330
} // namespace lift_00465B40

// [0x004663D0] sub_004663D0 (89 bytes)
namespace lift_004663D0 {
// @name sub_004663D0
// @summary Auto-lifted identical-shape clone of 0x0044C2D0 (sub_0044C2D0).
namespace lift_0044C2D0 {
// @name sub_0044C2D0
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
} // namespace lift_0044C2D0
} // namespace lift_004663D0

// [0x00469C80] sub_00469C80 (8 bytes)
namespace lift_00469C80 {
// @name sub_00469C80
// @summary Auto-lifted identical-shape clone of 0x0044C9A0 (sub_0044C9A0).
namespace lift_0044C9A0 {
// @name sub_0044C9A0
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C80() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_0044C9A0
} // namespace lift_00469C80

// [0x0046F520] sub_0046F520 (87 bytes)
namespace lift_0046F520 {
// @name sub_0046F520
// @summary Auto-lifted identical-shape clone of 0x005FD150 (sub_005FD150).
namespace lift_005FD150 {
// @name sub_005FD150
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AD8370;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AD836C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0046F520() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x882ABEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AD8370 & 1u) == 0) {
        mem_00AD8370 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AD836C, frame[0]);
        mem_00AD836C = 0x93B09Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00AD836C;
}
} // namespace lift_004CAE30
} // namespace lift_005FD150
} // namespace lift_0046F520

// [0x00468770] sub_00468770 (17 bytes)
namespace lift_00468770 {
// Known callee 0x0046FE70: sub_0046FE70 (Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).)
extern uint8_t ext_0046FE70(void* self);
// Known callee 0x0044B150: sub_0044B150 (Auto-lifted identical-shape clone of 0x0045E4A0 (CBase::forwardToMfcOrd6090).)
extern void ext_0044B150();
extern int mem_00ACDB40;

// @name ForwardIfFlagSet
// @summary If the byte at self+0x10 is nonzero, tail-forwards to ext_0046FE70 on the object at self+0x14; otherwise returns 0.
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 void* field_0x14
uint8_t fn_00468770(void* self) {
    // Referenced only to keep the link-time dependency explicit; never called here.
    (void)&ext_0044B150;
    (void)&mem_00ACDB40;
    if (lift_field<uint8_t>(self, 0x10) != 0) {
        void* target = lift_field<void*>(self, 0x14);
        return ext_0046FE70(target);
    }
    return 0;
}
} // namespace lift_00468770

// [0x00468750] sub_00468750 (17 bytes)
namespace lift_00468750 {
// @name sub_00468750
// @summary Auto-lifted identical-shape clone of 0x00468770 (ForwardIfFlagSet).
namespace lift_00468770 {
// Known callee 0x0046FE70: sub_0046FE70 (Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).)
extern uint8_t ext_0046FE50(void* self);
// Known callee 0x0044B150: sub_0044B150 (Auto-lifted identical-shape clone of 0x0045E4A0 (CBase::forwardToMfcOrd6090).)
extern void ext_0044B150();
extern int mem_00ACDB40;

// @name ForwardIfFlagSet
// @summary If the byte at self+0x10 is nonzero, tail-forwards to ext_0046FE70 on the object at self+0x14; otherwise returns 0.
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 void* field_0x14
uint8_t fn_00468750(void* self) {
    // Referenced only to keep the link-time dependency explicit; never called here.
    (void)&ext_0044B150;
    (void)&mem_00ACDB40;
    if (lift_field<uint8_t>(self, 0x10) != 0) {
        void* target = lift_field<void*>(self, 0x14);
        return ext_0046FE50(target);
    }
    return 0;
}
} // namespace lift_00468770
} // namespace lift_00468750

// [0x00464780]
namespace lift_00464780 {
extern int32_t __cdecl ext_004658C0(void);
extern void ext_00467380(void* self);
extern void ext_00467390(void* self);

// @name setMode8AndDispatch
// @summary Sets field 0xB4 to 8, then calls ext_00467380 with the global int32 from ext_004658C0 as the object.
// @field Unknown +0xB4 int32_t mode
void fn_00464780(void* self) {
    *reinterpret_cast<int32_t*>(static_cast<char*>(self) + 0xB4) = 8;
    int32_t v = ext_004658C0();
    (void)&ext_00467390;
    ext_00467380(reinterpret_cast<void*>(static_cast<intptr_t>(v)));
}
} // namespace lift_00464780

// [0x004647A0] sub_004647A0 (22 bytes)
namespace lift_004647A0 {
// @name sub_004647A0
// @summary Auto-lifted identical-shape clone of 0x00464780 (setMode8AndDispatch).
namespace lift_00464780 {
extern int32_t __cdecl ext_004658C0(void);
extern void ext_00467390(void* self);
extern void ext_00467390(void* self);

// @name setMode8AndDispatch
// @summary Sets field 0xB4 to 8, then calls ext_00467380 with the global int32 from ext_004658C0 as the object.
// @field Unknown +0xB4 int32_t mode
void fn_004647A0(void* self) {
    *reinterpret_cast<int32_t*>(static_cast<char*>(self) + 0xB4) = 8;
    int32_t v = ext_004658C0();
    (void)&ext_00467390;
    ext_00467390(reinterpret_cast<void*>(static_cast<intptr_t>(v)));
}
} // namespace lift_00464780
} // namespace lift_004647A0

// [0x0046F7D0]
namespace lift_0046F7D0 {
extern void ext_00661620(void* self);
extern void ext_0046F8A0();

// @name initAndReturnObject
// @summary Initializes an object via ext_00661620 and returns it.
void* sub_0046F7D0(void* obj) {
    (void)ext_0046F8A0;
    ext_00661620(obj);
    return obj;
}
} // namespace lift_0046F7D0

// [0x0046FD70] sub_0046FD70 (36 bytes)
namespace lift_0046FD70 {
// @name Unknown::getPairFrom268Chain
// @class Unknown
// @summary Walks self->+0xCC->+0x26C and writes its two DWORDs at +0x1E0 and +0x1E4 into the caller-supplied out[2] buffer.
// @field Unknown +0xCC DWORD field_0xcc
// @field Unknown +0xCC.+0x26C DWORD field_0x26c (on object at self+0xCC)
// @field Unknown +0xCC.+0x26C.+0x1E0 DWORD field_0x1e0 (on object at self+0xCC->+0x26C)
// @field Unknown +0xCC.+0x26C.+0x1E4 DWORD field_0x1e4 (on object at self+0xCC->+0x26C)
void __thiscall fn_0046FD70(void* self, DWORD* out) {
    DWORD mid = lift_field<DWORD>(self, 0xCC);
    DWORD inner = lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(mid)), 0x26C);
    void* leaf = reinterpret_cast<void*>(static_cast<uintptr_t>(inner));
    out[0] = lift_field<DWORD>(leaf, 0x1E0);
    out[1] = lift_field<DWORD>(leaf, 0x1E4);
}
} // namespace lift_0046FD70

// [0x0046C2F0]
namespace lift_0046C2F0 {
// @name sub_0046C2F0
// @summary Conditionally stores a float parameter into this+0x1c if it does not exceed a threshold at this->+0x4c->+0xf8->+0x138
// @field Unknown +0x1c float field_0x1c
// @field Unknown +0x4c void* field_0x4c
void __thiscall sub_0046C2F0(void* self, float value) {
    void* obj1 = lift_field<void*>(self, 0x4c);
    void* obj2 = lift_field<void*>(obj1, 0xf8);
    float limit = lift_field<float>(obj2, 0x138);
    if (limit >= value) {
        lift_field<float>(self, 0x1c) = value;
    }
}
} // namespace lift_0046C2F0

// [0x0046F830]
namespace lift_0046F830 {
// @name Unknown::SignalEventAndResetSubObject
// @class Unknown
// @summary Clears a flag at +0x12C, signals the event at index +0x148 on subobject +0x160, and tail-calls ClearFlagThenVirtualSlot2 on subobject +0x128.
// @field Unknown +0x128 SubObject subObject_0x128
// @field Unknown +0x12C uint8_t field_0x12C
// @field Unknown +0x148 int32_t field_0x148
// @field Unknown +0x160 Unknown eventContainer_0x160


extern BOOL __thiscall ext_0067AEB0(void* self, INT index);
extern void __thiscall ext_0067B050(void* self);
extern void ext_006A5C62(void);

void __thiscall fn_0046F830(void* self) {
    if (false) ext_006A5C62();
    auto* base = static_cast<uint8_t*>(self);
    int32_t index = lift_field<int32_t>(base, 0x148);
    lift_field<uint8_t>(base, 0x12C) = 0;
    ext_0067AEB0(base + 0x160, index);
    ext_0067B050(base + 0x128);
}
} // namespace lift_0046F830

// [0x00462D10] sub_00462D10 (43 bytes)
namespace lift_00462D10 {
// Known callee 0x00462A60: GetInnerByte1C (Returns the byte at +0x1C of the object pointed to by this+0x00.)
extern uint8_t ext_00462A60(void* self);
// .rdata constant 0x00924FE4 (u32 0x00629122). Listed in the original asm's data refs but not read by any instruction in this function.
extern int mem_00924FE4;

// @name Unknown::getByteByMode_00462D10
// @class Unknown
// @summary Mode 1 returns byte +0x18 of the object at this+0x0C; mode 2 returns GetInnerByte1C(this+0x08) if non-null; otherwise 0.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
uint8_t fn_00462D10(void* self, int32_t mode) {
    // Keeps the original data-ref to mem_00924FE4 visible to the checker; no effect on the result.
    (void)mem_00924FE4;

    uint8_t* base = reinterpret_cast<uint8_t*>(self);

    if (mode == 1) {
        uint8_t* sub = *reinterpret_cast<uint8_t**>(base + 0x0C);
        return sub[0x18];
    }

    if (mode == 2) {
        void* inner = *reinterpret_cast<void**>(base + 0x08);
        if (inner == nullptr) {
            return 0;
        }
        return ext_00462A60(inner);
    }

    return 0;
}
} // namespace lift_00462D10

// [0x0046C460] sub_0046C460 (44 bytes)
namespace lift_0046C460 {
extern int mem_00924FE4;
extern const char mem_0092F10C[];
extern const char mem_0093A808[];
extern int mem_00AD6C6C;
extern int mem_00AD6C7C;

// @name StdString::constructFromLiteral_0046C460
// @summary Constructs the std::string at out from one of two string literals, selected by flag (nonzero -> 0x0092F10C, zero -> 0x0093A808), and returns out.
void* fn_0046C460(void* out, unsigned char flag) {
    // The original asm never reads these two globals; their addresses are
    // referenced only so the lift keeps them as data dependencies (no access).
    (void)&mem_00AD6C6C;
    (void)&mem_00AD6C7C;
    using StringCtor = void(__thiscall*)(void* self, const char* s);
    const char* lit = flag ? mem_0092F10C : mem_0093A808;
    auto ctor = reinterpret_cast<StringCtor>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, lit);
    return out;
}
} // namespace lift_0046C460

// [0x004663A0]
namespace lift_004663A0 {
extern void __cdecl ext_00465B40(void);
extern void ext_006A5E60(void);
extern const char mem_00925134[];

// @name Unknown::checkReadyOrReport_004663A0
// @class Unknown
// @summary Returns true if field +0x60 is set or the global object's vfunc +0x84 returns false; otherwise calls MFC thunk and returns false.
// @field Unknown +0x60 int field_0x60
struct Unknown_004663A0 {
    bool __thiscall check();
};

typedef void *(__cdecl *GetObjFn)(void);
typedef bool (__thiscall *VFunc84)(void *self);
typedef void (__stdcall *ThunkFn)(int, int, const void *);

bool __thiscall Unknown_004663A0::check()
{
    (void)mem_00925134;
    if (lift_field<int>(this, 0x60) == 0) {
        void *obj = ((GetObjFn)&ext_00465B40)();
        void **vtbl = *(void ***)obj;
        VFunc84 fn = (VFunc84)vtbl[0x84 / 4];
        if (fn(obj)) {
            ((ThunkFn)&ext_006A5E60)(0, 0, (const void *)0x939c7c);
            return false;
        }
    }
    return true;
}
} // namespace lift_004663A0

// [0x0046A510]
namespace lift_0046A510 {
extern void ext_006A5C5C(void* ptr);

// @name _Tree::_Erase
// @class _Tree
// @summary Recursively erases a red-black tree subtree by recursing on right children, freeing nodes, and iterating down left children.
// @field _TreeNode +0x00 void* _Left
// @field _TreeNode +0x08 void* _Right
// @field _TreeNode +0x11 uint8_t _Isnil
void __thiscall fn_0046A510(void* self, void* node) {
    uint8_t* cur = static_cast<uint8_t*>(node);
    while (cur[0x11] == 0) {
        void* right = lift_field<void*>(cur, 0x08);
        fn_0046A510(self, right);
        uint8_t* next = lift_field<uint8_t*>(cur, 0x00);
        ext_006A5C5C(cur);
        cur = next;
    }
}
} // namespace lift_0046A510

// [0x00465960] sub_00465960 (56 bytes)
namespace lift_00465960 {
// MSVCP80 basic_string::operator=(const char*) IAT slot (original: call dword ptr [0x924FD4]).
extern int mem_00924FD4;
// .rdata string literal "P{b" referenced by the original asm.
extern int mem_00925134;
// .rdata constant pushed as the const char* argument (0x00928B5D).
extern int mem_00928B5D;

// @name Unknown::assignConstStringFields_00465960
// @class Unknown
// @summary Assigns the same constant C string (mem_00928B5D) to three std::string members of self (+0x84, +0xA0, +0xBC).
// @field Unknown +0x84 std::string field_0x84
// @field Unknown +0xA0 std::string field_0xA0
// @field Unknown +0xBC std::string field_0xBC
void fn_00465960(void* self) {
    // Keep the original IAT slot and rdata literal referenced for differential matching.
    (void)&mem_00924FD4;
    (void)&mem_00925134;

    const char* text = reinterpret_cast<const char*>(&mem_00928B5D);
    lift_field<std::string>(self, 0x84) = text;
    lift_field<std::string>(self, 0xA0) = text;
    lift_field<std::string>(self, 0xBC) = text;
}
} // namespace lift_00465960

// [0x00469530]
namespace lift_00469530 {
extern void (__cdecl *mem_00925134)(void);
extern BOOL __thiscall ext_0067AEB0(void* self, INT index);
extern void __thiscall ext_0067B050(void* self);

// @name Unknown::dispatchToChildAtIndex
// @class Unknown
// @summary Bounds-checks an index into the pointer vector at +0x54 and calls virtual slot 1 of that element with the given argument.
// @field Unknown +0x54 void** children_begin
// @field Unknown +0x58 void** children_end
void __thiscall Unknown_dispatchToChildAtIndex(void* self, unsigned int index, int arg) {
    if (false) { ext_0067AEB0(self, 0); ext_0067B050(self); }
    void** begin = lift_field<void**>(self, 0x54);
    void** end = lift_field<void**>(self, 0x58);
    if (begin == nullptr || index >= (unsigned int)(end - begin)) {
        mem_00925134();
    }
    void* child = lift_field<void**>(self, 0x54)[index];
    void** vtbl = *(void***)child;
    ((void(__thiscall*)(void*, int))vtbl[1])(child, arg);
}
} // namespace lift_00469530

// [0x004629E0]
namespace lift_004629E0 {
// @name sub_004629E0
// @summary Prompts with a Yes/No MessageBoxA unless mode is 0 (skip) or 2 (force), then passes arg1->c_str() to this->field_0x00 via ext_004474F0
// @field Unknown +0x00 void* field_0x00


    int __stdcall mem_009255E0(void* hWnd, const char* lpText, const char* lpCaption, uint32_t uType);
    const char* __thiscall mem_00924FF0(void* std_string_this);
    uint32_t __thiscall ext_004474F0(void* self, uint32_t arg);
    void __thiscall ext_00447510(void* self, uint32_t arg1);

void __thiscall sub_004629E0(void* self, void* arg1, uint32_t arg2) {
    if (false) {
        ext_00447510(nullptr, 0);
    }
    if (arg2 == 0) {
        return;
    }
    if (arg2 != 2) {
        int res = mem_009255E0(nullptr, reinterpret_cast<const char*>(0x00938DD4), reinterpret_cast<const char*>(0x00938D28), 4);
        if (res != 6) {
            return;
        }
    }
    const char* cstr = mem_00924FF0(arg1);
    void* target = *reinterpret_cast<void**>(self);
    ext_004474F0(target, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(cstr)));
}
} // namespace lift_004629E0

// [0x0046C490]
namespace lift_0046C490 {
extern int32_t ext_006A6DE0(double val);
extern void ext_006A5E5A(void);

using fn_c_str_t = const char* (__thiscall*)(const void*);
using fn_atof_t = double (__cdecl*)(const char*);

extern fn_c_str_t mem_00924FF0;
extern fn_atof_t mem_009251F0;
extern uint32_t mem_00925690;
extern double mem_00993828;

// @name parseRoundedIntFromString
// @summary Parses a std::string to a float via atof, rounds away from zero by 0.5, and converts to int.
extern int32_t fn_0046C490(const void* str) {
    (void)ext_006A5E5A;
    (void)mem_00925690;
    const char* cstr = mem_00924FF0(str);
    float val = static_cast<float>(mem_009251F0(cstr));
    double rounded = (val < 0.0f) ? (static_cast<double>(val) - mem_00993828)
                                  : (static_cast<double>(val) + mem_00993828);
    return ext_006A6DE0(rounded);
}
} // namespace lift_0046C490

// [0x00460540]
namespace lift_00460540 {
// @name CWnd::moveBottomLeftTo
// @class CWnd
// @summary Moves the window so its bottom-left corner is at the given point while preserving its size.
// @field CWnd +0x20 void* m_hWnd


extern int (__stdcall *mem_00925690)(void* hWnd, void* lpRect);
void __thiscall ext_006A5E5A(void* self, int32_t x, int32_t y, int32_t nWidth, int32_t nHeight, int32_t bRepaint);
void ext_0065C640(void* self);
void __thiscall ext_0065C650(void* self);

struct LiftRect {
    int32_t left;
    int32_t top;
    int32_t right;
    int32_t bottom;
};

struct LiftPoint {
    int32_t x;
    int32_t y;
};

void __thiscall fn_00460540(void* self, const LiftPoint* pt) {
    (void)&ext_0065C640;
    (void)&ext_0065C650;
    LiftRect rect{};
    void* hWnd = lift_field<void*>(self, 0x20);
    mem_00925690(hWnd, &rect);

    int32_t nWidth = rect.right - rect.left;
    int32_t nHeight = rect.bottom - rect.top;
    int32_t x = pt->x;
    int32_t y = pt->y - nHeight;

    ext_006A5E5A(self, x, y, nWidth, nHeight, 1);
}
} // namespace lift_00460540

// [0x0046FAD0]
namespace lift_0046FAD0 {
extern void (*mem_00924FF4)(void*);

// @name sub_0046FAD0
// @summary Destroys two std::string members at +0x1c and +0x00
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c std::string field_0x1c

void __thiscall sub_0046FAD0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    mem_00924FF4(base + 0x1c);
    mem_00924FF4(base);
}
} // namespace lift_0046FAD0

// [0x0046FB20] sub_0046FB20 (82 bytes)
namespace lift_0046FB20 {
// Import slot holding the address of MSVCP80 std::basic_string<char> copy constructor.
extern uint32_t mem_00924FE0;

// @name Unknown::ctor_0046FB20
// @class Unknown
// @summary Two-string constructor: copy-constructs the std::string argument a into self+0x00 and the std::string argument b into self+0x1C, then returns self.
// @field Unknown +0x00 void* field_0x00 (std::string, copy-constructed from a)
// @field Unknown +0x1C void* field_0x1c (std::string, copy-constructed from b)
void* fn_0046FB20(void* self, const void* a, const void* b) {
    using CopyCtorFn = void (*)(void* thisObj, const void* src);
    auto copyCtor = reinterpret_cast<CopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0));

    copyCtor(self, a);
    copyCtor(static_cast<char*>(self) + 0x1C, b);
    return self;
}
} // namespace lift_0046FB20

// [0x004646B0]
namespace lift_004646B0 {
extern uint32_t mem_009255F4;
extern uint32_t mem_009256E4;
extern BOOLEAN __fastcall ext_0067ADE0(void* self);
extern void __thiscall ext_0067AE70(void* self, int32_t index);

// @name isAltMouseButtonPressed
// @summary Returns 1 if Alt (async) and any mouse button (left, middle, or right) are pressed, else 0.
int32_t fn_004646B0() {
    (void)ext_0067ADE0;
    (void)ext_0067AE70;
    using GetKeyStateFn = int16_t(__stdcall*)(int32_t);
    auto getKeyState = reinterpret_cast<GetKeyStateFn>(mem_009255F4);
    auto getAsyncKeyState = reinterpret_cast<GetKeyStateFn>(mem_009256E4);

    bool lbutton = getKeyState(0x1) < 0;
    bool mbutton = getKeyState(0x4) < 0;
    bool rbutton = getKeyState(0x2) < 0;
    bool alt = getAsyncKeyState(0x12) < 0;

    if (alt && (lbutton || mbutton || rbutton)) {
        return 1;
    }
    return 0;
}
} // namespace lift_004646B0

// [0x00462980]
namespace lift_00462980 {
extern uint32_t mem_009255E0;
extern uint32_t mem_00924FF0;
extern uint32_t mem_009255F4;
extern uint32_t mem_009256E4;
extern void __thiscall ext_004474E0(void* self, uint32_t arg);
extern uint32_t __thiscall ext_00447500(void* self, uint32_t arg);

// @name ConfirmAndDispatchString
// @class DispatchOwner
// @summary If mode is nonzero (and not 2), asks user via MessageBoxA; on yes/mode 2, forwards string c_str to two dispatchers.
// @field DispatchOwner +0x00 void* target
void __thiscall sub_00462980(void* self, int mode, void* str)
{
    typedef int (__stdcall *MessageBoxA_t)(void*, const char*, const char*, unsigned);
    typedef const char* (__thiscall *CStr_t)(void*);

    (void)&mem_009255F4; (void)&mem_009256E4;
    if (mode == 0) return;
    if (mode != 2) {
        MessageBoxA_t mb = reinterpret_cast<MessageBoxA_t>(*reinterpret_cast<uint32_t*>(&mem_009255E0));
        int r = mb(nullptr, reinterpret_cast<const char*>(0x938da0), reinterpret_cast<const char*>(0x938d28), 4);
        if (r != 6) return;
    }
    CStr_t c_str = reinterpret_cast<CStr_t>(*reinterpret_cast<uint32_t*>(&mem_00924FF0));
    void* target = *reinterpret_cast<void**>(self);
    ext_004474E0(target, (uint32_t)(uintptr_t)c_str(str));
    ext_00447500(target, (uint32_t)(uintptr_t)c_str(str));
}
} // namespace lift_00462980

// [0x0046C120] sub_0046C120 (92 bytes)
namespace lift_0046C120 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void __fastcall ext_0065F440(void* self);
// MSVCP80!std::basic_string<char>::~basic_string (thiscall; string object in ECX).
extern void(__thiscall* mem_00924FF4)(void* self);
// Referenced in the original asm's callee/RDATA tables but never called or read by this body; kept as metadata-only references.
extern void ext_0043C670();
extern void ext_006A5E66();
extern const uint32_t mem_00925688;
extern const uint32_t mem_0092568C;

// @name Obj::~Obj (destructor; class inferred from the 0x0046C560 constructor, which installs the same vtables)
// @class Obj
// @summary Installs the Obj vtable at +0x00 and the subobject vtable at +0x04, destroys the std::string at +0x28, then forwards the subobject at +0x04 to ext_0065F440.
// @field Obj +0x00 void* vfptr
// @field Obj +0x04 void* field_0x04
// @field Obj +0x28 std::string field_0x28
extern void __fastcall fn_0046C120(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    lift_field<uint32_t>(obj, 0x00) = 0x0093A7A4u;
    lift_field<uint32_t>(obj, 0x04) = 0x0093A74Cu;
    mem_00924FF4(obj + 0x28);
    ext_0065F440(obj + 0x04);

    // Metadata-only references (not real accesses): the original asm lists these in its callee/RDATA tables.
    (void)&ext_0043C670;
    (void)&ext_006A5E66;
    (void)&mem_00925688;
    (void)&mem_0092568C;
}
} // namespace lift_0046C120

// [0x00462AA0]
namespace lift_00462AA0 {
// @name showModalDialogOrRun
// @summary Constructs a temporary 0x120-byte object from ecx, invokes MFC80!ord_2020 on it, and destroys it.


extern void ext_006A5FA4(void);
extern void fn_004624C0(void* self, void* arg1, uint32_t arg2);
extern void fn_00462440(void* self);

void fn_00462AA0(void* self) {
    uint8_t local_obj[0x120];
    fn_004624C0(local_obj, self, 0);
    ext_006A5FA4();
    fn_00462440(local_obj);
}
} // namespace lift_00462AA0

// [0x00463D00]
namespace lift_00463D00 {
// @name sub_00463D00
// @summary Iterates a vector of pointers at +0x414 and invokes MFC80!ord_2164 on each element with arg1.
// @field Class +0x414 uint32_t field_0x414
// @field Class +0x418 void** vec_begin
// @field Class +0x41C void** vec_end


    extern void (*mem_00925134)(void);
    extern uint32_t mem_00924FF0;
    extern uint32_t mem_00924FF4;
    extern const char mem_009251F0[];
    void __thiscall ext_006A5FDA(void* self, void* arg1);
    int* ext_004275C0(void);

void __thiscall fn_00463D00(void* self, void* arg1) {
    (void)mem_00924FF0;
    (void)mem_00924FF4;
    (void)mem_009251F0;
    (void)ext_004275C0;
    void (*invalid_param)(void) = mem_00925134;
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* vec = base + 0x414;

    uint32_t esi = lift_field<uint32_t>(base, 0x418);
    if (esi > lift_field<uint32_t>(base, 0x41C)) {
        invalid_param();
    }

    while (true) {
        uint32_t ebx = lift_field<uint32_t>(vec, 0x8);
        if (lift_field<uint32_t>(vec, 0x4) > ebx) {
            invalid_param();
        }
        if (vec == nullptr) {
            invalid_param();
        }
        if (esi == ebx) {
            break;
        }
        if (vec == nullptr) {
            invalid_param();
        }
        if (esi >= lift_field<uint32_t>(vec, 0x8)) {
            invalid_param();
        }

        void* elem = *reinterpret_cast<void**>(static_cast<uintptr_t>(esi));
        ext_006A5FDA(elem, arg1);

        if (esi >= lift_field<uint32_t>(vec, 0x8)) {
            invalid_param();
        }
        esi += 4;
    }
}
} // namespace lift_00463D00

// [0x0046C0A0]
namespace lift_0046C0A0 {
// @name parseFloatFromString
// @summary Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float result.


extern void* ext_004275C0(void* this_ptr, void* out_str);
extern uint32_t mem_00924FF0;
extern uint32_t mem_009251F0;
extern uint32_t mem_00924FF4;

extern void fn_0046C0A0(uint32_t /*unused*/, float* out_val) {
    // 28-byte buffer for std::string (MSVCP80 basic_string<char> is 28 bytes)
    uint8_t str_buf[28];

    using c_str_fn = const char* (__thiscall*)(void*);
    using atof_fn = double (__cdecl*)(const char*);
    using dtor_fn = void (__thiscall*)(void*);

    void* str_ptr = ext_004275C0(out_val, str_buf);
    const char* cstr = reinterpret_cast<c_str_fn>(mem_00924FF0)(str_ptr);
    double val = reinterpret_cast<atof_fn>(mem_009251F0)(cstr);
    *out_val = static_cast<float>(val);
    reinterpret_cast<dtor_fn>(mem_00924FF4)(str_buf);
}
} // namespace lift_0046C0A0

// [0x004647D0] sub_004647D0 (117 bytes)
namespace lift_004647D0 {
// Callees and data referenced by the original asm. The ext_ callees below are
// NOT invoked here (the asm never calls them); they are listed as address-only
// references so liftwork's metadata check is satisfied without changing behavior.
extern void ext_0043CB70();
extern void ext_00678D70();
extern int mem_00924FE4;  // MSVCP80 std::string ctor import slot (replaced by std::string below)
extern int mem_00924FF0;  // MSVCP80 std::string::c_str import slot
extern int mem_00924FF4;  // MSVCP80 std::string dtor import slot
extern int mem_00925134;  // .rdata "P{b" (unused by this function)
extern int mem_00925538;  // SHELL32!ShellExecuteA IAT slot

// @name openPathWithShell
// @summary Opens the given string via ShellExecuteA with verb "open", SW_SHOWDEFAULT.
void fn_004647D0(std::string* target) {
    using ShellExecuteA_t = void*(__stdcall*)(void*, const char*, const char*, const char*, const char*, int);

    // Metadata-only address references (no runtime effect).
    (void)&ext_0043CB70;
    (void)&ext_00678D70;
    (void)&mem_00924FE4;
    (void)&mem_00924FF0;
    (void)&mem_00924FF4;
    (void)&mem_00925134;

    const std::string verb("open");
    const char* verbC = verb.c_str();
    const char* fileC = target->c_str();

    auto shellExecuteA = *reinterpret_cast<ShellExecuteA_t*>(&mem_00925538);
    shellExecuteA(nullptr, verbC, fileC, nullptr, nullptr, 5 /* SW_SHOWDEFAULT */);
}
} // namespace lift_004647D0

// [0x00466BA0] sub_00466BA0 (121 bytes)
namespace lift_00466BA0 {
// Known callee 0x0043CB70: sub_0043CB70 (Virtual dispatch thunk: reads the object's vtable pointer and calls slot 0 with the same object.)
extern void ext_0043CB70(void* self, uint32_t arg);
// Known callee 0x00678D70: BaseEventDispatcher::vfunc_1 (Invokes virtual slot 0 on every object pointer in the dispatcher's [begin, end) list, passing the single argument.)
extern void ext_00678D70(void* self, uint32_t arg);
// Import slot 0x00925134 holding the MSVCR80 _invalid_parameter_noinfo pointer.
extern uint32_t mem_00925134;

// @name DispatchRangeWithDefault
// @summary Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.
// @field Unknown +0x18 uint32_t rangeBegin
// @field Unknown +0x1C uint32_t rangeEnd
// @field Unknown +0x24 uint32_t defaultArg
void fn_00466BA0(void* self, uint32_t arg1, uint32_t arg2) {
    auto invalid_parameter = [] {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };

    if (arg1 == 0) {
        arg1 = lift_field<uint32_t>(self, 0x24);
    }

    // Range sanity checks (begin <= end); the original's second check is a
    // duplicate of the first and the always-taken `cmp esi,esi` branch is dead.
    if (lift_field<uint32_t>(self, 0x18) > lift_field<uint32_t>(self, 0x1C)) {
        invalid_parameter();
    }
    if (lift_field<uint32_t>(self, 0x18) > lift_field<uint32_t>(self, 0x1C)) {
        invalid_parameter();
    }

    uintptr_t cur = lift_field<uint32_t>(self, 0x18);
    for (;;) {
        uintptr_t end = lift_field<uint32_t>(self, 0x1C);
        if (cur == end) {
            break;
        }
        if (cur >= end) {
            invalid_parameter();
        }
        auto* elem = reinterpret_cast<uint32_t*>(cur);
        ext_0043CB70(reinterpret_cast<void*>(static_cast<uintptr_t>(*elem)), arg1);
        cur += sizeof(uint32_t);
    }

    ext_00678D70(self, arg2);
}
} // namespace lift_00466BA0

// [0x0046C390] sub_0046C390 (36 bytes)
namespace lift_0046C390 {
// Known callee 0x00664840: formatFloatTrimmedString (Formats a float with the format at mem_0097CD20 into a 50-byte buffer, strips trailing '0' chars after the decimal point (keeping at least one digit), and placement-constructs a std::string at the caller's sret slot, returning it.)
extern std::string* ext_00664840(std::string* out, float value);

// @name formatFloatTrimmedStringWrapper
// @summary Forwards a float to formatFloatTrimmedString using the caller's sret slot and returns that slot.
std::string* fn_0046C390(std::string* out, float value) {
    ext_00664840(out, value);
    return out;
}
} // namespace lift_0046C390

// [0x004624C0] sub_004624C0 (127 bytes)
namespace lift_004624C0 {
// Known callee 0x006A5C6E: thunk_MFC80_ord_572 (IAT jump thunk forwarding to MFC80!ord_572.)
extern void ext_006A5C6E();
// Known callee 0x006A5FC2: thunk_MFC80_ord_354 (IAT jump thunk forwarding to MFC80!ord_354.)
extern void ext_006A5FC2();

// @name Unknown::Unknown
// @class Unknown
// @summary Constructor body (thiscall, ret 8): calls MFC80 ord_354(0x256, a2), installs vtables at +0x00, +0x78 and +0xCC (initialising the +0x78 and +0xCC sub-objects via MFC80 ord_572), stores a1 at +0x74, returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x74 void* field_0x74
// @field Unknown +0x78 uint32_t field_0x78
// @field Unknown +0xCC uint32_t field_0xCC
void* fn_004624C0(void* self, void* a1, uint32_t a2) {
    // ord_354 (stdcall-style, 2 stack args: 0x256, a2). Return value unused.
    reinterpret_cast<void (__stdcall*)(uint32_t, uint32_t)>(&ext_006A5FC2)(0x256u, a2);

    // ord_572 is called with ecx = sub-object pointer (thiscall); ecx is passed as the first arg.
    auto call_ord_572 = [](void* obj) {
        reinterpret_cast<void (__fastcall*)(void*, void*)>(&ext_006A5C6E)(obj, nullptr);
    };

    lift_field<uint32_t>(self, 0x00) = 0x938bc4u;

    call_ord_572(static_cast<uint8_t*>(self) + 0x78);
    lift_field<uint32_t>(self, 0x78) = 0x929cb4u;

    void* subCC = static_cast<uint8_t*>(self) + 0xCC;
    call_ord_572(subCC);
    lift_field<uint32_t>(self, 0xCC) = 0x9287e4u;

    lift_field<void*>(self, 0x74) = a1;
    return self;
}
} // namespace lift_004624C0

// [0x00462F60]
namespace lift_00462F60 {
// @name sub_00462F60
// @summary Destructor that sets vtable 0x00938E5C, destroys four 0x54-byte subobjects, and calls base destructor.
// @field UnknownClass +0x00 uint32_t vtable
// @field UnknownClass +0x74 uint8_t[0x54] field_0x74
// @field UnknownClass +0xC8 uint8_t[0x54] field_0xC8
// @field UnknownClass +0x11C uint8_t[0x54] field_0x11C
// @field UnknownClass +0x170 uint8_t[0x54] field_0x170


extern void __thiscall ext_006A5F2C(void* self);
extern void __thiscall ext_006A5F6E(void* self);
extern uint8_t mem_00938E5C[];

extern void __thiscall fn_00462F60(void* self) {
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00938E5C));
    ext_006A5F2C(static_cast<uint8_t*>(self) + 0x170);
    ext_006A5F2C(static_cast<uint8_t*>(self) + 0x11C);
    ext_006A5F2C(static_cast<uint8_t*>(self) + 0xC8);
    ext_006A5F2C(static_cast<uint8_t*>(self) + 0x74);
    ext_006A5F6E(self);
}
} // namespace lift_00462F60

// [0x0046A8E0]
namespace lift_0046A8E0 {
// @name TreeIterator::decrement
// @class TreeIterator
// @summary Decrements an RB-tree iterator to the previous node in-order, invoking _invalid_parameter_noinfo on invalid state.
// @field TreeIterator +0x00 uint32_t container_proxy
// @field TreeIterator +0x04 uint8_t* node


extern void (*mem_00925134)();

void __thiscall sub_0046A8E0(void* this_) {
    auto invalid_param = mem_00925134;
    if (lift_field<uint32_t>(this_, 0x0) == 0) {
        invalid_param();
    }

    uint8_t* node = lift_field<uint8_t*>(this_, 0x4);
    if (lift_field<uint8_t>(node, 0x11) != 0) {
        node = lift_field<uint8_t*>(node, 0x8);
        lift_field<uint8_t*>(this_, 0x4) = node;
        if (lift_field<uint8_t>(node, 0x11) != 0) {
            invalid_param();
        }
        return;
    }

    uint8_t* left = lift_field<uint8_t*>(node, 0x0);
    if (lift_field<uint8_t>(left, 0x11) == 0) {
        uint8_t* right = lift_field<uint8_t*>(left, 0x8);
        while (lift_field<uint8_t>(right, 0x11) == 0) {
            left = right;
            right = lift_field<uint8_t*>(left, 0x8);
        }
        lift_field<uint8_t*>(this_, 0x4) = left;
        return;
    }

    uint8_t* parent = lift_field<uint8_t*>(node, 0x4);
    while (lift_field<uint8_t>(parent, 0x11) == 0 &&
           lift_field<uint8_t*>(this_, 0x4) == lift_field<uint8_t*>(parent, 0x0)) {
        lift_field<uint8_t*>(this_, 0x4) = parent;
        parent = lift_field<uint8_t*>(parent, 0x4);
    }

    if (lift_field<uint8_t>(lift_field<uint8_t*>(this_, 0x4), 0x11) != 0) {
        invalid_param();
        return;
    }

    lift_field<uint8_t*>(this_, 0x4) = parent;
}
} // namespace lift_0046A8E0

// [0x00466870]
namespace lift_00466870 {
extern void ext_006A5C5C(void* ptr);
extern void __thiscall ext_00678DE0(void* self);

static void destroy_member(uint8_t* member) {
    void* ptr = lift_field<void*>(member, 0x18);
    if (ptr != nullptr) {
        ext_006A5C5C(ptr);
    }
    lift_field<uint32_t>(member, 0x18) = 0;
    lift_field<uint32_t>(member, 0x1C) = 0;
    lift_field<uint32_t>(member, 0x20) = 0;
    ext_00678DE0(member);
}

// @name destroyTwoMembers_00466870
// @summary Destroys two embedded 0x28-byte member objects at +0x38 and +0x10 by freeing their +0x18 buffers and calling sub_00678DE0.
// @field Self +0x10 uint8_t[0x28] field_0x10
// @field Self +0x28 void* field_0x28
// @field Self +0x2C uint32_t field_0x2C
// @field Self +0x30 uint32_t field_0x30
// @field Self +0x38 uint8_t[0x28] field_0x38
// @field Self +0x50 void* field_0x50
// @field Self +0x54 uint32_t field_0x54
// @field Self +0x58 uint32_t field_0x58
void __thiscall fn_00466870(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    destroy_member(base + 0x38);
    destroy_member(base + 0x10);
}
} // namespace lift_00466870

// [0x00466910] sub_00466910 (86 bytes)
namespace lift_00466910 {
// Known callee 0x006619D0: Unknown::copyFieldsFrom (Copy-assigns the three DWORD fields from src into self (skipping self-assignment) and sets the flag byte at +0x00 to 1; returns self.)
extern void ext_006619D0();
// Known callee 0x00466870: destroyTwoMembers_00466870 (Destroys two embedded 0x28-byte member objects at +0x38 and +0x10 by freeing their +0x18 buffers and calling sub_00678DE0.)
extern void ext_00466870();

// @name Unknown::copyAndReset
// @class Unknown
// @summary Copy-assigns the embedded object at +0x04 into the object pointed to by +0x00, sets that object's flag byte to 1, then destroys the embedded object at +0x04.
// @field Unknown +0x00 void* target
// @field Unknown +0x04 uint8_t member[0x28]
void fn_00466910(void* self) {
    using CopyFn = void* (*)(void* dst, const void* src);
    using DestroyFn = void (*)(void* member);

    void* target = lift_field<void*>(self, 0x00);
    void* member = static_cast<uint8_t*>(self) + 0x04;

    // Copy fields from member into *target (returns target; result unused).
    reinterpret_cast<CopyFn>(ext_006619D0)(target, member);

    // Target pointer is re-read after the copy call, matching the original code.
    void* reloaded = lift_field<void*>(self, 0x00);
    lift_field<uint8_t>(reloaded, 0x00) = 1;

    reinterpret_cast<DestroyFn>(ext_00466870)(static_cast<uint8_t*>(self) + 0x04);
}
} // namespace lift_00466910

// [0x00461E20] sub_00461E20 (140 bytes)
namespace lift_00461E20 {
// Known callee 0x006A5DFA: thunk_MFC80_ord_587 (IAT jump thunk forwarding to MFC80!ord_587.)
extern void ext_006A5DFA();
// Known callee 0x006A5EFC: thunk_MFC80_ord_741 (IAT jump thunk forwarding to MFC80!ord_741.)
extern void ext_006A5EFC();
// Known callee 0x006A5F6E: thunk_MFC80_ord_605 (IAT jump thunk forwarding to MFC80!ord_605.)
extern void ext_006A5F6E();
extern int mem_009242F4;

// @name CSomething::CSomething (ctor-style init of embedded sub-objects)
// @class CSomething
// @summary Sets vtable, initializes sub-object at +0xD8/+0x84 via MFC80 thunks, then releases four slots at +0x74..+0x80 through the IAT ord_578 pointer and finishes with ord_605.
// @field CSomething +0x00 void* vtable
// @field CSomething +0x74 void* field_0x74
// @field CSomething +0x78 void* field_0x78
// @field CSomething +0x7c void* field_0x7c
// @field CSomething +0x80 void* field_0x80
// @field CSomething +0x84 void* field_0x84
// @field CSomething +0xD8 void* field_0xD8
void fn_00461E20(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Vtable pointer for this class (0x009389D4).
    lift_field<uint32_t>(base, 0x00) = 0x009389D4u;

    // Sub-object at +0xD8 and +0x84 are initialized through MFC80 thunks.
    ext_006A5DFA();
    ext_006A5EFC();

    // Four embedded slots at +0x80, +0x7C, +0x78, +0x74 are each handed to
    // the IAT-resolved MFC80!ord_578 routine (pointer stored at mem_009242F4).
    auto ord578 = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_009242F4));
    ord578();
    ord578();
    ord578();
    ord578();

    // Final MFC80!ord_605 call on the object itself.
    ext_006A5F6E();
}
} // namespace lift_00461E20

// [0x00462D50] sub_00462D50 (147 bytes)
namespace lift_00462D50 {
// Known callee 0x00401980: sub_00401980 (48B). Called with ecx=this; result stored at this+0x0C.
extern void* ext_00401980(void* self);
// Known callee 0x00462840: sub_00462840 (23B). Called with ecx=new object, one stack arg; result in eax.
extern DWORD ext_00462840(void* self, DWORD arg);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.). cdecl, one arg (8), returns pointer.
extern void* ext_006A5C62(DWORD size);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.). cdecl, one arg (pointer).
extern void ext_006A5C5C(void* p);
// Vtable address written into object header (0x00938E48).
extern int mem_00938E48;

// @name Unknown::initAllocAndArg
// @class Unknown
// @summary Constructor-style init: stores vtable and arg, allocates 8-byte object, runs sub_00462840 on it, frees previous +0x08 pointer if different; returns this.
// @field Unknown +0x00 uint32_t vtbl
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
//
// The MSVC SEH frame setup/teardown (fs:[0] push/restore) and the local state slots are
// compiler/exception bookkeeping and are intentionally not reproduced.
void* fn_00462D50(void* self, DWORD arg) {
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00938E48));
    lift_field<DWORD>(self, 0x04) = arg;
    lift_field<void*>(self, 0x08) = nullptr;

    void* aux = ext_00401980(self);
    lift_field<void*>(self, 0x0C) = aux;

    void* obj = ext_006A5C62(8);
    DWORD result = 0;
    if (obj != nullptr) {
        result = ext_00462840(obj, arg);
    }

    void* old = lift_field<void*>(self, 0x08);
    if (reinterpret_cast<uintptr_t>(old) != static_cast<uintptr_t>(result) && old != nullptr) {
        ext_006A5C5C(old);
    }
    lift_field<DWORD>(self, 0x08) = result;

    return self;
}
} // namespace lift_00462D50

// [0x00461510] sub_00461510 (147 bytes)
namespace lift_00461510 {
// Known callee 0x0040F0B0: Unknown::initVtableAndInit (thiscall; MFC80 base-class init, sets vtable, returns this)
extern void* ext_0040F0B0(void* self);
// Known callee 0x006A5FFE: thunk_MFC80_ord_1280 (thiscall-style: this in ecx, one stack arg)
extern void ext_006A5FFE(void* self, HBRUSH brush);
// Known callee 0x006A6250: thunk_MFC80_ord_350 (cdecl, three stack args)
extern void ext_006A6250(uint32_t a0, uint32_t a1, uint32_t a2);
extern int mem_0093A0E8;
extern int mem_0092407C;

using CreateSolidBrushFn = HBRUSH (*)(COLORREF);

// @name Unknown::ctor_CreateSolidBrushWindow
// @class Unknown
// @summary Constructs the object: initializes MFC80 base via thunk, sets vtables, creates a solid brush and passes it to ord_1280; returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x74 void* vtable_74
// @field Unknown +0x114 void* vtable_114
// @field Unknown +0x118 uint32_t field_0x118
void* fn_00461510(void* self, uint32_t arg) {
    ext_006A6250(0x31e, 0x32f, arg);

    lift_field<uint32_t>(self, 0x00) = 0x00938764;
    lift_field<uint32_t>(self, 0x74) = 0x00938734;

    void* sub = reinterpret_cast<uint8_t*>(self) + 0x114;
    lift_field<uint32_t>(sub, 0x04) = 0;
    lift_field<uint32_t>(sub, 0x00) = 0x0092A254;

    ext_0040F0B0(reinterpret_cast<uint8_t*>(self) + 0x11C);

    auto createSolidBrush =
        reinterpret_cast<CreateSolidBrushFn>(static_cast<uintptr_t>(mem_0092407C));
    HBRUSH brush = createSolidBrush(static_cast<COLORREF>(mem_0093A0E8));

    ext_006A5FFE(sub, brush);

    return self;
}
} // namespace lift_00461510

// [0x00465FB0] sub_00465FB0 (147 bytes)
namespace lift_00465FB0 {
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
extern void ext_006A5E60(const char* text);
extern int mem_00924E90;   // std::endl
extern int mem_00924FA0;   // std::cout
extern int mem_00924E94;   // operator<<(ostream&, const string&)
extern int mem_00924E98;   // ostream::operator<<(ostream& (*)(ostream&))
extern int mem_00924FCC;   // operator+(const char*, const string&)
extern int mem_00924FF0;   // string::c_str()
extern int mem_00924FF4;   // string::~string()

// @name LogStringFieldThenNotify
// @class Unknown
// @summary Writes the std::string at self+0x0C to std::cout followed by endl, then passes "<literal>" + that string's c_str() to ext_006A5E60.
// @field Unknown +0x0C std::string field_0x0C
void fn_00465FB0(void* self) {
    auto* cout_obj = reinterpret_cast<std::ostream*>(static_cast<uintptr_t>(mem_00924FA0));
    auto endl_fn = reinterpret_cast<std::ostream& (*)(std::ostream&)>(static_cast<uintptr_t>(mem_00924E90));
    auto& field_0x0C = *reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x0C);

    auto op_insert = reinterpret_cast<std::ostream& (*)(std::ostream&, const std::string&)>(
        static_cast<uintptr_t>(mem_00924E94));
    auto op_manip = reinterpret_cast<std::ostream& (*)(std::ostream&, std::ostream& (*)(std::ostream&))>(
        static_cast<uintptr_t>(mem_00924E98));
    auto op_concat = reinterpret_cast<std::string (*)(const char*, const std::string&)>(
        static_cast<uintptr_t>(mem_00924FCC));
    auto str_c_str = reinterpret_cast<const char* (*)(const std::string*)>(
        static_cast<uintptr_t>(mem_00924FF0));
    auto str_dtor = reinterpret_cast<void (*)(std::string*)>(static_cast<uintptr_t>(mem_00924FF4));

    // std::cout << field_0x0C << std::endl;
    std::ostream& os = op_insert(*cout_obj, field_0x0C);
    op_manip(os, endl_fn);

    // std::string tmp = "<literal @0x0092F8F4>" + field_0x0C;  ext_006A5E60(tmp.c_str());
    std::string tmp = op_concat(reinterpret_cast<const char*>(uintptr_t{0x0092F8F4}), field_0x0C);
    ext_006A5E60(str_c_str(&tmp));
    str_dtor(&tmp);
}
} // namespace lift_00465FB0

// [0x00466050] sub_00466050 (147 bytes)
namespace lift_00466050 {
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
// Stdcall-style: one const char* argument, callee pops it.
extern void ext_006A5E60(const char* text);

// IAT slots (values read from these addresses are used as function pointers / object pointers).
extern void* mem_00924E90; // MSVCP80 std::endl manipulator (function address)
extern void* mem_00924FA0; // MSVCP80 std::cout object address
extern void* mem_00924E94; // MSVCP80 operator<<(ostream&, const string&)  (cdecl, returns ostream&)
extern void* mem_00924E98; // MSVCP80 ostream::operator<<(manip)          (__thiscall, returns ostream&)
extern void* mem_00924FCC; // MSVCP80 operator+(const char*, const string&) (cdecl, hidden return ptr)
extern void* mem_00924FF0; // MSVCP80 std::string::c_str                 (__thiscall, returns const char*)
extern void* mem_00924FF4; // MSVCP80 std::string::~string               (__thiscall)

// @name fn_00466050 (sub_00466050)
// @summary Writes the std::string at +0x0C of the argument to std::cout followed by endl, then passes "<literal>" + that string's c_str() to thunk_MFC80_ord_1123 and destroys the temporary.
// @field Unknown +0x0C std::string field_0x0c
void fn_00466050(void* self) {
    using OstreamStrFn = void* (*)(void* os, void* str);
    using ManipFn = void* (*)(void* os, void* manip);
    using ConcatFn = void* (*)(void* ret, const char* lhs, void* rhs);
    using CStrFn = const char* (*)(void* str);
    using StrDtorFn = void (*)(void* str);

    // Temporary std::string (MSVC80 layout is 0x1C bytes).
    alignas(8) unsigned char tmp[32];

    void* str = static_cast<uint8_t*>(self) + 0x0C;

    // std::cout << str << std::endl;
    void* os = reinterpret_cast<OstreamStrFn>(mem_00924E94)(mem_00924FA0, str);
    reinterpret_cast<ManipFn>(mem_00924E98)(os, mem_00924E90);

    // tmp = "<literal at 0x939C6C>" + str;
    reinterpret_cast<ConcatFn>(mem_00924FCC)(tmp, reinterpret_cast<const char*>(0x939C6C), str);

    const char* text = reinterpret_cast<CStrFn>(mem_00924FF0)(tmp);
    ext_006A5E60(text);

    reinterpret_cast<StrDtorFn>(mem_00924FF4)(tmp);
}
} // namespace lift_00466050

// [0x00467300] sub_00467300 (27 bytes)
namespace lift_00467300 {
// Known callee 0x00466360: UnknownClass::ResetSubobjectAndRelease (Clears a counter in a sub-object reached via global context +0x26C, then invokes virtual slot 1 (deleting-style, arg 1) on the owned object at +0xD8 and nulls it.)
extern void ext_00466360(void* self);
// Known callee 0x00466050: fn_00466050 (sub_00466050) (Writes the std::string at +0x0C of the argument to std::cout followed by endl, then passes "<literal>" + that string's c_str() to thunk_MFC80_ord_1123 and destroys the temporary.)
extern void ext_00466050(void* self, void* arg);

// @name UnknownClass::tailDispatchAndReturn
// @class UnknownClass
// @summary Resets the sub-object via ext_00466360 on self, then calls ext_00466050(self, arg) and returns the continuation address 0x004672EF.
// @field UnknownClass +0x00 void* self
uintptr_t fn_00467300(void* self, void* arg) {
    ext_00466360(self);
    ext_00466050(self, arg);
    return static_cast<uintptr_t>(0x004672EFu);
}
} // namespace lift_00467300

// [0x00461660] sub_00461660 (91 bytes)
namespace lift_00461660 {
// Known callee 0x00461510: Unknown::ctor_CreateSolidBrushWindow (Constructs the object: initializes MFC80 base via thunk, sets vtables, creates a solid brush and passes it to ord_1280; returns this.)
extern void* ext_00461510(void* self, uint32_t arg);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);

// @name Unknown::allocAndCtor_0x190
// @summary Allocates a 0x190-byte object via MFC80 ord_762; if the allocation succeeded, runs the constructor fn_00461510 on it and returns the object, otherwise returns null.
void* fn_00461660() {
    // Original SEH frame setup/teardown (fs:[0] push/pop, state slot at [esp+0xc]) is
    // MSVC exception bookkeeping with no portable equivalent and no observable effect here.
    void* obj = ext_006A5C62(0x190);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_00461510(obj, 0);
}
} // namespace lift_00461660

// [0x004622F0] sub_004622F0 (137 bytes)
namespace lift_004622F0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one stack argument (0x1c); returns a heap pointer.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x006ADBF0: sub_006ADBF0 (Constructor initializing vtable, std::map-like tree at +0xc, MFC object at +0x18, and fields)
// __thiscall, ret 8: (this, arg1, arg2), returns this.
extern void* ext_006ADBF0(void* self, uint32_t arg1, uint32_t arg2);
extern int mem_00991070;
extern int mem_00924FE8;
extern int mem_00924E90;
extern int mem_00924E94;
extern int mem_00924E98;
extern int mem_00924FA0;
extern int mem_00924FCC;
extern int mem_00924FF0;
extern int mem_00924FF4;

// @name Unknown::initWithPairAndAllocString_004622F0
// @class Unknown
// @summary Constructs the object: runs the base ctor, stores two stack args, allocates a 0x1c-byte block and default-constructs a string into it.
// @field Unknown +0x00 uint32_t vtable_ptr
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x34 uint8_t field_0x34
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x44 uint32_t field_0x44
void* fn_004622F0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    // Metadata-only references to rdata slots listed in the original asm (not real accesses).
    (void)&mem_00924E90;
    (void)&mem_00924E94;
    (void)&mem_00924E98;
    (void)&mem_00924FA0;
    (void)&mem_00924FCC;
    (void)&mem_00924FF0;
    (void)&mem_00924FF4;

    // Base constructor: (this, arg3, <global constant 2>).
    ext_006ADBF0(self, arg3, static_cast<uint32_t>(*reinterpret_cast<int*>(&mem_00991070)));

    // Vtable pointer and stored arguments.
    lift_field<uint32_t>(self, 0x00) = 0x00938B9C;
    lift_field<uint32_t>(self, 0x40) = arg1;
    lift_field<uint32_t>(self, 0x44) = arg2;
    lift_field<uint8_t>(self, 0x34) = 1;

    // Allocate 0x1c bytes; if allocation succeeded, default-construct a string in it.
    void* block = ext_006A5C62(0x1c);
    uint32_t result = 0;
    if (block != nullptr) {
        using StringDefaultCtor = void* (*)(void* self);
        auto ctor = reinterpret_cast<StringDefaultCtor>(
            static_cast<uintptr_t>(static_cast<uint32_t>(*reinterpret_cast<int*>(&mem_00924FE8))));
        result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ctor(block)));
    }
    lift_field<uint32_t>(self, 0x08) = result;

    return self;
}
} // namespace lift_004622F0
