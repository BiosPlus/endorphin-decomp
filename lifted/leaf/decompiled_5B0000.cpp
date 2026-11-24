// Lifted C++ translation unit: lifted/leaf/decompiled_5B0000.cpp
#include "lift_compat.h"

// [0x005B6970]
namespace lift_005B6970 {
// @name getField0x04From005B6930
// @summary Calls sub_005B6930 and returns the float at offset +0x04 of the returned object.


extern uint32_t ext_005B6930();

float sub_005B6970() {
    uint32_t ptr = ext_005B6930();
    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(ptr) + 0x4);
}
} // namespace lift_005B6970

// [0x005B67C0] sub_005B67C0 (32 bytes)
namespace lift_005B67C0 {
void __thiscall ext_00647F50(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B67C0(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00647F50(target, value);
}
} // namespace lift_005B67C0

// [0x005B7000] sub_005B7000 (32 bytes)
namespace lift_005B7000 {
// @name sub_005B7000
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_00648180(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7000(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00648180(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7000

// [0x005B7020] sub_005B7020 (32 bytes)
namespace lift_005B7020 {
// @name sub_005B7020
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_006481A0(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7020(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_006481A0(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7020

// [0x005B6BC0] sub_005B6BC0 (33 bytes)
namespace lift_005B6BC0 {
// Known callee 0x005CE9E0: sub_005CE9E0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E60.)
extern void ext_005CE9E0(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt1D0IfSet
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards the address of the subobject at +0x1D0 to ext_005CE9E0 using that pointer as the receiver.
// @field Unknown +0x158 void* field_158
// @field Unknown +0x1D0 void* field_1D0
void fn_005B6BC0(void* self) {
    char* base = static_cast<char*>(self);
    void* target = *reinterpret_cast<void**>(base + 0x158);
    if (target != nullptr) {
        ext_005CE9E0(target, base + 0x1D0);
    }
}
} // namespace lift_005B6BC0

// [0x005B6C20] sub_005B6C20 (33 bytes)
namespace lift_005B6C20 {
// Known callee 0x005CEA00: sub_005CEA00 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EA0.)
// Original passes the argument on the stack (push eax) and the object in ecx.
extern void ext_005CEA00(void* self, void* arg);

// @name Unknown::forwardFieldE8IfField158Set
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards the address of the subobject at +0x1E8 to ext_005CEA00 using +0x158 as the receiver; otherwise does nothing.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1E8 void* field_0x1e8
void fn_005B6C20(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    void* obj = *reinterpret_cast<void**>(base + 0x158);
    if (obj != nullptr) {
        ext_005CEA00(obj, base + 0x1E8);
    }
}
} // namespace lift_005B6C20

// [0x005B6C50] sub_005B6C50 (33 bytes)
namespace lift_005B6C50 {
// Known callee 0x005CEA10: sub_005CEA10 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EC0.)
// The original call passes one extra stack argument (lea of this+0x1F4); declared here to match the call site.
extern void __fastcall ext_005CEA10(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt1F4
// @class Unknown
// @summary Forwards this+0x1F4 to ext_005CEA10 using the subobject at +0x158 when it is non-null.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1F4 uint8_t field_0x1F4
void fn_005B6C50(void* self) {
    auto* obj = reinterpret_cast<uint8_t*>(self);
    void* sub = *reinterpret_cast<void**>(obj + 0x158);
    if (sub != nullptr) {
        ext_005CEA10(sub, obj + 0x1F4);
    }
}
} // namespace lift_005B6C50

// [0x005B6B60] sub_005B6B60 (33 bytes)
namespace lift_005B6B60 {
// Known callee 0x005CE9C0: sub_005CE9C0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E20.)
// Called with ecx = subobject pointer (fastcall self) and one stack argument.
extern void ext_005CE9C0(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt158
// @class Unknown
// @summary Forwards to ext_005CE9C0 with the +0x1B8 member address when the subobject pointer at +0x158 is non-null.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1B8 void* field_0x1b8
void fn_005B6B60(void* self) {
    void* sub = lift_field<void*>(self, 0x158);
    if (sub != nullptr) {
        ext_005CE9C0(sub, static_cast<char*>(self) + 0x1B8);
    }
}
} // namespace lift_005B6B60
