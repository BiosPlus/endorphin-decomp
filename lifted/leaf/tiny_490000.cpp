// Lifted C++ translation unit: lifted/leaf/tiny_490000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00491A90(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" int mem_0093EB28;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_00491FC0
// @summary MSVC scalar deleting destructor: calls sub_00491A90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00491FC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00491A90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_0049EB50(void* self);
#include <cstdint>

// [0x004947D0] sub_004947D0 (11 bytes)
// @name sub_004947D0
// @summary Destructor tail-call: restores vtable mem_0093EB28 and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_004947D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093EB28;
    ext_0065C660(self);
}

// [0x00496F00] sub_00496F00 (9 bytes)
// @name sub_00496F00
// @summary This-adjustor thunk: adjusts `this` by +0x4C and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00496F00(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x4C);
}

// [0x0049ED30] sub_0049ED30 (11 bytes)
// @name sub_0049ED30
// @summary This-adjustor thunk: adjusts `this` by +0xC4 and tail-calls sub_0049EB50.
extern "C" void __fastcall fn_0049ED30(void* self) {
    ext_0049EB50(static_cast<char*>(self) + 0xC4);
}

// [0x00492540]
namespace lift_00492540 {
// @name isFieldZero
// @summary Returns true if the 32-bit value at offset 0 of the object is zero.
// @field Object +0x00 uint32_t field_0x00
bool __thiscall fn_00492540(void* self) {
    return *reinterpret_cast<const uint32_t*>(self) == 0;
}
} // namespace lift_00492540

// [0x00494060]
namespace lift_00494060 {
// @name sub_00494060
// @summary XORs a 32-bit value at [ecx] with the first stack argument.
void __thiscall sub_00494060(void* self, uint32_t mask)
{
    *reinterpret_cast<uint32_t*>(self) ^= mask;
}
} // namespace lift_00494060

// [0x00493E30]
namespace lift_00493E30 {
// @name forwardVtable1A0
// @summary Tail-calls vtable slot 0x1A0 on the object pointed to by field_0x00.
// @field Unknown +0x00 uint32_t field_0x00


uint32_t mem_r32(uint32_t addr);

uint32_t __fastcall sub_00493E30(uint32_t ecx) {
    uint32_t inner = mem_r32(ecx);
    uint32_t vtable = mem_r32(inner);
    uint32_t fn = mem_r32(vtable + 0x1a0u);
    return reinterpret_cast<uint32_t (__fastcall *)(uint32_t)>(fn)(inner);
}
} // namespace lift_00493E30

// [0x00493E00] sub_00493E00 (12 bytes)
namespace lift_00493E00 {
// @name forwardVtable0B4_viaFirstField
// @summary Thunk: loads the object pointed to by self's first field, then tail-calls its vtable slot at +0xB4 with that object as this.
// @field Unknown +0x00 void* field_0x00

// Original: mov ecx,[ecx]; mov eax,[ecx]; mov edx,[eax+0xB4]; jmp edx
// Tail call: the callee's return value (eax) is returned unchanged.
intptr_t fn_00493E00(void* self) {
    using VirtualFn = intptr_t (*)(void* thisPtr);

    void* obj = *reinterpret_cast<void**>(self);                       // mov ecx,[ecx]
    void** vtable = *reinterpret_cast<void***>(obj);                   // mov eax,[ecx]
    VirtualFn target = reinterpret_cast<VirtualFn>(
        vtable[0xB4 / sizeof(void*)]);                                 // mov edx,[eax+0xB4]
    return target(obj);                                                // jmp edx
}
} // namespace lift_00493E00

// [0x00493E50] sub_00493E50 (12 bytes)
namespace lift_00493E50 {
// @name forwardVtable18C
// @class (none)
// @summary Dereferences self once to get an inner object, then tail-dispatches to vtable slot 0x18C of that object.
// @field self +0x00 void* innerObject (pointer loaded from *self; passed as the new this)
// @field innerObject +0x00 void** vtable (vptr of the inner object)
// @field vtable +0x18C void* slot0x18C (call target, dispatched via jmp)
//
// Portable approximation: the original tail-jumps, so the callee sees the caller's
// stack arguments unchanged. This C++ cannot forward an unknown argument list, so the
// callee is invoked with no extra arguments and its return value is returned.
using VtableSlotFn = uintptr_t (*)(void* thisPtr);

uintptr_t fn_00493E50(void* self) {
    // mov ecx, [ecx]          ; inner = *self
    void* inner = *reinterpret_cast<void**>(self);
    // mov eax, [ecx]          ; vtable = *inner
    void** vtable = *reinterpret_cast<void***>(inner);
    // mov eax, [eax+0x18c]    ; target = vtable[0x18C] (byte offset)
    auto target = reinterpret_cast<VtableSlotFn>(lift_field<void*>(vtable, 0x18C));
    // jmp eax                 ; tail-call with ecx == inner
    return target(inner);
}
} // namespace lift_00493E50

// [0x00493E40] sub_00493E40 (12 bytes)
namespace lift_00493E40 {
// @name forwardVtableSlot194
// @class <ClassName> (optional)
// @summary Dereferences a pointer-to-pointer held in self, then tail-jumps to the
//          object's vtable slot at byte offset 0x194 (index 101), passing that object as this.
// @field <ClassName> +0x00 <type> <fieldName>
uintptr_t fn_00493E40(void* self) {
    // mov ecx, [ecx]          ; obj = *self
    void* obj = *reinterpret_cast<void**>(self);
    // mov eax, [ecx]          ; vtbl = *obj
    void** vtbl = *reinterpret_cast<void***>(obj);
    // mov eax, [eax+0x194]    ; target = vtbl[0x194]
    auto target = reinterpret_cast<uintptr_t (*)(void*)>(
        lift_field<void*>(vtbl, 0x194));
    // jmp eax                 ; tail-call with ecx == obj
    return target(obj);
}
} // namespace lift_00493E40

// [0x00493E60] sub_00493E60 (12 bytes)
namespace lift_00493E60 {
// @name forwardVtable188_viaFirstField
// @summary Forwards the call to vtable slot +0x188 of the object pointed to by this+0x00 (tail call, no extra work).
// @field <unknown> +0x00 void* delegate
void fn_00493E60(void* self) {
    // mov ecx, [ecx]        -> inner = *(void**)self
    void* inner = lift_field<void*>(self, 0x00);
    // mov eax, [ecx]        -> vtbl = *(void***)inner
    void** vtbl = lift_field<void**>(inner, 0x00);
    // mov eax, [eax+0x188]  -> target = vtbl[0x188 / 4]
    using SlotFn = void (*)(void*);
    SlotFn target = lift_field<SlotFn>(vtbl, 0x188);
    // jmp eax               -> tail call target(inner) with the same this
    target(inner);
}
} // namespace lift_00493E60

// [0x00493E80] sub_00493E80 (12 bytes)
namespace lift_00493E80 {
// @name forwardVtableSlot19C
// @summary Tail-forwards the call to vtable slot 0x19C of the object referenced by self's first field.
// @field Unknown +0x00 void* field_0x00

using VtableSlotFn = uintptr_t (*)(void* thisPtr);

uintptr_t fn_00493E80(void* self) {
    // mov ecx, [ecx]          ; inner = *self
    void* inner = *reinterpret_cast<void**>(self);
    // mov eax, [ecx]          ; vtable = *inner
    void** vtable = *reinterpret_cast<void***>(inner);
    // mov eax, [eax+0x19c]    ; target = vtable[0x19C] (byte offset)
    auto target = reinterpret_cast<VtableSlotFn>(lift_field<void*>(vtable, 0x19C));
    // jmp eax                 ; tail-call with ecx == inner
    return target(inner);
}
} // namespace lift_00493E80

// [0x00493E70] sub_00493E70 (12 bytes)
namespace lift_00493E70 {
// @name forwardVtable198_viaFirstField
// @class (none)
// @summary Loads the object pointed to by self's first field, then tail-dispatches to that object's vtable slot at +0x198 with it as this.
// @field Unknown +0x00 void* field_0x00
// @field vtable +0x198 void* field_0x198 (call target, dispatched via jmp)
//
// Portable approximation: the original tail-jumps, so the callee sees the caller's
// stack arguments unchanged. This C++ cannot forward an unknown argument list, so the
// callee is invoked with only `this` and its return value is returned.
uintptr_t fn_00493E70(void* self) {
    // mov ecx, [ecx]          ; obj = *self
    void* obj = *reinterpret_cast<void**>(self);
    // mov eax, [ecx]          ; vtable = *obj
    void** vtable = *reinterpret_cast<void***>(obj);
    // mov eax, [eax+0x198]    ; target = vtable[0x198]
    auto target = reinterpret_cast<uintptr_t (*)(void*)>(
        lift_field<void*>(vtable, 0x198));
    // jmp eax                 ; tail-call with ecx == obj
    return target(obj);
}
} // namespace lift_00493E70

// [0x00493D80] sub_00493D80 (13 bytes)
namespace lift_00493D80 {
// @name ZeroHeaderFields
// @class UnknownClass
// @summary Zeroes the dword at +0x0, the dword at +0x4, and the byte at +0x8 of the object, then returns it.
// @field UnknownClass +0x00 uint32_t field_0x00
// @field UnknownClass +0x04 uint32_t field_0x04
// @field UnknownClass +0x08 uint8_t field_0x08
void* fn_00493D80(void* self) {
    lift_field<uint32_t>(self, 0x0) = 0;
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint8_t>(self, 0x8) = 0;
    return self;
}
} // namespace lift_00493D80

// [0x00493E90] sub_00493E90 (14 bytes)
namespace lift_00493E90 {
// @name ForwardVfunc1IfNonNull
// @summary Loads the object pointer stored at *self; if non-null, calls its vtable slot 1 with that object as this (tail call).
// @field Unknown +0x00 void* field_0x00
void fn_00493E90(void* self) {
    // self points at a slot that holds a pointer to a polymorphic object.
    void* obj = *reinterpret_cast<void**>(self);
    if (obj == nullptr) {
        return;
    }

    // obj->vtable (first word of object); slot 1 is the second entry.
    void** vtbl = *reinterpret_cast<void***>(obj);
    using VfnThis = void (*)(void*);
    VfnThis target = reinterpret_cast<VfnThis>(vtbl[1]);
    target(obj);
}
} // namespace lift_00493E90

// [0x00494050] sub_00494050 (15 bytes)
namespace lift_00494050 {
// @name ResetStateToMinusOne
// @class <ClassName> (unknown; no class recovered yet)
// @summary Sets the first dword of the object to -1 and clears the next two dwords to 0.
// @field <ClassName> +0x00 int32_t field_0x00
// @field <ClassName> +0x04 uint32_t field_0x04
// @field <ClassName> +0x08 uint32_t field_0x08
void fn_00494050(void* self) {
    lift_field<int32_t>(self, 0x00) = -1;
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
}
} // namespace lift_00494050

// [0x00493FF0]
namespace lift_00493FF0 {
// @name sub_00493FF0
// @summary Reads an object pointer through its argument; if non-null, tail-calls the object's vtable slot at +0x38 with the object as the argument, otherwise returns 0 (original does ret 4).
// @field Unknown +0x00 void* vtable

// Vtable slot at byte offset 0x38 (slot index 14 on 32-bit).
using VSlot14Fn = int32_t (*)(void* self);

int32_t sub_00493FF0(void** slot) {
    void* obj = *slot;
    if (obj == nullptr) {
        return 0;
    }
    auto* vtbl = *reinterpret_cast<uint8_t**>(obj);
    auto fn = reinterpret_cast<VSlot14Fn>(*reinterpret_cast<void**>(vtbl + 0x38));
    return fn(obj);
}
} // namespace lift_00493FF0

// [0x00493EA0] sub_00493EA0 (17 bytes)
namespace lift_00493EA0 {
// @name tailCallVirtualSlot1C8OfHolderObject
// @class (none; object type not recovered)
// @summary Loads the object pointer stored at *self, and if non-null tail-calls its vtable slot at +0x1C8 with that object as this; returns null otherwise.
// @field Unknown +0x00 void* object
// @field Unknown +0x00 void* vptr
void* fn_00493EA0(void* self) {
    void* obj = lift_field<void*>(self, 0x00);         // mov ecx, [ecx]; obj = *self
    if (obj == nullptr) {
        return nullptr;                                // test ecx, ecx; je -> ret (eax left undefined in original)
    }
    void* vptr = lift_field<void*>(obj, 0x00);         // mov eax, [ecx]; vptr = obj->vptr
    void* slot = lift_field<void*>(vptr, 0x1C8);       // mov edx, [eax + 0x1c8]; slot 0x1C8 (index 114)
    using SlotFn = void* (*)(void* thisPtr);
    SlotFn fn = reinterpret_cast<SlotFn>(slot);
    return fn(obj);                                    // jmp edx (tail call, ecx = obj as this)
}
} // namespace lift_00493EA0

// [0x00493EE0] sub_00493EE0 (17 bytes)
namespace lift_00493EE0 {
// @name dispatchVirtualSlot154OfPointedObject
// @class (none; object type not recovered)
// @summary Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).
// @field Unknown +0x00 void* self
// @field Unknown +0x00 void* vptr
void* fn_00493EE0(void* ecx) {
    void* self = lift_field<void*>(ecx, 0x00);         // mov ecx, [ecx]
    if (self == nullptr) {                             // test ecx, ecx; je -> ret
        // Original path returns with eax unchanged from the caller; no value is defined here.
        return nullptr;
    }
    void* vptr = lift_field<void*>(self, 0x00);        // mov eax, [ecx]
    void* slot = lift_field<void*>(vptr, 0x154);       // mov edx, [eax + 0x154]
    using SlotFn = void* (*)(void* thisPtr);
    SlotFn fn = reinterpret_cast<SlotFn>(slot);
    return fn(self);                                   // jmp edx (tail call, ecx = self)
}
} // namespace lift_00493EE0

// [0x00493EC0] sub_00493EC0 (17 bytes)
namespace lift_00493EC0 {
// @name forwardToChildVSlot115
// @class <unknown>
// @summary Loads the pointer at self+0x00; if null returns, otherwise tail-dispatches to that object's vtable slot 115 (offset 0x1CC) with the child as this.
// @field <unknown> +0x00 void* field_0x00
void fn_00493EC0(void* self) {
    // child = self->field_0x00
    void* const child = lift_field<void*>(self, 0x00);
    if (child == nullptr) {
        return;
    }

    // vtable = *child; slot = vtable[0x1CC / 4]; tail-jump to slot with child as this.
    void** const vtable = *reinterpret_cast<void***>(child);
    using VMethod = void (*)(void* self_obj);
    auto method = reinterpret_cast<VMethod>(vtable[0x1CC / sizeof(void*)]);
    method(child);
}
} // namespace lift_00493EC0

// [0x0049ABC0] sub_0049ABC0 (17 bytes)
namespace lift_0049ABC0 {
// @name Unknown::getByteAt09OfPtr12C
// @class Unknown
// @summary Returns byte +0x09 of the pointer stored at +0x12C, or 0 if that pointer is null.
// @field Unknown +0x12C void* field_0x12C
uint8_t fn_0049ABC0(void* self) {
    void* ptr = lift_field<void*>(self, 0x12C);
    if (ptr == nullptr) {
        return 0;
    }
    return lift_field<uint8_t>(ptr, 0x09);
}
} // namespace lift_0049ABC0

// [0x00493DC0] sub_00493DC0 (19 bytes)
namespace lift_00493DC0 {
// @name virtualCall14C_00493DC0
// @summary Loads the pointer at self+0; if non-null, tail-dispatches virtual slot 0x14C on that object, otherwise returns.
// @field Unknown +0x00 void* field_0x00
void fn_00493DC0(void* self) {
    void* obj = lift_field<void*>(self, 0);
    if (!obj) {
        return;
    }
    void* vtable = lift_field<void*>(obj, 0);
    using Slot = void (*)(void*);
    Slot fn = reinterpret_cast<Slot>(lift_field<void*>(vtable, 0x14C));
    fn(obj);
}
} // namespace lift_00493DC0

// [0x00493DA0] sub_00493DA0 (19 bytes)
namespace lift_00493DA0 {
// @name descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)
// @summary Dereferences the pointer stored at *self; if non-null, tail-jumps to vtable slot 0x150 of that object (passing the one stack arg through), else returns 4-byte stack cleanup.
// @field field_0x00 <void*> object (pointer loaded from *self; object's first DWORD is its vtable)
// @field field_0x00 <void**> vtable (object+0x00 vtable pointer; slot at +0x150 is the forward target)
uint32_t fn_00493DA0(void** self, uint32_t arg) {
    // ecx = *self; if (ecx == 0) ret 4;
    // eax = [ecx]; jmp [eax + 0x150]  (ecx = object, stack arg untouched)
    void* object = *self;
    if (object == nullptr) {
        // Original path only pops the stack arg; eax is left unchanged there.
        return 0;
    }
    uint32_t vtable = lift_field<uint32_t>(object, 0x00);
    uint32_t target = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x150);
    using Slot = uint32_t(__thiscall*)(void* thisPtr, uint32_t arg);
    auto fn = reinterpret_cast<Slot>(static_cast<uintptr_t>(target));
    return fn(object, arg);
}
} // namespace lift_00493DA0

// [0x00493DE0] sub_00493DE0 (19 bytes)
namespace lift_00493DE0 {
// @name dispatchThroughSlot0xCC_00493DE0
// @summary Forwards a two-DWORD call to vtable slot 0xCC of the object referenced by the slot at ECX; returns 0 if the object is null.
// Note: the original tail-jumps with the caller's stack args intact (ret 8 only on the null path).
// The portable version cannot tail-call, so the args are forwarded by value and the return value is passed through.
typedef DWORD (*Slot0CCFn)(void* self, DWORD a1, DWORD a2);

DWORD dispatchThroughSlot0xCC_00493DE0(void* ecxSlot, DWORD a1, DWORD a2) {
    // mov ecx, [ecx] : object pointer stored in the slot at ECX
    void* obj = *reinterpret_cast<void**>(ecxSlot);
    // test ecx, ecx / je -> ret 8
    if (obj == nullptr) {
        return 0;
    }
    // mov eax, [ecx] : vtable pointer at object offset 0
    void* vtable = lift_field<void*>(obj, 0);
    // mov eax, [eax + 0xCC] : vtable slot at byte offset 0xCC
    uintptr_t target = static_cast<uintptr_t>(lift_field<uintptr_t>(vtable, 0xCC));
    // jmp eax
    return reinterpret_cast<Slot0CCFn>(target)(obj, a1, a2);
}
} // namespace lift_00493DE0

// [0x00493F20] sub_00493F20 (19 bytes)
namespace lift_00493F20 {
// @name sub_00493F20
// @summary Auto-lifted identical-shape clone of 0x00493DA0 (descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)).
namespace lift_00493DA0 {
// @name descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)
// @summary Dereferences the pointer stored at *self; if non-null, tail-jumps to vtable slot 0x150 of that object (passing the one stack arg through), else returns 4-byte stack cleanup.
// @field field_0x00 <void*> object (pointer loaded from *self; object's first DWORD is its vtable)
// @field field_0x00 <void**> vtable (object+0x00 vtable pointer; slot at +0x150 is the forward target)
uint32_t fn_00493F20(void** self, uint32_t arg) {
    // ecx = *self; if (ecx == 0) ret 4;
    // eax = [ecx]; jmp [eax + 0x150]  (ecx = object, stack arg untouched)
    void* object = *self;
    if (object == nullptr) {
        // Original path only pops the stack arg; eax is left unchanged there.
        return 0;
    }
    uint32_t vtable = lift_field<uint32_t>(object, 0x00);
    uint32_t target = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x1BC);
    using Slot = uint32_t(__thiscall*)(void* thisPtr, uint32_t arg);
    auto fn = reinterpret_cast<Slot>(static_cast<uintptr_t>(target));
    return fn(object, arg);
}
} // namespace lift_00493DA0
} // namespace lift_00493F20

// [0x00493F40] sub_00493F40 (19 bytes)
namespace lift_00493F40 {
// @name sub_00493F40
// @summary Auto-lifted identical-shape clone of 0x00493DA0 (descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)).
namespace lift_00493DA0 {
// @name descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)
// @summary Dereferences the pointer stored at *self; if non-null, tail-jumps to vtable slot 0x150 of that object (passing the one stack arg through), else returns 4-byte stack cleanup.
// @field field_0x00 <void*> object (pointer loaded from *self; object's first DWORD is its vtable)
// @field field_0x00 <void**> vtable (object+0x00 vtable pointer; slot at +0x150 is the forward target)
uint32_t fn_00493F40(void** self, uint32_t arg) {
    // ecx = *self; if (ecx == 0) ret 4;
    // eax = [ecx]; jmp [eax + 0x150]  (ecx = object, stack arg untouched)
    void* object = *self;
    if (object == nullptr) {
        // Original path only pops the stack arg; eax is left unchanged there.
        return 0;
    }
    uint32_t vtable = lift_field<uint32_t>(object, 0x00);
    uint32_t target = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x1C0);
    using Slot = uint32_t(__thiscall*)(void* thisPtr, uint32_t arg);
    auto fn = reinterpret_cast<Slot>(static_cast<uintptr_t>(target));
    return fn(object, arg);
}
} // namespace lift_00493DA0
} // namespace lift_00493F40

// [0x00493F60] sub_00493F60 (19 bytes)
namespace lift_00493F60 {
// @name sub_00493F60
// @summary Auto-lifted identical-shape clone of 0x00493DA0 (descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)).
namespace lift_00493DA0 {
// @name descriptiveName_00493DA0 (forwardVirtual0x150IfNonNull)
// @summary Dereferences the pointer stored at *self; if non-null, tail-jumps to vtable slot 0x150 of that object (passing the one stack arg through), else returns 4-byte stack cleanup.
// @field field_0x00 <void*> object (pointer loaded from *self; object's first DWORD is its vtable)
// @field field_0x00 <void**> vtable (object+0x00 vtable pointer; slot at +0x150 is the forward target)
uint32_t fn_00493F60(void** self, uint32_t arg) {
    // ecx = *self; if (ecx == 0) ret 4;
    // eax = [ecx]; jmp [eax + 0x150]  (ecx = object, stack arg untouched)
    void* object = *self;
    if (object == nullptr) {
        // Original path only pops the stack arg; eax is left unchanged there.
        return 0;
    }
    uint32_t vtable = lift_field<uint32_t>(object, 0x00);
    uint32_t target = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0xA4);
    using Slot = uint32_t(__thiscall*)(void* thisPtr, uint32_t arg);
    auto fn = reinterpret_cast<Slot>(static_cast<uintptr_t>(target));
    return fn(object, arg);
}
} // namespace lift_00493DA0
} // namespace lift_00493F60

// [0x00492550] sub_00492550 (20 bytes)
namespace lift_00492550 {
// @name IsStateOneWithNonZeroField8
// @summary Returns 1 if the dword at self+0x00 equals 1 and the dword at self+0x08 is nonzero, else 0.
// @field Self +0x00 int32_t field_0x00
// @field Self +0x08 int32_t field_0x08
int fn_00492550(void* self) {
    const int32_t state = lift_field<int32_t>(self, 0x00);
    if (state == 1 && lift_field<int32_t>(self, 0x08) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_00492550

// [0x00492570] sub_00492570 (20 bytes)
namespace lift_00492570 {
// @name IsStateTwoWithNonZeroPayload
// @summary Returns TRUE when the object's state dword at +0x00 equals 2 and the dword at +0x08 is nonzero; otherwise FALSE.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x08 int32_t field_0x08
int fn_00492570(void* self) {
    if (lift_field<int32_t>(self, 0x00) != 2) {
        return 0;
    }
    if (lift_field<int32_t>(self, 0x08) == 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00492570

// [0x00492590] sub_00492590 (20 bytes)
namespace lift_00492590 {
// @name HasNonZeroField0AndField8
// @class <ClassName> (optional)
// @summary Returns 1 if both the dword at +0x00 and the dword at +0x08 are nonzero, else 0.
// @field <ClassName> +0x00 uint32_t field_0x00
// @field <ClassName> +0x08 uint32_t field_0x08
int fn_00492590(void* self) {
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        return 0;
    }
    if (lift_field<uint32_t>(self, 0x08) == 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00492590

// [0x00494000] sub_00494000 (25 bytes)
namespace lift_00494000 {
// @name setDwordTriple
// @summary Stores three stack arguments into the first three DWORD slots of the object at ECX and returns that object (callee pops 12 bytes; original is thiscall-style, lifted as a plain function taking self first).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void* fn_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    auto* dst = static_cast<uint32_t*>(self);
    dst[0] = arg1;
    dst[1] = arg2;
    dst[2] = arg3;
    return self;
}
} // namespace lift_00494000

// [0x004928E0] sub_004928E0 (27 bytes)
namespace lift_004928E0 {
// @name sub_004928E0
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_004928E0(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x21) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_004928E0

// [0x004925B0]
namespace lift_004925B0 {
// @name sub_004925B0
// @class (unknown)
// @summary Returns 1 if this->field_0x00 is non-zero and this->field_0x08 equals the single stack argument, otherwise 0. Callee cleans 4 bytes (ret 4).
// @field (unknown) +0x00 dword field_0x00 (tested for zero)
// @field (unknown) +0x08 dword field_0x08 (compared against the stack argument)

int sub_004925B0(uint32_t self, uint32_t arg0) {
    const uint32_t* p = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(self));
    if (p[0] == 0) {
        return 0;
    }
    if (p[2] != arg0) {
        return 0;
    }
    return 1;
}
} // namespace lift_004925B0
