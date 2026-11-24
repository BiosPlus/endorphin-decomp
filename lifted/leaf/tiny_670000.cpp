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
#include <cstddef>
#include <cstdint>

#include <cstdint>
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

// [0x0067EC60]
namespace lift_0067EC60 {
// @name initZeroDouble
// @summary Initializes a double at offset +0x00 to 0.0 and returns the pointer
// @field Object +0x00 double field_0x00


void* __thiscall sub_0067EC60(void* self) {
    *reinterpret_cast<double*>(self) = 0.0;
    return self;
}
} // namespace lift_0067EC60

// [0x0067F5A0]
namespace lift_0067F5A0 {
extern uint32_t mem_00B5CA88[];

// @name lookupTableByIndexField
// @class Unknown (no class recovered; receiver is passed in ecx)
// @summary Reads a 32-bit index from the receiver and returns the entry at that index in the global table at 0x00B5CA88.
// @field Unknown +0x00 uint32_t field_0x00
uint32_t __fastcall fn_0067F5A0(void* self) {
    const uint32_t index = lift_field<uint32_t>(self, 0x00);
    return mem_00B5CA88[index];
}
} // namespace lift_0067F5A0

// [0x00679A30]
namespace lift_00679A30 {
// @name queryPerformanceCounter
// @summary Calls KERNEL32!QueryPerformanceCounter with the pointer stored at [ecx]
// @field Unknown +0x00 uint32_t field_0x00

extern uint32_t ext_QueryPerformanceCounter(uint32_t lpPerformanceCount);

uint32_t __thiscall sub_00679A30(uint32_t* self) {
    uint32_t lpPerformanceCount = self[0];
    return ext_QueryPerformanceCounter(lpPerformanceCount);
}
} // namespace lift_00679A30

// [0x0067ADD0]
namespace lift_0067ADD0 {
// @name sleepMs
// @summary Forwards its single stack argument to KERNEL32 Sleep via the import slot at mem_00924248.

extern std::uint32_t mem_00924248;

// Sleep(DWORD dwMilliseconds) is __stdcall; the import slot holds its address.
using SleepFn = void(__stdcall*)(std::uint32_t);

void sub_0067ADD0(std::uint32_t dwMilliseconds) {
    auto fn = reinterpret_cast<SleepFn>(static_cast<std::uintptr_t>(mem_00924248));
    fn(dwMilliseconds);
}
} // namespace lift_0067ADD0

// [0x00679A40]
namespace lift_00679A40 {
// @name sub_00679A40 (QueryPerformanceCounter into *(this) + 8)
// @summary Reads a pointer-sized value from the object at ecx, offsets it by 8, and passes the result to QueryPerformanceCounter.

// Imported KERNEL32!QueryPerformanceCounter (IAT slot at 0x0092427C).
extern uint32_t mem_0092427C;
extern BOOL(__stdcall* ext_QueryPerformanceCounter)(void* lpPerformanceCount);

__declspec(noinline) void __thiscall sub_00679A40(void* self) {
    // mov eax, [ecx]; add eax, 8; push eax; call [QueryPerformanceCounter]; ret
    uint32_t base = lift_field<uint32_t>(self, 0);
    uintptr_t target = static_cast<uintptr_t>(base) + 8u;
    (void)ext_QueryPerformanceCounter(reinterpret_cast<void*>(target));
}
} // namespace lift_00679A40

// [0x00673B80] sub_00673B80 (14 bytes)
namespace lift_00673B80 {
// @name SetIntValueAndSetFlag
// @class Unknown
// @summary Stores a DWORD argument at this+0x60 and sets the byte flag at this+0x65 to 1.
// @field Unknown +0x60 DWORD field_0x60
// @field Unknown +0x65 BYTE field_0x65
void SetIntValueAndSetFlag(void* self, DWORD value) {
    BYTE* base = static_cast<BYTE*>(self);
    *reinterpret_cast<DWORD*>(base + 0x60) = value;
    base[0x65] = 1;
}
} // namespace lift_00673B80
