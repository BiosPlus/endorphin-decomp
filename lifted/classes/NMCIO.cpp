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
