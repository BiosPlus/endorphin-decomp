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
