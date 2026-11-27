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

// [0x00664B20] sub_00664B20 (37 bytes)
namespace lift_00664B20 {
extern int mem_00924FF0;
extern int mem_00925240;

// @name StdStringContainsCStr
// @summary Returns true if the C string of the first std::string argument contains the C string of the second (strstr != NULL).
// Cdecl: a at [esp+4], b at [esp+8]; bool result in al.
// Both arguments are opaque MSVCP80 std::basic_string objects; no fields are accessed.
bool __cdecl fn_00664B20(const void* a, const void* b) {
    // MSVCP80 basic_string::c_str (thiscall, this in ecx, no stack args).
    using CStrFn = const char*(__thiscall*)(const void* self);
    // MSVCR80 strstr (cdecl).
    using StrstrFn = const char*(__cdecl*)(const char* haystack, const char* needle);

    // IAT slots: the pointer stored in each slot is the callable target.
    auto c_str = *reinterpret_cast<CStrFn*>(&mem_00924FF0);
    auto strstr_fn = *reinterpret_cast<StrstrFn*>(&mem_00925240);

    // Original order: b.c_str() first (ecx=[esp+8]), then a.c_str() (ecx=[esp+4]).
    const char* needle = c_str(b);
    const char* haystack = c_str(a);
    return strstr_fn(haystack, needle) != nullptr;
}
} // namespace lift_00664B20

// [0x00662BF0]
namespace lift_00662BF0 {
// @name GetCurrentDirectoryString
// @summary Constructs an std::string from the process current directory into the caller-provided slot and returns it.

// IAT slot: KERNEL32!GetCurrentDirectoryA
extern uint32_t mem_00924254;
// IAT slot: MSVCP80 std::basic_string<char>::basic_string(const char*) ctor
extern uint32_t mem_00924FE4;

extern void* __cdecl sub_00662BF0(void* out) {
    using GetCurrentDirectoryA_fn = DWORD(__stdcall*)(DWORD nBufferLength, LPSTR lpBuffer);
    using StringCtorCStr_fn = void(__thiscall*)(void* self, LPCSTR str);

    char buf[0x104];

    reinterpret_cast<GetCurrentDirectoryA_fn>(static_cast<uintptr_t>(mem_00924254))(0x104, buf);
    reinterpret_cast<StringCtorCStr_fn>(static_cast<uintptr_t>(mem_00924FE4))(out, buf);

    return out;
}
} // namespace lift_00662BF0

// [0x00662B20]
namespace lift_00662B20 {
// @name ensureTrailingBackslash
// @summary Appends a trailing backslash to a std::string if not already present and copy-constructs the result into sret

extern uint32_t mem_00924EAC;
extern uint32_t mem_0092500C;
extern uint32_t mem_00924EC0;
extern uint32_t mem_00924FE0;

typedef uint32_t (__thiscall* StringSizeFn)(void* self);
typedef char* (__thiscall* StringIndexFn)(void* self, uint32_t index);
typedef void* (__thiscall* StringAppendCharFn)(void* self, char c);
typedef void* (__thiscall* StringCopyCtorFn)(void* self, const void* other);

void* __cdecl sub_00662B20(void* dst, void* src) {
    auto string_size = reinterpret_cast<StringSizeFn>(mem_00924EAC);
    auto string_index = reinterpret_cast<StringIndexFn>(mem_0092500C);
    auto string_append_char = reinterpret_cast<StringAppendCharFn>(mem_00924EC0);
    auto string_copy_ctor = reinterpret_cast<StringCopyCtorFn>(mem_00924FE0);

    uint32_t len = string_size(src);
    char* last = string_index(src, len - 1);
    if (*last != '\\') {
        string_append_char(src, '\\');
    }
    string_copy_ctor(dst, src);
    return dst;
}
} // namespace lift_00662B20

// [0x006648C0] sub_006648C0 (72 bytes)
namespace lift_006648C0 {
// MSVCR80!_snprintf, called through IAT slot 0x009251E0.
extern int __cdecl ext_009251E0(char* buffer, size_t count, const char* format, ...);
// MSVCP80 std::basic_string<char>::basic_string(const char*), called through IAT slot 0x00924FE4.
// Thiscall: `self` arrives in ecx, the C string is the single stack argument.
extern void* __thiscall ext_00924FE4(void* self, const char* text);
// Format string literal in .rdata at 0x009879C8 (contents not recovered here).
extern const char mem_009879C8[];

// @name MakeFormattedStdString
// @summary Formats an int and a double with _snprintf into a 50-byte stack buffer, constructs the std::string at `out` from it, and returns `out`.
// Stack args (cdecl): +0x04 unused, +0x08 double value, +0x10 int ivalue, +0x14/+0x18/+0x1C unused, +0x20 out (std::string*).
void* fn_006648C0(int32_t arg_04, double value, int32_t ivalue,
                  int32_t arg_14, int32_t arg_18, int32_t arg_1C, void* out) {
    (void)arg_04;
    (void)arg_14;
    (void)arg_18;
    (void)arg_1C;

    char buffer[0x32];
    ext_009251E0(buffer, sizeof(buffer), mem_009879C8, ivalue, value);
    ext_00924FE4(out, buffer);
    return out;
}
} // namespace lift_006648C0

// [0x006630C0] sub_006630C0 (75 bytes)
namespace lift_006630C0 {
extern int mem_00924EAC;
extern int mem_00924FFC;
extern int mem_00A9FB8C;

// IAT slots hold MSVC std::string member function pointers (thiscall).
using ext_string_size_fn = uint32_t(__thiscall*)(void* self);
using ext_string_at_fn = const char*(__thiscall*)(void* self, uint32_t index);

// @name std_string_endsWithKey16
// @summary Returns true if the std::string is at least 0x14 chars long and its last 16 chars equal the 16-byte key at mem_00A9FB8C.
bool fn_006630C0(void* self) {
    const auto size_fn = *reinterpret_cast<ext_string_size_fn*>(&mem_00924EAC);
    const auto at_fn = *reinterpret_cast<ext_string_at_fn*>(&mem_00924FFC);

    const uint32_t size = size_fn(self);
    if (size < 0x14) {
        return false;
    }

    const uint8_t* key = reinterpret_cast<const uint8_t*>(&mem_00A9FB8C);
    for (uint32_t i = 0; i < 0x10; ++i) {
        const char* ch = at_fn(self, size - 0x10 + i);
        if (static_cast<uint8_t>(*ch) != key[i]) {
            return false;
        }
    }
    return true;
}
} // namespace lift_006630C0

// [0x006678A0] sub_006678A0 (81 bytes)
namespace lift_006678A0 {
// Known callee 0x00667F10: SearchableMap<FileProject::File, GetNameFromAttribute<FileProject::File>>::vfunc_0 (Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).)
extern void ext_00667F10();
// Known callee 0x00668D80: SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>::vfunc_0 (Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).)
extern void ext_00668D80();
extern int mem_00925134;

// @name lookupIndexedEntry
// @summary Looks up key in the map at self + index*16 + 8; if owner->field_0x14 is set, looks up owner in that result, otherwise returns the first entry (+0x28) of the result's list, or nullptr.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x14 uint32_t field_0x14
void* __thiscall fn_006678A0(void* self, uint32_t index, const void* key, void* owner) {
    using LookupFn = void* (__thiscall*)(void* self, const void* key);

    void* map = static_cast<uint8_t*>(self) + (static_cast<uintptr_t>(index) << 4) + 8;
    void* found = reinterpret_cast<LookupFn>(&ext_00668D80)(map, key);
    if (found == nullptr) {
        return nullptr;
    }

    if (lift_field<uint32_t>(owner, 0x14) != 0) {
        return reinterpret_cast<LookupFn>(&ext_00667F10)(found, owner);
    }

    if (lift_field<uint32_t>(found, 0x0C) == 0) {
        return nullptr;
    }

    // Sentinel-headed list: first real node is the sentinel's next pointer.
    void* sentinel = lift_field<void*>(found, 0x08);
    void* first = lift_field<void*>(sentinel, 0x00);
    if (first == sentinel) {
        // Original calls the CRT invalid-parameter handler through the IAT slot here
        // (it terminates in practice); the returned address is the same either way.
        reinterpret_cast<void (*)()>(mem_00925134)();
    }
    return static_cast<uint8_t*>(first) + 0x28;
}
} // namespace lift_006678A0

// [0x00660710] sub_00660710 (95 bytes)
namespace lift_00660710 {
extern void ext_0065FF50(void* first, void* p, void* p2);
extern int mem_00924FE0;

// @name SortEntry::insertionSortTail
// @class SortEntry
// @summary Walks backward from last-1 over 32-byte entries, copying each into a temp and calling the helper while more than one entry remains before it.
// @field SortEntry +0x1c int32_t key
void fn_00660710(void* first, void* last) {
    const uintptr_t first_addr = reinterpret_cast<uintptr_t>(first);
    const int32_t count =
        static_cast<int32_t>(reinterpret_cast<uintptr_t>(last) - first_addr) >> 5;
    if (count <= 1) {
        return;
    }

    uint8_t* p = static_cast<uint8_t*>(last) - 0x20;
    do {
        // Temp entry: 0x1c-byte string header plus 0x1c key.
        // The original calls the copy constructor via mem_00924FE0; here the
        // header is copied bytewise (no deep copy of the string buffer).
        uint8_t tmp[0x20];
        std::memcpy(tmp, p, 0x1c);
        lift_field<int32_t>(tmp, 0x1c) = lift_field<int32_t>(p, 0x1c);
        (void)&mem_00924FE0;

        ext_0065FF50(first, p, p);

        p -= 0x20;
    } while (static_cast<int32_t>(reinterpret_cast<uintptr_t>(p) + 0x20 - first_addr) >> 5 > 1);
}
} // namespace lift_00660710

// [0x00660180] sub_00660180 (91 bytes)
namespace lift_00660180 {
// Known callee 0x0065FE50: sub_0065FE50 (252 bytes, cdecl: begin, index, count).
extern void ext_0065FE50(uint8_t* begin, int32_t index, int32_t count);

// Import slot 0x00924FE0 (MSVCP80): std::string copy constructor, thiscall(this, const string&).
// Called through the IAT pointer, so it is modelled as a function-pointer global.
extern void (__thiscall* mem_00924FE0)(void* self, const void* src);

// Heapify-style loop: for j = n/2-1 down to 0, copy element j (32-byte records)
// into a temporary and call sub_0065FE50(begin, j, n), where n = (end - begin) / 32.
// @name buildHeapHalf
// @summary Loops over the first half of a 32-byte-record array (n/2-1 down to 0), copying each record and calling sub_0065FE50(begin, j, n) for sift-down style reordering.
// @field Element +0x1C int32_t field_0x1c
void fn_00660180(uint8_t* begin, uint8_t* end) {
    const int32_t n = static_cast<int32_t>(end - begin) / 32;  // sar 5, signed
    const int32_t half = n / 2;                                   // sign-corrected sar 1

    for (int32_t j = half - 1; j >= 0; --j) {
        uint8_t* elem = begin + static_cast<ptrdiff_t>(j) * 32;

        // Temporary record: std::string copy (first 0x1C bytes) + int at +0x1C.
        alignas(8) uint8_t tmp[0x20];
        mem_00924FE0(tmp, elem);
        lift_field<int32_t>(tmp, 0x1C) = lift_field<int32_t>(elem, 0x1C);

        ext_0065FE50(begin, j, n);
    }
}
} // namespace lift_00660180

// [0x00662AB0]
namespace lift_00662AB0 {
extern uint32_t mem_0092424C;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924250;
extern uint32_t mem_00924FE4;
extern uint8_t mem_00B5925C[];

// @name getTempFileName
// @summary Generates a unique temporary file path in the system temp directory using a global prefix string.
void* __cdecl sub_00662AB0(void* out_str) {
    char temp_path[0x104];
    char temp_file[0x104];
    *reinterpret_cast<uint32_t*>(temp_path) = 0;

    using GetTempPathAFn = uint32_t(__stdcall*)(uint32_t, char*);
    reinterpret_cast<GetTempPathAFn>(mem_0092424C)(0x104, temp_path);

    using CStrFn = const char*(__thiscall*)(void*);
    const char* prefix = reinterpret_cast<CStrFn>(mem_00924FF0)(mem_00B5925C);

    using GetTempFileNameAFn = uint32_t(__stdcall*)(const char*, const char*, uint32_t, char*);
    reinterpret_cast<GetTempFileNameAFn>(mem_00924250)(temp_path, prefix, 0, temp_file);

    using StringCtorFn = void*(__thiscall*)(void*, const char*);
    reinterpret_cast<StringCtorFn>(mem_00924FE4)(out_str, temp_file);

    return out_str;
}
} // namespace lift_00662AB0

// [0x00668150] sub_00668150 (117 bytes)
namespace lift_00668150 {
// Known callee 0x00668D80: SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>::vfunc_0
// (Auto-lifted identical-shape clone of 0x0042E7B0.)
extern void* ext_00668D80(void* self, const void* key);
// Known callee 0x00667F80 (thiscall, no stack args): one-time initializer for the guarded global.
void ext_00667F80(void* self);
// Known callee 0x006A6C87 (cdecl, one stack arg): called after the initializer.
void ext_006A6C87(const void* arg);
extern int mem_00B594A4;
extern DWORD mem_00B594B4;

// @name lookupVector4MapOrFallback
// @summary Forwards (index, key) to the Vector4 SearchableMap lookup at base+index*16+8; if that yields null, runs a one-time guarded init of mem_00B594A4 and returns its address.
void* fn_00668150(void* self, int32_t index, const void* key) {
    // Original asm: SEH frame setup/teardown (fs:[0] push/pop and try-level writes)
    // is bookkeeping only and is elided; no observable effect on return value or globals.
    char* entry = static_cast<char*>(self) + (static_cast<uint32_t>(index) << 4) + 8;
    void* found = ext_00668D80(entry, key);
    if (found != nullptr) {
        return found;
    }

    // One-time guarded initialization (bit 0 of mem_00B594B4 is the "done" flag).
    if ((mem_00B594B4 & 1u) == 0) {
        mem_00B594B4 |= 1u;
        ext_00667F80(&mem_00B594A4);
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00921650)));
    }
    return &mem_00B594A4;
}
} // namespace lift_00668150

// [0x00665CA0]
namespace lift_00665CA0 {
// Differentially tested against endorphin.exe; 32-bit x86 layout assumed.
extern void __cdecl ext_006A5C5C(void* ptr);       // IAT thunk -> MFC80!ord_764
extern void __fastcall ext_00665B80(void* self);   // Unknown::ReleaseElements_00665B80
extern uint8_t mem_00925134[];                     // .rdata "P{b" / MSVCR80 IAT slot

// @name Unknown::DrainFront_00665CA0
// @class Unknown
// @summary While index at +0x8 is not -1 and count at +0x18 exceeds it, unlinks the front list node, frees it, releases its value via virtual slot 0, then tail-calls ReleaseElements_00665B80.
// @field Unknown +0x08 int32_t index
// @field Unknown +0x14 void* head
// @field Unknown +0x18 int32_t count
void __fastcall fn_00665CA0(void* self) {
    struct Node {
        Node* next;   // +0x0
        Node* prev;   // +0x4
        void* value;  // +0x8
    };

    (void)&mem_00925134;  // CRT invalid-parameter slot; reached only on corrupt list state

    auto* base = static_cast<uint8_t*>(self);
    auto& index = *reinterpret_cast<int32_t*>(base + 0x08);
    auto& count = *reinterpret_cast<int32_t*>(base + 0x18);

    while (index != -1) {
        if (count <= index) {
            break;
        }

        Node* head = *reinterpret_cast<Node**>(base + 0x14);
        Node* first = head->next;
        if (first == head) {
            std::abort();  // _invalid_parameter_noinfo
        }
        void* value = first->value;

        head = *reinterpret_cast<Node**>(base + 0x14);
        first = head->next;
        if (first == head) {
            std::abort();  // _invalid_parameter_noinfo
        }

        if (first != *reinterpret_cast<Node**>(base + 0x14)) {
            first->prev->next = first->next;
            first->next->prev = first->prev;
            ext_006A5C5C(first);
            count -= 1;
        }

        if (value != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(value);
            auto slot0 = reinterpret_cast<void (*)(void*, int)>(vtbl[0]);
            slot0(value, 1);
        }
    }

    ext_00665B80(self);
}
} // namespace lift_00665CA0

// [0x00665DC0] sub_00665DC0 (119 bytes)
namespace lift_00665DC0 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* ext_006657F0(void* self, uint32_t arg);
extern uint32_t ext_006658D0(void* self);
extern int mem_00924FE0;

// @name Unknown::Construct
// @class Unknown
// @summary Constructs the object: runs the base init (ext_006657F0), sets the vtable to 0x00987A1C, copy-constructs a string at +0x10 from arg1, initializes the sub-object at +0x2C, and zeroes +0x3C/+0x40/+0x44. Returns self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x2C uint8_t field_0x2C
// @field Unknown +0x30 void* field_0x30
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x3C uint32_t field_0x3C
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x44 uint32_t field_0x44
void* fn_00665DC0(void* self, const void* arg1, uint32_t arg2) {
    uint8_t* const base = static_cast<uint8_t*>(self);

    // Base init: vtable 0x00987A04, arg2 stored at +0x04.
    ext_006657F0(self, arg2);

    // Final vtable for this class.
    lift_field<void*>(self, 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x00987A1Cu));

    // Copy-construct the string member at +0x10 from arg1 (thiscall, function pointer read from mem_00924FE0).
    auto string_copy_ctor = reinterpret_cast<void (*)(void*, const void*)>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)));
    string_copy_ctor(base + 0x10, arg1);

    // Sub-object at +0x2C: initialized by ext_006658D0, its result stored at +0x30, +0x34 zeroed.
    uint32_t sub_result = ext_006658D0(base + 0x2C);
    lift_field<uint32_t>(self, 0x30) = sub_result;
    lift_field<uint32_t>(self, 0x34) = 0;

    lift_field<uint32_t>(self, 0x3C) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;
    lift_field<uint32_t>(self, 0x44) = 0;

    return self;
}
} // namespace lift_00665DC0

// [0x006668B0] sub_006668B0 (120 bytes)
namespace lift_006668B0 {
extern int mem_00924FF4;

// @name ReleaseFiveStringMembers_006668B0
// @summary Destroys five std::string members (at +0x74, +0x54, +0x38, +0x1C, +0x00) in reverse order via the MSVCP80 basic_string destructor import.
// @field ObjectWithStrings +0x00 std::string field_0x00
// @field ObjectWithStrings +0x1C std::string field_0x1C
// @field ObjectWithStrings +0x38 std::string field_0x38
// @field ObjectWithStrings +0x54 std::string field_0x54
// @field ObjectWithStrings +0x74 std::string field_0x74
void fn_006668B0(void* self) {
    using StringDtorFn = void (*)(void*);

    // Indirect call through the IAT slot mem_00924FF4 (MSVCP80 basic_string::~basic_string).
    const StringDtorFn string_dtor = *reinterpret_cast<StringDtorFn*>(&mem_00924FF4);
    uint8_t* const base = static_cast<uint8_t*>(self);

    string_dtor(base + 0x74);
    string_dtor(base + 0x54);
    string_dtor(base + 0x38);
    string_dtor(base + 0x1C);
    string_dtor(base + 0x00);
}
} // namespace lift_006668B0

// [0x00664ED0] sub_00664ED0 (120 bytes)
namespace lift_00664ED0 {
// Known callee 0x00664CD0: upperCopyRangeToPair (Builds a TextRange from (a3,a4) and the span length, stores it to out, then uppercase-copies [first,last) into dest; returns out.)
// The original call site pushes eight dwords (out + seven values); the argument list below mirrors those pushes.
extern void ext_00664CD0(void* out, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, void* p6, void* p7);
// MSVCP80 IAT slots for std::string::begin() / end(). Not invoked here: the iterator bounds are read directly
// from the MSVC std::string layout (see body).
extern int mem_009250D0;
extern int mem_0092511C;

// @name upperCopyStringRange
// @class <none>
// @summary Gathers the bounds of a std::string (MSVC layout) and forwards them to upperCopyRangeToPair; returns the string pointer.
// @field std::string +0x00 uint8_t buf_or_ptr
// @field std::string +0x10 uint32_t size
// @field std::string +0x14 uint32_t res
void* fn_00664ED0(void* self) {
    uint8_t* s = static_cast<uint8_t*>(self);

    const uint32_t size = lift_field<uint32_t>(s, 0x10);
    const uint32_t res = lift_field<uint32_t>(s, 0x14);
    // SSO: buffer lives inline while capacity < 16, otherwise the first dword is the heap pointer.
    uint8_t* first = res >= 16 ? lift_field<uint8_t*>(s, 0x00) : s;
    uint8_t* last = first + size;

    // Original begin/end IAT slots are superseded by the layout reads above.
    (void)&mem_009250D0;
    (void)&mem_0092511C;

    uint8_t flag = 0;
    uint32_t out[4] = {};
    ext_00664CD0(out,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last)),
                 0,
                 0,
                 static_cast<uint32_t>(flag),
                 self,
                 self);
    return self;
}
} // namespace lift_00664ED0

// [0x00665010] sub_00665010 (120 bytes)
namespace lift_00665010 {
// Known callee 0x00664D40: ComputeDeltaAndDispatch (8 stack args, cdecl; caller pops).
extern void* ext_00664D40(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, void* a7, void* a8);
// MSVCP80 std::string begin()/end() thunk pointers (IAT slots).
extern int mem_009250D0;
extern int mem_0092511C;

// @name StringBeginEndDispatch
// @summary Takes begin() and end() iterators of the std::string at self, packs them into a pair, calls 0x00664D40 with the string twice, and returns self.
void* fn_00665010(void* self) {
    using IterFn = void* (__thiscall*)(void* self, void* out_iter);
    // Load the MSVC std::string member functions through their IAT slots.
    IterFn begin_fn = *reinterpret_cast<IterFn*>(&mem_009250D0);
    IterFn end_fn   = *reinterpret_cast<IterFn*>(&mem_0092511C);

    uint32_t iter_a[2];
    uint32_t iter_b[2];
    uint32_t iter_c[2];
    uint32_t pair[2];
    // Stack flag byte initialised to 0 in the original; passed as the a6 dword.
    uint32_t flag = 0;

    void* ra = begin_fn(self, iter_a);
    uint32_t a_first  = lift_field<uint32_t>(ra, 0);
    uint32_t a_second = lift_field<uint32_t>(ra, 4);

    void* rb = end_fn(self, iter_b);
    uint32_t b_first  = lift_field<uint32_t>(rb, 0);
    uint32_t b_second = lift_field<uint32_t>(rb, 4);
    pair[1] = b_first;

    void* rc = begin_fn(self, iter_c);
    pair[0] = lift_field<uint32_t>(rc, 0);
    uint32_t c_second = lift_field<uint32_t>(rc, 4);

    ext_00664D40(pair, c_second, b_second, a_first, a_second, flag, self, self);
    return self;
}
} // namespace lift_00665010

// [0x00662120] ConfigureAndDispatchFromSource (32 bytes)
namespace lift_00662120 {
// Known callee 0x00466BA0: DispatchRangeWithDefault (Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.)
void ext_00466BA0(void* self, uint32_t arg1, uint32_t arg2);

// @name ConfigureAndDispatchFromSource
// @summary Caches source->+0x60 and *(source->+0x64) into self+0x8/+0xC, sets self+0x0 flag to 1, then calls DispatchRangeWithDefault on self+0x38 with self as arg1 and 0 as arg2.
// @field Unknown +0x00 uint8_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00662120(void* self) {
    uint32_t a = lift_field<uint32_t>(self, 0x04);
    void* a_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(a));
    uint32_t b = lift_field<uint32_t>(a_ptr, 0x64);
    uint32_t c = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(b));

    lift_field<uint32_t>(self, 0x08) = a + 0x60;
    lift_field<uint32_t>(self, 0x0C) = c;
    lift_field<uint8_t>(self, 0x00) = 1;

    ext_00466BA0(static_cast<uint8_t*>(self) + 0x38,
                static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                0u);
}
} // namespace lift_00662120

// [0x00661F10] sub_00661F10 (91 bytes)
namespace lift_00661F10 {
// Known callee 0x00466BA0: DispatchRangeWithDefault (Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.)
extern void ext_00466BA0(void* self, uint32_t arg1, uint32_t arg2);

// Import slot for MSVCR80!_invalid_parameter_noinfo
extern uint32_t mem_00925134;

// @name Unknown::AdvanceNodeAndDispatch
// @class Unknown
// @summary Validates the links at self+0x08 and self+0x0C, advances self+0x0C to its successor, sets self+0x00 to 1, dispatches via ext_00466BA0 on the subobject at self+0x38, and returns true; returns false when the current node's count is <= 1.
// @field Unknown +0x00 uint8_t flag
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
bool fn_00661F10(void* self) {
    auto invalid_parameter = [] {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };
    // 32-bit guest address -> host pointer
    auto at = [](uint32_t addr) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
    };

    if (lift_field<uint32_t>(self, 0x08) == 0) {
        invalid_parameter();
    }
    {
        uint32_t a = lift_field<uint32_t>(self, 0x08);
        uint32_t b = lift_field<uint32_t>(self, 0x0C);
        if (b == lift_field<uint32_t>(at(a), 0x04)) {
            invalid_parameter();
        }
    }

    if (lift_field<int32_t>(at(lift_field<uint32_t>(self, 0x0C)), 0x08) <= 1) {
        return false;
    }

    if (lift_field<uint32_t>(self, 0x08) == 0) {
        invalid_parameter();
    }

    uint32_t next = lift_field<uint32_t>(at(lift_field<uint32_t>(self, 0x0C)), 0x04);
    lift_field<uint32_t>(self, 0x0C) = next;

    {
        uint32_t a = lift_field<uint32_t>(self, 0x08);
        if (next == lift_field<uint32_t>(at(a), 0x04)) {
            invalid_parameter();
        }
    }

    lift_field<uint8_t>(self, 0x00) = 1;
    ext_00466BA0(static_cast<uint8_t*>(self) + 0x38,
                static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                0);
    return true;
}
} // namespace lift_00661F10

// [0x00666A60] (121 bytes)
namespace lift_00666A60 {
// Known callee 0x006408C0: initRecord_ptrDefaultsWord0C (Initializes a 18-byte record at self: stores arg2 at +0x00, arg1 at +0x04 (defaulting to &mem_0092F67C when zero), arg0 at +0x08, zeroes +0x0C and the two flag bytes at +0x10/+0x11.)
extern void ext_006408C0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);
// Import slot holding the MSVCP80 std::basic_string<char> default-ctor thunk 0x006290D8 (thiscall, this in ecx).
extern uint32_t mem_00924FE8;
// Default record pointer target used by initRecord_ptrDefaultsWord0C.
extern int mem_0092F67C;

// @name Unknown::initStringRecordAndDispatchVfunc5
// @class Unknown
// @summary Default-constructs the std::string at out_string, builds an 18-byte record referencing it via initRecord_ptrDefaultsWord0C, passes the record to vtable slot 5 of self, and returns out_string.
// @field Unknown +0x00 uint32_t vtable
void* fn_00666A60(void* self, void* out_string) {
    // Default-construct the std::string at out_string (thiscall through the import slot).
    reinterpret_cast<void (__thiscall*)(void*)>(static_cast<uintptr_t>(mem_00924FE8))(out_string);

    // Build the 18-byte record: arg2 = 2, arg1 = 0 (defaults to &mem_0092F67C), arg0 = out_string.
    alignas(4) uint8_t record[18] = {};
    ext_006408C0(record,
                static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out_string)),
                0,
                2);

    // Indirect call: vtable slot at +0x14 (index 5) of self, this = self, one stack arg = &record.
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    const uint32_t slot = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable) + 0x14);
    reinterpret_cast<void (__thiscall*)(void*, void*)>(static_cast<uintptr_t>(slot))(self, record);

    return out_string;
}
} // namespace lift_00666A60

// [0x00665EE0] sub_00665EE0 (124 bytes)
namespace lift_00665EE0 {
extern uint32_t __thiscall ext_006658D0(void* self);
extern void* mem_00B59420;

// @name GlobalInstanceInit
// @class GlobalInstanceInit
// @summary Zeroes this object's header, initializes two embedded sub-objects at +0x10 and +0x1c via ext_006658D0, clears trailing fields, publishes this to mem_00B59420, and returns this.
// @field GlobalInstanceInit +0x00 uint32_t field_0x00
// @field GlobalInstanceInit +0x04 uint32_t field_0x04
// @field GlobalInstanceInit +0x08 uint32_t field_0x08
// @field GlobalInstanceInit +0x0c uint32_t field_0x0c
// @field GlobalInstanceInit +0x14 uint32_t field_0x14
// @field GlobalInstanceInit +0x18 uint32_t field_0x18
// @field GlobalInstanceInit +0x20 uint32_t field_0x20
// @field GlobalInstanceInit +0x24 uint32_t field_0x24
// @field GlobalInstanceInit +0x2c uint32_t field_0x2c
// @field GlobalInstanceInit +0x30 uint32_t field_0x30
// @field GlobalInstanceInit +0x34 uint32_t field_0x34
void* fn_00665EE0(void* self) {
    // Header fields.
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 1000;
    lift_field<uint32_t>(self, 0x0c) = 0;

    // First embedded sub-object at +0x10: ext call on it, result at +0x14, then +0x18 = 0.
    void* subA = static_cast<uint8_t*>(self) + 0x10;
    lift_field<uint32_t>(self, 0x14) = ext_006658D0(subA);
    lift_field<uint32_t>(self, 0x18) = 0;

    // Second embedded sub-object at +0x1c: same pattern, result at +0x20, then +0x24 = 0.
    void* subB = static_cast<uint8_t*>(self) + 0x1c;
    lift_field<uint32_t>(self, 0x20) = ext_006658D0(subB);
    lift_field<uint32_t>(self, 0x24) = 0;

    // Trailing fields.
    lift_field<uint32_t>(self, 0x2c) = 0;
    lift_field<uint32_t>(self, 0x30) = 0;
    lift_field<uint32_t>(self, 0x34) = 0;

    // Publish this object as the global instance.
    mem_00B59420 = self;
    return self;
}
} // namespace lift_00665EE0

// [0x00662B70] sub_00662B70 (125 bytes)
namespace lift_00662B70 {
extern int mem_00924FE0;
extern int mem_00924EAC;
extern int mem_0092500C;
extern int mem_00924EC0;

// @name AppendBackslashIfMissing
// @summary Copy-constructs the MSVC std::string at out from src, then appends '\' to out unless its last character already is '\'; returns out.
void* fn_00662B70(void* out, const void* src) {
    // MSVCP80 member functions, reached through the IAT slots the original code calls indirectly.
    using CopyCtorFn   = void(__thiscall*)(void* self, const void* other);   // basic_string(const basic_string&)
    using SizeFn       = uint32_t(__thiscall*)(const void* self);            // size()
    using IndexFn      = char*(__thiscall*)(void* self, uint32_t index);     // operator[](size_t)
    using AppendCharFn = void*(__thiscall*)(void* self, char ch);            // operator+=(char)

    auto copyCtor   = *reinterpret_cast<CopyCtorFn*>(&mem_00924FE0);
    auto sizeFn     = *reinterpret_cast<SizeFn*>(&mem_00924EAC);
    auto indexFn    = *reinterpret_cast<IndexFn*>(&mem_0092500C);
    auto appendChar = *reinterpret_cast<AppendCharFn*>(&mem_00924EC0);

    // out = src (copy-construct into the caller-provided string storage)
    copyCtor(out, src);

    // if (out[out.size() - 1] != '\\') out += '\\';
    uint32_t last = sizeFn(out) - 1u;
    const char* lastChar = indexFn(out, last);
    if (*lastChar != '\\') {
        appendChar(out, '\\');
    }

    return out;
}
} // namespace lift_00662B70

// [0x00664840] sub_00664840 (125 bytes)
namespace lift_00664840 {
extern const char mem_0097CD20[];
extern int mem_009251E0;  // IAT slot: MSVCR80!_snprintf (replaced by std::snprintf)
extern int mem_009252DC;  // IAT slot: MSVCR80!strchr (replaced by std::strchr)
extern int mem_00924FE4;  // IAT slot: MSVCP80 basic_string(const char*) ctor (replaced by placement new)

// @name formatFloatTrimmedString
// @summary Formats a float with the format at mem_0097CD20 into a 50-byte buffer, strips trailing '0' chars after the decimal point (keeping at least one digit), and placement-constructs a std::string at the caller's sret slot, returning it.
std::string* fn_00664840(std::string* out, float value) {
    (void)&mem_009251E0;
    (void)&mem_009252DC;
    (void)&mem_00924FE4;

    char buf[0x32];
    std::snprintf(buf, sizeof(buf), mem_0097CD20, static_cast<double>(value));

    const uintptr_t bufAddr = reinterpret_cast<uintptr_t>(buf);
    const uintptr_t dotAddr = reinterpret_cast<uintptr_t>(std::strchr(buf, '.'));
    const uintptr_t limit = dotAddr + 1;
    const size_t len = std::strlen(buf);
    uintptr_t p = bufAddr + len - 1;

    if (p > limit) {
        do {
            char* c = reinterpret_cast<char*>(p);
            if (*c != '0') {
                break;
            }
            *c = '\0';
            --p;
        } while (p > limit);
    }

    new (out) std::string(buf);
    return out;
}
} // namespace lift_00664840

// [0x00660C10]
namespace lift_00660C10 {
// @name Unknown::destroyMembers_00660C10
// @class Unknown
// @summary Releases the two sub-objects at +0x40/+0x48 via virtual slot 0x78, destroys the string at +0x1c, then runs its destructor.
// @field Unknown +0x1c std::string_vector field_0x1c
// @field Unknown +0x40 void* field_0x40
// @field Unknown +0x44 int32_t field_0x44
// @field Unknown +0x48 void* field_0x48
// @field Unknown +0x4c int32_t field_0x4c

extern void ext_004026E0(void* this_ptr);
extern uint32_t mem_00924FF4;

void fn_00660C10(void* this_ptr) {
    char* self = static_cast<char*>(this_ptr);

    // Sub-object at +0x48: if flag at +0x4c is set, invoke virtual slot 0x78 on its inner object.
    if (*reinterpret_cast<int32_t*>(self + 0x4c) != 0) {
        void* sub = self + 0x48;
        void* inner = *reinterpret_cast<void**>(static_cast<char*>(sub) + 0x4);
        void** vtbl = *reinterpret_cast<void***>(inner);
        using VFn = void (*)(void*, void*);
        reinterpret_cast<VFn>(vtbl[0x78 / 4])(inner, sub);
    }

    // Sub-object at +0x40: if flag at +0x44 is set, invoke virtual slot 0x78 on its inner object.
    if (*reinterpret_cast<int32_t*>(self + 0x44) != 0) {
        void* sub = self + 0x40;
        void* inner = *reinterpret_cast<void**>(static_cast<char*>(sub) + 0x4);
        void** vtbl = *reinterpret_cast<void***>(inner);
        using VFn = void (*)(void*, void*);
        reinterpret_cast<VFn>(vtbl[0x78 / 4])(inner, sub);
    }

    ext_004026E0(self + 0x1c);

    // Destructor of the object at this (dispatched through the import slot).
    using DtorFn = void (*)(void*);
    DtorFn dtor = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_00660C10

// [0x0066A220] sub_0066A220 (127 bytes)
namespace lift_0066A220 {
// @name ClampFourFloatsToUnitRange
// @summary Clamps the four consecutive float32 values at self+0x00..+0x0C to [0.0, 1.0] in place; values above 1.0 become 1.0, values below 0.0 become 0.0, NaN and in-range values are left unchanged
// @field  +0x00 float field_0x00
// @field  +0x04 float field_0x04
// @field  +0x08 float field_0x08
// @field  +0x0C float field_0x0C
void fn_0066A220(void* self) {
    float* v = static_cast<float*>(self);
    for (int i = 0; i < 4; ++i) {
        // Ordered comparisons are false for NaN, so NaN is preserved as the
        // original fcom/jp/jne sequence does.
        if (v[i] > 1.0f) {
            v[i] = 1.0f;
        } else if (v[i] < 0.0f) {
            v[i] = 0.0f;
        }
    }
}
} // namespace lift_0066A220

// [0x0066A4E0]
namespace lift_0066A4E0 {
// @name Unknown::ClampThenInvertFirstThreeFloats_0066A4E0
// @class Unknown
// @summary Clamps four float32 values at self to [0,1], then replaces the first three with 1.0f - value.
// @field Unknown +0x00 float f0
// @field Unknown +0x04 float f1
// @field Unknown +0x08 float f2

extern void ext_0066A220(void* self);

void fn_0066A4E0(void* self) {
    ext_0066A220(self);

    float* f = reinterpret_cast<float*>(self);
    f[0] = 1.0f - f[0];
    f[1] = 1.0f - f[1];
    f[2] = 1.0f - f[2];
}
} // namespace lift_0066A4E0

// [0x0066A2E0] sub_0066A2E0 (47 bytes)
namespace lift_0066A2E0 {
// Known callee 0x0066A220: ClampFourFloatsToUnitRange (Clamps the four consecutive float32 values at self+0x00..+0x0C to [0.0, 1.0] in place; values above 1.0 become 1.0, values below 0.0 become 0.0, NaN and in-range values are left unchanged)
extern void ext_0066A220(void* self);

// @name Unknown::AddFourFloatsAndClamp_0066A2E0
// @class Unknown
// @summary Adds the four float32 values at rhs+0x00..+0x0C into self+0x00..+0x0C, clamps the result to [0,1] via ext_0066A220, and returns self
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void* fn_0066A2E0(void* self, const void* rhs) {
    lift_field<float>(self, 0x00) = lift_field<float>(rhs, 0x00) + lift_field<float>(self, 0x00);
    lift_field<float>(self, 0x04) = lift_field<float>(rhs, 0x04) + lift_field<float>(self, 0x04);
    lift_field<float>(self, 0x08) = lift_field<float>(rhs, 0x08) + lift_field<float>(self, 0x08);
    lift_field<float>(self, 0x0C) = lift_field<float>(rhs, 0x0C) + lift_field<float>(self, 0x0C);
    ext_0066A220(self);
    return self;
}
} // namespace lift_0066A2E0

// [0x0066A2A0] sub_0066A2A0 (60 bytes)
namespace lift_0066A2A0 {
// Callee 0x0053B470 (sub_0053B470): thiscall-style helper. Takes a scratch
// pointer and a float, returns a pointer to four float32 values.
extern float* ext_0053B470(void* self, float* scratch, float value);
// Known callee 0x0066A220: ClampFourFloatsToUnitRange (Clamps the four consecutive float32 values at self+0x00..+0x0C to [0.0, 1.0] in place; values above 1.0 become 1.0, values below 0.0 become 0.0, NaN and in-range values are left unchanged)
extern void ext_0066A220(void* self);

// @name Unknown::SetVec4FromScalarAndClamp_0066A2A0
// @class Unknown
// @summary Resolves a float-driven 4-float vector via ext_0053B470, copies it into self+0x00..+0x0C, then clamps it to [0,1].
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void fn_0066A2A0(void* self, float x) {
    float scratch[4];
    float* src = ext_0053B470(self, scratch, x);
    lift_field<float>(self, 0x00) = src[0];
    lift_field<float>(self, 0x04) = src[1];
    lift_field<float>(self, 0x08) = src[2];
    lift_field<float>(self, 0x0C) = src[3];
    ext_0066A220(self);
}
} // namespace lift_0066A2A0

// [0x0066A500] sub_0066A500 (79 bytes)
namespace lift_0066A500 {
// Known callee 0x0066A2E0: Unknown::AddFourFloatsAndClamp_0066A2E0 (Adds the four float32 values at rhs+0x00..+0x0C into self+0x00..+0x0C, clamps the result to [0,1] via ext_0066A220, and returns self)
extern void* ext_0066A2E0(void* self, const void* rhs);

// @name Unknown::AddFourFloatsAndClampOut_0066A500
// @class Unknown
// @summary Copies the four float32 values at self+0x00..+0x0C into a local temp, adds rhs into it via ext_0066A2E0 (which clamps to [0,1]), stores the result into out+0x00..+0x0C, and returns out.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void* fn_0066A500(void* self, void* out, const void* rhs) {
    float tmp[4];
    tmp[0] = lift_field<float>(self, 0x00);
    tmp[1] = lift_field<float>(self, 0x04);
    tmp[2] = lift_field<float>(self, 0x08);
    tmp[3] = lift_field<float>(self, 0x0C);

    ext_0066A2E0(tmp, rhs);

    lift_field<float>(out, 0x00) = tmp[0];
    lift_field<float>(out, 0x04) = tmp[1];
    lift_field<float>(out, 0x08) = tmp[2];
    lift_field<float>(out, 0x0C) = tmp[3];
    return out;
}
} // namespace lift_0066A500

// [0x00666170] sub_00666170 (129 bytes)
namespace lift_00666170 {
// Known callee 0x00665DC0: Unknown::Construct (Constructs the object: runs the base init (ext_006657F0), sets the vtable to 0x00987A1C, copy-constructs a string at +0x10 from arg1, initializes the sub-object at +0x2C, and zeroes +0x3C/+0x40/+0x44. Returns self.)
extern void* ext_00665DC0(void* self, const void* arg1, uint32_t arg2);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 = operator new.)
extern void* ext_006A5C62(size_t size);

// Scalar deleting destructor slot (vtable + 0) invoked on the previously owned object.
typedef void(__thiscall* ObjectDeleteFn)(void* self, uint32_t flags);

// @name Unknown::AcquireConstructedObject
// @class Unknown
// @summary On first use (refCount at +0x04 is zero) allocates 0x48 bytes, constructs the object from arg1, replaces and deletes any previous object at +0x00, then increments the reference count at +0x04.
// @field Unknown +0x00 void* object
// @field Unknown +0x04 uint32_t refCount
void __thiscall fn_00666170(void* self, const void* arg1) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t* refCount = reinterpret_cast<uint32_t*>(base + 0x04);

    if (*refCount == 0) {
        void* allocated = ext_006A5C62(0x48);
        void* newObject = nullptr;
        if (allocated != nullptr) {
            newObject = ext_00665DC0(allocated, arg1, 0);
        }

        void** objectSlot = reinterpret_cast<void**>(base + 0x00);
        void* oldObject = *objectSlot;
        if (oldObject != newObject && oldObject != nullptr) {
            void** vtable = *reinterpret_cast<void***>(oldObject);
            reinterpret_cast<ObjectDeleteFn>(vtable[0])(oldObject, 1);
        }
        *objectSlot = newObject;
    }

    ++*refCount;
}
} // namespace lift_00666170

// [0x00666320]
namespace lift_00666320 {
// @name Unknown::InitWithAcquiredObject
// @class Unknown
// @summary Stores arg1 at +0x00, calls AcquireConstructedObject on arg1 with arg2, and returns self.
// @field Unknown +0x00 void* field_0x00


extern void __thiscall ext_00666170(void* self, const void* arg1);

void* __thiscall fn_00666320(void* self, void* arg1, const void* arg2) {
    lift_field<void*>(self, 0x00) = arg1;
    ext_00666170(arg1, arg2);
    return self;
}
} // namespace lift_00666320

// [0x00666360]
namespace lift_00666360 {
// @name sub_00666360_dtor
// @summary Destructor/cleanup for object at this, clearing mem_00B59420, freeing field_0x2c, destroying subobjects at +0x1c and +0x10, and deleting *this if non-null.
// @field +0x00 void* field_0x00
// @field +0x10 uint8_t field_0x10
// @field +0x1c uint8_t field_0x1c
// @field +0x2c void* field_0x2c
// @field +0x30 uint32_t field_0x30
// @field +0x34 uint32_t field_0x34


extern uint32_t mem_00B59420;

extern void __thiscall ext_00666120(void* self);
extern void __thiscall ext_004369D0(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void __thiscall fn_00666360(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    ext_00666120(self);

    mem_00B59420 = 0;

    void* ptr = lift_field<void*>(base, 0x2c);
    if (ptr != nullptr) {
        ext_006A5C5C(ptr);
    }

    lift_field<uint32_t>(base, 0x2c) = 0;
    lift_field<uint32_t>(base, 0x30) = 0;
    lift_field<uint32_t>(base, 0x34) = 0;

    ext_004369D0(base + 0x1c);
    ext_004369D0(base + 0x10);

    void* inner = lift_field<void*>(base, 0x00);
    if (inner != nullptr) {
        using deleting_dtor_fn = void(__thiscall*)(void*, int);
        auto** vtable = *static_cast<deleting_dtor_fn**>(inner);
        vtable[0](inner, 1);
    }
}
} // namespace lift_00666360

// [0x00664E40]
namespace lift_00664E40 {
// @name copyCharsSkippingDelimiter
// @class StdString
// @summary Copies bytes from [begin,end) into dest, skipping bytes equal to ch; each store is validated against the std::string container (esi) like MSVC debug iterator checks; returns {container, dest_end} through the out pointer.
// @field StdString +0x14 uint32_t field_0x14

extern uint32_t mem_00925134; // IAT slot: MSVCR80!_invalid_parameter_noinfo
extern uint32_t mem_00924E44; // IAT slot: MSVCP80 std::string::_Myptr

struct CopyResult {
    uint32_t container;
    uint32_t dest;
};

static void invalid_parameter_noinfo() {
    using Fn = void(__cdecl*)(void);
    reinterpret_cast<Fn>(mem_00925134)();
}

static uintptr_t string_myptr(uint32_t container) {
    using Fn = char*(__thiscall*)(void*);
    char* p = reinterpret_cast<Fn>(mem_00924E44)(reinterpret_cast<void*>(static_cast<uintptr_t>(container)));
    return reinterpret_cast<uintptr_t>(p);
}

// Iterator validity check: container == -2 means unchecked; otherwise
// it must point below (data + field_0x14) of the container.
static void validate_iter(uint32_t container, uintptr_t it) {
    if (container == 0xFFFFFFFEu) {
        return;
    }
    if (container == 0) {
        invalid_parameter_noinfo();
    }
    uintptr_t base = string_myptr(container) +
                     lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(container)), 0x14);
    if (!(it < base)) {
        invalid_parameter_noinfo();
    }
}

extern void __cdecl fn_00664E40(CopyResult* out, const char* begin, const char* end,
                                uint32_t container, char* dest, int ch) {
    const char target = static_cast<char>(ch);
    const char* src = begin;
    uintptr_t edi = reinterpret_cast<uintptr_t>(dest);

    if (src != end) {
        do {
            if (*src != target) {
                uintptr_t store_at = edi;
                validate_iter(container, edi);
                edi += 1;
                validate_iter(container, store_at);
                *reinterpret_cast<char*>(store_at) = *src;
            }
            ++src;
        } while (src != end);
    }

    out->dest = static_cast<uint32_t>(edi);
    out->container = container;
}
} // namespace lift_00664E40

// [0x00666C00]
namespace lift_00666C00 {
// @name TreeIterator::operator--
// @class TreeIterator
// @summary Decrements a red-black tree iterator to the previous node, validating against nil/end.
// @field TreeIterator +0x00 uint32_t container
// @field TreeIterator +0x04 uintptr_t ptr
// @field TreeNode +0x00 uintptr_t left
// @field TreeNode +0x04 uintptr_t parent
// @field TreeNode +0x08 uintptr_t right
// @field TreeNode +0x39 uint8_t isnil


extern uintptr_t mem_00925134; // MSVCR80!_invalid_parameter_noinfo

void __thiscall sub_00666C00(void* self) {
    using InvalidParamFn = void(__cdecl*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(mem_00925134);

    if (lift_field<uint32_t>(self, 0x0) == 0) {
        invalid_param();
    }

    uintptr_t ptr = lift_field<uintptr_t>(self, 0x4);
    if (lift_field<uint8_t>(reinterpret_cast<void*>(ptr), 0x39) != 0) {
        ptr = lift_field<uintptr_t>(reinterpret_cast<void*>(ptr), 0x8);
        lift_field<uintptr_t>(self, 0x4) = ptr;
        if (lift_field<uint8_t>(reinterpret_cast<void*>(ptr), 0x39) != 0) {
            invalid_param();
        }
        return;
    }

    uintptr_t left = lift_field<uintptr_t>(reinterpret_cast<void*>(ptr), 0x0);
    if (lift_field<uint8_t>(reinterpret_cast<void*>(left), 0x39) == 0) {
        uintptr_t right = lift_field<uintptr_t>(reinterpret_cast<void*>(left), 0x8);
        while (lift_field<uint8_t>(reinterpret_cast<void*>(right), 0x39) == 0) {
            left = right;
            right = lift_field<uintptr_t>(reinterpret_cast<void*>(left), 0x8);
        }
        lift_field<uintptr_t>(self, 0x4) = left;
        return;
    }

    uintptr_t parent = lift_field<uintptr_t>(reinterpret_cast<void*>(ptr), 0x4);
    while (lift_field<uint8_t>(reinterpret_cast<void*>(parent), 0x39) == 0) {
        uintptr_t cur = lift_field<uintptr_t>(self, 0x4);
        if (cur != lift_field<uintptr_t>(reinterpret_cast<void*>(parent), 0x0)) {
            break;
        }
        lift_field<uintptr_t>(self, 0x4) = parent;
        parent = lift_field<uintptr_t>(reinterpret_cast<void*>(parent), 0x4);
    }

    uintptr_t cur = lift_field<uintptr_t>(self, 0x4);
    if (lift_field<uint8_t>(reinterpret_cast<void*>(cur), 0x39) != 0) {
        invalid_param();
        return;
    }
    lift_field<uintptr_t>(self, 0x4) = parent;
}
} // namespace lift_00666C00

// [0x00661E80] sub_00661E80 (138 bytes)
namespace lift_00661E80 {
// Known callee 0x00466BA0: DispatchRangeWithDefault (Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.)
void ext_00466BA0(void* self, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00925134;

// @name Unknown::advanceCursorAndDispatch
// @class Unknown
// @summary Validates the cursor/header pair, advances the cursor one node, marks the object active, and dispatches the range via fn_00466BA0; returns false when the cursor range is exhausted.
// @field Unknown +0x00 uint8_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x64 uint32_t field_0x64
bool fn_00661E80(void* self) {
    auto invalid_parameter = [] {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };
    auto ptr = [](uint32_t v) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
    };

    // Header (self->+0x8) must be non-null and its +0x4 must differ from cursor (self->+0xC).
    if (lift_field<uint32_t>(self, 0x8) == 0) {
        invalid_parameter();
    }
    void* hdr = ptr(lift_field<uint32_t>(self, 0x8));
    if (lift_field<uint32_t>(self, 0xC) == lift_field<uint32_t>(hdr, 0x4)) {
        invalid_parameter();
    }

    // obj = self->+0x4; ref = obj->+0x64; compare ref->+0x4 against ref.
    void* obj = ptr(lift_field<uint32_t>(self, 0x4));
    uint32_t ref_val = lift_field<uint32_t>(obj, 0x64);
    void* ref = ptr(ref_val);
    if (lift_field<uint32_t>(ref, 0x4) == ref_val) {
        invalid_parameter();
    }

    // Range exhaustion: cursor+8 equal to ref->+4 + 8 means nothing left.
    uint32_t cursor_end = lift_field<uint32_t>(self, 0xC) + 8;
    uint32_t ref_end = lift_field<uint32_t>(ref, 0x4) + 8;
    if (cursor_end == ref_end) {
        return false;
    }

    // Remaining header/cursor checks were already established above and self is
    // unchanged since, so they are not repeated here.
    uint32_t cursor = lift_field<uint32_t>(self, 0xC);
    uint32_t next = lift_field<uint32_t>(ptr(cursor), 0);
    lift_field<uint32_t>(self, 0xC) = next;

    lift_field<uint8_t>(self, 0x0) = 1;
    ext_00466BA0(static_cast<uint8_t*>(self) + 0x38,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), 0);
    return true;
}
} // namespace lift_00661E80

// [0x00667810] sub_00667810 (141 bytes)
namespace lift_00667810 {
// Known callee 0x006668B0: ReleaseFiveStringMembers_006668B0 (Destroys five std::string members (at +0x74, +0x54, +0x38, +0x1C, +0x00) in reverse order via the MSVCP80 basic_string destructor import.)
extern void ext_006668B0(void* self);
extern void ext_00667810(void* self, void* node);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called cdecl with one pointer argument.)
extern void ext_006A5C5C(void* arg);
extern int mem_00924FF4;

// @name Unknown::destroyNodeList
// @class Unknown
// @summary Recursively walks a singly linked node list starting at node; for each node it recurses on the child at +0x08, destroys the ObjectWithStrings at +0x28 and the std::string at +0x0C, then frees the node via MFC80!ord_764, until a node with the flag at +0xC1 set is reached.
// @field Unknown +0x00 Unknown* field_0x00
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C std::string field_0x0C
// @field Unknown +0x28 ObjectWithStrings field_0x28
// @field Unknown +0xC1 BYTE field_0xC1
void fn_00667810(void* self, void* node) {
    // MSVCP80 std::basic_string<char>::~basic_string, called thiscall on the string object.
    using StringDtorFn = void (*)(void*);
    const StringDtorFn string_dtor = *reinterpret_cast<StringDtorFn*>(&mem_00924FF4);

    uint8_t* edi = static_cast<uint8_t*>(node);
    uint8_t* esi = edi;

    // Nothing to do when the starting node is already flagged.
    if (lift_field<uint8_t>(edi, 0xC1) != 0) {
        return;
    }

    do {
        ext_00667810(self, lift_field<void*>(esi, 0x08));
        esi = lift_field<uint8_t*>(esi, 0x00);

        uint8_t* const str_obj = edi + 0x0C;
        ext_006668B0(edi + 0x28);
        string_dtor(str_obj);
        ext_006A5C5C(edi);

        edi = esi;
    } while (lift_field<uint8_t>(esi, 0xC1) == 0);
}
} // namespace lift_00667810

// [0x00664DB0]
namespace lift_00664DB0 {
extern uintptr_t mem_00925134;
extern uintptr_t mem_00924E44;

struct StringIter {
    void* container;
    char* ptr;
};

// @name std::remove_copy_if_char_iter
// @summary Copies characters from [first, last) to a checked string iterator, skipping those where pred(ch) is non-zero
StringIter* __cdecl sub_00664DB0(
    StringIter* out_iter,
    const char* first,
    const char* last,
    void* dst_container,
    char* dst_ptr,
    uint8_t (__cdecl* pred)(uint32_t))
{
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto myptr = reinterpret_cast<char*(__thiscall*)(void*)>(mem_00924E44);

    if (first != last) {
        do {
            uint8_t ch = static_cast<uint8_t>(*first);
            if (pred(static_cast<uint32_t>(ch)) == 0) {
                char* cur = dst_ptr;
                if (reinterpret_cast<uintptr_t>(dst_container) != static_cast<uintptr_t>(-2)) {
                    if (dst_container == nullptr) {
                        invalid_param();
                    }
                    char* end_ptr = myptr(dst_container) + *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(dst_container) + 0x14);
                    if (dst_ptr >= end_ptr) {
                        invalid_param();
                    }
                }
                dst_ptr = dst_ptr + 1;
                if (reinterpret_cast<uintptr_t>(dst_container) != static_cast<uintptr_t>(-2)) {
                    if (dst_container == nullptr) {
                        invalid_param();
                    }
                    char* end_ptr = myptr(dst_container) + *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(dst_container) + 0x14);
                    if (cur >= end_ptr) {
                        invalid_param();
                    }
                }
                *cur = *first;
            }
            first = first + 1;
        } while (first != last);
    }

    out_iter->container = dst_container;
    out_iter->ptr = dst_ptr;
    return out_iter;
}
} // namespace lift_00664DB0

// [0x00666BA0] sub_00666BA0 (82 bytes)
namespace lift_00666BA0 {
// @name sub_00666BA0
// @summary Auto-lifted identical-shape clone of 0x0052A140 (Unknown::ctor_CopyPairAt1C).
namespace lift_0052A140 {
// Known callee 0x00532900: Copy-initialize from source (ctor-style copy of vec4 + string + flag) (Sets the vtable, enable flag, copies 4 floats (+0x08..+0x14), a std::string (+0x18), and a byte flag (+0x34) from the source object.)
extern void ext_006669B0(void* self, const void* src);
extern int mem_00924FE0;

// @name Unknown::ctor_CopyPairAt1C
// @class Unknown
// @summary Copy-constructs a std::string at +0x00 from src, then copy-initializes the sub-object at +0x1C from src+0x1C.
// @field Unknown +0x00 std::string copy (MSVCP80 basic_string copy ctor, via mem_00924FE0 IAT slot)
// @field Unknown +0x1C <unknown> field_0x1C (copy-initialized by ext_00532900)
void* fn_00666BA0(void* self, const void* src) {
    // MSVCP80 std::string copy ctor, called indirectly through the IAT slot.
    using StringCopyCtor = void (*)(void* self, const void* src);
    auto copy_string = *reinterpret_cast<StringCopyCtor*>(&mem_00924FE0);
    copy_string(self, src);

    auto* dst_sub = static_cast<unsigned char*>(self) + 0x1C;
    auto* src_sub = static_cast<const unsigned char*>(src) + 0x1C;
    ext_006669B0(dst_sub, src_sub);

    return self;
}
} // namespace lift_0052A140
} // namespace lift_00666BA0

// [0x00664910]
namespace lift_00664910 {
// @name formatHex8
// @summary Formats a 32-bit integer as an 8-character zero-padded hex string into a std::string

extern uint32_t mem_00925230; // MSVCR80!_itoa
extern uint32_t mem_0092506C; // MSVCP80!std::string::basic_string(size_t, char)
extern uint32_t mem_00924ED0; // MSVCP80!std::string::operator+=(const char*)

using itoa_fn_t = char* (__cdecl*)(int val, char* buf, int radix);
using str_ctor_fill_fn_t = void (__thiscall*)(void* self, uint32_t count, char ch);
using str_append_cstr_fn_t = void* (__thiscall*)(void* self, const char* s);

void* __cdecl sub_00664910(void* out_str, int value) {
    char buf[32];
    reinterpret_cast<itoa_fn_t>(mem_00925230)(value, buf, 16);

    uint32_t len = 0;
    while (buf[len] != '\0') {
        ++len;
    }

    uint32_t pad = 8 - len;
    reinterpret_cast<str_ctor_fill_fn_t>(mem_0092506C)(out_str, pad, '0');
    reinterpret_cast<str_append_cstr_fn_t>(mem_00924ED0)(out_str, buf);
    return out_str;
}
} // namespace lift_00664910

// [0x00665090]
namespace lift_00665090 {
// @name std::remove_copy_if_char_iter_checked
// @summary Scans for first matching byte, validates destination string iterator, and copies remaining bytes skipping matches
// @field std::string +0x14 uint32_t size


struct StringIter {
    void* container;
    char* ptr;
};

using ByteTestFn = uint8_t (__cdecl*)(uint32_t);
using InvalidParamFn = void (__cdecl*)();
using MyptrFn = char* (__thiscall*)(void*);

extern const uint8_t* __cdecl ext_00664BF0(const uint8_t* begin, const uint8_t* end, ByteTestFn pred);
extern StringIter* __cdecl ext_00664DB0(
    StringIter* out_iter,
    const char* first,
    const char* last,
    void* dst_container,
    char* dst_ptr,
    ByteTestFn pred,
    uint32_t extra);

extern InvalidParamFn mem_00925134;
extern MyptrFn mem_00924E44;

StringIter* __cdecl sub_00665090(
    StringIter* out_iter,
    void* dst_container,
    const char* first,
    void* dst_container_check,
    const char* last,
    ByteTestFn pred)
{
    const uint8_t* pos = ext_00664BF0(
        reinterpret_cast<const uint8_t*>(first),
        reinterpret_cast<const uint8_t*>(last),
        pred);

    if (dst_container != reinterpret_cast<void*>(-2)) {
        if (dst_container == nullptr || dst_container != dst_container_check) {
            mem_00925134();
        }
    }

    char* pos_char = reinterpret_cast<char*>(const_cast<uint8_t*>(pos));
    if (pos_char == last) {
        out_iter->container = dst_container;
        out_iter->ptr = pos_char;
        return out_iter;
    }

    if (dst_container != reinterpret_cast<void*>(-2)) {
        if (dst_container == nullptr) {
            mem_00925134();
        }
        char* base = mem_00924E44(dst_container);
        uint32_t len = lift_field<uint32_t>(dst_container, 0x14);
        if (pos_char >= base + len) {
            mem_00925134();
        }
    }

    ext_00664DB0(out_iter, pos_char + 1, last, dst_container, pos_char, pred, 0);
    return out_iter;
}
} // namespace lift_00665090

// [0x006651D0] sub_006651D0 (119 bytes)
namespace lift_006651D0 {
// 8-byte std iterator as laid out by MSVC's _String_iterator: owner proxy + character pointer.
struct StringIter {
    uint32_t owner; // +0x00
    uint32_t pos;   // +0x04
};

// Known callee 0x00665090: std::remove_copy_if_char_iter_checked (Scans for first matching byte, validates destination string iterator, and copies remaining bytes skipping matches)
extern StringIter* ext_00665090(StringIter* out_iter, uint32_t dst_container, uint32_t first, uint32_t dst_container_check, uint32_t last, uintptr_t pred);
extern int mem_0092511C;
extern int mem_009250D0;
extern int mem_009250A4;

// MSVC member call returning an iterator through a hidden result pointer (this in ECX).
using IterMethodFn = StringIter* (*)(void* self, StringIter* sret);
// basic_string::erase(first, last): returns iterator via hidden pointer, this in ECX.
using EraseMethodFn = StringIter* (*)(void* self, StringIter* sret, StringIter first, StringIter last);

// @name std::string::erase_remove_char
// @class std::string (optional)
// @summary Erases every byte matching the fixed predicate 0x006649B0 from the string (erase-remove idiom).
// @field StringIter +0x00 uint32_t owner
// @field StringIter +0x04 uint32_t pos
void fn_006651D0(void* self) {
    // Indirect calls through the MSVCP80 import slots.
    auto end_fn   = *reinterpret_cast<IterMethodFn*>(&mem_0092511C);
    auto begin_fn = *reinterpret_cast<IterMethodFn*>(&mem_009250D0);
    auto erase_fn = *reinterpret_cast<EraseMethodFn*>(&mem_009250A4);

    StringIter end_for_erase{};
    StringIter end_for_remove{};
    StringIter begin_it{};
    StringIter tmp_end{};
    StringIter erase_result{};

    end_fn(self, &end_for_erase);
    end_fn(self, &end_for_remove);
    begin_fn(self, &begin_it);

    const uintptr_t pred = static_cast<uintptr_t>(0x006649B0u);
    StringIter* new_end = ext_00665090(&tmp_end,
                                       begin_it.owner, begin_it.pos,
                                       end_for_remove.owner, end_for_remove.pos,
                                       pred);

    erase_fn(self, &erase_result, *new_end, end_for_erase);
}
} // namespace lift_006651D0

// [0x00661B50]
namespace lift_00661B50 {
extern uint32_t mem_00925134;

// @name sub_00661B50
// @summary Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index
// @field Obj +0x04 uint32_t field_0x04
// @field Obj +0x08 uint32_t field_0x08
// @field Obj +0x0c uint32_t field_0x0c
uint32_t __thiscall sub_00661B50(void* this_ptr, uint32_t index) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    uint8_t* self = reinterpret_cast<uint8_t*>(this_ptr);

    uint32_t obj = lift_field<uint32_t>(self, 0x04);
    uint32_t end_ptr = lift_field<uint32_t>(reinterpret_cast<uint8_t*>(obj), 0x64);
    uint32_t vec_ptr = obj + 0x60;
    uint32_t sentinel = lift_field<uint32_t>(reinterpret_cast<uint8_t*>(end_ptr), 0x00);

    uint32_t iter_owner = lift_field<uint32_t>(self, 0x08);
    if (iter_owner == 0 || iter_owner != vec_ptr) {
        invalid_param();
    }

    if (lift_field<uint32_t>(self, 0x0C) == sentinel) {
        uint8_t* target = reinterpret_cast<uint8_t*>(lift_field<uint32_t>(self, 0x04));
        uint32_t begin = lift_field<uint32_t>(target, 0x04);
        if (begin == 0) {
            invalid_param();
        } else {
            uint32_t end = lift_field<uint32_t>(target, 0x08);
            uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
            if (index >= count) {
                invalid_param();
            }
        }
        uint32_t arr = lift_field<uint32_t>(target, 0x04);
        uint32_t elem = lift_field<uint32_t>(reinterpret_cast<uint8_t*>(arr + index * 4), 0x00);
        uint32_t vtable = lift_field<uint32_t>(reinterpret_cast<uint8_t*>(elem), 0x00);
        auto fn = reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(
            lift_field<uint32_t>(reinterpret_cast<uint8_t*>(vtable), 0x08));
        return fn(elem);
    }

    if (lift_field<uint32_t>(self, 0x08) == 0) {
        invalid_param();
    }
    uint32_t owner = lift_field<uint32_t>(self, 0x08);
    uint32_t node = lift_field<uint32_t>(self, 0x0C);
    if (node == lift_field<uint32_t>(reinterpret_cast<uint8_t*>(owner), 0x04)) {
        invalid_param();
    }

    uint8_t* inner = reinterpret_cast<uint8_t*>(lift_field<uint32_t>(self, 0x0C));
    uint32_t begin = lift_field<uint32_t>(inner, 0x10);
    uint8_t* vec = inner + 0x0C;
    if (begin == 0) {
        invalid_param();
    } else {
        uint32_t end = lift_field<uint32_t>(vec, 0x08);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 6);
        if (index >= count) {
            invalid_param();
        }
    }

    return lift_field<uint32_t>(vec, 0x04) + (index << 6);
}
} // namespace lift_00661B50

// [0x00661C90]
namespace lift_00661C90 {
// @name sub_00661C90
// @summary Look up element by index from either a fallback vector or the current list node's vector
// @field Self +0x04 uintptr_t field_0x04
// @field Self +0x08 uintptr_t field_0x08
// @field Self +0x0C uintptr_t field_0x0C


extern uintptr_t mem_00925134;

static inline void call_invalid_param() {
    reinterpret_cast<void (*)()>(mem_00925134)();
}

uint32_t __thiscall sub_00661C90(void* self, uint32_t index) {
    uintptr_t obj = lift_field<uintptr_t>(self, 0x04);
    uintptr_t list_ptr = obj + 0x60;
    uintptr_t head_ptr = lift_field<uintptr_t>(reinterpret_cast<void*>(obj), 0x64);
    uintptr_t end_node = *reinterpret_cast<uintptr_t*>(head_ptr);

    uintptr_t iter_container = lift_field<uintptr_t>(self, 0x08);
    if (iter_container == 0 || iter_container != list_ptr) {
        call_invalid_param();
    }

    uintptr_t iter_node = lift_field<uintptr_t>(self, 0x0C);
    if (iter_node == end_node) {
        uintptr_t vec_base = obj + 0x30;
        uintptr_t first = lift_field<uintptr_t>(reinterpret_cast<void*>(obj), 0x34);
        if (first == 0) {
            call_invalid_param();
        } else {
            uintptr_t last = lift_field<uintptr_t>(reinterpret_cast<void*>(vec_base), 0x08);
            uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(last - first) >> 2);
            if (index >= count) {
                call_invalid_param();
            }
        }
        uintptr_t data = lift_field<uintptr_t>(reinterpret_cast<void*>(vec_base), 0x04);
        uintptr_t elem = *reinterpret_cast<uintptr_t*>(data + static_cast<uintptr_t>(index) * 4);
        uintptr_t vtable = *reinterpret_cast<uintptr_t*>(elem);
        using fn_t = uint32_t(__thiscall*)(void*);
        return reinterpret_cast<fn_t>(*reinterpret_cast<uintptr_t*>(vtable))(reinterpret_cast<void*>(elem));
    } else {
        uintptr_t container = lift_field<uintptr_t>(self, 0x08);
        if (container == 0) {
            call_invalid_param();
        }
        container = lift_field<uintptr_t>(self, 0x08);
        uintptr_t node = lift_field<uintptr_t>(self, 0x0C);
        if (node == lift_field<uintptr_t>(reinterpret_cast<void*>(container), 0x04)) {
            call_invalid_param();
        }
        uintptr_t cur_node = lift_field<uintptr_t>(self, 0x0C);
        uintptr_t vec_base = cur_node + 0x4C;
        uintptr_t first = lift_field<uintptr_t>(reinterpret_cast<void*>(cur_node), 0x50);
        if (first == 0) {
            call_invalid_param();
        } else {
            uintptr_t last = lift_field<uintptr_t>(reinterpret_cast<void*>(vec_base), 0x08);
            uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(last - first) >> 2);
            if (index >= count) {
                call_invalid_param();
            }
        }
        uintptr_t data = lift_field<uintptr_t>(reinterpret_cast<void*>(vec_base), 0x04);
        return *reinterpret_cast<uint32_t*>(data + static_cast<uintptr_t>(index) * 4);
    }
}
} // namespace lift_00661C90

// [0x00661DE0]
namespace lift_00661DE0 {
extern void (*mem_00925134)();

// @name sub_00661DE0
// @class UnknownClass
// @summary Returns element at index from owner's vector if iterator is at begin, else from current list node's 8-byte element vector
// @field UnknownClass +0x04 uint32_t field_0x04
// @field UnknownClass +0x08 uint32_t field_0x08
// @field UnknownClass +0x0c uint32_t field_0x0c
uint32_t __thiscall sub_00661DE0(void* this_ptr, uint32_t index) {
    auto invalid_param = mem_00925134;
    uint8_t* self = reinterpret_cast<uint8_t*>(this_ptr);

    uint8_t* owner = lift_field<uint8_t*>(self, 0x04);
    uint8_t* list_ptr = owner + 0x60;
    uint32_t* head = lift_field<uint32_t*>(owner, 0x64);
    uint32_t begin_node = *head;

    uint8_t* cont = lift_field<uint8_t*>(self, 0x08);
    if (cont == nullptr || cont != list_ptr) {
        invalid_param();
    }

    if (lift_field<uint32_t>(self, 0x0c) == begin_node) {
        uint8_t* vec_owner = lift_field<uint8_t*>(self, 0x04);
        int32_t first = lift_field<int32_t>(vec_owner, 0x54);
        uint8_t* vec = vec_owner + 0x50;
        if (first == 0 || index >= static_cast<uint32_t>((lift_field<int32_t>(vec, 0x08) - first) >> 2)) {
            invalid_param();
        }
        uint32_t* data = lift_field<uint32_t*>(vec, 0x04);
        void* obj = reinterpret_cast<void*>(data[index]);
        using vfn_t = uint32_t(__thiscall*)(void*);
        vfn_t* vtable = *reinterpret_cast<vfn_t**>(obj);
        return vtable[0](obj);
    } else {
        if (lift_field<uint32_t>(self, 0x08) == 0) {
            invalid_param();
        }
        uint8_t* cont2 = lift_field<uint8_t*>(self, 0x08);
        uint32_t node_val = lift_field<uint32_t>(self, 0x0c);
        if (node_val == lift_field<uint32_t>(cont2, 0x04)) {
            invalid_param();
        }
        uint8_t* node = lift_field<uint8_t*>(self, 0x0c);
        int32_t first = lift_field<int32_t>(node, 0x60);
        uint8_t* vec = node + 0x5c;
        if (first == 0 || index >= static_cast<uint32_t>((lift_field<int32_t>(vec, 0x08) - first) >> 3)) {
            invalid_param();
        }
        uint32_t data = lift_field<uint32_t>(vec, 0x04);
        return data + 8 * index;
    }
}
} // namespace lift_00661DE0

// [0x00664A80]
namespace lift_00664A80 {
extern uint32_t mem_00925014;
extern uint32_t mem_00924EC4;
extern uint32_t mem_00925028;

// @name replaceString
// @summary Replaces occurrences of a substring in a std::string and returns the replacement count.
int __cdecl sub_00664A80(void* str, const char* find_str, const char* replace_str, bool only_first) {
    using find_fn = uint32_t (__thiscall*)(void* self, const char* s, uint32_t pos);
    using replace_fn = void* (__thiscall*)(void* self, uint32_t pos, uint32_t len, const char* s);

    uint32_t find_len = static_cast<uint32_t>(std::strlen(find_str));
    uint32_t replace_len = static_cast<uint32_t>(std::strlen(replace_str));

    auto fn_find = reinterpret_cast<find_fn>(mem_00925014);
    auto fn_replace = reinterpret_cast<replace_fn>(mem_00925028);
    uint32_t npos = *reinterpret_cast<const uint32_t*>(mem_00924EC4);

    int count = 0;
    uint32_t pos = fn_find(str, find_str, 0);
    while (pos != npos) {
        fn_replace(str, pos, find_len, replace_str);
        count++;
        if (only_first) {
            break;
        }
        pos = fn_find(str, find_str, pos + replace_len);
        npos = *reinterpret_cast<const uint32_t*>(mem_00924EC4);
    }

    return count;
}
} // namespace lift_00664A80

// [0x006658F0] sub_006658F0 (154 bytes)
namespace lift_006658F0 {
// @name sub_006658F0
// @summary Auto-lifted identical-shape clone of 0x0049D050 (BoundedAddToField08).
namespace lift_0049D050 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_00924FE0;
extern int mem_00924FE4;
extern int mem_009251C4;

// @name BoundedAddToField08
// @class Unknown
// @summary Adds n to the uint32 at +0x08 if the result stays within 0x1414141 (the remaining headroom check); otherwise builds an std::exception-style object and throws via CxxThrowException.
// @field Unknown +0x08 uint32_t field_0x08
extern void __thiscall fn_006658F0(void* self, uint32_t n) {
    const uint32_t limit = 0x3FFFFFFFu;
    uint32_t current = lift_field<uint32_t>(self, 0x08);
    uint32_t headroom = limit - current;
    if (headroom < n) {
        // Throw path: original constructs std::string / std::exception temporaries
        // from the IAT slots below and calls _CxxThrowException.
        (void)&mem_00924FE0;
        (void)&mem_00924FE4;
        (void)&mem_009251C4;
        ext_006A6DD2();
        return;
    }
    lift_field<uint32_t>(self, 0x08) = current + n;
}
} // namespace lift_0049D050
} // namespace lift_006658F0

// [0x00666CE0] sub_00666CE0 (154 bytes)
namespace lift_00666CE0 {
// @name sub_00666CE0
// @summary Auto-lifted identical-shape clone of 0x004A5D20 (NodeCursor::advanceToUnflaggedNode).
namespace lift_004A5D20 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern void ext_00594000();
extern void ext_00593F20();
extern int mem_00925134;
extern int mem_00B58DFC;

static inline void invalid_parameter_noinfo() {
    // mem_00925134 holds the address of _invalid_parameter_noinfo (IAT slot).
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name NodeCursor::advanceToUnflaggedNode
// @class NodeCursor
// @summary Advances the cursor at +0x04 along the link graph of LinkNodes to the next node whose +0xAD flag is clear; calls invalid-parameter handler on bad state.
// @field NodeCursor +0x00 int32_t field_0x00
// @field NodeCursor +0x04 void* current
// @field LinkNode +0x00 void* link0
// @field LinkNode +0x04 void* link4
// @field LinkNode +0x08 void* link8
// @field LinkNode +0xAD uint8_t flag
void fn_00666CE0(void* self) {
    // Metadata lists these as references, but the original bytes never call or read them.
    // Address-only references (no runtime effect) keep the check consistent; no real call added.
    (void)&ext_00594000;
    (void)&ext_00593F20;
    (void)&mem_00B58DFC;

    if (lift_field<int32_t>(self, 0x00) == 0) {
        invalid_parameter_noinfo();
    }

    void* cur = lift_field<void*>(self, 0x04);

    if (lift_field<uint8_t>(cur, 0xC1) != 0) {
        cur = lift_field<void*>(cur, 0x08);
        lift_field<void*>(self, 0x04) = cur;
        if (lift_field<uint8_t>(cur, 0xC1) == 0) {
            return;
        }
        invalid_parameter_noinfo();
        return;
    }

    void* c = lift_field<void*>(cur, 0x00);
    if (lift_field<uint8_t>(c, 0xC1) == 0) {
        void* a = lift_field<void*>(c, 0x08);
        if (lift_field<uint8_t>(a, 0xC1) == 0) {
            do {
                c = a;
                a = lift_field<void*>(c, 0x08);
            } while (lift_field<uint8_t>(a, 0xC1) == 0);
        }
        lift_field<void*>(self, 0x04) = c;
        return;
    }

    void* d = lift_field<void*>(cur, 0x04);
    while (lift_field<uint8_t>(d, 0xC1) == 0 &&
           lift_field<void*>(self, 0x04) == lift_field<void*>(d, 0x00)) {
        lift_field<void*>(self, 0x04) = d;
        d = lift_field<void*>(d, 0x04);
    }

    if (lift_field<uint8_t>(lift_field<void*>(self, 0x04), 0xC1) != 0) {
        invalid_parameter_noinfo();
        return;
    }
    lift_field<void*>(self, 0x04) = d;
}
} // namespace lift_004A5D20
} // namespace lift_00666CE0

// [0x00665BD0] sub_00665BD0 (50 bytes)
namespace lift_00665BD0 {
// Known callee 0x00435CC0: AllocTriple (Allocates a 12-byte block and fills it with two dwords and the dword that a3 points to; returns the block or null.)
extern void* ext_00435CC0(DWORD a1, DWORD a2, const DWORD* a3);
// Known callee 0x006658F0: sub_006658F0 (Auto-lifted identical-shape clone of 0x0049D050 (BoundedAddToField08).)
extern void ext_006658F0(void* self, uint32_t n);

// @name sub_00665BD0
// @summary Allocates a triple via AllocTriple, links it into self's chain at +0x04, then calls sub_006658F0(self, 1); stdcall-style stack arg, ret 4.
// @field Unknown +0x04 DWORD field_04
void fn_00665BD0(void* self, DWORD arg) {
    // mov edi, [esi+4]
    DWORD edi_v = lift_field<DWORD>(self, 0x04);
    void* edi = reinterpret_cast<void*>(static_cast<uintptr_t>(edi_v));

    // mov ecx, [edi+4]
    DWORD ecx_v = lift_field<DWORD>(edi, 0x04);

    // push arg; push ecx; push edi; call AllocTriple  -> ebx = result
    void* ebx = ext_00435CC0(edi_v, ecx_v,
                             reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(arg)));
    DWORD ebx_v = static_cast<DWORD>(reinterpret_cast<uintptr_t>(ebx));

    // push 1; mov ecx, esi; call sub_006658F0(self, 1)
    ext_006658F0(self, 1);

    // mov [edi+4], ebx
    lift_field<DWORD>(edi, 0x04) = ebx_v;

    // mov edx, [ebx+4]; mov [edx], ebx
    DWORD edx_v = lift_field<DWORD>(ebx, 0x04);
    void* edx = reinterpret_cast<void*>(static_cast<uintptr_t>(edx_v));
    lift_field<DWORD>(edx, 0) = ebx_v;
}
} // namespace lift_00665BD0

// [0x00665E40] sub_00665E40 (154 bytes)
namespace lift_00665E40 {
// Known callee 0x00665D70: NodeList::clearNodes (Destroys all element nodes of a circular list (between sentinel head and first node), resets the head to self-loop, and zeroes the size.)
extern void __fastcall ext_00665D70(void* self);
// Callee 0x004369D0: sub_004369D0 (72 bytes, thiscall on the NodeList at self+0x2C)
extern void __fastcall ext_004369D0(void* self);
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void __fastcall ext_00665810(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void __cdecl ext_006A5C5C(void* ptr);
// Known callee 0x006659F0: destroyListElements (Iterates a checked std::list<T*> range [first, last) and invokes the deleting destructor on each non-null element.)
extern void __stdcall ext_006659F0(void* first_cont, void* first_node, void* last_cont, void* last_node);
// MSVCP80 std::string dtor reached through IAT slot 0x00924FF4 (value 0x00628FF0)
extern int mem_00924FF4;

// @name NodeListOwner::releaseContents
// @class NodeListOwner
// @summary Resets the vtable, clears the NodeList at +0x2C (destroying its elements), frees the pointer at +0x3C if set, destroys the string at +0x10 and re-runs the init helper.
// @field NodeListOwner +0x00 void* vtable
// @field NodeListOwner +0x10 std::string field_0x10
// @field NodeListOwner +0x2C NodeList field_0x2C
// @field NodeListOwner +0x3C void* field_0x3C
// @field NodeListOwner +0x40 uint32_t field_0x40
// @field NodeListOwner +0x44 uint32_t field_0x44
void fn_00665E40(void* self) {
    // Vtable pointer set to 0x00987A1C before any member work.
    lift_field<uint32_t>(self, 0x00) = 0x00987A1C;

    // Embedded list object at self+0x2C (passed as `this` to the list helpers).
    void* list = static_cast<uint8_t*>(self) + 0x2C;
    ext_00665D70(list);

    // Free the pointer stored at +0x3C if it is non-null, then zero the three dwords at +0x3C..+0x44.
    void* ptr3c = lift_field<void*>(self, 0x3C);
    if (ptr3c != nullptr) {
        ext_006A5C5C(ptr3c);
    }
    lift_field<uint32_t>(self, 0x3C) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;
    lift_field<uint32_t>(self, 0x44) = 0;

    // Range over the list's sentinel: last = sentinel.next, first = last->next.
    // Reads list+0x04 (sentinel next) and the node's first dword, matching the asm's push order.
    void* last_node = lift_field<void*>(list, 0x04);
    void* first_node = lift_field<void*>(last_node, 0x00);
    ext_006659F0(list, first_node, list, last_node);

    ext_004369D0(list);

    // std::string at self+0x10 is destroyed through the MSVCP80 IAT slot (mem_00924FF4).
    // Not a real call here: the target lives in the MSVC runtime, so only the slot is referenced.
    (void)&mem_00924FF4;

    ext_00665810(self);
}
} // namespace lift_00665E40

// [0x00665130] sub_00665130 (154 bytes)
namespace lift_00665130 {
// Known callee 0x00664E40: copyCharsSkippingDelimiter (Copies bytes from [begin,end) into dest, skipping bytes equal to ch; each store is validated against the std::string container (esi) like MSVC debug iterator checks; returns {container, dest_end} through the out pointer.)
// Stack args (cdecl, 7): out, dest_begin, end, container, found, ch, container_tag.
extern void ext_00664E40(void* out, char* dest, char* end, void* container, char* found, uint32_t ch, uint32_t tag);
// IAT slots: MSVCR80!_invalid_parameter_noinfo and MSVCP80 std::string::_Myptr (thiscall).
extern int mem_00925134;
extern int mem_00924E44;

// @name copyAfterFirstDelimiter
// @summary Scans the checked string range [begin,end) for the first delimiter ch; if none is found returns {container,end} through out, otherwise copies the tail after the delimiter via copyCharsSkippingDelimiter.
// @field std::string +0x14 uint32_t field_0x14

using MyptrFn = char* (*)(void* self);

static inline uint32_t addr32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

static inline void invalid_parameter_noinfo_call() {
    (*reinterpret_cast<void (* const*)()>(&mem_00925134))();
}

void* fn_00665130(void* out, void* container, char* begin, void* expected, char* end, int ch_arg) {
    const uint32_t edi = addr32(container);
    const char ch = static_cast<char>(ch_arg);
    char* esi = begin;

    // Find first occurrence of ch in [begin,end); esi ends at match or end.
    for (; esi != end; ++esi) {
        if (*esi == ch) break;
    }

    // Container validation (skipped when container == -2).
    if (edi != 0xFFFFFFFEu) {
        if (edi == 0 || edi != addr32(expected)) {
            invalid_parameter_noinfo_call();
        }
    }

    if (esi == end) {
        // Not found: return {container, end}.
        lift_field<uint32_t>(out, 0) = edi;
        lift_field<uint32_t>(out, 4) = addr32(esi);
        return out;
    }

    // Range check of found position against string data end.
    if (edi != 0xFFFFFFFEu) {
        if (edi == 0) {
            invalid_parameter_noinfo_call();
        }
        MyptrFn myptr = *reinterpret_cast<MyptrFn const*>(&mem_00924E44);
        char* limit = myptr(container) + lift_field<uint32_t>(container, 0x14);
        if (!(addr32(esi) < addr32(limit))) {
            invalid_parameter_noinfo_call();
        }
    }

    // Copy tail after delimiter, skipping ch.
    const uint32_t tag = edi & 0xFFFFFF00u;
    ext_00664E40(out, esi + 1, end, container, esi, static_cast<uint32_t>(ch_arg), tag);
    return out;
}
} // namespace lift_00665130

// [0x00665250] sub_00665250 (119 bytes)
namespace lift_00665250 {
// Known callee 0x00665130: copyAfterFirstDelimiter (Scans the checked string range [begin,end) for the first delimiter ch; if none is found returns {container,end} through out, otherwise copies the tail after the delimiter via copyCharsSkippingDelimiter.)
extern void ext_00665130();
// The metadata also lists 0x00435CC0 and 0x006658F0, but the disassembly never calls them
// (only 0x665130 is called). Take their addresses only, so nothing executes at runtime.
extern void ext_00435CC0();
extern void ext_006658F0();

// MSVCP80 std::basic_string<char> import slots used by this function.
extern int mem_0092511C; // basic_string::end()
extern int mem_009250D0; // basic_string::begin()
extern int mem_009250A4; // basic_string::erase(first, last)

// 8-byte _String_iterator layout: {_Ptr, _Mycont}.
struct StrIter {
    uint32_t ptr;
    uint32_t cont;
};

// MSVC thiscall members returning _String_iterator by hidden pointer.
// On non-MSVC toolchains __thiscall expands to nothing (syntax check only).
using IterGetFn = StrIter* (__thiscall*)(void* self, StrIter* ret);
using EraseFn   = StrIter* (__thiscall*)(void* self, StrIter* ret, StrIter first, StrIter last);
// cdecl helper: (out, begin, end, delimiter) -> out
using CopyFn    = StrIter* (__cdecl*)(StrIter* out, StrIter begin, StrIter end, uint32_t ch);

// @name StrutilCutAtDelimiter
// @summary Finds the first delimiter ch in the string at str, then erases from that point to the end of the string (copying the tail via the 0x00665130 helper).
void fn_00665250(void* str, uint32_t ch) {
    auto end_m   = *reinterpret_cast<IterGetFn*>(&mem_0092511C);
    auto begin_m = *reinterpret_cast<IterGetFn*>(&mem_009250D0);
    auto erase_m = *reinterpret_cast<EraseFn*>(&mem_009250A4);
    auto copy_fn = reinterpret_cast<CopyFn>(ext_00665130);
    (void)&ext_00435CC0; // metadata-only callee, not called by the bytes
    (void)&ext_006658F0; // metadata-only callee, not called by the bytes

    StrIter end_full{};
    end_m(str, &end_full);

    StrIter end_scan{};
    end_m(str, &end_scan);

    StrIter begin_it{};
    begin_m(str, &begin_it);

    StrIter found{};
    StrIter* r = copy_fn(&found, begin_it, end_scan, ch);

    StrIter from = *r;
    erase_m(str, &found, from, end_full);
}
} // namespace lift_00665250
