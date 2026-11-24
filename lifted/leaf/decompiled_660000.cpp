// Lifted C++ translation unit: lifted/leaf/decompiled_660000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>

// [0x0066A760] sub_0066A760 (10 bytes)
namespace lift_0066A760 {
// @name sub_0066A760
// @summary Auto-lifted identical-shape clone of 0x0046FAC0 (sub_0046FAC0).
namespace lift_0046FAC0 {
// @name sub_0046FAC0
// @summary Loads the 32-bit value at [ecx+0x00] and passes it to thunk_MFC80_ord_764.
// @field unknown +0x00 uint32_t field_0x00


extern void ext_006A6118(uint32_t arg);

void __thiscall fn_0066A760(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(self);
    ext_006A6118(val);
}
} // namespace lift_0046FAC0
} // namespace lift_0066A760

// [0x00661840] sub_00661840 (32 bytes)
namespace lift_00661840 {
// @name Unknown::CallSubobjectVirtualSlot2
// @class Unknown
// @summary Forwards (arg1, this+4, arg2) to virtual slot 2 of the object pointed to by this+0, then returns arg1.
// @field Unknown +0x00 void* field_0x00

// Stdcall target taking three pointer-sized arguments (callee pops them).
typedef void* (__stdcall* VirtualSlot2Fn)(void* a, void* b, void* c);

void* __thiscall fn_00661840(void* self, void* arg1, void* arg2) {
    // mov ecx, [this]         -> subobject pointer
    void* subobject = *static_cast<void**>(self);
    // mov edx, [subobject]    -> vtable of subobject
    void* vtable = *static_cast<void**>(subobject);
    // mov eax, [vtable + 8]   -> slot 2
    void* slot2 = *reinterpret_cast<void**>(static_cast<char*>(vtable) + 8);
    // push arg2; push (this + 4); push arg1; call slot2
    reinterpret_cast<VirtualSlot2Fn>(slot2)(arg1, static_cast<char*>(self) + 4, arg2);
    // mov eax, arg1; ret 8
    return arg1;
}
} // namespace lift_00661840

// [0x0066A330] sub_0066A330 (32 bytes)
namespace lift_0066A330 {
// @name Unknown::SetFloat4
// @class Unknown
// @summary Copies four stack float arguments into consecutive float fields at self+0x00..+0x0C (thiscall, callee pops 0x10 bytes).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void fn_0066A330(void* self, float a0, float a1, float a2, float a3) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<float*>(base + 0x00) = a0;
    *reinterpret_cast<float*>(base + 0x04) = a1;
    *reinterpret_cast<float*>(base + 0x08) = a2;
    *reinterpret_cast<float*>(base + 0x0C) = a3;
}
} // namespace lift_0066A330

// [0x00661860] sub_00661860 (32 bytes)
namespace lift_00661860 {
// @name Unknown::CallSubobjectVirtualSlot1
// @class Unknown
// @summary Forwards (arg1, this+4, arg2) to virtual slot 1 of the object pointed to by this+0, then returns arg1.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04

// Stdcall-style target taking three pointer-sized arguments (callee pops them).
typedef void* (__stdcall* VirtualSlot1Fn)(void* a, void* b, void* c);

void* fn_00661860(void* self, void* arg1, void* arg2) {
    auto* base = static_cast<uint8_t*>(self);
    // mov ecx, [this]         -> subobject pointer
    void* subobject = *reinterpret_cast<void**>(base + 0x00);
    // mov edx, [subobject]    -> vtable of subobject
    auto* vtable = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(subobject));
    // mov eax, [vtable + 4]   -> slot 1
    auto slot1 = *reinterpret_cast<VirtualSlot1Fn*>(vtable + 0x04);
    // push arg2; push (this + 4); push arg1; call slot1
    slot1(arg1, base + 0x04, arg2);
    // mov eax, arg1; ret 8
    return arg1;
}
} // namespace lift_00661860

// [0x00662F80]
namespace lift_00662F80 {
// @name showInfoMessageBox
// @summary Shows an information message box: arg1 is the caption, arg2 is the message text, no owner window.
// (free function, no @class)

// MSVCP80 std::string::c_str (thiscall import thunk at mem_00924FF0)
// USER32!MessageBoxA (import thunk at mem_009255E0)
extern int __stdcall ext_MessageBoxA(void* hWnd, const char* lpText, const char* lpCaption, unsigned int uType);

namespace {
constexpr unsigned int kMbIconInformation = 0x40u;
}

void showInfoMessageBox(const std::string* caption, const std::string* text) {
    const char* captionCStr = caption->c_str();
    const char* textCStr = text->c_str();
    ext_MessageBoxA(nullptr, textCStr, captionCStr, kMbIconInformation);
}
} // namespace lift_00662F80

// [0x006619D0] sub_006619D0 (34 bytes)
namespace lift_006619D0 {
// @name Unknown::copyFieldsFrom
// @class Unknown
// @summary Copy-assigns the three DWORD fields from src into self (skipping self-assignment) and sets the flag byte at +0x00 to 1; returns self.
// @field Unknown +0x00 BYTE flag
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0C DWORD field_0x0C
void* fn_006619D0(void* self, const void* src) {
    if (self == src) {
        return self;
    }

    auto* dst = static_cast<uint8_t*>(self);
    const auto* from = static_cast<const uint8_t*>(src);

    DWORD v4;
    DWORD v8;
    DWORD vc;
    std::memcpy(&v4, from + 0x04, sizeof(DWORD));
    std::memcpy(&v8, from + 0x08, sizeof(DWORD));
    std::memcpy(&vc, from + 0x0C, sizeof(DWORD));

    std::memcpy(dst + 0x04, &v4, sizeof(DWORD));
    std::memcpy(dst + 0x08, &v8, sizeof(DWORD));
    std::memcpy(dst + 0x0C, &vc, sizeof(DWORD));

    dst[0x00] = 1;
    return self;
}
} // namespace lift_006619D0

// [0x0066BA00] sub_0066BA00 (34 bytes)
namespace lift_0066BA00 {
// Guest memory and call helpers (32-bit guest addresses).
extern uint32_t ext_read_u32(uint32_t addr);
extern void ext_call_thiscall_out_arg(uint32_t fn, uint32_t thisp, uint32_t* out, uint32_t arg);

// @name Unknown::resolveViaVtableSlot1C
// @class Unknown
// @summary Caches the child pointer of the owner held in self, calls the child's vtable slot 0x70 to produce a replacement value, and stores that value back into self.
// @field Unknown +0x00 uint32_t owner
// @field Unknown +0x04 uint32_t cachedChild
void fn_0066BA00(uint32_t* self) {
    uint32_t owner = self[0];                       // mov eax, [esi]
    uint32_t child = ext_read_u32(owner + 0x04);    // mov ecx, [eax+4]
    self[1] = child;                                // mov [esi+4], ecx

    uint32_t vtbl = ext_read_u32(child);            // mov edx, [ecx]
    uint32_t slot = ext_read_u32(vtbl + 0x70);      // mov edx, [edx+0x70]

    // The out-parameter is the function's own argument slot (lea eax,[esp+0xc]).
    uint32_t result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    ext_call_thiscall_out_arg(slot, child, &result, owner);  // call edx (this=ecx)
    self[0] = result;                               // mov [esi], eax
}
} // namespace lift_0066BA00

// [0x006629B0]
namespace lift_006629B0 {
// @name fileExists
// @summary Checks whether a file exists by calling _stat64i32 on std::string::c_str()

uint32_t __thiscall ext_MSVCP80_std_string_c_str(uint32_t this_ptr);
int32_t __cdecl ext_MSVCR80__stat64i32(uint32_t path, void* stat_buf);

uint32_t __cdecl sub_006629B0(uint32_t path_str) {
    uint8_t stat_buf[0x30];
    uint32_t c_str = ext_MSVCP80_std_string_c_str(path_str);
    int32_t res = ext_MSVCR80__stat64i32(c_str, stat_buf);
    return (res == 0) ? 1u : 0u;
}
} // namespace lift_006629B0

// [0x006618F0]
namespace lift_006618F0 {
// @name sub_006618F0
// @summary Forwards a 3-argument call to inner object's vtable slot +0x28 with (this + 4) prepended.
// @field Class +0x00 void* field_0x00
uint32_t __thiscall sub_006618F0(void* this_ptr, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* inner = *reinterpret_cast<void**>(this_ptr);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(inner);
    using Vfn = uint32_t(__thiscall*)(void*, uint32_t, uint32_t, uint32_t, uint32_t);
    auto fn = reinterpret_cast<Vfn>(vtable[0x28 / sizeof(uint32_t)]);
    uint32_t this_plus_4 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(this_ptr) + 4);
    return fn(inner, this_plus_4, arg1, arg2, arg3);
}
} // namespace lift_006618F0

// [0x00661920]
namespace lift_00661920 {
extern uint32_t mem_read32(uint32_t addr);

// @name sub_00661920
// @summary Forwards a 3-argument virtual call to vtable slot 0x2c on the object at this+0x00, prepending this+0x04
// @field <unknown> +0x00 uint32_t field_0x00

uint32_t __thiscall sub_00661920(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t inner = mem_read32(self);
    uint32_t vtable = mem_read32(inner);
    uint32_t fn_addr = mem_read32(vtable + 0x2c);
    using Fn = uint32_t(__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<Fn>(fn_addr)(inner, self + 4, arg1, arg2, arg3);
}
} // namespace lift_00661920

// [0x00664B20] sub_00664B20 (37 bytes)
namespace lift_00664B20 {
// @name ContainsSubstring
// @summary Returns true if needle occurs as a substring of haystack (strstr on c_str() of both strings).
bool fn_00664B20(const std::string& haystack, const std::string& needle) {
    return std::strstr(haystack.c_str(), needle.c_str()) != nullptr;
}
} // namespace lift_00664B20

// [0x00662F50]
namespace lift_00662F50 {
// @name showFatalErrorAndExit
// @summary Logs/initializes via sub_00662F20, displays a fatal error MessageBoxA from a std::string, and exits with -1.

extern void ext_00662F20();
extern uint32_t mem_00924FF0;
extern uint32_t mem_009255E0;
extern uint32_t mem_00925258;

void sub_00662F50(uint32_t arg0) {
    ext_00662F20();

    using CStrFn = uint32_t(__thiscall*)(uint32_t);
    uint32_t text = reinterpret_cast<CStrFn>(mem_00924FF0)(arg0);

    using MessageBoxAFn = int32_t(__stdcall*)(uint32_t, uint32_t, uint32_t, uint32_t);
    reinterpret_cast<MessageBoxAFn>(mem_009255E0)(0, text, 0x009877D8u, 0x10u);

    using ExitFn = void(__cdecl*)(int32_t);
    reinterpret_cast<ExitFn>(mem_00925258)(-1);
}
} // namespace lift_00662F50

// [0x006601E0]
namespace lift_006601E0 {
// @name sub_006601E0_dtor
// @summary Sets vtable pointer to 0x00987730 and pops an element from the global vector at 0x00B59080 if non-empty
// @field Object +0x00 uint32_t vtable


extern uint32_t mem_00B59080;
extern uint32_t mem_00B59084;

void __thiscall sub_006601E0(void* self) {
    *reinterpret_cast<uint32_t*>(self) = 0x00987730u;
    uint32_t begin = mem_00B59080;
    if (begin != 0) {
        int32_t count = static_cast<int32_t>(mem_00B59084 - begin) >> 2;
        if (count != 0) {
            mem_00B59084 -= 4;
        }
    }
}
} // namespace lift_006601E0

// [0x0066EDB0]
namespace lift_0066EDB0 {
// @name sub_0066EDB0_scalar_deleting_dtor
// @summary Scalar deleting destructor adjusting this by +4 for subobject destructor and optionally freeing memory
// @field Self +0x04 void field_0x04


extern void __fastcall ext_0065F440(void* self);
extern void ext_006A5C5C(void* ptr);

extern void* __thiscall fn_0066EDB0(void* self, uint32_t flags) {
    void* subobj = self ? reinterpret_cast<uint8_t*>(self) + 4 : nullptr;
    ext_0065F440(subobj);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0066EDB0

// [0x00661710]
namespace lift_00661710 {
// @name sub_00661710
// @summary Delegates to vtable[0] of field_0x0 with (arg1, &field_0x4, arg2) and returns arg1.
// @field Class +0x00 void* field_0x0
// @field Class +0x04 uint32_t field_0x4


uint32_t __thiscall sub_00661710(void* self, uint32_t arg1, uint32_t arg2) {
    uintptr_t base = reinterpret_cast<uintptr_t>(self);
    uintptr_t obj = *reinterpret_cast<uint32_t*>(base);
    uintptr_t vtbl = *reinterpret_cast<uint32_t*>(obj);
    uintptr_t fn = *reinterpret_cast<uint32_t*>(vtbl);
    using fn_t = void(__thiscall*)(uintptr_t, uint32_t, uintptr_t, uint32_t);
    reinterpret_cast<fn_t>(fn)(obj, arg1, base + 0x4, arg2);
    return arg1;
}
} // namespace lift_00661710
