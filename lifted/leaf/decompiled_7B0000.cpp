// Lifted C++ translation unit: lifted/leaf/decompiled_7B0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstddef>
#include <cstring>

#include <cstring>
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
    int r = ext_007BFDF0(static_cast<uint8_t*>(ecx) + 0x30);
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

// [0x007B8E30] sub_007B8E30 (48 bytes)
namespace lift_007B8E30 {
extern DWORD mem_00B61DB8;       // list head pointer (global)
extern const WORD mem_009998FE;  // u16 key (low half of .rdata u32 0x0008FFFF)

static inline void* lift_ptr(DWORD addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name ListRenumberByKey
// @summary If any node in the global list has its leading u16 equal to the key, renumber all nodes 0..N-1 from the head.
// @field ListNode +0x00 WORD index
// @field ListNode +0x14 DWORD next
void fn_007B8E30(void* self) {
    (void)self;
    DWORD head = mem_00B61DB8;
    if (head == 0) {
        return;
    }

    WORD key = mem_009998FE;
    DWORD node = head;
    for (;;) {
        if (lift_field<WORD>(lift_ptr(node), 0x00) == key) {
            break;
        }
        node = lift_field<DWORD>(lift_ptr(node), 0x14);
        if (node == 0) {
            return;
        }
    }

    WORD i = 0;
    for (DWORD p = head; p != 0; p = lift_field<DWORD>(lift_ptr(p), 0x14)) {
        lift_field<WORD>(lift_ptr(p), 0x00) = i;
        ++i;
    }
}
} // namespace lift_007B8E30

// [0x007BF4A0] sub_007BF4A0 (49 bytes)
namespace lift_007BF4A0 {
// @name Unknown::applyScaledDeltaToPair
// @class Unknown
// @summary Adds scale * field_0x1D0 to field_0x1E0 and subtracts it from field_0x1E4; returns 1.
// @field Unknown +0x1D0 int32_t field_0x1D0
// @field Unknown +0x1E0 int32_t field_0x1E0
// @field Unknown +0x1E4 int32_t field_0x1E4
int32_t fn_007BF4A0(void* self, int32_t scale) {
    const int32_t delta = lift_field<int32_t>(self, 0x1D0) * scale;
    lift_field<int32_t>(self, 0x1E0) += delta;
    lift_field<int32_t>(self, 0x1E4) -= delta;
    return 1;
}
} // namespace lift_007BF4A0

// [0x007BD340]
namespace lift_007BD340 {
// @name ReleaseOwnedHandlePair
// @summary Frees the handle stored at self+0x1cc (and its inner handle at +0xc, if set), then clears the slot.
// @field Unknown +0x1cc void* field_0x1cc (pointer to a handle-holder object; freed via GlobalFree)
// @field Unknown +0x0c HGLOBAL field_0x0c (inner handle of the holder object; freed via GlobalFree if non-null)

HGLOBAL ext_0079AF50(HGLOBAL hMem);

namespace {

inline void* load_ptr(const void* base, std::size_t off) {
    void* p;
    std::memcpy(&p, static_cast<const std::uint8_t*>(base) + off, sizeof p);
    return p;
}

inline void store_ptr(void* base, std::size_t off, void* v) {
    std::memcpy(static_cast<std::uint8_t*>(base) + off, &v, sizeof v);
}

}  // namespace

void ReleaseOwnedHandlePair(void* self) {
    void* holder = load_ptr(self, 0x1cc);
    if (holder != nullptr) {
        void* inner = load_ptr(holder, 0x0c);
        if (inner != nullptr) {
            ext_0079AF50(static_cast<HGLOBAL>(inner));
        }
        ext_0079AF50(static_cast<HGLOBAL>(holder));
        store_ptr(self, 0x1cc, nullptr);
    }
}
} // namespace lift_007BD340

// [0x007BD4A0]
namespace lift_007BD4A0 {
// @name DispatchOrStoreIndirect
// @summary If id == 0x10018, copies the value pointed to by self+0x1cc into **arg3 and returns 1; otherwise forwards (self, id, arg3) to vtable slot +0x18 of the object at self+0x1cc and returns its result.
// @field UnknownClass +0x1CC void* field_0x1cc

static inline uint32_t* as_ptr(uint32_t addr) {
    return reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(addr));
}

using ForwardFn = uint32_t(__cdecl*)(uint32_t, uint32_t, uint32_t);

uint32_t __cdecl DispatchOrStoreIndirect(uint32_t self, uint32_t id, uint32_t arg3) {
    uint32_t obj = lift_field<uint32_t>(as_ptr(self), 0x1cc);

    if (id == 0x10018) {
        uint32_t value = *as_ptr(obj);
        uint32_t dst = *as_ptr(arg3);
        *as_ptr(dst) = value;
        return 1;
    }

    uint32_t vtable = *as_ptr(obj);
    uint32_t slot = *as_ptr(vtable + 0x18);
    ForwardFn fn = reinterpret_cast<ForwardFn>(static_cast<uintptr_t>(slot));
    return fn(self, id, arg3);
}
} // namespace lift_007BD4A0

// [0x007BD9E0] sub_007BD9E0 (55 bytes)
namespace lift_007BD9E0 {
// @name UnknownObject::GetOrForwardByKey
// @class UnknownObject
// @summary If key == 0x10015, stores the dword at sub-object+0x68 through the out pointer and returns 1; otherwise forwards (self, key, out) to the function pointer at sub-object+0x70.
// @field UnknownObject +0x1cc void* field_0x1cc
int __cdecl fn_007BD9E0(void* self, uint32_t key, void* out) {
    void* sub = lift_field<void*>(self, 0x1cc);
    if (key == 0x10015u) {
        uint32_t value = lift_field<uint32_t>(sub, 0x68);
        void* target = *static_cast<void**>(out);
        lift_field<uint32_t>(target, 0x0) = value;
        return 1;
    }
    using ForwardFn = int(__cdecl*)(void*, uint32_t, void*);
    ForwardFn forward = reinterpret_cast<ForwardFn>(lift_field<uintptr_t>(sub, 0x70));
    return forward(self, key, out);
}
} // namespace lift_007BD9E0

// [0x007BFD40] sub_007BFD40 (56 bytes)
namespace lift_007BFD40 {
// @name WordCopyOrForwardDispatch_007BFD40
// @summary If a2 == 0x13D, copies the WORD at a1->+0x1CC into *a3 and returns 1; otherwise forwards (a1, a2, a3) to the function pointer at (a1->+0x1CC)+0x1C and returns its result.
// @field Unknown +0x1cc void* field_0x1cc
DWORD fn_007BFD40(void* a1, DWORD a2, void* a3) {
    // Original: eax = [a1 + 0x1cc]; loaded before the compare.
    void* p = lift_field<void*>(a1, 0x1cc);

    if (a2 == 0x13D) {
        // Original: ecx = a3; edx = [ecx]; word [edx] = word [eax]; eax = 1.
        void* dst = lift_field<void*>(a3, 0x00);
        lift_field<WORD>(dst, 0x00) = lift_field<WORD>(p, 0x00);
        return 1;
    }

    // Original: push a3, push a2, push a1; call [p + 0x1c]; add esp, 0xC; return eax.
    auto target = reinterpret_cast<DWORD (*)(void*, DWORD, void*)>(lift_field<void*>(p, 0x1c));
    return target(a1, a2, a3);
}
} // namespace lift_007BFD40

// [0x007BEDA0] sub_007BEDA0 (59 bytes)
namespace lift_007BEDA0 {
// Known callee 0x0079AF40: GlobalAllocZeroFlags (Allocates a global block of the requested size with uFlags = 0 (GMEM_FIXED); returns the handle.)
extern uint32_t ext_0079AF40(uint32_t size);
// Known callee 0x0079B140: DispatchThreeArgsToOptionalHook (Calls the global hook mem_00AAFC2C if non-null.)
// Call site pushes only two arguments, so the prototype here matches the call site.
extern void ext_0079B140(uint32_t a1, uint32_t a2);

// @name AllocBuffer11948IntoSelfField5C
// @summary Allocates a 0x11948-byte global block, stores its handle at +0x5C of the object referenced by self+0x1CC, and returns 1 on success or 0 after dispatching the failure hook.
// @field Unknown +0x1CC void* field_0x1cc
// @field Unknown +0x5C uint32_t field_0x5c
uint32_t fn_007BEDA0(void* self) {
    void* target = lift_field<void*>(self, 0x1CC);
    uint32_t handle = ext_0079AF40(0x11948);
    lift_field<uint32_t>(target, 0x5C) = handle;
    if (handle != 0) {
        return 1;
    }
    ext_0079B140(0x999C2C, 0xAB2528);
    return 0;
}
} // namespace lift_007BEDA0

// [0x007BF2B0] sub_007BF2B0 (63 bytes)
namespace lift_007BF2B0 {
// @name Unknown::FillMinusOneTable
// @summary Fills 1125 blocks of 8 dwords (stride 8, walking backward 0x40 per block) plus one trailing dword in a table at self->+0x5c+0x11940 with -1.
// @field Unknown +0x5c void* field_0x5c
void fn_007BF2B0(void* self) {
    uint8_t* cursor = lift_field<uint8_t*>(self, 0x5c) + 0x11940;

    // Outer loop: 0x465 (1125) iterations.
    for (uint32_t blocks = 0x465; blocks != 0; --blocks) {
        // Eight dwords at cursor-0x38, -0x30, ..., -0x8, +0x0 are set to -1.
        for (ptrdiff_t off = -0x38; off <= 0; off += 0x8) {
            lift_field<int32_t>(cursor, off) = -1;
        }
        cursor -= 0x40;
    }

    // Final single dword at the current cursor is set to -1.
    lift_field<int32_t>(cursor, 0) = -1;
}
} // namespace lift_007BF2B0

// [0x007B7970]
namespace lift_007B7970 {
// @name ProcessByteBufferUntilStop
// @summary Passes each byte of a buffer to ext_007B7720, stopping early when mem_00B61218 is set and mem_00B61219 is clear.

extern void ext_007B7720(uint8_t value);
extern uint8_t mem_00B61218;
extern uint8_t mem_00B61219;

void __cdecl ProcessByteBufferUntilStop(uint32_t count, const uint8_t* data) {
    for (uint32_t i = 0; i < count; ++i) {
        ext_007B7720(data[i]);
        if (mem_00B61218 != 0 && mem_00B61219 == 0) {
            break;
        }
    }
}
} // namespace lift_007B7970

// [0x007B2480] sub_007B2480 (64 bytes)
namespace lift_007B2480 {
// Imported allocator: the call at 0x007B2496 goes through the IAT slot mem_00925208
// (which holds 0x00627CA8, MSVCR80!malloc).
extern void* (*mem_00925208)(size_t size);

// @name StrDup
// @summary Heap-duplicates a NUL-terminated string (strlen + 1 bytes via malloc) and returns the copy.
// @field none (free function, no class layout accessed)
char* fn_007B2480(const char* src) {
    size_t len = std::strlen(src) + 1;   // includes terminating NUL
    char* dst = static_cast<char*>(mem_00925208(len));
    std::memcpy(dst, src, len);
    return dst;
}
} // namespace lift_007B2480

// [0x007B79B0] sub_007B79B0 (64 bytes)
namespace lift_007B79B0 {
// Known callee 0x007B7750: ext_007B7750 (returns a byte from an external source)
extern uint8_t ext_007B7750();
// Global flags at 0x00B61218 / 0x00B61219
extern uint8_t mem_00B61218;
extern uint8_t mem_00B61219;

// @name FillByteBufferUntilFlag
// @summary Fills count bytes of buf with values from ext_007B7750, stopping early when mem_00B61218 is set and mem_00B61219 is clear.
void fn_007B79B0(uint32_t count, uint8_t* buf) {
    for (uint32_t i = 0; i < count; ++i) {
        buf[i] = ext_007B7750();
        if (mem_00B61218 != 0 && mem_00B61219 == 0) {
            break;
        }
    }
}
} // namespace lift_007B79B0

// [0x007B04C0]
namespace lift_007B04C0 {
// @name AllocZeroOrNotifyHook
// @summary Allocates a zeroed global block of the given size; on failure, dispatches (*out, 0x00AB13D8, arg3) to the optional hook and returns 0.

uint32_t ext_0079AF40(uint32_t size);
void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t fn_007B04C0(uint32_t* out, uint32_t size, uint32_t arg3) {
    uint32_t handle = ext_0079AF40(size);
    if (handle == 0) {
        ext_0079B140(*out, 0x00AB13D8u, arg3);
    }
    return handle;
}
} // namespace lift_007B04C0

// [0x007B79F0] sub_007B79F0 (64 bytes)
namespace lift_007B79F0 {
extern void ext_007B7720(int ch);

// @name EmitStringBytes
// @summary Passes each byte of a NUL-terminated string to ext_007B7720, then passes a terminating 0.
void fn_007B79F0(const char* str) {
    const size_t len = std::strlen(str);
    for (size_t i = 0; i < len; ++i) {
        ext_007B7720(static_cast<unsigned char>(str[i]));
    }
    ext_007B7720(0);
}
} // namespace lift_007B79F0

// [0x007B8968] sub_007B8968 (64 bytes)
namespace lift_007B8968 {
// @name sub_007B8968_table
// @summary Static 4x16 byte table (data, not code): each row is one 0 followed by fifteen 1s.

namespace {

// Raw data at 0x007B8968..0x007B89A7: 4 rows of 16 bytes.
const uint8_t kTable_007B8968[4][16] = {
    {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
     0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
    {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
     0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
    {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
     0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
    {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
     0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
};

}  // namespace

// Returns the start of the 64-byte table at 0x007B8968.
const uint8_t* fn_007B8968(void* self) {
    (void)self;
    return &kTable_007B8968[0][0];
}
} // namespace lift_007B8968

// [0x007BB100] sub_007BB100 (64 bytes)
namespace lift_007BB100 {
// .rdata constants (x87 loads these as qword)
extern const double mem_0092A278; // returned when input is 0
extern const double mem_00999AE8; // scale factor
extern const double mem_00999AE0; // offset subtracted before exponent
extern const double mem_00993828; // bias added to input

// @name ExpCurveFromIndex
// @summary Returns mem_0092A278 for index 0; otherwise 2^((index + 0.5) * mem_00999AE8 - mem_00999AE0) as a double.
double fn_007BB100(int index) {
    if (index == 0) {
        return mem_0092A278;
    }
    double t = (static_cast<double>(index) + mem_00993828) * mem_00999AE8 - mem_00999AE0;
    return std::exp2(t);
}
} // namespace lift_007BB100

// [0x007BE010]
namespace lift_007BE010 {
// @name Unknown::StoreRowByteCount
// @class Unknown
// @summary Computes the row byte count via one of two helpers chosen by flag bit 0x400 at +0x0c and stores it at +0x1cc; always returns 1.
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x1cc uint32_t field_0x1cc

extern uint32_t ext_007AF200(const void* self);
extern uint32_t ext_00798840(uint8_t* self);

uint32_t fn_007BE010(uint8_t* self) {
    uint32_t flags;
    std::memcpy(&flags, self + 0x0c, sizeof(flags));

    uint32_t rowBytes;
    if ((flags & 0x00000400u) != 0) {
        rowBytes = ext_007AF200(self);
    } else {
        rowBytes = ext_00798840(self);
    }

    std::memcpy(self + 0x1cc, &rowBytes, sizeof(rowBytes));
    return 1;
}
} // namespace lift_007BE010

// [0x007BF9C0]
namespace lift_007BF9C0 {
// @name testAndUpdateField1CC
// @summary Calls vtable+0x10(self, a2, a3, a4); if non-zero, calls vtable+0x0C(self, a2, a3) and returns 1, else 0.
// @field Obj +0x1CC uint32_t field_0x1CC


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_007BF9C0(uint32_t self, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t vtbl = mem_read32(self + 0x1CC);
    using fn_check_t = uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t);
    using fn_action_t = void (*)(uint32_t, uint32_t, uint32_t);

    auto fn_check = reinterpret_cast<fn_check_t>(static_cast<uintptr_t>(mem_read32(vtbl + 0x10)));
    if (fn_check(self, a2, a3, a4) == 0) {
        return 0;
    }

    auto fn_action = reinterpret_cast<fn_action_t>(static_cast<uintptr_t>(mem_read32(vtbl + 0x0C)));
    fn_action(self, a2, a3);
    return 1;
}
} // namespace lift_007BF9C0

// [0x007BBBE0]
namespace lift_007BBBE0 {
// @name UnknownClass::processRows
// @class UnknownClass
// @summary Walks a byte range in steps of one row size, calling the row callback stored at self+0x1a4 for each row; returns 1 if the range is fully consumed, 0 if a callback reports failure.
// @field UnknownClass +0x1a4 void* field_0x1a4

extern uint32_t ext_00798840(uint8_t* self);

uint32_t fn_007BBBE0(uint8_t* self, uint8_t* base, uint32_t remaining, uint32_t arg4) {
    using RowFn = uint32_t (*)(uint8_t*, uint8_t*, uint32_t, uint32_t);

    const uint32_t rowSize = ext_00798840(self);
    uint8_t* cur = base;
    while (remaining != 0) {
        RowFn cb = reinterpret_cast<RowFn>(*reinterpret_cast<void**>(self + 0x1a4));
        if (cb(self, cur, rowSize, arg4) != 0) {
            return 0;
        }
        cur += rowSize;
        remaining -= rowSize;
    }
    return 1;
}
} // namespace lift_007BBBE0

// [0x007BBB40] sub_007BBB40 (70 bytes)
namespace lift_007BBB40 {
// Known callee 0x00798840: UnknownClass::computeRowByteSize (lifted, defined in lifted/leaf/decompiled_790000.cpp).
uint32_t fn_00798840(uint8_t* self);

// @name IterateRowRange
// @class UnknownClass
// @summary Invokes the callback stored at self +0x1A0 once per row-sized step over [start, start+count); returns 1 on success (or count == 0), 0 if the callback reports failure.
// @field UnknownClass +0x1A0 <uint32_t (*)(uint8_t*, uint32_t, uint32_t, uint32_t)> field_0x1A0
uint32_t fn_007BBB40(uint8_t* self, uint32_t start, uint32_t count, uint32_t arg4) {
    using RowCallback = uint32_t (*)(uint8_t*, uint32_t, uint32_t, uint32_t);

    const uint32_t rowBytes = fn_00798840(self);
    if (count == 0) {
        return 1;
    }

    uint32_t cur = start;
    uint32_t remaining = count;
    do {
        const RowCallback cb = lift_field<RowCallback>(self, 0x1A0);
        if (cb(self, cur, rowBytes, arg4) == 0) {
            return 0;
        }
        cur += rowBytes;
        remaining -= rowBytes;
    } while (remaining != 0);

    return 1;
}
} // namespace lift_007BBB40

// [0x007BBC30]
namespace lift_007BBC30 {
// @name Unknown::ForEachRow
// @class Unknown
// @summary Steps through rows of ComputeRowByteCount bytes from cursor, calling the callback at +0x1a4 per row; returns 1 if all rows were consumed with the callback returning 0, else 0.
// @field Unknown +0x1a4 void* field_0x1a4 (callback: uint32_t(void* self, uint32_t cursor, uint32_t rowBytes, uint32_t arg))

extern uint32_t ext_007AF200(const void* self);

typedef uint32_t (*RowCallback)(void* self, uint32_t cursor, uint32_t rowBytes, uint32_t arg);

uint32_t fn_007BBC30(void* self, uint32_t cursor, uint32_t rows, uint32_t arg) {
    const uint32_t rowBytes = ext_007AF200(self);
    if (rows == 0) {
        return 1;
    }

    const uintptr_t cbAddr = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x1a4));
    const RowCallback callback = reinterpret_cast<RowCallback>(cbAddr);

    do {
        if (callback(self, cursor, rowBytes, arg) != 0) {
            break;
        }
        cursor += rowBytes;
        rows -= rowBytes;
    } while (rows != 0);

    return rows == 0 ? 1u : 0u;
}
} // namespace lift_007BBC30

// [0x007BBB90] sub_007BBB90 (70 bytes)
namespace lift_007BBB90 {
// Known callee 0x007AF200: Unknown::ComputeRowByteCount (Returns byte count (bits rounded up to bytes) of a row from fields at +0x30/+0x40, optionally scaled by +0x4e when the mode at +0x72 equals 1; returns 0 if +0x34 or +0x30 is zero.)
extern uint32_t ext_007AF200(const void* self);

// @name Unknown::ForEachRow
// @class Unknown
// @summary Walks a byte span in row-sized steps, invoking the callback at +0x1a0 per row; returns 1 if the span was fully consumed.
// @field Unknown +0x1a0 RowFn callback
uint32_t fn_007BBB90(void* self, uint32_t cursor, uint32_t remaining, uint32_t arg4) {
    using RowFn = uint32_t (*)(void* self, uint32_t cursor, uint32_t rowBytes, uint32_t arg4);

    const uint32_t rowBytes = ext_007AF200(self);
    if (remaining != 0) {
        const RowFn callback = lift_field<RowFn>(self, 0x1a0);
        for (;;) {
            if (callback(self, cursor, rowBytes, arg4) == 0) {
                break;
            }
            cursor += rowBytes;
            remaining -= rowBytes;
            if (remaining == 0) {
                break;
            }
        }
    }
    return remaining == 0 ? 1u : 0u;
}
} // namespace lift_007BBB90

// [0x007BF2F0] sub_007BF2F0 (74 bytes)
namespace lift_007BF2F0 {
// Known callee 0x0079AF50: GlobalFreeWrapper (Frees a global memory handle via KERNEL32!GlobalFree and returns its result.)
extern HGLOBAL ext_0079AF50(HGLOBAL hMem);

// Little-endian 32-bit guest memory access (the original is 32-bit x86 code).
static inline uint32_t rd32(uintptr_t addr) {
    uint32_t v;
    std::memcpy(&v, reinterpret_cast<const void*>(addr), sizeof v);
    return v;
}

static inline void wr32(uintptr_t addr, uint32_t v) {
    std::memcpy(reinterpret_cast<void*>(addr), &v, sizeof v);
}

// @name Unknown::releaseHandleHolder
// @class Unknown_Fields
// @summary If self->+0x1CC holds a handle-holder, free its inner handle (+0x5C if +0x40 is set, else +0x64) and the holder itself, then clear the slot.
// @field Unknown_Fields +0x1CC void* handleHolder (freed via GlobalFree, cleared to 0)
// @field HandleHolder +0x40 uint32_t field_0x40 (selects which inner-handle slot is used when nonzero)
// @field HandleHolder +0x5C uint32_t innerHandle (preferred inner handle when +0x40 != 0)
// @field HandleHolder +0x64 uint32_t field_0x64 (inner handle used when +0x40 == 0)
void fn_007BF2F0(void* self) {
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);

    const uintptr_t holder = rd32(base + 0x1CC);
    if (holder == 0) {
        return;
    }

    const uint32_t inner = (rd32(holder + 0x40) != 0) ? rd32(holder + 0x5C)
                                                      : rd32(holder + 0x64);
    if (inner != 0) {
        ext_0079AF50(reinterpret_cast<HGLOBAL>(static_cast<uintptr_t>(inner)));
    }

    ext_0079AF50(reinterpret_cast<HGLOBAL>(holder));
    wr32(base + 0x1CC, 0);
}
} // namespace lift_007BF2F0

// [0x007BFCF0] sub_007BFCF0 (77 bytes)
namespace lift_007BFCF0 {
// No external callees are referenced directly; the indirect call goes through
// a function pointer stored in the object at self+0x1CC (+0x20), so no ext_/mem_
// declarations are needed.

// @name Unknown::StoreWordOrForward_007BFCF0
// @class Unknown
// @summary If a1 == 0x13D, store the 16-bit word at a2 into *(self+0x1CC), set bit 31 of self+0x1C and bit 3 of self+0x0C, and return 1; otherwise forward (self, a1, a2) to the function pointer at (*(self+0x1CC))+0x20 and return its result.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x1CC void* field_0x1CC
int fn_007BFCF0(void* self, uint32_t a1, const void* a2) {
    void* target = lift_field<void*>(self, 0x1CC);

    if (a1 != 0x13D) {
        // Forward to target's function pointer at +0x20: callee(self, a1, a2).
        using Handler = int (*)(void*, uint32_t, const void*);
        auto handler = reinterpret_cast<Handler>(lift_field<void*>(target, 0x20));
        return handler(self, a1, a2);
    }

    // Fast path: copy 16-bit word from a2 (zero-extended) into *target.
    uint16_t word = lift_field<uint16_t>(a2, 0);
    lift_field<uint32_t>(target, 0) = static_cast<uint32_t>(word);

    lift_field<uint32_t>(self, 0x1C) |= 0x80000000u;
    lift_field<uint32_t>(self, 0x0C) |= 0x8u;
    return 1;
}
} // namespace lift_007BFCF0

// [0x007B6F5C] sub_007B6F5C (80 bytes)
namespace lift_007B6F5C {
// @name sub_007B6F5C_table
// @summary 80-byte constant data table (10 rows of 8 bytes: 00 01 01 01 01 01 01 01); not executable code
// @field none
//
// The bytes at this address decode as a repeating 8-byte pattern of 0x00 followed
// by seven 0x01 bytes. They are data, not instructions, so this is represented as
// a constant table rather than as a function body.
static const uint8_t sub_007B6F5C_table[80] = {
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};

// Accessor kept so the symbol is referenced; the original address had no
// executable entry point. Returns the table base pointer.
const uint8_t* fn_007B6F5C(void* self) {
    (void)self;
    return sub_007B6F5C_table;
}
} // namespace lift_007B6F5C

// [0x007B89BC] sub_007B89BC (80 bytes)
namespace lift_007B89BC {
// @name Data_007B89BC_ByteTable
// @summary 80-byte constant table of small values (0-3) at 0x007B89BC; not executable code
// @field none

// Raw bytes at 0x007B89BC; disassembly of this region is meaningless (no instruction structure).
// Index = address - 0x007B89BC. Non-0x03 entries: [0]=00, [16]=01, [17]=01, [32]=02, [48]=01, [64]=01.
inline constexpr uint8_t kData_007B89BC_ByteTable[80] = {
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
};

void fn_007B89BC(void* self) {
    (void)self;
    // No code to execute: this address holds data, not a function body.
}
} // namespace lift_007B89BC

// [0x007B8D80]
namespace lift_007B8D80 {
// @name ListAppendAlloc
// @summary Allocates a 0x18-byte node, appends it to the list rooted at mem_00B61DB8 (next pointer at +0x14), and stores the node (or NULL on allocation failure) in *out.
// @field ListNode +0x14 void* field_0x14

extern void* mem_00B61DB8;
extern void* (*ext_00925208)(std::size_t);

void sub_007B8D80(void** out) {
    unsigned char* head = static_cast<unsigned char*>(mem_00B61DB8);
    unsigned char* node = static_cast<unsigned char*>(ext_00925208(0x18));
    if (node != nullptr) {
        if (head == nullptr) {
            mem_00B61DB8 = node;
        } else {
            unsigned char* tail = head;
            while (*reinterpret_cast<unsigned char**>(tail + 0x14) != nullptr) {
                tail = *reinterpret_cast<unsigned char**>(tail + 0x14);
            }
            *reinterpret_cast<unsigned char**>(tail + 0x14) = node;
        }
    }
    *out = node;
}
} // namespace lift_007B8D80

// [0x007BADF0] sub_007BADF0 (38 bytes)
namespace lift_007BADF0 {
// Known callee 0x0079B140: DispatchThreeArgsToOptionalHook (If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.)
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x007AF8F0: FindRecordByKey16 (Looks up a 16-bit key in the node list first, then the static table; returns the match or null.)
extern uint8_t* ext_007AF8F0(uint16_t key);

// @name DispatchFirstWordOfRecordByKey44
// @summary Looks up the record keyed by the word at self+0x44, then forwards self's first dword, a constant 0x00AB19FC, and the record's first dword to ext_0079B140. Always returns 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x44 uint16_t field_0x44
uint32_t fn_007BADF0(uint8_t* self) {
    uint16_t key;
    std::memcpy(&key, self + 0x44, sizeof key);

    uint8_t* record = ext_007AF8F0(key);

    uint32_t recordFirst;
    std::memcpy(&recordFirst, record, sizeof recordFirst);

    uint32_t selfFirst;
    std::memcpy(&selfFirst, self, sizeof selfFirst);

    ext_0079B140(selfFirst, 0x00AB19FCu, recordFirst);
    return 0;
}
} // namespace lift_007BADF0
