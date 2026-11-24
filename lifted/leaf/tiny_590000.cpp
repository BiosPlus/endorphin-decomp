// Lifted C++ translation unit: lifted/leaf/tiny_590000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00B40D08;
extern "C" void __fastcall ext_00642650(void* self);
extern "C" void __fastcall ext_00642620(void* self);
extern "C" void __fastcall ext_006425C0(void* self);
extern "C" void __fastcall ext_0047A4A0(void* self);
extern "C" void __fastcall ext_0047A4E0(void* self);
extern "C" void __fastcall ext_0047A580(void* self);
extern "C" void __fastcall ext_004969D0(void* self);
extern "C" void __fastcall ext_00496D00(void* self);
extern "C" void __fastcall ext_006750B0(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_00594000
// @summary Returns global int32 value from mem_00B40D08.
extern "C" int32_t __cdecl fn_00594000(void) {
    return mem_00B40D08;
}

// [0x00594010] sub_00594010 (11 bytes)
// @name sub_00594010
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.
extern "C" void __fastcall fn_00594010(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_00642650(delegate_obj);
}

// [0x00594070] sub_00594070 (11 bytes)
// @name sub_00594070
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642620.
extern "C" void __fastcall fn_00594070(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_00642620(delegate_obj);
}

// [0x005940C0] sub_005940C0 (11 bytes)
// @name sub_005940C0
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_006425C0.
extern "C" void __fastcall fn_005940C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_006425C0(delegate_obj);
}

// [0x005945D0] sub_005945D0 (8 bytes)
// @name sub_005945D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x158.
extern "C" void __fastcall fn_005945D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x158);
    target(self);
}

// [0x005945E0] sub_005945E0 (8 bytes)
// @name sub_005945E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x15C.
extern "C" void __fastcall fn_005945E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x15C);
    target(self);
}

// [0x00594620] sub_00594620 (11 bytes)
// @name sub_00594620
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A4A0.
extern "C" void __fastcall fn_00594620(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A4A0(delegate_obj);
}

// [0x00594630] sub_00594630 (11 bytes)
// @name sub_00594630
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A4E0.
extern "C" void __fastcall fn_00594630(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A4E0(delegate_obj);
}

// [0x00594640] sub_00594640 (11 bytes)
// @name sub_00594640
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.
extern "C" void __fastcall fn_00594640(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A580(delegate_obj);
}

// [0x0059DCA0] sub_0059DCA0 (13 bytes)
// @name sub_0059DCA0
// @summary Setter storing float argument into field at offset +0x618.
extern "C" void __fastcall fn_0059DCA0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x618) = value;
}

// [0x0059DCB0] sub_0059DCB0 (11 bytes)
// @name sub_0059DCB0
// @summary This-adjustor thunk: adjusts `this` by +0x620 and tail-calls sub_004969D0.
extern "C" void __fastcall fn_0059DCB0(void* self) {
    ext_004969D0(static_cast<char*>(self) + 0x620);
}

// [0x0059DCC0] sub_0059DCC0 (11 bytes)
// @name sub_0059DCC0
// @summary This-adjustor thunk: adjusts `this` by +0x620 and tail-calls sub_00496D00.
extern "C" void __fastcall fn_0059DCC0(void* self) {
    ext_00496D00(static_cast<char*>(self) + 0x620);
}

// [0x0059DEB0] sub_0059DEB0 (8 bytes)
// @name sub_0059DEB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x80.
extern "C" void __fastcall fn_0059DEB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x80);
    target(self);
}

// [0x0059DEC0] sub_0059DEC0 (8 bytes)
// @name sub_0059DEC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0xFC.
extern "C" void __fastcall fn_0059DEC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0xFC);
    target(self);
}

// [0x0059DED0] sub_0059DED0 (11 bytes)
// @name sub_0059DED0
// @summary Member forwarding thunk: loads subobject pointer at +0x5FC and tail-calls sub_006750B0.
extern "C" void __fastcall fn_0059DED0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5FC);
    ext_006750B0(delegate_obj);
}

// [0x00594700] sub_00594700 (13 bytes)
namespace lift_00594700 {
// @name sub_00594700
// @summary Auto-lifted identical-shape clone of 0x0046C110 (Unknown::GetFieldF138ViaF8).
namespace lift_0046C110 {
// @name Unknown::GetFieldF138ViaF8
// @class Unknown
// @summary Returns the float at +0x138 of the sub-object pointed to by self+0xF8.
// @field Unknown +0xF8 void* field_0xF8
// @field Unknown +0x138 float field_0x138
float fn_00594700(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto* sub = *reinterpret_cast<unsigned char**>(base + 0x26C);
    return *reinterpret_cast<float*>(sub + 0x1D0);
}
} // namespace lift_0046C110
} // namespace lift_00594700

// [0x005946C0] sub_005946C0 (14 bytes)
namespace lift_005946C0 {
// @name sub_005946C0
// @summary Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_004C49C0(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_005946C0(void* self) {
    void* inner = lift_field<void*>(self, 0x26C);
    return ext_004C49C0(static_cast<uint8_t*>(inner) + 0x8);
}
} // namespace lift_00515840
} // namespace lift_005946C0

// [0x00594020] sub_00594020 (21 bytes)
namespace lift_00594020 {
// @name RaiseFieldF4ToValue
// @class <ClassName> (unknown; no class name recovered, field accessed via self)
// @summary Stores value into self+0xF4 if it is greater than the current value (running max); thiscall, one stack arg, callee pops 4.
// @field <ClassName> +0xF4 int32_t field_0xF4
void fn_00594020(void* self, int32_t value) {
    int32_t& field_0xF4 = lift_field<int32_t>(self, 0xF4);
    if (field_0xF4 < value) {
        field_0xF4 = value;
    }
}
} // namespace lift_00594020

// [0x00594040] sub_00594040 (21 bytes)
namespace lift_00594040 {
// @name UnknownClass::RaiseFieldF4ToMax
// @class UnknownClass
// @summary Stores the argument into the object's int field at +0xF4 if it is greater than the current value (signed max-assign); thiscall, callee pops 4 bytes.
// @field UnknownClass +0xF4 int32_t field_0xF4
void fn_00594040(void* self, int32_t value) {
    int32_t& field = lift_field<int32_t>(self, 0xF4);
    if (value > field) {
        field = value;
    }
}
} // namespace lift_00594040

// [0x0059DE20] sub_0059DE20 (26 bytes)
namespace lift_0059DE20 {
// @name descriptiveName: MinFloatPtr
// @summary Returns the pointer whose float value is smaller; on ties or NaN returns the second pointer.
// Note: the disassembly is cdecl-style (args at [esp+4], [esp+8]); the first arg is `a` (ecx),
// the second is `b` (edx). The return is `b` unless `*a < *b`, in which case it is `a`.
float* fn_0059DE20(float* a, float* b) {
    // fld [a]; fld [b]; fcompp -> compares *b with *a; ZF set if *b <= *a or unordered.
    return (*b > *a) ? a : b;
}
} // namespace lift_0059DE20

// [0x0059DE40]
namespace lift_0059DE40 {
// @name MinFloatPtr
// @summary Returns the pointer to the smaller float: returns b if *a > *b, otherwise a (NaN-safe: a is returned when unordered).


float* __cdecl sub_0059DE40(float* a, float* b) {
    return (*a > *b) ? b : a;
}
} // namespace lift_0059DE40

// [0x00594310] sub_00594310 (27 bytes)
namespace lift_00594310 {
// @name sub_00594310
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_00594310(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x31) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_00594310

// [0x0059DE00] sub_0059DE00 (27 bytes)
namespace lift_0059DE00 {
// @name sub_0059DE00
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_0059DE00(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x39) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_0059DE00
