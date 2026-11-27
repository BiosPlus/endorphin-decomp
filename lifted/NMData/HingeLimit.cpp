// Lifted C++ translation unit: lifted/NMData/HingeLimit.cpp
#include "lift_compat.h"

// [0x006120D0]
namespace lift_006120D0 {
// @name NMData::HingeLimit::scalarDeletingDestructor
// @class NMData::HingeLimit
// @summary Scalar deleting destructor for NMData::HingeLimit; destroys member at +0x20, resets base vtable, and optionally frees self.
// @field NMData::HingeLimit +0x20 uint8_t[1] field_0x20


extern void __thiscall ext_005B1870(void* self);
extern void __fastcall ext_0065F440(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void* __thiscall fn_006120D0(void* self, uint32_t flags) {
    ext_005B1870(static_cast<uint8_t*>(self) + 0x20);
    ext_0065F440(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_006120D0

// [0x0061F130] NMData::HingeLimit::vfunc_15 (232 bytes)
namespace lift_0061F130 {
// Known callee 0x0061ED50: sub_0061ED50 (ConstructOnce-shaped: DWORD* dst, DWORD value)
extern DWORD* ext_0061ED50(DWORD* dst, DWORD value);
// Known callee 0x0061ED70: sub_0061ED70
extern DWORD* ext_0061ED70(DWORD* dst, DWORD value);
// Known callee 0x0061ED90: sub_0061ED90
extern DWORD* ext_0061ED90(DWORD* dst, DWORD value);
// Known callee 0x0061EDB0: sub_0061EDB0
extern DWORD* ext_0061EDB0(DWORD* dst, DWORD value);
// Known callee 0x0061EDD0: sub_0061EDD0
extern DWORD* ext_0061EDD0(DWORD* dst, DWORD value);
// Known callee 0x0061EDF0: sub_0061EDF0
extern DWORD* ext_0061EDF0(DWORD* dst, DWORD value);
// Known callee 0x0061EE10: sub_0061EE10
extern DWORD* ext_0061EE10(DWORD* dst, DWORD value);
// Known callee 0x0061EE30: sub_0061EE30
extern DWORD* ext_0061EE30(DWORD* dst, DWORD value);
// Known callee 0x00671F30: sub_00671F30 (zeroes out[0], stores mem_00B599BC into out[1])
extern void ext_00671F30(DWORD* out);

// @name NMData::HingeLimit::vfunc_15
// @class NMData::HingeLimit
// @summary Dispatches on selector (sel - 0x2AB) to one of eight initializers passed this as value, else zeroes dst via sub_00671F30; returns dst.
DWORD* fn_0061F130(void* self, DWORD* dst, DWORD sel) {
    // `this` is passed to the callees as a DWORD value (original code pushes ecx).
    const DWORD value = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));
    const DWORD idx = sel - 0x2ABu;

    if (idx <= 0xC4u) {
        switch (idx) {
        case 0x00: ext_0061EDD0(dst, value); return dst;
        case 0x02: ext_0061ED70(dst, value); return dst;
        case 0x03: ext_0061EE10(dst, value); return dst;
        case 0x04: ext_0061ED90(dst, value); return dst;
        case 0xC0: ext_0061EDF0(dst, value); return dst;
        case 0xC2: ext_0061ED50(dst, value); return dst;
        case 0xC3: ext_0061EE30(dst, value); return dst;
        case 0xC4: ext_0061EDB0(dst, value); return dst;
        default: break;
        }
    }

    ext_00671F30(dst);
    return dst;
}
} // namespace lift_0061F130
