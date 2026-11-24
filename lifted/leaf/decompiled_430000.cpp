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
