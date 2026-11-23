// Lifted C++ translation unit: lifted/leaf/tiny_410000.cpp
#include "lift_compat.h"
extern "C" int mem_0092BD10;
extern "C" int mem_0092C6E8;
extern "C" DWORD mem_0092D020;
extern "C" int mem_0092D778;
extern "C" int mem_0092DA8C;
extern "C" int mem_0092BD7C;
extern "C" void __fastcall ext_006A6166(void* self);

extern "C" void __fastcall ext_006A6166(void* self);
// @name GetStringConstant_00410350
// @summary Returns the address of the read-only string constant "$aj".
extern "C" const char* __cdecl fn_00410350() {
    return reinterpret_cast<const char*>(&mem_0092BD10);
}
extern "C" uintptr_t mem_009244D4;
extern "C" void __fastcall ext_00406940(void* self);
extern "C" int mem_0092C5AC;
extern "C" void __fastcall ext_006A5F38(void* self);

extern "C" void __fastcall ext_006A5F38(void* self);
// @name sub_00414240
// @summary Returns the address of the constant string "`KE" stored in .rdata (mem_0092C418).
extern "C" const char* __cdecl fn_00414240() {
    return reinterpret_cast<const char*>(0x0092C418);
}
extern "C" int mem_0092C764;
extern "C" void __fastcall ext_00404650(void* self);

extern "C" void __fastcall ext_00404650(void* self);
// @name sub_00415580
// @summary Returns the address of the read-only string constant "$aj" stored in .rdata (mem_0092C6E8).
extern "C" const char* __cdecl fn_00415580() {
    return reinterpret_cast<const char*>(&mem_0092C6E8);
}
extern "C" int mem_0092DB1C;
#include <cstring>
#include <cstdint>

#include <cstdint>
#include "lift_compat.h"

// @name GetStringConstant_00416B60
// @summary Returns the address of the static string constant ",bj" (mem_0092CAEC).
extern "C" const char* __cdecl fn_00416B60() {
    return ",bj";
}

// [0x00417300] Returns a pointer to the constant string ",bj" in .rdata.
#include "lift_compat.h"

// @name GetStringConstant_00417300
// @summary Returns the address of the constant string ",bj" (mem_0092CD54).
extern "C" const char* fn_00417300() {
    return reinterpret_cast<const char*>(0x0092CD54);
}

// [0x00419700] sub_00419700 (6 bytes)
// @name sub_00419700
// @summary Returns the address of the read-only global mem_0092D020 (initialised to 0x006A5FCE); leaf getter with no side effects.
extern "C" const DWORD* fn_00419700(void) {
    return &mem_0092D020;
}

// [0x0041B580] sub_0041B580 (6 bytes)
// @name sub_0041B580
// @summary Returns the address of the read-only string constant ".cj" stored in .rdata (mem_0092D778).
extern "C" const char* __cdecl fn_0041B580() {
    return reinterpret_cast<const char*>(&mem_0092D778);
}

// [0x0041BFA0] sub_0041BFA0 (6 bytes)
// @name GetStringConstant_0041BFA0
// @summary Returns the address of the read-only string constant ",bj" stored in .rdata (mem_0092DA8C).
extern "C" const char* __cdecl fn_0041BFA0() {
    return reinterpret_cast<const char*>(&mem_0092DA8C);
}

// [0x00410510] sub_00410510 (11 bytes)
// @name sub_00410510
// @summary Destructor tail-call: restores vtable mem_0092BD7C and tail-calls base destructor thunk_MFC80_ord_1955.
extern "C" void __fastcall fn_00410510(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092BD7C;
    ext_006A6166(self);
}

// [0x00412C10] sub_00412C10 (9 bytes)
// @name sub_00412C10
// @summary This-adjustor thunk: adjusts `this` by +0x1C and forwards through mem_009244D4.
extern "C" void __fastcall fn_00412C10(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009244D4);
    target(static_cast<char*>(self) + 0x1C);
}

// [0x00413700] sub_00413700 (8 bytes)
// @name sub_00413700
// @summary This-adjustor thunk: adjusts `this` by +0x20 and tail-calls sub_00406940.
extern "C" void __fastcall fn_00413700(void* self) {
    ext_00406940(static_cast<char*>(self) + 0x20);
}

// [0x004153D0] sub_004153D0 (11 bytes)
// @name sub_004153D0
// @summary Destructor tail-call: restores vtable mem_0092C5AC and tail-calls base destructor thunk_MFC80_ord_620.
extern "C" void __fastcall fn_004153D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092C5AC;
    ext_006A5F38(self);
}

// [0x00415EF0] sub_00415EF0 (11 bytes)
// @name sub_00415EF0
// @summary Destructor tail-call: restores vtable mem_0092C764 and tail-calls base destructor sub_00404650.
extern "C" void __fastcall fn_00415EF0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092C764;
    ext_00404650(self);
}

// [0x0041C790] sub_0041C790 (7 bytes)
// @name sub_0041C790
// @summary Stores address of mem_0092DB1C into field at offset +0x0.
extern "C" void __fastcall fn_0041C790(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092DB1C;
}

// [0x00410520] sub_00410520 (19 bytes)
// @name sub_00410520
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00410520(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x18);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x1C);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x00412CC0] sub_00412CC0 (19 bytes)
// @name sub_00412CC0
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00412CC0(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x8);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0xC);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x0041CD60] sub_0041CD60 (19 bytes)
// @name sub_0041CD60
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_0041CD60(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x8);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x0041B3B0]
namespace lift_0041B3B0 {
// @name callGlobalThunk00430D40
// @summary Loads global pointer at 0x00ACDB40 into ECX and tail-calls 0x00430D40.


extern uint32_t mem_00ACDB40;
extern void ext_00430D40(void);

extern void fn_0041B3B0(void) {
    (void)mem_00ACDB40;
    ext_00430D40();
}
} // namespace lift_0041B3B0
