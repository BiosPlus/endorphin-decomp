// Lifted C++ translation unit: lifted/leaf/decompiled_620000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00629DF0] sub_00629DF0 (20 bytes)
namespace lift_00629DF0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
// Returns float: the tail-called sub_00642650 leaves its result in st0, which the caller stores via fstp.
extern float __fastcall ext_00594010(void* self);

// @name ComputeFloatIntoField30
// @class <unknown> (owning class not yet identified)
// @summary Fetches an int32 handle from ext_00594000, resolves it through ext_00594010, and stores the float result at this+0x30.
// @field <unknown> +0x30 float field_0x30
extern void __fastcall fn_00629DF0(void* self) {
    const int32_t handle = ext_00594000();
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle)));
    const float value = ext_00594010(target);
    lift_field<float>(self, 0x30) = value;
}
} // namespace lift_00629DF0

// [0x006271D0] sub_006271D0 (25 bytes)
namespace lift_006271D0 {
extern void __thiscall ext_00647E00(void* self, uint32_t arg);

// @name descriptiveFunctionName (owner class not identified)
// @summary Forwards a pointer to this+0x30 to ext_00647E00, using this->field_0x28->field_0x158->field_0xac as the receiver.
// @field field_0x28 void* field_0x28
// @field field_0x158 void* field_0x158
// @field field_0xac void* field_0xac
void fn_006271D0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* p28 = *reinterpret_cast<void**>(base + 0x28);
    void* p158 = *reinterpret_cast<void**>(static_cast<uint8_t*>(p28) + 0x158);
    void* receiver = *reinterpret_cast<void**>(static_cast<uint8_t*>(p158) + 0xac);

    uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x30));
    ext_00647E00(receiver, arg);
}
} // namespace lift_006271D0

// [0x00627280] sub_00627280 (25 bytes)
namespace lift_00627280 {
extern void __thiscall ext_00647E20(void* self, uint32_t arg);

// @name Unknown::forwardToNestedObject30
// @class Unknown
// @summary Walks self->field_0x28 -> ->field_0x158 -> ->field_0xAC to get a `this` pointer, then calls sub_00647E20 on it with the address self+0x30 as its single stack argument.
// @field Unknown +0x28 void* field_0x28
void __thiscall fn_00627280(void* self) {
    // mov ecx, [ecx+0x28]      ; sub = self->field_0x28
    uint8_t* sub = lift_field<uint8_t*>(self, 0x28);
    // mov edx, [ecx+0x158]     ; inner = sub->field_0x158
    uint8_t* inner = lift_field<uint8_t*>(sub, 0x158);
    // mov ecx, [edx+0xac]      ; target = inner->field_0xAC (becomes `this` for the call)
    void* target = lift_field<void*>(inner, 0xAC);
    // lea eax, [self+0x30]     ; argument = address of self+0x30
    uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x30));
    // push eax / call sub_00647E20
    ext_00647E20(target, arg);
}
} // namespace lift_00627280
