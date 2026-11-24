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
