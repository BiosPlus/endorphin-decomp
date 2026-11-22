// Lifted C++ translation unit: lifted/leaf/tiny_670000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00671040(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_0067AEE8
// @summary Pops the return address into edi and returns, releasing 4 bytes of stack arguments.
extern "C" void __stdcall fn_0067AEE8() {
    // Branchless tiny leaf: restores edi from the stack, then returns popping 4 bytes of arguments.
}
extern "C" int32_t mem_00B59DB8;
extern "C" void __fastcall ext_00493D90(void* self);
extern "C" void __fastcall ext_004AEE60(void* self);
extern "C" int mem_0098C254;
extern "C" void __fastcall ext_0065F440(void* self);

extern "C" void __fastcall ext_0065F440(void* self);
// @name cleanup_epilogue_pop_edi_stdcall4
// @summary Stdcall (ret 4) epilogue fragment: restores the saved edi register and drops one stack argument; no other effect.
extern "C" void __stdcall fn_0067AF28(void* arg) {
    (void)arg;
}
extern "C" void __fastcall ext_00679990(void* self);
extern "C" void __fastcall ext_0067A080(void* self);
extern "C" int mem_0098C5E4;

// [0x006710E0] sub_006710E0 (30 bytes)
// @name sub_006710E0
// @summary MSVC scalar deleting destructor: calls sub_00671040 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006710E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00671040(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00675670] sub_00675670 (6 bytes)
// @name sub_00675670
// @summary Returns global int32 value from mem_00B59DB8.
extern "C" int32_t __cdecl fn_00675670(void) {
    return mem_00B59DB8;
}

// [0x00675D20] sub_00675D20 (8 bytes)
// @name sub_00675D20
// @summary This-adjustor thunk: adjusts `this` by +0x10 and tail-calls AddCharacterDialog::vfunc_3.
extern "C" void __fastcall fn_00675D20(void* self) {
    ext_00493D90(static_cast<char*>(self) + 0x10);
}

// [0x00676850] sub_00676850 (8 bytes)
// @name sub_00676850
// @summary This-adjustor thunk: adjusts `this` by +0x14 and tail-calls sub_004AEE60.
extern "C" void __fastcall fn_00676850(void* self) {
    ext_004AEE60(static_cast<char*>(self) + 0x14);
}

// [0x00678880] sub_00678880 (11 bytes)
// @name sub_00678880
// @summary Destructor tail-call: restores vtable mem_0098C254 and tail-calls base destructor sub_0065F440.
extern "C" void __fastcall fn_00678880(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098C254;
    ext_0065F440(self);
}

// [0x00679A50] sub_00679A50 (7 bytes)
// @name sub_00679A50
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_00679990.
extern "C" void __fastcall fn_00679A50(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_00679990(delegate_obj);
}

// [0x0067A0F0] sub_0067A0F0 (8 bytes)
// @name sub_0067A0F0
// @summary This-adjustor thunk: adjusts `this` by +0x14 and tail-calls sub_0067A080.
extern "C" void __fastcall fn_0067A0F0(void* self) {
    ext_0067A080(static_cast<char*>(self) + 0x14);
}

// [0x0067A100] sub_0067A100 (8 bytes)
// @name sub_0067A100
// @summary This-adjustor thunk: adjusts `this` by +0x24 and tail-calls sub_0067A080.
extern "C" void __fastcall fn_0067A100(void* self) {
    ext_0067A080(static_cast<char*>(self) + 0x24);
}

// [0x0067B2E0] sub_0067B2E0 (7 bytes)
// @name sub_0067B2E0
// @summary Stores address of mem_0098C5E4 into field at offset +0x0.
extern "C" void __fastcall fn_0067B2E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098C5E4;
}
