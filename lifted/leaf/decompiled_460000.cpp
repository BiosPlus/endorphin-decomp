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
