// Lifted C++ translation unit: lifted/leaf/decompiled_660000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>
#include <cstdint>
#include <cstddef>
#include <cstdlib>
#include <cmath>

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

// [0x00665D70] sub_00665D70 (69 bytes)
namespace lift_00665D70 {
// Known callee 0x006659F0: destroyListElements (Iterates a checked std::list<T*> range [first, last) and invokes the deleting destructor on each non-null element.)
extern void ext_006659F0(uint32_t first_cont, uint32_t first_node, uint32_t last_cont, uint32_t last_node);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t node);

// Node layout (MSVC-style circular list node): +0x00 next, +0x04 prev.
static inline uint32_t& node_next(uint32_t node) {
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(node)), 0x00);
}
static inline uint32_t& node_prev(uint32_t node) {
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(node)), 0x04);
}

// @name NodeList::clearNodes
// @class NodeList
// @summary Destroys all element nodes of a circular list (between sentinel head and first node), resets the head to self-loop, and zeroes the size.
// @field NodeList +0x04 uint32_t head
// @field NodeList +0x08 uint32_t size
void fn_00665D70(void* self) {
    const uint32_t self_va = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    uint32_t head  = lift_field<uint32_t>(self, 0x04);
    uint32_t first = node_next(head);

    ext_006659F0(self_va, first, self_va, head);

    // Reset sentinel to an empty self-loop.
    head = lift_field<uint32_t>(self, 0x04);
    node_next(head) = head;
    node_prev(head) = head;
    lift_field<uint32_t>(self, 0x08) = 0;

    if (first == head) {
        return;
    }

    // Free every element node; read next before freeing the current one.
    uint32_t cur = first;
    do {
        uint32_t next = node_next(cur);
        ext_006A5C5C(cur);
        cur = next;
    } while (cur != head);
}
} // namespace lift_00665D70

// [0x0066BD00] sub_0066BD00 (34 bytes)
namespace lift_0066BD00 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; stores its stack argument into self's first DWORD and returns it)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// @name ExprParser::SubComponentType::SubComponentType_0066BD00
// @class SubComponentType
// @summary Thiscall constructor-style init: calls ext_0067A670 on self, sets vtable to 0x00988094, stores two stack args at +0x04 and +0x08, returns self. Callee pops 8 bytes (ret 8).
// @field SubComponentType +0x00 void* _vptr
// @field SubComponentType +0x04 DWORD field_0x04
// @field SubComponentType +0x08 DWORD field_0x08
void* fn_0066BD00(void* self, DWORD arg1, DWORD arg2) {
    // ecx (self) is still live when the callee is invoked; the stack argument it
    // receives is the saved ECX value, i.e. self itself.
    ext_0067A670(self, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));

    lift_field<DWORD>(self, 0x04) = arg1;
    lift_field<DWORD>(self, 0x00) = 0x00988094;  // primary vtable address
    lift_field<DWORD>(self, 0x08) = arg2;
    return self;
}
} // namespace lift_0066BD00

// [0x0066E0C0] sub_0066E0C0 (87 bytes)
namespace lift_0066E0C0 {
// @name sub_0066E0C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59764;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59760;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E0C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B37FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59764 & 1u) == 0) {
        mem_00B59764 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59760, frame[0]);
        mem_00B59760 = 0x988244u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59760;
}
} // namespace lift_004CAE30
} // namespace lift_0066E0C0

// [0x0066E120] sub_0066E120 (87 bytes)
namespace lift_0066E120 {
// @name sub_0066E120
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5976C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59768;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E120() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B381Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5976C & 1u) == 0) {
        mem_00B5976C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59768, frame[0]);
        mem_00B59768 = 0x9883F4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59768;
}
} // namespace lift_004CAE30
} // namespace lift_0066E120

// [0x0066E180] sub_0066E180 (87 bytes)
namespace lift_0066E180 {
// @name sub_0066E180
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59774;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59770;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E180() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B383Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59774 & 1u) == 0) {
        mem_00B59774 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59770, frame[0]);
        mem_00B59770 = 0x9885A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59770;
}
} // namespace lift_004CAE30
} // namespace lift_0066E180

// [0x0066E1E0] sub_0066E1E0 (87 bytes)
namespace lift_0066E1E0 {
// @name sub_0066E1E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5977C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59778;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E1E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B385Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5977C & 1u) == 0) {
        mem_00B5977C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59778, frame[0]);
        mem_00B59778 = 0x988754u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59778;
}
} // namespace lift_004CAE30
} // namespace lift_0066E1E0

// [0x0066E240] sub_0066E240 (87 bytes)
namespace lift_0066E240 {
// @name sub_0066E240
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59784;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59780;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E240() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B387Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59784 & 1u) == 0) {
        mem_00B59784 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59780, frame[0]);
        mem_00B59780 = 0x988904u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59780;
}
} // namespace lift_004CAE30
} // namespace lift_0066E240

// [0x0066E2A0] sub_0066E2A0 (87 bytes)
namespace lift_0066E2A0 {
// @name sub_0066E2A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5978C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59788;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E2A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B389Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5978C & 1u) == 0) {
        mem_00B5978C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59788, frame[0]);
        mem_00B59788 = 0x988AB4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59788;
}
} // namespace lift_004CAE30
} // namespace lift_0066E2A0

// [0x0066E300] sub_0066E300 (87 bytes)
namespace lift_0066E300 {
// @name sub_0066E300
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59794;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59790;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E300() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B38BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59794 & 1u) == 0) {
        mem_00B59794 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59790, frame[0]);
        mem_00B59790 = 0x988C64u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59790;
}
} // namespace lift_004CAE30
} // namespace lift_0066E300

// [0x0066E360] sub_0066E360 (87 bytes)
namespace lift_0066E360 {
// @name sub_0066E360
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5979C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59798;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E360() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B38DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5979C & 1u) == 0) {
        mem_00B5979C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59798, frame[0]);
        mem_00B59798 = 0x988E14u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59798;
}
} // namespace lift_004CAE30
} // namespace lift_0066E360

// [0x0066E3C0] sub_0066E3C0 (87 bytes)
namespace lift_0066E3C0 {
// @name sub_0066E3C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597A4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597A0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E3C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B38FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597A4 & 1u) == 0) {
        mem_00B597A4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597A0, frame[0]);
        mem_00B597A0 = 0x988FC4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597A0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E3C0

// [0x0066E420] sub_0066E420 (87 bytes)
namespace lift_0066E420 {
// @name sub_0066E420
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597AC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597A8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E420() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B391Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597AC & 1u) == 0) {
        mem_00B597AC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597A8, frame[0]);
        mem_00B597A8 = 0x989174u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597A8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E420

// [0x0066E480] sub_0066E480 (87 bytes)
namespace lift_0066E480 {
// @name sub_0066E480
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597B4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597B0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E480() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B393Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597B4 & 1u) == 0) {
        mem_00B597B4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597B0, frame[0]);
        mem_00B597B0 = 0x989324u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597B0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E480

// [0x0066E4E0] sub_0066E4E0 (87 bytes)
namespace lift_0066E4E0 {
// @name sub_0066E4E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597BC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597B8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E4E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B395Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597BC & 1u) == 0) {
        mem_00B597BC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597B8, frame[0]);
        mem_00B597B8 = 0x9894D4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597B8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E4E0

// [0x0066E540] sub_0066E540 (87 bytes)
namespace lift_0066E540 {
// @name sub_0066E540
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597C4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597C0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E540() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B397Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597C4 & 1u) == 0) {
        mem_00B597C4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597C0, frame[0]);
        mem_00B597C0 = 0x989684u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597C0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E540

// [0x0066E5A0] sub_0066E5A0 (87 bytes)
namespace lift_0066E5A0 {
// @name sub_0066E5A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597CC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597C8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E5A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B399Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597CC & 1u) == 0) {
        mem_00B597CC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597C8, frame[0]);
        mem_00B597C8 = 0x989834u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597C8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E5A0

// [0x0066E600] sub_0066E600 (87 bytes)
namespace lift_0066E600 {
// @name sub_0066E600
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597D4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597D0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E600() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B39BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597D4 & 1u) == 0) {
        mem_00B597D4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597D0, frame[0]);
        mem_00B597D0 = 0x9899E4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597D0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E600

// [0x0066E660] sub_0066E660 (87 bytes)
namespace lift_0066E660 {
// @name sub_0066E660
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597DC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597D8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E660() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B39DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597DC & 1u) == 0) {
        mem_00B597DC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597D8, frame[0]);
        mem_00B597D8 = 0x989B94u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597D8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E660

// [0x0066E6C0] sub_0066E6C0 (87 bytes)
namespace lift_0066E6C0 {
// @name sub_0066E6C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597E4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597E0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E6C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B39FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597E4 & 1u) == 0) {
        mem_00B597E4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597E0, frame[0]);
        mem_00B597E0 = 0x989D44u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597E0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E6C0

// [0x0066E720] sub_0066E720 (87 bytes)
namespace lift_0066E720 {
// @name sub_0066E720
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597EC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597E8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E720() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3A1Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597EC & 1u) == 0) {
        mem_00B597EC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597E8, frame[0]);
        mem_00B597E8 = 0x989EF4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597E8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E720

// [0x0066E780] sub_0066E780 (87 bytes)
namespace lift_0066E780 {
// @name sub_0066E780
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597F4;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597F0;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E780() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3A3Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597F4 & 1u) == 0) {
        mem_00B597F4 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597F0, frame[0]);
        mem_00B597F0 = 0x98A0A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597F0;
}
} // namespace lift_004CAE30
} // namespace lift_0066E780

// [0x0066E7E0] sub_0066E7E0 (87 bytes)
namespace lift_0066E7E0 {
// @name sub_0066E7E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B597FC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B597F8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E7E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3A5Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B597FC & 1u) == 0) {
        mem_00B597FC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B597F8, frame[0]);
        mem_00B597F8 = 0x98A254u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B597F8;
}
} // namespace lift_004CAE30
} // namespace lift_0066E7E0

// [0x0066E840] sub_0066E840 (87 bytes)
namespace lift_0066E840 {
// @name sub_0066E840
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59804;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59800;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E840() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3A7Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59804 & 1u) == 0) {
        mem_00B59804 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59800, frame[0]);
        mem_00B59800 = 0x98A404u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59800;
}
} // namespace lift_004CAE30
} // namespace lift_0066E840

// [0x0066E8A0] sub_0066E8A0 (87 bytes)
namespace lift_0066E8A0 {
// @name sub_0066E8A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5980C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59808;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E8A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3A9Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5980C & 1u) == 0) {
        mem_00B5980C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59808, frame[0]);
        mem_00B59808 = 0x98A5B4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59808;
}
} // namespace lift_004CAE30
} // namespace lift_0066E8A0

// [0x0066E900] sub_0066E900 (87 bytes)
namespace lift_0066E900 {
// @name sub_0066E900
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59814;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59810;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E900() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3ABEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59814 & 1u) == 0) {
        mem_00B59814 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59810, frame[0]);
        mem_00B59810 = 0x98A68Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59810;
}
} // namespace lift_004CAE30
} // namespace lift_0066E900

// [0x0066E960] sub_0066E960 (87 bytes)
namespace lift_0066E960 {
// @name sub_0066E960
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5981C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59818;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E960() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3ADEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5981C & 1u) == 0) {
        mem_00B5981C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59818, frame[0]);
        mem_00B59818 = 0x98A83Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59818;
}
} // namespace lift_004CAE30
} // namespace lift_0066E960

// [0x0066E9C0] sub_0066E9C0 (87 bytes)
namespace lift_0066E9C0 {
// @name sub_0066E9C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59824;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59820;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066E9C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3AFEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59824 & 1u) == 0) {
        mem_00B59824 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59820, frame[0]);
        mem_00B59820 = 0x98A9ECu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59820;
}
} // namespace lift_004CAE30
} // namespace lift_0066E9C0

// [0x0066EA20] sub_0066EA20 (87 bytes)
namespace lift_0066EA20 {
// @name sub_0066EA20
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5982C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59828;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066EA20() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3B1Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5982C & 1u) == 0) {
        mem_00B5982C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59828, frame[0]);
        mem_00B59828 = 0x98AB9Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59828;
}
} // namespace lift_004CAE30
} // namespace lift_0066EA20

// [0x0066EA80] sub_0066EA80 (87 bytes)
namespace lift_0066EA80 {
// @name sub_0066EA80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59834;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59830;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066EA80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3B3Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59834 & 1u) == 0) {
        mem_00B59834 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59830, frame[0]);
        mem_00B59830 = 0x98AD4Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59830;
}
} // namespace lift_004CAE30
} // namespace lift_0066EA80

// [0x0066EAE0] sub_0066EAE0 (87 bytes)
namespace lift_0066EAE0 {
// @name sub_0066EAE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5983C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59838;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066EAE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3B5Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5983C & 1u) == 0) {
        mem_00B5983C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59838, frame[0]);
        mem_00B59838 = 0x98AEFCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59838;
}
} // namespace lift_004CAE30
} // namespace lift_0066EAE0

// [0x0066EB40] sub_0066EB40 (87 bytes)
namespace lift_0066EB40 {
// @name sub_0066EB40
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59844;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59840;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0066EB40() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3B7Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59844 & 1u) == 0) {
        mem_00B59844 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59840, frame[0]);
        mem_00B59840 = 0x98B0ACu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59840;
}
} // namespace lift_004CAE30
} // namespace lift_0066EB40

// [0x00663060]
namespace lift_00663060 {
// @name sub_00663060_dtor
// @summary Destroys three std::string members at offsets +0x38, +0x1c, and +0x00
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c std::string field_0x1c
// @field Unknown +0x38 std::string field_0x38


extern uint32_t mem_00924FF4;

void __thiscall sub_00663060(void* self) {
    using string_dtor_t = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<string_dtor_t>(static_cast<uintptr_t>(mem_00924FF4));
    auto* base = static_cast<uint8_t*>(self);
    dtor(base + 0x38);
    dtor(base + 0x1c);
    dtor(base);
}
} // namespace lift_00663060

// [0x00665990]
namespace lift_00665990 {
extern void (*mem_00925134)(void);
extern void ext_006A5C5C(void*);

// @name StdList::erase
// @class StdList
// @summary Removes a node from a doubly-linked list and returns an iterator to the next node.
// @field StdList +0x04 void* _Myhead
// @field StdList +0x08 uint32_t _Mysize
extern void* __thiscall fn_00665990(void* self, void* ret_iter, void* cont, void* node) {
    uint8_t* list_ptr = static_cast<uint8_t*>(self);
    uint8_t* cont_ptr = static_cast<uint8_t*>(cont);
    uint8_t* node_ptr = static_cast<uint8_t*>(node);

    if (!cont_ptr) {
        mem_00925134();
    }
    if (node_ptr == *reinterpret_cast<uint8_t**>(cont_ptr + 0x4)) {
        mem_00925134();
    }

    uint8_t* next_node = *reinterpret_cast<uint8_t**>(node_ptr + 0x0);
    if (node_ptr != *reinterpret_cast<uint8_t**>(list_ptr + 0x4)) {
        uint8_t* prev_node = *reinterpret_cast<uint8_t**>(node_ptr + 0x4);
        *reinterpret_cast<uint8_t**>(prev_node + 0x0) = next_node;
        uint8_t* cur_next = *reinterpret_cast<uint8_t**>(node_ptr + 0x0);
        uint8_t* cur_prev = *reinterpret_cast<uint8_t**>(node_ptr + 0x4);
        *reinterpret_cast<uint8_t**>(cur_next + 0x4) = cur_prev;

        ext_006A5C5C(node_ptr);
        *reinterpret_cast<uint32_t*>(list_ptr + 0x8) -= 1;
    }

    uint8_t* out_iter = static_cast<uint8_t*>(ret_iter);
    *reinterpret_cast<uint8_t**>(out_iter + 0x4) = next_node;
    *reinterpret_cast<uint8_t**>(out_iter + 0x0) = cont_ptr;
    return out_iter;
}
} // namespace lift_00665990

// [0x00664CD0] sub_00664CD0 (103 bytes)
namespace lift_00664CD0 {
// Callee 0x0065F7F0: sub_0065F7F0 (thiscall-style: ecx = result slot, one stack arg = length, callee pops it).
extern void ext_0065F7F0(void* result_slot, int32_t length, uint32_t a, uint32_t b);
// Known callee 0x00664B50: upperCopyRange (Copies [first, last) into dest converting each char via toupper; returns one past the last written char (dest if empty).
extern char* ext_00664B50(const char* first, const char* last, char* dest);

struct TextRange {
    char* first; // +0x00
    char* last;  // +0x04
};

// @name upperCopyRangeToPair
// @summary Builds a TextRange from (a3,a4) and the span length, stores it to out, then uppercase-copies [first,last) into dest; returns out.
// @field TextRange +0x00 char* first
// @field TextRange +0x04 char* last
TextRange* fn_00664CD0(TextRange* out, const char* first, const char* last, uint32_t a3, uint32_t a4) {
    struct Slot {
        uint32_t lo;
        uint32_t hi;
    } slot{a3, a4};

    ext_0065F7F0(&slot, static_cast<int32_t>(last - first), a3, a4);

    out->first = reinterpret_cast<char*>(static_cast<uintptr_t>(slot.lo));
    out->last = reinterpret_cast<char*>(static_cast<uintptr_t>(slot.hi));

    ext_00664B50(first, last, reinterpret_cast<char*>(static_cast<uintptr_t>(a4)));
    return out;
}
} // namespace lift_00664CD0

// [0x00664D40] sub_00664D40 (103 bytes)
namespace lift_00664D40 {
extern void __thiscall ext_0065F7F0(void* self, uint32_t diff);
extern void __cdecl ext_00664BA0(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6);

// @name ComputeDeltaAndDispatch
// @summary Packs two args into a pair, calls sub_0065F7F0 with (a3 - a2) to produce two result words, stores them into the out pointer, then calls sub_00664BA0 with masked a3 and returns the out pointer.
extern void* __cdecl fn_00664D40(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6) {
    uint32_t pair[2];
    pair[0] = a4;
    pair[1] = a5;
    ext_0065F7F0(pair, a3 - a2);
    uint32_t r0 = pair[0];
    uint32_t r1 = pair[1];

    uint32_t* out = static_cast<uint32_t*>(a1);
    out[0] = r0;
    out[1] = r1;

    uint32_t a3_low_cleared = a3 & 0xFFFFFF00u;
    ext_00664BA0(a2, a3, a5, a6, a3_low_cleared, a3_low_cleared);
    return a1;
}
} // namespace lift_00664D40

// [0x00660280] sub_00660280 (104 bytes)
namespace lift_00660280 {
extern uint32_t mem_00B5907C;
extern uint32_t mem_00B59080;
extern uint32_t mem_00B59084;
extern uint32_t mem_00925134;

// Debug-checked "back()" on an MSVC-style vector whose storage is [mem_00B59080, mem_00B59084).
// Invalid-parameter handler is reached through the IAT slot at mem_00925134.
static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name VectorBack
// @summary Returns the last element of the global vector at mem_00B59080..mem_00B59084, or 0 if empty; validates iterator range first.
// @class Unknown
// @field Unknown +0x08 uint32_t field_0x08
uint32_t fn_00660280() {
    const uint32_t begin = mem_00B59080;
    const uint32_t end = mem_00B59084;

    if (begin == 0) {
        return 0;
    }
    // Element count = (end - begin) / 4 (arithmetic shift); empty -> 0.
    const int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 0;
    }
    if (begin > end) {
        invalid_parameter_noinfo();
    }

    const uint32_t last = end - 4;
    if (last > end || last < begin) {
        invalid_parameter_noinfo();
    }

    const uint32_t cursor = last;
    if (cursor >= lift_field<uint32_t>(&mem_00B5907C, 0x08)) {
        invalid_parameter_noinfo();
    }

    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(cursor));
}
} // namespace lift_00660280

// [0x00667030] sub_00667030 (108 bytes)
namespace lift_00667030 {
// Import slot 0x00925134 holds the address of MSVCR80!_invalid_parameter_noinfo.
// The raw .rdata label is "P{b", but the code loads a function pointer from it.
extern void (*mem_00925134)();

// @name advanceCursorSkipFlagged
// @summary Advances the cursor at self+0x04 past nodes whose byte at +0x39 is set, using the +0x04 and +0x08 links; calls the invalid-parameter handler when self+0x00 is null or the cursor node is flagged on entry.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* cursor
// @field UnknownNode +0x00 void* field_0x00
// @field UnknownNode +0x04 void* field_0x04
// @field UnknownNode +0x08 void* field_0x08
// @field UnknownNode +0x39 uint8_t flag
void fn_00667030(void* self) {
    if (lift_field<void*>(self, 0x00) == nullptr) {
        mem_00925134();
    }

    void* eax = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(eax, 0x39) != 0) {
        mem_00925134();
        return;
    }

    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x39) == 0) {
        // Walk the +0x00 chain from ecx until a node with flag set is found.
        void* n = lift_field<void*>(ecx, 0x00);
        if (lift_field<uint8_t>(n, 0x39) == 0) {
            do {
                ecx = n;
                n = lift_field<void*>(ecx, 0x00);
            } while (lift_field<uint8_t>(n, 0x39) == 0);
        }
        lift_field<void*>(self, 0x04) = ecx;
        return;
    }

    // ecx (eax+0x08) is flagged: step to eax+0x04 and skip forward.
    eax = lift_field<void*>(eax, 0x04);
    if (lift_field<uint8_t>(eax, 0x39) == 0) {
        for (;;) {
            void* cur = lift_field<void*>(self, 0x04);
            if (cur != lift_field<void*>(eax, 0x08)) {
                break;
            }
            lift_field<void*>(self, 0x04) = eax;
            void* edx = eax;
            eax = lift_field<void*>(edx, 0x04);
            if (lift_field<uint8_t>(eax, 0x39) != 0) {
                break;
            }
        }
    }
    lift_field<void*>(self, 0x04) = eax;
}
} // namespace lift_00667030

// [0x0066E050]
namespace lift_0066E050 {
// @name StringPool::freeNode
// @class StringPool
// @summary Destroys a string node and prepends it to the thread-safe free list.
// @field StringPool +0x00 void* freeListHead
// @field StringPool +0x14 CriticalSectionLock lock


extern void ext_0065C640(void* self);
extern void ext_0065C650(void* self);
extern uint32_t mem_00924FF4;

void sub_0066E050(void* self, void* node) {
    if (!node) {
        return;
    }

    uint8_t* base = static_cast<uint8_t*>(self);
    void* lock = base + 0x14;
    ext_0065C640(lock);

    auto dtor = reinterpret_cast<void(__thiscall*)(void*)>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(node);

    uint32_t* headPtr = reinterpret_cast<uint32_t*>(base);
    *reinterpret_cast<uint32_t*>(node) = *headPtr;
    *headPtr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(node));

    ext_0065C650(lock);
}
} // namespace lift_0066E050

// [0x00667EA0]
namespace lift_00667EA0 {
// @name StdMapString::find
// @class StdMapString
// @summary Finds a node by string key in a std::map-like tree, returning a checked iterator {self, node} or {self, header} if not found.
// @field StdMapString +0x04 void* header


extern void* ext_004774B0(void* self, const void* key);
extern void (*mem_00925134)();
extern bool (*mem_00924EF4)(const void* lhs, const void* rhs);

struct MapIterator {
    void* container;
    void* node;
};

void* fn_00667EA0(void* self, void* out_iter, const void* key) {
    void* node = ext_004774B0(self, key);
    if (!self) {
        mem_00925134();
    }
    void* header = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x4);
    MapIterator* it = reinterpret_cast<MapIterator*>(out_iter);
    if (node != header && !mem_00924EF4(key, reinterpret_cast<uint8_t*>(node) + 0xC)) {
        it->container = self;
        it->node = node;
    } else {
        it->container = self;
        it->node = header;
    }
    return out_iter;
}
} // namespace lift_00667EA0

// [0x00668D10]
namespace lift_00668D10 {
// @name Tree::find
// @class Tree
// @summary MSVC std::_Tree<std::string, ...>::find: returns checked iterator to matching node or end()
// @field Tree +0x04 void* head


void* __thiscall ext_00472730(void* self, const void* key);
extern void (__cdecl *mem_00925134)(void);
extern uint8_t (__cdecl *mem_00924EF4)(const void* lhs, const void* rhs);

struct TreeIter {
    void* container;
    void* node;
};

TreeIter* __thiscall fn_00668D10(void* self, TreeIter* out, const void* key) {
    void* node = ext_00472730(self, key);
    if (!self) {
        mem_00925134();
    }
    void* head = *reinterpret_cast<void**>(reinterpret_cast<char*>(self) + 0x4);
    if (node == head || mem_00924EF4(key, reinterpret_cast<const char*>(node) + 0xC) != 0) {
        out->container = self;
        out->node = head;
    } else {
        out->container = self;
        out->node = node;
    }
    return out;
}
} // namespace lift_00668D10

// [0x00660870]
namespace lift_00660870 {
// @name StringVector::erase
// @class StringVector
// @summary Erases a checked-iterator range [first, last) from a vector of 0x20-byte string elements, destroying trailing elements and returning the updated iterator.
// @field StringVector +0x08 uint8_t* end_ptr

extern void* ext_00672810(const void* first, const void* last, void* dest);
extern void (*mem_00925134)();
extern void (__thiscall *mem_00924FF4)(void* self);

struct CheckedIterator {
    void* container;
    uint8_t* ptr;
};

struct StringVector {
    uint8_t pad_00[0x08];
    uint8_t* end_ptr;
};

extern CheckedIterator* __thiscall fn_00660870(
    StringVector* self,
    CheckedIterator* out_iter,
    void* first_container,
    uint8_t* first_ptr,
    void* last_container,
    uint8_t* last_ptr)
{
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }

    if (first_ptr != last_ptr) {
        uint8_t* new_end = static_cast<uint8_t*>(ext_00672810(last_ptr, self->end_ptr, first_ptr));
        uint8_t* old_end = self->end_ptr;
        for (uint8_t* it = new_end; it != old_end; it += 0x20) {
            mem_00924FF4(it);
        }
        self->end_ptr = new_end;
    }

    out_iter->container = last_container;
    out_iter->ptr = last_ptr;
    return out_iter;
}
} // namespace lift_00660870

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

// [0x00666930] sub_00666930 (77 bytes)
namespace lift_00666930 {
// @name sub_00666930
// @summary Auto-lifted identical-shape clone of 0x004AD970 (Unknown::DestroyStringAndArray).
namespace lift_004AD970 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_006668B0(void* self);
// Import slot for MSVCP80 std::basic_string<char>::~basic_string (IAT entry, bound at load time).
extern int mem_00924FF4;

// @name Unknown::DestroyStringAndArray
// @class Unknown
// @summary Releases the StringArray at +0x1c, then runs the std::string destructor on the object itself.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c StringArray field_0x1c
void fn_00666930(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the string elements held in the array at +0x1c.
    ext_006668B0(base + 0x1c);

    // Destroy the std::string at offset 0 via the imported MSVC destructor (thiscall).
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_004AD970
} // namespace lift_00666930

// [0x00662F80]
namespace lift_00662F80 {
extern uint32_t mem_00924FF0;
extern uint32_t mem_009255E0;

// @name showMessageBoxFromStrings
// @summary Shows a MessageBoxA (type 0x40, no owner) with arg1's c_str() as text and arg0's c_str() as caption; returns the MessageBoxA result.
// (No direct field accesses: the std::string operands are used only through c_str().)
int32_t sub_00662F80(uint32_t arg0, uint32_t arg1) {
    using CStrFn = uint32_t(__thiscall*)(uint32_t);
    uint32_t caption = reinterpret_cast<CStrFn>(mem_00924FF0)(arg0);
    uint32_t text = reinterpret_cast<CStrFn>(mem_00924FF0)(arg1);

    using MessageBoxAFn = int32_t(__stdcall*)(uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<MessageBoxAFn>(mem_009255E0)(0, text, caption, 0x40u);
}
} // namespace lift_00662F80

// [0x00661920] sub_00661920 (35 bytes)
namespace lift_00661920 {
// @name fn_00661920_forwardToSubobjectVcall11
// @class <ClassName> (optional)
// @summary Calls vtable slot 11 (+0x2C) of the object at self+0x00, passing (self+0x04, a1, a2, a3) as the call arguments; returns with 12 bytes of stack args cleaned up.
// @field <ClassName> +0x00 void* field_0x00
// @field <ClassName> +0x04 uint8_t field_0x04

// Virtual dispatch helper: calls vtable slot `Slot` (index, not byte offset) of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

void fn_00661920(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* sub = lift_field<void*>(self, 0x00);
    // Passes (self + 0x04) as the first stack argument, followed by a1, a2, a3.
    void* arg0 = static_cast<char*>(self) + 0x04;
    lift_vcall<void, 11>(sub, arg0, a1, a2, a3); // vtable +0x2C
}
} // namespace lift_00661920

// [0x006629B0] sub_006629B0 (35 bytes)
namespace lift_006629B0 {
// IAT slots: mem_00924FF0 -> std::string::c_str, mem_009252E8 -> _stat64i32 (MSVCR80).
extern int mem_00924FF0;
extern int mem_009252E8;

// @name fileExistsFromString
// @summary Returns 1 if _stat64i32(c_str(*self), buf) succeeds (returns 0), else 0.
int fn_006629B0(void* self) {
    using CStrFn = const char* (__thiscall*)(void*);
    using StatFn = int (__cdecl*)(const char*, void*);

    // Call through the IAT slots exactly as the original does.
    CStrFn c_str = *reinterpret_cast<CStrFn*>(&mem_00924FF0);
    StatFn stat_fn = *reinterpret_cast<StatFn*>(&mem_009252E8);

    unsigned char statbuf[0x30]; // original reserves 0x30 bytes of stack for the stat buffer

    int r = stat_fn(c_str(self), statbuf);
    // neg/sbb/add sequence: returns 1 when r == 0 (success), 0 otherwise.
    return r == 0 ? 1 : 0;
}
} // namespace lift_006629B0
