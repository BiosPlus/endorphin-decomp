// Lifted C++ translation unit: lifted/leaf/decompiled_640000.cpp
#include "lift_compat.h"

// [0x00648480] sub_00648480 (15 bytes)
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6F70(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00648480(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0x5c);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6F70(arg0);
}
} // namespace lift_00648480

// [0x00647F00] sub_00647F00 (18 bytes)
namespace lift_00647F00 {
// @name sub_00647F00
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C5F80(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00647F00(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C5F80(arg0);
}
} // namespace lift_00648480
} // namespace lift_00647F00

// [0x00647F30] sub_00647F30 (18 bytes)
namespace lift_00647F30 {
// @name sub_00647F30
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C5F90(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00647F30(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C5F90(arg0);
}
} // namespace lift_00648480
} // namespace lift_00647F30

// [0x006481C0] sub_006481C0 (18 bytes)
namespace lift_006481C0 {
// @name sub_006481C0
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6120(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_006481C0(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6120(arg0);
}
} // namespace lift_00648480
} // namespace lift_006481C0

// [0x006481E0] sub_006481E0 (18 bytes)
namespace lift_006481E0 {
// @name sub_006481E0
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6110(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_006481E0(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6110(arg0);
}
} // namespace lift_00648480
} // namespace lift_006481E0

// [0x00642630] sub_00642630 (19 bytes)
namespace lift_00642630 {
// Known callee 0x00648900: SubObject::setField8Float (Stores a float argument into the float at +0x08 of the object pointed to by +0x28.)
extern void ext_00648900(void* self, float value);

// @name SubObjectHolder::forwardSetField8Float
// @class SubObjectHolder
// @summary Forwards a float argument to the sub-object held at this+0x0C by calling setField8Float on it; the float is passed through unchanged.
// @field SubObjectHolder +0x0C pointer field_0x0C
void fn_00642630(void* self, float value) {
    // fld dword [esp+4]        ; value is the float argument (already in 'value')
    // push ecx                 ; save ecx (stack slot reused as the float argument below)
    // mov ecx, [ecx+0xc]       ; ecx = self->field_0x0C (becomes 'this' for the callee)
    void* sub = lift_field<void*>(self, 0x0C);
    // fstp dword [esp]         ; push float as argument to callee
    // call 0x648900           ; sub_00648900(this=ecx, value)
    ext_00648900(sub, value);
    // ret 4                    ; caller cleans the float argument (handled by the portable signature)
}
} // namespace lift_00642630

// [0x006426D0] sub_006426D0 (19 bytes)
namespace lift_006426D0 {
// @name sub_006426D0
// @summary Auto-lifted identical-shape clone of 0x00642630 (SubObjectHolder::forwardSetField8Float).
namespace lift_00642630 {
// Known callee 0x00648900: SubObject::setField8Float (Stores a float argument into the float at +0x08 of the object pointed to by +0x28.)
extern void ext_006489F0(void* self, float value);

// @name SubObjectHolder::forwardSetField8Float
// @class SubObjectHolder
// @summary Forwards a float argument to the sub-object held at this+0x0C by calling setField8Float on it; the float is passed through unchanged.
// @field SubObjectHolder +0x0C pointer field_0x0C
void fn_006426D0(void* self, float value) {
    // fld dword [esp+4]        ; value is the float argument (already in 'value')
    // push ecx                 ; save ecx (stack slot reused as the float argument below)
    // mov ecx, [ecx+0xc]       ; ecx = self->field_0x0C (becomes 'this' for the callee)
    void* sub = lift_field<void*>(self, 0x0C);
    // fstp dword [esp]         ; push float as argument to callee
    // call 0x648900           ; sub_00648900(this=ecx, value)
    ext_006489F0(sub, value);
    // ret 4                    ; caller cleans the float argument (handled by the portable signature)
}
} // namespace lift_00642630
} // namespace lift_006426D0

// [0x00642720] sub_00642720 (19 bytes)
namespace lift_00642720 {
// @name sub_00642720
// @summary Auto-lifted identical-shape clone of 0x00642630 (SubObjectHolder::forwardSetField8Float).
namespace lift_00642630 {
// Known callee 0x00648900: SubObject::setField8Float (Stores a float argument into the float at +0x08 of the object pointed to by +0x28.)
extern void ext_00648A60(void* self, float value);

// @name SubObjectHolder::forwardSetField8Float
// @class SubObjectHolder
// @summary Forwards a float argument to the sub-object held at this+0x0C by calling setField8Float on it; the float is passed through unchanged.
// @field SubObjectHolder +0x0C pointer field_0x0C
void fn_00642720(void* self, float value) {
    // fld dword [esp+4]        ; value is the float argument (already in 'value')
    // push ecx                 ; save ecx (stack slot reused as the float argument below)
    // mov ecx, [ecx+0xc]       ; ecx = self->field_0x0C (becomes 'this' for the callee)
    void* sub = lift_field<void*>(self, 0x0C);
    // fstp dword [esp]         ; push float as argument to callee
    // call 0x648900           ; sub_00648900(this=ecx, value)
    ext_00648A60(sub, value);
    // ret 4                    ; caller cleans the float argument (handled by the portable signature)
}
} // namespace lift_00642630
} // namespace lift_00642720

// [0x00647BF0] sub_00647BF0 (20 bytes)
namespace lift_00647BF0 {
extern void __thiscall ext_0065AA30(void* self, void* outer, float value);

// @name Unknown::ForwardFloat68ToSubobjectA4
// @class Unknown
// @summary Loads float at this+0x68, then calls sub_0065AA30 on the subobject at this+0xA4 passing (this, float) as stack args (thiscall, callee pops 8).
// @field Unknown +0x68 float field_0x68
// @field Unknown +0xA4 void* field_0xA4
extern void __thiscall fn_00647BF0(void* self) {
    float value = lift_field<float>(self, 0x68);
    void* subobject = lift_field<void*>(self, 0xA4);
    ext_0065AA30(subobject, self, value);
}
} // namespace lift_00647BF0
