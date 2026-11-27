// Lifted C++ translation unit: lifted/NMData/CharacterData.cpp
#include "lift_compat.h"

// [0x005A98B0]
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
