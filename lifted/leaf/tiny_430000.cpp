// Lifted C++ translation unit: lifted/leaf/tiny_430000.cpp
#include "lift_compat.h"
extern "C" const unsigned int mem_0092FF5C;
extern "C" int mem_0093209C;
extern "C" void __fastcall ext_00426130(void* self);
extern "C" void __fastcall ext_00425DC0(void* self);
extern "C" void __fastcall ext_00433320(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_00430F9E
// @summary Discards the caller's pushed stack slot and clobbers the saved esi register, then returns; a 2-byte "pop esi / ret" tail.
// The machine code is `pop esi; ret`: it reads the top stack word into esi, removes it from the stack, and returns.
// Portable C++ has no equivalent of the esi register or the stack pop, so the observable effect is expressed as a no-op.
void fn_00430F9E() {
}
extern "C" void __fastcall ext_0041C730(void* self);

// [0x0043CB70] sub_0043CB70 (4 bytes)
// @name sub_0043CB70
// @summary Virtual dispatch thunk: reads the object's vtable pointer and calls slot 0 with the same object.
// @field UnknownObject +0x00 void** vtable
void fn_0043CB70(void* self) {
    // Original code is `mov eax, [ecx]; jmp [eax]`: a tail jump through vtable slot 0.
    // Portable C++ cannot tail-jump or forward the caller's stack arguments, so this
    // performs the same dispatch as a call and discards the result.
    void** vtable = *reinterpret_cast<void***>(self);
    typedef void (*Slot0Fn)(void*);
    Slot0Fn slot0 = reinterpret_cast<Slot0Fn>(vtable[0]);
    slot0(self);
}

// [0x0043AAF0] sub_0043AAF0 (6 bytes)
// @name GetConstant_0043AAF0
// @summary Returns the address of the .rdata constant u32 0x006A65E6 stored at mem_0092FF5C.
extern "C" const unsigned int* __cdecl fn_0043AAF0() {
    return &mem_0092FF5C;
}

// [0x0043D360] sub_0043D360 (6 bytes)
// @name GetConstantString_0043D360
// @summary Returns the address of the read-only string constant at 0x0093209C (.rdata "`KE").
extern "C" const char* fn_0043D360() {
    return reinterpret_cast<const char*>(&mem_0093209C);
}

// [0x00434FD0] sub_00434FD0 (11 bytes)
// @name sub_00434FD0
// @summary Member forwarding thunk: loads subobject pointer at +0x14C and tail-calls sub_00426130.
extern "C" void __fastcall fn_00434FD0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x14C);
    ext_00426130(delegate_obj);
}

// [0x00434FE0] sub_00434FE0 (11 bytes)
// @name sub_00434FE0
// @summary Member forwarding thunk: loads subobject pointer at +0x14C and tail-calls sub_00425DC0.
extern "C" void __fastcall fn_00434FE0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x14C);
    ext_00425DC0(delegate_obj);
}

// [0x00435360] sub_00435360 (30 bytes)
// @name sub_00435360
// @summary MSVC scalar deleting destructor: calls sub_00433320 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00435360(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00433320(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0043CAA0] sub_0043CAA0 (8 bytes)
// @name sub_0043CAA0
// @summary This-adjustor thunk: adjusts `this` by +0x64 and tail-calls sub_0041C730.
extern "C" void __fastcall fn_0043CAA0(void* self) {
    ext_0041C730(static_cast<char*>(self) + 0x64);
}

// [0x00430EE0] sub_00430EE0 (16 bytes)
namespace lift_00430EE0 {
// @name SubobjectReleaseSlot1
// @class Unknown
// @summary If the object pointed to by the slot at *self is non-null, invoke its virtual slot 1 with argument 1.
// @field Unknown +0x00 void* field_0x00
void fn_00430EE0(void* self) {
    // mov ecx, [ecx]: load object pointer from the slot.
    void* obj = lift_field<void*>(self, 0);
    // test ecx, ecx / je: nothing to do for a null object.
    if (obj == nullptr) {
        return;
    }
    // mov eax, [ecx]; mov edx, [eax+4]: fetch vtable slot 1.
    void** vtable = lift_field<void**>(obj, 0);
    using SlotFn = void (*)(void* self_, int arg);
    SlotFn fn = reinterpret_cast<SlotFn>(vtable[1]);
    // push 1; call edx: invoke with ecx = obj and one argument.
    fn(obj, 1);
}
} // namespace lift_00430EE0

// [0x0043CD80] sub_0043CD80 (18 bytes)
namespace lift_0043CD80 {
// IAT slot holding the address of USER32!KillTimer (.rdata 0x00925660).
extern uint32_t mem_00925660;

// @name KillOwnerTimer
// @summary Kills the timer whose ID is stored at self+0x138, owned by the window handle at self+0x20.
// @field Unknown +0x20 HWND field_0x20
// @field Unknown +0x138 UINT field_0x138
void fn_0043CD80(void* self) {
    HWND hwnd = lift_field<HWND>(self, 0x20);
    UINT timerId = lift_field<UINT>(self, 0x138);

    using KillTimerFn = BOOL(__stdcall*)(HWND, UINT_PTR);
    auto killTimer = reinterpret_cast<KillTimerFn>(static_cast<uintptr_t>(mem_00925660));
    killTimer(hwnd, static_cast<UINT_PTR>(timerId));
}
} // namespace lift_0043CD80
