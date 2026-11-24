// Lifted C++ translation unit: lifted/leaf/tiny_400000.cpp
#include "lift_compat.h"
extern "C" int mem_00929A44;
extern "C" int mem_00928A98;
extern "C" int mem_0092A0E0;
extern "C" const unsigned int mem_0092A510;
// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.

// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.
// @summary Returns the address of the .rdata constant 0x006A5ED2.
extern "C" int* __cdecl fn_00404C40() {
    return &mem_00929A44;
}
extern "C" const unsigned int mem_0092A794;
extern "C" const unsigned int mem_0092B4B4;
extern "C" int mem_0092B0F4;
extern "C" int mem_0092B968;
extern "C" int mem_0092BB20;
extern "C" int mem_00928EC0;
extern "C" uintptr_t mem_009251C0;

extern "C" uintptr_t mem_009251C0;
// @name sub_00401840
// @class (none)
// @summary Returns the address of the read-only string constant at 0x00928A98.
// (no field offsets accessed)
const char* fn_00401840() {
    return reinterpret_cast<const char*>(&mem_00928A98);
}
extern "C" int mem_00928F28;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name sub_004076E0
// @class (none)
// @summary Returns the address of the .rdata constant 0x006A5FCE at 0x0092A0E0.
// (no field offsets accessed)
extern "C" int* __cdecl fn_004076E0() {
    return &mem_0092A0E0;
}
extern "C" int mem_0092979C;
extern "C" void __fastcall ext_006A5E84(void* self);

extern "C" void __fastcall ext_006A5E84(void* self);
extern "C" const unsigned int* __cdecl fn_00409060() {
    return reinterpret_cast<const unsigned int*>(&mem_0092A510);
}
extern "C" int mem_0092A23C;
extern "C" void __fastcall ext_006A5FF2(void* self);

extern "C" void __fastcall ext_006A5FF2(void* self);
// @name GetConstant_00409630
// @summary Returns the address of the .rdata constant u32 0x00458430 stored at mem_0092A794.
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_00409630() {
    return &mem_0092A794;
}
extern "C" void __fastcall ext_006A60D0(void* self);
extern "C" int mem_0092B1AC;
extern "C" void __fastcall ext_0040C1D0(void* self);

extern "C" void __fastcall ext_0040C1D0(void* self);
// @name GetConstant_0040D9B0
// @summary Returns the address of the read-only .rdata u32 constant at mem_0092B4B4 (value 0x0040CDF0).
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_0040D9B0() {
    return &mem_0092B4B4;
}
extern "C" int mem_0092B50C;
extern "C" int mem_0092B7F4;
extern "C" void __fastcall ext_006A5DFA(void* self);

extern "C" void __fastcall ext_006A5DFA(void* self);
// @name sub_0040D4D0
// @summary Returns the address of the read-only global mem_0092B0F4 (.rdata slot holding 0x0040CDF0) in eax; no other side effects.
int* fn_0040D4D0(void) {
    return &mem_0092B0F4;
}
extern "C" int mem_0092B9D4;

// [0x0040F5C0] sub_0040F5C0 (6 bytes)
// @name sub_0040F5C0
// @summary Returns the address of the read-only string constant at mem_0092B968 (".rdata" "$aj").
extern "C" const void* fn_0040F5C0() {
    return &mem_0092B968;
}

// [0x0040FED0] sub_0040FED0 (6 bytes)
// @name sub_0040FED0
// @class (none)
// @summary Returns the address of the read-only string constant "$aj" at 0x0092BB20.
// (no field offsets accessed)
extern "C" const char* fn_0040FED0() {
    return reinterpret_cast<const char*>(&mem_0092BB20);
}

// [0x00401B10] sub_00401B10 (12 bytes)
// @name sub_00401B10
// @summary Destructor tail-call: restores vtable mem_00928EC0 and tail-calls MSVCR80!??1exception@std@@UAE@XZ.
extern "C" void __fastcall fn_00401B10(void* self) {
    typedef void (__fastcall* DtorFn)(void*);
    lift_field<void*>(self, 0x0) = &mem_00928EC0;
    DtorFn base_dtor = reinterpret_cast<DtorFn>(mem_009251C0);
    base_dtor(self);
}

// [0x00401DA0] sub_00401DA0 (11 bytes)
// @name sub_00401DA0
// @summary Destructor tail-call: restores vtable mem_00928F28 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_00401DA0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00928F28;
    ext_00401BB0(self);
}

// [0x00404650] sub_00404650 (11 bytes)
// @name sub_00404650
// @summary Destructor tail-call: restores vtable mem_0092979C and tail-calls base destructor thunk_MFC80_ord_748.
extern "C" void __fastcall fn_00404650(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092979C;
    ext_006A5E84(self);
}

// [0x004090E0] sub_004090E0 (11 bytes)
// @name sub_004090E0
// @summary Destructor tail-call: restores vtable mem_0092A23C and tail-calls base destructor thunk_MFC80_ord_1934.
extern "C" void __fastcall fn_004090E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092A23C;
    ext_006A5FF2(self);
}

// [0x0040AE10] sub_0040AE10 (11 bytes)
// @name sub_0040AE10
// @summary This-adjustor thunk: adjusts `this` by +0x84 and tail-calls thunk_MFC80_ord_5833.
extern "C" void __fastcall fn_0040AE10(void* self) {
    ext_006A60D0(static_cast<char*>(self) + 0x84);
}

// [0x0040BC30] sub_0040BC30 (10 bytes)
// @name sub_0040BC30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x168.
extern "C" void __fastcall fn_0040BC30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x168);
    target(self);
}

// [0x0040D500] sub_0040D500 (11 bytes)
// @name sub_0040D500
// @summary Destructor tail-call: restores vtable mem_0092B1AC and tail-calls base destructor sub_0040C1D0.
extern "C" void __fastcall fn_0040D500(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B1AC;
    ext_0040C1D0(self);
}

// [0x0040D9E0] sub_0040D9E0 (11 bytes)
// @name sub_0040D9E0
// @summary Destructor tail-call: restores vtable mem_0092B50C and tail-calls base destructor sub_0040C1D0.
extern "C" void __fastcall fn_0040D9E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B50C;
    ext_0040C1D0(self);
}

// [0x0040EF90] sub_0040EF90 (11 bytes)
// @name sub_0040EF90
// @summary Destructor tail-call: restores vtable mem_0092B7F4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_0040EF90(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B7F4;
    ext_006A5DFA(self);
}

// [0x0040FD00] sub_0040FD00 (11 bytes)
// @name sub_0040FD00
// @summary Destructor tail-call: restores vtable mem_0092B9D4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_0040FD00(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B9D4;
    ext_006A5DFA(self);
}

// [0x00401970]
namespace lift_00401970 {
extern uint32_t mem_read32(const void* base, uint32_t offset);

// @name sub_00401970
// @summary Tail-calls a callback function pointer stored at offset 0x14 if non-null
// @field Class +0x14 void* field_0x14
void __thiscall sub_00401970(void* self) {
    uint32_t fn = mem_read32(self, 0x14);
    if (fn != 0) {
        ((void (*)())(uintptr_t)fn)();
    }
}
} // namespace lift_00401970

// [0x00401930] sub_00401930 (13 bytes)
namespace lift_00401930 {
// @name CallFirstFieldIfNonNull
// @summary If the dword at offset 0 is non-zero, tail-dispatch to it with the same this; otherwise return 0.
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00401930(void* self) {
    const uint32_t target = lift_field<uint32_t>(self, 0);
    if (target == 0) {
        return 0;
    }
    using Target = uint32_t (*)(void* self);
    return reinterpret_cast<Target>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00401930
