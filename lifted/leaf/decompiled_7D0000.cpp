// Lifted C++ translation unit: lifted/leaf/decompiled_7D0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x007D8850]
namespace lift_007D8850 {
// @name sub_007D8850
// @summary Single-argument forwarding wrapper; passes its one stack argument to sub_007D8420 and returns that result unchanged.

extern uint32_t ext_007D8420(uint32_t arg0);

extern uint32_t sub_007D8850(uint32_t arg0) {
    return ext_007D8420(arg0);
}
} // namespace lift_007D8850

// [0x007D4800] sub_007D4800 (32 bytes)
namespace lift_007D4800 {
extern void ext_007D5950(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// @name ConditionalForwardCall
// @class
// @summary If the object's +0x04 field is non-zero, forwards it with the +0x1c field and a constant to ext_007D5950.
// @field Object +0x04 uint32_t field_0x04
// @field Object +0x1c uint32_t field_0x1c
void fn_007D4800(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    const std::uint32_t f04 = *reinterpret_cast<std::uint32_t*>(base + 0x04);
    if (f04 == 0) {
        return;
    }
    const std::uint32_t f1c = *reinterpret_cast<std::uint32_t*>(base + 0x1c);
    ext_007D5950(f04, 0x0099DE84u, f1c, 0u);
}
} // namespace lift_007D4800

// [0x007DADA0] sub_007DADA0 (33 bytes)
namespace lift_007DADA0 {
extern void ext_007D5950(std::uint32_t a, std::uint32_t b, std::uint32_t c);

// @name Unknown::forwardToInnerWithConstant
// @class Unknown
// @summary Reads the inner object pointer at +0x0C, loads its dword at +0xB0, forwards it with constant 0x0099E218 to ext_007D5950, and returns 0 (AX cleared).
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0xB0 uint32_t field_0xB0

// Load/store helpers keep the 32-bit guest address arithmetic explicit.
static inline std::uint32_t lift_load32(std::uint32_t addr) {
    return *reinterpret_cast<const std::uint32_t*>(static_cast<std::uintptr_t>(addr));
}

std::uint16_t fn_007DADA0(std::uint8_t* self) {
    const std::uint32_t inner = *reinterpret_cast<const std::uint32_t*>(self + 0x0C);
    const std::uint32_t value = lift_load32(inner + 0xB0);
    ext_007D5950(0u, value, 0x0099E218u);
    return 0;
}
} // namespace lift_007DADA0

// [0x007D5C80] sub_007D5C80 (34 bytes)
namespace lift_007D5C80 {
// Known callee 0x007D5A00: sub_007D5A00 (54 bytes)
extern void ext_007D5A00(uint32_t a, uint32_t b);
// Function pointer stored in .data at 0x00AB28C8 (holds 0x007D4780)
extern uint32_t mem_00AB28C8;

// @name Unknown::invokeCallbackAtOffset6C
// @class Unknown (no member access; pointer arithmetic only)
// @summary Calls ext_007D5A00(arg0, arg1), then calls the function pointer at mem_00AB28C8 with (arg0 + 0x6C, arg1).
void fn_007D5C80(uint32_t arg0, uint32_t arg1) {
    ext_007D5A00(arg0, arg1);
    using Fn = void (*)(uint32_t, uint32_t);
    Fn target = reinterpret_cast<Fn>(static_cast<uintptr_t>(mem_00AB28C8));
    target(arg0 + 0x6C, arg1);
}
} // namespace lift_007D5C80

// [0x007DC8C0] sub_007DC8C0 (37 bytes)
namespace lift_007DC8C0 {
// @name SearchKeyedTable16
// @class <none>
// @summary Scans a 12-byte-stride table of 16-bit keys (terminated by 0x24) from `p`
//          and returns the first entry whose key matches `key`, or the terminator entry.
// @field <none>
uint8_t* fn_007DC8C0(uint8_t* p, int32_t key) {
    uint16_t k = *reinterpret_cast<uint16_t*>(p);
    if (k == 0x24) {
        return p;
    }
    for (;;) {
        if (static_cast<int32_t>(static_cast<int16_t>(k)) == key) {
            return p;
        }
        p += 12;
        k = *reinterpret_cast<uint16_t*>(p);
        if (k == 0x24) {
            return p;
        }
    }
}
} // namespace lift_007DC8C0

// [0x007D6260]
namespace lift_007D6260 {
extern uint32_t mem_read_u32(uint32_t addr);
extern void mem_write_u32(uint32_t addr, uint32_t val);

// @name freeBuffer
// @summary Frees a buffer via an allocator callback at +0x1c/+0x10 and clears +0x00 and +0x04.
// @field Buffer +0x00 uint32_t field_0x00
// @field Buffer +0x04 uint32_t field_0x04
// @field Buffer +0x1c uint32_t field_0x1c
void sub_007D6260(uint32_t arg0) {
    uint32_t ptr = mem_read_u32(arg0);
    if (ptr != 0) {
        uint32_t alloc = mem_read_u32(arg0 + 0x1c);
        uint32_t free_fn = mem_read_u32(alloc + 0x10);
        reinterpret_cast<void (*)(uint32_t)>(static_cast<uintptr_t>(free_fn))(ptr);
        mem_write_u32(arg0, 0);
        mem_write_u32(arg0 + 0x04, 0);
    }
}
} // namespace lift_007D6260

// [0x007D48C0]
namespace lift_007D48C0 {
uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

// @name TreeNode::rotateLeft
// @class TreeNode
// @summary Performs a left rotation on a binary tree node with parent pointers.
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t right
// @field TreeNode +0x08 uint32_t parent

void sub_007D48C0(uint32_t eax) {
    uint32_t ecx = mem_read32(eax + 0x4);
    uint32_t edx = mem_read32(ecx);
    mem_write32(eax + 0x4, edx);
    mem_write32(edx + 0x8, eax);
    edx = mem_read32(eax + 0x8);
    mem_write32(ecx + 0x8, edx);
    if (eax == mem_read32(edx)) {
        mem_write32(edx, ecx);
    } else {
        mem_write32(edx + 0x4, ecx);
    }
    mem_write32(ecx, eax);
    mem_write32(eax + 0x8, ecx);
}
} // namespace lift_007D48C0

// [0x007D5DA0] sub_007D5DA0 (39 bytes)
namespace lift_007D5DA0 {
// x87 control-word access (fnstcw / fnclex + fldcw). No external code is
// called; these are hardware-state hooks the portable build provides.
extern uint16_t lift_x87_read_cw(void);
extern void lift_x87_write_cw(uint16_t cw);

// @name x87_setPrecisionControl
// @summary Replaces x87 precision-control bits (CW bits 8-9) with the low 2 bits of the
//          stack argument, keeping exception masks and clearing the rest of the control word, then reloads it.
void fn_007D5DA0(uint32_t mode) {
    uint32_t slot = 0;                                  // mov dword ptr [esp], 0
    slot = lift_x87_read_cw();                          // fnstcw word ptr [esp]
    uint32_t eax = (mode & 0x3u) << 8;                  // and eax,3 / shl eax,8
    uint32_t edx = slot & 0x7Fu;                        // mov edx,[esp] / and edx,7Fh
    eax |= edx;                                         // or eax,edx
    slot = eax;                                         // mov [esp],eax
    lift_x87_write_cw(static_cast<uint16_t>(slot));     // fnclex / fldcw word ptr [esp]
}
} // namespace lift_007D5DA0

// [0x007DEC80] sub_007DEC80 (39 bytes)
namespace lift_007DEC80 {
// @name Unknown::initFromSource (descriptive placeholder; owning class not identified)
// @class Unknown
// @summary Initializes a 0x16-byte record at eax from the record at ecx, copying two dwords, a float and a word argument, and setting two self-referencing pointers.
// @field Unknown +0x00 uint32_t ptrToSrcPlus8
// @field Unknown +0x04 uint32_t ptrToSrcPlus14
// @field Unknown +0x08 float    floatArg
// @field Unknown +0x0C uint32_t srcField4
// @field Unknown +0x10 uint32_t srcField0
// @field Unknown +0x14 uint16_t wordArg
// @field Unknown (source ecx) +0x00 uint32_t srcField0
// @field Unknown (source ecx) +0x04 uint32_t srcField4
void fn_007DEC80(void* eax, void* ecx, uint16_t dx, float f) {
    uint8_t* out = static_cast<uint8_t*>(eax);
    uint8_t* src = static_cast<uint8_t*>(ecx);

    // Captured stack arguments: dx = [esp+4] (word), f = [esp+8] (float).
    lift_field<uint16_t>(out, 0x14) = dx;
    lift_field<float>(out, 0x08) = f;

    // Pointers into the source record (32-bit addresses).
    lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src) + 0x08);
    lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src) + 0x14);

    // Copy dwords from source.
    lift_field<uint32_t>(out, 0x10) = lift_field<uint32_t>(src, 0x00);
    lift_field<uint32_t>(out, 0x0C) = lift_field<uint32_t>(src, 0x04);
}
} // namespace lift_007DEC80

// [0x007DAD70]
namespace lift_007DAD70 {
// Memory and external helpers used by this lift (32-bit guest address space).
extern uint32_t mem_read_u32(uint32_t addr);
extern uint32_t ext_007D5950(uint32_t a1, uint32_t a2, uint32_t a3);

// @name Unknown::forwardSlot3Field0xB0Passthrough
// @class Unknown
// @summary Reads the object's vtable slot 3, takes the pointer stored there, reads its +0xB0 dword, and tail-forwards it with a constant to ext_007D5950.
// @field Unknown +0x00 uint32_t vtable (object's vtable pointer)
// @field Unknown +0x0c uint32_t slot3 (vtable entry 3, read as a pointer)
// @field Unknown +0xb0 uint32_t field_0xb0 (dword inside the object referenced by slot3)
uint32_t fn_007DAD70(uint32_t self_ptr) {
    uint32_t vtable = mem_read_u32(self_ptr + 0x00);
    uint32_t slot3  = mem_read_u32(vtable + 0x0c);
    uint32_t value  = mem_read_u32(slot3 + 0xb0);
    // Original: push 0x99e1e0 / push value / push 0 ; jmp sub_007D5950 (tail call)
    return ext_007D5950(0u, value, 0x0099E1E0u);
}
} // namespace lift_007DAD70

// [0x007D48F0] sub_007D48F0 (40 bytes)
namespace lift_007D48F0 {
extern uint32_t mem_read_u32(uint32_t addr);
extern void mem_write_u32(uint32_t addr, uint32_t val);

// @name TreeNode::rotateRightAbout
// @class TreeNode
// @summary Rotates node x's left child up into x's place (right rotation); updates child/parent links.
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t right
// @field TreeNode +0x08 uint32_t parent
void fn_007D48F0(uint32_t x) {
    const uint32_t l  = mem_read_u32(x + 0x00);   // x->left
    const uint32_t lr = mem_read_u32(l + 0x04);   // l->right
    mem_write_u32(x + 0x00, lr);                  // x->left = l->right
    mem_write_u32(lr + 0x08, x);                  // lr->parent = x
    const uint32_t p = mem_read_u32(x + 0x08);    // p = x->parent
    mem_write_u32(l + 0x08, p);                   // l->parent = p
    if (x == mem_read_u32(p + 0x04)) {
        mem_write_u32(p + 0x04, l);               // p->right = l (x was right child)
    } else {
        mem_write_u32(p + 0x00, l);               // p->left = l (x was left child)
    }
    mem_write_u32(l + 0x04, x);                   // l->right = x
    mem_write_u32(x + 0x08, l);                   // x->parent = l
}
} // namespace lift_007D48F0

// [0x007DFD80]
namespace lift_007DFD80 {
// @name initAllocatedArray
// @summary Allocates a buffer of 4-byte elements using the provided allocator and initializes a 12-byte array header.
// @field ArrayHeader +0x00 uint32_t data
// @field ArrayHeader +0x04 uint32_t count
// @field ArrayHeader +0x08 uint32_t field_0x08

void __cdecl sub_007DFD80(uint32_t* out_header, uint32_t count, uint32_t* allocator_ptr) {
    using AllocFn = uint32_t(__cdecl*)(uint32_t);
    auto alloc_fn = reinterpret_cast<AllocFn>(static_cast<uintptr_t>(allocator_ptr[0]));
    uint32_t buffer = alloc_fn(count * 4u);
    out_header[1] = count;
    out_header[0] = buffer;
    out_header[2] = 0u;
}
} // namespace lift_007DFD80

// [0x007DAE50]
namespace lift_007DAE50 {
// @name allocAndInit_007DAE50
// @summary Allocates a 32-byte (16-byte aligned) block via context->field_0xb0 and initializes it with sub_007DAD50.
// @field Context +0xb0 uint32_t field_0xb0

extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_007DAD50(uint32_t a1, uint32_t a2);

uint32_t fn_007DAE50(uint32_t a1) {
    uint32_t alloc_obj = mem_read32(a1 + 0xb0);
    uint32_t alloc_fn_addr = mem_read32(alloc_obj + 0x8);
    using AllocFn = uint32_t (*)(uint32_t, uint32_t);
    AllocFn alloc_fn = reinterpret_cast<AllocFn>(static_cast<uintptr_t>(alloc_fn_addr));
    uint32_t ptr = alloc_fn(0x20, 0x10);
    if (ptr == 0) {
        return 0;
    }
    return ext_007DAD50(ptr, a1);
}
} // namespace lift_007DAE50

// [0x007DD130]
namespace lift_007DD130 {
namespace lift_007DD130 {

// @name UnknownClass_isIndexedEntryFlagSet
// @summary Returns bit 0 of the flags of the table entry at index when index is in range and the entry's stored id equals index; otherwise returns false.
// @field UnknownClass +0x0C int32_t count
// @field UnknownClass +0x10 uint8_t* entries
// @field UnknownEntry +0x08 int32_t id
// @field UnknownEntry +0x10 uint32_t flags
bool fn_007DD130(void* self, int32_t index) {
    if (index < 0 || index >= lift_field<int32_t>(self, 0x0C)) {
        return false;
    }

    uint8_t* entries = lift_field<uint8_t*>(self, 0x10);
    uint8_t* entry = entries + static_cast<ptrdiff_t>(index) * 0x9C;

    if (lift_field<int32_t>(entry, 0x08) != index) {
        return false;
    }

    return (lift_field<uint32_t>(entry, 0x10) & 1u) != 0;
}

} // namespace lift_007DD130
} // namespace lift_007DD130

// [0x007D5B30] sub_007D5B30 (45 bytes)
namespace lift_007D5B30 {
// @name dispatchThroughKindTable
// @summary Reads a kind byte from arg1's object, indexes a 40-byte-stride dispatch table, and forwards (arg1, arg2, arg3) to the selected handler.
// @field Unknown +0x00 void* field_0x00 (arg1 -> object pointer)
// @field Unknown +0x00 uint32_t field_0x00 (object kind word; low byte used as index)
// @field Unknown +0x0C void* field_0x0C (sub-object pointer)
// @field Unknown +0x20 void* field_0x20 (dispatch table base, via sub-object)
// @field Unknown +0x0C void* handler (handler pointer at table[kind*40 + 0x0C])
uint32_t fn_007D5B30(void* arg1, void* arg2, void* arg3) {
    using Handler = uint32_t (__cdecl*)(void*, void*, void*);

    void* obj = lift_field<void*>(arg1, 0x00);
    uint32_t kind = lift_field<uint32_t>(obj, 0x00) & 0xFFu;
    void* sub = lift_field<void*>(obj, 0x0C);
    void* table = lift_field<void*>(sub, 0x20);
    Handler handler = lift_field<Handler>(table, static_cast<ptrdiff_t>(kind) * 40 + 0x0C);
    return handler(arg1, arg2, arg3);
}
} // namespace lift_007D5B30

// [0x007D47D0] sub_007D47D0 (46 bytes)
namespace lift_007D47D0 {
// @name initTypeTag2Record
// @class <unknown>
// @summary Initializes a 0x20-byte record: sets type tag to 2, clears +0x04, and stores four caller-supplied DWORDs (cdecl, caller cleans up).
// @field <unknown> +0x00 DWORD typeTag
// @field <unknown> +0x04 DWORD reserved
// @field <unknown> +0x08 DWORD arg3Value
// @field <unknown> +0x0C DWORD arg2Value
// @field <unknown> +0x10 DWORD arg4Value
// @field <unknown> +0x1C DWORD arg5Value
void fn_007D47D0(void* self, DWORD arg2, DWORD arg3, DWORD arg4, DWORD arg5) {
    lift_field<DWORD>(self, 0x00) = 2;
    lift_field<DWORD>(self, 0x04) = 0;
    lift_field<DWORD>(self, 0x08) = arg3;
    lift_field<DWORD>(self, 0x0C) = arg2;
    lift_field<DWORD>(self, 0x10) = arg4;
    lift_field<DWORD>(self, 0x1C) = arg5;
}
} // namespace lift_007D47D0

// [0x007D8860]
namespace lift_007D8860 {
// Callees (lifted elsewhere)
extern uint32_t ext_007D8700(uint32_t arg0);
extern uint32_t ext_007C9260(void* self);

// @name setPairIfFlagClear
// @summary Resolves self via ext_007D8700, tests bit 0 of its +0x9C field via ext_007C9260; if clear, stores a1/a2 at self+0x94/+0x98.
// @field Unknown +0x94 uint32_t field_0x94
// @field Unknown +0x98 uint32_t field_0x98
void fn_007D8860(void* self, uint32_t a1, uint32_t a2) {
    const uint32_t obj = ext_007D8700(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));
    const uint32_t flag = ext_007C9260(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    if (flag == 0) {
        lift_field<uint32_t>(self, 0x94) = a1;
        lift_field<uint32_t>(self, 0x98) = a2;
    }
}
} // namespace lift_007D8860

// [0x007D8890] sub_007D8890 (43 bytes)
namespace lift_007D8890 {
// Known callee 0x007D8710: sub_007D8710 (void* fn(void* self); returns self)
extern void* ext_007D8710(void* self);
// Known callee 0x007D8860: setPairIfFlagClear (void fn(void* self, a1, a2))
extern void ext_007D8860(void* self, uint32_t a1, uint32_t a2);

// @name sub_007D8890
// @summary Reads a dword from self->+0x40->+0x5F0, calls ext_007D8710(self) to get a pointer, then calls ext_007D8860(ptr, a1, a2).
// @field Unknown +0x40 void* field_0x40
// @field UnknownPtr40 +0x5F0 uint32_t field_0x5f0
extern void fn_007D8890(void* self, uint32_t a1, uint32_t a2) {
    auto* inner = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x40);
    // Dereference performed by the original code; the value is passed on the
    // stack to ext_007D8710 but that callee is cdecl with one parameter and
    // never reads it, so it has no effect beyond the load.
    volatile uint32_t tag = *reinterpret_cast<uint32_t*>(inner + 0x5F0);
    (void)tag;

    void* result = ext_007D8710(self);
    ext_007D8860(result, a1, a2);
}
} // namespace lift_007D8890

// [0x007DB9E0]
namespace lift_007DB9E0 {
// @name buildSkewSymmetricMatrix
// @summary Builds a 3x3 skew-symmetric (cross-product) matrix in [eax] from a 3D vector in [ecx]
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z


float mem_read_f32(uint32_t addr);
void mem_write_f32(uint32_t addr, float val);

void sub_007DB9E0(uint32_t eax, uint32_t ecx) {
    float x = mem_read_f32(ecx + 0x0);
    float y = mem_read_f32(ecx + 0x4);
    float z = mem_read_f32(ecx + 0x8);

    mem_write_f32(eax + 0x20, 0.0f);
    mem_write_f32(eax + 0x10, 0.0f);
    mem_write_f32(eax + 0x00, 0.0f);
    mem_write_f32(eax + 0x04, z);
    mem_write_f32(eax + 0x0c, -z);
    mem_write_f32(eax + 0x08, -y);
    mem_write_f32(eax + 0x18, y);
    mem_write_f32(eax + 0x14, x);
    mem_write_f32(eax + 0x1c, -x);
}
} // namespace lift_007DB9E0

// [0x007DA8E0]
namespace lift_007DA8E0 {
// @name AccumulateStats
// @summary Accumulates value from ext_007C9280 and either field_0x164 of ext_007D8710 or increments a miss counter
// @field Stats +0x00 uint32_t field_0x00
// @field Stats +0x04 uint32_t field_0x04
// @field Stats +0x08 uint32_t field_0x08
// @field Node +0x164 uint32_t field_0x164


extern void* ext_007D8710(void* self);
extern uint32_t ext_007C9280(void* self);

static inline uint32_t& u32_at(void* base, uintptr_t offset) {
    return *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(base) + offset);
}

extern void fn_007DA8E0(void* out_stats, void* obj) {
    void* esi = ext_007D8710(obj);
    uint32_t val = ext_007C9280(obj);
    u32_at(out_stats, 0x0) += val;
    if (esi != nullptr) {
        u32_at(out_stats, 0x4) += u32_at(esi, 0x164);
    } else {
        u32_at(out_stats, 0x8) += 1;
    }
}
} // namespace lift_007DA8E0

// [0x007D6290]
namespace lift_007D6290 {
extern uint32_t mem_r32(uint32_t addr);
extern void mem_w32(uint32_t addr, uint32_t val);

// @name setOwnedState
// @summary Updates state at +0x10 and invokes callback at +0x1c/+0x10 on pointer at +0x00 when transitioning from 1 with +0x14 == 0.
// @field struct +0x00 uint32_t field_0x00
// @field struct +0x10 uint32_t field_0x10
// @field struct +0x14 uint32_t field_0x14
// @field struct +0x1c uint32_t field_0x1c

void sub_007D6290(uint32_t arg0, uint32_t arg1) {
    uint32_t old_val = mem_r32(arg0 + 0x10);
    if (old_val == arg1) {
        return;
    }

    if (mem_r32(arg0 + 0x14) == 0 && old_val == 1) {
        uint32_t ptr = mem_r32(arg0);
        if (ptr != 0) {
            uint32_t ctx = mem_r32(arg0 + 0x1c);
            uint32_t fn = mem_r32(ctx + 0x10);
            reinterpret_cast<void (*)(uint32_t)>(static_cast<uintptr_t>(fn))(ptr);
        }
    }

    mem_w32(arg0 + 0x10, arg1);
}
} // namespace lift_007D6290

// [0x007D4860] sub_007D4860 (54 bytes)
namespace lift_007D4860 {
// @name Dispatcher::SubmitValueAndDecrementCount
// @class Dispatcher
// @summary If value is nonzero, forward it to a handler slot chosen by field +0x10, then decrement the counter at +0x04 if positive.
// @field Dispatcher +0x04 int32_t field_0x04
// @field Dispatcher +0x10 int32_t field_0x10
// @field Dispatcher +0x1c void* field_0x1c
void fn_007D4860(void* self, int32_t value) {
    if (value == 0) {
        return;
    }

    auto* base = static_cast<uint8_t*>(self);
    const int32_t selector = *reinterpret_cast<int32_t*>(base + 0x10);
    auto* handler = static_cast<uint8_t*>(*reinterpret_cast<void**>(base + 0x1c));

    // Slot +0x10 when selector != 0, otherwise slot +0x0c.
    const std::size_t slot_offset = (selector != 0) ? 0x10 : 0x0c;
    auto fn = reinterpret_cast<void (__cdecl*)(int32_t)>(
        *reinterpret_cast<void**>(handler + slot_offset));
    fn(value);

    const int32_t count = *reinterpret_cast<int32_t*>(base + 0x04);
    if (count > 0) {
        *reinterpret_cast<int32_t*>(base + 0x04) = count - 1;
    }
}
} // namespace lift_007D4860

// [0x007D7190] sub_007D7190 (55 bytes)
namespace lift_007D7190 {
extern int32_t __cdecl ext_007D5950(int32_t a, int32_t b, int32_t c);

// @name addClampedCounter
// @summary Adds delta to *counter; if the result exceeds limit, reports via ext_007D5950 and returns 0, otherwise stores the sum and returns old + bias.
int32_t fn_007D7190(int32_t* counter, int32_t bias, int32_t limit, int32_t delta, int32_t reportArg) {
    const int32_t oldValue = *counter;
    const int32_t newValue = oldValue + delta;
    if (newValue > limit) {
        ext_007D5950(0, reportArg, 0x0099DF2C);
        return 0;
    }
    *counter = newValue;
    return oldValue + bias;
}
} // namespace lift_007D7190

// [0x007D4720] sub_007D4720 (55 bytes)
namespace lift_007D4720 {
// @name Unknown::InvokeSlotThenForward
// @class Unknown
// @summary If the count at +0x14 is positive, call slot +0x10 (flag set) or +0x0c (flag clear) of the table at +0x1c with +0x04, then tail-call slot +0x0c of the table with +0x08.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x14 int32_t count
// @field Unknown +0x18 int32_t flag
// @field Unknown +0x1c uint32_t table

using SlotFn = int32_t (*)(uint32_t table, int32_t arg);

static inline SlotFn slotAt(uint32_t table, int32_t offset) {
    uintptr_t base = static_cast<uintptr_t>(table);
    return reinterpret_cast<SlotFn>(lift_field<uint32_t>(reinterpret_cast<void*>(base), offset));
}

int32_t fn_007D4720(void* self) {
    if (lift_field<int32_t>(self, 0x14) <= 0) {
        return 0;
    }

    int32_t flag = lift_field<int32_t>(self, 0x18);
    uint32_t table = lift_field<uint32_t>(self, 0x1c);
    int32_t firstArg = lift_field<int32_t>(self, 0x04);

    SlotFn first = slotAt(table, flag != 0 ? 0x10 : 0x0c);
    (void)first(table, firstArg);

    table = lift_field<uint32_t>(self, 0x1c);
    int32_t secondArg = lift_field<int32_t>(self, 0x08);
    SlotFn tail = slotAt(table, 0x0c);
    return tail(table, secondArg);
}
} // namespace lift_007D4720

// [0x007DB4C0]
namespace lift_007DB4C0 {
// @name QueryFunctionThenForward_007DB4C0
// @summary Calls the function pointer at (self->+0xB0)->+0x08 with (0x4C, 0x10); if it returns nonzero, forwards (result, self, a1, a2) to sub_007DAE80, otherwise returns 0.
// @field Unknown +0xb0 void* field_0xb0
// @field Unknown +0x08 void* field_0x08

// Original: callee is sub_007DAE80 (80 bytes); cdecl, args pushed as (eax, esi, edx, float).
DWORD ext_007DAE80(DWORD result, void* self, DWORD a1, float a2);

DWORD fn_007DB4C0(void* self, DWORD a1, float a2) {
    // Original: eax = [esi + 0xb0]; ecx = [eax + 0x08];
    void* obj = lift_field<void*>(self, 0xb0);
    auto query = reinterpret_cast<DWORD (*)(DWORD, DWORD)>(lift_field<void*>(obj, 0x08));

    // Original: push 0x10; push 0x4c; call ecx  (first param is 0x4c).
    DWORD result = query(0x4C, 0x10);

    // Original: test eax, eax; je -> xor eax, eax; ret
    if (result == 0) {
        return 0;
    }

    // Original: push ecx (overwritten by fstp with a2); push edx (a1); push esi (self); push eax (result); call sub_007DAE80.
    return ext_007DAE80(result, self, a1, a2);
}
} // namespace lift_007DB4C0

// [0x007D9680] sub_007D9680 (59 bytes)
namespace lift_007D9680 {
extern void ext_007D5950(uint32_t kind, uint32_t arg4, uint32_t str, uint32_t arg3,
                             uint32_t n, uint32_t limit, uint32_t sum);

// @name advanceBounded
// @summary Advances a 32-bit position by n, reporting via ext_007D5950 when the new position exceeds the stored limit.
// @field Cursor +0x00 uint32_t field_0x00
// @field Cursor +0x04 uint32_t field_0x04
void fn_007D9680(void* cursor, uint32_t n, uint32_t arg3, uint32_t arg4) {
    uint32_t pos = lift_field<uint32_t>(cursor, 0x00);
    uint32_t limit = lift_field<uint32_t>(cursor, 0x04);
    uint32_t sum = pos + n;
    if (sum > limit) {
        ext_007D5950(3, arg4, 0x0099E0D8u, arg3, n, limit, sum);
    }
    lift_field<uint32_t>(cursor, 0x00) = lift_field<uint32_t>(cursor, 0x00) + n;
}
} // namespace lift_007D9680

// [0x007D4820]
namespace lift_007D4820 {
// @name CursorAdvanceIfAccepted
// @class Cursor
// @summary If the cursor index is below its limit, ask a callback to accept the current value; on acceptance advance the index and return the callback result, otherwise return 0.
// @field Cursor +0x04 int32_t index
// @field Cursor +0x08 uint32_t value
// @field Cursor +0x0C int32_t limit
// @field Cursor +0x10 uint32_t extra
// @field Cursor +0x1C uint32_t callbacks
uint32_t fn_007D4820(void* self) {
    // Callback table layout (per the object at +0x1C): slot +0x00 is a
    // one-argument acceptor, slot +0x08 is a two-argument acceptor.
    // Both use cdecl and receive the value first.
    if (lift_field<int32_t>(self, 0x04) >= lift_field<int32_t>(self, 0x0C)) {
        return 0;
    }

    const uint32_t value = lift_field<uint32_t>(self, 0x08);
    const uint32_t extra = lift_field<uint32_t>(self, 0x10);
    const uint32_t table = lift_field<uint32_t>(self, 0x1C);

    uint32_t accepted;
    if (extra == 0) {
        using Acceptor1 = uint32_t(__cdecl*)(uint32_t);
        auto fn = reinterpret_cast<Acceptor1>(
            static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(table)), 0x00)));
        accepted = fn(value);
    } else {
        using Acceptor2 = uint32_t(__cdecl*)(uint32_t, uint32_t);
        auto fn = reinterpret_cast<Acceptor2>(
            static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(table)), 0x08)));
        accepted = fn(value, extra);
    }

    if (accepted == 0) {
        return 0;
    }
    lift_field<int32_t>(self, 0x04) += 1;
    return accepted;
}
} // namespace lift_007D4820

// [0x007D59C0] sub_007D59C0 (60 bytes)
namespace lift_007D59C0 {
extern const float mem_0099D148; // .rdata 0x7F7FFFFF (+FLT_MAX)
extern const float mem_0093C1A8; // .rdata 0xFF7FFFFF (-FLT_MAX)

// @name InitExtentBounds
// @summary Resets a 0x38-byte extent struct: zeroes the header and flag words, sets min (+0x08..+0x10) to +FLT_MAX and max (+0x14..+0x1C) to -FLT_MAX, and zeroes +0x20..+0x34.
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 float field_0x08
// @field <unknown> +0x0C float field_0x0C
// @field <unknown> +0x10 float field_0x10
// @field <unknown> +0x14 float field_0x14
// @field <unknown> +0x18 float field_0x18
// @field <unknown> +0x1C float field_0x1C
// @field <unknown> +0x20 uint32_t field_0x20
// @field <unknown> +0x24 uint32_t field_0x24
// @field <unknown> +0x28 uint32_t field_0x28
// @field <unknown> +0x2C uint32_t field_0x2C
// @field <unknown> +0x30 uint32_t field_0x30
// @field <unknown> +0x34 uint32_t field_0x34
void fn_007D59C0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    const auto put_u32 = [base](size_t off, uint32_t v) { std::memcpy(base + off, &v, sizeof v); };
    const auto put_f32 = [base](size_t off, float v) { std::memcpy(base + off, &v, sizeof v); };

    const float pos_max = mem_0099D148;
    const float neg_max = mem_0093C1A8;

    put_u32(0x20, 0);
    put_u32(0x04, 0);
    put_u32(0x00, 0);
    put_u32(0x24, 0);

    put_f32(0x08, pos_max);
    put_f32(0x0C, pos_max);
    put_f32(0x10, pos_max);

    put_f32(0x14, neg_max);
    put_f32(0x18, neg_max);
    put_f32(0x1C, neg_max);

    put_u32(0x2C, 0);
    put_u32(0x28, 0);
    put_u32(0x30, 0);
    put_u32(0x34, 0);
}
} // namespace lift_007D59C0
