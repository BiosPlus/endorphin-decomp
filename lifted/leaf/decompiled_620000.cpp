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

// [0x00629F10] sub_00629F10 (26 bytes)
namespace lift_00629F10 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Known callee 0x00594010: sub_00594010 (Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.)
// Returns a float on the x87 stack (consumed by fsub in the original).
extern float ext_00594010(void* self);

// @name StoreDeltaToField38
// @class Unknown
// @summary Stores (ext_00594010(self-from-ext_00594000) - arg) into this->+0x38 as float.
// @field Unknown +0x38 float field_0x38
void fn_00629F10(void* self, float arg) {
    const auto ctx = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000()));
    const float value = ext_00594010(reinterpret_cast<void*>(ctx));
    lift_field<float>(self, 0x38) = value - arg;
}
} // namespace lift_00629F10

// [0x00621720] sub_00621720 (27 bytes)
namespace lift_00621720 {
// @name sub_00621720
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00621680(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00621720(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00621680(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00621720

// [0x0062C0E0] sub_0062C0E0 (27 bytes)
namespace lift_0062C0E0 {
// @name sub_0062C0E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0062C010(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0062C0E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0062C010(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0062C0E0
