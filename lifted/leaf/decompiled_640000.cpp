// Lifted C++ translation unit: lifted/leaf/decompiled_640000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
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

// [0x00647C10] sub_00647C10 (20 bytes)
namespace lift_00647C10 {
// @name sub_00647C10
// @summary Auto-lifted identical-shape clone of 0x00647BF0 (Unknown::ForwardFloat68ToSubobjectA4).
namespace lift_00647BF0 {
extern void __thiscall ext_0065ABE0(void* self, void* outer, float value);

// @name Unknown::ForwardFloat68ToSubobjectA4
// @class Unknown
// @summary Loads float at this+0x68, then calls sub_0065AA30 on the subobject at this+0xA4 passing (this, float) as stack args (thiscall, callee pops 8).
// @field Unknown +0x68 float field_0x68
// @field Unknown +0xA4 void* field_0xA4
extern void __thiscall fn_00647C10(void* self) {
    float value = lift_field<float>(self, 0x68);
    void* subobject = lift_field<void*>(self, 0xA4);
    ext_0065ABE0(subobject, self, value);
}
} // namespace lift_00647BF0
} // namespace lift_00647C10

// [0x00647C30] sub_00647C30 (20 bytes)
namespace lift_00647C30 {
// @name sub_00647C30
// @summary Auto-lifted identical-shape clone of 0x00647BF0 (Unknown::ForwardFloat68ToSubobjectA4).
namespace lift_00647BF0 {
extern void __thiscall ext_0065AAB0(void* self, void* outer, float value);

// @name Unknown::ForwardFloat68ToSubobjectA4
// @class Unknown
// @summary Loads float at this+0x68, then calls sub_0065AA30 on the subobject at this+0xA4 passing (this, float) as stack args (thiscall, callee pops 8).
// @field Unknown +0x68 float field_0x68
// @field Unknown +0xA4 void* field_0xA4
extern void __thiscall fn_00647C30(void* self) {
    float value = lift_field<float>(self, 0x68);
    void* subobject = lift_field<void*>(self, 0xA4);
    ext_0065AAB0(subobject, self, value);
}
} // namespace lift_00647BF0
} // namespace lift_00647C30

// [0x00647C50] sub_00647C50 (20 bytes)
namespace lift_00647C50 {
// @name sub_00647C50
// @summary Auto-lifted identical-shape clone of 0x00647BF0 (Unknown::ForwardFloat68ToSubobjectA4).
namespace lift_00647BF0 {
extern void __thiscall ext_0065AB40(void* self, void* outer, float value);

// @name Unknown::ForwardFloat68ToSubobjectA4
// @class Unknown
// @summary Loads float at this+0x68, then calls sub_0065AA30 on the subobject at this+0xA4 passing (this, float) as stack args (thiscall, callee pops 8).
// @field Unknown +0x68 float field_0x68
// @field Unknown +0xA4 void* field_0xA4
extern void __thiscall fn_00647C50(void* self) {
    float value = lift_field<float>(self, 0x68);
    void* subobject = lift_field<void*>(self, 0xA4);
    ext_0065AB40(subobject, self, value);
}
} // namespace lift_00647BF0
} // namespace lift_00647C50

// [0x0064DC80] sub_0064DC80 (23 bytes)
namespace lift_0064DC80 {
extern uint32_t ext_007C5A90(uint32_t value, float scale);

// @name ForwardScaledFieldToCallee
// @class Unknown
// @summary Forwards this->field_0x64 and the float argument to ext_007C5A90 and returns its result.
// @field Unknown +0x64 uint32_t field_0x64
extern uint32_t __thiscall fn_0064DC80(void* self, float arg) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t value = *reinterpret_cast<uint32_t*>(base + 0x64);
    return ext_007C5A90(value, arg);
}
} // namespace lift_0064DC80

// [0x00642660] sub_00642660 (24 bytes)
namespace lift_00642660 {
// Callee sub_00642660 is at 0x00648860: receives the subobject in ecx and one stack argument.
extern void ext_00648860(void* subobject, uint32_t arg);

// @name Unknown::ForwardToSubobjectField0xC
// @class Unknown
// @summary Forwards its one stack argument to the subobject at +0x0C via ext_00648860, then sets the byte flag at +0x10 to 1.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x10 uint8_t field_0x10
void fn_00642660(void* self, uint32_t arg0) {
    void* subobject = lift_field<void*>(self, 0x0C);
    ext_00648860(subobject, arg0);
    lift_field<uint8_t>(self, 0x10) = 1;
}
} // namespace lift_00642660

// [0x00648200] sub_00648200 (25 bytes)
namespace lift_00648200 {
// @name sub_00648200
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_0065A9A0(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00648200(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_0065A9A0(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_00648200

// [0x00648510] sub_00648510 (25 bytes)
namespace lift_00648510 {
// @name sub_00648510
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_0065ACB0(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00648510(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_0065ACB0(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_00648510

// [0x00647E80]
namespace lift_00647E80 {
// @name sub_00647E80
// @summary Forwards the argument and the dereferenced field at +0xa4 to ext_007C60E0
// @field Class +0xa4 uint32_t* field_0xa4


extern uint32_t ext_007C60E0(uint32_t arg0, uint32_t arg1);

uint32_t __thiscall sub_00647E80(void* self, uint32_t arg0) {
    uint32_t* ptr = *reinterpret_cast<uint32_t**>(reinterpret_cast<uintptr_t>(self) + 0xa4);
    uint32_t val = *ptr;
    return ext_007C60E0(val, arg0);
}
} // namespace lift_00647E80

// [0x00648940] sub_00648940 (20 bytes)
namespace lift_00648940 {
// @name sub_00648940
// @summary Auto-lifted identical-shape clone of 0x004332B0 (Unknown::forwardToSubobjectsVfunc14).
namespace lift_004332B0 {
// Known callee 0x0043C8F0: sub_0043C8F0 (8B), takes its object in ECX (thiscall-style).
extern void __thiscall ext_0065BB70(void* self);
// Known callee 0x0044B780: sub_0044B780 (Auto-lifted identical-shape clone of 0x00675D60 (Unknown::forwardToChildVfunc14)).
extern void __thiscall ext_0065B5E0(void* self);

// @name Unknown::forwardToSubobjectsVfunc14
// @class Unknown
// @summary Passes the object at +0x108 to ext_0043C8F0, then tail-calls ext_0044B780 with the object at +0x100.
// @field Unknown +0x100 void* field_0x100 (tail-call target passed to ext_0044B780)
// @field Unknown +0x108 void* field_0x108 (argument passed to ext_0043C8F0)
void __thiscall fn_00648940(void* self) {
    ext_0065BB70(lift_field<void*>(self, 0x2C));
    ext_0065B5E0(lift_field<void*>(self, 0x30));
}
} // namespace lift_004332B0
} // namespace lift_00648940

// [0x00644F30] sub_00644F30 (29 bytes)
namespace lift_00644F30 {
// Known callee 0x00644F00: Unknown::forwardByteToNestedObject (owner class not identified) (Loads a nested object pointer from self, and if its +0x20c pointer is non-null, stores the byte argument at +0x230 of that object.)
extern void ext_00644F00(void* self, uint8_t value);

// @name Unknown::invokeNestedVirtualSlot0
// @class Unknown
// @summary Calls ext_00644F00(self, 0), then if self->+0x04 is non-null invokes virtual slot 0 of the embedded object at nested+0x08 with argument 1.
// @field Unknown +0x04 void* field_0x04
extern void fn_00644F30(void* self) {
    using Slot0Fn = void (*)(void* thisPtr, int arg);

    ext_00644F00(self, 0);

    void* nested = lift_field<void*>(self, 0x04);
    if (nested == nullptr) {
        return;
    }

    void* embedded = static_cast<char*>(nested) + 0x08;
    void* vtbl = lift_field<void*>(embedded, 0x00);
    Slot0Fn slot0 = lift_field<Slot0Fn>(vtbl, 0x00);
    slot0(embedded, 1);
}
} // namespace lift_00644F30

// [0x00648370]
namespace lift_00648370 {
// @name sub_00648370
// @summary Calls ext_0065A8C0 on field_0xa4 and forwards two arguments to ext_00647AE0 on this.
// @field Unknown +0xa4 uint32_t field_0xa4


void __thiscall ext_0065A8C0(void* self);
uint32_t __thiscall ext_00647AE0(void* self, uint32_t arg1, uint32_t arg2);

uint32_t __thiscall sub_00648370(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* field_0xa4 = *reinterpret_cast<void**>(base + 0xa4);
    ext_0065A8C0(field_0xa4);
    return ext_00647AE0(self, arg1, arg2);
}
} // namespace lift_00648370
