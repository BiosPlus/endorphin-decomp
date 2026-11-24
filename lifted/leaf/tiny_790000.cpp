// Lifted C++ translation unit: lifted/leaf/tiny_790000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00792900(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" int32_t mem_00B60F58;
extern "C" int32_t mem_00B60FB8;
extern "C" int mem_00B60FB0;
extern "C" void __fastcall ext_0079BA90(void* self);
extern "C" int mem_00997530;
extern "C" void __fastcall ext_00705450(void* self);

extern "C" void __fastcall ext_00705450(void* self);
// @name sub_007928E0
// @summary MSVC scalar deleting destructor: calls sub_00792900 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007928E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00792900(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
extern "C" void __fastcall ext_0079C1F0(void* self);
extern "C" void __fastcall ext_0079D8B0(void* self);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_0079D730(void* self);
extern "C" void __fastcall ext_0079DB20(void* self);
extern "C" int mem_009976F8;
extern "C" void __fastcall ext_00785430(void* self);

extern "C" void __fastcall ext_00785430(void* self);
// @name sub_0079BA40
// @summary Returns global int32 value from mem_00B60F58.
extern "C" int32_t __cdecl fn_0079BA40(void) {
    return mem_00B60F58;
}
extern "C" void __fastcall ext_0079E670(void* self);
extern "C" void __fastcall ext_006D2160(void* self);
extern "C" void __fastcall ext_0079E610(void* self);
extern "C" int32_t mem_00B61148;
extern "C" int32_t mem_00B61168;
extern "C" int32_t mem_00B61160;
extern "C" int mem_00B61158;
extern "C" void __fastcall ext_0079F380(void* self);
extern "C" int mem_009977F0;
extern "C" void __fastcall ext_007AA880(void* self);

extern "C" void __fastcall ext_007AA880(void* self);
// @name sub_0079BA50
// @summary Returns global int32 value from mem_00B60FB8.
extern "C" int32_t __cdecl fn_0079BA50(void) {
    return mem_00B60FB8;
}
#include <cstdint>

// [0x0079BA60] sub_0079BA60 (6 bytes)
// @name sub_0079BA60
// @summary Returns address of global mem_00B60FB0.
extern "C" void* __cdecl fn_0079BA60(void) {
    return &mem_00B60FB0;
}

// [0x0079BA70] sub_0079BA70 (30 bytes)
// @name sub_0079BA70
// @summary MSVC scalar deleting destructor: calls sub_0079BA90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0079BA70(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0079BA90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0079BA90] sub_0079BA90 (16 bytes)
// @name sub_0079BA90
// @summary Destructor tail-call: restores vtable mem_00997530 and tail-calls base destructor sub_00705450.
extern "C" void __fastcall fn_0079BA90(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00997530;
    ext_00705450(self);
}

// [0x0079C210] sub_0079C210 (16 bytes)
// @name sub_0079C210
// @summary Setter storing uint8_t argument into field at offset +0xF88.
extern "C" void __fastcall fn_0079C210(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xF88) = value;
}

// [0x0079D6F0] sub_0079D6F0 (11 bytes)
// @name sub_0079D6F0
// @summary This-adjustor thunk: adjusts `this` by -0xF50 and tail-calls sub_0079C1F0.
extern "C" void __fastcall fn_0079D6F0(void* self) {
    ext_0079C1F0(static_cast<char*>(self) - 0xF50);
}

// [0x0079D890] sub_0079D890 (30 bytes)
// @name sub_0079D890
// @summary MSVC scalar deleting destructor: calls sub_0079D8B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0079D890(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0079D8B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0079D980] sub_0079D980 (8 bytes)
// @name sub_0079D980
// @summary This-adjustor thunk: adjusts `this` by +0x50 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_0079D980(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x50);
}

// [0x0079D990] sub_0079D990 (11 bytes)
// @name sub_0079D990
// @summary This-adjustor thunk: adjusts `this` by +0x9C and tail-calls sub_006E7460.
extern "C" void __fastcall fn_0079D990(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x9C);
}

// [0x0079DAB0] sub_0079DAB0 (8 bytes)
// @name sub_0079DAB0
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls sub_0079D730.
extern "C" void __fastcall fn_0079DAB0(void* self) {
    ext_0079D730(static_cast<char*>(self) - 0x4);
}

// [0x0079DB00] sub_0079DB00 (30 bytes)
// @name sub_0079DB00
// @summary MSVC scalar deleting destructor: calls sub_0079DB20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0079DB00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0079DB20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0079DB20] sub_0079DB20 (16 bytes)
// @name sub_0079DB20
// @summary Destructor tail-call: restores vtable mem_009976F8 and tail-calls base destructor sub_00785430.
extern "C" void __fastcall fn_0079DB20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009976F8;
    ext_00785430(self);
}

// [0x0079E650] sub_0079E650 (30 bytes)
// @name sub_0079E650
// @summary MSVC scalar deleting destructor: calls sub_0079E670 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0079E650(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0079E670(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0079E7F0] sub_0079E7F0 (11 bytes)
// @name sub_0079E7F0
// @summary This-adjustor thunk: adjusts `this` by +0x118 and tail-calls sub_006D2160.
extern "C" void __fastcall fn_0079E7F0(void* self) {
    ext_006D2160(static_cast<char*>(self) + 0x118);
}

// [0x0079E940] sub_0079E940 (8 bytes)
// @name sub_0079E940
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls sub_0079E610.
extern "C" void __fastcall fn_0079E940(void* self) {
    ext_0079E610(static_cast<char*>(self) - 0x4);
}

// [0x0079EBD0] sub_0079EBD0 (16 bytes)
// @name sub_0079EBD0
// @summary Returns global int32 value from mem_00B61148.
extern "C" int32_t __cdecl fn_0079EBD0(void) {
    return mem_00B61148;
}

// [0x0079F330] sub_0079F330 (6 bytes)
// @name sub_0079F330
// @summary Returns global int32 value from mem_00B61168.
extern "C" int32_t __cdecl fn_0079F330(void) {
    return mem_00B61168;
}

// [0x0079F340] sub_0079F340 (6 bytes)
// @name sub_0079F340
// @summary Returns global int32 value from mem_00B61160.
extern "C" int32_t __cdecl fn_0079F340(void) {
    return mem_00B61160;
}

// [0x0079F350] sub_0079F350 (6 bytes)
// @name sub_0079F350
// @summary Returns address of global mem_00B61158.
extern "C" void* __cdecl fn_0079F350(void) {
    return &mem_00B61158;
}

// [0x0079F360] sub_0079F360 (30 bytes)
// @name sub_0079F360
// @summary MSVC scalar deleting destructor: calls sub_0079F380 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0079F360(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0079F380(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0079F380] sub_0079F380 (16 bytes)
// @name sub_0079F380
// @summary Destructor tail-call: restores vtable mem_009977F0 and tail-calls base destructor sub_007AA880.
extern "C" void __fastcall fn_0079F380(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009977F0;
    ext_007AA880(self);
}

// [0x0079DD10] sub_0079DD10 (23 bytes)
// @name sub_0079DD10
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0079DD10(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x80) = a0;
    lift_field<uint32_t>(self, 0x84) = a1;
}

// [0x0079AE40] sub_0079AE40 (12 bytes)
namespace lift_0079AE40 {
// Win32 import slot holding the address of KERNEL32!UnmapViewOfFile.
extern uint32_t mem_009241E4;

// @name UnmapViewOfFileThunk_0079AE40
// @summary Thin wrapper: unmaps the view at the second stack argument via KERNEL32!UnmapViewOfFile and returns its BOOL result.
// Note: the first argument is ignored (never read); the second argument is the base address to unmap.
// Calling convention: caller-cleans (plain ret), so this is a cdecl-style function.
using UnmapViewOfFile_fn = BOOL(__stdcall*)(const void* lpBaseAddress);

BOOL fn_0079AE40(void* /*unused*/, const void* lpBaseAddress) {
    auto unmap = reinterpret_cast<UnmapViewOfFile_fn>(static_cast<uintptr_t>(mem_009241E4));
    return unmap(lpBaseAddress);
}
} // namespace lift_0079AE40

// [0x0079E610] sub_0079E610 (14 bytes)
namespace lift_0079E610 {
// @name Unknown::callVirtualSlot2IfNonNull
// @class Unknown
// @summary If the object pointer is non-null, invokes its vtable slot 2 with argument 1; the single stack argument is popped by the callee (ret 4).
// @field Unknown +0x00 void** vtable
void fn_0079E610(void* self, int32_t /*stackArg, popped by callee*/) {
    if (self == nullptr) {
        return;
    }
    void** vtable = *reinterpret_cast<void***>(self);
    using VirtualFn = void (*)(void* self, int32_t arg);
    VirtualFn slot2 = reinterpret_cast<VirtualFn>(vtable[2]);
    slot2(self, 1);
}
} // namespace lift_0079E610

// [0x0079ADC0] sub_0079ADC0 (14 bytes)
namespace lift_0079ADC0 {
// KERNEL32!GetFileSize import slot (IAT entry at 0x0092426C, .rdata constant 0x00628496).
extern DWORD mem_0092426C;

typedef DWORD(__stdcall* GetFileSize_fn)(DWORD hFile, DWORD* lpFileSizeHigh);

// @name GetFileSizeLow
// @summary Returns the low 32 bits of the file size for the handle passed on the stack (GetFileSize(hFile, NULL)).
extern DWORD __cdecl fn_0079ADC0(DWORD hFile) {
    GetFileSize_fn getFileSize = reinterpret_cast<GetFileSize_fn>(static_cast<uintptr_t>(mem_0092426C));
    return getFileSize(hFile, nullptr);
}
} // namespace lift_0079ADC0

// [0x0079D730] sub_0079D730 (14 bytes)
namespace lift_0079D730 {
// @name Unknown::dispatchVirtualSlot4IfNonNull
// @class Unknown
// @summary If self is non-null, calls its vtable slot 4 (+0x10 on the 32-bit layout) with argument 1; the incoming dword argument is ignored.
// @field Unknown +0x00 void* vtable
void fn_0079D730(void* self, uint32_t /*unused*/) {
    if (self == nullptr) {
        return;
    }
    // Object's first word is its vtable pointer; slot 4 corresponds to +0x10 in the 32-bit layout.
    void** vtable = *reinterpret_cast<void***>(self);
    auto slot4 = reinterpret_cast<void (*)(void*, uint32_t)>(vtable[4]);
    slot4(self, 1u);
}
} // namespace lift_0079D730

// [0x0079AF40] sub_0079AF40 (16 bytes)
namespace lift_0079AF40 {
extern uint32_t mem_009241F0;  // IAT slot holding KERNEL32!GlobalAlloc
extern HGLOBAL __stdcall ext_GlobalAlloc(UINT uFlags, SIZE_T dwBytes);

// @name GlobalAllocZeroFlags
// @summary Allocates a global memory block of the requested size with uFlags = 0 (GMEM_FIXED) and returns the handle.
uint32_t __cdecl fn_0079AF40(uint32_t size) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_GlobalAlloc(0, static_cast<SIZE_T>(size))));
}
} // namespace lift_0079AF40

// [0x0079EB70] sub_0079EB70 (16 bytes)
namespace lift_0079EB70 {
extern uint32_t mem_00B61148;

// @name Unknown::getByteViaGlobalPtr0x0C
// @class Unknown
// @summary Returns the byte at offset 0x0C of the object whose pointer is stored in global mem_00B61148.
// @field Unknown +0x0C uint8_t field_0x0C
uint8_t fn_0079EB70(void) {
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00B61148));
    return lift_field<uint8_t>(obj, 0x0C);
}
} // namespace lift_0079EB70

// [0x0079AF50] sub_0079AF50 (16 bytes)
namespace lift_0079AF50 {
extern HGLOBAL ext_GlobalFree(HGLOBAL hMem);
extern int mem_009241E8;

// @name GlobalFreeWrapper
// @summary Frees a global memory handle via KERNEL32!GlobalFree and returns its result.
HGLOBAL fn_0079AF50(HGLOBAL hMem) {
    return ext_GlobalFree(hMem);
}
} // namespace lift_0079AF50

// [0x00790D40] sub_00790D40 (17 bytes)
namespace lift_00790D40 {
// @name Object::setFieldsFromArg
// @class Object
// @summary Stores the stack argument at +0x08 and clears the dword at +0x28 (thiscall, ret 4).
// @field Object +0x08 uint32_t field_0x08
// @field Object +0x28 uint32_t field_0x28
void fn_00790D40(void* self, uint32_t arg) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t zero = 0;
    std::memcpy(base + 0x28, &zero, sizeof(zero));
    std::memcpy(base + 0x08, &arg, sizeof(arg));
}
} // namespace lift_00790D40

// [0x00790D60] sub_00790D60 (17 bytes)
namespace lift_00790D60 {
// @name Unknown::setFieldOc
// @class Unknown
// @summary Stores a value into field +0x0C and clears field +0x2C (thiscall, one stack arg).
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x2c uint32_t field_0x2c
void fn_00790D60(void* self, std::uint32_t value) {
    auto* base = static_cast<unsigned char*>(self);
    *reinterpret_cast<std::uint32_t*>(base + 0x2c) = 0;
    *reinterpret_cast<std::uint32_t*>(base + 0x0c) = value;
}
} // namespace lift_00790D60
