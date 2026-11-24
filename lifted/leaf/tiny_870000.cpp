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

// [0x008703B0] sub_008703B0 (20 bytes)
namespace lift_008703B0 {
extern int mem_0094F63C;

// @name Unknown::ctorResetFields_008703B0
// @summary Stores a vtable-style pointer at +0x00, zeroes the three dwords at +0x08..+0x10, and returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void* fn_008703B0(void* self) {
    // Original: mov eax,ecx; xor ecx,ecx; mov [eax],0x94F63C; mov [eax+8/0C/10],ecx; ret
    // The stored value is the 32-bit address of mem_0094F63C (kept as a constant here).
    lift_field<uint32_t>(self, 0x00) = 0x0094F63Cu;
    lift_field<uint32_t>(self, 0x08) = 0u;
    lift_field<uint32_t>(self, 0x0C) = 0u;
    lift_field<uint32_t>(self, 0x10) = 0u;
    return self;
}
} // namespace lift_008703B0
