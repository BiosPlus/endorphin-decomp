// Lifted C++ translation unit: lifted/leaf/tiny_870000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstdint>

#include <cstdint>
namespace lift_00870E30 {
extern int mem_0099F140;

// @name sub_00870E30
// @summary Stores address of mem_0099F140 into field at offset +0x0.
extern void __fastcall fn_00870E30(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0099F140;
}
} // namespace lift_00870E30

// [0x00872730] sub_00872730 (11 bytes)
namespace lift_00872730 {
extern DWORD mem_00AC5B50[];

// @name sub_00872730
// @summary Auto-lifted identical-shape clone of 0x00587D40 (NMData::GraphicData::vfunc_0_off_C).
DWORD NMData_GraphicData_vfunc_0_off_C(const void* self) {
    const DWORD index = lift_field<DWORD>(self, 0x4);
    return mem_00AC5B50[index];
}

void fn_00872730(void* self) {
    (void)NMData_GraphicData_vfunc_0_off_C(self);
}
} // namespace lift_00872730

// [0x00871860] sub_00871860 (15 bytes)
namespace lift_00871860 {
// @name Unknown_CallVtableSlot0_IfNonNull
// @class Unknown
// @summary If the pointer stored at *self is non-null, invoke its vtable slot 0 as a thiscall with argument 1.
// @field Unknown +0x00 void* field_0x00

namespace lift_00871860 {

// Thiscall method taking (this, int) and returning nothing (result discarded by caller).
// On 32-bit MSVC, __thiscall places `this` in ECX and the argument on the stack.
typedef void(__thiscall* VSlot0Fn)(void* self, DWORD a);

struct Unknown {
    void* field_0x00;
};

void Unknown_CallVtableSlot0_IfNonNull(void* self) {
    Unknown* holder = static_cast<Unknown*>(self);
    void* obj = holder->field_0x00;
    if (obj == nullptr) {
        return;
    }
    void** vtable = *reinterpret_cast<void***>(obj);
    VSlot0Fn fn = reinterpret_cast<VSlot0Fn>(vtable[0]);
    fn(obj, 1u);
}

} // namespace lift_00871860

// Matches the original entry point signature used by the lift tooling.
void fn_00871860(void* self) {
    lift_00871860::Unknown_CallVtableSlot0_IfNonNull(self);
}
} // namespace lift_00871860
