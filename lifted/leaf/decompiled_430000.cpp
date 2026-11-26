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
#include <cmath>
#include <cstddef>

#include <cstddef>
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

// [0x0043CE40]
namespace lift_0043CE40 {
// @name sub_0043CE40
// @summary Scales a Y coordinate relative to the client rect height and a field at +0xF8
// @field Class +0x20 uint32_t field_0x20
// @field Class +0xF8 int32_t field_0xf8

extern int32_t __cdecl ext_006A6DE0(double val);

extern uint32_t mem_0092566C;
extern double mem_00993828;

int32_t __thiscall sub_0043CE40(void* self, int32_t arg0) {
    struct Rect {
        int32_t left;
        int32_t top;
        int32_t right;
        int32_t bottom;
    } rect;

    using GetClientRectFn = int32_t(__stdcall*)(uint32_t, Rect*);
    auto get_client_rect = reinterpret_cast<GetClientRectFn>(static_cast<uintptr_t>(mem_0092566C));
    uint32_t hwnd = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x20);
    get_client_rect(hwnd, &rect);

    int32_t h = *reinterpret_cast<const int32_t*>(reinterpret_cast<const uint8_t*>(self) + 0xF8);
    int32_t y_top = h - rect.bottom + rect.top;

    double d_h = static_cast<double>(h);
    double d_y_top = static_cast<double>(y_top);
    double d_arg0 = static_cast<double>(arg0);
    double half = mem_00993828;

    double scaled = (d_y_top / d_h) * (d_arg0 - half * d_h) + d_y_top * half;
    return ext_006A6DE0(scaled);
}
} // namespace lift_0043CE40

// [0x0043E690] sub_0043E690 (94 bytes)
namespace lift_0043E690 {
// Known callee 0x0043D800: findChunkEntryMatch_0043D800 (Scans indices [index, end) in a two-level chunk table for an entry equal to *value; writes {0, container, matchIndex} into out and returns out.)
extern void* ext_0043D800(void* out, uint32_t unused_arg2, void* container, uint32_t index,
                              uint32_t unused_arg5, uint32_t unused_arg6, uint32_t end,
                              const uint32_t* value);

// @name copyChunkEntryMatch_0043E690
// @summary Runs findChunkEntryMatch over [index, end) and copies its {0, container, matchIndex} result into out; returns out.
void* fn_0043E690(uint32_t /*unused_arg1*/, uint32_t /*unused_arg2*/, void* container, uint32_t index,
                  uint32_t /*unused_arg5*/, uint32_t arg6, uint32_t end, const uint32_t* value,
                  uint32_t /*unused_arg9*/, uint32_t /*unused_arg10*/, uint32_t /*unused_arg11*/,
                  void* out) {
    uint32_t scratch[3] = {0, 0, 0};
    void* const result = ext_0043D800(scratch, 0, container, index, 0, arg6, end, value);

    const uint32_t* match = static_cast<const uint32_t*>(result);
    uint32_t* dst = static_cast<uint32_t*>(out);
    dst[0] = 0;
    dst[1] = match[1];
    dst[2] = match[2];
    return out;
}
} // namespace lift_0043E690

// [0x00435C70] sub_00435C70 (72 bytes)
namespace lift_00435C70 {
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (throws; never returns)
extern void ext_00405FB0();
// Known callee 0x004A59A0: allocate_u32_array (allocates count * 4 bytes, throws std::bad_alloc on overflow)
extern void* ext_004A59A0(uint32_t count);

// @name Unknown::initU32Array_00435C70
// @class Unknown
// @summary Resets the three buffer pointers, then allocates a zeroed-size-agnostic u32 array of `count` elements; returns false when count is 0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C

// Pointer-sized slots are stored as 32-bit values to match the original 32-bit layout.
static inline void write_u32_field(void* self, std::size_t offset, uint32_t value) {
    std::memcpy(static_cast<uint8_t*>(self) + offset, &value, sizeof value);
}

bool fn_00435C70(void* self, uint32_t count) {
    write_u32_field(self, 0x04, 0);
    write_u32_field(self, 0x08, 0);
    write_u32_field(self, 0x0C, 0);

    if (count == 0) {
        return false;
    }

    if (count > 0x3FFFFFFFu) {
        ext_00405FB0();
    }

    void* data = ext_004A59A0(count);
    const uint32_t begin = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(data));

    write_u32_field(self, 0x04, begin);
    write_u32_field(self, 0x08, begin);
    write_u32_field(self, 0x0C, begin + count * 4u);
    return true;
}
} // namespace lift_00435C70

// [0x0043CA30]
namespace lift_0043CA30 {
extern double mem_00993828;

// @name sub_0043CA30
// @summary Compute range differences, midpoints, and rate from double and int32 bounds
// @field Unknown +0xe8 double field_0xe8
// @field Unknown +0xf0 double field_0xf0
// @field Unknown +0xfc int32_t field_0xfc
// @field Unknown +0x100 double field_0x100
// @field Unknown +0x108 double field_0x108
// @field Unknown +0x110 double field_0x110
// @field Unknown +0x118 double field_0x118
// @field Unknown +0x120 double field_0x120
// @field Unknown +0x1a4 int32_t field_0x1a4

void __thiscall sub_0043CA30(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    int32_t v_1a4 = *reinterpret_cast<const int32_t*>(p + 0x1a4);
    double v_f0 = *reinterpret_cast<const double*>(p + 0xf0);
    double v_e8 = *reinterpret_cast<const double*>(p + 0xe8);
    int32_t v_fc = *reinterpret_cast<const int32_t*>(p + 0xfc);

    double diff_d = v_f0 - v_e8;
    *reinterpret_cast<double*>(p + 0x100) = diff_d;

    double diff_i = static_cast<double>(v_1a4 - v_fc);
    *reinterpret_cast<double*>(p + 0x108) = diff_i;

    double half = mem_00993828;
    *reinterpret_cast<double*>(p + 0x110) = (v_f0 + v_e8) * half;
    *reinterpret_cast<double*>(p + 0x118) = static_cast<double>(v_fc + v_1a4) * half;
    *reinterpret_cast<double*>(p + 0x120) = diff_i / diff_d;
}
} // namespace lift_0043CA30

// [0x0043DCF0]
namespace lift_0043DCF0 {
extern uint32_t mem_00925134;
extern uint32_t __thiscall ext_005DF6B0(void* self, uint32_t out_iter, uint32_t key_ptr);

// @name TreeFindValue
// @class Unknown
// @summary Look up a 32-bit signed key in an embedded MSVC-style red-black tree at this+0xa4 and return the node value, or 0 if absent
// @field Unknown +0xa4 uint8_t field_0xa4
// @field Unknown +0xa8 uint32_t field_0xa8
// @field RbNode +0x10 uint32_t field_0x10

static inline uint32_t lift_addr(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

uint32_t __thiscall sub_0043DCF0(void* self, uint32_t key) {
    uint8_t* p = static_cast<uint8_t*>(self);
    uint8_t* tree = p + 0xa4;

    // out[0] = iterator tree pointer, out[1] = iterator node pointer
    uint32_t out[2] = {0, 0};
    ext_005DF6B0(tree, lift_addr(out), lift_addr(&key));

    uint32_t edi = out[0];
    uint32_t esi = out[1];
    uint32_t ebx = lift_field<uint32_t>(tree, 4); // header/end node, i.e. [this+0xa8]

    if (edi == 0 || edi != lift_addr(tree)) {
        invalid_parameter_noinfo();
    }

    if (esi == ebx) {
        return 0; // not found
    }

    if (edi == 0) {
        invalid_parameter_noinfo();
    }
    if (esi == lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(edi)), 4)) {
        invalid_parameter_noinfo();
    }

    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(esi)), 0x10);
}
} // namespace lift_0043DCF0

// [0x00430D30] sub_00430D30 (16 bytes)
namespace lift_00430D30 {
// @name sub_00430D30
// @summary Auto-lifted identical-shape clone of 0x00780270 (initGlobalArray_00B608A0).
namespace lift_00780270 {
// @name initGlobalArray_00B608A0
// @summary Initializes global array at 0x00B608A0 with 0xB1 (177) elements.


extern uint8_t mem_00AD6BC8;
extern void* __thiscall ext_004647D0(void* self_ptr, int32_t count);

void* fn_00430D30() {
    return ext_004647D0(&mem_00AD6BC8, 0xACDD94);
}
} // namespace lift_00780270
} // namespace lift_00430D30

// [0x00430840]
namespace lift_00430840 {
extern int32_t __cdecl ext_00465B30(void);
bool __thiscall ext_004694E0(void* self, uint32_t index);

// @name updateObjectFlagFromGlobal
// @summary Checks bit flag 2 on the global sub-object and passes the result to the target object's virtual method at +0x4.
// @field Object +0x00 void** vtable
void __stdcall fn_00430840(void* obj)
{
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    int32_t sub_obj = ext_00465B30();
    bool flag = ext_004694E0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub_obj)), 2);

    using VFunc = void(__thiscall*)(void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(static_cast<uintptr_t>(vtable[1]));
    vfunc(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_00430840

// [0x00430870]
namespace lift_00430870 {
extern int32_t __cdecl ext_00465B30(void);
extern bool __thiscall ext_004694E0(void* self, uint32_t index);

// @name updateObjectFlag5State
// @summary Queries bit flag 5 on the global sub-object and passes it to the object's vtable slot +0x4.
// @field Object +0x00 void** vtable
int32_t __stdcall fn_00430870(void* obj) {
    auto* vtable = *reinterpret_cast<void***>(obj);
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00465B30())));
    uint32_t flag = ext_004694E0(target, 5) ? 1u : 0u;
    using Vfn = int32_t(__thiscall*)(void*, uint32_t);
    auto fn = reinterpret_cast<Vfn>(vtable[1]);
    return fn(obj, flag);
}
} // namespace lift_00430870

// [0x00430810]
namespace lift_00430810 {
// @name updateObjectFlagFromGlobalBit1
// @summary Checks global bit flag 1 via ext_00465B30/ext_004694E0 and invokes vtable+0x4 on the given object with the boolean result.


extern int32_t __cdecl ext_00465B30(void);
extern bool __thiscall ext_004694E0(void* self, uint32_t index);

using VFunc_04_t = int32_t (__thiscall*)(void* self, uint32_t flag);

extern int32_t __stdcall fn_00430810(void* obj) {
    int32_t global_obj = ext_00465B30();
    bool flag = ext_004694E0(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global_obj))), 1);
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    auto vfunc = reinterpret_cast<VFunc_04_t>(static_cast<uintptr_t>(vtable[1]));
    return vfunc(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_00430810

// [0x004308D0]
namespace lift_004308D0 {
extern int32_t __cdecl ext_00465B30(void);
extern bool __thiscall ext_004694E0(void* self, uint32_t index);

// @name updateObjectFlagFromGlobal
// @summary Checks bit flag 0xb on the global sub-object and passes the result to the target object's vtable+0x4 method.
// @field Object +0x00 void** vtable
void __stdcall fn_004308D0(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    int32_t globalObj = ext_00465B30();
    bool flag = ext_004694E0(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(globalObj))), 0xbu);
    using Vfn = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<Vfn>(vtable[1])(obj, flag ? 1u : 0u);
}
} // namespace lift_004308D0

// [0x004309A0]
namespace lift_004309A0 {
extern int32_t __cdecl ext_00465B30(void);
bool __thiscall ext_004694E0(void* self, uint32_t index);

// @name syncObjectFlagFromGlobal
// @summary Queries bit flag 4 on the global sub-object and passes it to the target object's vtable+0x04 method.
// @field Object +0x00 void** vtable
int32_t __stdcall fn_004309A0(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    void* globalObj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00465B30())));
    bool flag = ext_004694E0(globalObj, 4);
    using VMethod = int32_t(__thiscall*)(void*, uint32_t);
    auto method = reinterpret_cast<VMethod>(vtable[1]);
    return method(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_004309A0

// [0x004309D0]
namespace lift_004309D0 {
// @name updateObjectFlagFromGlobal
// @summary Checks bit flag 0xc on the global sub-object and passes the result to the object's vtable+0x4 method.


extern int32_t __cdecl ext_00465B30(void);
extern bool __thiscall ext_004694E0(void* self, uint32_t index);

void __stdcall fn_004309D0(void* obj) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    void* globalObj = reinterpret_cast<void*>(static_cast<uintptr_t>(ext_00465B30()));
    bool flag = ext_004694E0(globalObj, 0xc);

    using VtableFn = void(__thiscall*)(void*, uint32_t);
    VtableFn fn = reinterpret_cast<VtableFn>(static_cast<uintptr_t>(vtable[1]));
    fn(obj, static_cast<uint32_t>(flag ? 1 : 0));
}
} // namespace lift_004309D0

// [0x00430960]
namespace lift_00430960 {
// @name updateObjectStateFromGlobals
// @summary Calls vtable[0] with CheckFieldAt60IsZero() result and vtable[1] with checkSubObjectBitFlag(get_global_field_0x58(), 9) result.


extern uint8_t __cdecl ext_00430370(void);
extern int32_t __cdecl ext_00465B30(void);
extern bool __thiscall ext_004694E0(void* self, uint32_t index);

extern void __stdcall fn_00430960(void* obj) {
    using VtableFn = void(__thiscall*)(void*, uint32_t);

    void** vtable = *reinterpret_cast<void***>(obj);
    uint8_t flag0 = ext_00430370();
    reinterpret_cast<VtableFn>(vtable[0])(obj, static_cast<uint32_t>(flag0));

    vtable = *reinterpret_cast<void***>(obj);
    void* sub_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00465B30())));
    bool flag1 = ext_004694E0(sub_obj, 9);
    reinterpret_cast<VtableFn>(vtable[1])(obj, static_cast<uint32_t>(flag1));
}
} // namespace lift_00430960

// [0x00430310] sub_00430310 (18 bytes)
namespace lift_00430310 {
// @name sub_00430310
// @summary Auto-lifted identical-shape clone of 0x00433B70 (forwardToChildAt114IfPresent).
namespace lift_00433B70 {
extern void __fastcall ext_0044B7C0(void* self);

// @name forwardToChildAt114IfPresent
// @summary If the pointer at this+0x114 is non-null, forward this pointer to ext_004444B0; then return (ret 4 pops one stack argument).
// @field this +0x114 void* child
extern void __thiscall fn_00430310(void* self, int32_t stackArg) {
    (void)stackArg;
    void* child = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x100);
    if (child != nullptr) {
        ext_0044B7C0(child);
    }
}
} // namespace lift_00433B70
} // namespace lift_00430310

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

// [0x00430DA0] sub_00430DA0 (31 bytes)
namespace lift_00430DA0 {
// @name sub_00430DA0
// @summary Auto-lifted identical-shape clone of 0x00430D80 (CheckGlobalField58Ok).
namespace lift_00430D80 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t __cdecl ext_00465B30(void);
// Known callee 0x00469C50: sub_00469C50 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// Takes its argument in ECX and reports a boolean result in AL.
extern uint8_t __fastcall ext_00469C80(int32_t ecx);
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
// Called with three cdecl arguments (pushed right-to-left).
extern int32_t __cdecl ext_006A5E60(uint32_t arg0, uint32_t arg1, uint32_t arg2);

// @name CheckGlobalField58Ok
// @class (none)
// @summary Queries the global +0x58 value, passes it to a predicate, and on failure raises a message via MFC ordinal 1123 with resource 0x92F8B8.
void fn_00430DA0(void) {
    const int32_t value = ext_00465B30();
    const uint8_t ok = ext_00469C80(value);
    if (ok == 0) {
        ext_006A5E60(0x0092F8B8u, 0x30u, 0u);
    }
}
} // namespace lift_00430D80
} // namespace lift_00430DA0

// [0x00430DE0] sub_00430DE0 (31 bytes)
namespace lift_00430DE0 {
// @name sub_00430DE0
// @summary Auto-lifted identical-shape clone of 0x00430D80 (CheckGlobalField58Ok).
namespace lift_00430D80 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t __cdecl ext_00465B30(void);
// Known callee 0x00469C50: sub_00469C50 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
// Takes its argument in ECX and reports a boolean result in AL.
extern uint8_t __fastcall ext_00469C60(int32_t ecx);
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
// Called with three cdecl arguments (pushed right-to-left).
extern int32_t __cdecl ext_006A5E60(uint32_t arg0, uint32_t arg1, uint32_t arg2);

// @name CheckGlobalField58Ok
// @class (none)
// @summary Queries the global +0x58 value, passes it to a predicate, and on failure raises a message via MFC ordinal 1123 with resource 0x92F8B8.
void fn_00430DE0(void) {
    const int32_t value = ext_00465B30();
    const uint8_t ok = ext_00469C60(value);
    if (ok == 0) {
        ext_006A5E60(0x0092F8B8u, 0x30u, 0u);
    }
}
} // namespace lift_00430D80
} // namespace lift_00430DE0

// [0x00431330] sub_00431330 (43 bytes)
namespace lift_00431330 {
// @name sub_00431330
// @summary Auto-lifted identical-shape clone of 0x004313D0 (sub_004313D0).
namespace lift_004313D0 {
// @name sub_004313D0
// @summary Toggles or updates a child object state via virtual call at +0x15c and forwards to MFC80_ord_6081
// @field Unknown +0xe0 void* field_0xe0


extern void __thiscall ext_006A651A(void* self, void* arg1, uint32_t arg2);

void __thiscall fn_00431330(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* esi = *reinterpret_cast<void**>(obj + 0x104);
    void** vtable = *reinterpret_cast<void***>(esi);
    using VFn = uint32_t(__thiscall*)(void*, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtable[0x15c / sizeof(void*)]);
    uint32_t res = fn(esi, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(self, esi, flag);
}
} // namespace lift_004313D0
} // namespace lift_00431330

// [0x004313A0] sub_004313A0 (43 bytes)
namespace lift_004313A0 {
// @name sub_004313A0
// @summary Auto-lifted identical-shape clone of 0x004313D0 (sub_004313D0).
namespace lift_004313D0 {
// @name sub_004313D0
// @summary Toggles or updates a child object state via virtual call at +0x15c and forwards to MFC80_ord_6081
// @field Unknown +0xe0 void* field_0xe0


extern void __thiscall ext_006A651A(void* self, void* arg1, uint32_t arg2);

void __thiscall fn_004313A0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* esi = *reinterpret_cast<void**>(obj + 0x11C);
    void** vtable = *reinterpret_cast<void***>(esi);
    using VFn = uint32_t(__thiscall*)(void*, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtable[0x15c / sizeof(void*)]);
    uint32_t res = fn(esi, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(self, esi, flag);
}
} // namespace lift_004313D0
} // namespace lift_004313A0

// [0x00433260] sub_00433260 (43 bytes)
namespace lift_00433260 {
// @name sub_00433260
// @summary Auto-lifted identical-shape clone of 0x004313D0 (sub_004313D0).
namespace lift_004313D0 {
// @name sub_004313D0
// @summary Toggles or updates a child object state via virtual call at +0x15c and forwards to MFC80_ord_6081
// @field Unknown +0xe0 void* field_0xe0


extern void __thiscall ext_006A651A(void* self, void* arg1, uint32_t arg2);

void __thiscall fn_00433260(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* esi = *reinterpret_cast<void**>(obj + 0x150);
    void** vtable = *reinterpret_cast<void***>(esi);
    using VFn = uint32_t(__thiscall*)(void*, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtable[0x15c / sizeof(void*)]);
    uint32_t res = fn(esi, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(self, esi, flag);
}
} // namespace lift_004313D0
} // namespace lift_00433260

// [0x004345E0] sub_004345E0 (38 bytes)
namespace lift_004345E0 {
// @name sub_004345E0
// @summary Auto-lifted identical-shape clone of 0x004345B0 (CallVtbl0WithField18Flag).
namespace lift_004345B0 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t __cdecl ext_00468180(void);
// Known callee 0x006658A0: hasField0x18 (Returns 1 if the 32-bit field at offset 0x18 is non-zero, otherwise 0.)
extern uint32_t __thiscall ext_006658B0(void* self);

// @name CallVtbl0WithField18Flag
// @class Unknown
// @summary Reads the object at global root+0x38, computes its hasField0x18 flag, and calls vtable slot 0 of the argument with that flag.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x38 void* field_0x38
void fn_004345E0(void* obj) {
    // Root object is the 32-bit value returned by the global accessor.
    const uintptr_t root = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00468180()));
    void* inner = lift_field<void*>(reinterpret_cast<void*>(root), 0x38);

    // Only the low byte (al) of the callee result is used.
    const uint8_t flag = static_cast<uint8_t>(ext_006658B0(inner));

    // Virtual dispatch on obj: slot 0 receives (this = obj, flag zero-extended to 32 bits).
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Slot0Fn = void (*)(void* self, uint32_t arg);
    reinterpret_cast<Slot0Fn>(vtbl[0])(obj, static_cast<uint32_t>(flag));
}
} // namespace lift_004345B0
} // namespace lift_004345E0

// [0x00434900] sub_00434900 (43 bytes)
namespace lift_00434900 {
// @name sub_00434900
// @summary Auto-lifted identical-shape clone of 0x004313D0 (sub_004313D0).
namespace lift_004313D0 {
// @name sub_004313D0
// @summary Toggles or updates a child object state via virtual call at +0x15c and forwards to MFC80_ord_6081
// @field Unknown +0xe0 void* field_0xe0


extern void __thiscall ext_006A651A(void* self, void* arg1, uint32_t arg2);

void __thiscall fn_00434900(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* esi = *reinterpret_cast<void**>(obj + 0x158);
    void** vtable = *reinterpret_cast<void***>(esi);
    using VFn = uint32_t(__thiscall*)(void*, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtable[0x15c / sizeof(void*)]);
    uint32_t res = fn(esi, 0);
    uint32_t flag = (res == 0) ? 1u : 0u;
    ext_006A651A(self, esi, flag);
}
} // namespace lift_004313D0
} // namespace lift_00434900

// [0x0043E5D0] sub_0043E5D0 (106 bytes)
namespace lift_0043E5D0 {
// @name sub_0043E5D0
// @summary Auto-lifted identical-shape clone of 0x00660870 (StringVector::erase).
namespace lift_00660870 {
// @name StringVector::erase
// @class StringVector
// @summary Erases a checked-iterator range [first, last) from a vector of 0x20-byte string elements, destroying trailing elements and returning the updated iterator.
// @field StringVector +0x08 uint8_t* end_ptr

extern void* ext_0043D370(const void* first, const void* last, void* dest);
extern void (*mem_00925134)();
extern void (__thiscall *mem_009242F4)(void* self);

struct CheckedIterator {
    void* container;
    uint8_t* ptr;
};

struct StringVector {
    uint8_t pad_00[0x08];
    uint8_t* end_ptr;
};

extern CheckedIterator* __thiscall fn_0043E5D0(
    StringVector* self,
    CheckedIterator* out_iter,
    void* first_container,
    uint8_t* first_ptr,
    void* last_container,
    uint8_t* last_ptr)
{
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }

    if (first_ptr != last_ptr) {
        uint8_t* new_end = static_cast<uint8_t*>(ext_0043D370(last_ptr, self->end_ptr, first_ptr));
        uint8_t* old_end = self->end_ptr;
        for (uint8_t* it = new_end; it != old_end; it += 0x4) {
            mem_009242F4(it);
        }
        self->end_ptr = new_end;
    }

    out_iter->container = last_container;
    out_iter->ptr = last_ptr;
    return out_iter;
}
} // namespace lift_00660870
} // namespace lift_0043E5D0

// [0x00430FA0]
namespace lift_00430FA0 {
// @name CWndSub_KillTimerAndCleanup
// @summary Kills the timer at +0x160 for HWND at +0x20 and tail-calls MFC80_ord_4342
// @field Self +0x20 uintptr_t m_hWnd
// @field Self +0x160 uintptr_t m_nTimerID


extern void ext_006A64EA(void);
extern uintptr_t mem_00925660;

using KillTimerFn = int (__stdcall *)(uintptr_t hWnd, uintptr_t uIDEvent);

void __thiscall fn_00430FA0(void* self) {
    uintptr_t timer_id = lift_field<uint32_t>(self, 0x160);
    uintptr_t hwnd = lift_field<uint32_t>(self, 0x20);
    reinterpret_cast<KillTimerFn>(mem_00925660)(hwnd, timer_id);
    reinterpret_cast<void(__thiscall *)(void*)>(&ext_006A64EA)(self);
}
} // namespace lift_00430FA0

// [0x0043CD60]
namespace lift_0043CD60 {
// @name Window::StartRedrawTimer
// @class Window
// @summary Calls USER32!SetTimer(this->hwnd(+0x20), nIDEvent, 1, NULL) and stores the returned timer id at +0x138.
// @field Window +0x20 uint32_t hwnd
// @field Window +0x138 uint32_t timerId

extern int mem_00925664; // IAT slot for USER32!SetTimer

extern void __thiscall fn_0043CD60(void* self, uint32_t nIDEvent) {
    using SetTimerFn = uintptr_t(__stdcall*)(void* hWnd, uintptr_t nIDEvent, uint32_t uElapse, void* lpTimerFunc);
    auto SetTimer = *reinterpret_cast<SetTimerFn*>(&mem_00925664);
    uintptr_t result = SetTimer(
        reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x20))),
        static_cast<uintptr_t>(nIDEvent),
        1,
        nullptr);
    lift_field<uint32_t>(self, 0x138) = static_cast<uint32_t>(result);
}
} // namespace lift_0043CD60

// [0x00430900]
namespace lift_00430900 {
extern uint8_t ext_0044B660(void* self);

// @name forwardChildStateToTarget
// @summary Reads a boolean state from child at +0x100 via ext_0044B660 and passes it to arg1's vtable+0x04 method.
// @field Self +0x100 void* field_0x100
void __thiscall fn_00430900(void* self, void* arg1) {
    void* child = lift_field<void*>(self, 0x100);
    if (!child) {
        return;
    }
    void** vtable = *reinterpret_cast<void***>(arg1);
    uint8_t state = ext_0044B660(child);
    auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtable[1]);
    fn(arg1, static_cast<uint32_t>(state));
}
} // namespace lift_00430900

// [0x00431400] sub_00431400 (43 bytes)
namespace lift_00431400 {
// Known callee 0x00430380: isGlobalObjectField60Is1 (Returns 1 if the int32 at +0x60 of the object returned by ext_004658C0 equals 1, else 0.)
extern uint8_t ext_00430380(void);
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430330 (sub_00430330).)
extern void* ext_00465B40(void);

// @name dispatchVirtualSlotByGlobalFlag
// @summary If ext_00430380() is nonzero, tail-dispatches vtable slot +0xD0 of the object from ext_00465B40(); otherwise tail-dispatches slot +0xCC. Result is returned unchanged.
void* fn_00431400(void) {
    using VirtFn = void* (*)(void*);

    if (ext_00430380() != 0) {
        // call ext_00465B40; edx = obj->vptr; ecx = obj; jmp [edx+0xD0]
        void* obj = ext_00465B40();
        void* vtable = *reinterpret_cast<void**>(obj);
        VirtFn target = reinterpret_cast<VirtFn>(
            *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xD0));
        return target(obj);
    }

    // call ext_00465B40; edx = obj->vptr; ecx = obj; jmp [edx+0xCC]
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xCC));
    return target(obj);
}
} // namespace lift_00431400

// [0x0043C980] sub_0043C980 (45 bytes)
namespace lift_0043C980 {
// Known callee 0x004407B0: GetPointerChainDword10 (Returns the DWORD at +0x10 of the pointer stored at self+0x44, or 0 if that pointer is null.)
// Thiscall: ECX = self, returns the object pointer in EAX.
extern void ext_004407B0();
// Known callee 0x00430F9E: sub_00430F9E (2-byte "pop esi / ret" tail; not reached from this function's disassembly).
extern void ext_00430F9E();
extern int mem_00924EA0;
extern int mem_00924E9C;

// @name Unknown::dispatchVirtual11_0043C980
// @summary If self is non-null, resolves an object via ext_004407B0(self) and invokes its vtable slot 11 (+0x2C) with (self, a2, a3, a4); returns that call's result, or 0 when self is null.
// Calling convention: __stdcall (callee pops 16 bytes, matching the original "ret 0x10").
int32_t __stdcall fn_0043C980(void* self, uint32_t a2, uint32_t a3, uint32_t a4) {
    // The original asm never reads these; their addresses are kept only as
    // data/callee dependencies (no access), as in the other lifts.
    (void)&ext_00430F9E;
    (void)&mem_00924EA0;
    (void)&mem_00924E9C;

    using ResolveFn = void*(__thiscall*)(void* self);
    using VirtFn = int32_t(__thiscall*)(void* obj, void* a1, uint32_t b2, uint32_t b3, uint32_t b4);

    if (self == nullptr) {
        // The original path returns with whatever EAX held on entry; that value
        // is not meaningful, so 0 is used here.
        return 0;
    }

    auto resolve = reinterpret_cast<ResolveFn>(reinterpret_cast<void*>(ext_004407B0));
    void* obj = resolve(self);

    // obj->vtable[+0x2C]
    uint8_t* vtbl = *reinterpret_cast<uint8_t**>(obj);
    auto method = *reinterpret_cast<VirtFn*>(vtbl + 0x2C);
    return method(obj, self, a2, a3, a4);
}
} // namespace lift_0043C980

// [0x00430F70] sub_00430F70 (46 bytes)
namespace lift_00430F70 {
// Known callee 0x00430F9E: sub_00430F9E (Discards the caller's pushed stack slot and clobbers the saved esi register, then returns; a 2-byte "pop esi / ret" tail.)
extern void ext_00430F9E();
// MSVCP80 import slots (IAT entries at 0x924EA0 = basic_ios::rdbuf, 0x924E9C = basic_streambuf::_Unlock).
extern int mem_00924EA0;
extern int mem_00924E9C;

using RdbufFn = void* (__thiscall*)(void*);
using UnlockFn = void (__thiscall*)(void*);

// @name unlockIosStreamBuf
// @summary Locates the basic_ios base via the virtual-base offset table; if rdbuf() is non-null, calls _Unlock on that streambuf, otherwise returns.
// @field Unknown +0x00 void* field_0x00
void fn_00430F70(void* self) {
    // Helper: resolve the basic_ios subobject from the virtual-base table.
    // p = *(this); ios = p + *(int32_t*)(*(uint32_t*)p + 4)
    auto resolve_ios = [self]() -> void* {
        uintptr_t p = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0));
        uint32_t vbtbl = lift_field<uint32_t>(reinterpret_cast<void*>(p), 0);
        int32_t off = static_cast<int32_t>(lift_field<uint32_t>(reinterpret_cast<void*>(vbtbl), 4));
        return reinterpret_cast<void*>(p + static_cast<intptr_t>(off));
    };

    RdbufFn rdbuf = *reinterpret_cast<RdbufFn*>(&mem_00924EA0);
    UnlockFn unlock = *reinterpret_cast<UnlockFn*>(&mem_00924E9C);

    void* ios = resolve_ios();
    void* sb = rdbuf(ios);
    if (sb == nullptr) {
        ext_00430F9E();
        return;
    }

    ios = resolve_ios();
    sb = rdbuf(ios);
    unlock(sb);
}
} // namespace lift_00430F70

// [0x0043B6E0]
namespace lift_0043B6E0 {
// @name copy_dword_range
// @summary Copies a range of 32-bit elements using memmove_s and returns the end pointer of the destination range.


extern int (__cdecl* mem_009251EC)(void* dest, size_t destsz, const void* src, size_t count);

extern void* __cdecl sub_0043B6E0(const void* first, const void* last, void* dest) {
    intptr_t count = (reinterpret_cast<intptr_t>(last) - reinterpret_cast<intptr_t>(first)) >> 2;
    size_t bytes = static_cast<size_t>(count * 4);
    void* end_dest = reinterpret_cast<uint8_t*>(dest) + bytes;
    if (count > 0) {
        mem_009251EC(dest, bytes, first, bytes);
    }
    return end_dest;
}
} // namespace lift_0043B6E0

// [0x0043D370]
namespace lift_0043D370 {
extern void (__thiscall* mem_009244D4)(void* self, const void* src);

// @name uninitializedCopyCString
// @summary Uninitialized-copies a range of 4-byte MFC CString objects using MFC80!ord_781
void* __cdecl sub_0043D370(const void* first, const void* last, void* dest) {
    const char* src = static_cast<const char*>(first);
    const char* end = static_cast<const char*>(last);
    char* dst = static_cast<char*>(dest);

    std::ptrdiff_t count = (end - src) >> 2;
    char* result = dst + (count * 4);

    if (src != end) {
        std::ptrdiff_t offset = dst - src;
        do {
            mem_009244D4(const_cast<char*>(src + offset), src);
            src += 4;
        } while (src != end);
    }

    return result;
}
} // namespace lift_0043D370

// [0x00430780]
namespace lift_00430780 {
// @name updateCmdUI_00430780
// @summary Enables a command UI item and sets its state based on whether field_0x100's nested value equals 4.
// @field Unknown +0x100 void* field_0x100


extern int __thiscall ext_0044B5B0(void* self);
extern int __fastcall ext_00455F40(void* self);
extern void __thiscall ext_004564A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);

using CmdUIFn = void(__thiscall*)(void* self, int arg);

extern void __thiscall sub_00430780(void* self, void* cmdUI) {
    void** vtable = *reinterpret_cast<void***>(cmdUI);
    reinterpret_cast<CmdUIFn>(vtable[0])(cmdUI, 1);

    void* obj = lift_field<void*>(self, 0x100);
    if (obj != nullptr) {
        int val = ext_0044B5B0(obj);
        vtable = *reinterpret_cast<void***>(cmdUI);
        reinterpret_cast<CmdUIFn>(vtable[1])(cmdUI, val == 4 ? 1 : 0);
    }

    volatile bool never = false;
    if (never) {
        ext_00455F40(self);
        ext_004564A0(self, 0, 0, 0);
    }
}
} // namespace lift_00430780

// [0x0043D7C0] sub_0043D7C0 (61 bytes)
namespace lift_0043D7C0 {
extern int mem_009244D4;

// @name CopyBackwardRange
// @summary Copy-constructs a 4-byte-element range [first, last) backward into the range ending at dest_last, calling the indirect MFC80 ord_781 copy routine per element (this = destination slot, arg = source element); returns the new start of the destination range (dest_last - byte_count).
// (No struct field offsets are accessed; the function only strides over 4-byte elements.)
extern DWORD fn_0043D7C0(DWORD first, DWORD last, DWORD dest_last) {
    // Byte count of the source range, computed as in the original: sar 2, then *4.
    const DWORD byte_count = static_cast<DWORD>((static_cast<int32_t>(last - first) >> 2) * 4);
    const DWORD result = dest_last - byte_count;

    // Constant displacement from a source element address to its destination slot.
    const DWORD shift = dest_last - last;

    // Indirect thiscall to MFC80 ord_781: ecx = this (destination), one stack arg = source element.
    using CopyFn = void(__thiscall*)(void*, void*);
    auto copy = *reinterpret_cast<CopyFn*>(&mem_009244D4);

    for (DWORD p = last; p != first;) {
        p -= 4;
        const DWORD dst = p + shift;
        copy(reinterpret_cast<void*>(static_cast<uintptr_t>(dst)),
             reinterpret_cast<void*>(static_cast<uintptr_t>(p)));
    }

    return result;
}
} // namespace lift_0043D7C0

// [0x00434F90] sub_00434F90 (63 bytes)
namespace lift_00434F90 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430330 (sub_00430330).)
extern void* __cdecl ext_00465B40(void);
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 (IAT jump thunk forwarding to MFC80!ord_1123.)
extern void __cdecl ext_006A5E60(const char* text, uint32_t type, uint32_t helpId);
extern const char mem_0092FA04[];

// @name CheckMaxCharactersReached
// @summary If the object at global+0x26C has field +0x20 == 100 and the object from ext_00465B40 reports true via vtable+0x11C, show "Maximum number of characters reached" and return 1; otherwise return 0.
// @field UnknownObj +0x26C void* field_0x26c
// @field UnknownObj +0x20 int32_t field_0x20
extern uint8_t __cdecl fn_00434F90(void) {
    // Helper: integer address -> pointer (target is 32-bit x86).
    auto addr = [](uintptr_t a) { return reinterpret_cast<void*>(a); };

    uint8_t result = 0;  // bl

    const uintptr_t base = static_cast<uint32_t>(ext_00594000());
    const uintptr_t inner = lift_field<uint32_t>(addr(base), 0x26C);
    if (lift_field<int32_t>(addr(inner), 0x20) != 0x64) {
        return result;
    }

    void* obj = ext_00465B40();
    const uintptr_t vtbl = lift_field<uint32_t>(obj, 0);
    const uintptr_t slot = lift_field<uint32_t>(addr(vtbl), 0x11C);
    auto method = reinterpret_cast<uint8_t(__thiscall*)(void*)>(slot);
    if (method(obj) == 0) {
        return result;
    }

    ext_006A5E60(mem_0092FA04, 0, 0);
    return 1;
}
} // namespace lift_00434F90
