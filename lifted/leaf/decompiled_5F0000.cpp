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

// [0x005F5BA0]
namespace lift_005F5BA0 {
extern uint32_t __stdcall ext_005F5240(const void* name);
extern uint32_t __thiscall ext_005F5470(void* self, uint32_t index);

// @name FindStringIndexAndInvoke
// @summary Looks up a name in the static string table to get its index, then passes that index to sub_005F5470 on the same this pointer and returns its result.
uint32_t __thiscall fn_005F5BA0(void* self, const void* name) {
    // mov eax, [esp+4]  -> name (first stack argument)
    // push esi / mov esi, ecx -> this saved in esi (here: the self parameter)
    // push eax; call ext_005F5240 -> index in eax
    // push eax; mov ecx, esi; call ext_005F5470 -> result in eax
    // ret 4 -> callee-cleans the one stack argument (thiscall)
    uint32_t index = ext_005F5240(name);
    return ext_005F5470(self, index);
}
} // namespace lift_005F5BA0

// [0x005FF240]
namespace lift_005FF240 {
template<typename T> void mem_write(uintptr_t addr, T val);

// @name sub_005FF240
// @summary Initializes object fields to zero, stores argument at +0x28, and sets vtable to 0x0096F154
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x28 uint32_t field_0x28
uint32_t __thiscall sub_005FF240(uintptr_t this_ptr, uint32_t arg0) {
    mem_write<uint32_t>(this_ptr + 0x08, 0);
    mem_write<uint32_t>(this_ptr + 0x0c, 0);
    mem_write<uint32_t>(this_ptr + 0x10, 0);
    mem_write<uint32_t>(this_ptr + 0x28, arg0);
    mem_write<uint32_t>(this_ptr + 0x00, 0x0096F154u);
    return static_cast<uint32_t>(this_ptr);
}
} // namespace lift_005FF240

// [0x005F51D0] sub_005F51D0 (69 bytes)
namespace lift_005F51D0 {
extern uint32_t mem_00B40640;

// @name Unknown::setField20cAndNotifySubobject
// @class Unknown
// @summary Stores the low byte of its argument at +0x20C; if the sub-object at +0x10 is non-null, calls its vtable slot 0x30 with (0x1000, arg, global mem_00B40640), then its vtable slot 0x2C with (0x1000, stored byte).
// @field Unknown +0x10 void* subobject
// @field Unknown +0x20C uint8_t flag
extern void __thiscall fn_005F51D0(void* self, uint32_t arg) {
    using VFn4 = void (*)(void*, uint32_t, uint32_t, uint32_t);
    using VFn3 = void (*)(void*, uint32_t, uint32_t);

    lift_field<uint8_t>(self, 0x20C) = static_cast<uint8_t>(arg & 0xFFu);

    void* sub = lift_field<void*>(self, 0x10);
    if (sub == nullptr) {
        return;
    }

    void* vt = lift_field<void*>(sub, 0);
    VFn4 slot30 = reinterpret_cast<VFn4>(lift_field<void*>(vt, 0x30));
    slot30(sub, 0x1000u, arg, mem_00B40640);

    // Re-read the sub-object and its vtable: the first call may have changed them.
    uint8_t stored = lift_field<uint8_t>(self, 0x20C);
    sub = lift_field<void*>(self, 0x10);
    vt = lift_field<void*>(sub, 0);
    VFn3 slot2C = reinterpret_cast<VFn3>(lift_field<void*>(vt, 0x2C));
    slot2C(sub, 0x1000u, static_cast<uint32_t>(stored));
}
} // namespace lift_005F51D0

// [0x005F5350] sub_005F5350 (74 bytes)
namespace lift_005F5350 {
// IAT slot 0x924FDC: MSVCP80 std::basic_string<char>::operator=(const basic_string&).
// Called thiscall (this in ecx, source string pushed as the single argument).
extern uint32_t mem_00924FDC;
extern void ext_00924FDC(void* dst_string, const void* src_string);

// @name Unknown::CopyFromSource_005F5350
// @class Unknown
// @summary Copies a 4-byte flag (from src+4, or the byte at address 0 when src is null), two floats at +0x08/+0x0C, two floats at +0x10/+0x14, assigns the std::string at +0x18 from src+0x18, and copies the byte at +0x34; returns self.
// @field Unknown +0x04 BYTE field_0x04
// @field Unknown +0x08 FLOAT field_0x08
// @field Unknown +0x0C FLOAT field_0x0c
// @field Unknown +0x10 FLOAT field_0x10
// @field Unknown +0x14 FLOAT field_0x14
// @field Unknown +0x18 std::string field_0x18
// @field Unknown +0x34 BYTE field_0x34
void* fn_005F5350(void* self, const void* src) {
    const uint8_t* s = static_cast<const uint8_t*>(src);
    uint8_t* d = static_cast<uint8_t*>(self);

    // Byte at (src + 4) when src is non-null; the original reads address 0 otherwise.
    const uint8_t* flag_src = s ? s + 0x04 : nullptr;
    lift_field<uint8_t>(d, 0x04) = *flag_src;

    lift_field<float>(d, 0x08) = lift_field<float>(s, 0x08);
    lift_field<float>(d, 0x0C) = lift_field<float>(s, 0x0C);
    lift_field<float>(d, 0x10) = lift_field<float>(s, 0x10);
    lift_field<float>(d, 0x14) = lift_field<float>(s, 0x14);

    // std::string assignment at +0x18 from src+0x18.
    ext_00924FDC(d + 0x18, s + 0x18);

    lift_field<uint8_t>(d, 0x34) = lift_field<uint8_t>(s, 0x34);
    return self;
}
} // namespace lift_005F5350

// [0x005F5410]
namespace lift_005F5410 {
// @name CopyThisFloatTripletToGlobals
// @summary On first call, zeroes three float globals and sets init flag bit 0 in mem_00B46878; then copies this->+0x170/+0x174/+0x178 into mem_00B4686C/mem_00B46870/mem_00B46874. thiscall, this in ecx.
// @field <unknown-class> +0x170 float field_0x170
// @field <unknown-class> +0x174 float field_0x174
// @field <unknown-class> +0x178 float field_0x178

extern uint32_t mem_00B46878;
extern float mem_00B4686C;
extern float mem_00B46870;
extern float mem_00B46874;

extern void __thiscall sub_005F5410(void* self) {
    if ((mem_00B46878 & 1u) == 0) {
        mem_00B46874 = 0.0f;
        mem_00B46870 = 0.0f;
        mem_00B4686C = 0.0f;
        mem_00B46878 |= 1u;
    }

    mem_00B4686C = lift_field<float>(self, 0x170);
    mem_00B46870 = lift_field<float>(self, 0x174);
    mem_00B46874 = lift_field<float>(self, 0x178);
}
} // namespace lift_005F5410
