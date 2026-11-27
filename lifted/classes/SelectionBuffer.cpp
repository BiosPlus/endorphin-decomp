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
