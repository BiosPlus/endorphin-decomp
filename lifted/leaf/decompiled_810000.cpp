// Lifted C++ translation unit: lifted/leaf/decompiled_810000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x008113C4] sub_008113C4 (28 bytes)
namespace lift_008113C4 {
// @name FlagTable_008113C4
// @summary 18-byte 0/1 flag table at 0x008113C4 followed by 10 bytes of 0x90 padding; not executable code.

// The bytes at 0x008113C4 disassemble as data, not instructions: 18 bytes of
// 0x00/0x01 values followed by 10 bytes of 0x90 (padding). Lifted here as the
// table itself; the function body is intentionally empty.
static constexpr uint8_t kFlagTable_008113C4[18] = {
    0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
};

void fn_008113C4(void* self) {
    (void)self;
    (void)kFlagTable_008113C4;
}
} // namespace lift_008113C4

// [0x008110F0] sub_008110F0 (32 bytes)
namespace lift_008110F0 {
// @name ToUpperAsciiLowercaseOnly
// @summary Returns c - 0x20 if c is in ['a', 'z'] (signed compare), otherwise c unchanged.
int fn_008110F0(int c) {
    if (c >= 0x61 && c <= 0x7A) {
        c += -0x20;
    }
    return c;
}
} // namespace lift_008110F0

// [0x0081150C] sub_0081150C (36 bytes)
namespace lift_0081150C {
// @name Data_0081150C_byteTable
// @summary 36-byte read-only lookup table (not executable code): 22 index/value bytes followed by 9 0x90 padding bytes.
//
// The bytes at this address are never executed; they are data. They are
// exposed here as a const table plus an accessor so the lift is portable C++20.

namespace {

constexpr std::uint8_t kByteTable_0081150C[36] = {
    0x00, 0x08, 0x08, 0x08, 0x08, 0x01, 0x02, 0x08,
    0x08, 0x03, 0x08, 0x08, 0x08, 0x08, 0x04, 0x08,
    0x08, 0x05, 0x08, 0x06, 0x08, 0x07, 0x90, 0x90,
    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
    0x90, 0x90, 0x90, 0x90,
};

}  // namespace

// Returns the address of the table (never dereferenced by callers here).
const std::uint8_t* fn_0081150C(void* self) {
    (void)self;
    return kByteTable_0081150C;
}
} // namespace lift_0081150C

// [0x00810320]
namespace lift_00810320 {
// @name set_flag_bit_24
// @summary Sets or clears bit 24 (0x01000000) in a nested struct's flags field at +0x04
// @field unknown +0x04 uint32_t field_0x04

extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

void sub_00810320(uint32_t arg1, uint32_t arg2) {
    uint32_t inner = mem_read32(arg1 + 0x4);
    uint32_t flags = mem_read32(inner + 0x4);
    if (arg2 != 0) {
        mem_write32(inner + 0x4, flags | 0x01000000u);
    } else {
        mem_write32(inner + 0x4, flags & 0xFEFFFFFFu);
    }
}
} // namespace lift_00810320

// [0x008102D0]
namespace lift_008102D0 {
// @name sub_008102D0
// @summary Sets (flag != 0) or clears (flag == 0) bit 0x2000 in the dword at +0x4 of the object referenced by the first argument's +0x4 pointer.
// @field ObjA +0x04 ptr<ObjB> ptr_b
// @field ObjB +0x04 uint32 flags

struct ObjB {
    uint8_t field_0x00[0x04];
    uint32_t flags;             // +0x04
};

struct ObjA {
    uint8_t field_0x00[0x04];
    ObjB* ptr_b;                // +0x04
};

void sub_008102D0(ObjA* a, uint32_t flag) {
    ObjB* b = a->ptr_b;
    if (flag != 0) {
        b->flags |= 0x00002000u;
    } else {
        b->flags &= ~0x00002000u;
    }
}
} // namespace lift_008102D0

// [0x008103C0] sub_008103C0 (42 bytes)
namespace lift_008103C0 {
// @name SetIndirectFlag0x1000
// @class Unknown
// @summary Sets or clears bit 0x1000 (bit 12) in the dword at +0x04 of the object referenced by self+0x04, based on a flag argument.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 DWORD field_0x04
void fn_008103C0(void* self, DWORD flag) {
    void* inner = lift_field<void*>(self, 0x04);
    DWORD& bits = lift_field<DWORD>(inner, 0x04);
    if (flag != 0) {
        bits |= 0x00001000u;
    } else {
        bits &= ~0x00001000u;
    }
}
} // namespace lift_008103C0

// [0x00810410] sub_00810410 (42 bytes)
namespace lift_00810410 {
// @name SetOrClearFlag0x800ViaIndirect4
// @class Object
// @summary Sets (flag != 0) or clears (flag == 0) bit 0x800 in the dword at +0x4 of the object referenced by self+0x4.
// @field Object +0x04 void* field_0x04
// @field Object +0x04 uint32_t field_0x04 (flags dword at target+0x4)
void fn_00810410(void* self, uint32_t flag) {
    void* target = lift_field<void*>(self, 0x4);
    uint32_t& flags = lift_field<uint32_t>(target, 0x4);
    if (flag != 0) {
        flags |= 0x800u;
    } else {
        flags &= ~0x800u;
    }
}
} // namespace lift_00810410

// [0x00810370] sub_00810370 (42 bytes)
namespace lift_00810370 {
// @name set_or_clear_flag_0x8000_on_subobject
// @summary If flag is nonzero, sets bit 0x8000 in the dword at sub->+0x4; otherwise clears it. sub = arg0->+0x4.
// @field arg0 +0x04 void* sub (pointer to sub-object)
// @field sub +0x04 uint32_t flags (bit 0x8000 toggled)
void fn_00810370(void* arg0, uint32_t flag) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(arg0) + 0x4);
    uint32_t* flags = reinterpret_cast<uint32_t*>(sub + 0x4);
    if (flag != 0) {
        *flags |= 0x00008000u;
    } else {
        *flags &= ~0x00008000u;
    }
}
} // namespace lift_00810370

// [0x00810460] sub_00810460 (42 bytes)
namespace lift_00810460 {
// @name SetOrClearFlag0x400ViaIndirect4
// @class Unknown
// @summary If arg2 != 0, set 0x400 in the dword at (*(self+0x04))+0x04; otherwise clear it.
// @field Unknown +0x04 void* field_0x04 (pointer to inner object)
// @field Unknown +0x04 uint32_t flags (on inner object; bit 0x400 set/cleared)
void fn_00810460(void* self, int enable) {
    auto* outer = reinterpret_cast<uint8_t*>(self);
    auto* inner = *reinterpret_cast<uint8_t**>(outer + 0x04);
    auto* flags = reinterpret_cast<uint32_t*>(inner + 0x04);
    if (enable != 0) {
        *flags |= 0x00000400u;
    } else {
        *flags &= ~0x00000400u;
    }
}
} // namespace lift_00810460

// [0x00810270] sub_00810270 (64 bytes)
namespace lift_00810270 {
// @name Unknown::GetInnerFlagBit2
// @class Unknown
// @summary Follows self->+0x04 ->+0x04 to a flags DWORD and returns its bit 2 (0 or 1).
// @field Unknown +0x04 void* field_0x04
// @field Unknown_Inner +0x04 void* field_0x04
// @field Unknown_Flags +0x04 DWORD field_0x04
DWORD fn_00810270(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    DWORD flags = lift_field<DWORD>(lift_field<void*>(inner, 0x04), 0x04);
    return (flags >> 2) & 1u;
}
} // namespace lift_00810270

// [0x00810180] sub_00810180 (17 bytes: 0x810180..0x810190, ends in ret)
namespace lift_00810180 {
// @name sub_00810180
// @summary Returns bit 6 (0x40) of the dword at +0x04 of the object referenced by self+0x04.
// @field unknown +0x04 void* field_0x04
// @field unknown +0x04 uint32_t field_0x04
//
// Access chain: self -> p = [self+0x04] -> q = [p+0x04]; result = (q >> 6) & 1.
// No class is identified for `self`; the intermediate object's type is unknown.
// Offsets are kept as field_0xNN per the no-guess rule.
uint32_t fn_00810180(void* self) {
    void* p = lift_field<void*>(self, 0x04);
    const uint32_t q = lift_field<uint32_t>(p, 0x04);
    return (q >> 6) & 1u;
}
} // namespace lift_00810180

// [0x00810200] sub_00810200 (64 bytes)
namespace lift_00810200 {
// @name Unknown::QueryLinkedFlagBit3
// @class Unknown
// @summary Returns bit 3 of the flags dword reached via self->link (self+0x4 -> link, link+0x4 -> flags).
// @field Unknown +0x04 uint32_t field_0x04 (self -> link pointer)
// @field Unknown +0x04 uint32_t field_0x04 (link -> flags dword)
static inline uint32_t ReadU32At(uintptr_t base, uintptr_t off) {
    uint32_t v;
    std::memcpy(&v, reinterpret_cast<const void*>(base + off), sizeof v);
    return v;
}

uint32_t fn_00810200(void* self) {
    const uintptr_t selfAddr = reinterpret_cast<uintptr_t>(self);
    const uintptr_t link = ReadU32At(selfAddr, 0x04);
    const uint32_t flags = ReadU32At(link, 0x04);
    return (flags >> 3) & 1u;
}
} // namespace lift_00810200

// [0x00810C30] sub_00810C30 (64 bytes)
namespace lift_00810C30 {
// Flag table at 0x00AB8E00: 2-byte entries indexed by value; bit 0x08 of the low byte means "continue".
extern const uint8_t mem_00AB8E00[];

// @name ChainWalkWhileFlagged
// @summary Reads an index from self+0x0c, then repeatedly calls the callback at self+0x04 with that index
//          (updated in place by the callback) while the flag table marks the index as continuable.
// @field Unknown +0x04 void* callback
// @field Unknown +0x0c uint32_t index
void fn_00810C30(void* self) {
    using Callback = void (__cdecl*)(void* self, uint32_t* index);

    uint32_t index = lift_field<uint32_t>(self, 0x0c);
    while (mem_00AB8E00[2 * static_cast<size_t>(index)] & 0x08) {
        auto callback = lift_field<Callback>(self, 0x04);
        callback(self, &index);
    }
}
} // namespace lift_00810C30

// [0x008101C0]
namespace lift_008101C0 {
extern uint32_t mem_read32(uint32_t addr);

// @name getFlagBit4
// @summary Reads bit 4 of a 32-bit flags field via a two-level pointer dereference at offset +0x04.
// @field Object +0x04 uint32_t field_0x04
uint32_t sub_008101C0(uint32_t arg0) {
    uint32_t ecx = mem_read32(arg0 + 0x4);
    uint32_t eax = mem_read32(ecx + 0x4);
    return (eax >> 4) & 1u;
}
} // namespace lift_008101C0

// [0x00811190] sub_00811190 (32 bytes)
namespace lift_00811190 {
// @name sub_00811190
// @summary Auto-lifted identical-shape clone of 0x0080B540 (LocalBlockResizeThunk).
namespace lift_0080B540 {
// @name LocalBlockResizeThunk
// @summary Forwards handle and size arguments to LocalBlockResize.


extern uint32_t __cdecl ext_0080FF10(uint32_t handle, uint32_t size);

uint32_t __cdecl fn_00811190(uint32_t handle, uint32_t size) {
    return ext_0080FF10(handle, size);
}
} // namespace lift_0080B540
} // namespace lift_00811190

// [0x008106D0] sub_008106D0 (21 bytes)
namespace lift_008106D0 {
// Known callee 0x0080EB80: CopyStringToFixedBuffer (Copies src into dst via strncpyZeroPad using (size - 1) bytes, forces a NUL terminator at dst[size - 1], and returns 1.)
extern void ext_0080EB80(uint8_t* dst, size_t size, const uint8_t* src);
extern int mem_00AB6AC4;

// @name CopyStringToStaticBuffer
// @class (none)
// @summary Copies a string into the global 64-byte buffer at mem_00AB6AC4 via CopyStringToFixedBuffer.
// @field (none)
void fn_008106D0(const uint8_t* src) {
    ext_0080EB80(reinterpret_cast<uint8_t*>(&mem_00AB6AC4), 0x40, src);
}
} // namespace lift_008106D0
