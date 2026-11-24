// Lifted C++ translation unit: lifted/leaf/decompiled_4F0000.cpp
#include "lift_compat.h"

// [0x004F28C0] sub_004F28C0 (25 bytes)
namespace lift_004F28C0 {
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void __thiscall ext_0065C650(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void __cdecl ext_006A5C5C(void* arg);

// @name ReleaseNestedCriticalSection
// @summary If the pointer stored at self is non-null, leave the critical section stored in that object's first field, then pass the object to MFC80 ord_764.
// @field Unknown +0x00 void* field_0x00
void fn_004F28C0(void* self) {
    uint32_t obj = *static_cast<uint32_t*>(self);
    if (obj == 0) {
        return;
    }
    uint32_t cs = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    ext_0065C650(reinterpret_cast<void*>(static_cast<uintptr_t>(cs)));
    ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
}
} // namespace lift_004F28C0

// [0x004F27E0]
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_004F4D20(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0094C42C[];

__thiscall void* fn_004F27E0(void* self, DWORD arg1, DWORD arg2) {
    ext_004F4D20(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0094C42C));
    return self;
}
} // namespace lift_004F27E0
