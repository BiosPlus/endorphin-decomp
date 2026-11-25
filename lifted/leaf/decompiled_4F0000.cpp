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

// [0x004F4ED0] sub_004F4ED0 (44 bytes)
namespace lift_004F4ED0 {
// Callee 0x004F4EA0: sub_004F4EA0 (__thiscall, returns float via x87; see fn_004F8240 usage)
extern float ext_004F4EA0(void* self);

// @name NMData::SkeletalCalibrationVariables::vfunc_13 (acos ratio helper)
// @class NMData::SkeletalCalibrationVariables (inferred from callee ext_004F4EA0; not confirmed)
// @summary Returns acos(field_0x04 / callee(self)) as a float, with intermediate float rounding as in the original x87 code.
// @field NMData::SkeletalCalibrationVariables +0x04 float field_0x04
float fn_004F4ED0(void* self) {
    // fld dword [ecx+4] -> fstp dword -> fld dword: round the field through float.
    const float num = lift_field<float>(self, 4);
    // fstp qword: widen to double; call callee (ecx = self); fdivr: num / result.
    const double quotient = static_cast<double>(num) / static_cast<double>(ext_004F4EA0(self));
    // fstp dword: round quotient to float; then CIacos on the reloaded value; fstp dword.
    const float ratio = static_cast<float>(quotient);
    return static_cast<float>(std::acos(static_cast<double>(ratio)));
}
} // namespace lift_004F4ED0

// [0x004FDE90] sub_004FDE90 (83 bytes)
namespace lift_004FDE90 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void __fastcall ext_00665810(void* self);

// @name Unknown::releaseChildAndResetBase_004FDE90
// @class Unknown
// @summary Releases the object at +0x18 via its virtual slot 0 (deleting dtor, flag 1), then calls the base-reset helper on self.
// @field Unknown +0x18 void* field_0x18
void fn_004FDE90(void* self) {
    void* child = lift_field<void*>(self, 0x18);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        using ScalarDtorFn = void (*)(void* thisPtr, int flags);
        reinterpret_cast<ScalarDtorFn>(vtbl[0])(child, 1);
    }
    ext_00665810(self);
}
} // namespace lift_004FDE90

// [0x004FDEF0]
namespace lift_004FDEF0 {
// @name sub_004FDEF0_dtor
// @class sub_004FDEF0_Class
// @summary Destroys two std::string members at +0x34 and +0x18, then calls base destructor sub_00665810.
// @field sub_004FDEF0_Class +0x18 void* field_0x18
// @field sub_004FDEF0_Class +0x34 void* field_0x34


extern void __fastcall ext_00665810(void* self);
extern uintptr_t mem_00924FF4;

extern void __fastcall fn_004FDEF0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    auto dtor_string = reinterpret_cast<void(__fastcall*)(void*)>(mem_00924FF4);
    dtor_string(base + 0x34);
    dtor_string(base + 0x18);
    ext_00665810(self);
}
} // namespace lift_004FDEF0

// [0x004F91F0]
namespace lift_004F91F0 {
// @name initStaticObjectOnce
// @summary One-time initializer for the static object at 0x00AE9F24 guarded by the bit in 0x00AE9F28; returns the object's address.
// @field mem_00AE9F28 bit0 guard flag (set before the constructor runs)

extern DWORD mem_00AE9F28;
extern DWORD mem_00AE9F24;

DWORD ext_0067A670(void* self, DWORD value);

DWORD initStaticObjectOnce() {
    if ((mem_00AE9F28 & 1u) == 0) {
        mem_00AE9F28 |= 1u;
        ext_0067A670(reinterpret_cast<void*>(0x00AE9F24u), 0u);
        mem_00AE9F24 = 0x0094D03Cu;
    }
    return 0x00AE9F24u;
}
} // namespace lift_004F91F0
