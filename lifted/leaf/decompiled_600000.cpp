// Lifted C++ translation unit: lifted/leaf/decompiled_600000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00609730 {
// @name sub_00609730
// @summary Auto-lifted identical-shape clone of 0x004AEC60 (thunk_004AEC60).
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_00609730(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0xC);
    void* vt = lift_field<void*>(sub, 0x4);
    ThisFn target = lift_field<ThisFn>(vt, 0x24);

    target(static_cast<uint8_t*>(sub) + 0x4);
}
} // namespace lift_004AEC60
} // namespace lift_00609730
#include <cstdint>
#include <cstddef>

#include <cstddef>
namespace lift_00602EC0 {
void mem_write32(uint32_t addr, uint32_t val);
void mem_write_f32(uint32_t addr, float val);

// @name sub_00602EC0_ctor
// @summary Initializes vtable and zeroes integer and float fields of an object
// @field Object +0x00 uint32_t vtable
// @field Object +0x04 uint32_t field_0x04
// @field Object +0x08 uint32_t field_0x08
// @field Object +0x0c uint32_t field_0x0c
// @field Object +0x10 uint32_t field_0x10
// @field Object +0x14 float field_0x14
// @field Object +0x18 float field_0x18
// @field Object +0x1c float field_0x1c
// @field Object +0x20 float field_0x20
// @field Object +0x24 float field_0x24
// @field Object +0x28 float field_0x28
uint32_t __thiscall sub_00602EC0(uint32_t this_ptr) {
    mem_write32(this_ptr + 0x00, 0x0096f81cu);
    mem_write32(this_ptr + 0x04, 0u);
    mem_write32(this_ptr + 0x08, 0u);
    mem_write32(this_ptr + 0x0c, 0u);
    mem_write32(this_ptr + 0x10, 0u);
    mem_write_f32(this_ptr + 0x1c, 0.0f);
    mem_write_f32(this_ptr + 0x18, 0.0f);
    mem_write_f32(this_ptr + 0x14, 0.0f);
    mem_write_f32(this_ptr + 0x28, 0.0f);
    mem_write_f32(this_ptr + 0x24, 0.0f);
    mem_write_f32(this_ptr + 0x20, 0.0f);
    return this_ptr;
}
} // namespace lift_00602EC0
#include <cstring>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_0060FA40 {
// @name Unknown::ReleaseHandleAndThrowNull
// @summary Passes a stack-slot value (ebp-0x18) to a release helper, then throws with two null arguments.

extern void ext_005577A0(void* self);
extern void ext_006A6DD2(void);

void fn_0060FA40(void* local_18) {
    ext_005577A0(local_18);
    // push 0; push 0; call _CxxThrowException
    ext_006A6DD2();
}
} // namespace lift_0060FA40
#include <stdexcept>
#include <bit>

#include <bit>
namespace lift_006098F0 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
extern int mem_00924FE8;

// Imported std::string default constructor (MSVCP80), resolved through the IAT slot at 0x00924FE8.
using StringDefaultCtorFn = void (*)(void* thisPtr);

static inline void construct_default_string(void* addr) {
    reinterpret_cast<StringDefaultCtorFn>(static_cast<uintptr_t>(mem_00924FE8))(addr);
}

// @name Unknown::ctor_006098F0
// @class Unknown
// @summary Runs ext_00661980 on this, stores vtable 0x00971AF4, then default-constructs two std::string members at +0x04 and +0x20.
// @field Unknown +0x00 DWORD vtable
// @field Unknown +0x04 std::string str0
// @field Unknown +0x20 std::string str1
void fn_006098F0(void* self) {
    // Base-stage initialisation (overwritten below by this class's vtable).
    ext_00661980(self);

    // Install this class's vtable.
    lift_field<DWORD>(self, 0x00) = 0x00971AF4u;

    // Default-construct the two string members (MSVC std::string is 0x1C bytes: +0x04..+0x20, +0x20..+0x3C).
    construct_default_string(static_cast<uint8_t*>(self) + 0x04);
    construct_default_string(static_cast<uint8_t*>(self) + 0x20);
}
} // namespace lift_006098F0
#include <istream>
#include <memory>

#include <memory>
namespace lift_00609670 {
// @name StringPairKey::operator<
// @class StringPairKey
// @summary Lexicographically compares two std::string fields at +0x04 and +0x20.
// @field StringPairKey +0x04 std::string field_0x04
// @field StringPairKey +0x20 std::string field_0x20


extern uint32_t mem_00924EF4;
extern uint32_t mem_00924FC4;

using str_cmp_fn = uint8_t(__cdecl*)(const void*, const void*);

uint32_t __fastcall sub_00609670(uint32_t this_ptr, uint32_t /*edx*/, uint32_t other_ptr) {
    const auto str_lt = reinterpret_cast<str_cmp_fn>(static_cast<uintptr_t>(mem_00924EF4));
    const auto str_eq = reinterpret_cast<str_cmp_fn>(static_cast<uintptr_t>(mem_00924FC4));

    const void* lhs_first = reinterpret_cast<const void*>(static_cast<uintptr_t>(this_ptr + 0x4));
    const void* rhs_first = reinterpret_cast<const void*>(static_cast<uintptr_t>(other_ptr + 0x4));

    if (str_lt(lhs_first, rhs_first) != 0) {
        return 1;
    }

    if (str_eq(lhs_first, rhs_first) != 0) {
        const void* lhs_second = reinterpret_cast<const void*>(static_cast<uintptr_t>(this_ptr + 0x20));
        const void* rhs_second = reinterpret_cast<const void*>(static_cast<uintptr_t>(other_ptr + 0x20));
        if (str_lt(lhs_second, rhs_second) != 0) {
            return 1;
        }
    }

    return 0;
}
} // namespace lift_00609670
#include <iostream>
#include <streambuf>

#include <streambuf>
namespace lift_00602F70 {
// Known callee 0x00602EC0: sub_00602EC0_ctor (Initializes vtable and zeroes integer and float fields of an object)
extern void ext_00602EC0(void* self);
// Known callee 0x0060BCD0: descriptiveName (unknown class; initializes a 0x11-byte record) (thiscall, this in ecx)
extern void ext_0060BCD0(void* self);

// @name Unknown::ctor_00602F70
// @class Unknown
// @summary Runs the base ctor (sub_00602EC0), sets vtable to 0x0096F8A4, zeroes floats at +0x2c/+0x30 and int at +0x34, initializes sub-records at +0x38 and +0x4c via sub_0060BCD0; returns this.
// @field Unknown +0x00 uint32_t vptr
// @field Unknown +0x2c float field_0x2c
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 uint8_t field_0x38[0x11]
// @field Unknown +0x4c uint8_t field_0x4c[0x11]
void* fn_00602F70(void* self) {
    ext_00602EC0(self);
    lift_field<float>(self, 0x2C) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;
    lift_field<uint32_t>(self, 0x34) = 0u;
    lift_field<uint32_t>(self, 0x00) = 0x0096F8A4u;
    ext_0060BCD0(static_cast<uint8_t*>(self) + 0x38);
    ext_0060BCD0(static_cast<uint8_t*>(self) + 0x4C);
    return self;
}
} // namespace lift_00602F70
#include <utility>
#include <exception>

#include <exception>
namespace lift_006053C0 {
// @name sub_006053C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B476E0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B476DC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006053C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7D6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B476E0 & 1u) == 0) {
        mem_00B476E0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B476DC, frame[0]);
        mem_00B476DC = 0x96F934u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B476DC;
}
} // namespace lift_004CAE30
} // namespace lift_006053C0

// [0x00605420] sub_00605420 (87 bytes)
namespace lift_00605420 {
// @name sub_00605420
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B476E8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B476E4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605420() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7D8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B476E8 & 1u) == 0) {
        mem_00B476E8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B476E4, frame[0]);
        mem_00B476E4 = 0x96FA0Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B476E4;
}
} // namespace lift_004CAE30
} // namespace lift_00605420

// [0x00605480] sub_00605480 (87 bytes)
namespace lift_00605480 {
// @name sub_00605480
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B476F0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B476EC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605480() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7DAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B476F0 & 1u) == 0) {
        mem_00B476F0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B476EC, frame[0]);
        mem_00B476EC = 0x96FAE4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B476EC;
}
} // namespace lift_004CAE30
} // namespace lift_00605480

// [0x006054E0] sub_006054E0 (87 bytes)
namespace lift_006054E0 {
// @name sub_006054E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B476F8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B476F4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006054E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7DCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B476F8 & 1u) == 0) {
        mem_00B476F8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B476F4, frame[0]);
        mem_00B476F4 = 0x96FBBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B476F4;
}
} // namespace lift_004CAE30
} // namespace lift_006054E0

// [0x00605540] sub_00605540 (87 bytes)
namespace lift_00605540 {
// @name sub_00605540
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47700;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B476FC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605540() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7DEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47700 & 1u) == 0) {
        mem_00B47700 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B476FC, frame[0]);
        mem_00B476FC = 0x96FC94u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B476FC;
}
} // namespace lift_004CAE30
} // namespace lift_00605540

// [0x006055A0] sub_006055A0 (87 bytes)
namespace lift_006055A0 {
// @name sub_006055A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47708;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47704;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006055A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7E0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47708 & 1u) == 0) {
        mem_00B47708 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47704, frame[0]);
        mem_00B47704 = 0x96FD6Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47704;
}
} // namespace lift_004CAE30
} // namespace lift_006055A0

// [0x00605600] sub_00605600 (87 bytes)
namespace lift_00605600 {
// @name sub_00605600
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47710;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4770C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605600() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7E2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47710 & 1u) == 0) {
        mem_00B47710 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4770C, frame[0]);
        mem_00B4770C = 0x96FE44u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4770C;
}
} // namespace lift_004CAE30
} // namespace lift_00605600

// [0x00605660] sub_00605660 (87 bytes)
namespace lift_00605660 {
// @name sub_00605660
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47718;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47714;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605660() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7E4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47718 & 1u) == 0) {
        mem_00B47718 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47714, frame[0]);
        mem_00B47714 = 0x96FF1Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47714;
}
} // namespace lift_004CAE30
} // namespace lift_00605660

// [0x006056C0] sub_006056C0 (87 bytes)
namespace lift_006056C0 {
// @name sub_006056C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47720;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4771C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006056C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7E6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47720 & 1u) == 0) {
        mem_00B47720 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4771C, frame[0]);
        mem_00B4771C = 0x96FFF4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4771C;
}
} // namespace lift_004CAE30
} // namespace lift_006056C0

// [0x00605720] sub_00605720 (87 bytes)
namespace lift_00605720 {
// @name sub_00605720
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47728;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47724;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605720() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7E8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47728 & 1u) == 0) {
        mem_00B47728 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47724, frame[0]);
        mem_00B47724 = 0x9700CCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47724;
}
} // namespace lift_004CAE30
} // namespace lift_00605720

// [0x00605780] sub_00605780 (87 bytes)
namespace lift_00605780 {
// @name sub_00605780
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47730;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4772C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605780() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7EAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47730 & 1u) == 0) {
        mem_00B47730 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4772C, frame[0]);
        mem_00B4772C = 0x9701A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4772C;
}
} // namespace lift_004CAE30
} // namespace lift_00605780

// [0x006057E0] sub_006057E0 (87 bytes)
namespace lift_006057E0 {
// @name sub_006057E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47738;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47734;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006057E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7ECEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47738 & 1u) == 0) {
        mem_00B47738 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47734, frame[0]);
        mem_00B47734 = 0x97027Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47734;
}
} // namespace lift_004CAE30
} // namespace lift_006057E0

// [0x00605840] sub_00605840 (87 bytes)
namespace lift_00605840 {
// @name sub_00605840
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47740;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4773C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605840() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7EEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47740 & 1u) == 0) {
        mem_00B47740 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4773C, frame[0]);
        mem_00B4773C = 0x970354u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4773C;
}
} // namespace lift_004CAE30
} // namespace lift_00605840

// [0x006058A0] sub_006058A0 (87 bytes)
namespace lift_006058A0 {
// @name sub_006058A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47748;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47744;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006058A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7F0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47748 & 1u) == 0) {
        mem_00B47748 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47744, frame[0]);
        mem_00B47744 = 0x97042Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47744;
}
} // namespace lift_004CAE30
} // namespace lift_006058A0

// [0x0060A1E0] sub_0060A1E0 (87 bytes)
namespace lift_0060A1E0 {
// @name sub_0060A1E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B478D0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B478CC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0060A1E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A834Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B478D0 & 1u) == 0) {
        mem_00B478D0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B478CC, frame[0]);
        mem_00B478CC = 0x971EBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B478CC;
}
} // namespace lift_004CAE30
} // namespace lift_0060A1E0

// [0x00609A10] sub_00609A10 (95 bytes)
namespace lift_00609A10 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, const char* str);
// Known callee 0x006A6C87: sub_006A6C87 (18B), takes one function-pointer argument.
extern void ext_006A6C87(void (*teardown)(void));
extern uint32_t mem_00B478B8;   // once-init guard flag (bit 0)
extern uint8_t mem_00B4789C[];  // static object storage (size not recovered)

// @name GetOnceInitString_00609A10
// @summary One-time guarded initializer for the global at 0x00B4789C; on first call builds it via ext_0066AD10 from the string at 0x00A948B0 and registers its teardown at 0x0091E800 via ext_006A6C87; later calls only return its address.
void* fn_00609A10() {
    // Guard bit 0 of mem_00B478B8: run the initializer only once.
    if ((mem_00B478B8 & 1u) == 0u) {
        mem_00B478B8 |= 1u;
        ext_0066AD10(mem_00B4789C, reinterpret_cast<const char*>(uintptr_t{0xA948B0}));
        ext_006A6C87(reinterpret_cast<void (*)(void)>(uintptr_t{0x91E800}));
    }
    return mem_00B4789C;
}
} // namespace lift_00609A10

// [0x0060CC60]
namespace lift_0060CC60 {
// @name GetOnceInitString_0060CC60
// @summary One-time initializer for global string mem_00B47F1C; returns its address.

extern uint32_t mem_00B47F38;
extern char mem_00B47F1C[];
extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern void ext_006A6C87(void* arg);

void* GetOnceInitString_0060CC60() {
    // Guard bit 0 of mem_00B47F38: already initialized -> skip to return.
    if ((mem_00B47F38 & 1u) == 0u) {
        mem_00B47F38 |= 1u;
        // Original pushes 0xA94F1C as the second argument; the callee's
        // declared parameter is uint8_t, so the value is truncated to match.
        ext_0066AD10(mem_00B47F1C, static_cast<uint8_t>(0x00A94F1Cu));
        // Registers a cleanup/teardown callback for the static.
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x0091E900u)));
    }
    return mem_00B47F1C;
}
} // namespace lift_0060CC60

// [0x00605AC0] sub_00605AC0 (95 bytes)
namespace lift_00605AC0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Called as (void* out, <const char* literal>) to construct the global object at mem_00B47754.
extern void* ext_0066AD10(void* out, const char* init);
// Known callee 0x006A6C87: sub_006A6C87 (18B). Called with one argument (destructor address 0x91E6F0).
extern void ext_006A6C87(const void* dtor);
extern uint32_t mem_00B47770; // one-time-init guard flag (bit 0)
extern uint32_t mem_00B47754; // global object storage

// @name GetOnceInitString_00605AC0
// @summary Lazily constructs the global string object at mem_00B47754 from literal 0x00A947AC on first call, registers its destructor (0x0091E6F0), and returns its address.
void* fn_00605AC0() {
    if ((mem_00B47770 & 1u) == 0) {
        mem_00B47770 |= 1u;
        ext_0066AD10(reinterpret_cast<void*>(&mem_00B47754),
                     reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00A947ACu)));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091E6F0u)));
    }
    return reinterpret_cast<void*>(&mem_00B47754);
}
} // namespace lift_00605AC0

// [0x0060B910] sub_0060B910 (98 bytes)
namespace lift_0060B910 {
// IAT slot for MSVCP80 std::basic_string<char>::basic_string() (default ctor, thiscall).
extern void(__thiscall* mem_00924FE8)(void* self);

// @name unknown::ctorWithTwoStrings
// @class unknown
// @summary Constructor: stamps vtable 0x009720F4 at this+0, default-constructs the std::string members at this+0x04 and this+0x20 via MSVCP80, zeroes the dwords at this+0x3C and this+0x40, and returns this. Exception-frame setup from the original is omitted.
// @field unknown +0x00 void* vptr
// @field unknown +0x04 std::string field_0x04
// @field unknown +0x20 std::string field_0x20
// @field unknown +0x3C DWORD field_0x3c
// @field unknown +0x40 DWORD field_0x40
void* fn_0060B910(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x9720F4u;              // mov dword ptr [esi], 0x9720f4
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x04);          // lea ecx,[esi+4]; call [0x924fe8]
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x20);          // lea ecx,[esi+0x20]; call [0x924fe8]
    lift_field<uint32_t>(self, 0x40) = 0;                      // mov dword ptr [esi+0x40], 0
    lift_field<uint32_t>(self, 0x3C) = 0;                      // mov dword ptr [esi+0x3c], 0
    return self;                                               // mov eax, esi
}
} // namespace lift_0060B910

// [0x0060D730] sub_0060D730 (65 bytes)
namespace lift_0060D730 {
// Known callee 0x0060B910: unknown::ctorWithTwoStrings (Constructor: stamps vtable 0x009720F4 at this+0, default-constructs the std::string members at this+0x04 and this+0x20 via MSVCP80, zeroes the dwords at this+0x3C and this+0x40, and returns this. Exception-frame setup from the original is omitted.)
extern void* ext_0060B910(void* self);

// @name unknown::ctorWithTailFields
// @class unknown
// @summary Constructor: runs the base ctor ext_0060B910 on this, stamps vtable 0x009723F4 at this+0, and zeroes the dwords at this+0x48, +0x4C and +0x50; returns this. The original SEH frame setup/teardown is omitted.
// @field unknown +0x00 uint32_t vptr
// @field unknown +0x48 uint32_t field_0x48
// @field unknown +0x4C uint32_t field_0x4c
// @field unknown +0x50 uint32_t field_0x50
void* fn_0060D730(void* self) {
    ext_0060B910(self);

    lift_field<uint32_t>(self, 0x00) = 0x009723F4u;   // mov dword ptr [esi], 0x9723f4
    lift_field<uint32_t>(self, 0x48) = 0u;            // mov dword ptr [esi+0x48], eax (eax = 0)
    lift_field<uint32_t>(self, 0x4C) = 0u;            // mov dword ptr [esi+0x4c], eax
    lift_field<uint32_t>(self, 0x50) = 0u;            // mov dword ptr [esi+0x50], eax
    return self;                                      // mov eax, esi
}
} // namespace lift_0060D730

// [0x0060C570] sub_0060C570 (33 bytes)
namespace lift_0060C570 {
// Known callee 0x0060B910: unknown::ctorWithTwoStrings (constructor; stamps its own vtable, default-constructs two std::string members, returns this).
extern void* ext_0060B910(void* self);
// Known callee 0x0060BCD0: descriptiveName (initializes a 0x11-byte record; thiscall, this in ecx).
extern void ext_0060BCD0(void* ecx);

// @name Unknown::constructWithRecord
// @class Unknown
// @summary Runs the base constructor ext_0060B910 on self, stamps vtable 0x0097215C, clears the dword at +0x44, initializes the embedded record at +0x48 via ext_0060BCD0, and returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x44 uint32_t field_0x44
// @field Unknown +0x48 uint8_t record
__thiscall void* fn_0060C570(void* self) {
    ext_0060B910(self);
    lift_field<uint32_t>(self, 0x00) = 0x0097215Cu;
    lift_field<uint32_t>(self, 0x44) = 0u;
    ext_0060BCD0(static_cast<uint8_t*>(self) + 0x48);
    return self;
}
} // namespace lift_0060C570

// [0x0060B240] sub_0060B240 (102 bytes)
namespace lift_0060B240 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);

// @name Unknown::initVtablesAndClearFields
// @class Unknown
// @summary Thiscall initializer: runs the base-setup callee on this, overwrites the vtable slots and several dwords with constants, zeroes six dword fields, and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1c
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2C uint32_t field_0x2c
void* fn_0060B240(void* self) {
    ext_00661980(self);

    auto store32 = [](void* base, std::size_t off, uint32_t value) {
        std::memcpy(static_cast<uint8_t*>(base) + off, &value, sizeof(value));
    };

    store32(self, 0x04, 0x971B4Cu);
    store32(self, 0x08, 0x9443BCu);
    store32(self, 0x00, 0x97202Cu);
    store32(self, 0x04, 0x972020u);
    store32(self, 0x08, 0x972010u);

    store32(self, 0x14, 0u);
    store32(self, 0x18, 0u);
    store32(self, 0x1C, 0u);
    store32(self, 0x24, 0u);
    store32(self, 0x28, 0u);
    store32(self, 0x2C, 0u);

    return self;
}
} // namespace lift_0060B240

// [0x00607F20]
namespace lift_00607F20 {
extern void ext_00405FB0(void);
extern uint32_t ext_004A59A0(uint32_t count, uint32_t zero);

// @name FloatArray::assignFilled (allocate count floats and fill with value)
// @class Unknown
// @summary Resets the three array pointers, then for count > 0 allocates count float slots (throws if count > 0x3FFFFFFF) and fills them with *value_ptr.
// @field Unknown +0x04 float* field_0x04 (begin pointer)
// @field Unknown +0x08 float* field_0x08 (end-of-data pointer)
// @field Unknown +0x0C float* field_0x0C (end-of-capacity pointer)
void __thiscall fn_00607F20(void* self, uint32_t count, uint32_t value_ptr) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;

    if (count == 0) {
        return;
    }

    if (count > 0x3FFFFFFFu) {
        ext_00405FB0();
    }

    uint32_t data = ext_004A59A0(count, 0);
    uint32_t end = data + 4u * count;

    lift_field<uint32_t>(self, 0x0C) = end;
    lift_field<uint32_t>(self, 0x04) = data;
    lift_field<uint32_t>(self, 0x08) = data;

    float* dst = reinterpret_cast<float*>(static_cast<uintptr_t>(data));
    for (uint32_t i = 0; i < count; ++i) {
        const float* src = reinterpret_cast<const float*>(static_cast<uintptr_t>(value_ptr));
        dst[i] = *src;
    }

    lift_field<uint32_t>(self, 0x08) = end;
}
} // namespace lift_00607F20

// [0x0060B990]
namespace lift_0060B990 {
// @name CopyCtor_0060B990
// @summary Copy constructor setting vtable 0x009720F4, copying two std::string fields, and zeroing fields at +0x3c and +0x40.
// @field Class +0x00 uint32_t vtable
// @field Class +0x04 std::string field_0x04
// @field Class +0x20 std::string field_0x20
// @field Class +0x3c uint32_t field_0x3c
// @field Class +0x40 uint32_t field_0x40


extern uint32_t mem_00924FE0;

typedef uint32_t (__thiscall *StdStringCopyCtorFn)(void* self, const void* other);

void* __thiscall sub_0060B990(void* self, const void* other) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    const uint8_t* src = static_cast<const uint8_t*>(other);

    *reinterpret_cast<uint32_t*>(dst + 0x00) = 0x009720F4u;

    auto copy_string = reinterpret_cast<StdStringCopyCtorFn>(mem_00924FE0);
    copy_string(dst + 0x04, src + 0x04);
    copy_string(dst + 0x20, src + 0x20);

    *reinterpret_cast<uint32_t*>(dst + 0x3c) = 0;
    *reinterpret_cast<uint32_t*>(dst + 0x40) = 0;

    return self;
}
} // namespace lift_0060B990

// [0x0060BBA0]
namespace lift_0060BBA0 {
extern void* __thiscall ext_0060B990(void* self, const void* other);

// @name CopyCtor_0060BBA0
// @summary Copy constructor calling base copy constructor 0x0060B990, setting vtable 0x0097215C, and copying fields at +0x44..+0x58.
// @field Class_0060BBA0 +0x00 uint32_t vtable
// @field Class_0060BBA0 +0x44 uint32_t field_0x44
// @field Class_0060BBA0 +0x48 uint32_t field_0x48
// @field Class_0060BBA0 +0x4c uint32_t field_0x4c
// @field Class_0060BBA0 +0x50 uint32_t field_0x50
// @field Class_0060BBA0 +0x54 uint32_t field_0x54
// @field Class_0060BBA0 +0x58 uint32_t field_0x58
void* __thiscall sub_0060BBA0(void* self, const void* other) {
    ext_0060B990(self, other);

    auto* dst = static_cast<uint8_t*>(self);
    const auto* src = static_cast<const uint8_t*>(other);

    *reinterpret_cast<uint32_t*>(dst + 0x00) = 0x0097215Cu;
    *reinterpret_cast<uint32_t*>(dst + 0x44) = *reinterpret_cast<const uint32_t*>(src + 0x44);
    *reinterpret_cast<uint32_t*>(dst + 0x48) = *reinterpret_cast<const uint32_t*>(src + 0x48);
    *reinterpret_cast<uint32_t*>(dst + 0x4c) = *reinterpret_cast<const uint32_t*>(src + 0x4c);
    *reinterpret_cast<uint32_t*>(dst + 0x50) = *reinterpret_cast<const uint32_t*>(src + 0x50);
    *reinterpret_cast<uint32_t*>(dst + 0x54) = *reinterpret_cast<const uint32_t*>(src + 0x54);
    *reinterpret_cast<uint32_t*>(dst + 0x58) = *reinterpret_cast<const uint32_t*>(src + 0x58);

    return self;
}
} // namespace lift_0060BBA0

// [0x00609730] sub_00609730 (14 bytes)
namespace lift_00609730 {
// Callee 0x00602F20 (sub_00602F20, auto-lifted clone of 0x00602F00). The asm reaches it only
// through the vtable slot at +0x24, so it is recorded here as the known dispatch target and not called directly.
extern void ext_00602F20();

// @name ThunkForwardToEmbeddedVfunc24
// @summary Thunk: loads the subobject at self+0x0C, calls its secondary vtable slot at +0x24 with this adjusted to subobject+4, and returns that result.
// @field UnknownClass +0x0C void* field_0x0C
// @field UnknownSubobject +0x04 void* field_0x04
void* fn_00609730(void* self) {
    using VFn = void* (*)(void*);
    [[maybe_unused]] void* const knownSlot24Target = reinterpret_cast<void*>(&ext_00602F20);  // address only, never called

    void* inner = lift_field<void*>(self, 0x0C);                         // mov ecx, [self+0x0C]
    void* vptr = lift_field<void*>(inner, 0x04);                         // mov eax, [inner+0x04]
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vptr, 0x24));   // mov edx, [vptr+0x24]
    void* adjusted = static_cast<uint8_t*>(inner) + 0x04;                // add ecx, 4
    return target(adjusted);                                             // jmp edx
}
} // namespace lift_00609730

// [0x0060A4F0] sub_0060A4F0 (33 bytes)
namespace lift_0060A4F0 {
// Known callee 0x00609A10: GetOnceInitString_00609A10 (One-time guarded initializer for the global at 0x00B4789C; on first call builds it via ext_0066AD10 from the string at 0x00A948B0 and registers its teardown at 0x0091E800 via ext_006A6C87; later calls only return its address.)
extern void* ext_00609A10(void);

// Import slot (.rdata 0x00924FE0) holding the MSVCP80 basic_string copy-constructor address.
extern uint32_t mem_00924FE0;

// @name CopyOnceInitString_0060A4F0
// @summary Copy-constructs the std::string at dst from the once-initialized global string and returns dst.

// MSVC std::basic_string<char> copy constructor: thiscall, one stack arg (const string&).
using StringCopyCtorFn = void(__thiscall*)(void* self, const void* src);

void* fn_0060A4F0(void* dst) {
    const void* src = ext_00609A10();
    reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0))(dst, src);
    return dst;
}
} // namespace lift_0060A4F0

// [0x00605900] sub_00605900 (87 bytes)
namespace lift_00605900 {
// @name sub_00605900
// @summary Auto-lifted identical-shape clone of 0x0061DE20 (sub_0061DE20).
namespace lift_0061DE20 {
// @name sub_0061DE20
// @summary Auto-lifted identical-shape clone of 0x0064B0C0 (sub_0064B0C0).
namespace lift_0064B0C0 {
// @name sub_0064B0C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47750;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4774C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00605900() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7F2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47750 & 1u) == 0) {
        mem_00B47750 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4774C, frame[0]);
        mem_00B4774C = 0x970504u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4774C;
}
} // namespace lift_004CAE30
} // namespace lift_0064B0C0
} // namespace lift_0061DE20
} // namespace lift_00605900

// [0x0060AF10] sub_0060AF10 (74 bytes)
namespace lift_0060AF10 {
// @name sub_0060AF10
// @summary Auto-lifted identical-shape clone of 0x005190B0 (sub_005190B0).
namespace lift_005190B0 {
// @name sub_005190B0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_0060A3A0(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_0060AF10(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_0060A3A0(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_005190B0
} // namespace lift_0060AF10

// [0x0060B8D0] sub_0060B8D0 (62 bytes)
namespace lift_0060B8D0 {
// @name sub_0060B8D0
// @summary Auto-lifted identical-shape clone of 0x00476660 (FormatIntToString).
namespace lift_00476660 {
// Import slot for MSVCR80!_snprintf (indirect call through IAT).
extern void* mem_009251E0;
// Import slot for MSVCP80 std::basic_string<char>::basic_string(const char*) (IAT).
extern void* mem_00924FE4;
// Format string literal in .rdata at 0x0093BF08.
extern const char mem_009720E8[];

// @name FormatIntToString
// @summary Formats an int into a 50-byte stack buffer via _snprintf, then constructs the std::string at self from that buffer and returns self.
extern void* fn_0060B8D0(void* self, int32_t value) {
    using SnprintfFn = int (*)(char*, size_t, const char*, ...);
    using StringCtorFn = void (*)(void*, const char*);

    char buf[0x32] = {};
    auto snprintf_fn = reinterpret_cast<SnprintfFn>(mem_009251E0);
    snprintf_fn(buf, sizeof(buf), mem_009720E8, value, self, 0);

    auto string_ctor = reinterpret_cast<StringCtorFn>(mem_00924FE4);
    string_ctor(self, buf);
    return self;
}
} // namespace lift_00476660
} // namespace lift_0060B8D0

// [0x0060C4C0] sub_0060C4C0 (77 bytes)
namespace lift_0060C4C0 {
// Known callee 0x0060BCC0: sub_0060BCC0 (Destructor tail-call: restores vtable mem_0097215C and tail-calls base destructor sub_0060BA10.)
extern void __fastcall ext_0060BCC0(void* self);
// IAT slot 0x00924FF4 holding the MSVCP80 std::basic_string<char> destructor address.
extern uint32_t mem_00924FF4;

// @name Unknown::destroyStringAt60AndBase
// @class Unknown
// @summary Destroys the std::string member at this+0x60, then runs the base-class destructor (ext_0060BCC0).
// @field Unknown +0x60 std::string field_0x60
void __fastcall fn_0060C4C0(void* self) {
    using StringDtor = void(__fastcall*)(void*);

    // Member std::string dtor, called with this = self + 0x60.
    auto string_dtor = reinterpret_cast<StringDtor>(static_cast<uintptr_t>(mem_00924FF4));
    string_dtor(static_cast<uint8_t*>(self) + 0x60);

    // Base-class destructor on the whole object.
    ext_0060BCC0(self);
}
} // namespace lift_0060C4C0

// [0x0060A340] sub_0060A340 (85 bytes)
namespace lift_0060A340 {
// Known callee 0x00609670: StringPairKey::operator< (Lexicographically compares two std::string fields at +0x04 and +0x20.)
extern uint32_t ext_00609670(uint32_t this_ptr, uint32_t other_ptr);
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
extern int mem_00924FE8;

// @name sortThreeStringPairKeys
// @summary Sorts three slots holding StringPairKey object pointers ascending in place (3-element sorting network: a/b, b/c, a/b) using StringPairKey::operator<.
void fn_0060A340(uint32_t* a, uint32_t* b, uint32_t* c) {
    // Metadata-only references: the original asm never calls ext_00661980 or reads mem_00924FE8.
    (void)&ext_00661980;
    (void)&mem_00924FE8;

    // Each slot is a dword holding an object pointer; swap the pointers when out of order.
    if (ext_00609670(*b, *a)) {
        uint32_t t = *a; *a = *b; *b = t;
    }
    if (ext_00609670(*c, *b)) {
        uint32_t t = *b; *b = *c; *c = t;
    }
    if (ext_00609670(*b, *a)) {
        uint32_t t = *a; *a = *b; *b = t;
    }
}
} // namespace lift_0060A340

// [0x006096D0]
namespace lift_006096D0 {
extern void __fastcall ext_0065F440(void* self);
extern void (__thiscall *mem_00924FF4)(void* self);

// @name sub_006096D0
// @summary Destroys two std::string members at +0x20 and +0x4, then calls ext_0065F440 on self.
// @field unknown +0x04 std::string field_0x04
// @field unknown +0x20 std::string field_0x20
extern void __fastcall fn_006096D0(void* self) {
    mem_00924FF4(reinterpret_cast<uint8_t*>(self) + 0x20);
    mem_00924FF4(reinterpret_cast<uint8_t*>(self) + 0x04);
    ext_0065F440(self);
}
} // namespace lift_006096D0

// [0x0060CCC0] sub_0060CCC0 (85B)
namespace lift_0060CCC0 {
extern __thiscall void* ext_0060C570(void* self);
extern void ext_0060BDF0(void* self);
extern void ext_00661980(void* self);

// @name Unknown::constructDerivedEffector
// @class Unknown
// @summary Runs the base constructor ext_0060C570, stamps vtable 0x009721BC, calls ext_0060BDF0, sets float at +0x5C to 0 and dword at +0x60 to 20, returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x5C float field_0x5C
// @field Unknown +0x60 uint32_t field_0x60
__thiscall void* fn_0060CCC0(void* self) {
    (void)&ext_00661980;  // SEH unwind handler callee (metadata only)
    ext_0060C570(self);
    lift_field<uint32_t>(self, 0x00) = 0x009721BCu;
    ext_0060BDF0(self);
    lift_field<float>(self, 0x5C) = 0.0f;
    lift_field<uint32_t>(self, 0x60) = 0x14u;
    return self;
}
} // namespace lift_0060CCC0

// [0x0060BA10]
namespace lift_0060BA10 {
extern void* mem_009720F4;
extern void (__thiscall *mem_00924FF4)(void*);
void __fastcall ext_0065F440(void* self);

// @name UnknownClass::~UnknownClass
// @class UnknownClass
// @summary Destructor that resets vtable, destroys two std::string members at +0x20 and +0x4, and calls base destructor.
// @field UnknownClass +0x00 void* vtable
// @field UnknownClass +0x04 std::string field_0x04
// @field UnknownClass +0x20 std::string field_0x20
extern void __fastcall fn_0060BA10(void* self) {
    lift_field<void*>(self, 0x00) = &mem_009720F4;
    mem_00924FF4(static_cast<uint8_t*>(self) + 0x20);
    mem_00924FF4(static_cast<uint8_t*>(self) + 0x04);
    ext_0065F440(self);
}
} // namespace lift_0060BA10

// [0x0060C360] sub_0060C360 (112 bytes)
namespace lift_0060C360 {
// Known callee 0x0060BBA0: CopyCtor_0060BBA0 (Copy constructor calling base copy constructor 0x0060B990, setting vtable 0x0097215C, and copying fields at +0x44..+0x58.)
extern void* ext_0060BBA0(void* self, const void* other);
extern int mem_00924FE0;

// @name CopyCtor_0060C360
// @class Class_0060C360
// @summary Copy constructor: runs base copy ctor 0x0060BBA0, sets vtable 0x00972234, copies +0x5c/+0x7c/+0x80 floats/dword and copy-constructs the std::string at +0x60; returns this.
// @field Class_0060C360 +0x00 uint32_t vtable
// @field Class_0060C360 +0x5c uint32_t field_0x5c
// @field Class_0060C360 +0x60 std::string field_0x60
// @field Class_0060C360 +0x7c float field_0x7c
// @field Class_0060C360 +0x80 float field_0x80
void* fn_0060C360(void* self, const void* other) {
    ext_0060BBA0(self, other);

    lift_field<uint32_t>(self, 0x00) = 0x00972234u;
    lift_field<uint32_t>(self, 0x5c) = lift_field<const uint32_t>(other, 0x5c);

    // The std::string copy constructor is imported from MSVCP80 (mem_00924FE0);
    // it is performed here as a placement copy-construction of the string at +0x60.
    (void)&mem_00924FE0;
    new (&lift_field<std::string>(self, 0x60))
        std::string(lift_field<const std::string>(other, 0x60));

    lift_field<float>(self, 0x7c) = lift_field<const float>(other, 0x7c);
    lift_field<float>(self, 0x80) = lift_field<const float>(other, 0x80);

    return self;
}
} // namespace lift_0060C360

// [0x00603230] sub_00603230 (121 bytes)
namespace lift_00603230 {
// @name ClampedRateDispatch
// @class (none)
// @summary Calls vtbl[8] on the object at self+0x04 (arg self+0x34) and computes x = result - self+0x2C, stores x to self+0x30, then clamps -x*self+0x4C into [-self+0x50, self+0x50] and dispatches it through vtbl[4]; then dispatches self+0x2C through vtbl[5].
// @field self +0x04 void* field_0x04
// @field self +0x2C float field_0x2c
// @field self +0x30 float field_0x30
// @field self +0x34 uint32_t field_0x34
// @field self +0x4C float field_0x4c
// @field self +0x50 float field_0x50
void __thiscall fn_00603230(void* self) {
    using GetFn = float(__thiscall*)(void*, uint32_t);
    using SetFn = void(__thiscall*)(void*, double, uint32_t);

    void* obj = lift_field<void*>(self, 0x04);
    uint32_t arg = lift_field<uint32_t>(self, 0x34);
    void** vtbl = *reinterpret_cast<void***>(obj);

    float ret = reinterpret_cast<GetFn>(vtbl[8])(obj, arg);
    float x = ret - lift_field<float>(self, 0x2C);
    lift_field<float>(self, 0x30) = x;

    float a = -x * lift_field<float>(self, 0x4C);
    float hi = lift_field<float>(self, 0x50);
    float lo = -hi;
    double v = (a < lo) ? static_cast<double>(lo)
             : (a > hi) ? static_cast<double>(hi)
             : static_cast<double>(a);

    reinterpret_cast<SetFn>(vtbl[4])(obj, v, arg);

    obj = lift_field<void*>(self, 0x04);
    arg = lift_field<uint32_t>(self, 0x34);
    vtbl = *reinterpret_cast<void***>(obj);
    double f2c = static_cast<double>(lift_field<float>(self, 0x2C));
    reinterpret_cast<SetFn>(vtbl[5])(obj, f2c, arg);
}
} // namespace lift_00603230

// [0x0060B2B0]
namespace lift_0060B2B0 {
// @name Unknown::initOwnedMembers
// @class Unknown
// @summary Stamps three vtable pointers into the object, resets the OwnedPointerRange at +0x10 and the string vector at +0x20, then runs the sub-object reset at offset 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x20 uint8_t field_0x20

extern void ext_004026E0(void* this_ptr);
extern void ext_006246B0(void* self);
extern void __fastcall ext_0065F440(void* self);
extern void ext_0060BDF0(void* self);
extern void* ext_0060C570(void* self);

extern const uint32_t mem_00924FD4;
extern const uint32_t mem_00924FE8;
extern const uint32_t mem_009518E0;

void fn_0060B2B0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x0097202Cu;
    *reinterpret_cast<uint32_t*>(base + 0x04) = 0x00972020u;
    *reinterpret_cast<uint32_t*>(base + 0x08) = 0x00972010u;

    ext_004026E0(base + 0x20);
    ext_006246B0(base + 0x10);
    ext_0065F440(self);

    // Metadata-only references (address taken, never called or read).
    // The original bytes do not call ext_0060BDF0/ext_0060C570 or read these rdata globals.
    (void)&ext_0060BDF0;
    (void)&ext_0060C570;
    (void)&mem_00924FD4;
    (void)&mem_00924FE8;
    (void)&mem_009518E0;
}
} // namespace lift_0060B2B0

// [0x0060CD40] sub_0060CD40 (128 bytes)
namespace lift_0060CD40 {
// Known callee 0x0060C570: Unknown::constructWithRecord (Runs the base constructor ext_0060B910 on self, stamps vtable 0x0097215C, clears the dword at +0x44, initializes the embedded record at +0x48 via ext_0060BCD0, and returns self.)
extern void* ext_0060C570(void* self);
// Known callee 0x0060BDF0: NMData::EffectorData::vfunc_19 (Runs the base-class vfunc_19, clears the dword at +0x44, then tail-calls the sub-object initializer at this+0x48.)
extern void ext_0060BDF0(void* self);
// .rdata string literal passed to std::string::operator=(const char*) at 0x0060CD88
extern const char mem_009719C4[];
// .rdata float constant 10.0f
extern const float mem_009518E0;
// MSVCP80 IAT slots used by the original asm for std::string default ctor / operator=(const char*).
// Replaced by the native std::string calls below; referenced here only to keep the original global deps recorded.
extern void* mem_00924FE8;
extern void* mem_00924FD4;

// @name Unknown::initStringAndFloats_0060CD40
// @class Unknown
// @summary Base-constructs self via ext_0060C570, stamps the vtable, default-constructs and assigns the std::string at +0x60, clears the float at +0x7C, sets +0x5C to 0x14 and +0x80 to 10.0f; returns self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x5C uint32_t field_0x5C
// @field Unknown +0x60 std::string str_0x60
// @field Unknown +0x7C float field_0x7C
// @field Unknown +0x80 float field_0x80
void* fn_0060CD40(void* self) {
    (void)&mem_00924FE8;
    (void)&mem_00924FD4;

    ext_0060C570(self);

    lift_field<uint32_t>(self, 0x00) = 0x00972234;

    std::string* str = new (&lift_field<std::string>(self, 0x60)) std::string();

    ext_0060BDF0(self);

    *str = std::string(mem_009719C4);

    lift_field<float>(self, 0x7C) = 0.0f;
    lift_field<uint32_t>(self, 0x5C) = 0x14;
    lift_field<float>(self, 0x80) = mem_009518E0;

    return self;
}
} // namespace lift_0060CD40

// [0x006080D0] sub_006080D0 (140 bytes)
namespace lift_006080D0 {
// Known callee 0x00602EF0: sub_00602EF0 (Destructor tail-call: restores vtable mem_0096F81C and tail-calls base destructor sub_0065F440.)
extern void ext_00602EF0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764 — frees a heap pointer.)
extern void ext_006A5C5C(void* ptr);
// IAT slot for std::basic_string<char>::~basic_string (MSVCP80), read at 0x00924FF4.
extern int mem_00924FF4;

// @name Unknown::releaseOwnedBuffers
// @class Unknown
// @summary Destroys the std::string at +0x8c, frees and clears the owned pointers at +0x7c and +0x64, then tail-calls the base destructor sub_00602EF0.
// @field Unknown +0x64 uint32_t field_0x64
// @field Unknown +0x68 uint32_t field_0x68
// @field Unknown +0x6c uint32_t field_0x6c
// @field Unknown +0x7c uint32_t field_0x7c
// @field Unknown +0x80 uint32_t field_0x80
// @field Unknown +0x84 uint32_t field_0x84
// @field Unknown +0x8c std::string field_0x8c
void fn_006080D0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the embedded std::string at +0x8c (MSVC __thiscall dtor via IAT slot).
    using StringDtor = void (*)(void*);
    auto string_dtor = reinterpret_cast<StringDtor>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    string_dtor(base + 0x8c);

    // Free +0x7c if set, then clear it and the two companion slots.
    uint32_t p7c = lift_field<uint32_t>(self, 0x7c);
    if (p7c != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(p7c)));
    }
    lift_field<uint32_t>(self, 0x7c) = 0;
    lift_field<uint32_t>(self, 0x80) = 0;
    lift_field<uint32_t>(self, 0x84) = 0;

    // Free +0x64 if set, then clear it and the two following slots.
    uint32_t p64 = lift_field<uint32_t>(self, 0x64);
    if (p64 != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(p64)));
    }
    lift_field<uint32_t>(self, 0x64) = 0;
    lift_field<uint32_t>(self, 0x68) = 0;
    lift_field<uint32_t>(self, 0x6c) = 0;

    // Tail-call base destructor path (vtable restore + base dtor).
    ext_00602EF0(self);
    (void)base;
}
} // namespace lift_006080D0

// [0x00609970] sub_00609970 (146 bytes)
namespace lift_00609970 {
// @name sub_00609970
// @summary Auto-lifted identical-shape clone of 0x004BA0D0 (Unknown::InitWithDynamicCast).
namespace lift_004BA0D0 {
// @name Unknown::InitWithDynamicCast
// @class Unknown
// @summary Sets vtable and a1/a3/a4 fields, stores dynamic_cast(a2) result at +0x14, and stores a2 at +0x08 when the cast result is null; returns this.
// @field Unknown +0x00 uint32_t vtbl
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24

extern void* ext_006657F0(void* self, uint32_t arg);
extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType,
                              const void* targetType, int32_t isReference);
extern const char mem_00A94CC0[];
extern const char mem_00A2F4F4[];

// Original is a 32-bit thiscall (this in ecx) with four stack args (ret 0x10).
// The MSVC SEH frame setup/teardown (fs:[0] chain, try level) is compiler-generated
// scope bookkeeping with no portable equivalent and is omitted; the data flow is kept.
void* fn_00609970(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    ext_006657F0(self, 0u);

    lift_field<uint32_t>(self, 0x00) = 0x971FC8u;
    lift_field<uint32_t>(self, 0x10) = a1;

    void* castSrc = reinterpret_cast<void*>(static_cast<uintptr_t>(a2));
    void* castResult = ext_006A6E9E(castSrc, 0, mem_00A2F4F4, mem_00A94CC0, 0);
    lift_field<uint32_t>(self, 0x14) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(castResult));

    lift_field<uint32_t>(self, 0x18) = 0u;
    lift_field<uint32_t>(self, 0x1c) = a3;
    lift_field<uint32_t>(self, 0x20) = 0u;
    lift_field<uint32_t>(self, 0x24) = a4;

    if (lift_field<uint32_t>(self, 0x14) == 0u) {
        lift_field<uint32_t>(self, 0x08) = a2;
    }

    return self;
}
} // namespace lift_004BA0D0
} // namespace lift_00609970

// [0x00608350] sub_00608350 (154 bytes)
namespace lift_00608350 {
// Known callee 0x00602F70: Unknown::ctor_00602F70 (Runs the base ctor (sub_00602EC0), sets vtable to 0x0096F8A4, zeroes floats at +0x2c/+0x30 and int at +0x34, initializes sub-records at +0x38 and +0x4c via sub_0060BCD0; returns this.)
extern void* ext_00602F70(void* self);
// Known callee 0x00607F20: FloatArray::assignFilled (allocate count floats and fill with value) (Resets the three array pointers, then for count > 0 allocates count float slots (throws if count > 0x3FFFFFFF) and fills them with *value_ptr.)
extern void __thiscall ext_00607F20(void* self, uint32_t count, uint32_t value_ptr);
// Import slot holding the address of the MSVCP80 std::basic_string<char> (const char*) constructor.
extern uint32_t mem_00924FE4;
// .rdata float constant 20.0f.
extern float mem_00956EE0;

// @name Unknown::ctor_00608350
// @class Unknown
// @summary Constructs the object: runs the base ctor, sets vtable 0x00971934, zeroes four ints at +0x64..+0x70, builds a 20-float array at +0x78 filled with 0.0, sets the count at +0x74 to 20, zeroes +0x88, constructs an empty std::string at +0x8C and sets float +0xAC to 20.0; returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x64 uint32_t field_0x64
// @field Unknown +0x68 uint32_t field_0x68
// @field Unknown +0x6c uint32_t field_0x6c
// @field Unknown +0x70 uint32_t field_0x70
// @field Unknown +0x74 uint32_t field_0x74
// @field Unknown +0x78 uint8_t field_0x78[0x14]
// @field Unknown +0x88 uint32_t field_0x88
// @field Unknown +0x8c uint8_t field_0x8c[0x18]
// @field Unknown +0xac float field_0xac
void* fn_00608350(void* self) {
    // Base ctor on this (ecx saved to esi), then store our vtable.
    ext_00602F70(self);
    lift_field<uint32_t>(self, 0x00) = 0x00971934u;

    lift_field<uint32_t>(self, 0x64) = 0u;
    lift_field<uint32_t>(self, 0x68) = 0u;
    lift_field<uint32_t>(self, 0x6C) = 0u;
    lift_field<uint32_t>(self, 0x70) = 0u;

    // Stack float 0.0f is passed by address as the fill value.
    float zero = 0.0f;
    lift_field<uint32_t>(self, 0x74) = 20u;

    void* arr = static_cast<uint8_t*>(self) + 0x78;
    ext_00607F20(arr, 20u, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&zero)));
    lift_field<uint32_t>(self, 0x88) = 0u;

    // Construct std::string from the literal at 0x009719C4 via the imported ctor.
    using StrCtorFn = void(__thiscall*)(void* self_str, const char* s);
    StrCtorFn str_ctor = reinterpret_cast<StrCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    str_ctor(static_cast<uint8_t*>(self) + 0x8C,
             reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009719C4u)));

    lift_field<float>(self, 0xAC) = mem_00956EE0;
    return self;
}
} // namespace lift_00608350

// [0x00602D60] sub_00602D60 (140 bytes)
namespace lift_00602D60 {
// @name sub_00602D60
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_00602D60(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA936F8u)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_00602D60

// [0x006033E0] sub_006033E0 (60 bytes)
namespace lift_006033E0 {
// @name sub_006033E0
// @summary Auto-lifted identical-shape clone of 0x0041CDA0 (ExprParser::GetTypeNameInto).
namespace lift_0041CDA0 {
// 28-byte MSVC std::string (x86) passed by value on the stack.
struct StdString28 {
    unsigned char bytes[28];
};

extern void ext_0066AC90(void* dst, StdString28 value);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A93750;  // global std::type_info object
extern int mem_00B5CE94;  // __type_info_node pointer constant
extern int mem_00924FD0;
extern int mem_00924FF4;

// @name ExprParser::GetTypeNameInto
// @summary Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.
void* fn_006033E0(void* dst) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    // Metadata-only refs (not accessed by this function's asm).
    (void)&mem_00924FD0;
    (void)&mem_00924FF4;

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A93750),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    StdString28 str{};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(&str), name);

    ext_0066AC90(dst, str);
    return dst;
}
} // namespace lift_0041CDA0
} // namespace lift_006033E0

// [0x00608990] sub_00608990 (114 bytes)
namespace lift_00608990 {
// @name sub_00608990
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006053C0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608990(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006053C0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608990

// [0x00608A10] sub_00608A10 (114 bytes)
namespace lift_00608A10 {
// @name sub_00608A10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605420();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608A10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605420();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608A10

// [0x00608A90] sub_00608A90 (114 bytes)
namespace lift_00608A90 {
// @name sub_00608A90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605480();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608A90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605480();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608A90

// [0x00608B10] sub_00608B10 (114 bytes)
namespace lift_00608B10 {
// @name sub_00608B10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006054E0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608B10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006054E0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608B10

// [0x00608B90] sub_00608B90 (114 bytes)
namespace lift_00608B90 {
// @name sub_00608B90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605540();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608B90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605540();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608B90

// [0x00608C10] sub_00608C10 (114 bytes)
namespace lift_00608C10 {
// @name sub_00608C10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006055A0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608C10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006055A0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608C10

// [0x00608C90] sub_00608C90 (114 bytes)
namespace lift_00608C90 {
// @name sub_00608C90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605600();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608C90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605600();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608C90

// [0x00608D10] sub_00608D10 (114 bytes)
namespace lift_00608D10 {
// @name sub_00608D10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605660();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608D10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605660();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608D10

// [0x00608D90] sub_00608D90 (114 bytes)
namespace lift_00608D90 {
// @name sub_00608D90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006056C0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608D90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006056C0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608D90

// [0x00608E10] sub_00608E10 (114 bytes)
namespace lift_00608E10 {
// @name sub_00608E10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605720();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608E10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605720();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608E10

// [0x00608E90] sub_00608E90 (114 bytes)
namespace lift_00608E90 {
// @name sub_00608E90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605780();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608E90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605780();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608E90

// [0x00608F10] sub_00608F10 (114 bytes)
namespace lift_00608F10 {
// @name sub_00608F10
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006057E0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608F10(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006057E0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608F10

// [0x00608F90] sub_00608F90 (114 bytes)
namespace lift_00608F90 {
// @name sub_00608F90
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605840();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00608F90(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605840();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00608F90

// [0x00609010] sub_00609010 (114 bytes)
namespace lift_00609010 {
// @name sub_00609010
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_006058A0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00609010(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_006058A0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00609010

// [0x00609090] sub_00609090 (114 bytes)
namespace lift_00609090 {
// @name sub_00609090
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00605900();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00609090(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00605900();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00609090

// [0x006093C0] sub_006093C0 (140 bytes)
namespace lift_006093C0 {
// @name sub_006093C0
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_006093C0(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA94860u)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_006093C0

// [0x00609450] sub_00609450 (140 bytes)
namespace lift_00609450 {
// @name sub_00609450
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_00609450(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA9487Cu)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_00609450

// [0x0060B620] sub_0060B620 (114 bytes)
namespace lift_0060B620 {
// @name sub_0060B620
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_0060A1E0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_0060B620(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_0060A1E0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_0060B620

// [0x0060B800] sub_0060B800 (140 bytes)
namespace lift_0060B800 {
// @name sub_0060B800
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_0060B800(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA94E4Cu)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_0060B800

// [0x0060C130] sub_0060C130 (60 bytes)
namespace lift_0060C130 {
// @name sub_0060C130
// @summary Auto-lifted identical-shape clone of 0x0041CDA0 (ExprParser::GetTypeNameInto).
namespace lift_0041CDA0 {
// 28-byte MSVC std::string (x86) passed by value on the stack.
struct StdString28 {
    unsigned char bytes[28];
};

extern void ext_0066AC90(void* dst, StdString28 value);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A93768;  // global std::type_info object
extern int mem_00B5CE94;  // __type_info_node pointer constant
extern int mem_00924FD0;
extern int mem_00924FF4;

// @name ExprParser::GetTypeNameInto
// @summary Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.
void* fn_0060C130(void* dst) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    // Metadata-only refs (not accessed by this function's asm).
    (void)&mem_00924FD0;
    (void)&mem_00924FF4;

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A93768),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    StdString28 str{};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(&str), name);

    ext_0066AC90(dst, str);
    return dst;
}
} // namespace lift_0041CDA0
} // namespace lift_0060C130

// [0x0060E7E0] sub_0060E7E0 (60 bytes)
namespace lift_0060E7E0 {
// @name sub_0060E7E0
// @summary Auto-lifted identical-shape clone of 0x0041CDA0 (ExprParser::GetTypeNameInto).
namespace lift_0041CDA0 {
// 28-byte MSVC std::string (x86) passed by value on the stack.
struct StdString28 {
    unsigned char bytes[28];
};

extern void ext_0066AC90(void* dst, StdString28 value);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A94FCC;  // global std::type_info object
extern int mem_00B5CE94;  // __type_info_node pointer constant
extern int mem_00924FD0;
extern int mem_00924FF4;

// @name ExprParser::GetTypeNameInto
// @summary Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.
void* fn_0060E7E0(void* dst) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    // Metadata-only refs (not accessed by this function's asm).
    (void)&mem_00924FD0;
    (void)&mem_00924FF4;

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A94FCC),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    StdString28 str{};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(&str), name);

    ext_0066AC90(dst, str);
    return dst;
}
} // namespace lift_0041CDA0
} // namespace lift_0060E7E0

// [0x0060E820] sub_0060E820 (60 bytes)
namespace lift_0060E820 {
// @name sub_0060E820
// @summary Auto-lifted identical-shape clone of 0x0041CDA0 (ExprParser::GetTypeNameInto).
namespace lift_0041CDA0 {
// 28-byte MSVC std::string (x86) passed by value on the stack.
struct StdString28 {
    unsigned char bytes[28];
};

extern void ext_0066AC90(void* dst, StdString28 value);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A94FEC;  // global std::type_info object
extern int mem_00B5CE94;  // __type_info_node pointer constant
extern int mem_00924FD0;
extern int mem_00924FF4;

// @name ExprParser::GetTypeNameInto
// @summary Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.
void* fn_0060E820(void* dst) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    // Metadata-only refs (not accessed by this function's asm).
    (void)&mem_00924FD0;
    (void)&mem_00924FF4;

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A94FEC),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    StdString28 str{};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(&str), name);

    ext_0066AC90(dst, str);
    return dst;
}
} // namespace lift_0041CDA0
} // namespace lift_0060E820

// [0x006082D0] sub_006082D0 (128 bytes)
namespace lift_006082D0 {
// @name sub_006082D0
// @summary Auto-lifted identical-shape clone of 0x0041E4C0 (ClassFactory<CompoundSensor>::ctor).
namespace lift_0041E4C0 {
// Known callee 0x0041CDA0: ExprParser::GetTypeNameInto (Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.)
extern void* ext_006033E0(void* dst);
// Callee 0x0040ECB0 (166 bytes, unnamed): thiscall on global 0xB5962C with one stack argument.
extern void ext_0040ECB0(void* self, void* arg);
extern int mem_009719C0;
extern int mem_00B5962C;
// IAT slot for MSVCP80 ~basic_string; the destructor is implicit below (metadata reference only).
extern int mem_00924FF4;

// @name ClassFactory<CompoundSensor>::ctor
// @class ClassFactory<CompoundSensor>
// @summary Installs the factory vtable, zeroes its state fields, then writes the type name of the global type object to the stream at 0xB5962C; returns this.
// @field ClassFactory<CompoundSensor> +0x00 uint32_t vptr
// @field ClassFactory<CompoundSensor> +0x08 uint32_t field_0x08
// @field ClassFactory<CompoundSensor> +0x0c uint32_t field_0x0c
// @field ClassFactory<CompoundSensor> +0x10 uint32_t field_0x10
// @field ClassFactory<CompoundSensor> +0x18 uint32_t field_0x18
// @field ClassFactory<CompoundSensor> +0x1c uint32_t field_0x1c
// @field ClassFactory<CompoundSensor> +0x20 uint32_t field_0x20
void* fn_006082D0(void* self) {
    // Vtable pointer: the original stores the immediate VA of the vtable (mem_0092DF84).
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_009719C0));
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string filled by GetTypeNameInto; destroyed automatically at scope exit.
    std::string name;
    void* text = ext_006033E0(&name);
    ext_0040ECB0(&mem_00B5962C, text);
    (void)&mem_00924FF4;

    return self;
}
} // namespace lift_0041E4C0
} // namespace lift_006082D0

// [0x00609110] sub_00609110 (90 bytes)
namespace lift_00609110 {
// @name sub_00609110
// @summary Auto-lifted identical-shape clone of 0x004C9860 (initStaticObjectOnce_004C9860).
namespace lift_004C9860 {
// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47840;
// Static object (global) whose address is returned; also the `this` passed to ext_004C94E0.
extern DWORD mem_00B4781C;

// __thiscall: ECX = &mem_00AE3D94, no stack arguments.
extern void __thiscall ext_006082D0(void* self);
// __cdecl: one stack argument (0x00918AE0), caller pops.
extern void ext_006A6C87(DWORD arg);

// @name initStaticObjectOnce_004C9860
// @summary One-time initializer for the static object at mem_00AE3D94: under a local SEH frame, runs ext_004C94E0 on the object and ext_006A6C87(0x918AE0) on first call, marks the guard bit, and returns the object's address.
void* fn_00609110() {
    // Local SEH registration record: [0] = previous frame, [1] = handler (0x0088BD3E), [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A82AEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47840 & 1u) == 0) {
        mem_00B47840 |= 1u;
        frame[2] = 0;
        ext_006082D0(&mem_00B4781C);
        ext_006A6C87(0x91E700u);
    }

    mem_fs_0 = frame[0];
    return &mem_00B4781C;
}
} // namespace lift_004C9860
} // namespace lift_00609110

// [0x0060A470] sub_0060A470 (117 bytes)
namespace lift_0060A470 {
// @name sub_0060A470
// @summary Auto-lifted identical-shape clone of 0x0049CF60 (NewAndInitDynCastObject).
namespace lift_0049CF60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl allocator, called with size 0x28)
extern void* ext_006A5C62(size_t size);
// Known callee 0x0049B400: Unknown::InitDynCastFields (thiscall-style: self in ecx, four stack args)
extern void* ext_00609970(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (returns global int32 value from mem_00B59420)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes; signature not recovered, modeled as thiscall with one stack arg)
extern uint32_t ext_00666670(void* self, uint32_t arg);

// @name NewAndInitDynCastObject
// @summary Allocates a 0x28-byte object; if allocation succeeds, initializes it via InitDynCastFields with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670.
// (No direct field accesses on self; self is only forwarded as an argument, so no @field lines.)
uint32_t fn_0060A470(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* obj = ext_006A5C62(0x28);

    uint32_t result = 0;
    if (obj != nullptr) {
        void* init = ext_00609970(obj,
                                  static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                                  a1, a2, a3);
        result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(init));
    }

    int32_t global = ext_00665870();
    void* ctx = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global)));
    return ext_00666670(ctx, result);
}
} // namespace lift_0049CF60
} // namespace lift_0060A470

// [0x0060AFD0] sub_0060AFD0 (126 bytes)
namespace lift_0060AFD0 {
// @name sub_0060AFD0
// @summary Auto-lifted identical-shape clone of 0x0049EE60 (ConstructAndRegister_0049EE60).
namespace lift_0049EE60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (0x28) and its result is null-checked: allocation-style.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x0049E930: sub_0049E930 (326 bytes)
// Thiscall: ecx = obj, then 5 stack args (outer this, a1..a4).
extern void* ext_0060ACD0(void* obj, void* outer, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes)
// Thiscall: ecx = int32 from ext_00665870, one stack arg (result of ext_0049E930 or null).
extern void ext_00666670(int32_t self, void* result);
// SEH scope table referenced by the prolog (push 0x008A7A5B).
extern int mem_008A7A5B;

// @name ConstructAndRegister_0049EE60
// @summary Allocates a 0x28-byte object, constructs it via sub_0049E930 when allocation succeeds, then calls sub_00665870/sub_00666670 and returns the second argument.
// Note: the SEH frame (fs:[0] push/restore and trylevel bookkeeping) is not reproduced; portable C++ has no equivalent.
uint32_t fn_0060AFD0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    (void)&mem_008A7A5B;  // SEH scope table address from prolog; frame itself omitted.

    void* obj = ext_006A5C62(0x28);
    void* result = nullptr;
    if (obj != nullptr) {
        result = ext_0060ACD0(obj, self, a1, a2, a3, a4);
    }

    int32_t g = ext_00665870();
    ext_00666670(g, result);
    return a2;
}
} // namespace lift_0049EE60
} // namespace lift_0060AFD0

// [0x0060DB80] sub_0060DB80 (128 bytes)
namespace lift_0060DB80 {
// @name sub_0060DB80
// @summary Auto-lifted identical-shape clone of 0x0041E4C0 (ClassFactory<CompoundSensor>::ctor).
namespace lift_0041E4C0 {
// Known callee 0x0041CDA0: ExprParser::GetTypeNameInto (Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.)
extern void* ext_0060C130(void* dst);
// Callee 0x0040ECB0 (166 bytes, unnamed): thiscall on global 0xB5962C with one stack argument.
extern void ext_0040ECB0(void* self, void* arg);
extern int mem_00972468;
extern int mem_00B5962C;
// IAT slot for MSVCP80 ~basic_string; the destructor is implicit below (metadata reference only).
extern int mem_00924FF4;

// @name ClassFactory<CompoundSensor>::ctor
// @class ClassFactory<CompoundSensor>
// @summary Installs the factory vtable, zeroes its state fields, then writes the type name of the global type object to the stream at 0xB5962C; returns this.
// @field ClassFactory<CompoundSensor> +0x00 uint32_t vptr
// @field ClassFactory<CompoundSensor> +0x08 uint32_t field_0x08
// @field ClassFactory<CompoundSensor> +0x0c uint32_t field_0x0c
// @field ClassFactory<CompoundSensor> +0x10 uint32_t field_0x10
// @field ClassFactory<CompoundSensor> +0x18 uint32_t field_0x18
// @field ClassFactory<CompoundSensor> +0x1c uint32_t field_0x1c
// @field ClassFactory<CompoundSensor> +0x20 uint32_t field_0x20
void* fn_0060DB80(void* self) {
    // Vtable pointer: the original stores the immediate VA of the vtable (mem_0092DF84).
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00972468));
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string filled by GetTypeNameInto; destroyed automatically at scope exit.
    std::string name;
    void* text = ext_0060C130(&name);
    ext_0040ECB0(&mem_00B5962C, text);
    (void)&mem_00924FF4;

    return self;
}
} // namespace lift_0041E4C0
} // namespace lift_0060DB80

// [0x0060DDA0] sub_0060DDA0 (90 bytes)
namespace lift_0060DDA0 {
// @name sub_0060DDA0
// @summary Auto-lifted identical-shape clone of 0x004C9860 (initStaticObjectOnce_004C9860).
namespace lift_004C9860 {
// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47F60;
// Static object (global) whose address is returned; also the `this` passed to ext_004C94E0.
extern DWORD mem_00B47F3C;

// __thiscall: ECX = &mem_00AE3D94, no stack arguments.
extern void __thiscall ext_0060DB80(void* self);
// __cdecl: one stack argument (0x00918AE0), caller pops.
extern void ext_006A6C87(DWORD arg);

// @name initStaticObjectOnce_004C9860
// @summary One-time initializer for the static object at mem_00AE3D94: under a local SEH frame, runs ext_004C94E0 on the object and ext_006A6C87(0x918AE0) on first call, marks the guard bit, and returns the object's address.
void* fn_0060DDA0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler (0x0088BD3E), [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A883Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47F60 & 1u) == 0) {
        mem_00B47F60 |= 1u;
        frame[2] = 0;
        ext_0060DB80(&mem_00B47F3C);
        ext_006A6C87(0x91E910u);
    }

    mem_fs_0 = frame[0];
    return &mem_00B47F3C;
}
} // namespace lift_004C9860
} // namespace lift_0060DDA0

// [0x0060FA60] sub_0060FA60 (128 bytes)
namespace lift_0060FA60 {
// @name sub_0060FA60
// @summary Auto-lifted identical-shape clone of 0x0041E4C0 (ClassFactory<CompoundSensor>::ctor).
namespace lift_0041E4C0 {
// Known callee 0x0041CDA0: ExprParser::GetTypeNameInto (Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.)
extern void* ext_0060E7E0(void* dst);
// Callee 0x0040ECB0 (166 bytes, unnamed): thiscall on global 0xB5962C with one stack argument.
extern void ext_0040ECB0(void* self, void* arg);
extern int mem_00972AA4;
extern int mem_00B5962C;
// IAT slot for MSVCP80 ~basic_string; the destructor is implicit below (metadata reference only).
extern int mem_00924FF4;

// @name ClassFactory<CompoundSensor>::ctor
// @class ClassFactory<CompoundSensor>
// @summary Installs the factory vtable, zeroes its state fields, then writes the type name of the global type object to the stream at 0xB5962C; returns this.
// @field ClassFactory<CompoundSensor> +0x00 uint32_t vptr
// @field ClassFactory<CompoundSensor> +0x08 uint32_t field_0x08
// @field ClassFactory<CompoundSensor> +0x0c uint32_t field_0x0c
// @field ClassFactory<CompoundSensor> +0x10 uint32_t field_0x10
// @field ClassFactory<CompoundSensor> +0x18 uint32_t field_0x18
// @field ClassFactory<CompoundSensor> +0x1c uint32_t field_0x1c
// @field ClassFactory<CompoundSensor> +0x20 uint32_t field_0x20
void* fn_0060FA60(void* self) {
    // Vtable pointer: the original stores the immediate VA of the vtable (mem_0092DF84).
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00972AA4));
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string filled by GetTypeNameInto; destroyed automatically at scope exit.
    std::string name;
    void* text = ext_0060E7E0(&name);
    ext_0040ECB0(&mem_00B5962C, text);
    (void)&mem_00924FF4;

    return self;
}
} // namespace lift_0041E4C0
} // namespace lift_0060FA60

// [0x0060FEB0] sub_0060FEB0 (128 bytes)
namespace lift_0060FEB0 {
// @name sub_0060FEB0
// @summary Auto-lifted identical-shape clone of 0x0041E4C0 (ClassFactory<CompoundSensor>::ctor).
namespace lift_0041E4C0 {
// Known callee 0x0041CDA0: ExprParser::GetTypeNameInto (Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.)
extern void* ext_0060E820(void* dst);
// Callee 0x0040ECB0 (166 bytes, unnamed): thiscall on global 0xB5962C with one stack argument.
extern void ext_0040ECB0(void* self, void* arg);
extern int mem_00972CA4;
extern int mem_00B5962C;
// IAT slot for MSVCP80 ~basic_string; the destructor is implicit below (metadata reference only).
extern int mem_00924FF4;

// @name ClassFactory<CompoundSensor>::ctor
// @class ClassFactory<CompoundSensor>
// @summary Installs the factory vtable, zeroes its state fields, then writes the type name of the global type object to the stream at 0xB5962C; returns this.
// @field ClassFactory<CompoundSensor> +0x00 uint32_t vptr
// @field ClassFactory<CompoundSensor> +0x08 uint32_t field_0x08
// @field ClassFactory<CompoundSensor> +0x0c uint32_t field_0x0c
// @field ClassFactory<CompoundSensor> +0x10 uint32_t field_0x10
// @field ClassFactory<CompoundSensor> +0x18 uint32_t field_0x18
// @field ClassFactory<CompoundSensor> +0x1c uint32_t field_0x1c
// @field ClassFactory<CompoundSensor> +0x20 uint32_t field_0x20
void* fn_0060FEB0(void* self) {
    // Vtable pointer: the original stores the immediate VA of the vtable (mem_0092DF84).
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00972CA4));
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string filled by GetTypeNameInto; destroyed automatically at scope exit.
    std::string name;
    void* text = ext_0060E820(&name);
    ext_0040ECB0(&mem_00B5962C, text);
    (void)&mem_00924FF4;

    return self;
}
} // namespace lift_0041E4C0
} // namespace lift_0060FEB0

// [0x0060FF30] sub_0060FF30 (90 bytes)
namespace lift_0060FF30 {
// @name sub_0060FF30
// @summary Auto-lifted identical-shape clone of 0x004C9860 (initStaticObjectOnce_004C9860).
namespace lift_004C9860 {
// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B485D8;
// Static object (global) whose address is returned; also the `this` passed to ext_004C94E0.
extern DWORD mem_00B485B4;

// __thiscall: ECX = &mem_00AE3D94, no stack arguments.
extern void __thiscall ext_0060FA60(void* self);
// __cdecl: one stack argument (0x00918AE0), caller pops.
extern void ext_006A6C87(DWORD arg);

// @name initStaticObjectOnce_004C9860
// @summary One-time initializer for the static object at mem_00AE3D94: under a local SEH frame, runs ext_004C94E0 on the object and ext_006A6C87(0x918AE0) on first call, marks the guard bit, and returns the object's address.
void* fn_0060FF30() {
    // Local SEH registration record: [0] = previous frame, [1] = handler (0x0088BD3E), [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A8B8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B485D8 & 1u) == 0) {
        mem_00B485D8 |= 1u;
        frame[2] = 0;
        ext_0060FA60(&mem_00B485B4);
        ext_006A6C87(0x91EA20u);
    }

    mem_fs_0 = frame[0];
    return &mem_00B485B4;
}
} // namespace lift_004C9860
} // namespace lift_0060FF30
