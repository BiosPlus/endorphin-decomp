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

// [0x00602EC0]
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

// [0x0060B8D0] sub_0060B8D0 (62 bytes)
namespace lift_0060B8D0 {
// Format string at 0x009720E8 (.rdata), used as the snprintf format.
extern const char mem_009720E8[];

// @name StringFromFormattedInt
// @summary Formats an int into a 50-byte buffer with snprintf and constructs a std::string in place from it; returns the string object.
std::string* fn_0060B8D0(std::string* self, int value) {
    char buf[50];
    std::snprintf(buf, sizeof(buf), mem_009720E8, value);
    new (self) std::string(buf);
    return self;
}
} // namespace lift_0060B8D0

// [0x0060FA40]
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

// [0x0060AF10] sub_0060AF10 (74 bytes)
namespace lift_0060AF10 {
// @name sub_0060AF10
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
} // namespace lift_0060AF10

// [0x0060C4C0] sub_0060C4C0 (77 bytes)
namespace lift_0060C4C0 {
// Known callee 0x0060BCC0: sub_0060BCC0 (Destructor tail-call: restores vtable mem_0097215C and tail-calls base destructor sub_0060BA10.)
extern void ext_0060BCC0(void* self);

// @name Unknown::Destructor_0060C4C0
// @class Unknown
// @summary Destroys the std::string member at +0x60, then runs the base destructor chain via ext_0060BCC0.
// @field Unknown +0x60 std::string field_0x60
void fn_0060C4C0(void* self) {
    // Destroy the embedded std::string at this+0x60 (MSVC basic_string dtor in the original).
    auto* str = &lift_field<std::string>(self, 0x60);
    str->~basic_string();

    // Tail-call the base destructor chain.
    ext_0060BCC0(self);
}
} // namespace lift_0060C4C0

// [0x006098F0] sub_006098F0 (89 bytes)
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

// [0x00609670]
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

// [0x0060A340] sub_0060A340 (85 bytes)
namespace lift_0060A340 {
// Known callee 0x00609670: StringPairKey::operator< (__fastcall: this in ECX, EDX unused, other on stack; returns bool in AL)
extern uint32_t ext_00609670(uint32_t this_ptr, uint32_t unused_edx, uint32_t other_ptr);

// @name Sort3StringPairKeys
// @summary Three-element compare-and-swap network over 32-bit slots holding StringPairKey pointers; orders *a <= *b <= *c using StringPairKey::operator<.
void fn_0060A340(uint32_t* a, uint32_t* b, uint32_t* c) {
    auto lessThan = [](uint32_t lhs, uint32_t rhs) -> bool {
        return (ext_00609670(lhs, 0, rhs) & 0xFFu) != 0;
    };
    auto swapSlots = [](uint32_t* x, uint32_t* y) {
        uint32_t tmp = *x;
        *x = *y;
        *y = tmp;
    };

    // Step 1: if (*b < *a) swap(a, b)
    if (lessThan(*b, *a)) {
        swapSlots(b, a);
    }
    // Step 2: if (*c < *b) swap(c, b)
    if (lessThan(*c, *b)) {
        swapSlots(c, b);
    }
    // Step 3: if (*b < *a) swap(b, a)
    if (lessThan(*b, *a)) {
        swapSlots(b, a);
    }
}
} // namespace lift_0060A340

// [0x006096D0] sub_006096D0 (91 bytes)
namespace lift_006096D0 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);

// @name Unknown::resetStringFieldsAndInit
// @class Unknown
// @summary Clears the two std::string members at +0x20 and +0x04, then runs the 0x0065F440 initializer on self.
// @field Unknown +0x04 std::string field_0x04
// @field Unknown +0x20 std::string field_0x20
void fn_006096D0(void* self) {
    // The original MSVC code tears down the two string members via their
    // destructor thunk (through the IAT slot at 0x00924FF4) and then calls
    // 0x0065F440. Portable form: reset each string to empty in place (same
    // observable state as the destroyed string being left empty), then call the initializer.
    lift_field<std::string>(self, 0x20) = std::string();
    lift_field<std::string>(self, 0x04) = std::string();
    ext_0065F440(self);
}
} // namespace lift_006096D0

// [0x00602F70] sub_00602F70 (91 bytes)
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

// [0x006053C0] sub_006053C0 (87 bytes)
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

// [0x00605900] sub_00605900 (87 bytes)
namespace lift_00605900 {
// @name sub_00605900
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
} // namespace lift_00605900

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
