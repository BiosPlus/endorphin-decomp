// Lifted C++ translation unit: lifted/classes/SelectionBuffer.cpp
#include "lift_compat.h"

// [0x004E87F0] SelectionBuffer::vfunc_12 (24 bytes)
namespace lift_004E87F0 {
extern DWORD ext_004E8570(DWORD arg, DWORD result);

// @name SelectionBuffer::vfunc_12
// @class SelectionBuffer
// @summary Calls virtual slot 3 on self to obtain a value, then forwards (arg, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
DWORD __thiscall fn_004E87F0(void* self, DWORD arg) {
    // mov eax,[ecx] ; vtable = self->vtable
    void** vtable = lift_field<void**>(self, 0x00);
    // mov edx,[eax+0xc] ; call edx  (thiscall, ecx == self)
    using VirtFn = DWORD(__thiscall*)(void*);
    DWORD value = reinterpret_cast<VirtFn>(vtable[3])(self);
    // push eax; push [esp+8] (original arg); call sub_004E8570; add esp,8; ret 4
    // eax from the callee is the return value.
    return ext_004E8570(arg, value);
}
} // namespace lift_004E87F0

// [0x004E8810]
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E8810(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x14 / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810

// [0x004E8830] SelectionBuffer::vfunc_14 (24 bytes)
namespace lift_004E8830 {
// @name SelectionBuffer::vfunc_14
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E8830(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x18 / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E8830

// [0x004E8850] SelectionBuffer::vfunc_15 (24 bytes)
namespace lift_004E8850 {
// @name SelectionBuffer::vfunc_15
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E84A0(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E8850(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x1C / sizeof(void*)])(self);
    return ext_004E84A0(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E8850

// [0x004E8870] SelectionBuffer::vfunc_16 (24 bytes)
namespace lift_004E8870 {
// @name SelectionBuffer::vfunc_16
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E8870(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x20 / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E8870

// [0x004E8890] SelectionBuffer::vfunc_17 (24 bytes)
namespace lift_004E8890 {
// @name SelectionBuffer::vfunc_17
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E8890(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x24 / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E8890

// [0x004E88B0] SelectionBuffer::vfunc_18 (24 bytes)
namespace lift_004E88B0 {
// @name SelectionBuffer::vfunc_18
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E88B0(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x28 / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E88B0

// [0x004E88D0] SelectionBuffer::vfunc_19 (24 bytes)
namespace lift_004E88D0 {
// @name SelectionBuffer::vfunc_19
// @class SelectionBuffer
// @summary Auto-lifted identical-shape clone of 0x004E8810 (SelectionBuffer::vfunc_13).
// @field SelectionBuffer +0x0 void* vtable
namespace lift_004E8810 {
extern int32_t ext_004E8570(void* a1, int32_t value);

// @name SelectionBuffer::vfunc_13
// @class SelectionBuffer
// @summary Calls vtable slot 5 on self to get a value, then forwards (a1, value) to ext_004E8570 and returns its result.
// @field SelectionBuffer +0x00 void* vtable
int32_t fn_004E88D0(void* self, void* a1) {
    // Original: vtbl = [self]; slot 0x14 -> call with ecx=self; push result; push a1; call ext_004E8570 (cdecl); return eax.
    void** vtbl = *reinterpret_cast<void***>(self);
    int32_t value = reinterpret_cast<int32_t (*)(void*)>(vtbl[0x2C / sizeof(void*)])(self);
    return ext_004E8570(a1, value);
}
} // namespace lift_004E8810
} // namespace lift_004E88D0
