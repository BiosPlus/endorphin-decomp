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

// [0x005333C0]
namespace lift_005333C0 {
// @name OglRenderer::vfunc_17
// @class OglRenderer
// @summary Sets a renderer parameter at +0x398 or +0x388 based on +0x379, stores it at +0x450, sets +0x430 = 1, and invokes vtable +0x154.
// @field OglRenderer +0x379 uint8_t field_0x379
// @field OglRenderer +0x388 uint32_t field_0x388
// @field OglRenderer +0x398 uint32_t field_0x398
// @field OglRenderer +0x430 uint8_t field_0x430
// @field OglRenderer +0x450 uint32_t field_0x450


extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write8(uint32_t addr, uint8_t val);
extern void mem_write32(uint32_t addr, uint32_t val);

void __thiscall OglRenderer_vfunc_17(uint32_t self, uint32_t arg0) {
    if (mem_read8(self + 0x379) != 0) {
        mem_write32(self + 0x398, arg0);
    } else {
        mem_write32(self + 0x388, arg0);
    }
    mem_write32(self + 0x450, arg0);
    uint32_t vtable = mem_read32(self);
    uint32_t vfn = mem_read32(vtable + 0x154);
    mem_write8(self + 0x430, 1);
    typedef void (__thiscall *vfn_t)(uint32_t);
    ((vfn_t)(uintptr_t)vfn)(self);
}
} // namespace lift_005333C0

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

// [0x00532F60]
namespace lift_00532F60 {
// @name OglRenderer::vfunc_113
// @class OglRenderer
// @summary Stops the multimedia timer embedded at this+0x48, then kills the Win32 timer identified by this+0x1C on the window.
// @field OglRenderer +0x1C void* field_0x1C
// @field OglRenderer +0x48 void* field_0x48

extern void __fastcall ext_0067B410(void* self);
extern BOOL(__stdcall* mem_00925660)(HWND hWnd, UINT_PTR uIDEvent);

void __fastcall fn_00532F60(void* self) {
    unsigned char* p = static_cast<unsigned char*>(self);
    ext_0067B410(p + 0x48);
    HWND hwnd = *reinterpret_cast<HWND*>(p + 0x1C);
    mem_00925660(hwnd, 1);
}
} // namespace lift_00532F60
