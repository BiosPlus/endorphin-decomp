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

// [0x00437DC0] sub_00437DC0 (18 bytes)
namespace lift_00437DC0 {
extern void ext_00436FA0(void* arg, int flag);

// @name sub_00437DC0
// @summary Auto-lifted identical-shape clone of 0x005A9960 (NMData::BackGroundData::vfunc_6).
void fn_00437DC0(void* arg) {
    ext_00436FA0(arg, 9632248);
}
} // namespace lift_00437DC0

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
