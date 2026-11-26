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

// [0x008106A0]
namespace lift_008106A0 {
namespace lift_008106A0 {
// @name SetStringBufferAndStoreLength
// @summary Copies the source string into a 3-byte static buffer (truncated, NUL-terminated), stores strlen of that buffer into mem_00AB6AB4, and returns it.

// CopyStringToFixedBuffer clone: copies src into dst (size bytes), forcing a NUL terminator.
extern void ext_0080EB80(uint8_t* dst, size_t size, const uint8_t* src);
// strlen clone: returns the length of a NUL-terminated string.
extern uint32_t ext_0080F700(const char* str);

extern uint32_t mem_00AB6AB4; // result slot (.data, initial 0x00000001)
extern uint32_t mem_00AB6AC0; // 4-byte string buffer (.data, initial 0x0000002C)

uint32_t fn_008106A0(const uint8_t* src) {
    uint8_t* buf = reinterpret_cast<uint8_t*>(&mem_00AB6AC0);
    ext_0080EB80(buf, 3, src);
    mem_00AB6AB4 = ext_0080F700(reinterpret_cast<const char*>(buf));
    return mem_00AB6AB4;
}
} // namespace lift_008106A0
} // namespace lift_008106A0

// [0x00810660] sub_00810660 (58 bytes)
namespace lift_00810660 {
extern uint32_t __cdecl ext_0080F700(const char* str);
extern void __cdecl ext_0080EB80(uint8_t* dst, size_t size, const uint8_t* src);

extern uint32_t mem_00AB6AB0;
extern uint8_t mem_00AB6AB8;
extern uint32_t mem_00AB6ABC;

// @name StoreStringLengthAndHead
// @summary Records strlen(str) in mem_00AB6AB0; if length is 1 stores the single char in mem_00AB6AB8, otherwise clears mem_00AB6AB8 and copies str into the 3-byte buffer at mem_00AB6ABC.
void fn_00810660(const char* str) {
    const uint32_t len = ext_0080F700(str);
    mem_00AB6AB0 = len;

    if (len == 1) {
        mem_00AB6AB8 = static_cast<uint8_t>(str[0]);
        return;
    }

    mem_00AB6AB8 = 0;
    ext_0080EB80(reinterpret_cast<uint8_t*>(&mem_00AB6ABC), 3,
                 reinterpret_cast<const uint8_t*>(str));
}
} // namespace lift_00810660

// [0x00811080]
namespace lift_00811080 {
// @name StringEqualsIgnoreCaseN
// @summary Case-insensitive ASCII string equality check up to max_len characters


extern int ext_008110F0(int c);

int __cdecl fn_00811080(const char* s1, uint32_t max_len, const char* s2) {
    if (!s1 || !s2) {
        return 0;
    }

    uint32_t i = 0;
    while (*s1 != '\0' && *s2 != '\0' && i <= max_len) {
        int c1 = ext_008110F0(static_cast<int>(*s1));
        int c2 = ext_008110F0(static_cast<int>(*s2));
        if (c1 != c2) {
            break;
        }
        ++s1;
        ++s2;
        ++i;
    }

    if (i == max_len || (*s1 == '\0' && *s2 == '\0')) {
        return 1;
    }
    return 0;
}
} // namespace lift_00811080

// [0x00810320]
namespace lift_00810320 {
// @name setFlagBit24
// @summary Sets or clears bit 24 (0x01000000) in a flags field reached via an indirect pointer at +0x4.
// @field Unknown +0x04 void* field_0x04
void __cdecl sub_00810320(void* self, int enable) {
    uint8_t* inner = lift_field<uint8_t*>(self, 0x4);
    uint32_t& flags = lift_field<uint32_t>(inner, 0x4);
    if (enable) {
        flags |= 0x01000000u;
    } else {
        flags &= 0xFEFFFFFFu;
    }
}
} // namespace lift_00810320

// [0x008101C0] sub_008101C0 (64 bytes)
namespace lift_008101C0 {
// @name GetChainedFlagBit4
// @summary Returns bit 0x10 of the dword at +0x04 of the object referenced by self+0x04 (cdecl, one arg).
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 uint32_t field_0x04
int fn_008101C0(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    uint32_t flags = lift_field<uint32_t>(inner, 0x04);
    return static_cast<int>((flags >> 4) & 1u);
}
} // namespace lift_008101C0
