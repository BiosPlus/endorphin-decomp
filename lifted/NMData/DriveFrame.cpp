// Lifted C++ translation unit: lifted/NMData/DriveFrame.cpp
#include "lift_compat.h"
// Callee: sub_006125B0 (147 bytes). Its return value is used as an array base pointer (eax).
extern "C" float* ext_006125B0();
// @name NMData::DriveFrame::vfunc_67
// @class NMData::DriveFrame
// @summary Returns the float element at index `idx` of the array obtained from sub_006125B0.
// @field none: the function does not access DriveFrame fields directly; the array base comes from ext_006125B0.
float fn_005EC060(int32_t idx) {
    float* base = ext_006125B0();
    return base[idx];
}
// Matches the sibling declaration used by fn_005EC060 (identical redeclaration is legal).

// [0x005EC070] NMData::DriveFrame::vfunc_68 (30 bytes)
// @name NMData::DriveFrame::vfunc_68
// @class NMData::DriveFrame
// @summary Fetches a 3-float vector from ext_006125B0() and copies it into the caller-supplied output buffer, returning that buffer.
// (no direct DriveFrame field offsets are accessed; self is only used as the implicit this for ext_006125B0)
float* fn_005EC070(void* self, float* out) {
    (void)self;
    float* src = ext_006125B0();
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    return out;
}

// [0x0061D1A0] NMData::DriveFrame::vfunc_60 (62 bytes)
namespace lift_0061D1A0 {
// Known callee 0x00611200: scaleVec3IntoSlotsAndDispatch (Scales floats at +0x154/+0x158/+0x15C by p[0..2] into +0x160/+0x164/+0x168, calls vslot 3 of the embedded object at +0x04 with mem_00B40640, passes the result to ext_0067E600 with &field_0x160, then if ext_00594000() is nonzero returns ext_00493EE0(value + 0x258).)
extern void* ext_00611200(void* self, const void* p);
// Known callee 0x006125B0: Unknown::divideTripletByScale_0x160 (Builds a local 3x3 identity matrix in a frame struct, calls two helpers, then divides the three floats at +0x160/+0x164/+0x168 by the scale floats at +0x154/+0x158/+0x15c.)
// Returns a pointer to a float triple in eax (the asm reads [eax], [eax+4], [eax+8]).
extern const float* ext_006125B0(void* self);

// @name NMData::DriveFrame::vfunc_60
// @class NMData::DriveFrame
// @summary Copies the triple returned by ext_006125B0 into a local array, overwrites element [index] with value, and forwards the array to ext_00611200 (thiscall, callee pops 8 bytes: index, value).
void* fn_0061D1A0(void* self, uint32_t index, float value) {
    float triple[3];
    const float* src = ext_006125B0(self);
    triple[0] = src[0];
    triple[1] = src[1];
    triple[2] = src[2];
    triple[index] = value;
    return ext_00611200(self, triple);
}
} // namespace lift_0061D1A0

// [0x0061D150] NMData::DriveFrame::vfunc_22 (65 bytes)
namespace lift_0061D150 {
// Known callee 0x00611270: NMData::Constraint::vfunc_22 (Calls a method on the argument object with a global value and this's +0x154 sub-object, forwards the result to ext_0067F040, and returns the argument.)
extern void* ext_00611270(void* self, void* other);
// Known callee 0x00640390: sub_00640390 (332B). Stack args: (uint32_t a, uint32_t b), ecx = self.
extern void* ext_00640390(void* self, uint32_t a, uint32_t b);
// Known callee 0x006125B0: Unknown::divideTripletByScale_0x160 (Builds a local 3x3 identity matrix in a frame struct, calls two helpers, then divides the three floats at +0x160/+0x164/+0x168 by the scale floats at +0x154/+0x158/+0x15c.)
// Lifted leaf is declared void; the eax value consumed below is whatever that callee leaves in eax.
extern uint32_t ext_006125B0(void* self);
// Known callee 0x0067F040: sub_0067F040 (58B). cdecl, two stack args.
extern void ext_0067F040(void* a, uint32_t b);
// Known callee 0x00593AE0: Transform::vfunc_22 (299B). ecx = self, one stack arg.
extern void* ext_00593AE0(void* self, void* arg);
// Global read from 0x00A9EE5C (value 0x0098719C at link time).
extern uint32_t mem_00A9EE5C;

// @name NMData::DriveFrame::vfunc_22
// @class NMData::DriveFrame
// @summary Forwards the argument to Constraint::vfunc_22 and to the helper chain (global, divideTripletByScale, Transform::vfunc_22) on this, then returns the argument.
// @field none: this function does not read or write DriveFrame fields directly; self is only passed to callees.
void* fn_0061D150(void* self, void* arg) {
    ext_00611270(self, arg);

    uint32_t global_value = mem_00A9EE5C;
    void* ebx_val = ext_00640390(arg, 0u, global_value);

    uint32_t eax_val = ext_006125B0(self);

    ext_0067F040(ebx_val, eax_val);

    ext_00593AE0(self, ebx_val);

    return arg;
}
} // namespace lift_0061D150
