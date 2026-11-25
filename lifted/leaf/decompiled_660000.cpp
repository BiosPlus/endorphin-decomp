// Lifted C++ translation unit: lifted/leaf/decompiled_660000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>
#include <cstdint>
#include <cstddef>

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

// [0x00664C30] sub_00664C30 (33 bytes)
namespace lift_00664C30 {
// @name sub_00664C30
// @summary Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).
namespace lift_00497860 {
extern void ext_00664910(void* self, uint8_t flag);

// @name forwardMakeBoolString
// @summary Forwards out_str and flag to makeBoolString (0x0046C460) and returns out_str.
void* fn_00664C30(void* out_str, uint8_t flag) {
    ext_00664910(out_str, flag);
    return out_str;
}
} // namespace lift_00497860
} // namespace lift_00664C30

// [0x0066AD10] sub_0066AD10 (33 bytes)
namespace lift_0066AD10 {
// @name sub_0066AD10
// @summary Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).
namespace lift_00497860 {
extern void ext_00662610(void* self, uint8_t flag);

// @name forwardMakeBoolString
// @summary Forwards out_str and flag to makeBoolString (0x0046C460) and returns out_str.
void* fn_0066AD10(void* out_str, uint8_t flag) {
    ext_00662610(out_str, flag);
    return out_str;
}
} // namespace lift_00497860
} // namespace lift_0066AD10

// [0x00664BF0]
namespace lift_00664BF0 {
// @name ScanBytesUntil
// @summary Walks bytes in [begin, end) calling pred(byte) (cdecl) and returns the first position where it returns nonzero, or end if none match.
// Callback returns a byte in AL; only its low byte is tested.

using ByteTestFn = uint8_t(__cdecl*)(int);

const uint8_t* ScanBytesUntil(const uint8_t* begin, const uint8_t* end, ByteTestFn pred) {
    const uint8_t* cur = begin;
    if (cur == end) {
        return cur;
    }
    do {
        if (pred(static_cast<int>(*cur)) != 0) {
            break;
        }
        ++cur;
    } while (cur != end);
    return cur;
}
} // namespace lift_00664BF0

// [0x00667140] sub_00667140 (64 bytes)
namespace lift_00667140 {
// @name sub_00667140
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_00667140() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0xC4);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0xC0) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0xC1) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_00667140

// [0x00661B10]
namespace lift_00661B10 {
extern void (*mem_00925134)();

// @name sub_00661B10
// @summary Checks if a checked iterator points to the first element of its container
// @field Iterator +0x04 uint32_t field_0x04
// @field Iterator +0x08 uint32_t field_0x08
// @field Iterator +0x0c uint32_t field_0x0c
uint8_t __thiscall sub_00661B10(void* self) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x4);
    if (obj == 0) {
        return 0;
    }

    uint32_t ptr = *reinterpret_cast<uint32_t*>(obj + 0x64);
    uint32_t expected = obj + 0x60;
    uint32_t target = *reinterpret_cast<uint32_t*>(ptr);

    uint32_t cur = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x8);
    if (cur == 0 || cur != expected) {
        mem_00925134();
    }

    uint32_t val = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0xc);
    return static_cast<uint8_t>(val == target);
}
} // namespace lift_00661B10

// [0x00662BF0]
namespace lift_00662BF0 {
// @name GetCurrentDirectoryString
// @summary Fills a std::string with the process current directory (GetCurrentDirectoryA into a 260-byte buffer) and returns the output string pointer.

    extern uint32_t mem_00924254; // IAT slot: KERNEL32!GetCurrentDirectoryA
    extern uint32_t mem_00924FE4; // IAT slot: MSVCP80 basic_string(const char*) ctor
    extern uint32_t ext_GetCurrentDirectoryA(uint32_t nBufferLength, char* lpBuffer);
    extern void ext_basic_string_ctor_cstr(void* self, const char* s);

// Lifted from: sub_00662BF0 (cdecl, one stack arg: output std::string*)
void* sub_00662BF0(void* out) {
    char buf[0x104 + 4];
    buf[0x104] = 0;
    // GetCurrentDirectoryA(0x104, buf)
    ext_GetCurrentDirectoryA(0x104, buf);
    // std::string(buf) constructed in place in *out
    ext_basic_string_ctor_cstr(out, buf);
    return out;
}
} // namespace lift_00662BF0

// [0x0066A720] sub_0066A720 (63 bytes)
namespace lift_0066A720 {
// Known callee 0x006A611E: thunk_MFC80_ord_265 (IAT jump thunk forwarding to MFC80!ord_265.)
// Takes one stack argument (byte count) and returns the allocated pointer.
extern void* ext_006A611E(DWORD size);

// @name Unknown::AllocCountedBuffer
// @class Unknown
// @summary Allocates a count-byte buffer into this, sets length 0 and capacity count, and NUL-terminates both ends (count==0 clears the record).
// @field Unknown +0x00 BYTE* field_0x00
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
void fn_0066A720(void* self, DWORD count) {
    if (count == 0) {
        lift_field<BYTE*>(self, 0x00) = nullptr;
        lift_field<DWORD>(self, 0x04) = 0;
        lift_field<DWORD>(self, 0x08) = 0;
        return;
    }

    BYTE* buf = static_cast<BYTE*>(ext_006A611E(count));
    lift_field<BYTE*>(self, 0x00) = buf;
    lift_field<DWORD>(self, 0x08) = count;
    lift_field<DWORD>(self, 0x04) = 0;
    buf[0] = 0;
    buf[count - 1] = 0;
}
} // namespace lift_0066A720

// [0x00664B50]
namespace lift_00664B50 {
// IAT slot (.rdata 0x009252F4) holding MSVCR80!toupper
extern int (*mem_009252F4)(int);

// @name upperCopyRange
// @summary Copies [first, last) into dest converting each char via toupper; returns one past the last written char (dest if empty).
char* sub_00664B50(const char* first, const char* last, char* dest) {
    if (first == last) {
        return dest;
    }
    do {
        *dest++ = static_cast<char>(mem_009252F4(static_cast<int>(*first)));
    } while (++first != last);
    return dest;
}
} // namespace lift_00664B50

// [0x00662B20]
namespace lift_00662B20 {
// @name appendTrailingBackslash
// @summary Ensures the std::string at arg2 ends with '\\' (appending one in place if needed), then returns a copy of it through the hidden return slot arg1.
// @field none (object is only passed to std::string members; no direct field offsets accessed)

// std::string members, reached through MSVCP80 thunks (IAT slots 0x924EAC, 0x92500C, 0x924EC0, 0x924FE0).
extern size_t ext_string_size(void* str);                  // size() const
extern char*  ext_string_index(void* str, size_t pos);     // operator[](size_t) -> char&
extern void   ext_string_append_char(void* str, char ch);  // operator+=(char) -> basic_string&
extern void   ext_string_copy_construct(void* dst, const void* src); // basic_string(const basic_string&)

// Hidden return slot convention: ret receives the result; ret is also returned.
void* fn_00662B20(void* ret, void* path) {
    size_t last = ext_string_size(path) - 1;
    if (*ext_string_index(path, last) != '\\') {
        ext_string_append_char(path, '\\');
    }
    ext_string_copy_construct(ret, path);
    return ret;
}
} // namespace lift_00662B20

// [0x00660210]
namespace lift_00660210 {
// @name std_vector_28_back
// @summary Returns a pointer to the last 28-byte element in a checked vector, validating bounds via _invalid_parameter_noinfo
// @field Vector28 +0x04 uint32_t first
// @field Vector28 +0x08 uint32_t last


extern uint32_t mem_00925134;

uint32_t __fastcall sub_00660210(uint32_t ecx) {
    using invalid_param_fn = void (*)();
    invalid_param_fn invalid_param = reinterpret_cast<invalid_param_fn>(static_cast<uintptr_t>(mem_00925134));

    uint32_t first = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ecx + 0x04));
    uint32_t last = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ecx + 0x08));

    if (first > last) {
        invalid_param();
    }

    uint32_t elem = last - 0x1c;
    if (elem > last || elem < first) {
        invalid_param();
    }

    if (elem >= last) {
        invalid_param();
    }

    return elem;
}
} // namespace lift_00660210

// [0x00662E70] sub_00662E70 (70 bytes)
namespace lift_00662E70 {
// Imported MSVCP80 / SHLWAPI thunks (IAT slots 0x924FF0, 0x924FE4, 0x925550).
// Calls are declared with their original MSVC calling conventions.
extern const char* __thiscall ext_00924FF0(const void* self);             // basic_string::c_str
extern void        __thiscall ext_00924FE4(void* self, const char* s);    // basic_string(const char*)
extern BOOL        __stdcall  ext_00925550(char* out, const char* path);  // SHLWAPI!PathCanonicalizeA

// @name CanonicalPathString
// @summary Canonicalizes the path held in a std::string and constructs the result string in-place into the output slot.
void* fn_00662E70(void* out, const void* in) {
    char buf[0x100];  // MAX_PATH-sized canonical path buffer
    buf[0] = '\0';

    const char* path = ext_00924FF0(in);
    ext_00925550(buf, path);
    ext_00924FE4(out, buf);
    return out;
}
} // namespace lift_00662E70

// [0x006648C0] sub_006648C0 (72 bytes)
namespace lift_006648C0 {
extern const char mem_009879C8[];

// @name Unknown::FormatIntAndDoubleToString
// @class Unknown
// @summary Formats an int and a double with the format string at 0x009879C8 into a 50-byte buffer and constructs the output std::string in place from it.
// @field Unknown +0x00 uint32_t vtable
std::string* fn_006648C0(std::string* out, double value, int32_t intArg) {
    char buf[50];
    buf[49] = '\0';
    std::snprintf(buf, sizeof(buf) - 1, mem_009879C8, intArg, value);
    new (out) std::string(buf);
    return out;
}
} // namespace lift_006648C0

// [0x006630C0] sub_006630C0 (75 bytes)
namespace lift_006630C0 {
// MSVCP80 std::string helpers (thiscall in the original binary, wrapped here).
extern uint32_t ext_std_string_size(const void* str);
extern const char* ext_std_string_at(const void* str, uint32_t index);

extern int mem_00924EAC;
extern int mem_00924FFC;
extern int mem_00A9FB8C;

// @name IsTailSignatureMatch_006630C0
// @class (none)
// @summary Returns true if the string is at least 20 chars long and its last 16 chars equal the 16-byte signature at mem_00A9FB8C.
bool fn_006630C0(const void* str) {
    const uint32_t size = ext_std_string_size(str);
    if (size < 0x14) {
        return false;
    }

    const uint8_t* signature = reinterpret_cast<const uint8_t*>(&mem_00A9FB8C);
    for (uint32_t i = 0; i < 0x10; ++i) {
        const char* ch = ext_std_string_at(str, size + i - 0x10);
        if (static_cast<uint8_t>(*ch) != signature[i]) {
            return false;
        }
    }
    return true;
}
} // namespace lift_006630C0

// [0x00665B80]
namespace lift_00665B80 {
// @name Unknown::ReleaseElements_00665B80
// @class Unknown
// @summary Walks the pointer vector at this+0x2C..this+0x30 and invokes virtual slot 0 on each element.
// @field Unknown +0x2C void** elements_begin
// @field Unknown +0x30 void** elements_end

extern void (__cdecl* mem_00925134)(void);

using VirtualSlot0 = void(__thiscall*)(void* self);

void __thiscall fn_00665B80(void* self) {
    void** cursor = lift_field<void**>(self, 0x2C);

    // Range sanity: begin must not be past end (invalid_parameter on violation).
    if (cursor > lift_field<void**>(self, 0x30)) {
        mem_00925134();
    }

    for (;;) {
        void** end = lift_field<void**>(self, 0x30);
        if (cursor == end) {
            break;
        }

        // Cursor must be strictly before end before dereferencing.
        if (!(cursor < lift_field<void**>(self, 0x30))) {
            mem_00925134();
        }

        void* obj = *cursor;
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<VirtualSlot0>(vtable[0]);
        fn(obj);

        // Re-validate after the virtual call, then advance by one pointer.
        if (!(cursor < lift_field<void**>(self, 0x30))) {
            mem_00925134();
        }
        ++cursor;
    }
}
} // namespace lift_00665B80

// [0x00666930] sub_00666930 (77 bytes)
namespace lift_00666930 {
// @name sub_00666930
// @summary Auto-lifted identical-shape clone of 0x004757F0 (sub_0047A010).
namespace lift_004757F0 {
// Known callee 0x00672D10: sub_00672D10 (Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).)
extern void ext_006668B0(void* self);
// Imported MSVC CRT slot for std::basic_string<char>::~basic_string (used via explicit dtor call below).
extern int mem_00924FF4;

// @name Unknown::Dtor_004757F0
// @class Unknown
// @summary Destructor body: releases the StringArray at +0x1C, then destroys the std::string at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C StringArray field_0x1C
void fn_00666930(void* self) {
    // ecx+0x1c is passed as `this` to the StringArray release routine.
    ext_006668B0(static_cast<unsigned char*>(self) + 0x1C);
    // The original calls the MSVC CRT string dtor through mem_00924FF4 on `this`.
    using StdString = std::string;
    reinterpret_cast<StdString*>(self)->~StdString();
}
} // namespace lift_004757F0
} // namespace lift_00666930

// [0x00662A50] sub_00662A50 (83 bytes)
namespace lift_00662A50 {
// IAT slots (MSVC import thunks) used by this function.
extern int mem_0092424C;  // KERNEL32!GetTempPathA
extern int mem_00924FE4;  // MSVCP80 std::basic_string<char>::basic_string(const char*)
extern int mem_00924FE8;  // MSVCP80 std::basic_string<char>::basic_string()

// @name Temp::getTempPathString_00662A50
// @summary Writes the Windows temp directory path into the caller's std::string, or an empty string if GetTempPathA fails. Returns the string pointer.
void* fn_00662A50(void* out) {
    char buf[0x104];

    using GetTempPathAFn = DWORD(__stdcall*)(DWORD, LPSTR);
    using StringCtorCStrFn = void(__thiscall*)(void* self, const char* s);
    using StringCtorFn = void(__thiscall*)(void* self);

    const DWORD len = reinterpret_cast<GetTempPathAFn>(
        static_cast<uintptr_t>(mem_0092424C))(0x104, buf);

    if (len != 0) {
        reinterpret_cast<StringCtorCStrFn>(
            static_cast<uintptr_t>(mem_00924FE4))(out, buf);
    } else {
        reinterpret_cast<StringCtorFn>(
            static_cast<uintptr_t>(mem_00924FE8))(out);
    }
    return out;
}
} // namespace lift_00662A50

// [0x006629F0] sub_006629F0 (86 bytes)
namespace lift_006629F0 {
// IAT slot for SHLWAPI!PathRelativePathToA (stdcall, 5 args).
extern uintptr_t mem_00925558;
// IAT slot for MSVCP80 std::basic_string<char>::basic_string(const char*) (thiscall).
extern uintptr_t mem_00924FE4;

// @name Unknown::relativePathOrFallback_006629F0
// @summary Computes the path of `to` relative to the directory `from` and assigns it to the std::string at `out`; if no relative path can be produced, assigns `to` unchanged. Returns `out`.
//
// Notes:
// - Stack args (cdecl, caller cleans up): arg0 = out (hidden std::string*, also returned in eax),
//   arg1 = from (directory, FILE_ATTRIBUTE_DIRECTORY = 0x10), arg2 = to (file, FILE_ATTRIBUTE_NORMAL = 0x80).
// - The original also stores a zero dword in its frame before the call; it is never read, so it is omitted.
void* fn_006629F0(void* out, const char* from, const char* to) {
    // char path[MAX_PATH]; receives the relative path on success.
    char path[260];

    // PathRelativePathToA(path, from, FILE_ATTRIBUTE_DIRECTORY, to, FILE_ATTRIBUTE_NORMAL)
    using RelativePathFn = int(__stdcall*)(char* pszPath, const char* pszFrom, uint32_t dwAttrFrom,
                                           const char* pszTo, uint32_t dwAttrTo);
    RelativePathFn relativePath = reinterpret_cast<RelativePathFn>(mem_00925558);
    int ok = relativePath(path, from, 0x10u, to, 0x80u);

    // Success -> use computed relative path; failure -> use the original `to` string.
    const char* source = ok ? path : to;

    // std::string::basic_string(source) constructed in place at `out` (this in ecx).
    using StringCtorFn = void(__thiscall*)(void* self, const char* s);
    StringCtorFn construct = reinterpret_cast<StringCtorFn>(mem_00924FE4);
    construct(out, source);

    return out;
}
} // namespace lift_006629F0

// [0x006659F0]
namespace lift_006659F0 {
// @name destroyListElements
// @summary Iterates a checked std::list<T*> range [first, last) and invokes the deleting destructor on each non-null element.

extern uint32_t mem_00925134;

void __stdcall sub_006659F0(uint32_t first_cont, uint32_t first_node, uint32_t last_cont, uint32_t last_node) {
    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);
    uint32_t cont = first_cont;
    uint32_t node = first_node;

    while (true) {
        if (cont == 0 || cont != last_cont) {
            invalid_param();
        }
        if (node == last_node) {
            break;
        }

        uint32_t cur = node;
        if (cont == 0) {
            invalid_param();
        }
        if (node == *reinterpret_cast<uint32_t*>(cont + 4)) {
            invalid_param();
        }
        node = *reinterpret_cast<uint32_t*>(node);

        if (cont == 0) {
            invalid_param();
        }
        if (cur == *reinterpret_cast<uint32_t*>(cont + 4)) {
            invalid_param();
        }

        uint32_t elem = *reinterpret_cast<uint32_t*>(cur + 8);
        if (elem != 0) {
            uint32_t vtable = *reinterpret_cast<uint32_t*>(elem);
            auto dtor = reinterpret_cast<void(__thiscall*)(uint32_t, uint32_t)>(*reinterpret_cast<uint32_t*>(vtable));
            dtor(elem, 1);
        }
    }
}
} // namespace lift_006659F0

// [0x00660180] sub_00660180 (91 bytes)
namespace lift_00660180 {
// 32-byte element: opaque leading payload (0x1c bytes, a string-like header in the
// original MSVC layout) followed by a 32-bit key at +0x1c.
struct Elem {
    uint8_t head[0x1c];
    int32_t key;  // +0x1c
};
static_assert(sizeof(Elem) == 0x20, "Elem must be 32 bytes");

// Sift-down helper: (first, index, count, value-by-value).
extern void ext_0065FE50(Elem* first, ptrdiff_t index, ptrdiff_t count, Elem value);

// @name makeHeapElements32
// @summary Heapify a range of 32-byte elements: sift down each internal node from count/2-1 to 0, passing a copy of the node by value to ext_0065FE50.
// @field Unknown +0x1c int32_t field_0x1c
void fn_00660180(Elem* first, Elem* last) {
    const ptrdiff_t count = last - first;
    if (count / 2 <= 0) {
        return;
    }
    for (ptrdiff_t i = count / 2 - 1; i >= 0; --i) {
        Elem value = first[i];
        ext_0065FE50(first, i, count, value);
    }
}
} // namespace lift_00660180

// [0x00665D20] sub_00665D20 (76 bytes)
namespace lift_00665D20 {
extern void ext_004369D0(void* self);
// Known callee 0x006659F0: destroyListElements (Iterates a checked std::list<T*> range [first, last) and invokes the deleting destructor on each non-null element.)
extern void ext_006659F0(uint32_t first_cont, uint32_t first_node, uint32_t last_cont, uint32_t last_node);

// @name destroyOwnedListElements
// @summary Destroys every element of the list whose head pointer is stored at +0x04, then runs the follow-up cleanup on this object.
// @field Unknown +0x04 void* field_0x04
void fn_00665D20(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* head = *reinterpret_cast<void**>(base + 0x04);
    uint32_t headNext = head ? *reinterpret_cast<uint32_t*>(head) : 0u;

    ext_006659F0(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                 headNext,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(head)));
    ext_004369D0(self);
}
} // namespace lift_00665D20
