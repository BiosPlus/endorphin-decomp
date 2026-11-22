// Lifted C++ translation unit: lifted/leaf/tiny_550000.cpp
#include "lift_compat.h"
extern "C" int mem_00957534;
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_004026E0(void* self);
extern "C" void __fastcall ext_00406FC0(void* self);
extern "C" void __fastcall ext_0055B720(void* self);
extern "C" int mem_0095841C;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_00552850
// @summary Stores address of mem_00957534 into field at offset +0x0.
extern "C" void __fastcall fn_00552850(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00957534;
}

// [0x00553750] sub_00553750 (9 bytes)
// @name sub_00553750
// @summary This-adjustor thunk: adjusts `this` by +0x24 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00553750(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x24);
}

// [0x00557260] sub_00557260 (8 bytes)
// @name sub_00557260
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_004026E0.
extern "C" void __fastcall fn_00557260(void* self) {
    ext_004026E0(static_cast<char*>(self) + 0x4);
}

// [0x00557270] sub_00557270 (8 bytes)
// @name sub_00557270
// @summary This-adjustor thunk: adjusts `this` by +0xC and tail-calls sub_004026E0.
extern "C" void __fastcall fn_00557270(void* self) {
    ext_004026E0(static_cast<char*>(self) + 0xC);
}

// [0x00558A10] sub_00558A10 (8 bytes)
// @name sub_00558A10
// @summary This-adjustor thunk: adjusts `this` by +0x5C and tail-calls sub_00406FC0.
extern "C" void __fastcall fn_00558A10(void* self) {
    ext_00406FC0(static_cast<char*>(self) + 0x5C);
}

// [0x00558A20] sub_00558A20 (11 bytes)
// @name sub_00558A20
// @summary This-adjustor thunk: adjusts `this` by +0x16C and tail-calls sub_00406FC0.
extern "C" void __fastcall fn_00558A20(void* self) {
    ext_00406FC0(static_cast<char*>(self) + 0x16C);
}

// [0x0055B770] sub_0055B770 (8 bytes)
// @name sub_0055B770
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0055B720.
extern "C" void __fastcall fn_0055B770(void* self) {
    ext_0055B720(static_cast<char*>(self) + 0x4);
}

// [0x0055D670] sub_0055D670 (11 bytes)
// @name sub_0055D670
// @summary Destructor tail-call: restores vtable mem_0095841C and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_0055D670(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095841C;
    ext_0065C660(self);
}
