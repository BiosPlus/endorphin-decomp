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
#include <cstdint>
#include <cstring>
#include <stdexcept>

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

// [0x00648A60]
namespace lift_00648A60 {
// @name call_0x65B040_if_0x04_lt_0x08
// @summary Calls sub_0065B040 on field_0x30 with the float argument if field_0x28+0x04 < field_0x28+0x08.
// @field Self +0x30 void* field_0x30


extern float __thiscall ext_006488F0(const void* self);
extern float __thiscall ext_00648930(void* self);
extern void __thiscall ext_0065B040(void* self, float arg);

void __thiscall sub_00648A60(void* self, float arg) {
    float v04 = ext_00648930(self);
    float v08 = ext_006488F0(self);
    if (v08 > v04) {
        void* child = *reinterpret_cast<void* const*>(reinterpret_cast<const char*>(self) + 0x30);
        ext_0065B040(child, arg);
    }
}
} // namespace lift_00648A60

// [0x006489F0]
namespace lift_006489F0 {
extern float __thiscall ext_006488F0(const void* self);
extern float __thiscall ext_00648930(void* this_ptr);
extern void __thiscall ext_0065BF00(void* self, float value);

// @name updateField0x28IfGreater
// @summary Calls ext_0065BF00 on the object at +0x28 with value if ext_006488F0(this) > ext_00648930(this).
// @field unknown +0x28 void* field_0x28
void __thiscall sub_006489F0(void* this_ptr, float value) {
    float v1 = ext_00648930(this_ptr);
    float v2 = ext_006488F0(this_ptr);
    if (v2 > v1) {
        void* obj = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this_ptr) + 0x28);
        ext_0065BF00(obj, value);
    }
}
} // namespace lift_006489F0

// [0x0064CC60] sub_0064CC60 (41 bytes)
namespace lift_0064CC60 {
// @name sub_0064CC60
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0064B840(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0064CC60(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0064B840(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0064CC60

// [0x006408C0] sub_006408C0 (45 bytes)
namespace lift_006408C0 {
extern int mem_0092F67C;

// @name initRecord_ptrDefaultsWord0C
// @class Unknown
// @summary Initializes a 18-byte record at self: stores arg2 at +0x00, arg1 at +0x04 (defaulting to &mem_0092F67C when zero), arg0 at +0x08, zeroes +0x0C and the two flag bytes at +0x10/+0x11. Callee-cleans 12 bytes.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x11 uint8_t field_0x11
void fn_006408C0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    lift_field<uint32_t>(self, 0x00) = arg2;
    lift_field<uint32_t>(self, 0x04) = (arg1 != 0)
        ? arg1
        : static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092F67C));
    lift_field<uint32_t>(self, 0x08) = arg0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint8_t>(self, 0x10) = 0;
    lift_field<uint8_t>(self, 0x11) = 0;
}
} // namespace lift_006408C0

// [0x00649010] sub_00649010 (49 bytes)
namespace lift_00649010 {
// @name Unknown::forwardFloatToVfunc3Loop
// @summary For i in [3, 6): calls vtable slot 3 of this with (this, (double)x, i); thiscall, callee pops 4 bytes.
// @field Unknown +0x00 void** vtable
void fn_00649010(void* self, float x) {
    using SlotFn = void (*)(void* self, double value, int32_t index);

    for (int32_t i = 3; i < 6; ++i) {
        // Original reloads the vtable pointer on every iteration.
        void** vtbl = *reinterpret_cast<void***>(self);
        SlotFn fn = reinterpret_cast<SlotFn>(vtbl[3]);
        fn(self, static_cast<double>(x), i);
    }
}
} // namespace lift_00649010

// [0x00640CB0]
namespace lift_00640CB0 {
// @name Unknown::IncrementAndFlushOnce
// @class Unknown
// @summary Increments the counter at +0x0C; if flag bit 0 at +0x00 is clear, runs the newline helper and the flush helper, then clears the one-shot byte at +0x10.
// @field Unknown +0x00 uint8_t flags
// @field Unknown +0x0C uint32_t counter
// @field Unknown +0x10 uint8_t oneShot

extern void __thiscall ext_00640940(void* self);
extern void __thiscall ext_006408F0(void* self);

extern void __thiscall fn_00640CB0(void* ecx) {
    lift_field<uint32_t>(ecx, 0x0C) += 1;

    if ((lift_field<uint8_t>(ecx, 0x00) & 0x1) == 0) {
        ext_00640940(ecx);
        ext_006408F0(ecx);
        lift_field<uint8_t>(ecx, 0x10) = 0;
    }
}
} // namespace lift_00640CB0

// [0x00640CD0] sub_00640CD0 (36 bytes)
namespace lift_00640CD0 {
// Known callee 0x00640940: Unknown::AppendNewlineOnce (If flag bit 0 is clear and the one-shot byte at +0x11 is clear, appends '\n' to the std::string referenced at +0x08 and sets +0x11.)
extern void __thiscall ext_00640940(void* self);
// Known callee 0x006408F0: sub_006408F0 (Clears the flag at +0x11, then appends the C-string at +0x04 to the string at +0x08 (count-1) times, with count read from +0x0C.)
extern void __thiscall ext_006408F0(void* self);

// @name Unknown::flushOnceAndDecrementCount
// @class Unknown
// @summary If flag bit 0 is clear: when the one-shot byte at +0x10 is set, runs AppendNewlineOnce and the flush helper; then decrements the count at +0x0C and sets the one-shot byte at +0x10.
// @field Unknown +0x00 uint8_t field_0x00 (bit 0 = suppress flag)
// @field Unknown +0x0C uint32_t field_0x0C (count, decremented)
// @field Unknown +0x10 uint8_t field_0x10 (one-shot byte)
extern void __thiscall fn_00640CD0(void* self) {
    if (lift_field<uint8_t>(self, 0x00) & 0x01) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x10) != 0) {
        ext_00640940(self);
        ext_006408F0(self);
    }
    lift_field<uint32_t>(self, 0x0C) -= 1;
    lift_field<uint8_t>(self, 0x10) = 1;
}
} // namespace lift_00640CD0

// [0x00648A20] sub_00648A20 (55 bytes)
namespace lift_00648A20 {
extern float __thiscall ext_00648930(void* self);
extern float __thiscall ext_006488F0(const void* self);
extern void __thiscall ext_0065BF30(void* self, float a, float b, float c);

// @name forwardThreeFloatsToChildIfFieldGreater
// @class unknown
// @summary If ext_006488F0(this) > ext_00648930(this), forwards three float args to ext_0065BF30 on the object at +0x28.
// @field unknown +0x28 void* field_0x28
void __thiscall fn_00648A20(void* self, float a, float b, float c) {
    float v04 = ext_00648930(self);
    float v08 = ext_006488F0(self);
    if (v08 > v04) {
        void* child = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(self) + 0x28);
        ext_0065BF30(child, a, b, c);
    }
}
} // namespace lift_00648A20

// [0x006426F0] sub_006426F0 (36 bytes)
namespace lift_006426F0 {
// @name Unknown::ForwardFloat3ToChildIndirectField
// @summary Forwards three float arguments to ext_00648A20 using the object at self+0x0C as this.
// @field Unknown +0x0C void* field_0x0C

extern uint32_t __thiscall ext_00648A20(void* self, float a1, float a2, float a3);

uint32_t __thiscall fn_006426F0(void* self, float a1, float a2, float a3) {
    void* child = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x0C);
    return ext_00648A20(child, a1, a2, a3);
}
} // namespace lift_006426F0

// [0x0064DEE0] sub_0064DEE0 (62 bytes)
namespace lift_0064DEE0 {
void ext_00693F40(void* subobject, void* arg);
void ext_007C5BD0(uint32_t value, void* out);

// @name Unknown::AccumulateAndDispatchField64
// @class Unknown
// @summary Zeroes a local float, fills it via sub_00693F40 from arg, then calls sub_007C5BD0 with self+0x64 and the float's address.
// @field Unknown +0x64 uint32_t field_0x64
void fn_0064DEE0(void* self, void* arg) {
    float accumulator = 0.0f;
    ext_00693F40(&accumulator, arg);
    uint32_t field = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x64);
    ext_007C5BD0(field, &accumulator);
}
} // namespace lift_0064DEE0

// [0x0064DF20] sub_0064DF20 (62 bytes)
namespace lift_0064DF20 {
// @name sub_0064DF20
// @summary Auto-lifted identical-shape clone of 0x0064DEE0 (Unknown::AccumulateAndDispatchField64).
namespace lift_0064DEE0 {
void ext_00693C30(void* subobject, void* arg);
void ext_007C5BD0(uint32_t value, void* out);

// @name Unknown::AccumulateAndDispatchField64
// @class Unknown
// @summary Zeroes a local float, fills it via sub_00693F40 from arg, then calls sub_007C5BD0 with self+0x64 and the float's address.
// @field Unknown +0x64 uint32_t field_0x64
void fn_0064DF20(void* self, void* arg) {
    float accumulator = 0.0f;
    ext_00693C30(&accumulator, arg);
    uint32_t field = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x64);
    ext_007C5BD0(field, &accumulator);
}
} // namespace lift_0064DEE0
} // namespace lift_0064DF20

// [0x00649730]
namespace lift_00649730 {
// @name Unknown::CopyRange24
// @class Unknown
// @summary Copies a range of 24-byte (6-dword) records from [src_begin, src_end) to dst.
// @field Unknown +0x00 u32 field_0x00
// @field Unknown +0x04 u32 field_0x04
// @field Unknown +0x08 u32 field_0x08
// @field Unknown +0x0C u32 field_0x0C
// @field Unknown +0x10 u32 field_0x10
// @field Unknown +0x14 u32 field_0x14

void CopyRange24(const uint32_t* src_begin, const uint32_t* src_end, uint32_t* dst) {
    if (src_begin == src_end) {
        return;
    }
    const uint8_t* src = reinterpret_cast<const uint8_t*>(src_begin);
    const uint8_t* end = reinterpret_cast<const uint8_t*>(src_end);
    uint8_t* out = reinterpret_cast<uint8_t*>(dst);
    do {
        for (int i = 0; i < 24; i += 4) {
            uint32_t v;
            std::memcpy(&v, src + i, sizeof(v));
            std::memcpy(out + i, &v, sizeof(v));
        }
        src += 24;
        out += 24;
    } while (src != end);
}
} // namespace lift_00649730

// [0x0064B840] sub_0064B840 (67 bytes)
namespace lift_0064B840 {
// @name copyRange0x18
// @summary Copies 0x18-byte records from [first, last) to dst; if dst is null, only advances the source (no copy).
void fn_0064B840(const void* first, const void* last, void* dst) {
    if (first == last) {
        return;
    }
    const uint8_t* src = static_cast<const uint8_t*>(first);
    const uint8_t* end = static_cast<const uint8_t*>(last);
    uint8_t* out = static_cast<uint8_t*>(dst);
    if (out == nullptr) {
        do {
            src += 0x18;
        } while (src != end);
        return;
    }
    do {
        std::memcpy(out, src, 0x18);
        src += 0x18;
        out += 0x18;
    } while (src != end);
}
} // namespace lift_0064B840

// [0x0064C900] sub_0064C900 (67 bytes)
namespace lift_0064C900 {
// @name fillRecordsFromSource
// @summary Copies a 24-byte source record into each of `count` consecutive 24-byte destination slots; a null destination pointer skips that slot's copy but still advances.
void fn_0064C900(void* dst, uint32_t count, const void* src) {
    uintptr_t out = reinterpret_cast<uintptr_t>(dst);
    while (count != 0) {
        if (out != 0) {
            std::memcpy(reinterpret_cast<void*>(out), src, 0x18);
        }
        --count;
        out += 0x18;
    }
}
} // namespace lift_0064C900

// [0x0064CB20] sub_0064CB20 (54 bytes)
namespace lift_0064CB20 {
extern void __cdecl ext_0064C900(void* dst, uint32_t count, const void* src);

// @name fillRecordsAndGetEnd_0064CB20
// @summary Fills `count` consecutive 24-byte slots at dst from src and returns the one-past-end pointer (dst + 24 * count).
void* __stdcall fn_0064CB20(void* dst, uint32_t count, const void* src) {
    ext_0064C900(dst, count, src);
    return static_cast<char*>(dst) + static_cast<size_t>(count) * 24u;
}
} // namespace lift_0064CB20

// [0x006488A0] Unknown::refreshSubobjects (68 bytes)
namespace lift_006488A0 {
// Known callee 0x0065B100: sub_0065B100 (21B). Thiscall; ecx = this+0x30; no stack args.
extern void ext_0065B100(void* self);
// Known callee 0x007C8730: sub_007C8730 (22B). Cdecl; one dword arg = [[this+0x2c]+0x10].
extern void ext_007C8730(uint32_t arg);
// Known callee 0x0065BD50: sub_0065BD50 (39B). ecx = [this+0x2c]; one stack arg = this (callee cleans).
extern void ext_0065BD50(void* self, void* arg);
// Known callee 0x0065BED0: sub_0065BED0 (24B). Thiscall; ecx = this+0x28; no stack args.
extern void ext_0065BED0(void* self);
// Known callee 0x0065B0F0: sub_0065B0F0 (11B). Thiscall; ecx = this+0x30; no stack args.
extern void ext_0065B0F0(void* self);
// Known callee 0x007C8750: sub_007C8750 (180B). Cdecl; one dword arg = [[this+0x2c]+0x10].
extern void ext_007C8750(uint32_t arg);

// @name Unknown::refreshSubobjects
// @class Unknown
// @summary Calls two sub-object helpers on this+0x28/+0x30, passes the object at this+0x2c to two others, and forwards its +0x10 dword to two cdecl helpers; semantics not recovered.
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x2c void* field_0x2c
// @field Unknown +0x30 void* field_0x30
void fn_006488A0(void* self) {
    ext_0065B100(lift_field<void*>(self, 0x30));

    uint32_t first = lift_field<uint32_t>(lift_field<void*>(self, 0x2c), 0x10);
    ext_007C8730(first);

    ext_0065BD50(lift_field<void*>(self, 0x2c), self);
    ext_0065BED0(lift_field<void*>(self, 0x28));
    ext_0065B0F0(lift_field<void*>(self, 0x30));

    uint32_t second = lift_field<uint32_t>(lift_field<void*>(self, 0x2c), 0x10);
    ext_007C8750(second);
}
} // namespace lift_006488A0

// [0x00647CE0] sub_00647CE0 (70 bytes)
namespace lift_00647CE0 {
extern void ext_007C6880(int32_t ctx, float ax, float ay, float az, float bx, float by, float bz);

// @name Unknown::ForwardVectorPair
// @class Unknown
// @summary Loads two stack-passed vec3 pointers and forwards their components plus a context dword from this+0xA4 to ext_007C6880.
// @field Unknown +0xa4 void* field_0xa4
void fn_00647CE0(void* self, const float* a, const float* b) {
    void* ctxPtr = lift_field<void*>(self, 0xa4);
    int32_t ctx = *reinterpret_cast<const int32_t*>(ctxPtr);
    ext_007C6880(ctx, a[0], a[1], a[2], b[0], b[1], b[2]);
}
} // namespace lift_00647CE0

// [0x00647D60] sub_00647D60 (70 bytes)
namespace lift_00647D60 {
// @name sub_00647D60
// @summary Auto-lifted identical-shape clone of 0x00647CE0 (Unknown::ForwardVectorPair).
namespace lift_00647CE0 {
extern void ext_007C69B0(int32_t ctx, float ax, float ay, float az, float bx, float by, float bz);

// @name Unknown::ForwardVectorPair
// @class Unknown
// @summary Loads two stack-passed vec3 pointers and forwards their components plus a context dword from this+0xA4 to ext_007C6880.
// @field Unknown +0xa4 void* field_0xa4
void fn_00647D60(void* self, const float* a, const float* b) {
    void* ctxPtr = lift_field<void*>(self, 0xa4);
    int32_t ctx = *reinterpret_cast<const int32_t*>(ctxPtr);
    ext_007C69B0(ctx, a[0], a[1], a[2], b[0], b[1], b[2]);
}
} // namespace lift_00647CE0
} // namespace lift_00647D60

// [0x0064CA20] sub_0064CA20 (43 bytes)
namespace lift_0064CA20 {
// @name sub_0064CA20
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0064B7E0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0064CA20(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0064B7E0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0064CA20

// [0x006483A0] sub_006483A0 (85 bytes)
namespace lift_006483A0 {
extern void __thiscall ext_00647BC0(void* self, uint32_t arg);
extern void __thiscall ext_00647E20(void* self, uint32_t arg);

// @name Unknown::addVec3AndForward_006483A0
// @class Unknown
// @summary Zeroes a local float[3], lets sub_00647E20 fill it for self, adds the caller's 3-float vector into it, then passes it to sub_00647BC0 on self.
void __thiscall fn_006483A0(void* self, uint32_t arg) {
    float v[3] = {0.0f, 0.0f, 0.0f};
    const float* p = reinterpret_cast<const float*>(static_cast<uintptr_t>(arg));
    ext_00647E20(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(v)));
    v[0] = p[0] + v[0];
    v[1] = p[1] + v[1];
    v[2] = p[2] + v[2];
    ext_00647BC0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(v)));
}
} // namespace lift_006483A0

// [0x0064C0A0] sub_0064C0A0 (86 bytes)
namespace lift_0064C0A0 {
// Known callee 0x00649730: Unknown::CopyRange24 (Copies a range of 24-byte (6-dword) records from [src_begin, src_end) to dst.)
extern void ext_00649730(const uint32_t* src_begin, const uint32_t* src_end, uint32_t* dst);

// @name Unknown::CopyRange24AndAdvance_0064C0A0
// @summary Copies a range of 24-byte records via CopyRange24, then returns dst advanced by the record count (end-begin)/24.
uint32_t* fn_0064C0A0(const uint32_t* src_begin, const uint32_t* src_end, uint32_t* dst) {
    ext_00649730(src_begin, src_end, dst);

    // Byte distance between the two source pointers, as a signed 32-bit value.
    const int32_t diff = static_cast<int32_t>(
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src_end) - reinterpret_cast<uintptr_t>(src_begin)));

    // Number of 24-byte records; advancing a uint32_t* by 6 elements is 24 bytes.
    const int32_t count = diff / 24;
    return dst + 6 * count;
}
} // namespace lift_0064C0A0

// [0x0064B0C0] sub_0064B0C0 (87 bytes)
namespace lift_0064B0C0 {
// @name sub_0064B0C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557A8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557A4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B0C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AFFDEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557A8 & 1u) == 0) {
        mem_00B557A8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557A4, frame[0]);
        mem_00B557A4 = 0x97E3ECu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557A4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B0C0

// [0x0064B120] sub_0064B120 (87 bytes)
namespace lift_0064B120 {
// @name sub_0064B120
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557B0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557AC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B120() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AFFFEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557B0 & 1u) == 0) {
        mem_00B557B0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557AC, frame[0]);
        mem_00B557AC = 0x97E4C4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557AC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B120

// [0x0064B180] sub_0064B180 (87 bytes)
namespace lift_0064B180 {
// @name sub_0064B180
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557B8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557B4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B180() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B001Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557B8 & 1u) == 0) {
        mem_00B557B8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557B4, frame[0]);
        mem_00B557B4 = 0x97E59Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557B4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B180

// [0x0064B1E0] sub_0064B1E0 (87 bytes)
namespace lift_0064B1E0 {
// @name sub_0064B1E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557C0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557BC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B1E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B003Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557C0 & 1u) == 0) {
        mem_00B557C0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557BC, frame[0]);
        mem_00B557BC = 0x97E674u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557BC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B1E0

// [0x0064B240] sub_0064B240 (87 bytes)
namespace lift_0064B240 {
// @name sub_0064B240
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557C8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557C4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B240() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B005Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557C8 & 1u) == 0) {
        mem_00B557C8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557C4, frame[0]);
        mem_00B557C4 = 0x97E74Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557C4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B240

// [0x0064B2A0] sub_0064B2A0 (87 bytes)
namespace lift_0064B2A0 {
// @name sub_0064B2A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557D0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557CC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B2A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B007Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557D0 & 1u) == 0) {
        mem_00B557D0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557CC, frame[0]);
        mem_00B557CC = 0x97E824u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557CC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B2A0

// [0x0064B300] sub_0064B300 (87 bytes)
namespace lift_0064B300 {
// @name sub_0064B300
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557D8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557D4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B300() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B009Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557D8 & 1u) == 0) {
        mem_00B557D8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557D4, frame[0]);
        mem_00B557D4 = 0x97E8FCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557D4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B300

// [0x0064B360] sub_0064B360 (87 bytes)
namespace lift_0064B360 {
// @name sub_0064B360
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557E0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557DC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B360() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B00BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557E0 & 1u) == 0) {
        mem_00B557E0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557DC, frame[0]);
        mem_00B557DC = 0x97E9D4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557DC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B360

// [0x0064B3C0] sub_0064B3C0 (87 bytes)
namespace lift_0064B3C0 {
// @name sub_0064B3C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557E8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557E4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B3C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B00DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557E8 & 1u) == 0) {
        mem_00B557E8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557E4, frame[0]);
        mem_00B557E4 = 0x97EAACu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557E4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B3C0

// [0x0064B420] sub_0064B420 (87 bytes)
namespace lift_0064B420 {
// @name sub_0064B420
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557F0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557EC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B420() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B00FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557F0 & 1u) == 0) {
        mem_00B557F0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557EC, frame[0]);
        mem_00B557EC = 0x97EB84u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557EC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B420

// [0x0064B480] sub_0064B480 (87 bytes)
namespace lift_0064B480 {
// @name sub_0064B480
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B557F8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557F4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B480() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B011Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B557F8 & 1u) == 0) {
        mem_00B557F8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557F4, frame[0]);
        mem_00B557F4 = 0x97EC5Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557F4;
}
} // namespace lift_004CAE30
} // namespace lift_0064B480

// [0x0064B4E0] sub_0064B4E0 (87 bytes)
namespace lift_0064B4E0 {
// @name sub_0064B4E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55800;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B557FC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B4E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B013Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55800 & 1u) == 0) {
        mem_00B55800 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B557FC, frame[0]);
        mem_00B557FC = 0x97ED34u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B557FC;
}
} // namespace lift_004CAE30
} // namespace lift_0064B4E0

// [0x0064B540] sub_0064B540 (87 bytes)
namespace lift_0064B540 {
// @name sub_0064B540
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55808;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B55804;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B540() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B015Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55808 & 1u) == 0) {
        mem_00B55808 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B55804, frame[0]);
        mem_00B55804 = 0x97EE0Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B55804;
}
} // namespace lift_004CAE30
} // namespace lift_0064B540

// [0x0064B5A0] sub_0064B5A0 (87 bytes)
namespace lift_0064B5A0 {
// @name sub_0064B5A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55810;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5580C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B5A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B017Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55810 & 1u) == 0) {
        mem_00B55810 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5580C, frame[0]);
        mem_00B5580C = 0x97EEE4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5580C;
}
} // namespace lift_004CAE30
} // namespace lift_0064B5A0

// [0x0064B600] sub_0064B600 (87 bytes)
namespace lift_0064B600 {
// @name sub_0064B600
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55818;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B55814;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B600() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B019Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55818 & 1u) == 0) {
        mem_00B55818 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B55814, frame[0]);
        mem_00B55814 = 0x97EFBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B55814;
}
} // namespace lift_004CAE30
} // namespace lift_0064B600

// [0x0064B660] sub_0064B660 (87 bytes)
namespace lift_0064B660 {
// @name sub_0064B660
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55820;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5581C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B660() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B01BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55820 & 1u) == 0) {
        mem_00B55820 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5581C, frame[0]);
        mem_00B5581C = 0x97F094u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5581C;
}
} // namespace lift_004CAE30
} // namespace lift_0064B660

// [0x0064B6C0] sub_0064B6C0 (87 bytes)
namespace lift_0064B6C0 {
// @name sub_0064B6C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55828;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B55824;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B6C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B01DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55828 & 1u) == 0) {
        mem_00B55828 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B55824, frame[0]);
        mem_00B55824 = 0x97F16Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B55824;
}
} // namespace lift_004CAE30
} // namespace lift_0064B6C0

// [0x0064B720] sub_0064B720 (87 bytes)
namespace lift_0064B720 {
// @name sub_0064B720
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55830;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5582C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B720() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B01FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55830 & 1u) == 0) {
        mem_00B55830 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5582C, frame[0]);
        mem_00B5582C = 0x97F244u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5582C;
}
} // namespace lift_004CAE30
} // namespace lift_0064B720

// [0x0064B780] sub_0064B780 (87 bytes)
namespace lift_0064B780 {
// @name sub_0064B780
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B55838;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B55834;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0064B780() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B021Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B55838 & 1u) == 0) {
        mem_00B55838 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B55834, frame[0]);
        mem_00B55834 = 0x97F31Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B55834;
}
} // namespace lift_004CAE30
} // namespace lift_0064B780

// [0x00648DB0]
namespace lift_00648DB0 {
// @name Owner::eraseTailRange
// @class Owner
// @summary Erases the element range [vec.begin, B+0x20) from the vector embedded at B+0x18, where B = this->field_0x30.
// @field Owner +0x28 void* field_0x28
// @field Owner +0x30 void* field_0x30

extern void* ext_0065BEF0(void* this_ptr);
extern void* ext_00596660(void* this_ptr, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
extern uint32_t mem_00925134;

// Placeholder for the CRT invalid-parameter handler stored in the import slot.
static inline void invalid_parameter_noinfo_call() {
    using handler_t = void (*)();
    reinterpret_cast<handler_t>(static_cast<uintptr_t>(mem_00925134))();
}

void Owner_eraseTailRange(void* this_ptr) {
    uint8_t* self = static_cast<uint8_t*>(this_ptr);

    // Call into sub-object at this+0x28 (result unused).
    ext_0065BEF0(*reinterpret_cast<void**>(self + 0x28));

    uint8_t* b = *reinterpret_cast<uint8_t**>(self + 0x30);
    uint32_t last_ptr = *reinterpret_cast<uint32_t*>(b + 0x20);

    uint8_t* vec = b + 0x18;   // vector header: +0x4 begin, +0x8 end
    uint32_t vec_begin = *reinterpret_cast<uint32_t*>(vec + 0x4);
    uint32_t vec_end = *reinterpret_cast<uint32_t*>(vec + 0x8);

    if (vec_begin > last_ptr) {
        invalid_parameter_noinfo_call();
    }
    uint32_t first_ptr = vec_begin;
    if (first_ptr > vec_end) {
        invalid_parameter_noinfo_call();
    }

    uint32_t out_iter[2] = {0, 0};
    uint32_t container = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec));
    ext_00596660(vec, out_iter, container, first_ptr, container, last_ptr);
}
} // namespace lift_00648DB0

// [0x00648800] sub_00648800 (74 bytes)
namespace lift_00648800 {
// Callee 0x0065ACC0: __thiscall taking the object pointer in ecx; return value unused.
extern void ext_0065ACC0(uint32_t this_ptr);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
// __thiscall: this in ecx, then stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern uint32_t* ext_00596660(uint32_t this_ptr, uint32_t out_iter, uint32_t first_container,
                                  uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// IAT slot holding _invalid_parameter_noinfo (used as the failure path for bad range checks).
extern void (*mem_00925134)();

// @name Unknown::fn_00648800 (range-erase helper; descriptive name pending class identification)
// @class Unknown
// @summary Resets the flag at +0x46, validates the range [+0x4C, +0x50] and erases it from the vector at +0x48.
// @field Unknown +0x46 uint8_t field_0x46
// @field Unknown +0x4C uint32_t field_0x4C
// @field Unknown +0x50 uint32_t field_0x50
// @field Unknown +0x5C void* field_0x5C
void fn_00648800(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t base_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base));

    uint32_t inner_ptr = 0;
    std::memcpy(&inner_ptr, base + 0x5C, sizeof(inner_ptr));
    ext_0065ACC0(inner_ptr);

    base[0x46] = 0;

    uint32_t limit = 0;
    std::memcpy(&limit, base + 0x50, sizeof(limit));

    const uint32_t vec_addr = base_addr + 0x48;

    uint32_t begin = 0;
    std::memcpy(&begin, base + 0x4C, sizeof(begin));
    if (begin > limit) {
        mem_00925134();
    }

    // The second bounds check in the original repeats the same comparison
    // on unchanged memory, so it is folded into the one above.

    uint32_t out_iter[2] = {0, 0};
    ext_00596660(vec_addr, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out_iter)),
                 vec_addr, begin, vec_addr, limit);
}
} // namespace lift_00648800

// [0x00642600] sub_00642600 (19 bytes)
namespace lift_00642600 {
// Known callee 0x00648DB0: Owner::eraseTailRange (Erases the element range [vec.begin, B+0x20) from the vector embedded at B+0x18, where B = this->field_0x30.)
extern void __fastcall ext_00648DB0(void* self);
// Known callee 0x006425E0: sub_006425E0 (Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648940.)
extern void __fastcall ext_006425E0(void* self);

// @name forwardEraseTailRange
// @class Unknown
// @summary Erases the tail range of the subobject at +0x0C, then forwards to ext_006425E0 with the same this.
// @field Unknown +0x0C void* field_0x0C
void fn_00642600(void* self) {
    void* subobject = lift_field<void*>(self, 0x0C);
    ext_00648DB0(subobject);
    ext_006425E0(self);
}
} // namespace lift_00642600

// [0x00649840] sub_00649840 (93 bytes)
namespace lift_00649840 {
// Known callee 0x00648F90: RelationshipRPROMagnet::vfunc_50 (Releases and clears field_0x94 if non-null after invoking vtable+0x1c)
extern void __thiscall ext_00648F90(void* self);
// Known callee 0x00645EB0: Unknown::ResetHandleAndForwardSubobject (Writes three rdata pointers into the object, releases the handle at +0x10 if non-null, zeroes +0x10..+0x18, then tail-calls fn_0065F440 on the subobject at +0x8.)
extern void __fastcall ext_00645EB0(void* self);

// @name Unknown::ResetVtablesAndRelease
// @class Unknown
// @summary Installs three vtable pointers into the object, calls vfunc_50 on it via ext_00648F90, then runs ext_00645EB0 to release the handle at +0x10 and forward to the subobject.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_00649840(void* self) {
    // The SEH frame setup/teardown and unwind-state writes in the original are
    // compiler bookkeeping and have no effect on the object; they are omitted.
    lift_field<uint32_t>(self, 0x00) = 0x0097DD2C;
    lift_field<uint32_t>(self, 0x04) = 0x0097DD14;
    lift_field<uint32_t>(self, 0x08) = 0x0097DCE0;

    ext_00648F90(self);
    ext_00645EB0(self);
}
} // namespace lift_00649840

// [0x0064F950] sub_0064F950 (93 bytes)
namespace lift_0064F950 {
// @name sub_0064F950
// @summary Auto-lifted identical-shape clone of 0x00649840 (Unknown::ResetVtablesAndRelease).
namespace lift_00649840 {
// Known callee 0x00648F90: RelationshipRPROMagnet::vfunc_50 (Releases and clears field_0x94 if non-null after invoking vtable+0x1c)
extern void __thiscall ext_0064E320(void* self);
// Known callee 0x00645EB0: Unknown::ResetHandleAndForwardSubobject (Writes three rdata pointers into the object, releases the handle at +0x10 if non-null, zeroes +0x10..+0x18, then tail-calls fn_0065F440 on the subobject at +0x8.)
extern void __fastcall ext_00645EB0(void* self);

// @name Unknown::ResetVtablesAndRelease
// @class Unknown
// @summary Installs three vtable pointers into the object, calls vfunc_50 on it via ext_00648F90, then runs ext_00645EB0 to release the handle at +0x10 and forward to the subobject.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_0064F950(void* self) {
    // The SEH frame setup/teardown and unwind-state writes in the original are
    // compiler bookkeeping and have no effect on the object; they are omitted.
    lift_field<uint32_t>(self, 0x00) = 0x97E0BC;
    lift_field<uint32_t>(self, 0x04) = 0x97E0A4;
    lift_field<uint32_t>(self, 0x08) = 0x97E070;

    ext_0064E320(self);
    ext_00645EB0(self);
}
} // namespace lift_00649840
} // namespace lift_0064F950

// [0x00645B50] sub_00645B50 (95 bytes)
namespace lift_00645B50 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Constructs the static string object at mem_00B5446C from the literal at 0x00A9BCE8.
extern void* ext_0066AD10(void* out_str, const char* init);
// Registers the static object's destructor (0x00920910) for process exit.
extern void ext_006A6C87(void* dtor);
extern int mem_00B54488;   // guard byte: bit 0 = initialized
extern int mem_00B5446C;   // static object storage

// @name GetOnceInitString_00645B50
// @summary Thread-unsafe one-time initializer for a static string global; returns its address.
void* fn_00645B50(void) {
    if ((mem_00B54488 & 1) == 0) {
        mem_00B54488 |= 1;
        ext_0066AD10(&mem_00B5446C, reinterpret_cast<const char*>(0x00A9BCE8));
        ext_006A6C87(reinterpret_cast<void*>(0x00920910));
    }
    return &mem_00B5446C;
}
} // namespace lift_00645B50

// [0x0064B7E0] sub_0064B7E0 (95 bytes)
namespace lift_0064B7E0 {
// Known callee 0x00649770: copyBackward24 (Copies a range of 24-byte elements backward from [first, last) to [..., result).)
extern uint32_t ext_00649770(uint32_t first, uint32_t last, uint32_t result);

// @name copyBackward24AndAdjust
// @summary Calls copyBackward24(first, last, result), then returns result minus 24 * (scaled (last - first) quotient).
uint32_t fn_0064B7E0(uint32_t first, uint32_t last, uint32_t result) {
    ext_00649770(first, last, result);

    // Replicates the original multiply-by-0x2AAAAAAB, arithmetic shift right by 2,
    // sign-correction, and *24 sequence exactly.
    const int32_t d = static_cast<int32_t>(last - first);
    const int64_t prod = static_cast<int64_t>(d) * static_cast<int64_t>(static_cast<int32_t>(0x2AAAAAABu));
    int32_t q = static_cast<int32_t>(prod >> 32) >> 2;
    q += static_cast<int32_t>(static_cast<uint32_t>(q) >> 31);

    return result - static_cast<uint32_t>(q) * 24u;
}
} // namespace lift_0064B7E0

// [0x00648790] sub_00648790 (103 bytes)
namespace lift_00648790 {
// Known callee 0x0065ACB0: sub_0065ACB0 (This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0065F2A0.)
extern void ext_0065ACB0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);

// @name Unknown::ReleaseOwnedPointers
// @class Unknown
// @summary Releases the pointers at +0x5C (via sub_0065ACB0 then ord_764) and +0x4C (via ord_764), then nulls +0x4C, +0x50 and +0x54.
// @field Unknown +0x4C void* ownedPtrA
// @field Unknown +0x50 field_0x50 field_0x50
// @field Unknown +0x54 field_0x54 field_0x54
// @field Unknown +0x5C void* ownedPtrB
void fn_00648790(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    void** ptrA = reinterpret_cast<void**>(base + 0x4C);
    void** ptrB = reinterpret_cast<void**>(base + 0x5C);
    void** field50 = reinterpret_cast<void**>(base + 0x50);
    void** field54 = reinterpret_cast<void**>(base + 0x54);

    void* b = *ptrB;
    if (b != nullptr) {
        ext_0065ACB0(b);
        ext_006A5C5C(b);
    }

    void* a = *ptrA;
    if (a != nullptr) {
        ext_006A5C5C(a);
    }

    *ptrA = nullptr;
    *field50 = nullptr;
    *field54 = nullptr;
}
} // namespace lift_00648790

// [0x006452E0] sub_006452E0 (103 bytes)
namespace lift_006452E0 {
// Known callee 0x00647F00: sub_00647F00 (Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).)
// Takes its receiver in ecx and returns a pointer to a 4x4 float matrix.
extern void* ext_00647F00(void* self);

// @name Unknown::OffsetMatrixTranslationAndDispatch
// @class Unknown
// @summary Copies a 4x4 matrix from a sub-object, adds (dx, dy, dz) to its translation row, and forwards it to a virtual method on this->field_0x04.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04

namespace {

// 32-bit pointer load: the target stores pointers as 4-byte fields.
inline void* load_ptr(const void* base, ptrdiff_t offset) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, offset)));
}

// Virtual method at vtable slot 0xAC: thiscall with one stack argument, returns a 32-bit value.
using MatrixMethod = uint32_t (*)(void* self, const float* matrix);

} // namespace

uint32_t fn_006452E0(void* self, float dx, float dy, float dz, uint32_t /*unused_stack_arg*/) {
    // Resolve the receiver chain: this->field_0x00 -> +0x158 -> +0xAC.
    void* p = load_ptr(self, 0x00);
    void* q = load_ptr(p, 0x158);
    void* receiver = load_ptr(q, 0xAC);

    // Fetch the source matrix and copy it locally (16 floats).
    void* src = ext_00647F00(receiver);
    float matrix[16];
    std::memcpy(matrix, src, sizeof(matrix));

    // Offset the translation row (elements 12..14).
    matrix[12] = dx + matrix[12];
    matrix[13] = dy + matrix[13];
    matrix[14] = dz + matrix[14];

    // Dispatch to vtable slot 0xAC of this->field_0x04.
    void* sink = load_ptr(self, 0x04);
    void* sink_vtbl = load_ptr(sink, 0x00);
    uint32_t slot = lift_field<uint32_t>(sink_vtbl, 0xAC);
    auto method = reinterpret_cast<MatrixMethod>(static_cast<uintptr_t>(slot));
    return method(sink, matrix);
}
} // namespace lift_006452E0

// [0x00641F10]
namespace lift_00641F10 {
// @name collapseWhitespace
// @summary Collapses contiguous runs of delimiter characters in a string into a single space.
// @field std_string +0x14 uint32_t size


extern uint32_t mem_00925068;
extern uint32_t mem_00924EC4;
extern uint32_t mem_00925060;
extern uint32_t mem_0092505C;

using FnFindFirst = uint32_t(__thiscall*)(void* self, uint32_t ptr, uint32_t off, uint32_t count);
using FnReplace = void*(__thiscall*)(void* self, uint32_t off, uint32_t count, uint32_t n, uint8_t ch);

void sub_00641F10(uint32_t str_ptr) {
    uint32_t pos = 0;
    uint32_t size = *(uint32_t*)(uintptr_t)(str_ptr + 0x14);
    if (size == 0) {
        return;
    }

    auto fn_find_first_of = (FnFindFirst)(uintptr_t)mem_00925068;
    auto fn_find_first_not_of = (FnFindFirst)(uintptr_t)mem_00925060;
    auto fn_replace = (FnReplace)(uintptr_t)mem_0092505C;
    uint32_t npos = *(uint32_t*)(uintptr_t)mem_00924EC4;

    while (pos < *(uint32_t*)(uintptr_t)(str_ptr + 0x14)) {
        uint32_t first = fn_find_first_of((void*)(uintptr_t)str_ptr, 0x0097CDACu, pos, 4);
        if (first == npos) {
            break;
        }
        uint32_t next_non = fn_find_first_not_of((void*)(uintptr_t)str_ptr, 0x0097CDACu, first, 4);
        if (next_non == npos) {
            uint32_t cur_size = *(uint32_t*)(uintptr_t)(str_ptr + 0x14);
            fn_replace((void*)(uintptr_t)str_ptr, first, cur_size - first, 1, 0x20);
            break;
        }
        fn_replace((void*)(uintptr_t)str_ptr, first, next_non - first, 1, 0x20);
        pos = first + 1;
    }
}
} // namespace lift_00641F10

// [0x00640740]
namespace lift_00640740 {
// @name sub_00640740
// @summary Allocates a 0x3C-byte object, constructs it with arg0 and (self + 0x04), registers it via ext_006406D0, and returns it.
// @field unknown +0x04 uint8_t field_0x04


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_0063F600(void* self, uint32_t arg1, uint32_t arg2);
extern void __thiscall ext_006406D0(void* self, uint32_t arg0);

void* __thiscall fn_00640740(void* self, uint32_t arg0) {
    void* mem = ext_006A5C62(0x3C);
    void* obj = nullptr;
    if (mem != nullptr) {
        uint32_t field_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x04));
        obj = ext_0063F600(mem, arg0, field_ptr);
    }
    ext_006406D0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj)));
    return obj;
}
} // namespace lift_00640740

// [0x006407C0]
namespace lift_006407C0 {
extern void* ext_006A5C62(uint32_t size);
void* ext_0063F960(void* self, uint32_t arg0, const void* name);
void ext_006406D0(void* self, uint32_t arg0);

// @name Unknown::createAndRegister_006407C0
// @class Unknown
// @summary Allocates 0x64 bytes, constructs a derived object via ext_0063F960 with arg0 and &this->field_0x04, and registers it via ext_006406D0.
// @field Unknown +0x04 uint8_t field_0x04
void* __thiscall fn_006407C0(void* self, uint32_t arg0) {
    void* mem = ext_006A5C62(0x64);
    void* obj = nullptr;
    if (mem != nullptr) {
        const void* field04 = static_cast<const uint8_t*>(self) + 4;
        obj = ext_0063F960(mem, arg0, field04);
    }
    ext_006406D0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj)));
    return obj;
}
} // namespace lift_006407C0

// [0x00641E90]
namespace lift_00641E90 {
// @name trimWhitespace
// @summary Trims leading and trailing whitespace characters from a std::string in-place.


extern uintptr_t mem_00925060;
extern uintptr_t mem_00924EC4;
extern uintptr_t mem_00925100;
extern uintptr_t mem_00925064;

using FindNotOfFn = uint32_t(__thiscall*)(void* self, const char* s, uint32_t pos, uint32_t count);
using EraseFn = void*(__thiscall*)(void* self, uint32_t pos, uint32_t count);

void __cdecl sub_00641E90(void* str) {
    auto find_first_not_of = reinterpret_cast<FindNotOfFn>(mem_00925060);
    auto find_last_not_of = reinterpret_cast<FindNotOfFn>(mem_00925064);
    auto erase = reinterpret_cast<EraseFn>(mem_00925100);
    const uint32_t* npos_ptr = reinterpret_cast<const uint32_t*>(mem_00924EC4);
    const char* ws = reinterpret_cast<const char*>(0x0097CDAC);

    uint32_t first = find_first_not_of(str, ws, 0, 4);
    uint32_t npos = *npos_ptr;
    if (first == npos) {
        erase(str, 0, npos);
        return;
    }
    if (first != 0) {
        erase(str, 0, first);
    }

    uint32_t last = find_last_not_of(str, ws, *npos_ptr, 4);
    npos = *npos_ptr;
    if (last != npos) {
        erase(str, last + 1, npos);
    }
}
} // namespace lift_00641E90

// [0x006497C0]
namespace lift_006497C0 {
// @name Mat3::mulVec3
// @class Mat3
// @summary Multiplies a 3x3 row-major matrix by a 3D vector and stores the result.
// @field Mat3 +0x00 float[9] m
float* __thiscall sub_006497C0(void* self, float* out, const float* in) {
    float x = in[0];
    float y = in[1];
    float z = in[2];

    const float* m = static_cast<const float*>(self);
    float m0 = m[0], m1 = m[1], m2 = m[2];
    float m3 = m[3], m4 = m[4], m5 = m[5];
    float m6 = m[6], m7 = m[7], m8 = m[8];

    out[0] = m0 * x + m1 * y + m2 * z;
    out[1] = m3 * x + m4 * y + m5 * z;
    out[2] = m6 * x + m7 * y + m8 * z;
    return out;
}
} // namespace lift_006497C0

// [0x006408F0] sub_006408F0 (49 bytes)
namespace lift_006408F0 {
// IAT slot the original asm called through (MSVC std::string::operator+=(const char*)).
// The portable body below performs that call directly on the std::string; the
// reference below only keeps the original global in the lifted output.
extern int mem_00924ED0;

// @name Unknown::AppendSrcToDstCountMinus1
// @class Unknown
// @summary Clears the flag at +0x11, then appends the C string at +0x04 to the std::string at *(+0x08) (count-1) times, where count is at +0x0C.
// @field Unknown +0x04 const char* src
// @field Unknown +0x08 std::string* dst
// @field Unknown +0x0C int32_t count
// @field Unknown +0x11 uint8_t flag
void fn_006408F0(void* self) {
    static_cast<void>(&mem_00924ED0);  // IAT slot for std::string::operator+=
    lift_field<uint8_t>(self, 0x11) = 0;
    // Original re-reads count each iteration and loops while i < count - 1.
    for (int32_t i = 0; i < lift_field<int32_t>(self, 0x0C) - 1; ++i) {
        *lift_field<std::string*>(self, 0x08) += lift_field<const char*>(self, 0x04);
    }
}
} // namespace lift_006408F0

// [0x00641760] sub_00641760 (62 bytes)
namespace lift_00641760 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* obj);
extern int mem_00924FF4;

// @name ChainNode::DestroyChain
// @class ChainNode
// @summary Recursively processes a singly linked chain of nodes: recurses on each node's child, destroys its std::string, and calls ext_006A5C5C on it until a node with the stop flag set is reached.
// @field ChainNode +0x00 void* next
// @field ChainNode +0x08 void* child
// @field ChainNode +0x10 std::string str
// @field ChainNode +0x2D uint8_t field_0x2D
void __thiscall fn_00641760(void* self, void* node) {
    using StringDtorFn = void(__thiscall*)(void*);
    // Slot mem_00924FF4 holds the address of std::basic_string<char>::~basic_string.
    auto string_dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));

    uint8_t* cur = static_cast<uint8_t*>(node);
    if (lift_field<uint8_t>(cur, 0x2D) != 0) {
        return;
    }

    for (;;) {
        fn_00641760(self, lift_field<void*>(cur, 0x08));
        uint8_t* next = static_cast<uint8_t*>(lift_field<void*>(cur, 0x00));
        string_dtor(cur + 0x10);
        ext_006A5C5C(cur);
        if (lift_field<uint8_t>(next, 0x2D) != 0) {
            return;
        }
        cur = next;
    }
}
} // namespace lift_00641760
