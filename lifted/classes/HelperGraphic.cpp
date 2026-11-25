// Lifted C++ translation unit: lifted/classes/HelperGraphic.cpp
#include "lift_compat.h"

// [0x005F5220] HelperGraphic::vfunc_14 (30 bytes)
namespace lift_005F5220 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(uint32_t, uint32_t);

// @name HelperGraphic::vfunc_14
// @class HelperGraphic
// @summary Calls ext_0046F7D0(arg1, 0) and returns its first argument unchanged.
uint32_t __stdcall fn_005F5220(uint32_t self, uint32_t arg2) {
    (void)arg2;
    ext_0046F7D0(self, 0);
    return self;
}
} // namespace lift_005F5220

// [0x0058F670] HelperGraphic::vfunc_15_off_4 (58 bytes)
namespace lift_0058F670 {
// Known callee 0x00661A70: sub_00661A70 (Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065DD60.)
// Convention: first value goes in ECX, second is pushed on the stack, result returned in EAX.
extern uint32_t ext_00661A70(uint32_t ecx_arg, uintptr_t stack_arg);

// @name HelperGraphic::vfunc_15_off_4
// @class HelperGraphic
// @summary Calls ext_00661A70 with arg and either (self + 0x14C) or 0 (when self - 4 is zero), then stores the result at +0xE4.
// @field HelperGraphic +0xe4 uint32_t field_0xE4
// @field HelperGraphic +0x14c uint8_t field_0x14C
void fn_0058F670(void* self, uint32_t arg) {
    const uintptr_t adjusted = reinterpret_cast<uintptr_t>(self) - 4;
    uintptr_t stack_arg = 0;
    if (adjusted != 0) {
        stack_arg = reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x14C);
    }
    const uint32_t result = ext_00661A70(arg, stack_arg);
    lift_field<uint32_t>(self, 0xE4) = result;
}
} // namespace lift_0058F670

// [0x005F57B0] HelperGraphic::vfunc_0_off_158 (34 bytes)
namespace lift_005F57B0 {
// Known callee 0x005F5410: CopyThisFloatTripletToGlobals (On first call, zeroes three float globals and sets init flag bit 0 in mem_00B46878; then copies this->+0x170/+0x174/+0x178 into mem_00B4686C/mem_00B46870/mem_00B46874. thiscall, this in ecx.)
extern void ext_005F5410(void* self);

// Globals filled by the callee; the original caller reads them through eax,
// which points at mem_00B4686C (the three floats are contiguous).
extern float mem_00B4686C;
extern float mem_00B46870;
extern float mem_00B46874;

// @name HelperGraphic::vfunc_0_off_158
// @class HelperGraphic
// @summary Rebases the secondary-subobject this (+0x158) to the HelperGraphic, refreshes the cached float triple via CopyThisFloatTripletToGlobals, and copies the three floats to the caller's out buffer.
// @field HelperGraphic +0x170 float field_0x170
// @field HelperGraphic +0x174 float field_0x174
// @field HelperGraphic +0x178 float field_0x178
void fn_005F57B0(void* self, float* out) {
    // self points at the HasBufferedVector subobject (+0x158) of HelperGraphic.
    char* obj = static_cast<char*>(self) - 0x158;
    ext_005F5410(obj);

    out[0] = mem_00B4686C;
    out[1] = mem_00B46870;
    out[2] = mem_00B46874;
}
} // namespace lift_005F57B0
