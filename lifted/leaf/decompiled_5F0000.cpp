// Lifted C++ translation unit: lifted/leaf/decompiled_5F0000.cpp
#include "lift_compat.h"
#include <string>

// [0x005FEFD0] sub_005FEFD0 (45 bytes)
namespace lift_005FEFD0 {
// MSVCP80 std::string::operator= import slot (called through this IAT entry in the original).
extern int mem_00924FDC;

struct LiftElem005FEFD0 {
    std::string field_0x00; // copied via std::string::operator= (MSVCP80 import at mem_00924FDC)
    uint32_t field_0x1c;    // copied as a 4-byte value
};

// @name fillRangeFromElement
// @class (none)
// @summary Assigns every element in [begin, end) from *src (string at +0x00 and dword at +0x1C); no-op when begin == end.
// @field LiftElem005FEFD0 +0x00 std::string field_0x00
// @field LiftElem005FEFD0 +0x1c uint32_t field_0x1c
void fn_005FEFD0(LiftElem005FEFD0* begin, LiftElem005FEFD0* end, const LiftElem005FEFD0* src) {
    for (LiftElem005FEFD0* p = begin; p != end; ++p) {
        p->field_0x00 = src->field_0x00;
        p->field_0x1c = src->field_0x1c;
    }
}
} // namespace lift_005FEFD0

// [0x005FF040]
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_0065F440(void* self);

extern void __fastcall fn_005FF040(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x0096EAEC;

    const uint32_t handle = lift_field<uint32_t>(base, 0x08);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x08) = 0;
    lift_field<uint32_t>(base, 0x0C) = 0;
    lift_field<uint32_t>(base, 0x10) = 0;

    ext_0065F440(self);
}
} // namespace lift_005FF040

// [0x005FD330]
namespace lift_005FD330 {
// @name TreeNode_eraseSubtree
// @summary Recursively erases a red-black tree subtree and frees its nodes.
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x19 uint8_t isNil


extern void ext_006A5C5C(uint32_t ptr);
extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);

void __thiscall fn_005FD330(uint32_t self, uint32_t node) {
    while (mem_read8(node + 0x19) == 0) {
        fn_005FD330(self, mem_read32(node + 0x8));
        uint32_t left = mem_read32(node);
        ext_006A5C5C(node);
        node = left;
    }
}
} // namespace lift_005FD330

// [0x005FF000] sub_005FF000 (53 bytes)
namespace lift_005FF000 {
// Known callee 0x005FD330: TreeNode_eraseSubtree (recursively erases a red-black subtree).
extern void ext_005FD330(uint32_t self, uint32_t node);
extern uint32_t mem_00B4B3F0; // RbTree head pointer (+0x04 of tree object)
extern uint32_t mem_00B4B3F4; // RbTree element count (+0x08 of tree object)
extern uint32_t mem_00B4B3EC; // RbTree object base (passed as this)

// Read/write a 32-bit word at a guest address held in a uint32_t.
static inline uint32_t& word_at(uint32_t addr) {
    return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(addr));
}

// @name RbTree_clear
// @class RbTree
// @summary Erases the whole tree below the head sentinel, then resets the head to empty (self-linked) with count 0.
// @field RbTree +0x04 uint32_t head
// @field RbTree +0x08 uint32_t count
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t parent
// @field TreeNode +0x08 uint32_t right
void fn_005FF000() {
    uint32_t head = mem_00B4B3F0;
    // Erase the subtree rooted at head->parent.
    ext_005FD330(0x00B4B3ECu, word_at(head + 0x04));

    head = mem_00B4B3F0;
    word_at(head + 0x04) = head; // parent = head (empty root)
    mem_00B4B3F4 = 0;            // count = 0
    word_at(head + 0x00) = head; // left = head
    word_at(head + 0x08) = head; // right = head
}
} // namespace lift_005FF000

// [0x005F3A30] sub_005F3A30 (59 bytes)
namespace lift_005F3A30 {
extern int mem_00B46790;

// @name recordRangeIfNonEmpty
// @summary Stores arg into mem_00B46790 when arg is non-null, its +0x04 pointer is non-null and the +0x04..+0x08 span holds at least one dword; otherwise stores 0. Returns self unchanged.
// @field LiftRange +0x04 uint32_t field_0x04
// @field LiftRange +0x08 uint32_t field_0x08
void* fn_005F3A30(void* self, void* arg) {
    if (arg == nullptr) {
        mem_00B46790 = 0;
        return self;
    }

    const uint32_t begin = lift_field<uint32_t>(arg, 0x04);
    if (begin == 0) {
        mem_00B46790 = 0;
        return self;
    }

    const uint32_t end = lift_field<uint32_t>(arg, 0x08);
    const int32_t diff = static_cast<int32_t>(end - begin);
    if ((diff >> 2) != 0) {
        mem_00B46790 = static_cast<int>(reinterpret_cast<uintptr_t>(arg));
    } else {
        mem_00B46790 = 0;
    }
    return self;
}
} // namespace lift_005F3A30

// [0x005F5240]
namespace lift_005F5240 {
// @name FindStringTableIndex
// @summary Linear search over a 6-entry, 28-byte-stride table at mem_00B46F80 comparing each entry against the argument with std::string operator==; returns the matching index, or 0 if none match.
// @field table entries are 0x1C bytes apart from mem_00B46F80 up to (exclusive) mem_00B46F80+0xA8

// Table of 0x1C-byte records (6 entries) starting at 0x00B46F80 and ending at 0x00B47028.
extern uint8_t mem_00B46F80[];
// Pointer slot at 0x00924FC4 holding the std::string equality routine (MSVCP80).
extern uint32_t mem_00924FC4;
// The MSVCP80 std::operator==(const basic_string&, const basic_string&) implementation.
extern bool ext_basic_string_equal(const void* lhs, const void* rhs);

using StringEqFn = bool (*)(const void*, const void*);

UINT __stdcall fn_005F5240(const void* name) {
    StringEqFn eq = reinterpret_cast<StringEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    if (eq == nullptr) {
        eq = &ext_basic_string_equal;
    }

    constexpr uintptr_t kStride = 0x1C;
    constexpr uintptr_t kTableEnd = 0xA8; // 0x00B47028 - 0x00B46F80

    UINT index = 0;
    for (uintptr_t off = 0; off < kTableEnd; off += kStride, ++index) {
        const void* entry = mem_00B46F80 + off;
        if (eq(name, entry)) {
            return index;
        }
    }
    return 0;
}
} // namespace lift_005F5240
