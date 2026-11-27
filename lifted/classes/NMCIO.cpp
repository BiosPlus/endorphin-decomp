// Lifted C++ translation unit: lifted/classes/NMCIO.cpp
#include "lift_compat.h"
#include <string>
extern "C" int mem_00B37F40;
extern const std::string mem_00B3B084;
extern const std::string mem_00B3B1D4;
// Read the i-th slot of the vtable stored at the start of obj.
static inline void* vtbl_slot(void* obj, size_t index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return vtbl[index];
}
extern "C" void ext_006619D0(void* self, void* arg);
#include <cstdint>

// [0x0056D920] NMCIO::vfunc_13 (61 bytes)
namespace lift_0056D920 {
// Known callee 0x006619D0: Unknown::copyFieldsFrom (copy-assigns the three DWORD fields from src into self, skipping self-assignment; sets the flag byte at +0x00 to 1; returns self).
extern void* __thiscall ext_006619D0(void* self, const void* src);
// MSVCP80 import slot for std::basic_string<char>::c_str (IAT entry at 0x924FF0).
extern int mem_00924FF0;

using CStrFn = const char* (__thiscall*)(void*);
using VSlot9Fn = void (__thiscall*)(void*, const char*, int);

// @name NMCIO::vfunc_13
// @class NMCIO
// @summary Copy-assigns the object at this+0x420 from the record at (*(this+0x420)+4)+0xCC, then calls virtual slot 9 of the object at this+0x418 with str.c_str() and flag 1.
// @field NMCIO +0x418 void* field_0x418
// @field NMCIO +0x420 void* field_0x420
extern void __fastcall fn_0056D920(void* self, int edx_unused, void* str) {
    (void)edx_unused;

    // copyFieldsFrom(p420, p420[+4] + 0xCC)
    void* p420 = lift_field<void*>(self, 0x420);
    const uintptr_t src_base = static_cast<uintptr_t>(lift_field<uint32_t>(p420, 4));
    ext_006619D0(p420, reinterpret_cast<const void*>(src_base + 0xCC));

    // Virtual call on the object at this+0x418: slot at byte offset 0x24 of its vtable.
    void* q = lift_field<void*>(self, 0x418);
    void* vtbl = lift_field<void*>(q, 0);
    void* slot = lift_field<void*>(vtbl, 0x24);

    CStrFn c_str = *reinterpret_cast<CStrFn*>(&mem_00924FF0);
    const char* cs = c_str(str);

    VSlot9Fn fn = reinterpret_cast<VSlot9Fn>(slot);
    fn(q, cs, 1);
}
} // namespace lift_0056D920

// [0x0056D860] NMCIO::vfunc_10 (190 bytes)
namespace lift_0056D860 {
// MSVCP80 import slots for std::basic_string<char> (copy-ctor and dtor).
extern int mem_00924FE0;
extern int mem_00924FF4;
// Global counter bumped once per call.
extern int mem_00B37F40;
// Two std::string<char> literal objects in .rdata.
extern char mem_00B3B084[];
extern char mem_00B3B1D4[];

namespace lift_0056D860 {
using StrCopyCtorFn = void(__thiscall*)(void* self, const void* src);
using StrDtorFn     = void(__thiscall*)(void* self);
using Slot7Fn       = void(__thiscall*)(void* self, void* arg);
using Slot23Fn      = void(__thiscall*)(void* self, const void* str);

// @name NMCIO::vfunc_10
// @class NMCIO
// @summary Forwards the argument to virtual slot 7 of the object at this+0x414, then passes two local std::string copies (from .rdata literals) to virtual slots 23 and 24 of that object's +4 base subobject, bumps a global counter, and destroys the strings.
// @field NMCIO +0x414 void* field_0x414
void __thiscall fn_0056D860(void* self, void* arg) {
    // Stage 1: forward arg to slot 7 of the object at this+0x414.
    void* p = lift_field<void*>(self, 0x414);
    void* vt = lift_field<void*>(p, 0);
    Slot7Fn slot7 = reinterpret_cast<Slot7Fn>(lift_field<void*>(vt, 0x1c));
    slot7(p, arg);

    // Stage 2: build two std::string copies from the .rdata literals.
    alignas(8) unsigned char strA[0x1C];
    alignas(8) unsigned char strB[0x1C];
    auto strCopy = reinterpret_cast<StrCopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0));
    auto strDtor = reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    strCopy(strA, mem_00B3B084);
    strCopy(strB, mem_00B3B1D4);

    // Stage 3: slot 23 on the +4 base subobject of the object at this+0x414, with strA.
    void* sub = static_cast<unsigned char*>(p) + 4;
    void* vtSub = lift_field<void*>(p, 4);
    Slot23Fn slot23 = reinterpret_cast<Slot23Fn>(lift_field<void*>(vtSub, 0x5c));
    slot23(sub, strA);

    // Stage 4: slot 24 on the same subobject, with strB (object pointer reloaded from this+0x414).
    void* p2 = lift_field<void*>(self, 0x414);
    void* sub2 = static_cast<unsigned char*>(p2) + 4;
    void* vtSub2 = lift_field<void*>(p2, 4);
    Slot23Fn slot24 = reinterpret_cast<Slot23Fn>(lift_field<void*>(vtSub2, 0x60));
    slot24(sub2, strB);

    // Stage 5: bump the global counter.
    ++mem_00B37F40;

    // Stage 6: destroy strings in reverse construction order.
    strDtor(strB);
    strDtor(strA);
}
} // namespace lift_0056D860
} // namespace lift_0056D860
