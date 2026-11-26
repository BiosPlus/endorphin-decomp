// Lifted C++ translation unit: lifted/classes/OglRenderer.cpp
#include "lift_compat.h"

// [0x00536E80]
namespace lift_00536E80 {
// @name OglRenderer::releaseContext
// @class OglRenderer
// @summary Unbinds the current OpenGL context if flag at +0x30 is zero, then leaves the critical section at +0x10
// @field OglRenderer +0x10 void* field_0x10
// @field OglRenderer +0x30 uint32_t field_0x30


extern int (__stdcall* mem_009253E0)(void* hdc, void* hglrc);
extern void __thiscall ext_0065C650(void* self);

void __thiscall fn_00536E80(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint32_t*>(base + 0x30) == 0) {
        mem_009253E0(nullptr, nullptr);
    }
    ext_0065C650(base + 0x10);
}
} // namespace lift_00536E80

// [0x005330D0]
namespace lift_005330D0 {
// @name OglRenderer::vfunc_117
// @class OglRenderer
// @summary Clears field_0x30 to 0 while holding the critical section lock returned by vfunc_118.
// @field OglRenderer +0x30 uint32_t field_0x30


extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

void __thiscall fn_005330D0(void* self) {
    void** vtable = *reinterpret_cast<void***>(self);
    using GetLockFn = void* (__thiscall*)(void*);
    auto getLock = reinterpret_cast<GetLockFn>(vtable[0x1D8 / 4]);
    void* lock = getLock(self);
    ext_0065C640(lock);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x30) = 0;
    ext_0065C650(lock);
}
} // namespace lift_005330D0

// [0x00536D00]
namespace lift_00536D00 {
// @name OglRenderer::vfunc_12
// @class OglRenderer
// @summary Toggles the flag byte at this+0xB8 selected by field_0x194 (stride 60) to its logical NOT, then sets field_0x464 to 1.
// @field OglRenderer +0x194 uint32_t field_0x194
// @field OglRenderer +0xB8 uint8_t table_0xB8
// @field OglRenderer +0x464 uint8_t field_0x464

void OglRenderer_vfunc_12(void* self) {
    uint32_t idx = lift_field<uint32_t>(self, 0x194);
    uint32_t stride = idx * 60u; // (idx << 4) - idx, then *4 in addressing = idx * 60
    uint8_t& flag = lift_field<uint8_t>(self, static_cast<ptrdiff_t>(0xB8u + stride));
    flag = static_cast<uint8_t>(flag == 0 ? 1 : 0);
    lift_field<uint8_t>(self, 0x464) = 1;
}
} // namespace lift_00536D00

// [0x00533D10] sub_00533D10 (44 bytes)
namespace lift_00533D10 {
// Callee: setFieldsFromArg (stores one stack argument into four dword fields of the object at ECX).
void ext_00540F60(void* self, DWORD unused_arg0, DWORD value);

// @name OglRenderer::vfunc_40
// @class OglRenderer
// @summary Forwards the second stack argument into the embedded subobject at +0x9C via ext_00540F60 and caches it at +0x498.
// @field OglRenderer +0x498 uint32_t field_0x498
// @field OglRenderer +0x9C void* field_0x9C
void fn_00533D10(void* self, DWORD arg0, DWORD arg1) {
    (void)arg0; // Original never reads the first stack argument.

    // Embedded subobject at +0x9C is passed by address only.
    void* subobject = static_cast<uint8_t*>(self) + 0x9C;

    // Helper receives a fixed tag constant (0x93A444) as its unused first stack argument, then arg1.
    ext_00540F60(subobject, 0x93A444u, arg1);

    lift_field<DWORD>(self, 0x498) = arg1;
}
} // namespace lift_00533D10

// [0x00533380]
namespace lift_00533380 {
// @name OglRenderer::vfunc_16
// @class OglRenderer
// @summary Sets a float property on OglRenderer (selecting +0x390 or +0x380 based on +0x379) and +0x458, marks +0x430 dirty, and invokes vtable +0x154
// @field OglRenderer +0x379 uint8_t field_0x379
// @field OglRenderer +0x380 float field_0x380
// @field OglRenderer +0x390 float field_0x390
// @field OglRenderer +0x430 uint8_t field_0x430
// @field OglRenderer +0x458 float field_0x458


void __thiscall fn_00533380(void* self, float value) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (base[0x379] != 0) {
        *reinterpret_cast<float*>(base + 0x390) = value;
    } else {
        *reinterpret_cast<float*>(base + 0x380) = value;
    }
    *reinterpret_cast<float*>(base + 0x458) = value;
    base[0x430] = 1;

    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(self);
    auto vfunc = reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x154 / sizeof(uintptr_t)]);
    vfunc(self);
}
} // namespace lift_00533380

// [0x00533340]
namespace lift_00533340 {
// @name OglRenderer::vfunc_15
// @class OglRenderer
// @summary Sets a float property on OglRenderer (selecting +0x38c or +0x37c based on +0x379), stores it at +0x454, sets +0x430 to 1, and invokes vfunc at +0x154.
// @field OglRenderer +0x379 uint8_t field_0x379
// @field OglRenderer +0x37c float field_0x37c
// @field OglRenderer +0x38c float field_0x38c
// @field OglRenderer +0x430 uint8_t field_0x430
// @field OglRenderer +0x454 float field_0x454

void OglRenderer_vfunc_15(void* self, float value) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint8_t*>(base + 0x379) != 0) {
        *reinterpret_cast<float*>(base + 0x38c) = value;
    } else {
        *reinterpret_cast<float*>(base + 0x37c) = value;
    }
    *reinterpret_cast<float*>(base + 0x454) = value;
    void** vtable = *reinterpret_cast<void***>(base);
    auto vfunc = reinterpret_cast<void (*)(void*)>(vtable[0x154 / sizeof(void*)]);
    *reinterpret_cast<uint8_t*>(base + 0x430) = 1;
    vfunc(self);
}
} // namespace lift_00533340

// [0x00533400]
namespace lift_00533400 {
// @name OglRenderer::vfunc_18
// @class OglRenderer
// @summary Sets a renderer value (at +0x394 or +0x384 depending on +0x379, and at +0x44C), marks +0x430 dirty, and invokes vfunc at +0x154.
// @field OglRenderer +0x379 uint8_t field_0x379
// @field OglRenderer +0x384 uint32_t field_0x384
// @field OglRenderer +0x394 uint32_t field_0x394
// @field OglRenderer +0x430 uint8_t field_0x430
// @field OglRenderer +0x44C uint32_t field_0x44C
void __thiscall OglRenderer_vfunc_18(void* self, uint32_t value) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (*(base + 0x379) != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x394) = value;
    } else {
        *reinterpret_cast<uint32_t*>(base + 0x384) = value;
    }
    *reinterpret_cast<uint32_t*>(base + 0x44C) = value;
    *(base + 0x430) = 1;

    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    using VFunc154 = void (__thiscall*)(void*);
    VFunc154 fn = reinterpret_cast<VFunc154>(vtable[0x154 / 4]);
    fn(self);
}
} // namespace lift_00533400

// [0x00533090] OglRenderer::vfunc_116 (55 bytes)
namespace lift_00533090 {
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the critical section referenced at offset 0x00 of the object.)
extern void ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void ext_0065C650(void* self);
// IAT slot for KERNEL32!GetCurrentThreadId
extern DWORD(__stdcall* mem_00924244)();
// IAT slot for OPENGL32!wglMakeCurrent
extern BOOL(__stdcall* mem_009253E0)(HDC hdc, HGLRC hglrc);

// @name OglRenderer::vfunc_116
// @class OglRenderer
// @summary Acquires the object's lock (via vtable slot +0x1D8), records the current thread id, and makes the GL context current.
// @field OglRenderer +0x24 HDC field_0x24
// @field OglRenderer +0x28 HGLRC field_0x28
// @field OglRenderer +0x30 uint32_t field_0x30
void fn_00533090(void* self) {
    // Vtable slot at byte offset 0x1D8 (index 118) returns the lock object.
    void* vtable = lift_field<void*>(self, 0);
    using GetLockFn = void* (*)(void*);
    GetLockFn getLock = reinterpret_cast<GetLockFn>(reinterpret_cast<void* const*>(vtable)[0x1D8 / sizeof(void*)]);
    void* lock = getLock(self);

    ext_0065C640(lock);

    lift_field<DWORD>(self, 0x30) = mem_00924244();

    HDC hdc = lift_field<HDC>(self, 0x24);
    HGLRC hglrc = lift_field<HGLRC>(self, 0x28);
    mem_009253E0(hdc, hglrc);

    ext_0065C650(lock);
}
} // namespace lift_00533090

// [0x005365A0]
namespace lift_005365A0 {
// @name OglRenderer::vfunc_1
// @class OglRenderer
// @summary Acquires the renderer's critical section lock, invokes sub_005364D0, and releases the lock.


extern void* __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);
extern void __thiscall ext_005364D0(void* self);

void __thiscall sub_005365A0(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    using GetLockFn = void* (__thiscall*)(void*);
    auto get_lock = reinterpret_cast<GetLockFn>(vtable[0x1D8 / 4]);
    void* lock = get_lock(self);

    ext_0065C640(lock);
    ext_005364D0(self);
    ext_0065C650(lock);
}
} // namespace lift_005365A0

// [0x005373F0] sub_005373F0 (63 bytes)
namespace lift_005373F0 {
// Known callee 0x00537380: Unknown::startTimerOrInitRecord (thiscall, one stack argument; defaults to 0x21 when passed 0.)
extern void __thiscall ext_00537380(void* self, uint32_t arg);

// Virtual method signature used for slots 0x1C4 and 0x1D4 on the vtable.
using OglVirtualFn = void(__thiscall*)(void* self);

// @name OglRenderer::vfunc_44
// @class OglRenderer
// @summary Sets the flag at +0x376 to the given byte; if it changed, runs the two virtual hooks (slots 0x1C4, 0x1D4) and then calls startTimerOrInitRecord with the value at +0x370.
// @field OglRenderer +0x00 void* vtable
// @field OglRenderer +0x370 uint32_t field_0x370
// @field OglRenderer +0x376 uint8_t field_0x376
void fn_005373F0(void* self, uint8_t flag) {
    // Nothing to do when the flag already has the requested value.
    if (lift_field<uint8_t>(self, 0x376) == flag) {
        return;
    }

    // First virtual hook: vtable slot at byte offset 0x1C4.
    void* vtbl = lift_field<void*>(self, 0x00);
    reinterpret_cast<OglVirtualFn>(lift_field<void*>(vtbl, 0x1C4))(self);

    // Second virtual hook: vtable slot at byte offset 0x1D4 (vtable reloaded from self).
    vtbl = lift_field<void*>(self, 0x00);
    reinterpret_cast<OglVirtualFn>(lift_field<void*>(vtbl, 0x1D4))(self);

    // Latch the flag, then start the timer / init record with the value at +0x370.
    uint32_t arg = lift_field<uint32_t>(self, 0x370);
    lift_field<uint8_t>(self, 0x376) = flag;
    ext_00537380(self, arg);
}
} // namespace lift_005373F0

// [0x00532F60]
namespace lift_00532F60 {
extern void __fastcall ext_0067B410(void* self);
extern void __fastcall ext_0065C640(void* self);
extern BOOL(__stdcall* mem_00925660)(HWND hWnd, UINT_PTR uIDEvent);

// @name OglRenderer::stopTimers
// @class OglRenderer
// @summary Stops the multimedia timer at +0x48 and kills the window timer (ID 1) for the HWND at +0x1C.
// @field OglRenderer +0x1C HWND field_0x1C
// @field OglRenderer +0x48 TimerHandle field_0x48
void __fastcall fn_00532F60(void* self) {
    if (false) ext_0065C640(nullptr);
    ext_0067B410(static_cast<uint8_t*>(self) + 0x48);
    mem_00925660(lift_field<HWND>(self, 0x1C), 1);
}
} // namespace lift_00532F60

// [0x005333C0]
namespace lift_005333C0 {
// @name OglRenderer::vfunc_17
// @class OglRenderer
// @summary Sets a 32-bit field based on flag at +0x379, updates +0x450, marks +0x430 dirty, and invokes vtable+0x154.
// @field OglRenderer +0x0 void* vtable
// @field OglRenderer +0x379 uint8_t field_0x379
// @field OglRenderer +0x388 uint32_t field_0x388
// @field OglRenderer +0x398 uint32_t field_0x398
// @field OglRenderer +0x430 uint8_t field_0x430
// @field OglRenderer +0x450 uint32_t field_0x450
void __thiscall fn_005333C0(void* self, uint32_t val) {
    if (lift_field<uint8_t>(self, 0x379) != 0) {
        lift_field<uint32_t>(self, 0x398) = val;
    } else {
        lift_field<uint32_t>(self, 0x388) = val;
    }
    lift_field<uint32_t>(self, 0x450) = val;
    lift_field<uint8_t>(self, 0x430) = 1;

    void** vtable = lift_field<void**>(self, 0x0);
    auto vfn = reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x154 / sizeof(void*)]);
    vfn(self);
}
} // namespace lift_005333C0
