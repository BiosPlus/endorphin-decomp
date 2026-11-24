// Lifted C++ translation unit: lifted/leaf/decompiled_7B0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x007B7084] sub_007B7084 (12 bytes)
namespace lift_007B7084 {
// @name SwitchCaseIndexTable_007B7084
// @summary 12-byte byte-index table indexed by (eax) and used by a jump table dispatch at 0x007B6xxx (mov cl, [eax+0x7B7084]; jmp [ecx*4+0x7B7074]); this is data, not code.
extern const uint8_t mem_007B7084[12] = {
    0x00, 0x03, 0x00, 0x03, 0x03, 0x03,
    0x01, 0x03, 0x02, 0x03, 0x01, 0x03,
};
} // namespace lift_007B7084

// [0x007B5224] sub_007B5224 (16 bytes)
namespace lift_007B5224 {
// The bytes at this address are data, not code: a 16-entry table of small values (0..3).
// No caller references this address in the lifted tree, so the table is preserved as-is.
// @name Table_007B5224_Bytes16
// @summary 16-byte constant lookup table of values 0..3 (data, not executable code)

// Raw bytes at 0x007B5224..0x007B5233, in memory order.
static const uint8_t kTable_007B5224[16] = {
    0x00, 0x03, 0x00, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x03, 0x02, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
};
} // namespace lift_007B5224

// [0x007B6094] sub_007B6094 (19 bytes)
namespace lift_007B6094 {
// @name dataTable_007B6094
// @summary 19-byte constant byte table at 0x007B6094; not executable code (bytes do not decode to a coherent function)

// The 19 bytes at 0x007B6094 are reproduced verbatim as data. They are not
// executable: decoding them yields no valid control flow.
static const uint8_t kDataTable_007B6094[19] = {
    0x00, 0x04, 0x01,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x02, 0x03, 0x03,
};
} // namespace lift_007B6094

// [0x007B617C] sub_007B617C (20 bytes)
namespace lift_007B617C {
// @name DataBytes_007B617C
// @summary Non-executing 20-byte data block (byte-value table 0x00-0x04); no observable logic.
// Note: disassembly decodes as add/lea pairs with no control flow, consistent with table data rather than code.
void fn_007B617C(void* self) {
    (void)self;
}
} // namespace lift_007B617C

// [0x007B04A8] sub_007B04A8 (24 bytes)
namespace lift_007B04A8 {
// @name dataTable_007B04A8
// @class (none)
// @summary Static 12-byte lookup table (00 01 04 04 04 04 04 04 02 04 04 03) followed by 12 bytes of 0x90 padding; not executable code.
// @field none (no class fields accessed)
static const uint8_t kTable_007B04A8[12] = {
    0x00, 0x01, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x02, 0x04, 0x04, 0x03,
};
} // namespace lift_007B04A8

// [0x007B8A48]
namespace lift_007B8A48 {
// @name dataTable_007B8A48
// @summary 24-byte constant table of byte pairs (not executable code): nine {0x00,0x02} pairs followed by {0x01,0x02}, {0x01,0x01}, {0x01,0x02}.
// @class none

extern const unsigned char mem_007B8A48[24] = {
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
    0x01, 0x02, 0x01, 0x01, 0x01, 0x02,
};
} // namespace lift_007B8A48

// [0x007BEA10] sub_007BEA10 (28 bytes)
namespace lift_007BEA10 {
// Known callee 0x0079B140: DispatchThreeArgsToOptionalHook (If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.)
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3);

// @name ForwardObjectFieldsToOptionalHook
// @summary Reads two 32-bit fields from the object at self and forwards them with a constant tag to DispatchThreeArgsToOptionalHook.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x164 uint32_t field_0x164
void fn_007BEA10(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    uint32_t field_0x00 = 0;
    uint32_t field_0x164 = 0;
    std::memcpy(&field_0x00, base + 0x00, sizeof(field_0x00));
    std::memcpy(&field_0x164, base + 0x164, sizeof(field_0x164));

    ext_0079B140(field_0x00, 0x00AB24A4u, field_0x164);
}
} // namespace lift_007BEA10

// [0x007B0680] sub_007B0680 (32 bytes)
namespace lift_007B0680 {
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3);

// @name DispatchSelfFirstDwordWithTag
// @class <none>
// @summary Forwards the first dword of the argument object, the constant tag 0x00AB1400, and a second argument to ext_0079B140.
// @field <object> +0x00 uint32_t field_0x00
void fn_007B0680(void* self, uint32_t a2) {
    const uint32_t first = lift_field<uint32_t>(self, 0x00);
    ext_0079B140(first, 0x00AB1400u, a2);
}
} // namespace lift_007B0680

// [0x007B9050] sub_007B9050 (32 bytes)
namespace lift_007B9050 {
extern uint32_t mem_00B61DB8;

// @name FindNodeByWordKey
// @summary Walks the linked list headed by global mem_00B61DB8 and returns the first node whose leading 16-bit key equals the argument, or NULL.
// @field Unknown +0x00 uint16_t field_00
// @field Unknown +0x14 void* field_14
uint32_t fn_007B9050(uint16_t key) {
    // [0x007B9050] eax = head; while (eax && *(uint16_t*)eax != key) eax = eax->next;
    uintptr_t node = static_cast<uintptr_t>(mem_00B61DB8);
    while (node != 0) {
        const uint8_t* p = reinterpret_cast<const uint8_t*>(node);
        uint16_t k;
        std::memcpy(&k, p, sizeof(k));
        if (k == key) {
            break;
        }
        uint32_t next;
        std::memcpy(&next, p + 0x14, sizeof(next));
        node = next;
    }
    return static_cast<uint32_t>(node);
}
} // namespace lift_007B9050

// [0x007BDA20]
namespace lift_007BDA20 {
extern BYTE mem_007BDA50[];

// @name sub_007BDA20
// @summary Stores the address of mem_007BDA50 into three pointer slots (+0x1A0, +0x1A8, +0x1B0) of self and returns 1.
// @field self +0x1A0 DWORD slotA (pointer to mem_007BDA50)
// @field self +0x1A8 DWORD slotB (pointer to mem_007BDA50)
// @field self +0x1B0 DWORD slotC (pointer to mem_007BDA50)
int sub_007BDA20(BYTE* self) {
    const DWORD target = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_007BDA50));
    *reinterpret_cast<DWORD*>(self + 0x1A0) = target;
    *reinterpret_cast<DWORD*>(self + 0x1A8) = target;
    *reinterpret_cast<DWORD*>(self + 0x1B0) = target;
    return 1;
}
} // namespace lift_007BDA20

// [0x007B50EC] sub_007B50EC (36 bytes)
namespace lift_007B50EC {
// @name dataTable_007B50EC
// @summary 36-byte constant table (not executable code); bytes mostly 0x04 with 0x01/0x02/0x03 entries and a 0x8D 0x49 0x00 tail
// Bytes as dumped: 00 04 04 04 04 04 04 04 01 02 04 04 04 04 04 04 04 03 8D 49 00 (+ padding to 36)
// The disassembly decodes to nonsense x86 (add [esp+eax],al ...), so this is data embedded in .text.
// Lifted as a byte table instead of a function body.
extern const unsigned char dataTable_007B50EC[36];
} // namespace lift_007B50EC

// [0x007BD310]
namespace lift_007BD310 {
uint16_t mem_read16(uint32_t addr);
void mem_write16(uint32_t addr, uint16_t val);

// @name initField40And4E
// @summary Sets +0x40 to 0x10, +0x42 to 2, and +0x4e to 1 if +0x46 == 0x804c else 3.
// @field struct +0x40 uint16_t field_0x40
// @field struct +0x42 uint16_t field_0x42
// @field struct +0x46 uint16_t field_0x46
// @field struct +0x4e uint16_t field_0x4e
uint32_t sub_007BD310(uint32_t a1) {
    uint16_t val46 = mem_read16(a1 + 0x46);
    mem_write16(a1 + 0x40, 0x10);
    mem_write16(a1 + 0x42, 0x2);
    uint16_t val4e = (val46 == 0x804c) ? 1 : 3;
    mem_write16(a1 + 0x4e, val4e);
    return a1;
}
} // namespace lift_007BD310

// [0x007B7044]
namespace lift_007B7044 {
// @name sub_007B7044
// @summary Adds byte and dword values from ebx, ecx, and edx into memory and eax

uint32_t sub_007B7044(uint32_t eax, uint32_t ebx, uint32_t ecx, uint32_t edx) {
    uint8_t* p_ebx8 = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(ebx));
    const uint32_t* p_ebx32 = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ebx));
    const uint32_t* p_ecx32 = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ecx));
    const uint32_t* p_edx32 = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(edx));

    for (int i = 0; i < 8; ++i) {
        *p_ebx8 += static_cast<uint8_t>(eax);
    }
    for (int i = 0; i < 11; ++i) {
        eax += *p_ebx32;
    }
    eax += *p_ecx32;
    eax += *p_edx32;
    uint8_t al = static_cast<uint8_t>(eax + *p_ebx8);
    eax = (eax & ~0xFFu) | al;
    return eax;
}
} // namespace lift_007B7044

// [0x007BFC60]
namespace lift_007BFC60 {
// @name sub_007BFC60
// @summary Dispatches two virtual/table callbacks via *(arg1 + 0x1cc) at offsets +0xc and +0x10
// @field Arg1 +0x1cc uint32_t field_0x1cc


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_007BFC60(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    uint32_t vtable = mem_read32(arg1 + 0x1cc);
    using fn3_t = void (*)(uint32_t, uint32_t, uint32_t);
    using fn4_t = uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t);
    reinterpret_cast<fn3_t>(mem_read32(vtable + 0xc))(arg1, arg2, arg3);
    return reinterpret_cast<fn4_t>(mem_read32(vtable + 0x10))(arg1, arg2, arg3, arg4);
}
} // namespace lift_007BFC60

// [0x007B1FA0] sub_007B1FA0 (22 bytes)
namespace lift_007B1FA0 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern uint32_t ext_006D2130(uint32_t self, int32_t arg1, uint32_t arg2);

// @name initWithTailPointer
// @class Self
// @summary Calls ext_006D2130(this, 0x10, 4), stores this+0x10 at this+0x14, and returns this.
// @field Self +0x14 void* field_0x14
uint8_t* fn_007B1FA0(uint8_t* self) {
    ext_006D2130(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), 0x10, 4);
    *reinterpret_cast<uint32_t*>(self + 0x14) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self + 0x10));
    return self;
}
} // namespace lift_007B1FA0

// [0x007B2DF0]
namespace lift_007B2DF0 {
// @name ListFindFirstByKey
// @class ListNode
// @summary Walks a singly linked list from head and stores the first node whose dword key matches, or 0 if none.
// @field ListNode +0x00 uint32_t key
// @field ListNode +0x10 uint32_t next
void fn_007B2DF0(uint32_t head, uint32_t key, uint32_t* out) {
    uint32_t found = 0;
    uint32_t node = head;
    while (node != 0 && found == 0) {
        void* n = reinterpret_cast<void*>(static_cast<uintptr_t>(node));
        if (lift_field<uint32_t>(n, 0x00) == key) {
            found = node;
        }
        node = lift_field<uint32_t>(n, 0x10);
    }
    *out = found;
}
} // namespace lift_007B2DF0

// [0x007B2E20] sub_007B2E20 (48 bytes)
namespace lift_007B2E20 {
// @name UnknownClass::appendToList
// @class UnknownClass
// @summary Stores value in the head slot if empty, otherwise appends it to the tail of the +0x10 linked list headed at +0x14.
// @field UnknownClass +0x14 void* listHead
// @field UnknownNode +0x10 void* next
void fn_007B2E20(void* self, void* value) {
    void* head = lift_field<void*>(self, 0x14);
    if (head == nullptr) {
        lift_field<void*>(self, 0x14) = value;
        return;
    }

    void* node = head;
    for (void* next = lift_field<void*>(node, 0x10); next != nullptr;
         next = lift_field<void*>(node, 0x10)) {
        node = next;
    }
    lift_field<void*>(node, 0x10) = value;
}
} // namespace lift_007B2E20

// [0x007BD640] sub_007BD640 (48 bytes)
namespace lift_007BD640 {
extern int ext_007BFDF0(void* arg);

// @name UnknownClass::copyFieldsToSubobjectAndCheck
// @class UnknownClass
// @summary Copies two fields from self into the subobject at self->+0x1cc and returns 1 if ext_007BFDF0 yields 0, else 0.
// @field UnknownClass +0x1cc void* field_0x1cc
// @field UnknownClass +0x1d8 uint32_t field_0x1d8
// @field UnknownClass +0x1e4 uint32_t field_0x1e4
// @field UnknownClass +0x30 uint32_t field_0x30
// @field UnknownClass +0x34 uint32_t field_0x34
int fn_007BD640(void* self) {
    void* ecx = lift_field<void*>(self, 0x1cc);
    uint32_t esi = lift_field<uint32_t>(self, 0x1d8);
    lift_field<uint32_t>(ecx, 0x30) = esi;
    uint32_t eax = lift_field<uint32_t>(self, 0x1e4);
    lift_field<uint32_t>(ecx, 0x34) = eax;
    int r = ext_007BFDF0(reinterpret_cast<uint8_t*>(ecx) + 0x30);
    return r == 0 ? 1 : 0;
}
} // namespace lift_007BD640

// [0x007B501C] sub_007B501C (48 bytes)
namespace lift_007B501C {
// The bytes at this address are a 48-byte data table, not executable code.
// Layout: 3 rows of 16 bytes; each row is one 0x00 followed by fifteen 0x02 values.
// @name lookupTable_007B501C
// @summary 48-byte constant lookup table; returns the entry at a given index.

extern const uint8_t mem_007B501C[48];

const uint8_t mem_007B501C[48] = {
    0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
};

// Returns the table entry at index (0..47); out-of-range indices yield 0.
uint8_t fn_007B501C(uint32_t index) {
    return index < 48 ? mem_007B501C[index] : 0;
}
} // namespace lift_007B501C
