// Lifted C++ translation unit: lifted/NMCamera/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00551A20(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name NMCamera::Perspective::vfunc_3
// @class NMCamera::Perspective
// @summary Stores the double argument (passed on the stack) into the Perspective object at +0xF8.
// @field NMCamera::Perspective +0xF8 double field_0xF8
void fn_005521D0(void* self, double value) {
    // Object-relative store: *(double*)((char*)self + 0xF8) = value;
    double* slot = reinterpret_cast<double*>(static_cast<char*>(self) + 0xF8);
    *slot = value;
}

// [0x00551D80] NMCamera::Orthogonal::vfunc_0 (30 bytes)
// @name NMCamera::Orthogonal::vfunc_0
// @class NMCamera::Orthogonal
// @summary MSVC scalar deleting destructor: calls sub_00551A20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00551D80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00551A20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00551C10] NMCamera::Orthogonal::vfunc_6 (21 bytes)
// @name NMCamera::Orthogonal::vfunc_6
// @class NMCamera::Orthogonal
// @summary Calls vtable slot 5 (+0x14) on self with a pointer to a local float holding 0.0f, then returns (callee pops one stack argument).
// @field NMCamera::Orthogonal +0x00 void* vtable_ptr

// Original: push ecx; mov eax,[ecx]; fldz; mov eax,[eax+0x14]; fstp [esp];
// lea edx,[esp]; push edx; call eax; pop ecx; ret 4.
// The pushed slot doubles as a float local set to 0.0f; its address is the sole argument.
void fn_00551C10(void* self, uint32_t unused_stack_arg) {
    (void)unused_stack_arg;                                                           // ret 4 pops one dword
    void** vtbl = *reinterpret_cast<void***>(self);                                   // self +0x00 -> vtable
    float zero = 0.0f;                                                                // fldz; fstp [esp]
    using VFuncSlot5 = void (*)(void* self, float* arg);
    VFuncSlot5 fn = reinterpret_cast<VFuncSlot5>(vtbl[5]);                            // slot 5 (+0x14)
    fn(self, &zero);
}
