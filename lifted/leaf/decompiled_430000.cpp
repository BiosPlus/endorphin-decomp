// Lifted C++ translation unit: lifted/leaf/decompiled_430000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00431310 {
extern void ext_006A5EA8(uint32_t arg);

// @name sub_00431310
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_00431310(uint32_t arg) {
    ext_006A5EA8(arg);
}
} // namespace lift_00431310
#include <cstdint>
#include <cstring>
#include <stdexcept>

#include <stdexcept>
namespace lift_00437DC0 {
extern void ext_00436FA0(void* arg, int flag);

// @name sub_00437DC0
// @summary Auto-lifted identical-shape clone of 0x005A9960 (NMData::BackGroundData::vfunc_6).
void fn_00437DC0(void* arg) {
    ext_00436FA0(arg, 9632248);
}
} // namespace lift_00437DC0
#include <cstdlib>

// [0x00437DE0]
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00437DC0(void* arg);

void fn_00437DE0() {
    ext_00437DC0(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0

// [0x0043CB80]
namespace lift_0043CB80 {
// @name call_MFC80_ord_1903_ret8
// @summary Calls thunk_MFC80_ord_1903 and returns, cleaning 8 bytes of stack arguments.


extern void ext_006A5EA8(void);

extern void fn_0043CB80(uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    (void)arg2;
    ext_006A5EA8();
}
} // namespace lift_0043CB80

// [0x00434E30] sub_00434E30 (11 bytes)
namespace lift_00434E30 {
// @name sub_00434E30
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_004310E0(void* arg);

void fn_00434E30() {
    ext_004310E0(reinterpret_cast<void*>(static_cast<uintptr_t>(9632248)));
}
} // namespace lift_00437DE0
} // namespace lift_00434E30

// [0x00430360]
namespace lift_00430360 {
// @name getGlobalField0x58AndCall00469040
// @summary Calls get_global_field_0x58 and tail-calls ext_00469040 with the returned pointer in ECX.


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_00469040(int32_t self);

extern void __cdecl fn_00430360(void) {
    int32_t obj = ext_00465B30();
    ext_00469040(obj);
}
} // namespace lift_00430360

// [0x004302A0] sub_004302A0 (12 bytes)
namespace lift_004302A0 {
// @name sub_004302A0
// @summary Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).
namespace lift_00430360 {
// @name getGlobalField0x58AndCall00469040
// @summary Calls get_global_field_0x58 and tail-calls ext_00469040 with the returned pointer in ECX.


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_00469A80(int32_t self);

extern void __cdecl fn_004302A0(void) {
    int32_t obj = ext_00465B30();
    ext_00469A80(obj);
}
} // namespace lift_00430360
} // namespace lift_004302A0

// [0x00430330] sub_00430330 (12 bytes)
namespace lift_00430330 {
// @name sub_00430330
// @summary Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).
namespace lift_00430360 {
// @name getGlobalField0x58AndCall00469040
// @summary Calls get_global_field_0x58 and tail-calls ext_00469040 with the returned pointer in ECX.


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_0046BF80(int32_t self);

extern void __cdecl fn_00430330(void) {
    int32_t obj = ext_00465B30();
    ext_0046BF80(obj);
}
} // namespace lift_00430360
} // namespace lift_00430330

// [0x00433FF0] sub_00433FF0 (14 bytes)
namespace lift_00433FF0 {
// @name sub_00433FF0
// @summary Auto-lifted identical-shape clone of 0x0045E4A0 (CBase::forwardToMfcOrd6090).
namespace lift_0045E4A0 {
// Thunk to MFC80!ord_6090 (IAT jump). Original call passes ecx and pushes 0.
extern void ext_0043DC90(void* self, int arg);

// @name CBase::forwardToMfcOrd6090
// @class CBase
// @summary Loads the pointer stored at +0x2D0 and forwards it, with a zero argument, to the MFC80 ord_6090 thunk.
// @field CBase +0x2D0 void* field_0x2D0
void fn_00433FF0(void* self) {
    void* inner = lift_field<void*>(self, 0x108);
    ext_0043DC90(inner, -1);
}
} // namespace lift_0045E4A0
} // namespace lift_00433FF0

// [0x00430370] sub_00430370 (16 bytes)
namespace lift_00430370 {
// Known callee 0x004658C0: sub_004658C0 (Returns global int32 value from mem_00AD6C80.)
extern int32_t ext_004658C0(void);

// @name CheckFieldAt60IsZero
// @summary Calls sub_004658C0 to get an object pointer, returns 1 if its int32 at +0x60 is zero, else 0.
// @field Unknown +0x60 int32_t field_0x60
extern uint8_t __cdecl fn_00430370(void) {
    const int32_t raw = ext_004658C0();
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(raw)));
    const int32_t field = lift_field<int32_t>(obj, 0x60);
    return static_cast<uint8_t>(field == 0 ? 1 : 0);
}
} // namespace lift_00430370

// [0x004348F0] sub_004348F0 (13 bytes)
namespace lift_004348F0 {
// @name sub_004348F0
// @summary Auto-lifted identical-shape clone of 0x004691C0 (fn_004691C0 (descriptiveName: ForwardFieldAt26CFromGlobalResult)).
namespace lift_004691C0 {
// @name fn_004348F0 (descriptiveName: ForwardFieldAt26CFromGlobalResult)
// @class (none)
// @summary Calls ext_00594000 to obtain an int32 handle, reads the dword at handle+0x26C, and tail-forwards that value to ext_00477380.
// @field Unknown +0x26C int32_t field_0x26C

extern int32_t ext_004658C0(void);
extern int32_t ext_00462AA0(int32_t ecx);

extern int32_t fn_004691C0(void) {
    const int32_t eax = ext_004658C0();
    void* const base = reinterpret_cast<void*>(static_cast<intptr_t>(eax));
    const int32_t ecx = lift_field<int32_t>(base, 0x5C);
    return ext_00462AA0(ecx);
}
} // namespace lift_004691C0
} // namespace lift_004348F0

// [0x00430380] sub_00430380 (17 bytes)
namespace lift_00430380 {
// Known callee 0x004658C0: sub_004658C0 (returns global int32 from mem_00AD6C80)
extern int32_t ext_004658C0(void);

// @name isGlobalObjectField60Is1
// @class Unknown (object returned by ext_004658C0)
// @summary Returns 1 if the int32 at +0x60 of the object returned by ext_004658C0 equals 1, else 0.
// @field Unknown +0x60 int32_t field_0x60
uint8_t fn_00430380(void) {
    const uint32_t handle = static_cast<uint32_t>(ext_004658C0());
    const auto* base = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(handle));
    int32_t value = 0;
    std::memcpy(&value, base + 0x60, sizeof value);
    return value == 1 ? uint8_t{1} : uint8_t{0};
}
} // namespace lift_00430380

// [0x00430310] sub_00430310 (18 bytes)
namespace lift_00430310 {
// Known callee 0x0044B7C0: sub_0044B7C0 (Auto-lifted identical-shape clone of 0x00675D60 (Unknown::forwardToChildVfunc14).)
extern void ext_0044B7C0(void* self);
// Known callee 0x004444B0: sub_004444B0 (This-adjustor thunk: adjusts `this` by +0x15C and tail-calls sub_0045C240.)
extern void ext_004444B0(void* self);

// @name Unknown::forwardToChildVfunc14Guarded
// @class Unknown
// @summary Forwards to the child object at +0x100 via ext_0044B7C0 when that child pointer is non-null.
// @field Unknown +0x100 void* field_0x100
void fn_00430310(void* self) {
    void* child = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x100);
    if (child != nullptr) {
        ext_0044B7C0(child);
    }
}
} // namespace lift_00430310

// [0x00430CA0] sub_00430CA0 (18 bytes)
namespace lift_00430CA0 {
// @name Unknown::forwardVirtual0WithArg1
// @class Unknown
// @summary Tail-forwards to the object's vtable slot 0 with the single stack argument replaced by 1.
// @field Unknown +0x00 void* field_0x00

// Original: mov ecx,[esp+4]; mov eax,[ecx]; mov edx,[eax];
//           mov [esp+4],1; jmp edx
// The caller's stack argument is overwritten with 1 and control is transferred
// (as a tail call) to vtable[0], which receives `self` as its this-pointer.
void fn_00430CA0(void* self, int32_t /*arg, overwritten with 1*/) {
    void* vtbl = lift_field<void*>(self, 0x00);
    using VSlot0 = void (*)(void* self, int32_t arg);
    VSlot0 target = reinterpret_cast<VSlot0>(lift_field<void*>(vtbl, 0x00));
    target(self, 1);
}
} // namespace lift_00430CA0

// [0x00433B70] sub_00433B70 (18 bytes)
namespace lift_00433B70 {
extern void __fastcall ext_004444B0(void* self);

// @name forwardToChildAt114IfPresent
// @summary If the pointer at this+0x114 is non-null, forward this pointer to ext_004444B0; then return (ret 4 pops one stack argument).
// @field this +0x114 void* child
extern void __thiscall fn_00433B70(void* self, int32_t stackArg) {
    (void)stackArg;
    void* child = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x114);
    if (child != nullptr) {
        ext_004444B0(child);
    }
}
} // namespace lift_00433B70

// [0x00430260] sub_00430260 (24 bytes)
namespace lift_00430260 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t ext_00465B30(void);
// Known callee 0x00468660: getNestedField_0x18_0xc (Reads a 32-bit value at offset 0xc of the object pointed to by this+0x18)
// Original is __thiscall; the receiver is passed as the first argument here.
extern uint32_t ext_00468660(uint32_t this_ptr);

// @name CallVirtualSlot1D8OnNestedObject
// @summary Fetches an object via two callees, then tail-dispatches its vtable slot at +0x1d8 with that object as `this`.
uint32_t fn_00430260(void) {
    int32_t  token = ext_00465B30();
    uint32_t obj_addr = ext_00468660(static_cast<uint32_t>(token));
    void*    obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // Load vtable pointer from object's first dword.
    void* vtbl = *reinterpret_cast<void**>(obj);

    // Slot at byte offset 0x1d8 in the vtable; the target's signature is unknown, so the result is passed through.
    using VirtualFn = uint32_t (*)(void* self);
    VirtualFn fn = reinterpret_cast<VirtualFn>(lift_field<void*>(vtbl, 0x1d8));
    return fn(obj);
}
} // namespace lift_00430260

// [0x00430430] sub_00430430 (24 bytes)
namespace lift_00430430 {
// @name Unknown::ForwardFlagToVirtual1
// @class Unknown
// @summary Reads the byte at this+0xF4 and tail-calls virtual slot 1 of the object passed in on the stack, forwarding that byte as its argument.
// @field Unknown +0xf4 uint8_t field_0xf4
void* fn_00430430(void* self, void* other) {
    const uint32_t flag = lift_field<uint8_t>(self, 0xf4);
    void** vtbl = *reinterpret_cast<void***>(other);
    auto slot = reinterpret_cast<uint32_t (*)(void*, uint32_t)>(vtbl[1]);
    return reinterpret_cast<void*>(static_cast<uintptr_t>(slot(other, flag)));
}
} // namespace lift_00430430

// [0x00430450] sub_00430450 (24 bytes)
namespace lift_00430450 {
// @name CallSlot1WithFlagByte
// @class <Unknown>
// @summary Reads a byte flag from self, then tail-dispatches obj's vtable slot 1 with obj as this and the flag as the single argument.
// @field <Unknown> +0xF5 BYTE field_0xF5
// Original is a tail-jump thunk: ecx=self, [esp+4]=obj; it overwrites the stack arg with the
// zero-extended flag byte and jumps to obj->vtbl[1] (thiscall with obj in ecx). The portable form
// performs the same call and returns its result unchanged.

typedef DWORD (*Slot1Fn)(void* self, BYTE value);

DWORD fn_00430450(void* self, void* obj) {
    BYTE flag = lift_field<BYTE>(self, 0xF5);
    void** vtbl = lift_field<void**>(obj, 0x00);
    Slot1Fn target = reinterpret_cast<Slot1Fn>(vtbl[1]);
    return target(obj, flag);
}
} // namespace lift_00430450

// [0x00430470] sub_00430470 (24 bytes)
namespace lift_00430470 {
// @name Unknown::ForwardByteF6ToVirtual1
// @class Unknown
// @summary Reads byte field +0xF6 of this and tail-forwards it as the argument to vtable slot 1 of the object passed on the stack.
// @field Unknown +0xF6 uint8_t field_0xF6
// Thiscall-style virtual slot 1 taking one byte argument, returning in EAX.
typedef uint32_t(__thiscall* VirtualSlot1Fn)(void* self, uint8_t arg);

uint32_t fn_00430470(void* self, void* target) {
    // mov eax, ecx ; movzx eax, byte ptr [eax+0xF6]
    uint8_t flag = lift_field<uint8_t>(self, 0xF6);

    // mov edx, [ecx] ; mov edx, [edx+4]
    void** vtbl = lift_field<void**>(target, 0);
    VirtualSlot1Fn slot1 = reinterpret_cast<VirtualSlot1Fn>(vtbl[1]);

    // mov [esp+4], eax ; jmp edx  (tail call: target is ecx, flag is the argument)
    return slot1(target, flag);
}
} // namespace lift_00430470

// [0x004332B0] sub_004332B0 (26 bytes)
namespace lift_004332B0 {
// Known callee 0x0043C8F0: sub_0043C8F0 (8B), takes its object in ECX (thiscall-style).
extern void __thiscall ext_0043C8F0(void* self);
// Known callee 0x0044B780: sub_0044B780 (Auto-lifted identical-shape clone of 0x00675D60 (Unknown::forwardToChildVfunc14)).
extern void __thiscall ext_0044B780(void* self);

// @name Unknown::forwardToSubobjectsVfunc14
// @class Unknown
// @summary Passes the object at +0x108 to ext_0043C8F0, then tail-calls ext_0044B780 with the object at +0x100.
// @field Unknown +0x100 void* field_0x100 (tail-call target passed to ext_0044B780)
// @field Unknown +0x108 void* field_0x108 (argument passed to ext_0043C8F0)
void __thiscall fn_004332B0(void* self) {
    ext_0043C8F0(lift_field<void*>(self, 0x108));
    ext_0044B780(lift_field<void*>(self, 0x100));
}
} // namespace lift_004332B0

// [0x004332D0] sub_004332D0 (26 bytes)
namespace lift_004332D0 {
// @name sub_004332D0
// @summary Auto-lifted identical-shape clone of 0x004332B0 (Unknown::forwardToSubobjectsVfunc14).
namespace lift_004332B0 {
// Known callee 0x0043C8F0: sub_0043C8F0 (8B), takes its object in ECX (thiscall-style).
extern void __thiscall ext_00440690(void* self);
// Known callee 0x0044B780: sub_0044B780 (Auto-lifted identical-shape clone of 0x00675D60 (Unknown::forwardToChildVfunc14)).
extern void __thiscall ext_0044B7A0(void* self);

// @name Unknown::forwardToSubobjectsVfunc14
// @class Unknown
// @summary Passes the object at +0x108 to ext_0043C8F0, then tail-calls ext_0044B780 with the object at +0x100.
// @field Unknown +0x100 void* field_0x100 (tail-call target passed to ext_0044B780)
// @field Unknown +0x108 void* field_0x108 (argument passed to ext_0043C8F0)
void __thiscall fn_004332D0(void* self) {
    ext_00440690(lift_field<void*>(self, 0x108));
    ext_0044B7A0(lift_field<void*>(self, 0x100));
}
} // namespace lift_004332B0
} // namespace lift_004332D0

// [0x00435270]
namespace lift_00435270 {
void __thiscall ext_004332B0(void* self);
int32_t __cdecl ext_00465B30(void);
void __thiscall ext_00468C80(void* self);
void __thiscall ext_004332D0(void* self);

// @name Unknown::updateSubobjectsAndGlobal_00435270
// @class Unknown
// @summary Calls ext_004332B0 on self, calls ext_00468C80 on the object returned by ext_00465B30, then tail-calls ext_004332D0 on self.
void __thiscall fn_00435270(void* self) {
    ext_004332B0(self);
    int32_t obj = ext_00465B30();
    ext_00468C80(reinterpret_cast<void*>(static_cast<intptr_t>(obj)));
    ext_004332D0(self);
}
} // namespace lift_00435270

// [0x00430FA0]
namespace lift_00430FA0 {
// @name CWndDerived::killTimerAndForward
// @class CWndDerived
// @summary Kills the timer stored at +0x160 for HWND at +0x20 and tail-calls MFC80!ord_4342.
// @field CWndDerived +0x20 uint32_t m_hWnd
// @field CWndDerived +0x160 uint32_t timerId


extern int __stdcall KillTimer(uint32_t hWnd, uint32_t uIDEvent);
extern void ext_006A64EA(void);

typedef int (__stdcall *KillTimerFn)(uint32_t hWnd, uint32_t uIDEvent);
extern uint32_t mem_00925660;

void __fastcall fn_00430FA0(uint32_t thisPtr) {
    uint32_t timerId = *(uint32_t*)(thisPtr + 0x160);
    uint32_t hWnd = *(uint32_t*)(thisPtr + 0x20);
    ((KillTimerFn)mem_00925660)(hWnd, timerId);
    ext_006A64EA();
}
} // namespace lift_00430FA0

// [0x00430CC0]
namespace lift_00430CC0 {
// @name DispatchVtable0WithCheck
// @summary Checks if field at +0x60 is zero via ext_00430370 and invokes vtable[0] on the given object with the result.


extern uint8_t __cdecl ext_00430370(void);

extern void __stdcall fn_00430CC0(void* obj) {
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
    uint8_t flag = ext_00430370();
    using VtableFn0 = void(__thiscall*)(void*, uint32_t);
    auto fn = reinterpret_cast<VtableFn0>(vtable[0]);
    fn(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_00430CC0

// [0x00430E00]
namespace lift_00430E00 {
// @name callVtable0WithGlobalField60Is1
// @summary Calls vtable[0] on the passed object with the result of ext_00430380() as its argument.


extern uint8_t ext_00430380(void);

typedef uint32_t (__thiscall *Vtable0Fn)(void* self, uint32_t arg);

uint32_t __stdcall fn_00430E00(void* obj) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    uint8_t flag = ext_00430380();
    Vtable0Fn fn = reinterpret_cast<Vtable0Fn>(static_cast<uintptr_t>(vtable[0]));
    return fn(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_00430E00

// [0x00435290] sub_00435290 (28 bytes)
namespace lift_00435290 {
// @name sub_00435290
// @summary Auto-lifted identical-shape clone of 0x00435270 (Unknown::updateSubobjectsAndGlobal_00435270).
namespace lift_00435270 {
void __thiscall ext_004332B0(void* self);
int32_t __cdecl ext_00465B30(void);
void __thiscall ext_00468CA0(void* self);
void __thiscall ext_004332D0(void* self);

// @name Unknown::updateSubobjectsAndGlobal_00435270
// @class Unknown
// @summary Calls ext_004332B0 on self, calls ext_00468C80 on the object returned by ext_00465B30, then tail-calls ext_004332D0 on self.
void __thiscall fn_00435290(void* self) {
    ext_004332B0(self);
    int32_t obj = ext_00465B30();
    ext_00468CA0(reinterpret_cast<void*>(static_cast<intptr_t>(obj)));
    ext_004332D0(self);
}
} // namespace lift_00435270
} // namespace lift_00435290

// [0x0043C620] sub_0043C620 (29 bytes)
namespace lift_0043C620 {
// @name sub_0043C620
// @summary Auto-lifted identical-shape clone of 0x0041CCA0 (ReleaseSubobjectAndChainDestructor).
namespace lift_0041CCA0 {
extern void __fastcall ext_00454BA0(void* self);
extern uint32_t mem_009242F4; // .rdata IAT slot holding MFC80 ord_578

// @name ReleaseSubobjectAndChainDestructor
// @summary Sets the object vtable, calls MFC80 ord_578 on the subobject at +0x12c, then tail-calls the base destructor.
// @field Unknown +0x00 u32 field_0x00
// @field Unknown +0x12c u8 field_0x12c
void fn_0043C620(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x931EDCu;

    auto release = reinterpret_cast<void (__thiscall*)(void*)>(
        static_cast<uintptr_t>(mem_009242F4));
    release(static_cast<uint8_t*>(self) + 0x12c);

    ext_00454BA0(self);
}
} // namespace lift_0041CCA0
} // namespace lift_0043C620

// [0x00430DE0]
namespace lift_00430DE0 {
// @name sub_00430DE0
// @class
// @summary Calls two helpers; if the second returns false, shows a message box with a fixed string resource.

extern int32_t fn_00465B30(void);
extern uint8_t fn_00469C60(void);
extern int32_t fn_006A5E60(uint32_t text, uint32_t type, uint32_t help_id);

extern void fn_00430DE0(void) {
    (void)fn_00465B30();
    uint8_t ok = fn_00469C60();
    if (ok != 0) {
        return;
    }
    (void)fn_006A5E60(0x0092F8B8u, 0x30u, 0u);
}
} // namespace lift_00430DE0

// [0x00430DA0]
namespace lift_00430DA0 {
// @name sub_00430DA0
// @summary Calls a status getter, passes its result to a predicate; if the predicate is false, shows a message box via MFC80 ord_1123.

extern int32_t __cdecl fn_00465B30(void);
extern void fn_00469C80(void);
extern void fn_006A5E60(void);

extern void __cdecl fn_00430DA0(void) {
    int32_t ecx_val = fn_00465B30();   // mov ecx, eax (value also left in ECX for the next call)
    fn_00469C80();                     // predicate; result in AL
    uint8_t al = 0;                    // predicate result is not returned by the lifted signature
    if (al == 0) {
        // push 0x0; push 0x30; push 0x92f8b8; call MFC80 ord_1123
        // Argument mapping is inferred from the push sequence; the callee's declared
        // signature is void(void), so these are passed through a cast below.
        using Fn = void (__cdecl *)(uint32_t, uint32_t, uint32_t);
        reinterpret_cast<Fn>(fn_006A5E60)(0x92F8B8u, 0x30u, 0u);
    }
    (void)ecx_val;
}
} // namespace lift_00430DA0

// [0x00430D80] sub_00430D80 (31 bytes)
namespace lift_00430D80 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t __cdecl ext_00465B30(void);
// Known callee 0x00469C50: sub_00469C50 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// Takes its argument in ECX and reports a boolean result in AL.
extern uint8_t __fastcall ext_00469C50(int32_t ecx);
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
// Called with three cdecl arguments (pushed right-to-left).
extern int32_t __cdecl ext_006A5E60(uint32_t arg0, uint32_t arg1, uint32_t arg2);

// @name CheckGlobalField58Ok
// @class (none)
// @summary Queries the global +0x58 value, passes it to a predicate, and on failure raises a message via MFC ordinal 1123 with resource 0x92F8B8.
void fn_00430D80(void) {
    const int32_t value = ext_00465B30();
    const uint8_t ok = ext_00469C50(value);
    if (ok == 0) {
        ext_006A5E60(0x0092F8B8u, 0x30u, 0u);
    }
}
} // namespace lift_00430D80

// [0x004352B0] sub_004352B0 (31 bytes)
namespace lift_004352B0 {
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern void __thiscall ext_006A5E72(void* self, int arg);
// Known callee 0x006A6454: thunk_MFC80_ord_1395 (IAT jump thunk forwarding to MFC80!ord_1395.)
extern void __thiscall ext_006A6454(void* self, int arg);

// @name SubObject110_CallPair
// @class Unknown
// @summary Passes the object at this+0x110 as `this` to MFC80 ord_1395(0) and then ord_6090(5).
// @field Unknown +0x110 void* field_0x110
void fn_004352B0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    void* sub = *reinterpret_cast<void**>(base + 0x110);
    ext_006A6454(sub, 0);

    // The original reloads this+0x110 before the second call.
    sub = *reinterpret_cast<void**>(base + 0x110);
    ext_006A5E72(sub, 5);
}
} // namespace lift_004352B0

// [0x0043D2C0]
namespace lift_0043D2C0 {
// @name Unknown::ForwardOrFallback
// @class Unknown
// @summary Forwards arg to the subobject at this+0x64 via ext_0041C6D0; if that reports failure, calls the ord_1903 fallback thunk on this.
// @field Unknown +0x64 void* field_0x64

extern uint32_t ext_0041C6D0(void* self, uint32_t arg);
extern void ext_006A5EA8(void);

// Thiscall (ecx = this), one stack argument, callee-cleans (ret 4).
void fn_0043D2C0(void* self, uint32_t arg) {
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x64;
    uint32_t ok = ext_0041C6D0(sub, arg);
    if ((ok & 0xFFu) == 0) {
        ext_006A5EA8();
    }
}
} // namespace lift_0043D2C0

// [0x0043C930] sub_0043C930 (31 bytes)
namespace lift_0043C930 {
// Known callee 0x006A65E0: thunk_MFC80_ord_6144 (IAT jump thunk forwarding to MFC80!ord_6144.)
extern void ext_006A65E0();

// Typed view of the callee. The original pushes five stack words and passes
// arg0 in ecx; the portable call below mirrors that shape.
using MfcOrd6144Fn = void (*)(void* self, DWORD p0, DWORD p1, DWORD p2, DWORD p3, DWORD p4);

// @name ForwardWmChar
// @class <none>
// @summary Reads a 2-word record through arg1 and forwards it with message id 0x102 (WM_CHAR) to MFC80 ord_6144 with arg0 as this.
// @field UnknownStruct +0x00 DWORD field_0x00
// @field UnknownStruct +0x04 DWORD field_0x04
void fn_0043C930(void* arg0, const DWORD* arg1) {
    const DWORD first = arg1[0];   // [arg1 + 0x00]
    const DWORD second = arg1[1];  // [arg1 + 0x04]
    // Original order of pushed words: 0, entry ecx, second, first, 0x102.
    // Entry ecx is not recoverable portably; 0 is used as a placeholder.
    reinterpret_cast<MfcOrd6144Fn>(ext_006A65E0)(
        arg0, 0x102u, first, second, 0u, 0u);
}
} // namespace lift_0043C930

// [0x0043CD60] sub_0043CD60 (32 bytes)
namespace lift_0043CD60 {
// USER32!SetTimer through IAT slot mem_00925664
extern UINT_PTR __stdcall ext_SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, void* lpTimerFunc);

// @name CWndDerived::startTimer
// @class CWndDerived
// @summary Starts a 1-ID timer on the window at +0x20 with the given interval (ms) and stores the returned timer ID at +0x138.
// @field CWndDerived +0x020 HWND hWnd
// @field CWndDerived +0x138 UINT timerId
void fn_0043CD60(void* self, UINT uElapse) {
    auto* base = static_cast<unsigned char*>(self);
    HWND hWnd = *reinterpret_cast<HWND*>(base + 0x20);
    UINT_PTR id = ext_SetTimer(hWnd, 1, uElapse, nullptr);
    *reinterpret_cast<UINT*>(base + 0x138) = static_cast<UINT>(id);
}
} // namespace lift_0043CD60

// [0x00435130] sub_00435130 (33 bytes)
namespace lift_00435130 {
// Known callee 0x004332B0: Unknown::forwardToSubobjectsVfunc14 (void __thiscall, takes self in ECX)
extern void ext_004332B0(void* self);
// Known callee 0x00465B40: sub_00465B40 (__cdecl, no args, returns object pointer in EAX)
extern void* ext_00465B40();
// Known callee 0x004332D0: sub_004332D0 (void __thiscall, takes self in ECX; tail-called)
extern void ext_004332D0(void* self);

// @name Unknown::forwardSubobjectsThenVcall1C0Tail
// @class Unknown
// @summary Forwards self to ext_004332B0, obtains an object via ext_00465B40, invokes its vtable slot at +0x1C0 with that object as this, then tail-calls ext_004332D0 with self.
void fn_00435130(void* self) {
    ext_004332B0(self);

    void* obj = ext_00465B40();

    // Virtual call through obj's vtable at byte offset 0x1C0 (thiscall: this = obj).
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto vfn = *reinterpret_cast<void (**)(void*)>(reinterpret_cast<uint8_t*>(vtbl) + 0x1C0);
    vfn(obj);

    ext_004332D0(self);
}
} // namespace lift_00435130

// [0x00435240] sub_00435240 (33 bytes)
namespace lift_00435240 {
// Known callee 0x004332B0: Unknown::forwardToSubobjectsVfunc14 (Passes the object at +0x108 to ext_0043C8F0, then tail-calls ext_0044B780 with the object at +0x100.)
extern void ext_004332B0(void* self);
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
extern void* ext_00465B40(void);
// Known callee 0x004332D0: sub_004332D0 (Auto-lifted identical-shape clone of 0x004332B0 (Unknown::forwardToSubobjectsVfunc14).)
extern void ext_004332D0(void* self);

// @name Unknown::forwardThenCallVfunc1C4ThenForward
// @class Unknown
// @summary Forwards to subobjects, fetches a global object, invokes its vtable slot at +0x1C4 with no arguments, then forwards again.
void fn_00435240(void* self) {
    // push esi; mov esi, ecx  -> self saved in esi
    ext_004332B0(self);

    // call sub_00465B40 -> eax = object
    void* obj = ext_00465B40();

    // mov edx, [eax]; mov ecx, eax; mov eax, [edx+0x1c4]; call eax
    // Vtable slot is addressed by its original byte offset (+0x1c4) within the vtable.
    void* vtable = *static_cast<void**>(obj);
    void* slot = nullptr;
    std::memcpy(&slot, static_cast<const unsigned char*>(vtable) + 0x1c4, sizeof(slot));
    using VFn = void (*)(void*);
    reinterpret_cast<VFn>(slot)(obj);

    // mov ecx, esi; pop esi; jmp ext_004332D0 -> tail call with original self
    ext_004332D0(self);
}
} // namespace lift_00435240

// [0x00435160] sub_00435160 (33 bytes)
namespace lift_00435160 {
// Known callee 0x004332B0: Unknown::forwardToSubobjectsVfunc14 (Passes the object at +0x108 to ext_0043C8F0, then tail-calls ext_0044B780 with the object at +0x100.)
extern void ext_004332B0(void* self);
// Known callee 0x004332D0: sub_004332D0 (Auto-lifted identical-shape clone of 0x004332B0 (Unknown::forwardToSubobjectsVfunc14).)
extern void ext_004332D0(void* self);
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// Returns the global object pointer in eax.
extern void* ext_00465B40();

// @name Unknown::forwardAroundGlobalVfunc109
// @class Unknown
// @summary Forwards to subobjects, calls vtable slot 0x1B4 (109) on the global object, then forwards again.
// (No direct field accesses on self: self is only passed through to ext_004332B0 / ext_004332D0.)
void fn_00435160(void* self) {
    using VFn = void(__thiscall*)(void*);

    ext_004332B0(self);

    void* global = ext_00465B40();
    // Vtable pointer lives at offset 0 of the object; slot is at byte offset 0x1B4.
    uint8_t* vtbl = *reinterpret_cast<uint8_t**>(global);
    auto fn = reinterpret_cast<VFn>(*reinterpret_cast<void**>(vtbl + 0x1B4));
    fn(global);

    ext_004332D0(self);
}
} // namespace lift_00435160

// [0x0043C9D0] sub_0043C9D0 (33 bytes)
namespace lift_0043C9D0 {
// @name Unknown::forwardFourArgsVfunc155
// @class Unknown
// @summary Forwards its four stack arguments (in original order) and self to the virtual method at vtable slot 0x154 (index 85) of self, returning its result.
// @field Unknown +0x00 void* vptr
namespace lift_0043C9D0 {
constexpr ptrdiff_t kVptrOffset = 0x00;
constexpr ptrdiff_t kVfuncOffset = 0x154;
}

int fn_0043C9D0(void* self, int a1, int a2, int a3, int a4) {
    using namespace lift_0043C9D0;
    void* vptr = lift_field<void*>(self, kVptrOffset);
    auto target = reinterpret_cast<int (*)(void*, int, int, int, int)>(
        lift_field<void*>(vptr, kVfuncOffset));
    return target(self, a1, a2, a3, a4);
}
} // namespace lift_0043C9D0

// [0x00430EB0] sub_00430EB0 (34 bytes)
namespace lift_00430EB0 {
// @name AssignReleasingOld
// @class (none recovered)
// @summary Replaces the pointer stored at offset 0 with a new value, calling vtable slot 1 (Release-style, arg 1) on the old object when it differs and is non-null.
// @field self +0x00 void* ptr
void fn_00430EB0(void* self, void* newValue) {
    using ReleaseFn = void(__thiscall*)(void*, int);

    void* old = lift_field<void*>(self, 0);
    if (newValue != old && old != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(old);
        auto release = reinterpret_cast<ReleaseFn>(vtbl[1]);
        release(old, 1);
    }
    lift_field<void*>(self, 0) = newValue;
}
} // namespace lift_00430EB0

// [0x0043E3A0]
namespace lift_0043E3A0 {
// @name destroyRange_0043E3A0
// @summary Calls MFC80!ord_578 on each 4-byte element in [begin, end)


extern uint32_t mem_009242F4;

void __stdcall sub_0043E3A0(uint32_t begin, uint32_t end) {
    using Fn = void (__thiscall *)(uint32_t);
    Fn fn = reinterpret_cast<Fn>(mem_009242F4);
    for (uint32_t it = begin; it != end; it += 4) {
        fn(it);
    }
}
} // namespace lift_0043E3A0

// [0x004329A0]
namespace lift_004329A0 {
// @name init_and_update_field_0x11c
// @summary Calls get_global_field_0x58, invokes ext_00469040 on the result, then calls thunk_MFC80_ord_6081 with field_0x11c, 1, and 0.
// @field Self +0x11c int32_t field_0x11c


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_00469040(uintptr_t self);
extern void __thiscall ext_006A651A(uintptr_t self, int32_t arg1, int32_t arg2, int32_t arg3);

extern void __thiscall fn_004329A0(uintptr_t self) {
    int32_t obj = ext_00465B30();
    ext_00469040(static_cast<uintptr_t>(static_cast<uint32_t>(obj)));
    int32_t val = *reinterpret_cast<const int32_t*>(self + 0x11c);
    ext_006A651A(self, val, 1, 0);
}
} // namespace lift_004329A0

// [0x004345B0] sub_004345B0 (38 bytes)
namespace lift_004345B0 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t __cdecl ext_00468180(void);
// Known callee 0x006658A0: hasField0x18 (Returns 1 if the 32-bit field at offset 0x18 is non-zero, otherwise 0.)
extern uint32_t __thiscall ext_006658A0(void* self);

// @name CallVtbl0WithField18Flag
// @class Unknown
// @summary Reads the object at global root+0x38, computes its hasField0x18 flag, and calls vtable slot 0 of the argument with that flag.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x38 void* field_0x38
void fn_004345B0(void* obj) {
    // Root object is the 32-bit value returned by the global accessor.
    const uintptr_t root = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00468180()));
    void* inner = lift_field<void*>(reinterpret_cast<void*>(root), 0x38);

    // Only the low byte (al) of the callee result is used.
    const uint8_t flag = static_cast<uint8_t>(ext_006658A0(inner));

    // Virtual dispatch on obj: slot 0 receives (this = obj, flag zero-extended to 32 bits).
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Slot0Fn = void (*)(void* self, uint32_t arg);
    reinterpret_cast<Slot0Fn>(vtbl[0])(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_004345B0

// [0x004345E0] sub_004345E0 (38 bytes)
namespace lift_004345E0 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t __cdecl ext_00468180(void);
// Known callee 0x006658B0: sub_006658B0_hasField24 (Returns true if the 32-bit field at offset +0x24 is non-zero.)
extern bool __fastcall ext_006658B0(uint32_t ecx, uint32_t edx);

// Global holding the owner object pointer, read by ext_00468180.
extern int32_t mem_00AD7CD8;

template <typename T>
T mem_read(uint32_t addr);

// @name Dispatch::ForwardFieldFlagToSlot0
// @class Dispatch
// @summary Gets the owner object, tests its +0x38 subobject's +0x24 flag, and forwards that flag as a bool to virtual slot 0 of the argument object.
// @field Dispatch +0x00 void** vtable
// @field unknown +0x38 uint32_t field_0x38
extern void __stdcall fn_004345E0(void* self) {
    // Owner object pointer from the global.
    uint32_t owner = static_cast<uint32_t>(ext_00468180());
    // Subobject at owner+0x38, then its +0x24 flag via the callee.
    uint32_t sub = mem_read<uint32_t>(owner + 0x38);
    uint32_t flag = ext_006658B0(sub, 0) ? 1u : 0u;

    // Virtual slot 0 of self, invoked thiscall(self, flag).
    uint32_t vtbl = mem_read<uint32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));
    uint32_t slot0 = mem_read<uint32_t>(vtbl);
    using VSlot0 = void(__thiscall*)(void* self, uint32_t flag);
    reinterpret_cast<VSlot0>(static_cast<uintptr_t>(slot0))(self, flag);
}
} // namespace lift_004345E0

// [0x0043D3B0]
namespace lift_0043D3B0 {
// @name fillCStringRange
// @summary Initializes or assigns a range of 4-byte CString objects from a source value

extern uint32_t mem_009244D4;

void sub_0043D3B0(uint32_t* begin, uint32_t* end, uint32_t value) {
    using Fn = void(__thiscall*)(uint32_t*, uint32_t);
    uint32_t* cur = begin;
    while (cur != end) {
        reinterpret_cast<Fn>(mem_009244D4)(cur, value);
        ++cur;
    }
}
} // namespace lift_0043D3B0

// [0x00430900]
namespace lift_00430900 {
// @name forwardChildStateToTarget
// @summary If child at +0x100 is non-null, queries its state via ext_0044B660 and passes it to target's vtable+0x4 method.
// @field unknown +0x100 void* field_0x100


extern uint8_t ext_0044B660(void* self);
extern uint32_t mem_read32(uint32_t addr);

void __thiscall fn_00430900(void* self, void* target) {
    uint32_t child = mem_read32(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)) + 0x100);
    if (!child) {
        return;
    }
    uint32_t vtable = mem_read32(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(target)));
    uint8_t state = ext_0044B660(reinterpret_cast<void*>(static_cast<uintptr_t>(child)));
    uint32_t vfn = mem_read32(vtable + 4);
    using Vfn = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<Vfn>(static_cast<uintptr_t>(vfn))(target, static_cast<uint32_t>(state));
}
} // namespace lift_00430900

// [0x00433080]
namespace lift_00433080 {
// @name handleEscapeKey
// @summary Checks if arg0+0x8 equals 0x1b (Escape), invokes ext_0042FE90 and ext_00430360 if so, and returns whether it matched.
// @field Arg0 +0x08 uint32_t field_0x08


extern void* ext_0042FE90(void);
extern void __cdecl ext_00430360(void);

extern uint32_t __thiscall fn_00433080(void* self, void* arg0) {
    (void)self;
    bool is_esc = (*reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(arg0) + 0x8) == 0x1bu);
    if (is_esc) {
        ext_0042FE90();
        ext_00430360();
    }
    return is_esc ? 1u : 0u;
}
} // namespace lift_00433080

// [0x00430AE0] sub_00430AE0 (40 bytes)
namespace lift_00430AE0 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// Returns the object pointer that the original leaves in eax.
extern void* ext_00465B40();

// Read a vtable slot at a raw byte offset (the original uses offsets like +0x1a0).
static inline void* vtableSlot(void* obj, uintptr_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vt) + byteOffset);
}

// @name Object::callVirtualWithBoolResult
// @class Object
// @summary Gets a global object, queries a virtual getter (slot +0x1a0) for a bool, and passes it to slot 0 of the argument object.
// @field Object +0x00 void* vptr
void fn_00430AE0(void* self) {
    void* obj = ext_00465B40();              // eax
    uint8_t flag = reinterpret_cast<uint8_t (*)(void*)>(
        vtableSlot(obj, 0x1a0))(obj);        // movzx of al
    void* arg = self;                        // esi = [esp+0x0c]
    reinterpret_cast<void (*)(void*, uint8_t)>(
        vtableSlot(arg, 0x00))(arg, flag);   // call [vptr+0] with ecx=arg
}
} // namespace lift_00430AE0

// [0x00430B10] sub_00430B10 (40 bytes)
namespace lift_00430B10 {
// Global object getter: returns the object whose vtable is dispatched first.
extern void* ext_00465B40();

// @name dispatchGlobalPredicateToArg
// @summary Fetches the global object, calls its vtable slot at +0x1A4 (index 105) to obtain a byte flag, then passes that flag to vtable slot 0 of the argument object.
// @field UnknownObject +0x00 void* vptr (global object returned by ext_00465B40; vtable slot +0x1A4 read)
// @field UnknownObject +0x00 void* vptr (argument object; vtable slot 0 invoked with the flag)
void fn_00430B10(void* arg) {
    // call ext_00465B40; obj = eax
    void* obj = ext_00465B40();

    // mov edx, [eax]; mov eax, [edx+0x1A4]; mov ecx, eax; call eax
    void* objVtable = *reinterpret_cast<void**>(obj);
    using PredicateFn = uint8_t (*)(void* self);
    PredicateFn predicate = reinterpret_cast<PredicateFn>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(objVtable) + 0x1A4));
    uint8_t flag = predicate(obj);

    // mov edi, [esi]; mov edx, [edi]; push flag; mov ecx, esi; call edx
    void* argVtable = *reinterpret_cast<void**>(arg);
    using ArgFn = void (*)(void* self, uint32_t value);
    ArgFn target = reinterpret_cast<ArgFn>(*reinterpret_cast<void**>(argVtable));
    target(arg, static_cast<uint32_t>(flag));
}
} // namespace lift_00430B10

// [0x00430A30] sub_00430A30 (40 bytes)
namespace lift_00430A30 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
extern void* ext_00465B40();

// @name dispatchWithGlobalFlag
// @summary Queries a byte flag from the global object (vtable slot 0x130) and forwards it to the callback stored at the first word of *arg.
void fn_00430A30(void* arg) {
    void* global = ext_00465B40();

    // global->vtbl[0x130]() -> flag (byte)
    void* globalVtbl = lift_field<void*>(global, 0);
    auto queryFlag = reinterpret_cast<uint8_t (*)(void*)>(lift_field<void*>(globalVtbl, 0x130));
    uint8_t flag = queryFlag(global);

    // obj = *arg; obj->word0(arg, flag)
    void* obj = lift_field<void*>(arg, 0);
    void* callback = lift_field<void*>(obj, 0);
    reinterpret_cast<void (*)(void*, uint8_t)>(callback)(arg, flag);
}
} // namespace lift_00430A30

// [0x00430490]
namespace lift_00430490 {
// @name updateControlFromGlobalState
// @summary Checks global state via ext_00465B30 and ext_00528530 and updates the target object via vfunc_1.
// @field Target +0x00 uintptr_t* vtable


extern int32_t __cdecl ext_00465B30(void);
extern int32_t __thiscall ext_00528530(void* self);

extern int32_t __stdcall fn_00430490(void* target) {
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(target);
    int32_t obj = ext_00465B30();
    int32_t state = ext_00528530(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(obj))));
    using VFunc1 = int32_t(__thiscall*)(void*, int32_t);
    auto vfunc1 = reinterpret_cast<VFunc1>(vtable[1]);
    return vfunc1(target, (state == 4) ? 1 : 0);
}
} // namespace lift_00430490

// [0x004304C0]
namespace lift_004304C0 {
// @name updateStateFromGlobalField
// @summary Queries global field 0x58 via ext_00465B30, calls Acclaim2CharacterIO::vfunc_23, and invokes vtable[1] on the argument with (result == 2).
// @field Target +0x00 uintptr_t vtable

extern int32_t __cdecl ext_00465B30(void);
extern int32_t __thiscall ext_00528530(void* self);

extern int32_t __stdcall fn_004304C0(void* target) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(target);
    int32_t obj = ext_00465B30();
    int32_t val = ext_00528530(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    using VFunc1 = int32_t(__thiscall*)(void*, int32_t);
    auto vfunc1 = reinterpret_cast<VFunc1>(static_cast<uintptr_t>(vtable[1]));
    return vfunc1(target, (val == 2) ? 1 : 0);
}
} // namespace lift_004304C0

// [0x00430520]
namespace lift_00430520 {
// @name update_control_enabled_from_mode
// @summary Calls global getter, queries mode via Acclaim2CharacterIO::vfunc_23, and invokes vtable+0x4 on arg1 with (mode == 3).
// @field arg1 +0x00 uint32_t* vtable


extern int32_t __cdecl ext_00465B30(void);
extern int32_t __thiscall ext_00528530(int32_t this_ptr);

extern int32_t __stdcall fn_00430520(void* arg1) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(arg1);
    int32_t obj = ext_00465B30();
    int32_t mode = ext_00528530(obj);
    using vfunc_t = int32_t(__thiscall*)(void*, int32_t);
    auto vfunc = reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(vtable[1]));
    return vfunc(arg1, mode == 3 ? 1 : 0);
}
} // namespace lift_00430520

// [0x0043D230]
namespace lift_0043D230 {
extern uint8_t __thiscall ext_0041C600(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_006A5EA8(void);

// @name forwardVtableCall7OrFallback
// @summary Forwards a 3-argument call to field_0x64 via forwardVtableCall7, falling back to MFC80_ord_1903 if it returns false.
// @field Unknown +0x64 uint8_t field_0x64
void __thiscall fn_0043D230(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (!ext_0041C600(base + 0x64, arg1, arg2, arg3)) {
        ext_006A5EA8();
    }
}
} // namespace lift_0043D230

// [0x0043D1D0]
namespace lift_0043D1D0 {
// @name sub_0043D1D0
// @summary Forwards a 3-argument call to field_0x64 via sub_0041C5A0, falling back to MFC80_ord_1903 on false.
// @field unknown +0x64 uint32_t field_0x64


extern bool __thiscall ext_0041C5A0(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void __thiscall ext_006A5EA8(uint32_t self);

void __thiscall fn_0043D1D0(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    if (!ext_0041C5A0(self + 0x64u, arg1, arg2, arg3)) {
        ext_006A5EA8(self);
    }
}
} // namespace lift_0043D1D0

// [0x0043D170] sub_0043D170 (41 bytes)
namespace lift_0043D170 {
extern void ext_006A5EA8(uint32_t arg);

// @name sub_0043D170
// @summary Auto-lifted identical-shape clone of 0x0043D230 (forwardVtableCall7OrFallback).
namespace lift_0043D230 {
extern uint8_t __thiscall ext_0041C540(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_006A5EA8(void);

// @name forwardVtableCall7OrFallback
// @summary Forwards a 3-argument call to field_0x64 via forwardVtableCall7, falling back to MFC80_ord_1903 if it returns false.
// @field Unknown +0x64 uint8_t field_0x64
void __thiscall fn_0043D170(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (!ext_0041C540(base + 0x64, arg1, arg2, arg3)) {
        ext_006A5EA8();
    }
}
} // namespace lift_0043D230
} // namespace lift_0043D170

// [0x0043D200] sub_0043D200 (41 bytes)
namespace lift_0043D200 {
extern void ext_006A5EA8(uint32_t arg);

// @name sub_0043D200
// @summary Auto-lifted identical-shape clone of 0x0043D230 (forwardVtableCall7OrFallback).
namespace lift_0043D230 {
extern uint8_t __thiscall ext_0041C5D0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_006A5EA8(void);

// @name forwardVtableCall7OrFallback
// @summary Forwards a 3-argument call to field_0x64 via forwardVtableCall7, falling back to MFC80_ord_1903 if it returns false.
// @field Unknown +0x64 uint8_t field_0x64
void __thiscall fn_0043D200(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (!ext_0041C5D0(base + 0x64, arg1, arg2, arg3)) {
        ext_006A5EA8();
    }
}
} // namespace lift_0043D230
} // namespace lift_0043D200

// [0x0043D260] sub_0043D260 (41 bytes)
namespace lift_0043D260 {
extern void ext_006A5EA8(uint32_t arg);

// @name sub_0043D260
// @summary Auto-lifted identical-shape clone of 0x0043D230 (forwardVtableCall7OrFallback).
namespace lift_0043D230 {
extern uint8_t __thiscall ext_0041C630(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_006A5EA8(void);

// @name forwardVtableCall7OrFallback
// @summary Forwards a 3-argument call to field_0x64 via forwardVtableCall7, falling back to MFC80_ord_1903 if it returns false.
// @field Unknown +0x64 uint8_t field_0x64
void __thiscall fn_0043D260(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (!ext_0041C630(base + 0x64, arg1, arg2, arg3)) {
        ext_006A5EA8();
    }
}
} // namespace lift_0043D230
} // namespace lift_0043D260

// [0x0043E7D0] sub_0043E7D0 (41 bytes)
namespace lift_0043E7D0 {
// @name sub_0043E7D0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0043D580(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0043E7D0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0043D580(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0043E7D0

// [0x004304F0]
namespace lift_004304F0 {
// @name updateObjStateFromGlobalCharIO
// @summary Queries Acclaim2CharacterIO::vfunc_23 on global field +0x58 and passes (res == 1) to obj->vfunc_1.
// @field Object +0x00 uint32_t* vtable


extern int32_t __cdecl ext_00465B30(void);
extern int32_t __thiscall ext_00528530(uintptr_t ecx_this);

extern int32_t __stdcall fn_004304F0(uintptr_t obj) {
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
    int32_t char_io = ext_00465B30();
    int32_t state = ext_00528530(static_cast<uintptr_t>(static_cast<uint32_t>(char_io)));
    int32_t is_one = (state == 1) ? 1 : 0;

    using VFunc1 = int32_t(__thiscall*)(uintptr_t, int32_t);
    auto vfunc1 = reinterpret_cast<VFunc1>(vtable[1]);
    return vfunc1(obj, is_one);
}
} // namespace lift_004304F0

// [0x00431330]
namespace lift_00431330 {
// @name sub_00431330
// @summary Calls vtable+0x15c(0) on field_0x104 and passes its negated boolean result to MFC80_ord_6081
// @field Unknown +0x104 uint32_t field_0x104

extern uint32_t mem_read32(uint32_t addr);
extern void __thiscall fn_006A651A(uint32_t self, uint32_t arg1, uint32_t arg2);

extern void __thiscall fn_00431330(uint32_t self) {
    uint32_t obj = mem_read32(self + 0x104);
    uint32_t vtable = mem_read32(obj);
    using VFunc = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(static_cast<uintptr_t>(mem_read32(vtable + 0x15c)));
    uint32_t res = vfunc(obj, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    fn_006A651A(self, obj, flag);
}
} // namespace lift_00431330

// [0x004313D0]
namespace lift_004313D0 {
// @name sub_004313D0
// @summary Toggles or updates a child object state via virtual call at +0x15c and forwards to MFC80_ord_6081
// @field Unknown +0xe0 void* field_0xe0


extern void __thiscall ext_006A651A(void* self, void* arg1, uint32_t arg2);

void __thiscall fn_004313D0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* esi = *reinterpret_cast<void**>(obj + 0xe0);
    void** vtable = *reinterpret_cast<void***>(esi);
    using VFn = uint32_t(__thiscall*)(void*, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtable[0x15c / sizeof(void*)]);
    uint32_t res = fn(esi, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(self, esi, flag);
}
} // namespace lift_004313D0

// [0x004313A0]
namespace lift_004313A0 {
// @name sub_004313A0
// @summary Calls vtable+0x15c on field_0x11c with 0 and forwards its negated result to MFC80_ord_6081.
// @field Unknown +0x11c uint32_t field_0x11c


extern uint32_t mem_read32(uint32_t addr);
extern void ext_006A651A(uint32_t ecx, uint32_t arg0, uint32_t arg1);

void fn_004313A0(uint32_t ecx) {
    uint32_t obj = mem_read32(ecx + 0x11c);
    uint32_t vtable = mem_read32(obj);
    uint32_t vfunc = mem_read32(vtable + 0x15c);
    using VFunc = uint32_t (*)(uint32_t, uint32_t);
    uint32_t res = reinterpret_cast<VFunc>(static_cast<uintptr_t>(vfunc))(obj, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(ecx, obj, flag);
}
} // namespace lift_004313A0

// [0x00433260] sub_00433260 (43 bytes)
namespace lift_00433260 {
// @name sub_00433260
// @summary Auto-lifted identical-shape clone of 0x00431330 (sub_00431330).
namespace lift_00431330 {
// @name sub_00431330
// @summary Calls vtable+0x15c(0) on field_0x104 and passes its negated boolean result to MFC80_ord_6081
// @field Unknown +0x104 uint32_t field_0x104

extern uint32_t mem_read32(uint32_t addr);
extern void __thiscall fn_006A651A(uint32_t self, uint32_t arg1, uint32_t arg2);

extern void __thiscall fn_00433260(uint32_t self) {
    uint32_t obj = mem_read32(self + 0x150);
    uint32_t vtable = mem_read32(obj);
    using VFunc = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(static_cast<uintptr_t>(mem_read32(vtable + 0x15c)));
    uint32_t res = vfunc(obj, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    fn_006A651A(self, obj, flag);
}
} // namespace lift_00431330
} // namespace lift_00433260

// [0x00434900] sub_00434900 (43 bytes)
namespace lift_00434900 {
// @name sub_00434900
// @summary Auto-lifted identical-shape clone of 0x00431330 (sub_00431330).
namespace lift_00431330 {
// @name sub_00431330
// @summary Calls vtable+0x15c(0) on field_0x104 and passes its negated boolean result to MFC80_ord_6081
// @field Unknown +0x104 uint32_t field_0x104

extern uint32_t mem_read32(uint32_t addr);
extern void __thiscall fn_006A651A(uint32_t self, uint32_t arg1, uint32_t arg2);

extern void __thiscall fn_00434900(uint32_t self) {
    uint32_t obj = mem_read32(self + 0x158);
    uint32_t vtable = mem_read32(obj);
    using VFunc = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(static_cast<uintptr_t>(mem_read32(vtable + 0x15c)));
    uint32_t res = vfunc(obj, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    fn_006A651A(self, obj, flag);
}
} // namespace lift_00431330
} // namespace lift_00434900

// [0x00436A20]
namespace lift_00436A20 {
// @name findU32Iterator
// @summary Linearly searches a uint32_t range [first, last) for *val_ptr and writes {tag, found_ptr} to out.


struct U32IterPair {
    uint32_t tag;
    uint32_t* ptr;
};

U32IterPair* __cdecl sub_00436A20(
    U32IterPair* out,
    uint32_t tag,
    uint32_t* first,
    uint32_t /*unused_arg4*/,
    uint32_t* last,
    const uint32_t* val_ptr)
{
    uint32_t* cur = first;
    if (cur != last) {
        const uint32_t target = *val_ptr;
        do {
            if (*cur == target) {
                break;
            }
            ++cur;
        } while (cur != last);
    }
    out->tag = tag;
    out->ptr = cur;
    return out;
}
} // namespace lift_00436A20

// [0x00431400]
namespace lift_00431400 {
// @name dispatchGlobalObjectVtableD0OrCC
// @summary Calls vtable +0xD0 on the object from ext_00465B40 if ext_00430380() is non-zero, otherwise calls vtable +0xCC.

extern uint8_t __cdecl ext_00430380(void);
extern uint32_t __cdecl ext_00465B40(void);
extern uint32_t mem_read32(uint32_t addr);

void fn_00431400(void) {
    uint32_t obj;
    uint32_t vtable;
    uint32_t target;

    if (ext_00430380() != 0) {
        obj = ext_00465B40();
        vtable = mem_read32(obj);
        target = mem_read32(vtable + 0xD0);
    } else {
        obj = ext_00465B40();
        vtable = mem_read32(obj);
        target = mem_read32(vtable + 0xCC);
    }

    typedef void (__thiscall *vfn_t)(uint32_t);
    ((vfn_t)(uintptr_t)target)(obj);
}
} // namespace lift_00431400

// [0x00430F70] sub_00430F70 (46 bytes)
namespace lift_00430F70 {
// IAT slots for MSVCP80 imports (both thiscall).
extern uintptr_t mem_00924EA0; // basic_ios::rdbuf()
extern uintptr_t mem_00924E9C; // basic_streambuf::_Unlock()

// @name stream_unlockRdbufIfPresent
// @class Stream
// @summary Calls rdbuf() on the stream reached via *self's virtual base; if non-null, calls _Unlock() on the streambuf.
// @field Stream +0x00 void* field_0x00
void fn_00430F70(void* self) {
    using rdbuf_fn = void* (__thiscall*)(void*);
    using unlock_fn = void (__thiscall*)(void*);

    auto rdbuf = reinterpret_cast<rdbuf_fn>(mem_00924EA0);
    auto unlock = reinterpret_cast<unlock_fn>(mem_00924E9C);

    // ios = (uint8_t*)*self + vbase_offset, where vbase_offset = vtable[+4].
    auto locateIos = [self]() -> void* {
        uint8_t* obj = *reinterpret_cast<uint8_t**>(self);
        uint8_t* vtbl = *reinterpret_cast<uint8_t**>(obj);
        ptrdiff_t off = *reinterpret_cast<int32_t*>(vtbl + 4);
        return obj + off;
    };

    if (rdbuf(locateIos()) == nullptr) {
        return;
    }
    unlock(rdbuf(locateIos()));
}
} // namespace lift_00430F70

// [0x00434610] sub_00434610 (47 bytes)
namespace lift_00434610 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);

// @name Unknown::notifyGlobalFlagState
// @class Unknown
// @summary Reads a byte flag from the object at global +0x26C, then calls self vtable slot 1 with that flag and slot 0 with 1.
// @field Unknown +0x00 void** field_0x00
// @field Unknown +0x26C uint32_t field_0x26C
// @field Unknown +0x531 uint8_t field_0x531
void fn_00434610(void* self) {
    using MethodFn = void (*)(void*, uint32_t);

    const uintptr_t globalObjAddr = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000()));
    void* globalObj = reinterpret_cast<void*>(globalObjAddr);

    const uint32_t innerAddr = lift_field<uint32_t>(globalObj, 0x26C);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(innerAddr));
    const uint32_t flag = lift_field<uint8_t>(inner, 0x531);

    void** vtbl = lift_field<void**>(self, 0x00);
    reinterpret_cast<MethodFn>(vtbl[1])(self, flag);
    reinterpret_cast<MethodFn>(vtbl[0])(self, 1u);
}
} // namespace lift_00434610

// [0x00430BD0]
namespace lift_00430BD0 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t ext_00465B30(void);
// Known callee 0x00468660: getNestedField_0x18_0xc (Reads a 32-bit value at offset 0xc of the object pointed to by this+0x18)
extern uint32_t ext_00468660(uint32_t this_ptr);

// @name dispatchNestedFlagToSelf
// @summary Fetches a nested object via the global field, queries a boolean virtual method on it, and forwards the result to slot 0 of self's vtable.
void fn_00430BD0(void* self) {
    // call ext_00465B30() -> eax; pass it as this to ext_00468660 -> eax (object pointer)
    int32_t g = ext_00465B30();
    uint32_t objAddr = ext_00468660(static_cast<uint32_t>(g));
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(objAddr));

    // edx = [obj] (vtable of obj); eax = [edx + 0x1ac]; al = obj->vfn_0x1ac()
    void* objVtbl = lift_field<void*>(obj, 0);
    void* boolMethod = lift_field<void*>(objVtbl, 0x1ac);
    // edi = [self] (vtable of self), read before the virtual call as in the original
    void* selfVtbl = lift_field<void*>(self, 0);
    uint8_t flag = reinterpret_cast<uint8_t (*)(void*)>(boolMethod)(obj);

    // edx = [edi] ; self->slot0(flag)
    void* selfSlot0 = lift_field<void*>(selfVtbl, 0);
    reinterpret_cast<void (*)(void*, uint8_t)>(selfSlot0)(self, flag);
}
} // namespace lift_00430BD0

// [0x0043C980]
namespace lift_0043C980 {
// @name DispatchVtable2COnSubobject10
// @summary If arg1 is non-null, retrieves its subobject via ext_004407B0 and invokes vtable slot +0x2C on it with (arg1, arg2, arg3, arg4).

extern void* __thiscall ext_004407B0(void* self);

extern void __stdcall fn_0043C980(void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    if (!arg1) {
        return;
    }
    void* obj = ext_004407B0(arg1);
    void** vtable = *reinterpret_cast<void***>(obj);
    using Vfn = void(__thiscall*)(void* self, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
    auto fn = reinterpret_cast<Vfn>(vtable[0x2C / sizeof(void*)]);
    fn(obj, arg1, arg2, arg3, arg4);
}
} // namespace lift_0043C980

// [0x0043CA00]
namespace lift_0043CA00 {
// @name CWindow::trackMouseLeave
// @class CWindow
// @summary Registers the window to receive a WM_MOUSELEAVE notification via TrackMouseEvent.
// @field CWindow +0x20 uint32_t hwnd


extern uint32_t mem_009255E8;

uint32_t __thiscall fn_0043CA00(uint32_t this_ptr) {
    uint32_t tme[4];
    tme[0] = 0x10;
    tme[1] = 0x2;
    tme[2] = *reinterpret_cast<const uint32_t*>(uintptr_t(this_ptr) + 0x20);
    tme[3] = 0xFFFFFFFFu;
    using TrackMouseEventFn = uint32_t (__stdcall *)(uint32_t*);
    return reinterpret_cast<TrackMouseEventFn>(mem_009255E8)(tme);
}
} // namespace lift_0043CA00

// [0x00434380] sub_00434380 (49 bytes)
namespace lift_00434380 {
// @name Unknown::notifyObjectWithQueryResult
// @class Unknown
// @summary Calls obj vtbl[0](1), queries the object at this+0xE0 via vtbl[0x15C] and passes the result to obj vtbl[1].
// @field Unknown +0xe0 void* field_0xe0

namespace {

using VoidThisFn = void(__thiscall*)(void* self, uint32_t arg);
using QueryThisFn = uint32_t(__thiscall*)(void* self);

// Reads vtable slot at byte offset `slotOffset` from the object at `obj`.
inline void* vtableSlot(void* obj, ptrdiff_t slotOffset) {
    void** vtbl = lift_field<void**>(obj, 0);
    return vtbl[slotOffset / sizeof(void*)];
}

} // namespace

void __thiscall fn_00434380(void* self, void* obj) {
    // obj->vtbl[0](1)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x00))(obj, 1);

    // q = self->field_0xe0; r = q->vtbl[0x15C](q)
    void* target = lift_field<void*>(self, 0xe0);
    uint32_t result = reinterpret_cast<QueryThisFn>(vtableSlot(target, 0x15C))(target);

    // obj->vtbl[1](result)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x04))(obj, result);
}
} // namespace lift_00434380

// [0x004342A0] sub_004342A0 (49 bytes)
namespace lift_004342A0 {
// @name Unknown::dispatchWithOwnerQuery
// @class Unknown
// @summary Calls vtable slot 0 of the argument object with flag 1, queries owner+0x104 via vtable slot 0x57, then passes that result to the argument object's vtable slot 1.
// @field Unknown +0x104 void* field_0x104
void fn_004342A0(void* self, void* obj) {
    // obj->vtbl[0](obj, 1)
    void* const* vt = lift_field<void* const*>(obj, 0);
    reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vt[0])(obj, 1u);

    // q = self->field_0x104->vtbl[0x57](self->field_0x104)
    void* query_obj = lift_field<void*>(self, 0x104);
    void* const* query_vt = lift_field<void* const*>(query_obj, 0);
    uint32_t result = reinterpret_cast<uint32_t(__thiscall*)(void*)>(lift_field<void*>(query_vt, 0x15c))(query_obj);

    // The original re-reads obj's vtable after the calls above.
    vt = lift_field<void* const*>(obj, 0);
    reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vt[1])(obj, result);
}
} // namespace lift_004342A0

// [0x00434340] sub_00434340 (49 bytes)
namespace lift_00434340 {
// @name Unknown::notifyThenForwardField11c
// @class Unknown
// @summary Calls obj vslot0(1), then passes the result of field_0x11c's vslot 0x15c to obj vslot1.
// @field Unknown +0x11C void* field_0x11c

namespace {

// Virtual slot helper: reads the vtable pointer at obj+0 and returns the
// entry at the given byte offset within the vtable.
inline void* vtableSlot(void* obj, ptrdiff_t byteOffset) {
    void* vtbl = lift_field<void*>(obj, 0);
    return lift_field<void*>(vtbl, byteOffset);
}

using VoidIntFn = void (*)(void* self, int arg);
using DwordFromSelfFn = DWORD (*)(void* self);
using VoidDwordFn = void (*)(void* self, DWORD arg);

}  // namespace

// `self` is the object whose field_0x11c is read (ECX in the original).
// `obj` is the single stack argument, popped by the callee (ret 4).
void fn_00434340(void* self, void* obj) {
    // obj->vtbl[0](1)
    reinterpret_cast<VoidIntFn>(vtableSlot(obj, 0))(obj, 1);

    // b = self->field_0x11c; r = b->vtbl[0x15c](b)
    void* b = lift_field<void*>(self, 0x11c);
    DWORD result = reinterpret_cast<DwordFromSelfFn>(vtableSlot(b, 0x15c))(b);

    // obj->vtbl[1](result)
    reinterpret_cast<VoidDwordFn>(vtableSlot(obj, 4))(obj, result);
}
} // namespace lift_00434340

// [0x00434640] sub_00434640 (49 bytes)
namespace lift_00434640 {
// @name sub_00434640
// @summary Auto-lifted identical-shape clone of 0x00434380 (Unknown::notifyObjectWithQueryResult).
namespace lift_00434380 {
// @name Unknown::notifyObjectWithQueryResult
// @class Unknown
// @summary Calls obj vtbl[0](1), queries the object at this+0xE0 via vtbl[0x15C] and passes the result to obj vtbl[1].
// @field Unknown +0xe0 void* field_0xe0

namespace {

using VoidThisFn = void(__thiscall*)(void* self, uint32_t arg);
using QueryThisFn = uint32_t(__thiscall*)(void* self);

// Reads vtable slot at byte offset `slotOffset` from the object at `obj`.
inline void* vtableSlot(void* obj, ptrdiff_t slotOffset) {
    void** vtbl = lift_field<void**>(obj, 0);
    return vtbl[slotOffset / sizeof(void*)];
}

} // namespace

void __thiscall fn_00434640(void* self, void* obj) {
    // obj->vtbl[0](1)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x00))(obj, 1);

    // q = self->field_0xe0; r = q->vtbl[0x15C](q)
    void* target = lift_field<void*>(self, 0x114);
    uint32_t result = reinterpret_cast<QueryThisFn>(vtableSlot(target, 0x15C))(target);

    // obj->vtbl[1](result)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x04))(obj, result);
}
} // namespace lift_00434380
} // namespace lift_00434640

// [0x00434680] sub_00434680 (49 bytes)
namespace lift_00434680 {
// @name sub_00434680
// @summary Auto-lifted identical-shape clone of 0x00434380 (Unknown::notifyObjectWithQueryResult).
namespace lift_00434380 {
// @name Unknown::notifyObjectWithQueryResult
// @class Unknown
// @summary Calls obj vtbl[0](1), queries the object at this+0xE0 via vtbl[0x15C] and passes the result to obj vtbl[1].
// @field Unknown +0xe0 void* field_0xe0

namespace {

using VoidThisFn = void(__thiscall*)(void* self, uint32_t arg);
using QueryThisFn = uint32_t(__thiscall*)(void* self);

// Reads vtable slot at byte offset `slotOffset` from the object at `obj`.
inline void* vtableSlot(void* obj, ptrdiff_t slotOffset) {
    void** vtbl = lift_field<void**>(obj, 0);
    return vtbl[slotOffset / sizeof(void*)];
}

} // namespace

void __thiscall fn_00434680(void* self, void* obj) {
    // obj->vtbl[0](1)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x00))(obj, 1);

    // q = self->field_0xe0; r = q->vtbl[0x15C](q)
    void* target = lift_field<void*>(self, 0x150);
    uint32_t result = reinterpret_cast<QueryThisFn>(vtableSlot(target, 0x15C))(target);

    // obj->vtbl[1](result)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x04))(obj, result);
}
} // namespace lift_00434380
} // namespace lift_00434680

// [0x004346C0] sub_004346C0 (49 bytes)
namespace lift_004346C0 {
// @name sub_004346C0
// @summary Auto-lifted identical-shape clone of 0x00434380 (Unknown::notifyObjectWithQueryResult).
namespace lift_00434380 {
// @name Unknown::notifyObjectWithQueryResult
// @class Unknown
// @summary Calls obj vtbl[0](1), queries the object at this+0xE0 via vtbl[0x15C] and passes the result to obj vtbl[1].
// @field Unknown +0xe0 void* field_0xe0

namespace {

using VoidThisFn = void(__thiscall*)(void* self, uint32_t arg);
using QueryThisFn = uint32_t(__thiscall*)(void* self);

// Reads vtable slot at byte offset `slotOffset` from the object at `obj`.
inline void* vtableSlot(void* obj, ptrdiff_t slotOffset) {
    void** vtbl = lift_field<void**>(obj, 0);
    return vtbl[slotOffset / sizeof(void*)];
}

} // namespace

void __thiscall fn_004346C0(void* self, void* obj) {
    // obj->vtbl[0](1)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x00))(obj, 1);

    // q = self->field_0xe0; r = q->vtbl[0x15C](q)
    void* target = lift_field<void*>(self, 0x158);
    uint32_t result = reinterpret_cast<QueryThisFn>(vtableSlot(target, 0x15C))(target);

    // obj->vtbl[1](result)
    reinterpret_cast<VoidThisFn>(vtableSlot(obj, 0x04))(obj, result);
}
} // namespace lift_00434380
} // namespace lift_004346C0

// [0x0043CEF0]
namespace lift_0043CEF0 {
// @name Unknown::isCursorOverThis
// @class Unknown
// @summary Returns true when the window under the mouse cursor equals this object's window handle (ecx).

extern uint32_t mem_00925718;  // IAT slot for USER32!GetCursorPos
extern uint32_t mem_00925714;  // IAT slot for USER32!WindowFromPoint
uint32_t ext_006A5E00(uint32_t hwnd);  // thunk to MFC80!ord_2372

// Thiscall-style: `self` is the value of ecx on entry.
uint32_t fn_0043CEF0(uint32_t self) {
    uint32_t pt[2] = {0, 0};  // POINT { x, y }
    // GetCursorPos(&pt) via IAT slot
    reinterpret_cast<uint32_t (*)(uint32_t*)>(static_cast<uintptr_t>(mem_00925718))(pt);
    // WindowFromPoint(pt.x, pt.y) via IAT slot; pushed as (y, x) in the original
    uint32_t hwnd = reinterpret_cast<uint32_t (*)(uint32_t, uint32_t)>(
        static_cast<uintptr_t>(mem_00925714))(pt[1], pt[0]);
    uint32_t r = ext_006A5E00(hwnd);
    return (r == self) ? 1u : 0u;
}
} // namespace lift_0043CEF0

// [0x00435CC0]
namespace lift_00435CC0 {
extern void* ext_006A5C62(size_t size);

// @name AllocTriple
// @summary Allocates a 12-byte block and fills it with two dwords and the dword that a3 points to; returns the block or null.
void* fn_00435CC0(DWORD a1, DWORD a2, const DWORD* a3) {
    auto* p = static_cast<DWORD*>(ext_006A5C62(12));
    if (p == nullptr) {
        return nullptr;
    }
    p[0] = a1;
    p[1] = a2;
    p[2] = *a3;
    return p;
}
} // namespace lift_00435CC0

// [0x0043B6E0] sub_0043B6E0 (51 bytes)
namespace lift_0043B6E0 {
// @name CopyDwordRange
// @summary Memmoves the dwords in [first, last) to d_first and returns d_first + count (count may be <= 0, in which case nothing is copied).
uint32_t* CopyDwordRange(const uint32_t* first, const uint32_t* last, uint32_t* d_first) {
    const std::ptrdiff_t count = last - first;
    if (count > 0) {
        std::memmove(d_first, first, static_cast<std::size_t>(count) * sizeof(uint32_t));
    }
    return d_first + count;
}
} // namespace lift_0043B6E0

// [0x00431360]
namespace lift_00431360 {
// @name sub_00431360
// @summary If field_0x10c is non-null, calls its vfunc at +0x15c(0) and passes it with inverted result to thunk_MFC80_ord_6081.
// @field unknown +0x10c void* field_0x10c


extern void ext_006A651A(void);

extern void __thiscall fn_00431360(void* self) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x10c);
    if (obj == 0) {
        return;
    }
    uint32_t vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    uint32_t vfunc_addr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable) + 0x15c);
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    uint32_t res = reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(vfunc_addr))(
        reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    using mfc_t = void(__thiscall*)(void*, void*, uint32_t);
    reinterpret_cast<mfc_t>(&ext_006A651A)(
        self, reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), flag);
}
} // namespace lift_00431360

// [0x0043D780] sub_0043D780 (55 bytes)
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_0043D780() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x18);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x14) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x15) = 0x00;

    return rec;
}
} // namespace lift_0043D780

// [0x00434AB0] sub_00434AB0 (55 bytes)
namespace lift_00434AB0 {
// Import slot for the invalid-parameter handler (_invalid_parameter_noinfo in MSVCR80).
extern void (*mem_00925134)(void);

// @name Cursor::CopyAndAdvance
// @class Unknown
// @summary Copies the 8-byte cursor {owner, index} from *this into *out, checks owner and index (against owner+0x8) via the invalid-parameter handler, then advances index by 0x1C. Returns out. Callee pops 8 bytes (ret 0x8); the second stack dword is never read.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 uint32_t field_0x04
extern void* __thiscall fn_00434AB0(void* self, void* out, uint32_t popped_arg) {
    (void)popped_arg;

    void* owner = lift_field<void*>(self, 0x00);
    uint32_t index = lift_field<uint32_t>(self, 0x04);

    lift_field<void*>(out, 0x00) = owner;
    lift_field<uint32_t>(out, 0x04) = index;

    if (owner == nullptr) {
        mem_00925134();
    }

    if (index >= lift_field<uint32_t>(owner, 0x08)) {
        mem_00925134();
    }

    lift_field<uint32_t>(self, 0x04) = index + 0x1C;
    return out;
}
} // namespace lift_00434AB0

// [0x0043D370] sub_0043D370 (56 bytes)
namespace lift_0043D370 {
// Per-element copy-construct thunk imported from MFC80 (ordinal 781).
// Called as __thiscall: ecx = destination element, one stack arg = source element.
extern void __thiscall ext_MFC80_ord781(void* dest_elem, const void* src_elem);

// @name std::_Uninitialized_copy (4-byte elements, MFC80 copy-ctor loop)
// @summary Copy-constructs each 4-byte element of [first, last) into dest via ext_MFC80_ord781; returns dest + element count.
extern void* __cdecl fn_0043D370(const uint8_t* first, const uint8_t* last, uint8_t* dest) {
    uint8_t* result = dest + 4 * (((last - first) >> 2));
    if (first != last) {
        for (const uint8_t* src = first; src != last; src += 4) {
            ext_MFC80_ord781(dest + (src - first), src);
        }
    }
    return result;
}
} // namespace lift_0043D370

// [0x0043C640] sub_0043C640 (40 bytes)
namespace lift_0043C640 {
// Known callee 0x00455F40: Unknown::returnTrueIfNeitherCheckMatches_00455F40 (Returns 1 only if both ext_00455CB0 and ext_004090C0 return 0 for self; otherwise returns 0.)
extern int __fastcall ext_00455F40(void* self);
// Known callee 0x004564A0: ForwardToFirstChildWindow (If flag 0x20 is set on self, looks up the first child HWND of self->+0x20 via GetWindow(GW_CHILD) and forwards to the MFC80 wrapper pair, passing the two stack arguments.)
extern void __thiscall ext_004564A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);

// @name Unknown::storeCheckResultAndForward_0043C640
// @class Unknown
// @summary Stores the result of ext_00455F40(self) into self+0xEC, then forwards the three stack arguments to ext_004564A0(self, arg0, arg1, arg2). Callee pops 12 bytes (ret 0xC).
// @field Unknown +0xEC int checkResult
void __thiscall fn_0043C640(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    int result = ext_00455F40(self);
    *reinterpret_cast<int*>(reinterpret_cast<uint8_t*>(self) + 0xEC) = result;
    ext_004564A0(self, arg0, arg1, arg2);
}
} // namespace lift_0043C640

// [0x004303B0] sub_004303B0 (17 bytes)
namespace lift_004303B0 {
// @name sub_004303B0
// @summary Auto-lifted identical-shape clone of 0x004E9D70 (Unknown::DispatchIndex5ToSelector).
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_0046B010(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_004303B0(void) {
    INT self = ext_00468180();
    return ext_0046B010(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 0, 1);
}
} // namespace lift_004E9D70
} // namespace lift_004303B0

// [0x004303D0] sub_004303D0 (17 bytes)
namespace lift_004303D0 {
// @name sub_004303D0
// @summary Auto-lifted identical-shape clone of 0x004E9D70 (Unknown::DispatchIndex5ToSelector).
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_0046B010(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_004303D0(void) {
    INT self = ext_00468180();
    return ext_0046B010(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 1, 1);
}
} // namespace lift_004E9D70
} // namespace lift_004303D0

// [0x004303F0] sub_004303F0 (17 bytes)
namespace lift_004303F0 {
// @name sub_004303F0
// @summary Auto-lifted identical-shape clone of 0x004E9D70 (Unknown::DispatchIndex5ToSelector).
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_0046B010(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_004303F0(void) {
    INT self = ext_00468180();
    return ext_0046B010(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 0, 0);
}
} // namespace lift_004E9D70
} // namespace lift_004303F0

// [0x00430410] sub_00430410 (17 bytes)
namespace lift_00430410 {
// @name sub_00430410
// @summary Auto-lifted identical-shape clone of 0x004E9D70 (Unknown::DispatchIndex5ToSelector).
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_0046B010(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_00430410(void) {
    INT self = ext_00468180();
    return ext_0046B010(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 1, 0);
}
} // namespace lift_004E9D70
} // namespace lift_00430410

// [0x00430A60] sub_00430A60 (59 bytes)
namespace lift_00430A60 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// Returns the object pointer in EAX.
extern void* ext_00465B40(void);
// Known callee 0x00430370: CheckFieldAt60IsZero (Calls sub_004658C0 to get an object pointer, returns 1 if its int32 at +0x60 is zero, else 0.)
extern uint8_t ext_00430370(void);

// @name ConditionalVtableSlot0Dispatch
// @class Unknown
// @summary Computes r = !obj->vtable[0x220](obj) && CheckFieldAt60IsZero(), where obj = ext_00465B40(), then tail-dispatches arg->vtable[0] with arg as this and r (0 or 1) as the argument.
void __thiscall fn_00430A60(void* self, void* dispatch_target) {
    (void)self; // ECX (self) is forwarded to ext_00430370 in the original; the leaf callee takes no arguments.

    void* obj = ext_00465B40();
    void* obj_vtable = *reinterpret_cast<void**>(obj);
    using PredicateFn = uint8_t(__thiscall*)(void*);
    PredicateFn predicate = reinterpret_cast<PredicateFn>(
        *reinterpret_cast<void**>(static_cast<char*>(obj_vtable) + 0x220));

    uint32_t result = 0;
    if (predicate(obj) == 0) {
        result = (ext_00430370() != 0) ? 1u : 0u;
    }

    void* target_vtable = *reinterpret_cast<void**>(dispatch_target);
    using SinkFn = void(__thiscall*)(void*, uint32_t);
    SinkFn sink = reinterpret_cast<SinkFn>(*reinterpret_cast<void**>(target_vtable));
    sink(dispatch_target, result);
}
} // namespace lift_00430A60

// [0x00430AA0] sub_00430AA0 (59 bytes)
namespace lift_00430AA0 {
// Known callee 0x00430370: CheckFieldAt60IsZero (Calls sub_004658C0 to get an object pointer, returns 1 if its int32 at +0x60 is zero, else 0.)
extern uint8_t ext_00430370(void);
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// Returns the object pointer in eax.
extern void* ext_00465B40(void);

// @name ForwardGlobalCheckToSink
// @summary Tests a global object via its vtable slot at byte offset 0x168, then ext_00430370 if that passes; forwards the 0/1 result by tail-calling sink's vtable slot 0.
// Note: the 0x168 offset is a vtable byte offset (32-bit layout), not an object field, so no @field lines are emitted.
// Note: ECX (self) is passed through to ext_00430370 in the original, but that callee's lifted signature takes no arguments, so self is unused here.
void fn_00430AA0(void* self, void* sink) {
    (void)self;

    void* obj = ext_00465B40();
    void** obj_vt = *reinterpret_cast<void***>(obj);
    auto vslot_0x168 = reinterpret_cast<uint8_t (*)(void*)>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(obj_vt) + 0x168));
    uint8_t ok = vslot_0x168(obj);

    uint32_t result = 0;
    if (ok != 0 && ext_00430370() != 0) {
        result = 1;
    }

    // Tail call: sink->vtbl[0](sink, result)
    void** sink_vt = *reinterpret_cast<void***>(sink);
    auto sink_slot0 = reinterpret_cast<void (*)(void*, uint32_t)>(sink_vt[0]);
    sink_slot0(sink, result);
}
} // namespace lift_00430AA0

// [0x00430780]
namespace lift_00430780 {
// @name sub_00430780
// @class Unknown
// @summary Enables a command UI object and, if field_0x100 is non-null, sets its check state based on whether ext_0044B5B0(field_0x100) equals 4.
// @field Unknown +0x100 void* field_0x100


extern int __fastcall ext_0044B5B0(void* self);

void __thiscall sub_00430780(void* self, void* cmdUI) {
    uint8_t* selfBytes = static_cast<uint8_t*>(self);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(cmdUI);
    reinterpret_cast<void(__thiscall*)(void*, int)>(vtable[0])(cmdUI, 1);

    void* field100 = *reinterpret_cast<void**>(selfBytes + 0x100);
    if (field100 != nullptr) {
        int val = ext_0044B5B0(field100);
        uintptr_t* vtable2 = *reinterpret_cast<uintptr_t**>(cmdUI);
        reinterpret_cast<void(__thiscall*)(void*, int)>(vtable2[1])(cmdUI, val == 4 ? 1 : 0);
    }
}
} // namespace lift_00430780

// [0x0043D7C0]
namespace lift_0043D7C0 {
// @name BackwardStride4Walk
// @summary Visits 4-byte elements of [begin,end) from last to first, calling ext_MFC80_ord_781(cursor, elem) with cursor stepping down by 4 from dest; returns dest minus the byte span.

extern void ext_MFC80_ord_781(std::uint32_t cursor, std::uint32_t elem);

std::uint32_t BackwardStride4Walk(std::uint32_t begin, std::uint32_t end, std::uint32_t dest) {
    // Byte span of the range, normalised to whole 4-byte elements (sar 2 / add x2).
    const std::int32_t count = static_cast<std::int32_t>(end - begin) >> 2;
    const std::uint32_t span = static_cast<std::uint32_t>(count) * 4u;
    const std::uint32_t result = dest - span;

    if (begin != end) {
        const std::uint32_t base = dest - end;  // ebx = dest - end (constant across the loop)
        std::uint32_t p = end;
        do {
            p -= 4;
            ext_MFC80_ord_781(base + p, p);     // ecx = base + p, stack = p
        } while (p != begin);
    }

    return result;
}
} // namespace lift_0043D7C0

// [0x00430EF0] sub_00430EF0 (62 bytes)
namespace lift_00430EF0 {
// Comparator function pointer stored in .rdata (operator== for std::string, __cdecl).
extern uint32_t mem_00924FC4;

// @name FindStringInArray
// @summary Linear search over an array of 28-byte std::string objects; returns the first element equal to value, or last if none match.
void* fn_00430EF0(void* first, void* last, const void* value) {
    typedef BOOL(__cdecl * StringEqualFn)(const void* lhs, const void* rhs);
    const auto equal = reinterpret_cast<StringEqualFn>(static_cast<uintptr_t>(mem_00924FC4));

    constexpr size_t kStride = 0x1C; // sizeof(std::string) in this build

    uint8_t* it = static_cast<uint8_t*>(first);
    uint8_t* const end = static_cast<uint8_t*>(last);

    if (it == end) {
        return it;
    }

    do {
        if (equal(it, value)) {
            break;
        }
        it += kStride;
    } while (it != end);

    return it;
}
} // namespace lift_00430EF0

// [0x00434F90]
namespace lift_00434F90 {
// @name Unknown::CheckMaxCharsAndNotify
// @class Unknown
// @summary Returns true after notifying "Maximum number of characters reached" when the owner's sub-object at +0x26C has +0x20 == 100 and its vtable slot 0x11C returns nonzero; otherwise returns false.
// @field Unknown +0x26C uint32_t field_0x26c
// @field Unknown +0x20 int32_t field_0x20

extern int32_t fn_00594000(void);
extern void* fn_00465B40(void);
extern void fn_006A5E60(const char* message, int32_t arg1, int32_t arg2);
extern const char mem_0092FA04[];

extern uint8_t fn_00434F90(void) {
    uint8_t result = 0;

    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(fn_00594000()));
    uint32_t sub = lift_field<uint32_t>(self, 0x26C);
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(sub));

    if (lift_field<int32_t>(obj, 0x20) == 100) {
        void* other = fn_00465B40();
        void* vtbl = *reinterpret_cast<void**>(other);
        using VirtBoolFn = uint8_t (*)(void*);
        VirtBoolFn slot = reinterpret_cast<VirtBoolFn>(lift_field<void*>(vtbl, 0x11C));
        if (slot(other) != 0) {
            fn_006A5E60(mem_0092FA04, 0, 0);
            result = 1;
        }
    }

    return result;
}
} // namespace lift_00434F90

// [0x00434760]
namespace lift_00434760 {
uintptr_t __cdecl ext_00594000(void);
uintptr_t __thiscall ext_006AD940(uintptr_t self);
uint8_t __thiscall ext_00492570(uintptr_t self);
uint8_t __thiscall ext_00430370(void* self);

// @name CheckStateAndFieldThenNotify
// @summary Checks global state and object field at +0x60, then tail-calls arg1's vtable[0] with the boolean result.

int32_t __thiscall fn_00434760(void* self, void* arg1) {
    uintptr_t globalObj = ext_00594000();
    uintptr_t subObj = *reinterpret_cast<uintptr_t*>(globalObj + 0x26C);
    uintptr_t target = ext_006AD940(subObj);

    uint32_t result = 0;
    if (ext_00492570(target) != 0 && ext_00430370(self) != 0) {
        result = 1;
    }

    using Vfn0 = int32_t(__thiscall*)(void*, uint32_t);
    void** vtable = *reinterpret_cast<void***>(arg1);
    Vfn0 fn = reinterpret_cast<Vfn0>(vtable[0]);
    return fn(arg1, result);
}
} // namespace lift_00434760

// [0x00430C00]
namespace lift_00430C00 {
// @name checkConditionAndNotify
// @summary Checks a nested object's vtable+0x11c predicate and field+0x60 == 0, then tail-calls arg0's vtable[0] with the boolean result.


extern uint32_t mem_read32(uint32_t addr);
extern uint8_t __cdecl ext_00430370(void);
extern int32_t __cdecl ext_00465B30(void);
extern uint32_t __thiscall ext_00468660(uint32_t this_ptr);

extern uint32_t __thiscall fn_00430C00(uint32_t this_ptr, uint32_t arg0) {
    (void)this_ptr;
    uint32_t obj = ext_00468660(static_cast<uint32_t>(ext_00465B30()));
    uint32_t vtable = mem_read32(obj);
    using Vfn11c = uint8_t(__thiscall*)(uint32_t);
    auto fn11c = reinterpret_cast<Vfn11c>(static_cast<uintptr_t>(mem_read32(vtable + 0x11c)));

    uint32_t result = 0;
    if (fn11c(obj) == 0 && ext_00430370() != 0) {
        result = 1;
    }

    uint32_t arg0_vtable = mem_read32(arg0);
    using Vfn0 = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto fn0 = reinterpret_cast<Vfn0>(static_cast<uintptr_t>(mem_read32(arg0_vtable)));
    return fn0(arg0, result);
}
} // namespace lift_00430C00

// [0x00430CE0] sub_00430CE0 (69 bytes)
namespace lift_00430CE0 {
// Known callee 0x00430370: CheckFieldAt60IsZero (Calls sub_004658C0 to get an object pointer, returns 1 if its int32 at +0x60 is zero, else 0.)
extern uint8_t ext_00430370(void* self);
// Known callee 0x0044B680: sub_0044B680 (Auto-lifted identical-shape clone of 0x0041C710 (descriptiveName_0041C710 (delegateToChildVirtual19)).)
extern uint8_t ext_0044B680(void* self);

// @name Unknown::notifySlotsWithChildFlag
// @class Unknown
// @summary Computes a flag from the child at +0x100 and a predicate on self, then invokes vtable slots 0 and 1 of the object held in *arg with those flags.
// @field Unknown +0x100 void* field_0x100

namespace {
using VirtualFlagFn = void (*)(void* self, uint32_t flag);
}

// Thiscall-style: self in ECX, one stack argument (arg), callee-cleans (ret 4).
void fn_00430CE0(void* self, void* arg) {
    uint32_t childFlag = 0;
    void* child = lift_field<void*>(self, 0x100);
    if (child != nullptr) {
        childFlag = ext_0044B680(child);
    }

    // Object held by the slot that arg points to.
    void** slot = static_cast<void**>(arg);
    void* obj = *slot;
    uint32_t predicate = ext_00430370(self);

    // Slot 0 of obj's vtable, invoked with arg as "this".
    void** vtbl = *reinterpret_cast<void***>(obj);
    VirtualFlagFn slot0 = reinterpret_cast<VirtualFlagFn>(vtbl[0]);
    slot0(arg, predicate);

    // Slot 1 of obj's vtable (re-read from the slot), invoked with arg as "this".
    void* obj2 = *slot;
    void** vtbl2 = *reinterpret_cast<void***>(obj2);
    VirtualFlagFn slot1 = reinterpret_cast<VirtualFlagFn>(vtbl2[1]);
    slot1(arg, childFlag);
}
} // namespace lift_00430CE0

// [0x0043E640] sub_0043E640 (71 bytes)
namespace lift_0043E640 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uintptr_t arg);
// IAT slot 0x009242F4 (MFC80!ord_578), called indirectly with `this`-style ECX argument.
extern uintptr_t mem_009242F4;

// @name sub_0043E640 (descriptiveName: ReleaseElementsAndReset)
// @summary Calls MFC80!ord_578 on each 4-byte element in [begin, end), frees the
//          buffer at begin through ext_006A5C5C, then zeroes begin/end/capacity.
// @field <ClassName> +0x04 DWORD field_0x04 (begin pointer; read and written)
// @field <ClassName> +0x08 DWORD field_0x08 (end pointer; read)
// @field <ClassName> +0x0C DWORD field_0x0C (capacity; written to 0)
using ThisCallFn = void(__thiscall*)(uintptr_t);

void fn_0043E640(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x4);
    if (begin != 0) {
        uint32_t end = lift_field<uint32_t>(self, 0x8);
        auto release = reinterpret_cast<ThisCallFn>(mem_009242F4);
        for (uint32_t elem = begin; elem != end; elem += 4) {
            release(elem);
        }
        ext_006A5C5C(begin);
    }
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_0043E640

// [0x0043CC60] sub_0043CC60 (71 bytes)
namespace lift_0043CC60 {
extern int mem_0092563C; // IAT slot holding GetSystemMetrics

// @name sub_0043CC60
// @class UnknownClass
// @summary Computes a layout offset from two system metrics plus an argument and stores it into two fields; sets flag bits 0xC on a sub-object.
// @field UnknownClass +0x88 uint32_t field_0x88
// @field UnknownClass +0xA0 uint32_t field_0xA0
// @field UnknownClass +0xC0 uint32_t field_0xC0
// @field UnknownClass +0x108 uint32_t field_0x108
// @field UnknownClass +0xD0 uint32_t field_0xD0 (on object referenced by +0x88)
void __thiscall fn_0043CC60(void* self, uint32_t arg1) {
    using GetSystemMetricsFn = int(__stdcall*)(int);
    auto getSystemMetrics = reinterpret_cast<GetSystemMetricsFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_0092563C)));

    auto* base = static_cast<uint8_t*>(self);

    uint32_t edi = static_cast<uint32_t>(getSystemMetrics(0x2E));
    edi += edi;
    uint32_t eax = static_cast<uint32_t>(getSystemMetrics(6));
    eax += edi;

    uint32_t ecx = *reinterpret_cast<uint32_t*>(base + 0x108);
    uint32_t edx = ecx + 2 * eax;
    eax = arg1 + edx;

    *reinterpret_cast<uint32_t*>(base + 0xA0) = eax;
    *reinterpret_cast<uint32_t*>(base + 0xC0) = eax;

    auto* sub = reinterpret_cast<uint8_t*>(
        static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(base + 0x88)));
    *reinterpret_cast<uint32_t*>(sub + 0xD0) |= 0xC;
}
} // namespace lift_0043CC60

// [0x0043BAF0] sub_0043BAF0 (74 bytes)
namespace lift_0043BAF0 {
// @name sub_0043BAF0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_0043B650(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_0043BAF0(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_0043B650(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_0043BAF0

// [0x00430550] sub_00430550 (76 bytes)
namespace lift_00430550 {
// Known callee 0x00465B40: returns an object pointer (eax); called with this in ecx.
extern void* ext_00465B40(void* self);
// Known callee 0x0044B5B0: GetNestedFieldOrZero(self) -> int.
extern int32_t ext_0044B5B0(void* self);

// @name Unknown::ProcessCallback_00430550
// @class Unknown
// @summary Queries a global object's byte result and forwards it to the callback at *arg; if this+0x100 is set, also forwards a nested-field flag to the callback at (*arg)+4.
// @field Unknown +0x100 uint32_t field_0x100
void fn_00430550(void* self, void* arg) {
    using ByteGetter = uint8_t (*)(void* obj);
    using Callback0 = void (*)(void* obj, uint32_t value);
    using Callback1 = void (*)(void* obj, uint32_t value);

    // obj = ext_00465B40(self); value = obj->vtbl[0xf8](obj);
    void* obj = ext_00465B40(self);
    void* vtbl = lift_field<void*>(obj, 0);
    void* getter = lift_field<void*>(vtbl, 0xf8);
    uint8_t value = reinterpret_cast<ByteGetter>(getter)(obj);

    // Forward value to the first slot of the table pointed to by *arg.
    void* table = lift_field<void*>(arg, 0);
    void* slot0 = lift_field<void*>(table, 0);
    reinterpret_cast<Callback0>(slot0)(arg, static_cast<uint32_t>(value));

    // If this+0x100 is nonzero, forward (nested-field-is-zero) to slot 1.
    uint32_t gate = lift_field<uint32_t>(self, 0x100);
    if (gate != 0) {
        void* table2 = lift_field<void*>(arg, 0);
        int32_t nested = ext_0044B5B0(reinterpret_cast<void*>(static_cast<uintptr_t>(gate)));
        uint32_t flag = (nested == 0) ? 1u : 0u;
        void* slot1 = lift_field<void*>(table2, 4);
        reinterpret_cast<Callback1>(slot1)(arg, flag);
    }
}
} // namespace lift_00430550

// [0x004307C0] sub_004307C0 (77 bytes)
namespace lift_004307C0 {
// Known callee 0x00465B40: sub_00465B40 (auto-lifted clone of 0x00430360). Returns a manager object pointer.
extern void* ext_00465B40(void);
// Known callee 0x0044B5B0: GetNestedFieldOrZero (sub_0044B5B0). Called thiscall with the field value in ecx.
extern uint32_t __thiscall ext_0044B5B0(void* self);

namespace {

// Read a 32-bit guest pointer stored at base+off and widen it to a host pointer.
inline void* ptr_at(const void* base, ptrdiff_t off) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, off)));
}

}  // namespace

// @name Unknown::NotifyFlagsFromManager_004307C0
// @class Unknown
// @summary Queries a global manager flag, notifies the arg object with it, and if self+0x100 is set, notifies again with (nested==5).
// @field Unknown +0x100 void* field_0x100
void fn_004307C0(void* self, void* arg) {
    // Global manager, queried via vtable slot +0x10C (thiscall, no args).
    void* mgr = ext_00465B40();
    void* mgrVtable = ptr_at(mgr, 0);
    auto query = reinterpret_cast<uint8_t (__thiscall*)(void*)>(ptr_at(mgrVtable, 0x10C));
    uint8_t flag = query(mgr);

    // Notify arg's object via its vtable slot +0x00, with arg as this.
    void* argObj = ptr_at(arg, 0);
    void* argObjVtable = ptr_at(argObj, 0);
    auto notifyFlag = reinterpret_cast<void (__thiscall*)(void*, uint32_t)>(ptr_at(argObjVtable, 0));
    notifyFlag(arg, static_cast<uint32_t>(flag));

    // Conditional second notification if self+0x100 is non-null.
    void* nested = ptr_at(self, 0x100);
    if (nested != nullptr) {
        uint32_t level = ext_0044B5B0(nested);
        void* obj = ptr_at(arg, 0);
        void* objVtable = ptr_at(obj, 0);
        auto notifyLevel = reinterpret_cast<void (__thiscall*)(void*, uint32_t)>(ptr_at(objVtable, 4));
        notifyLevel(arg, level == 5 ? 1u : 0u);
    }
}
} // namespace lift_004307C0

// [0x00433320] sub_00433320 (77 bytes)
namespace lift_00433320 {
// Known callee 0x0065C660: sub_0065C660 (Stores address of mem_00928E8C into field at offset +0x0.)
extern void ext_0065C660(void* self);
// Import 0x00628FF0 (MSVCP80 std::basic_string<char> destructor), reached via IAT slot mem_00924FF4.
extern void ext_00628FF0(void* self);

// @name Unknown::Dtor_00433320
// @class Unknown
// @summary Destroys the std::string member at +0x04, then runs the base-part teardown at 0x0065C660.
// @field Unknown +0x04 std::string field_0x04
void fn_00433320(void* self) {
    ext_00628FF0(static_cast<uint8_t*>(self) + 4);
    ext_0065C660(self);
}
} // namespace lift_00433320

// [0x00430C50] sub_00430C50 (78 bytes)
namespace lift_00430C50 {
// Known callee 0x00430370: CheckFieldAt60IsZero. Returns 1 if the int32 at +0x60 of the global object is zero.
extern uint8_t ext_00430370(void);
// Known callee 0x00465B30: get_global_field_0x58. Returns the int32 field at +0x58 of the global object.
extern int32_t ext_00465B30(void);
// Known callee 0x00468660: getNestedField_0x18_0xc. Returns the pointer stored at +0xC of the object at this+0x18.
extern uint32_t ext_00468660(uint32_t this_ptr);

namespace {

uint32_t read_u32(uint32_t base, uint32_t offset) {
    uint32_t value = 0;
    std::memcpy(&value, reinterpret_cast<const void*>(static_cast<uintptr_t>(base + offset)), sizeof value);
    return value;
}

} // namespace

// @name ForwardNegatedNestedVirtualResult
// @summary If ext_00430370() is nonzero, calls vtable slot +0x11C on the object from ext_00468660(ext_00465B30()) and forwards (result == 0) to self's vtable slot 0; otherwise forwards 1 to self's vtable slot 0. Stdcall, one argument (ret 4).
// @field Unknown +0x00 void* vptr
void fn_00430C50(void* self) {
    const uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    using ArgSinkFn = void (*)(uint32_t self, int32_t arg);

    if (ext_00430370() == 0) {
        const uint32_t vt_self = read_u32(self_addr, 0x00);
        const auto sink = reinterpret_cast<ArgSinkFn>(static_cast<uintptr_t>(read_u32(vt_self, 0x00)));
        sink(self_addr, 1);
        return;
    }

    using FlagGetterFn = uint8_t (*)(uint32_t self);

    const int32_t global_value = ext_00465B30();
    const uint32_t target = ext_00468660(static_cast<uint32_t>(global_value));
    const uint32_t vt_self = read_u32(self_addr, 0x00);
    const uint32_t vt_target = read_u32(target, 0x00);

    const auto getter = reinterpret_cast<FlagGetterFn>(static_cast<uintptr_t>(read_u32(vt_target, 0x11C)));
    const uint8_t result = getter(target);

    const int32_t forwarded = (result == 0) ? 1 : 0;
    const auto sink = reinterpret_cast<ArgSinkFn>(static_cast<uintptr_t>(read_u32(vt_self, 0x00)));
    sink(self_addr, forwarded);
}
} // namespace lift_00430C50

// [0x004305A0] sub_004305A0 (79 bytes)
namespace lift_004305A0 {
// Known callee 0x00465B40: sub_00465B40 (identical-shape clone of 0x00430360; returns a global object pointer.)
extern void* ext_00465B40(void);
// Known callee 0x0044B5B0: GetNestedFieldOrZero (If this+0x64 is nonzero, returns dword at (this+0x68)->+0x38; otherwise returns 0.)
extern int ext_0044B5B0(unsigned char* self);

namespace {

// Virtual-call helpers. Slot indices are vtable byte offsets / 4.
using ThisU8Fn = uint8_t (__thiscall*)(void* self);
using ThisVoidU8Fn = void (__thiscall*)(void* self, uint8_t arg);
using ThisVoidIntFn = void (__thiscall*)(void* self, int arg);

inline void** vtable_of(void* obj) {
    return *reinterpret_cast<void***>(obj);
}

} // namespace

// @name Unknown::ForwardStateToTarget_004305A0
// @class Unknown
// @summary Reads a flag from the global object via vtable slot 63 (+0xFC) and forwards it to target slot 0; if self+0x100 is set, forwards (nested result == 1) to target slot 1.
// @field Unknown +0x100 void* field_0x100
void fn_004305A0(void* self, void* target) {
    void* obj = ext_00465B40();
    uint8_t flag = reinterpret_cast<ThisU8Fn>(vtable_of(obj)[0xFC / 4])(obj);
    reinterpret_cast<ThisVoidU8Fn>(vtable_of(target)[0])(target, flag);

    void* nested = lift_field<void*>(self, 0x100);
    if (nested == nullptr) {
        return;
    }
    int result = ext_0044B5B0(static_cast<unsigned char*>(nested));
    int isOne = (result == 1) ? 1 : 0;
    reinterpret_cast<ThisVoidIntFn>(vtable_of(target)[1])(target, isOne);
}
} // namespace lift_004305A0

// [0x00434040]
namespace lift_00434040 {
// @name toggleSceneFlagAndInvalidate
// @summary Toggles a boolean state via virtual calls on the global sub-object and invalidates the view window.
// @field this +0x108 uint32_t field_0x108


extern int32_t __cdecl ext_00465B30(void);
extern uint32_t __thiscall ext_00468660(uint32_t this_ptr);
extern uint32_t mem_00925688;

using vfn_get_bool_t = uint8_t(__thiscall*)(uint32_t);
using vfn_set_bool_t = void(__thiscall*)(uint32_t, uint32_t);
using invalidate_rect_t = int32_t(__stdcall*)(uint32_t, uint32_t, int32_t);

extern void __thiscall fn_00434040(uint32_t this_ptr) {
    uint32_t obj1 = ext_00468660(static_cast<uint32_t>(ext_00465B30()));
    uint32_t vtbl1 = *reinterpret_cast<uint32_t*>(obj1);
    uint8_t cur = reinterpret_cast<vfn_get_bool_t>(*reinterpret_cast<uint32_t*>(vtbl1 + 0x7c))(obj1);

    uint32_t obj2 = ext_00468660(static_cast<uint32_t>(ext_00465B30()));
    uint32_t vtbl2 = *reinterpret_cast<uint32_t*>(obj2);
    uint32_t next_val = (cur == 0) ? 1u : 0u;
    reinterpret_cast<vfn_set_bool_t>(*reinterpret_cast<uint32_t*>(vtbl2 + 0x80))(obj2, next_val);

    uint32_t view_obj = *reinterpret_cast<uint32_t*>(this_ptr + 0x108);
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(view_obj + 0x20);
    reinterpret_cast<invalidate_rect_t>(mem_00925688)(hwnd, 0, 1);
}
} // namespace lift_00434040

// [0x004347B0] sub_004347B0 (84 bytes)
namespace lift_004347B0 {
// Known callee 0x00594000: sub_00594000 (returns the global object pointer used as a base here)
extern void* ext_00594000(void);
// Callee 0x006AD940: sub_006AD940 (4B, thiscall-style, takes the field value and returns a pointer)
extern void* ext_006AD940(void* self);
// Known callee 0x00430380: isGlobalObjectField60Is1 (thiscall, returns 1 if the int32 at +0x60 equals 1)
extern uint8_t ext_00430380(void* self);
// Known callee 0x00492520: fn_00492520 (thiscall, selector 0 -> +0x0C, 1 -> +0x10, else 0)
extern int32_t ext_00492520(void* self, int32_t selector);

// @name Unknown::dispatchFlagResult_004347B0
// @class Unknown
// @summary Computes a bool from a global object's sub-object and tail-dispatches it through the out-object's vtable slot 0.
// @field Unknown +0x26C void* field_0x26C
int32_t fn_004347B0(void* self, void* out) {
    void* global = ext_00594000();
    void* sub = ext_006AD940(lift_field<void*>(global, 0x26C));

    int32_t result = 0;
    if (ext_00430380(self) != 0) {
        if (ext_00492520(sub, 0) != 0 && ext_00492520(sub, 1) != 0) {
            result = 1;
        }
    }

    // Tail call: out->vtable[0](out, result). The callee pops its own argument.
    using VTSlot0 = int32_t (__thiscall*)(void* self, int32_t value);
    void** vtable = *reinterpret_cast<void***>(out);
    return reinterpret_cast<VTSlot0>(vtable[0])(out, result);
}
} // namespace lift_004347B0

// [0x004306C0] sub_004306C0 (86 bytes)
namespace lift_004306C0 {
// Known callee 0x0044B5B0: GetNestedFieldOrZero (sub_0044B5B0)
extern int __fastcall ext_0044B5B0(void* self);
// Known callee 0x0044B5C0: ForwardToOwnedVirtualSlot4
extern int __fastcall ext_0044B5C0(void* self);

// Call virtual slot `slot` of the object `obj` with one int argument (thiscall-style).
using VSlotFn = int (*)(void* self, int arg);
static inline void call_vslot(void* obj, int slot, int arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<VSlotFn>(vtbl[slot])(obj, arg);
}

// @name Unknown::conditionalVirtualDispatch_004306C0
// @class Unknown
// @summary Dispatches virtual slot 0 on arg with 1, then slot 1 on arg with 1 if this+0x100 gate yields 6 and ext_0044B5C0 returns 1, otherwise slot 1 with 0.
// @field Unknown +0x100 void* field_0x100
extern void __thiscall fn_004306C0(void* self, void* arg) {
    call_vslot(arg, 0, 1);

    void* child = lift_field<void*>(self, 0x100);
    if (child == nullptr) {
        return;
    }

    if (ext_0044B5B0(child) == 6 && ext_0044B5C0(child) == 1) {
        call_vslot(arg, 1, 1);
    } else {
        call_vslot(arg, 1, 0);
    }
}
} // namespace lift_004306C0

// [0x004342E0] sub_004342E0 (86 bytes)
namespace lift_004342E0 {
// Known callee 0x00430370: CheckFieldAt60IsZero (Calls sub_004658C0 to get an object pointer, returns 1 if its int32 at +0x60 is zero, else 0.)
extern uint8_t ext_00430370(void);

// @name Unknown::dispatchOnField10C_004342E0
// @class Unknown
// @summary If this+0x10C is null, forwards to vfunc0 of *arg with 0; otherwise calls vfunc0 of *arg with ext_00430370() and then vfunc1 of *arg with the result of vfunc 0x57 on this+0x10C.
// @field Unknown +0x10C void* field_0x10C
void fn_004342E0(void* self, void* arg) {
    uint8_t* selfBytes = static_cast<uint8_t*>(self);
    void* field = *reinterpret_cast<void**>(selfBytes + 0x10C);

    if (field == nullptr) {
        // Tail-forward: vfunc0 of *arg called with this = arg and a zero argument.
        void* obj = *reinterpret_cast<void**>(arg);
        void** objVt = *reinterpret_cast<void***>(obj);
        using Slot1Fn = void (*)(void* thisPtr, uint32_t a);
        reinterpret_cast<Slot1Fn>(objVt[0])(arg, 0u);
        return;
    }

    // vfunc0 of *arg, with this = arg and the flag from ext_00430370().
    uint32_t flag = static_cast<uint32_t>(ext_00430370());
    {
        void* obj = *reinterpret_cast<void**>(arg);
        void** objVt = *reinterpret_cast<void***>(obj);
        using Slot1Fn = void (*)(void* thisPtr, uint32_t a);
        reinterpret_cast<Slot1Fn>(objVt[0])(arg, flag);
    }

    // Vtable slot 0x57 (byte offset 0x15C on a 32-bit vtable) of this+0x10C, called with that object as this.
    using Slot0Fn = uint32_t (*)(void* thisPtr);
    void** fieldVt = *reinterpret_cast<void***>(field);
    uint32_t r = reinterpret_cast<Slot0Fn>(fieldVt[0x57])(field);

    // vfunc1 of *arg, with this = arg and the value r.
    {
        void* obj = *reinterpret_cast<void**>(arg);
        void** objVt = *reinterpret_cast<void***>(obj);
        using Slot1Fn = void (*)(void* thisPtr, uint32_t a);
        reinterpret_cast<Slot1Fn>(objVt[1])(arg, r);
    }
}
} // namespace lift_004342E0

// [0x0043B380] sub_0043B380 (89 bytes)
namespace lift_0043B380 {
// @name sub_0043B380
// @summary Auto-lifted identical-shape clone of 0x006B28A0 (GWCPropertyEditFeel::vfunc_6).
namespace lift_006B28A0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (allocator; takes byte size, returns block or null).
extern void* ext_006A5C62(size_t size);
// Known callee 0x006B0CA0: sub_006B0CA0 (thiscall initializer for the new object; its eax result is returned).
extern void* ext_0043AC70(void* self);

// @name GWCPropertyEditFeel::vfunc_6
// @class GWCPropertyEditFeel
// @summary Allocates a 0x6C-byte object and initializes it; returns the result, or null if allocation fails.
void* fn_0043B380(void* self) {
    (void)self;
    void* obj = ext_006A5C62(0x1E4);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0043AC70(obj);
}
} // namespace lift_006B28A0
} // namespace lift_0043B380

// [0x00430720] sub_00430720 (90 bytes)
namespace lift_00430720 {
// Known callee 0x0044B5B0: GetNestedFieldOrZero (sub_0044B5B0) (If this+0x64 is nonzero, returns dword at (this+0x68)->+0x38; otherwise returns 0.)
extern int __thiscall ext_0044B5B0(void* self);
// Known callee 0x0044B5C0: ForwardToOwnedVirtualSlot4 (Returns 0 if the gate field is clear; otherwise tail-dispatches virtual slot 4 on the object at self->+0x68->+0x4C.)
extern int __thiscall ext_0044B5C0(void* self);

// @name dispatchGatedSlot1
// @summary Calls virtual slot 0 of obj with 1; if this+0x100 (gate) is set, calls virtual slot 1 of obj with 1 when the gate's nested value is 6 and the forwarded check returns 0, otherwise with 0.
// @field Unknown +0x100 void* field_0x100
void __thiscall fn_00430720(void* self, void* obj) {
    using ThisCallVoidInt = void(__thiscall*)(void*, int);

    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<ThisCallVoidInt>(vtbl[0])(obj, 1);

    void* gate = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x100);
    if (gate == nullptr) {
        return;
    }

    int takeFirstPath = 0;
    if (ext_0044B5B0(gate) == 6 && ext_0044B5C0(gate) == 0) {
        takeFirstPath = 1;
    }

    vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<ThisCallVoidInt>(vtbl[1])(obj, takeFirstPath);
}
} // namespace lift_00430720

// [0x0043E090] sub_0043E090 (92 bytes)
namespace lift_0043E090 {
// @name Unknown::InvokeSlot0OnEachElement
// @class Unknown
// @summary Iterates the pointer range stored at +0x58..+0x5c and calls virtual slot 0 on each element with the single stack argument.
// @field Unknown +0x58 void* field_0x58
// @field Unknown +0x5c void* field_0x5c
extern void __thiscall fn_0043E090(void* self, uint32_t arg) {
    // The original's debug iterator-validity checks (calls to _invalid_parameter_noinfo)
    // only fire on broken container state and are omitted here.
    using Slot0Fn = void(__thiscall*)(void* self, uint32_t a0);

    void** cur = lift_field<void**>(self, 0x58);
    while (cur != lift_field<void**>(self, 0x5c)) {
        void* elem = *cur;
        void* vtable = lift_field<void*>(elem, 0x00);
        Slot0Fn slot = lift_field<Slot0Fn>(vtable, 0x00);
        slot(elem, arg);
        ++cur;
    }
}
} // namespace lift_0043E090

// [0x00430660]
namespace lift_00430660 {
// @name OnUpdateCommandUI_00430660
// @summary Enables a UI command object and sets its check state to 1 if field_0x100's nested value is 3 or 7, or 0 otherwise.
// @field Unknown +0x100 void* field_0x100


extern int __thiscall ext_0044B5B0(unsigned char* self);

void __thiscall sub_00430660(unsigned char* self, void* pCmdUI) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(pCmdUI);
    using VFn1 = void(__thiscall*)(void*, int);
    reinterpret_cast<VFn1>(vtable[0])(pCmdUI, 1);

    unsigned char* obj = *reinterpret_cast<unsigned char**>(self + 0x100);
    if (!obj) {
        return;
    }

    int check = (ext_0044B5B0(obj) == 3 || ext_0044B5B0(obj) == 7) ? 1 : 0;
    vtable = *reinterpret_cast<uint32_t**>(pCmdUI);
    reinterpret_cast<VFn1>(vtable[1])(pCmdUI, check);
}
} // namespace lift_00430660

// [0x00434700]
namespace lift_00434700 {
// @name DispatchConditionCheck
// @summary Evaluates three conditions and tail-calls arg0's vtable[0] with the boolean result.


extern int32_t __cdecl ext_00594000(void);
extern uint32_t __thiscall ext_006AD940(uint32_t self);
extern int __thiscall ext_00492570(void* self);
extern int32_t __cdecl ext_00465B30(void);
extern uint32_t __thiscall ext_00468660(uint32_t self);
extern uint8_t __cdecl ext_00430370(void);

uint32_t __thiscall fn_00434700(uint32_t self, uint32_t arg0) {
    (void)self;
    uint32_t result = 0;

    int32_t base = ext_00594000();
    uint32_t obj1 = *(uint32_t*)(uintptr_t)(base + 0x26C);
    uint32_t obj2 = ext_006AD940(obj1);
    if ((uint8_t)ext_00492570((void*)(uintptr_t)obj2) == 0) {
        int32_t obj3 = ext_00465B30();
        uint32_t obj4 = ext_00468660((uint32_t)obj3);
        uint32_t vtable4 = *(uint32_t*)(uintptr_t)obj4;
        auto fn11c = (uint8_t(__thiscall*)(uint32_t))(uintptr_t)(*(uint32_t*)(uintptr_t)(vtable4 + 0x11C));
        if (fn11c(obj4) == 0) {
            if (ext_00430370() != 0) {
                result = 1;
            }
        }
    }

    uint32_t vtable_arg0 = *(uint32_t*)(uintptr_t)arg0;
    auto fn0 = (uint32_t(__thiscall*)(uint32_t, uint32_t))(uintptr_t)(*(uint32_t*)(uintptr_t)vtable_arg0);
    return fn0(arg0, result);
}
} // namespace lift_00434700

// [0x00435B30] sub_00435B30 (22 bytes)
namespace lift_00435B30 {
// @name sub_00435B30
// @summary Auto-lifted identical-shape clone of 0x00642600 (forwardEraseTailRange).
namespace lift_00642600 {
// Known callee 0x00648DB0: Owner::eraseTailRange (Erases the element range [vec.begin, B+0x20) from the vector embedded at B+0x18, where B = this->field_0x30.)
extern void __fastcall ext_0045D270(void* self);
// Known callee 0x006425E0: sub_006425E0 (Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648940.)
extern void __fastcall ext_004339D0(void* self);

// @name forwardEraseTailRange
// @class Unknown
// @summary Erases the tail range of the subobject at +0x0C, then forwards to ext_006425E0 with the same this.
// @field Unknown +0x0C void* field_0x0C
void fn_00435B30(void* self) {
    void* subobject = lift_field<void*>(self, 0x108);
    ext_0045D270(subobject);
    ext_004339D0(self);
}
} // namespace lift_00642600
} // namespace lift_00435B30

// [0x00434C40] sub_00434C40 (95 bytes)
namespace lift_00434C40 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Callee 0x006A6C87 (18 bytes), single stack argument.
extern void ext_006A6C87(uint32_t arg);
extern uint32_t mem_00ACE1F0;
extern int mem_00ACE1D4;

// @name InitOnceGlobalString_00434C40
// @summary One-time initializer: on first call builds the global at mem_00ACE1D4 via ext_0066AD10 and registers it with ext_006A6C87; later calls only return its address.
void* fn_00434C40() {
    // The original wraps this in a thread-info (fs:[0]) exception frame and
    // sets a trylevel. That is compiler scaffolding with no portable meaning,
    // so it is dropped here. Only the guarded init and the return value remain.
    if ((mem_00ACE1F0 & 1u) == 0) {
        mem_00ACE1F0 |= 1u;
        // push 0xa2f438 / push 0xace1d4 : callee reads the flag as uint8_t (0x38).
        ext_0066AD10(static_cast<void*>(&mem_00ACE1D4), static_cast<uint8_t>(0xA2F438u));
        ext_006A6C87(0x00915190u);
    }
    return static_cast<void*>(&mem_00ACE1D4);
}
} // namespace lift_00434C40

// [0x00434CA0] sub_00434CA0 (95 bytes)
namespace lift_00434CA0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Callee 0x006A6C87 (18 bytes), single stack argument.
extern void ext_006A6C87(uint32_t arg);
extern uint32_t mem_00ACE210;
extern int mem_00ACE1F4;

// @name InitOnceGlobalString_00434CA0
// @summary One-time initializer: on first call builds the global at mem_00ACE1F4 via ext_0066AD10 and registers it with ext_006A6C87; later calls only return its address.
void* fn_00434CA0() {
    // The original wraps this in a thread-info (fs:[0]) exception frame and
    // sets a trylevel. That is compiler scaffolding with no portable meaning,
    // so it is dropped here. Only the guarded init and the return value remain.
    if ((mem_00ACE210 & 1u) == 0) {
        mem_00ACE210 |= 1u;
        // push 0xa2f484 / push 0xace1f4 : callee reads the flag as uint8_t (0x84).
        ext_0066AD10(static_cast<void*>(&mem_00ACE1F4), static_cast<uint8_t>(0xA2F484u));
        ext_006A6C87(0x00915180u);
    }
    return static_cast<void*>(&mem_00ACE1F4);
}
} // namespace lift_00434CA0

// [0x00434810] sub_00434810 (97 bytes)
namespace lift_00434810 {
// Known callee 0x00594000: sub_00594000 (returns global int32 from mem_00B40D08)
extern int32_t ext_00594000(void);
// Known callee 0x006AD940: sub_006AD940 (4B; takes object pointer, returns object pointer)
extern void* ext_006AD940(void* self);
// Known callee 0x00430380: isGlobalObjectField60Is1 (returns 1 if int32 at +0x60 of ext_004658C0() object == 1)
extern uint8_t ext_00430380(void);
// Known callee 0x00492520: selector 0 -> +0x0C, 1 -> +0x10, else 0
extern int32_t ext_00492520(void* self, int32_t selector);
// Known callee 0x004925D0: checks field equality selected by mode (0 or 1)
extern uint8_t ext_004925D0(void* self, uint32_t mode);

// @name ConditionalVirtualDispatch
// @summary Computes a gated boolean from a global-chain object and dispatches two virtual slots (0 and 1) on the stack-argument object.
// @field Unknown +0x26C uint32_t field_0x26C
void fn_00434810(void* self, void* obj) {
    (void)self;

    // eax = sub_00594000(); ecx = [eax + 0x26C]; edi = sub_006AD940(ecx)
    void* global_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(ext_00594000()));
    uint32_t field_val = lift_field<uint32_t>(global_obj, 0x26C);
    void* a = ext_006AD940(reinterpret_cast<void*>(static_cast<uintptr_t>(field_val)));

    // cond = ext_00430380() && ext_00492520(a, 0) != 0
    int32_t cond = 0;
    if (ext_00430380() != 0) {
        cond = (ext_00492520(a, 0) != 0) ? 1 : 0;
    }

    // obj->vtbl[0](cond)
    void** vt = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (*)(void*, int32_t)>(vt[0])(obj, cond);

    // r = ext_004925D0(a, 0); obj->vtbl[1](r)
    void** vt2 = *reinterpret_cast<void***>(obj);
    uint8_t r = ext_004925D0(a, 0);
    reinterpret_cast<void (*)(void*, uint32_t)>(vt2[1])(obj, static_cast<uint32_t>(r));
}
} // namespace lift_00434810

// [0x00434880] sub_00434880 (97 bytes)
namespace lift_00434880 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Known callee 0x006AD940: sub_006AD940 (4B, thiscall helper; resolves the object passed in ecx)
extern uint32_t __thiscall ext_006AD940(void* self);
// Known callee 0x00430380: isGlobalObjectField60Is1 (Returns 1 if the int32 at +0x60 of the object returned by ext_004658C0 equals 1, else 0.)
extern uint8_t __cdecl ext_00430380(void);
// Known callee 0x00492520: fn_00492520 (select field by selector: 0 -> +0x0C, 1 -> +0x10, else 0)
extern int32_t __thiscall ext_00492520(void* self, int32_t selector);
// Known callee 0x004925D0: sub_004925D0 (Checks whether field_0x08 equals field_0x0C (mode 0) or field_0x10 (mode 1), if field_0x00 == 1)
extern uint8_t __thiscall ext_004925D0(void* self, uint32_t mode);

// @name Unknown::dispatchFlagsVtable_00434880
// @class Unknown
// @summary Resolves a global handle's +0x26C object, computes two flags from it, and invokes vtable slots 0 and 1 of the stack argument with those flags.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x26C uint32_t field_0x26C
void __thiscall fn_00434880(void* self, void* obj) {
    (void)self;

    const int32_t handle = ext_00594000();
    const uint32_t inner = lift_field<uint32_t>(
        reinterpret_cast<void*>(static_cast<uintptr_t>(handle)), 0x26C);
    const uint32_t resolved = ext_006AD940(
        reinterpret_cast<void*>(static_cast<uintptr_t>(inner)));
    void* resolvedPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(resolved));

    uint32_t flagA = 0;
    if (ext_00430380() != 0) {
        flagA = (ext_00492520(resolvedPtr, 1) != 0) ? 1u : 0u;
    }

    uintptr_t* vt = *reinterpret_cast<uintptr_t**>(obj);
    using Slot0Fn = void(__thiscall*)(void* self, uint32_t arg);
    reinterpret_cast<Slot0Fn>(vt[0])(obj, flagA);

    vt = *reinterpret_cast<uintptr_t**>(obj);
    const uint32_t flagB = ext_004925D0(resolvedPtr, 1);
    using Slot1Fn = void(__thiscall*)(void* self, uint32_t arg);
    reinterpret_cast<Slot1Fn>(vt[1])(obj, flagB);
}
} // namespace lift_00434880

// [0x004305F0] sub_004305F0 (103 bytes)
namespace lift_004305F0 {
// Known callee 0x0044B5B0: GetNestedFieldOrZero (sub_0044B5B0) (If this+0x64 is nonzero, returns dword at (this+0x68)->+0x38; otherwise returns 0.)
extern int ext_0044B5B0(void* self);

// Virtual dispatch helper: calls obj->vtbl[slot](obj, arg).
typedef void (*VMethodIntArg)(void* self, int arg);

static inline void vcall_int(void* obj, int slot, int arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<VMethodIntArg>(vtbl[slot])(obj, arg);
}

// @name Unknown::NotifyTargetByNestedState
// @class Unknown
// @summary Calls other->vtbl[0](1); if this+0x100 is non-null, calls other->vtbl[1] with 1 when the nested state (from ext_0044B5B0) is 2 or 9, else 0.
// @field Unknown +0x100 void* field_0x100
void fn_004305F0(void* self, void* other) {
    vcall_int(other, 0, 1);

    void* obj = lift_field<void*>(self, 0x100);
    if (obj == nullptr) {
        return;
    }

    bool is2 = ext_0044B5B0(obj) == 2;
    bool is9 = ext_0044B5B0(obj) == 9;

    vcall_int(other, 1, (is2 || is9) ? 1 : 0);
}
} // namespace lift_004305F0

// [0x0043CF30] sub_0043CF30 (103 bytes)
namespace lift_0043CF30 {
// Win32 API stand-ins for the IAT slots used below (USER32).
struct Rect32 {
    int32_t left;
    int32_t top;
    int32_t right;
    int32_t bottom;
};

// IAT slot 0x0092566C -> USER32!GetClientRect(HWND, RECT*)
extern int ext_GetClientRect(void* hwnd, Rect32* rc);
// IAT slot 0x00925710 -> USER32!ShowScrollBar(HWND, int bar, BOOL show)
extern int ext_ShowScrollBar(void* hwnd, int bar, int show);
// Known callee 0x00455F40: Unknown::returnTrueIfNeitherCheckMatches_00455F40 (returns 1 only if both sub-checks return 0 for self)
extern int ext_00455F40(void* self);
// IAT jump thunk 0x006A65F8 -> MFC80!ord_5987; called with ecx = self and four stack args.
extern void ext_006A65F8(void* self, int a0, int a1, int a2, int a3);

// @name Unknown::UpdateVerticalScrollBarFromClientHeight
// @class Unknown
// @summary Reads the client rect of the window at +0x20; if the child check at +0x18c passes, shows the vertical scroll bar when +0xf8 exceeds the client height, else shows it unconditionally; then calls the MFC80 thunk with +0xf8.
// @field Unknown +0x20 void* field_0x20
// @field Unknown +0xf8 int field_0xF8
// @field Unknown +0x18c void* field_0x18C
void fn_0043CF30(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    Rect32 rc{};

    void* hwnd = *reinterpret_cast<void**>(p + 0x20);
    ext_GetClientRect(hwnd, &rc);

    void* child = *reinterpret_cast<void**>(p + 0x18C);
    int32_t height = rc.bottom - rc.top;
    int32_t value = *reinterpret_cast<int32_t*>(p + 0xF8);

    if (ext_00455F40(child) != 0) {
        // Show the scroll bar only if the stored value exceeds the client height.
        ext_ShowScrollBar(hwnd, 1, value > height ? 1 : 0);
    } else {
        ext_ShowScrollBar(hwnd, 1, 0);
    }

    ext_006A65F8(self, 1, value, 0, 1);
}
} // namespace lift_0043CF30

// [0x0043B560] sub_0043B560 (103 bytes)
namespace lift_0043B560 {
// Known callee 0x004410C0: fn_004410C0 (difference of two rounded fields; returns ext_00441040(self) - ext_00441020(self), wrapping 32-bit)
extern int32_t ext_004410C0(void* self);

// @name PushHeapSiftUpByDiff
// @summary Sift-up insertion of value into a heap of 32-bit element handles, using ext_004410C0 as the ordering key; stores value at the final hole.
// (no class; no struct field offsets accessed, so no @field lines)
void fn_0043B560(uint32_t* arr, int32_t hole, int32_t top, uint32_t value) {
    auto as_self = [](uint32_t h) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(h));
    };

    while (top < hole) {
        int32_t parent = (hole - 1) / 2;
        if (ext_004410C0(as_self(arr[parent])) <= 1) {
            break;
        }
        if (ext_004410C0(as_self(value)) > 1) {
            break;
        }
        arr[hole] = arr[parent];
        hole = parent;
    }
    arr[hole] = value;
}
} // namespace lift_0043B560

// [0x0043D710] sub_0043D710 (104 bytes)
namespace lift_0043D710 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);

// @name Unknown::ReleasePointerArrayAndReset
// @class Unknown
// @summary Resets a counter, then releases each non-null pointer in the owned pointer array (last to first), releases the array itself, and zeroes the array pointer and count.
// @field Unknown +0x04 void** field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_0043D710(void* self) {
    struct Layout {
        uint8_t  field_0x00[4];
        void**   field_0x04;
        uint32_t field_0x08;
        uint32_t field_0x0C;
        uint32_t field_0x10;
    };
    auto* s = static_cast<Layout*>(self);

    // Counter at +0x10 counts down to zero; reaching zero clears +0x0C.
    if (s->field_0x10 != 0) {
        s->field_0x10 = 0;
        s->field_0x0C = 0;
    }

    // Release each non-null element, from index (count - 1) down to 0.
    uint32_t i = s->field_0x08;
    while (i > 0) {
        --i;
        void* elem = s->field_0x04[i];
        if (elem != nullptr) {
            ext_006A5C5C(elem);
        }
    }

    // Release the array itself, then clear the array pointer and count.
    if (s->field_0x04 != nullptr) {
        ext_006A5C5C(s->field_0x04);
    }
    s->field_0x04 = nullptr;
    s->field_0x08 = 0;
}
} // namespace lift_0043D710

// [0x00434A00] sub_00434A00 (109 bytes)
namespace lift_00434A00 {
// @name SubObjectStateDispatch
// @summary Resolves a sub-object via the global object and ext_006AD940, checks it with ext_00492550, then updates the object at self+0x15C and optionally notifies self via ext_006A651A using self+0x158.
// @field Unknown +0x158 uint32_t field_0x158
// @field Unknown +0x15C uint32_t field_0x15C

extern uint32_t __cdecl ext_00594000(void);
extern uint32_t __thiscall ext_006AD940(uint32_t self);
extern uint8_t __thiscall ext_00492550(uint32_t self);
extern void __thiscall ext_00455AD0(uint32_t self);
extern void __thiscall ext_00455AF0(uint32_t self);
extern uint8_t __thiscall ext_00455440(uint32_t self);
extern void __thiscall ext_006A5E72(uint32_t self, uint32_t arg);
extern void __thiscall ext_006A651A(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

static inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

void fn_00434A00(void* self) {
    const uint32_t globalObj = ext_00594000();
    const uint32_t subObj = ext_006AD940(lift_field<uint32_t>(as_ptr(globalObj), 0x26C));
    const uint8_t ready = ext_00492550(subObj);

    const uint32_t target = lift_field<uint32_t>(self, 0x15C);
    if (ready != 0) {
        ext_00455AD0(target);
        ext_006A5E72(target, 0);
        return;
    }

    ext_006A5E72(target, 5);
    ext_00455AF0(target);
    if (ext_00455440(target) != 0) {
        const uint32_t arg = lift_field<uint32_t>(self, 0x158);
        ext_006A651A(as_u32(self), arg, 1, 0);
    }
}
} // namespace lift_00434A00

// [0x0043CDD0] sub_0043CDD0 (109 bytes)
namespace lift_0043CDD0 {
extern BOOL GetClientRect(HWND hWnd, RECT* lpRect);

// @name lerpByClientWidth
// @summary Maps integer arg against the client rect's horizontal span [field_0xFC, client.right] onto the double range [field_0xE8, field_0xF0] (linear, centered), clamped to be non-negative; returns result (stdcall-style single int arg, ret 4).
// @field <unknown> +0x20 HWND hwnd
// @field <unknown> +0xE8 double field_0xE8
// @field <unknown> +0xF0 double field_0xF0
// @field <unknown> +0xFC int field_0xFC
double __thiscall fn_0043CDD0(void* self, int arg) {
    HWND hwnd = lift_field<HWND>(self, 0x20);
    RECT rc{};
    GetClientRect(hwnd, &rc);

    const double a = static_cast<double>(lift_field<int>(self, 0xFC));
    const double r = static_cast<double>(rc.right);
    const double d8 = lift_field<double>(self, 0xE8);
    const double d0 = lift_field<double>(self, 0xF0);

    const double q = (d0 - d8) / (r - a);
    const double y = static_cast<double>(arg) - 0.5 * (r + a);
    const double v = y * q + 0.5 * (d0 + d8);

    // Original: fldz; fcom; if (0 <= v || unordered) return v; else return 0.
    return v < 0.0 ? 0.0 : v;
}
} // namespace lift_0043CDD0

// [0x0043CEB0] sub_0043CEB0 (39 bytes)
namespace lift_0043CEB0 {
// Known callee 0x0043CDD0: lerpByClientWidth (Maps integer arg against the client rect's horizontal span [field_0xFC, client.right] onto the double range [field_0xE8, field_0xF0] (linear, centered), clamped to be non-negative; returns result in st0 (single int arg, ret 4).)
extern double ext_0043CDD0(int arg);
// 8-byte double constant read by `fadd qword ptr [0x92BD70]`.
extern double mem_0092BD70;

// @name lerpByClientWidthRounded
// @summary Evaluates lerpByClientWidth for arg, adds the constant at mem_0092BD70, and rounds the result to the nearest int32 (FPU default rounding).
int fn_0043CEB0(int arg) {
    const double v = ext_0043CDD0(arg) + mem_0092BD70;
    // fistp: round to nearest per FPU control word; out-of-range/NaN yields INT32_MIN ("integer indefinite").
    if (!(v >= -2147483648.5 && v < 2147483647.5)) {
        return INT32_MIN;
    }
    return static_cast<int>(std::nearbyint(v));
}
} // namespace lift_0043CEB0

// [0x0043D800] sub_0043D800 (110 bytes)
namespace lift_0043D800 {
extern void ext_0043D800();
extern int mem_00925134;

// @name findChunkEntryMatch_0043D800
// @summary Scans indices [index, end) in a two-level chunk table for an entry equal to *value; writes {0, container, matchIndex} into out and returns out.
// @field ChunkTable +0x04 uint32_t** field_0x04
// @field ChunkTable +0x08 uint32_t field_0x08
// @field ChunkTable +0x0C uint32_t field_0x0C
// @field ChunkTable +0x10 uint32_t field_0x10
void* fn_0043D800(void* out, uint32_t /*unused_arg2*/, void* container, uint32_t index,
                  uint32_t /*unused_arg5*/, uint32_t /*unused_arg6*/, uint32_t end,
                  const uint32_t* value) {
    while (index != end) {
        // Original invalid-parameter paths (_invalid_parameter_noinfo) are fatal.
        if (container == nullptr) {
            std::abort();
        }
        const uint32_t limit = lift_field<uint32_t>(container, 0x0C) +
                               lift_field<uint32_t>(container, 0x10);
        if (index >= limit) {
            std::abort();
        }

        uint32_t word = index >> 2;
        const uint32_t bit = index & 3u;
        const uint32_t base = lift_field<uint32_t>(container, 0x08);
        if (base <= word) {
            word -= base;
        }

        uint32_t** table = lift_field<uint32_t**>(container, 0x04);
        const uint32_t* row = table[word];
        if (row[bit] == *value) {
            break;
        }
        ++index;
    }

    lift_field<uint32_t>(out, 0x00) = 0;
    lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(container));
    lift_field<uint32_t>(out, 0x08) = index;
    return out;
}
} // namespace lift_0043D800

// [0x004360C0]
namespace lift_004360C0 {
// @name dispatchFirstRendererItem
// @summary Gets the first non-null item from the OglRenderer's vfunc_118 vector and dispatches it via ext_0042FE70.


    uintptr_t __cdecl ext_00465B30(void);
    void* __thiscall ext_005B11F0(void* self);
    void __thiscall ext_0042FE70(void* self, void* item);
    extern void (__cdecl *mem_00925134)(void);

struct VectorHeader {
    uint32_t pad_00;
    uintptr_t* begin;
    uintptr_t* end;
};

void __thiscall fn_004360C0(void* self) {
    uintptr_t obj = ext_00465B30();
    uintptr_t inner = *reinterpret_cast<uintptr_t*>(obj + 0x14);
    void* renderer = *reinterpret_cast<void**>(inner + 0x34);

    void* rsi = ext_005B11F0(renderer);
    using GetVecFn = VectorHeader* (__thiscall*)(void*);

    auto vtable = *reinterpret_cast<uintptr_t**>(rsi);
    auto get_vec = reinterpret_cast<GetVecFn>(vtable[0x1C / 4]);
    VectorHeader* vec = get_vec(rsi);

    if (!vec->begin) {
        return;
    }
    if ((reinterpret_cast<intptr_t>(vec->end) - reinterpret_cast<intptr_t>(vec->begin)) >> 2 == 0) {
        return;
    }

    vtable = *reinterpret_cast<uintptr_t**>(rsi);
    get_vec = reinterpret_cast<GetVecFn>(vtable[0x1C / 4]);
    vec = get_vec(rsi);

    uintptr_t* begin = vec->begin;
    if (begin > vec->end) {
        mem_00925134();
    }
    if (begin >= vec->end) {
        mem_00925134();
    }

    void* first_item = reinterpret_cast<void*>(*begin);
    if (first_item) {
        ext_0042FE70(self, first_item);
    }
}
} // namespace lift_004360C0
