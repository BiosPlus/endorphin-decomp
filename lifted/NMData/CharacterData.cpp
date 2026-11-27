// Lifted C++ translation unit: lifted/NMData/CharacterData.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

#include <string>
namespace lift_005A98B0 {
// @name NMData::CharacterData::vfunc_11
// @class NMData::CharacterData
// @summary Returns true if vfunc_10() or ext_00410390(this) returns non-zero.


extern uint8_t __thiscall ext_00410390(void* self);

uint8_t __thiscall fn_005A98B0(void* self) {
    using Vfunc10Fn = uint8_t(__thiscall*)(void*);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(self);
    auto vfunc_10 = reinterpret_cast<Vfunc10Fn>(vtable[0x28 / sizeof(uintptr_t)]);
    if (vfunc_10(self) != 0) {
        return 1;
    }
    return ext_00410390(self) != 0 ? 1 : 0;
}
} // namespace lift_005A98B0

// [0x0059F370]
namespace lift_0059F370 {
// @name NMData::CharacterData::vfunc_34_off_4
// @class NMData::CharacterData
// @summary Looks up a handle via the object at this+0x04, stores this+0x4F4 into the result's +0x20, links the result back to this+0x0C, and returns the result.
// @field NMData::CharacterData +0x04 void* field_0x04
// @field NMData::CharacterData +0x0C void* field_0x0c
// @field NMData::CharacterData +0x4F4 void* field_0x4f4

extern uint32_t mem_00B40640;

uintptr_t ext_00493E40(void* self, uintptr_t extra);
void ext_00528B90(void* self, void* peer);

using LookupFn = uintptr_t (*)(void* self, uint32_t global, void* adjusted, uintptr_t zero);

uintptr_t NMData_CharacterData_vfunc_34_off_4(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uintptr_t base_val = reinterpret_cast<uintptr_t>(base);

    // eax = (self - 4) != 0 ? self + 0x0C : nullptr
    void* adjusted = (base_val - 4) != 0 ? static_cast<void*>(base + 0x0C) : nullptr;

    // edx = *(*(self + 0x04) + 0x0C)
    auto* p = *reinterpret_cast<uint8_t**>(base + 0x04);
    auto fn = reinterpret_cast<LookupFn>(*reinterpret_cast<uintptr_t*>(p + 0x0C));

    // thiscall(self + 0x04, global, adjusted, 0)
    uintptr_t tmp = fn(base + 0x04, mem_00B40640, adjusted, 0);

    // ebx = self + 0x4F4
    auto* ebx = base + 0x4F4;

    uintptr_t esi = ext_00493E40(ebx, tmp);

    if (esi != 0) {
        auto* peer = reinterpret_cast<uint8_t*>(esi);
        *reinterpret_cast<void**>(peer + 0x20) = ebx;
        ext_00528B90(base + 0x0C, reinterpret_cast<void*>(esi));
    }

    return esi;
}
} // namespace lift_0059F370

// [0x0059DFB0] NMData::CharacterData::vfunc_24_off_4 (164 bytes)
namespace lift_0059DFB0 {
extern void __thiscall ext_0059D930(void* self, void* out, const void* key);
// Known callee 0x00594600: descriptiveName: forwardToChildSlot1Zero (Forwards a call with argument 0 to the child object at +0x2DC via its vtable slot 1; returns immediately if no child.)
extern void ext_00594600(void* self);
extern int mem_00924FC8;
extern int mem_00924FB0;
extern int mem_00924FDC;
extern int mem_00924FF4;
// Rodata string literal compared against the key argument (VA 0x00928B5D).
extern const char lit_00928B5D[];

// @name NMData::CharacterData::vfunc_24_off_4
// @class NMData::CharacterData
// @summary If key equals a fixed literal, computes a string via sub_0059D930 and, when it equals this+0x30, assigns it to this+0x30 and forwards to child slot via ext_00594600 if this+0x5F4 is non-null.
// @field NMData::CharacterData +0x14 void* field_0x14
// @field NMData::CharacterData +0x30 std::string field_0x30
// @field NMData::CharacterData +0x5F4 void* field_0x5f4

namespace {
// MSVC 2005 std::string layout (28 bytes); only treated as opaque storage here.
struct MsvcString {
    alignas(4) uint8_t raw[0x1C];
};

using StrEqFn     = int (*)(const void* a, const void* b);      // cdecl operator==
using StrAssignFn = void (__thiscall*)(void* self, const void* rhs);
using StrDtorFn   = void (__thiscall*)(void* self);

inline uintptr_t importAddr(int slot) {
    return static_cast<uintptr_t>(static_cast<uint32_t>(slot));
}
} // namespace

void __thiscall fn_0059DFB0(void* self, const void* key) {
    auto* base = static_cast<uint8_t*>(self);

    auto strEqLit = reinterpret_cast<StrEqFn>(importAddr(mem_00924FC8));
    auto strEq    = reinterpret_cast<StrEqFn>(importAddr(mem_00924FB0));
    auto strAssign = reinterpret_cast<StrAssignFn>(importAddr(mem_00924FDC));
    auto strDtor   = reinterpret_cast<StrDtorFn>(importAddr(mem_00924FF4));

    if (strEqLit(key, lit_00928B5D) == 0) {
        return;
    }

    MsvcString tmp{};
    // thiscall(this - 4, &tmp, key)
    ext_0059D930(base - 4, &tmp, key);

    uint8_t* name = base + 0x30;
    if (strEq(&tmp, name) != 0) {
        strAssign(name, &tmp);
        void* child = *reinterpret_cast<void**>(base + 0x5F4);
        if (child != nullptr) {
            ext_00594600(base + 0x14);
        }
    }

    strDtor(&tmp);
}
} // namespace lift_0059DFB0

// [0x005A4D60] NMData::CharacterData::vfunc_20 (327 bytes)
namespace lift_005A4D60 {
// Known callee 0x00427A60: advanceIteratorUntilMatch (Advances a checked vector iterator until end or an element's vfunc(+0xC)(1) returns true)
extern void ext_00427A60(void* iter);
// Known callee 0x005A3540: sub_005A3540 (50B), thiscall(self, obj)
extern void ext_005A3540(void* self, void* obj);
// Known callee 0x005C0E70: sub_005C0E70 (480B), thiscall constructor on a new block; returns the constructed object
extern void* ext_005C0E70(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762, forwards to MFC80!ord_762 (operator new)
extern void* ext_006A5C62(std::size_t size);
// Comparison literal pointer (.data u32 0x00986A00)
extern int mem_00A9F0C4;
// IAT slots replaced by portable code below (not real accesses)
extern int mem_00925134; // MSVCR80!_invalid_parameter_noinfo
extern int mem_00924FC0; // MSVCP80 std::operator==(const string&, const char*)

// Guest (32-bit) address helpers.
static inline uint32_t guest_addr(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

static inline void* host_ptr(uint32_t a) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(a));
}

// MSVC 2005 std::string layout: 16-byte _Bx union {char* ptr; char buf[16]}, +0x10 size, +0x14 capacity.
// Implements operator==(const std::string&, const char*).
static bool msvc_string_equals_cstr(const void* s, const char* rhs) {
    const uint32_t size = lift_field<uint32_t>(s, 0x10);
    const uint32_t capacity = lift_field<uint32_t>(s, 0x14);
    const char* data = capacity >= 16
        ? static_cast<const char*>(host_ptr(lift_field<uint32_t>(s, 0)))
        : static_cast<const char*>(s);
    const std::size_t n = std::strlen(rhs);
    return n == size && std::memcmp(data, rhs, size) == 0;
}

// MSVC _invalid_parameter_noinfo: the CRT handler terminates the process by default.
[[noreturn]] static void msvc_invalid_parameter() {
    std::abort();
}

// @name NMData::CharacterData::vfunc_20
// @class NMData::CharacterData
// @summary Walks the 4-byte-element vector at arg+0x24 with checked iterators; for each element whose std::string (at +4) equals the literal, allocates a 0x220-byte object, copies self+0x4E0 into its +0x210 byte, calls its vfunc_21 with the element, then calls sub_005A3540(self, obj).
// @field NMData::CharacterData +0x4E0 uint8_t field_0x4e0
void fn_005A4D60(void* self, void* arg) {
    (void)&mem_00925134;
    (void)&mem_00924FC0;

    uint8_t* const vec = static_cast<uint8_t*>(arg) + 0x24;
    const uint32_t vec_addr = guest_addr(vec);

    // Range is [begin, end) with begin at +0x4 and end at +0x8; both checked against begin <= end.
    const uint32_t begin = lift_field<uint32_t>(vec, 0x4);
    const uint32_t end = lift_field<uint32_t>(vec, 0x8);
    if (begin > end) msvc_invalid_parameter();

    // Iterator layout: {container, container (tag), position}.
    uint32_t it1[3] = {vec_addr, vec_addr, begin};
    ext_00427A60(it1);

    if (lift_field<uint32_t>(vec, 0x4) > lift_field<uint32_t>(vec, 0x8)) msvc_invalid_parameter();
    uint32_t it2[3] = {vec_addr, vec_addr, lift_field<uint32_t>(vec, 0x8)};
    ext_00427A60(it2);

    for (;;) {
        const uint32_t tag = it1[1];
        if (tag == 0 || tag != it2[1]) msvc_invalid_parameter();

        uint32_t cur = it1[2];
        if (!(cur < it2[2])) break;

        if (!(cur < lift_field<uint32_t>(vec, 0x8))) msvc_invalid_parameter();
        const uint32_t elem = lift_field<uint32_t>(host_ptr(cur), 0);
        const char* literal = static_cast<const char*>(host_ptr(static_cast<uint32_t>(mem_00A9F0C4)));

        if (msvc_string_equals_cstr(host_ptr(elem + 4), literal)) {
            void* block = ext_006A5C62(0x220);
            void* obj = nullptr;
            if (block != nullptr) {
                obj = ext_005C0E70(block);
            }

            lift_field<uint8_t>(obj, 0x210) = lift_field<uint8_t>(self, 0x4E0);

            if (!(cur < lift_field<uint32_t>(vec, 0x8))) msvc_invalid_parameter();
            const uint32_t elem_value = lift_field<uint32_t>(host_ptr(cur), 0);
            const uint32_t vtbl = lift_field<uint32_t>(obj, 0);
            const uint32_t slot = lift_field<uint32_t>(host_ptr(vtbl), 0x54);
            // vfunc at vtable+0x54 (slot 21), __thiscall(obj, elem_value)
            reinterpret_cast<void (*)(void*, uint32_t)>(static_cast<uintptr_t>(slot))(obj, elem_value);

            ext_005A3540(self, obj);
        }

        if (!(cur < lift_field<uint32_t>(vec, 0x8))) msvc_invalid_parameter();
        cur += 4;
        it1[2] = cur;
        ext_00427A60(it1);
    }
}
} // namespace lift_005A4D60

// [0x0059DEE0] NMData::CharacterData::vfunc_23_off_4 (208 bytes)
namespace lift_0059DEE0 {
extern void ext_00599E40(void* str);
extern void ext_0059A8D0(void* str, void* owner);
extern void ext_0059D7F0(void* thisAdj, void* out, void* arg);
extern void ext_00664F50(void* str);
extern int mem_00924FB0;
extern int mem_00924FDC;
extern int mem_00924FC0;
extern int mem_00924FF4;
extern const char mem_00928B5D[];

// @name NMData::CharacterData::setStringIfChanged
// @class NMData::CharacterData
// @summary Refreshes a temporary string from the argument via ext_0059D7F0 on this-4; if it differs from the +0x14 string, updates +0x14 (notifying ext_00599E40/ext_0059A8D0 when +0x5F4 is set), then copies it into +0x30 when +0x30 equals the literal at mem_00928B5D, and finally calls ext_00664F50 on +0x30.
// @field NMData::CharacterData +0x14 std::string field_0x14
// @field NMData::CharacterData +0x30 std::string field_0x30
// @field NMData::CharacterData +0x5F4 void* field_0x5f4
void fn_0059DEE0(void* self, void* arg) {
    // Import slots for std::string operators in the original; kept as metadata references only.
    (void)&mem_00924FB0;
    (void)&mem_00924FDC;
    (void)&mem_00924FC0;
    (void)&mem_00924FF4;

    std::string tmp;
    ext_0059D7F0(static_cast<uint8_t*>(self) - 4, &tmp, arg);

    std::string& s14 = lift_field<std::string>(self, 0x14);
    if (tmp != s14) {
        if (lift_field<void*>(self, 0x5F4) != nullptr) {
            ext_00599E40(&s14);
        }
        s14 = tmp;
        if (lift_field<void*>(self, 0x5F4) != nullptr) {
            // owner = (this-4 != 0) ? this : nullptr
            void* owner = (reinterpret_cast<uintptr_t>(self) - 4) != 0 ? self : nullptr;
            ext_0059A8D0(&s14, owner);
        }
    }

    std::string& s30 = lift_field<std::string>(self, 0x30);
    if (s30 == mem_00928B5D) {
        s30 = s14;
    }
    ext_00664F50(&s30);
}
} // namespace lift_0059DEE0
