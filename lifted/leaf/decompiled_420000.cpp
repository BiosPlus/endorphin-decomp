// Lifted C++ translation unit: lifted/leaf/decompiled_420000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_0042EE50 {
extern void (*mem_00925134)();

// @name sub_0042EE50
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00596660(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_0042EE50(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x54;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00596660(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_0042EE50
#include <cstdint>
#include <cstddef>

// [0x0042FB40] sub_0042FB40 (17 bytes)
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FB40() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xD8));
    return target(obj);
}
} // namespace lift_0042FB40

// [0x0042FB60] sub_0042FB60 (17 bytes)
namespace lift_0042FB60 {
// @name sub_0042FB60
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FB60() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xD4));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FB60

// [0x0042FB80] sub_0042FB80 (17 bytes)
namespace lift_0042FB80 {
// @name sub_0042FB80
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FB80() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xC8));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FB80

// [0x0042FBA0] sub_0042FBA0 (17 bytes)
namespace lift_0042FBA0 {
// @name sub_0042FBA0
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FBA0() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xC4));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FBA0

// [0x0042FBC0] sub_0042FBC0 (17 bytes)
namespace lift_0042FBC0 {
// @name sub_0042FBC0
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FBC0() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xC0));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FBC0

// [0x0042FBE0] sub_0042FBE0 (17 bytes)
namespace lift_0042FBE0 {
// @name sub_0042FBE0
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FBE0() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xBC));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FBE0

// [0x0042FC00] sub_0042FC00 (17 bytes)
namespace lift_0042FC00 {
// @name sub_0042FC00
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FC00() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xB8));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FC00

// [0x0042FDB0] sub_0042FDB0 (17 bytes)
namespace lift_0042FDB0 {
// @name sub_0042FDB0
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FDB0() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0x1E0));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FDB0

// [0x0042FE90] sub_0042FE90 (17 bytes)
namespace lift_0042FE90 {
// @name sub_0042FE90
// @summary Auto-lifted identical-shape clone of 0x0042FB40 (thunkGetterVirtualSlot54).
namespace lift_0042FB40 {
// @name thunkGetterVirtualSlot54
// @summary Calls the global getter ext_00465B40 to obtain an object, then tail-dispatches its vtable slot at +0xD8 (virtual index 54) with that object as this.

extern void* ext_00465B40();

// call ext_00465B40; obj = eax
// mov edx, [eax]        ; vtable = obj->vptr
// mov ecx, eax          ; this = obj
// mov eax, [edx+0xD8]   ; target = vtable[54]
// jmp eax               ; tail call, result returned unchanged
extern void* fn_0042FE90() {
    void* obj = ext_00465B40();
    void* vtable = *reinterpret_cast<void**>(obj);
    using VirtFn = void* (*)(void*);
    VirtFn target = reinterpret_cast<VirtFn>(
        *reinterpret_cast<void**>(static_cast<char*>(vtable) + 0xF4));
    return target(obj);
}
} // namespace lift_0042FB40
} // namespace lift_0042FE90

// [0x0042FE70] sub_0042FE70 (17 bytes)
namespace lift_0042FE70 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// The callee leaves its result (an object pointer) in eax, so it is declared to return void*.
extern void* ext_00465B40();

// @name tailCallVirtualSlot60OfGlobalObject
// @class (none; object type not recovered)
// @summary Gets an object pointer from ext_00465B40, loads its vtable slot at +0xF0, calls it with the object as this, and returns the slot's result.
// @field Unknown +0x00 void* vptr
void* fn_0042FE70() {
    void* self = ext_00465B40();                       // call 0x00465B40; eax = self
    void* vptr = lift_field<void*>(self, 0x00);        // mov edx, [eax]
    void* slot = lift_field<void*>(vptr, 0xF0);        // mov edx, [edx + 0xF0]
    using SlotFn = void* (*)(void* thisPtr);
    SlotFn fn = reinterpret_cast<SlotFn>(slot);
    return fn(self);                                   // mov ecx, eax; jmp edx (tail call)
}
} // namespace lift_0042FE70

// [0x0042FDD0] sub_0042FDD0 (21 bytes)
namespace lift_0042FDD0 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t ext_00465B30(void);
// Known callee 0x00468660: getNestedField_0x18_0xc (Reads a 32-bit value at offset 0xc of the object pointed to by this+0x18)
extern uint32_t ext_00468660(uint32_t this_ptr);

// @name Dispatch::ForwardSlot14
// @class Dispatch
// @summary Fetches an object via ext_00465B30/ext_00468660 and tail-dispatches its vtable slot at +0x14 (index 5).
// @field Unknown +0x00 void** vtable
uint32_t fn_0042FDD0(void) {
    const uint32_t global = static_cast<uint32_t>(ext_00465B30());
    const uint32_t obj_addr = ext_00468660(global);

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));
    void** vtbl = *reinterpret_cast<void***>(obj);
    using SlotFn = uint32_t (*)(void*);
    SlotFn slot = reinterpret_cast<SlotFn>(vtbl[5]); // +0x14 / sizeof(void*) on 32-bit
    return slot(obj);
}
} // namespace lift_0042FDD0

// [0x0042FAC0] sub_0042FAC0 (27 bytes)
namespace lift_0042FAC0 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t ext_00465B30();
// Known callee 0x00468660: getNestedField_0x18_0xc (thiscall in original; this_ptr is passed in ECX.
// Returns the pointer-sized value read from this+0x18 chain, used as the object for the virtual call.)
extern uint32_t ext_00468660(uint32_t this_ptr);

// @name callNestedVirtual_0xDC_arg4
// @class Unknown
// @summary Gets a nested object via two helper calls, then invokes its vtable slot at +0xDC with argument 4.
// @field Unknown +0x00 void* vptr

// Virtual method signature: thiscall-style slot taking one int32 argument.
// Portable stand-in: the object pointer is passed as the first parameter.
using VirtualSlot4 = void (*)(void* self, int32_t arg);

void fn_0042FAC0(void* self) {
    (void)self; // original ignores the incoming this pointer

    // call ext_00465B30 ; result (eax) is forwarded as the next call's this_ptr
    const uint32_t g = static_cast<uint32_t>(ext_00465B30());

    // call ext_00468660 ; eax = object pointer
    const uint32_t obj_addr = ext_00468660(g);
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // mov edx, [eax]          -> vtable pointer at object +0x00
    const uint32_t vtbl_addr = lift_field<uint32_t>(obj, 0x00);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl_addr));

    // mov eax, [edx + 0xDC]   -> slot function pointer
    const uint32_t fn_addr = lift_field<uint32_t>(vtbl, 0xDC);

    // push 4 ; call eax       -> virtual call with this = obj, arg = 4
    auto fn = reinterpret_cast<VirtualSlot4>(static_cast<uintptr_t>(fn_addr));
    fn(obj, 4);
}
} // namespace lift_0042FAC0

// [0x0042FAE0]
namespace lift_0042FAE0 {
// Callees
extern int32_t __cdecl ext_00465B30(void);
extern uint32_t __thiscall ext_00468660(uint32_t this_ptr);

// @name DispatchVirtualSlotDC_Arg2
// @summary Gets an object via ext_00465B30/ext_00468660, then calls its vtable slot at +0xDC with argument 2.
// @field Unknown +0x00 uint32_t field_0x00

using VirtualMethod = void (*)(void* self, int32_t arg);

void DispatchVirtualSlotDC_Arg2(void) {
    const int32_t key = ext_00465B30();
    const uint32_t obj_addr = ext_00468660(static_cast<uint32_t>(key));
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // vtable pointer lives at object +0x00
    const uint32_t vtbl_addr = lift_field<uint32_t>(obj, 0x00);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl_addr));

    // method pointer lives at vtable +0xDC
    const uint32_t slot_addr = lift_field<uint32_t>(vtbl, 0xDC);
    auto fn = reinterpret_cast<VirtualMethod>(static_cast<uintptr_t>(slot_addr));

    fn(obj, 2);
}
} // namespace lift_0042FAE0

// [0x0042FB00] sub_0042FB00 (27 bytes)
namespace lift_0042FB00 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t ext_00465B30();
// Known callee 0x00468660: getNestedField_0x18_0xc (Reads a 32-bit value at offset 0xc of the object pointed to by this+0x18)
extern uint32_t ext_00468660(uint32_t this_ptr);

// Virtual slot 0xDC is invoked with (this, 1) and its return value is forwarded.
using VirtualFn = uint32_t (__thiscall*)(void* self, uint32_t arg);

// @name dispatchNestedObjectVirtual_0xDC
// @summary Fetches the nested object from the global, then calls its vtable slot 0xDC with arg 1 and returns the result.
// @field Unknown +0x00 uint32_t vtable
uint32_t fn_0042FB00(void) {
    const uint32_t obj_addr = ext_00468660(static_cast<uint32_t>(ext_00465B30()));
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    const uint32_t vtbl_addr = lift_field<uint32_t>(obj, 0);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl_addr));

    const uint32_t slot_addr = lift_field<uint32_t>(vtbl, 0xDC);
    auto slot = reinterpret_cast<VirtualFn>(static_cast<uintptr_t>(slot_addr));

    return slot(obj, 1);
}
} // namespace lift_0042FB00

// [0x0042FB20] sub_0042FB20 (27 bytes)
namespace lift_0042FB20 {
// Known callee 0x00465B30: get_global_field_0x58 (Calls ext_004658C0 and returns the int32_t field at offset +0x58.)
extern int32_t __cdecl ext_00465B30(void);
// Known callee 0x00468660: getNestedField_0x18_0xc. Call site uses eax as an object pointer (vtable deref), so it returns a pointer.
extern void* __fastcall ext_00468660(void* self);

// @name GlobalNestedObject_VCall_0xDC_Arg3
// @summary Gets a global value, resolves a nested object from it, and calls that object's vfunc at vtable slot +0xDC with argument 3; returns the vfunc result.
// @field unknown +0x00 void* vtable
extern uint32_t __cdecl fn_0042FB20(void) {
    const uintptr_t handle = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00465B30()));
    void* obj = ext_00468660(reinterpret_cast<void*>(handle));

    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = uint32_t(__thiscall*)(void* self, int32_t arg);
    VFn slot = reinterpret_cast<VFn>(vtable[0xDC / sizeof(void*)]);
    return slot(obj, 3);
}
} // namespace lift_0042FB20

// [0x004276B0] sub_004276B0 (32 bytes)
namespace lift_004276B0 {
extern int mem_00924FE0;

// Thiscall function pointer type for MSVCP80 std::basic_string<char> copy constructor:
// this in ecx, one stack argument (const string&), callee cleans the stack.
using StringCopyCtorFn = void(__thiscall*)(void* self, const void* src);

// @name StdStringCopyConstruct
// @summary Copy-constructs a std::string at dst from src via the MSVCP80 copy constructor; returns dst.
// Cdecl: dst at [esp+4], src at [esp+8]; result (dst) in eax.
// No fields accessed: dst is treated as opaque std::string storage.
void* fn_004276B0(void* dst, const void* src) {
    auto copy_ctor = *reinterpret_cast<StringCopyCtorFn*>(&mem_00924FE0);
    copy_ctor(dst, src);
    return dst;
}
} // namespace lift_004276B0

// [0x00428BA0] sub_00428BA0 (41 bytes)
namespace lift_00428BA0 {
// @name sub_00428BA0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_004279B0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00428BA0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_004279B0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00428BA0

// [0x0042FC30]
namespace lift_0042FC30 {
// @name dispatchVtable0xE0WithVtable0x9CResult
// @summary Fetches the global object via ext_00465B40, calls vtable+0x9C, and passes the result and offset +0x3C to vtable+0xE0.


extern uint32_t __cdecl ext_00465B40(void);

void __cdecl fn_0042FC30(void) {
    uint32_t obj1 = ext_00465B40();
    uint32_t vtable1 = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj1));
    using Vfn9C = uint32_t (__thiscall*)(uint32_t);
    Vfn9C fn9c = reinterpret_cast<Vfn9C>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable1 + 0x9c))));
    uint32_t res = fn9c(obj1);

    uint32_t obj2 = ext_00465B40();
    uint32_t vtable2 = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj2));
    using VfnE0 = void (__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    VfnE0 fnE0 = reinterpret_cast<VfnE0>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable2 + 0xe0))));
    fnE0(obj2, 6, res, res + 0x3c, 0);
}
} // namespace lift_0042FC30

// [0x0042FD30] sub_0042FD30 (54 bytes)
namespace lift_0042FD30 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
extern void* ext_00465B40();

// @name fetchTwoObjectsAndDispatchVirtuals
// @summary Fetches two objects from ext_00465B40, calls vtable slot +0x9C on the first with (0, 0), then calls vtable slot +0xE0 on the second with (3, that result) and returns its result.
// @field Object +0x00 void* vtable
void* fn_0042FD30() {
    void* first = ext_00465B40();
    void* second = ext_00465B40();

    // first->vtable[+0x9C](first, 0, 0)
    void** first_vtable = *reinterpret_cast<void***>(first);
    using FirstSlotFn = uint32_t (*)(void* self, uint32_t a, uint32_t b);
    FirstSlotFn first_slot = reinterpret_cast<FirstSlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(first_vtable) + 0x9C));
    uint32_t first_result = first_slot(first, 0, 0);

    // second->vtable[+0xE0](second, 3, first_result)
    void** second_vtable = *reinterpret_cast<void***>(second);
    using SecondSlotFn = void* (*)(void* self, uint32_t a, uint32_t b);
    SecondSlotFn second_slot = reinterpret_cast<SecondSlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(second_vtable) + 0xE0));
    return second_slot(second, 3, first_result);
}
} // namespace lift_0042FD30

// [0x0042FD70] sub_0042FD70 (54 bytes)
namespace lift_0042FD70 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
// Returns an object pointer in eax.
extern void* ext_00465B40();

// @name DispatchPairedVirtualCalls
// @summary Fetches two objects via ext_00465B40, calls vtable slot +0x9C on the first (args 0,0), then passes its result to vtable slot +0xE0 of the second.
// @field <unknown> +0x00 void* vptr
// @field <unknown> +0x9C void* vtable slot (called with two zero args)
// @field <unknown> +0xE0 void* embedded-object vptr slot (called with this=second object)
void fn_0042FD70() {
    // Calling-convention notes: both targets are invoked through a function pointer
    // with `this` as the first parameter. The original code does not pop arguments
    // after the calls, so the callees are assumed to clean the stack.
    using VirtualFn = uint32_t (*)(void* self, uint32_t p1, uint32_t p2);

    void* first  = ext_00465B40();   // edi
    void* second = ext_00465B40();   // ebx

    void** firstVtbl = lift_field<void**>(first, 0);
    VirtualFn firstFn = reinterpret_cast<VirtualFn>(lift_field<void*>(firstVtbl, 0x9C));
    uint32_t result = firstFn(first, 0, 0);

    void** secondVtbl = lift_field<void**>(second, 0);
    VirtualFn secondFn = reinterpret_cast<VirtualFn>(lift_field<void*>(secondVtbl, 0xE0));
    (void)secondFn(second, 0, result);
}
} // namespace lift_0042FD70

// [0x0042FC90] sub_0042FC90 (54 bytes)
namespace lift_0042FC90 {
// Known callee 0x00465B40: sub_00465B40 (Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).)
extern void* ext_00465B40(void);

// @name callVtableSlotsOnTwoObjects
// @summary Fetches two objects from ext_00465B40; calls vtable slot +0x9C of the first with (0, 0), then vtable slot +0xE0 of the second with (5, that result).
// @field Unknown +0x00 void* vptr (vtable pointer of both objects returned by ext_00465B40)
extern void fn_0042FC90(void) {
    using Slot9C = uintptr_t (__thiscall*)(void* self, uintptr_t a0, uintptr_t a1);
    using SlotE0 = void (__thiscall*)(void* self, uintptr_t a0, uintptr_t a1);

    void* first = ext_00465B40();
    void* second = ext_00465B40();

    void** vtFirst = lift_field<void**>(first, 0x0);
    void** vtSecond = lift_field<void**>(second, 0x0);

    Slot9C slot9C = lift_field<Slot9C>(vtFirst, 0x9C);
    uintptr_t result = slot9C(first, 0, 0);

    SlotE0 slotE0 = lift_field<SlotE0>(vtSecond, 0xE0);
    slotE0(second, 5, result);
}
} // namespace lift_0042FC90

// [0x00422B20]
namespace lift_00422B20 {
// @name postCommandToMainWnd
// @summary Calls MFC80_ord_1091, invokes vtable+0x7C if non-null, and posts WM_COMMAND with field_0x84 to the resulting CWnd's HWND.
// @field Unknown +0x84 uint32_t field_0x84


extern uint32_t ext_006A62FE(void);
extern uint32_t mem_00925618;

using VFunc_0x7C = uint32_t(__thiscall*)(uint32_t self);
using PostMessageA_t = int32_t(__stdcall*)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);

extern void __thiscall fn_00422B20(void* self, uint32_t, uint32_t, uint32_t) {
    uint32_t obj = ext_006A62FE();
    uint32_t wnd = 0;
    if (obj != 0) {
        uint32_t vtbl = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
        auto vfunc = reinterpret_cast<VFunc_0x7C>(
            static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtbl + 0x7C))));
        wnd = vfunc(obj);
    }

    uint32_t wparam = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x84);
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(wnd + 0x20));
    auto post_message = reinterpret_cast<PostMessageA_t>(static_cast<uintptr_t>(mem_00925618));
    post_message(hwnd, 0x111u, wparam, 0u);
}
} // namespace lift_00422B20

// [0x0042EC80] sub_0042EC80 (54 bytes)
namespace lift_0042EC80 {
// @name sub_0042EC80
// @summary Auto-lifted identical-shape clone of 0x005FF040 (ResourceHolder::ReleaseAndReset).
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_006A64A2(void* self);

extern void __fastcall fn_0042EC80(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x92F51C;

    const uint32_t handle = lift_field<uint32_t>(base, 0x58);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x58) = 0;
    lift_field<uint32_t>(base, 0x5C) = 0;
    lift_field<uint32_t>(base, 0x60) = 0;

    ext_006A64A2(self);
}
} // namespace lift_005FF040
} // namespace lift_0042EC80

// [0x004205B0] sub_004205B0 (70 bytes)
namespace lift_004205B0 {
// MSVCP80 std::operator<(const std::string&, const std::string&), imported via IAT slot mem_00924EF4.
extern bool ext_std_string_less(const void* lhs, const void* rhs);

// @name TreeMap::lowerBound
// @class TreeMap
// @summary Lower-bound search in an MSVC-style std::map tree: returns first node whose key is not less than the argument, or the header node if none.
// @field TreeMap +0x04 void* head
// Node layout used (MSVC _Tree node): +0x00 left, +0x04 parent, +0x08 right, +0x0C key (std::string), +0x59 isNil flag.
void* fn_004205B0(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x04);
    void* node = lift_field<void*>(head, 0x04);   // root
    void* result = head;

    if (lift_field<uint8_t>(node, 0x59) != 0) {
        return head;
    }

    while (lift_field<uint8_t>(node, 0x59) == 0) {
        const void* nodeKey = reinterpret_cast<const uint8_t*>(node) + 0x0C;
        if (ext_std_string_less(nodeKey, key)) {
            node = lift_field<void*>(node, 0x08);     // go right
        } else {
            result = node;                            // candidate
            node = lift_field<void*>(node, 0x00);     // go left
        }
    }
    return result;
}
} // namespace lift_004205B0

// [0x00428A60] sub_00428A60 (72 bytes)
namespace lift_00428A60 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Called with one pointer argument (cdecl, caller cleans up).
extern void ext_006A5C5C(void* p);
// IAT slot holding the address of the basic_string destructor (MSVCP80), called thiscall.
extern int mem_00924FF4;

// @name Unknown::ClearStringEntries
// @class Unknown
// @summary Destroys each 0x24-byte entry's embedded std::string (at +0x08), frees the entry buffer, and nulls the three buffer pointers.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
void fn_00428A60(void* self) {
    constexpr std::size_t kEntrySize = 0x24;
    constexpr std::size_t kStringOffset = 0x08;

    auto& begin = lift_field<uint8_t*>(self, 0x04);
    auto& end = lift_field<uint8_t*>(self, 0x08);
    auto& cap = lift_field<uint8_t*>(self, 0x0C);

    if (begin != nullptr) {
        using StringDtor = void (*)(void*);
        auto dtor = reinterpret_cast<StringDtor>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));

        for (uint8_t* entry = begin; entry != end; entry += kEntrySize) {
            dtor(entry + kStringOffset);
        }

        ext_006A5C5C(begin);
    }

    begin = nullptr;
    end = nullptr;
    cap = nullptr;
}
} // namespace lift_00428A60

// [0x00427B20] sub_00427B20 (43 bytes)
namespace lift_00427B20 {
// @name sub_00427B20
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00427860(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00427B20(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00427860(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00427B20

// [0x00422C80] sub_00422C80 (77 bytes)
namespace lift_00422C80 {
// @name Unknown::AssignNameField_00422C80
// @class Unknown
// @summary Copies a std::string argument into this+0x50 (std::string::operator=), with SEH-frame cleanup of the temporary.
// @field Unknown +0x50 std::string field_0x50
void fn_00422C80(void* self, const std::string& src) {
    std::string& dst = lift_field<std::string>(self, 0x50);
    dst = src;
}
} // namespace lift_00422C80

// [0x004291A0] sub_004291A0 (77 bytes)
namespace lift_004291A0 {
// @name sub_004291A0
// @summary Auto-lifted identical-shape clone of 0x004757F0 (sub_0047A010).
namespace lift_004757F0 {
// Known callee 0x00672D10: sub_00672D10 (Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).)
extern void ext_00429100(void* self);
// Imported MSVC CRT slot for std::basic_string<char>::~basic_string (used via explicit dtor call below).
extern int mem_00924FF4;

// @name Unknown::Dtor_004757F0
// @class Unknown
// @summary Destructor body: releases the StringArray at +0x1C, then destroys the std::string at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C StringArray field_0x1C
void fn_004291A0(void* self) {
    // ecx+0x1c is passed as `this` to the StringArray release routine.
    ext_00429100(static_cast<unsigned char*>(self) + 0x1C);
    // The original calls the MSVC CRT string dtor through mem_00924FF4 on `this`.
    using StdString = std::string;
    reinterpret_cast<StdString*>(self)->~StdString();
}
} // namespace lift_004757F0
} // namespace lift_004291A0

// [0x00429100] sub_00429100 (78 bytes)
namespace lift_00429100 {
// Known callee 0x00428A60: Unknown::ClearStringEntries (Destroys each 0x24-byte entry's embedded std::string (at +0x08), frees the entry buffer, and nulls the three buffer pointers.)
extern void ext_00428A60(void* self);

// @name Unknown::DestroyStringAndEntries_00429100
// @summary Destroys the std::string at self+0x14, then clears the string-entry buffer at self+0x04.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x14 std::string field_0x14
void fn_00429100(void* self) {
    using CStr = std::string;
    lift_field<CStr>(self, 0x14).~CStr();
    ext_00428A60(static_cast<uint8_t*>(self) + 0x04);
}
} // namespace lift_00429100

// [0x00429150] sub_00429150 (79 bytes)
namespace lift_00429150 {
extern uint32_t mem_00924FE8;

// @name Unknown::Ctor_00429150
// @class Unknown
// @summary Constructor-style init: stores the first argument at +0x00, zeroes +0x08/+0x0C/+0x10, and default-constructs a std::string at +0x14 via the MSVCP80 import; returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 std::string field_0x14
void* __thiscall fn_00429150(uint8_t* self, uint32_t arg) {
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;

    // Default-construct the string member at self + 0x14 (MSVCP80 basic_string ctor, thiscall).
    using StringCtorFn = void(__thiscall*)(void*);
    StringCtorFn string_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE8));
    string_ctor(self + 0x14);

    lift_field<uint32_t>(self, 0x00) = arg;
    return self;
}
} // namespace lift_00429150

// [0x00422C00] sub_00422C00 (82 bytes)
namespace lift_00422C00 {
// Known callee 0x006A643C: thunk_MFC80_ord_3401 (IAT jump thunk forwarding to MFC80!ord_3401.)
// Returns flags in eax; the 0x1000 bit is tested by this function.
extern DWORD ext_006A643C();
extern int mem_00925688;

// @name ToggleStateAndInvalidate
// @class <ClassName> (unknown; accessed fields are at this+0x20 and this+0x8d)
// @summary Sets a 0/1 state byte at +0x8d from arg1 when a queried flag bit 0x1000 is set, and invalidates the window at +0x20 if the state changed.
// @field <ClassName> +0x20 HWND field_0x20
// @field <ClassName> +0x8d uint8_t field_0x8d
DWORD fn_00422C00(void* self, DWORD arg1, DWORD arg2) {
    (void)arg2;
    uint8_t& state = lift_field<uint8_t>(self, 0x8d);
    const uint8_t oldState = state;
    const DWORD flags = ext_006A643C();
    if ((flags & 0x1000) != 0) {
        state = (arg1 == 1) ? 1 : 0;
        if (state != oldState) {
            HWND hwnd = lift_field<HWND>(self, 0x20);
            auto invalidateRect = reinterpret_cast<BOOL (*)(HWND, const RECT*, BOOL)>(
                static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925688)));
            invalidateRect(hwnd, nullptr, FALSE);
        }
    }
    return 0;
}
} // namespace lift_00422C00

// [0x00427480] sub_00427480 (82 bytes)
namespace lift_00427480 {
// Known callee 0x006A643C: thunk_MFC80_ord_3401 (IAT jump thunk forwarding to MFC80!ord_3401.)
extern void ext_006A643C();
// IAT slot called directly: MSVCP80 std::string::operator=(const std::string&)
extern int mem_00924FDC;
// .rdata constant 0x0062864A (present in the binary, not read by this function)
extern int mem_00925688;

namespace {

// Record stride observed in the loop (0x24 bytes).
constexpr std::size_t kRecordSize = 0x24;

// MSVC thiscall signature of std::string::operator=(const std::string&).
// __thiscall expands to nothing on non-MSVC builds.
using StringAssignFn = void*(__thiscall*)(void* self, const void* rhs);

inline StringAssignFn string_assign_fn() {
    return reinterpret_cast<StringAssignFn>(
        static_cast<std::uintptr_t>(static_cast<std::uint32_t>(mem_00924FDC)));
}

}  // namespace

// @name CopyTemplateRecordToRange
// @summary Fills each 0x24-byte record in [first, last) from a template record: copies the leading dword, and (unless the record is the template itself) copies three chars and assigns the trailing std::string.
// @field Record +0x00 std::uint32_t field_0x00
// @field Record +0x04 std::uint8_t field_0x04
// @field Record +0x05 std::uint8_t field_0x05
// @field Record +0x06 std::uint8_t field_0x06
// @field Record +0x08 std::string field_0x08
void fn_00427480(std::uint8_t* first, std::uint8_t* last, const std::uint8_t* tmpl) {
    if (first == last) {
        return;
    }

    const StringAssignFn assign = string_assign_fn();

    for (std::uint8_t* rec = first; rec != last; rec += kRecordSize) {
        // Leading dword is always copied from the template.
        std::memcpy(rec, tmpl, sizeof(std::uint32_t));

        if (rec != tmpl) {
            rec[4] = tmpl[4];
            rec[5] = tmpl[5];
            rec[6] = tmpl[6];
            assign(rec + 8, tmpl + 8);
        }
    }
}
} // namespace lift_00427480

// [0x00420070] sub_00420070 (77 bytes)
namespace lift_00420070 {
// Known callee 0x00401BB0: DIBException::~DIBException (base destructor: installs DIBException vtable, destroys the std::string at +0x0C, then destroys the std::exception base).
extern void ext_00401BB0(void* self);

// std::basic_string<char>::~basic_string, called through an import thunk slot.
extern void (*mem_00924FF4)(void* self);

// @name Unknown::destructor_00420070
// @class Unknown
// @summary Destroys the std::string at +0x28, then chains to the DIBException base destructor.
// @field Unknown +0x28 std::string field_0x28
void fn_00420070(void* self) {
    void* str = static_cast<uint8_t*>(self) + 0x28;
    mem_00924FF4(str);
    ext_00401BB0(self);
}
} // namespace lift_00420070

// [0x004275E0]
namespace lift_004275E0 {
// @name copyStringFromSource_004275E0
// @summary Calls virtual slot 2 on src (returns const std::string&) and assigns the result into dst. Caller cleans args (__cdecl).
// Note: the original SEH frame (fs:[0] handler/trylevel) and the stack-based temp string are modeled with a plain local std::string.

using GetStringFn = const std::string& (__thiscall*)(void* self, std::string* out);

void __cdecl copyStringFromSource_004275E0(std::string* dst, void* src) {
    void** vtbl = *reinterpret_cast<void***>(src);
    GetStringFn get = reinterpret_cast<GetStringFn>(vtbl[2]);
    std::string tmp;
    const std::string& result = get(src, &tmp);
    *dst = result;
}
} // namespace lift_004275E0

// [0x0042F6F0]
namespace lift_0042F6F0 {
// @name KeyBinding::formatString
// @class KeyBinding
// @summary Formats a key binding (Ctrl+, Alt+, Shift+, and key name) into an output std::string.
// @field KeyBinding +0x00 uint8_t ctrl
// @field KeyBinding +0x01 uint8_t shift
// @field KeyBinding +0x02 uint8_t alt
// @field KeyBinding +0x04 std::string keyName

extern uint32_t mem_00924EA8;
extern uint32_t mem_00924ED0;
extern uint32_t mem_00924FD8;
extern const char mem_0092F880[];
extern const char mem_0092F878[];
extern const char mem_0092F870[];

void __thiscall sub_0042F6F0(uint32_t self, uint32_t out_str) {
    using ClearFn = void(__thiscall*)(uint32_t);
    using AppendCStrFn = uint32_t(__thiscall*)(uint32_t, const char*);
    using AppendStrFn = uint32_t(__thiscall*)(uint32_t, uint32_t);

    auto fn_clear = reinterpret_cast<ClearFn>(mem_00924EA8);
    auto fn_append_cstr = reinterpret_cast<AppendCStrFn>(mem_00924ED0);
    auto fn_append_str = reinterpret_cast<AppendStrFn>(mem_00924FD8);

    fn_clear(out_str);

    if (*reinterpret_cast<const uint8_t*>(self + 0x0) != 0) {
        fn_append_cstr(out_str, mem_0092F880);
    }
    if (*reinterpret_cast<const uint8_t*>(self + 0x2) != 0) {
        fn_append_cstr(out_str, mem_0092F878);
    }
    if (*reinterpret_cast<const uint8_t*>(self + 0x1) != 0) {
        fn_append_cstr(out_str, mem_0092F870);
    }

    fn_append_str(out_str, self + 0x4);
}
} // namespace lift_0042F6F0

// [0x004207F0]
namespace lift_004207F0 {
// @name std::out_of_range::out_of_range
// @class std::out_of_range
// @summary Copy constructor for a std::logic_error-derived exception with a std::string at +0x28.
// @field std::out_of_range +0x00 uint32_t vftable
// @field std::out_of_range +0x28 uint8_t[0x1C] field_0x28


extern void* __thiscall ext_00401C60(void* self, const void* other);
extern void* (__thiscall * const mem_00924FE0)(void* self, const void* other);

void* __thiscall sub_004207F0(void* self, const void* other) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    const uint8_t* src = static_cast<const uint8_t*>(other);

    ext_00401C60(dst, src);
    *reinterpret_cast<uint32_t*>(dst) = 0x0092E2E0u;
    mem_00924FE0(dst + 0x28, src + 0x28);

    return self;
}
} // namespace lift_004207F0

// [0x00422B60] sub_00422B60 (92 bytes)
namespace lift_00422B60 {
extern void __fastcall ext_006A5EA8(void* self);

extern void* mem_00925688; // USER32!InvalidateRect IAT slot
extern void* mem_009255E8; // USER32!TrackMouseEvent IAT slot

using InvalidateRectFn = int(__stdcall*)(void* hWnd, const void* rect, int erase);
using TrackMouseEventFn = int(__stdcall*)(void* eventTrack);

struct TrackMouseEventInfo {
    DWORD cbSize;
    DWORD dwFlags;
    void* hwndTrack;
    DWORD dwHoverTime;
};

// @name CWnd::OnMouseEnterOnce (descriptive; tracking-arm helper)
// @class Unknown
// @summary If the flag at +0x8E is clear, set it, invalidate the window at +0x20, and arm WM_MOUSELEAVE tracking; then forward to the base handler.
// @field Unknown +0x20 void* field_0x20
// @field Unknown +0x8E BYTE field_0x8E
void fn_00422B60(void* self, DWORD /*unusedEdx*/, DWORD /*unusedArg0*/, DWORD /*unusedArg1*/, DWORD /*unusedArg2*/) {
    auto* base = static_cast<BYTE*>(self);
    if (base[0x8E] == 0) {
        base[0x8E] = 1;
        void* hwnd = *reinterpret_cast<void**>(base + 0x20);
        reinterpret_cast<InvalidateRectFn>(mem_00925688)(hwnd, nullptr, FALSE);

        TrackMouseEventInfo tme{};
        tme.cbSize = sizeof(tme);
        tme.dwFlags = 0x00000002; // TME_LEAVE
        tme.hwndTrack = hwnd;
        tme.dwHoverTime = 0xFFFFFFFFu; // HOVER_DEFAULT
        reinterpret_cast<TrackMouseEventFn>(mem_009255E8)(&tme);
    }
    ext_006A5EA8(self);
}
} // namespace lift_00422B60

// [0x00427210]
namespace lift_00427210 {
extern uint32_t mem_00924FF0;
extern uint32_t mem_00ACD9D8[];

// @name findMatchingString
// @summary Searches a 54-entry string table for a match against a std::string and returns the matching C-string pointer or 0.

uint32_t __stdcall sub_00427210(uint32_t str_ptr) {
    using c_str_fn = uint32_t(__thiscall*)(uint32_t);
    auto get_c_str = reinterpret_cast<c_str_fn>(mem_00924FF0);

    for (int32_t i = 0; i < 0x36; ++i) {
        const char* target = reinterpret_cast<const char*>(get_c_str(str_ptr));
        const char* entry = reinterpret_cast<const char*>(mem_00ACD9D8[i]);
        if (std::strcmp(entry, target) == 0) {
            return mem_00ACD9D8[i];
        }
    }
    return 0;
}
} // namespace lift_00427210

// [0x004291F0] sub_004291F0 (82 bytes)
namespace lift_004291F0 {
// @name sub_004291F0
// @summary Auto-lifted identical-shape clone of 0x006998D0 (copyStringAndRecord).
namespace lift_006998D0 {
// Known callee 0x00699870: Unknown::copyRecordWithOptionalResolve (Copies a 16-byte record from src into self; when src+0xC is non-null, calls vtable slot 0x70 on it to fetch the +0x8 value, otherwise +0x8 is zeroed. Returns self.)
extern void* ext_00428FF0(void* self, int edx_unused, const void* src);

// MSVCP80 std::string copy constructor, reached through the import slot mem_00924FE0.
extern void ext_std_string_copy_ctor(void* self, const void* src);
extern int mem_00924FE0;

// @name copyStringAndRecord
// @summary Copy-constructs the leading std::string from src, then copies the 16-byte record at +0x1C from src into this; returns this.
// @field Unknown +0x1C uint8_t field_0x1c[16]
extern void* __fastcall fn_004291F0(void* self, int edx_unused, const void* src) {
    ext_std_string_copy_ctor(self, src);

    auto* dst_record = static_cast<uint8_t*>(self) + 0x1C;
    const auto* src_record = static_cast<const uint8_t*>(src) + 0x1C;
    ext_00428FF0(dst_record, 0, src_record);

    return self;
}
} // namespace lift_006998D0
} // namespace lift_004291F0

// [0x004277B0]
namespace lift_004277B0 {
// @name allocateArray36
// @summary Allocates an array of 36-byte elements with overflow check, throwing std::bad_alloc on overflow.


extern void* ext_006A5C62(uint32_t size);

extern void* fn_004277B0(uint32_t count) {
    if (count > 0 && (0xFFFFFFFFu / count) < 0x24u) {
        throw std::bad_alloc();
    }
    return ext_006A5C62(count * 36u);
}
} // namespace lift_004277B0

// [0x00420530] sub_00420530 (95 bytes)
namespace lift_00420530 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, const void* arg);
extern void ext_006A6C87(const void* arg);
extern uint8_t mem_00ACCBC0;
extern uint8_t mem_00ACCBA4;
extern uint8_t mem_00A2F20C;
extern uint8_t mem_00914C30;

// @name Unknown::GetOnceInitializedBuffer_00420530
// @summary One-time guarded initializer for the buffer at mem_00ACCBA4; returns its address.
void* fn_00420530() {
    if ((mem_00ACCBC0 & 1u) == 0) {
        mem_00ACCBC0 |= 1u;
        ext_0066AD10(&mem_00ACCBA4, &mem_00A2F20C);
        ext_006A6C87(&mem_00914C30);
    }
    return &mem_00ACCBA4;
}
} // namespace lift_00420530

// [0x00427700] sub_00427700 (95 bytes)
namespace lift_00427700 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, const void* arg);
// Known callee 0x006A6C87: sub_006A6C87 (registers a destructor for atexit-style teardown)
extern void ext_006A6C87(void* dtor);
extern int mem_00ACDB04;   // init guard bitfield (bit 0 = initialized)
extern int mem_00ACDAE8;   // function-local static object
extern int mem_00A2F2F0;   // constant argument (.data u32 0x009908FC)
extern int mem_00914FC0;   // teardown routine address

// @name InitStaticObjectOnce_00427700
// @summary One-time construction of a static object at 0x00ACDAE8 guarded by bit 0 of 0x00ACDB04; registers its teardown on first use and returns its address.
void* fn_00427700() {
    auto* guard = reinterpret_cast<uint32_t*>(&mem_00ACDB04);
    void* obj = reinterpret_cast<void*>(&mem_00ACDAE8);

    if ((*guard & 1u) == 0) {
        *guard |= 1u;
        ext_0066AD10(obj, reinterpret_cast<const void*>(&mem_00A2F2F0));
        ext_006A6C87(reinterpret_cast<void*>(&mem_00914FC0));
    }
    return obj;
}
} // namespace lift_00427700

// [0x00427640] sub_00427640 (98 bytes)
namespace lift_00427640 {
// Callee 0x004275C0: called with the object pointer as `self` and a std::string
// return slot; the caller then compares the returned string to a .rdata literal.
extern void ext_004275C0(void* self, std::string* ret);

// .rdata string literal at 0x0092F10C (contents not recovered).
extern const char mem_0092F10C[];

// @name checkStringEqualsLiteral
// @summary Gets a string from the object via ext_004275C0, stores whether it equals the .rdata literal at 0x0092F10C into *out.
extern void fn_00427640(void* unused, void* self, bool* out) {
    (void)unused;
    std::string value;
    ext_004275C0(self, &value);
    *out = (value == mem_0092F10C);
}
} // namespace lift_00427640

// [0x0042ECC0] sub_0042ECC0 (102 bytes)
namespace lift_0042ECC0 {
extern void ext_invalid_parameter_noinfo(void);

// @name Unknown::ContainsValueInRange
// @class Unknown
// @summary Linear search of a 32-bit pointer range [+0x58, +0x5C) for a value; returns true if found.
// @field Unknown +0x58 uint32_t field_0x58
// @field Unknown +0x5C uint32_t field_0x5C
bool fn_0042ECC0(void* self, uint32_t value) {
    const uintptr_t begin = lift_field<uint32_t>(self, 0x58);
    const uintptr_t end = lift_field<uint32_t>(self, 0x5C);
    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }

    uintptr_t cur = begin;
    while (cur != end) {
        if (*reinterpret_cast<const uint32_t*>(cur) == value) {
            break;
        }
        cur += sizeof(uint32_t);
    }

    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }
    return cur != end;
}
} // namespace lift_0042ECC0

// [0x004280C0] sub_004280C0 (105 bytes)
namespace lift_004280C0 {
// Known callee 0x004205B0: TreeMap::lowerBound (Lower-bound search in an MSVC-style std::map tree: returns first node whose key is not less than the argument, or the header node if none.)
extern void* ext_004205B0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();
// MSVCP80 std::string operator< import slot (0x00924EF4): operator<(lhs, rhs)
extern bool (*mem_00924EF4)(const void* lhs, const void* rhs);

struct TreeMapLookupResult {
    void* first;
    void* second;
};

// @name TreeMap::findInsertPoint
// @class TreeMap
// @summary Lower-bound lookup of a string key; returns (map, node) when the key exists, otherwise (map, header) for the end sentinel.
// @field TreeMap +0x04 void* header
TreeMapLookupResult fn_004280C0(void* self, const void* key) {
    void* node = ext_004205B0(self, key);

    if (self == nullptr) {
        mem_00925134();
    }

    char* base = static_cast<char*>(self);
    void* header = *reinterpret_cast<void**>(base + 0x04);

    if (node == header || mem_00924EF4(key, static_cast<char*>(node) + 0x0C)) {
        return TreeMapLookupResult{self, header};
    }
    return TreeMapLookupResult{self, node};
}
} // namespace lift_004280C0

// [0x004274E0]
namespace lift_004274E0 {
// @name copyBackward36
// @summary Copies a range of 36-byte structs backward, assigning their embedded std::string fields.

extern uint32_t mem_00924FDC;

uint32_t sub_004274E0(uint32_t first, uint32_t last, uint32_t d_last) {
    uint32_t ebx = last;
    if (first == ebx) {
        return d_last;
    }

    uint32_t ebp = d_last;
    uint32_t edi = ebp + 0x5;
    uint32_t esi = ebx + 0x5;

    do {
        uint32_t eax = *reinterpret_cast<uint32_t*>(ebx - 0x24);
        esi -= 0x24;
        edi -= 0x24;
        ebx -= 0x24;
        ebp -= 0x24;

        uint32_t ecx = esi - 0x1;
        uint32_t edx = edi - 0x1;
        *reinterpret_cast<uint32_t*>(ebp) = eax;

        if (edx != ecx) {
            *reinterpret_cast<uint8_t*>(edi - 0x1) = *reinterpret_cast<uint8_t*>(esi - 0x1);
            *reinterpret_cast<uint8_t*>(edi + 0x1) = *reinterpret_cast<uint8_t*>(esi + 0x1);
            *reinterpret_cast<uint8_t*>(edi) = *reinterpret_cast<uint8_t*>(esi);
            reinterpret_cast<uint32_t(__thiscall*)(uint32_t, uint32_t)>(mem_00924FDC)(
                edi + 0x3, esi + 0x3);
        }
    } while (ebx != first);

    return ebp;
}
} // namespace lift_004274E0

// [0x00420680]
namespace lift_00420680 {
extern uint32_t mem_00925134;

// @name TreeIterator::increment
// @class TreeIterator
// @summary Advances a red-black tree iterator to the next in-order node.
// @field TreeIterator +0x00 uint32_t container
// @field TreeIterator +0x04 uint32_t node

void __thiscall sub_00420680(uint32_t self) {
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));
    if (*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self)) == 0) {
        invalid_param();
    }

    uint32_t node = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self + 0x04));
    if (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(node + 0x59)) != 0) {
        invalid_param();
        return;
    }

    uint32_t right = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(node + 0x08));
    if (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(right + 0x59)) == 0) {
        uint32_t left = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(right));
        while (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(left + 0x59)) == 0) {
            right = left;
            left = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(right));
        }
        *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self + 0x04)) = right;
        return;
    }

    uint32_t parent = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(node + 0x04));
    while (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(parent + 0x59)) == 0 &&
           *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self + 0x04)) ==
               *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(parent + 0x08))) {
        *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self + 0x04)) = parent;
        parent = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(parent + 0x04));
    }
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self + 0x04)) = parent;
}
} // namespace lift_00420680

// [0x00427860]
namespace lift_00427860 {
extern uint32_t ext_004274E0(uint32_t first, uint32_t last, uint32_t d_last);

// @name copyBackward36Wrapper
// @summary Copies a range of 36-byte structs backward and returns the destination start pointer.
uint32_t sub_00427860(uint32_t first, uint32_t last, uint32_t d_last) {
    ext_004274E0(first, last, d_last);
    int32_t count = static_cast<int32_t>(last - first) / 36;
    return d_last - static_cast<uint32_t>(count * 36);
}
} // namespace lift_00427860
