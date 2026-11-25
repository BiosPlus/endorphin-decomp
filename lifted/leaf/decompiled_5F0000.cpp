// Lifted C++ translation unit: lifted/leaf/decompiled_5F0000.cpp
#include "lift_compat.h"
#include <string>
#include <new>
#include <cstdint>

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

// [0x005F3730] sub_005F3730 (87 bytes)
namespace lift_005F3730 {
// @name sub_005F3730
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B467F0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B467EC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F3730() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6F4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B467F0 & 1u) == 0) {
        mem_00B467F0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B467EC, frame[0]);
        mem_00B467EC = 0x96BE94u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B467EC;
}
} // namespace lift_004CAE30
} // namespace lift_005F3730

// [0x005F3790] sub_005F3790 (87 bytes)
namespace lift_005F3790 {
// @name sub_005F3790
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B467F8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B467F4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F3790() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6F6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B467F8 & 1u) == 0) {
        mem_00B467F8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B467F4, frame[0]);
        mem_00B467F4 = 0x96BF6Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B467F4;
}
} // namespace lift_004CAE30
} // namespace lift_005F3790

// [0x005F37F0] sub_005F37F0 (87 bytes)
namespace lift_005F37F0 {
// @name sub_005F37F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46800;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B467FC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F37F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6F8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46800 & 1u) == 0) {
        mem_00B46800 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B467FC, frame[0]);
        mem_00B467FC = 0x96C044u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B467FC;
}
} // namespace lift_004CAE30
} // namespace lift_005F37F0

// [0x005F3850] sub_005F3850 (87 bytes)
namespace lift_005F3850 {
// @name sub_005F3850
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46808;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B46804;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F3850() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6FAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46808 & 1u) == 0) {
        mem_00B46808 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B46804, frame[0]);
        mem_00B46804 = 0x96C11Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B46804;
}
} // namespace lift_004CAE30
} // namespace lift_005F3850

// [0x005F38B0] sub_005F38B0 (87 bytes)
namespace lift_005F38B0 {
// @name sub_005F38B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46810;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4680C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F38B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6FCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46810 & 1u) == 0) {
        mem_00B46810 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4680C, frame[0]);
        mem_00B4680C = 0x96C1F4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4680C;
}
} // namespace lift_004CAE30
} // namespace lift_005F38B0

// [0x005F3910] sub_005F3910 (87 bytes)
namespace lift_005F3910 {
// @name sub_005F3910
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46818;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B46814;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F3910() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A6FEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46818 & 1u) == 0) {
        mem_00B46818 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B46814, frame[0]);
        mem_00B46814 = 0x96C2CCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B46814;
}
} // namespace lift_004CAE30
} // namespace lift_005F3910

// [0x005F3970] sub_005F3970 (87 bytes)
namespace lift_005F3970 {
// @name sub_005F3970
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46820;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4681C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F3970() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A700Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46820 & 1u) == 0) {
        mem_00B46820 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4681C, frame[0]);
        mem_00B4681C = 0x96C3A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4681C;
}
} // namespace lift_004CAE30
} // namespace lift_005F3970

// [0x005F39D0] sub_005F39D0 (87 bytes)
namespace lift_005F39D0 {
// @name sub_005F39D0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B46828;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B46824;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005F39D0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A702Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B46828 & 1u) == 0) {
        mem_00B46828 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B46824, frame[0]);
        mem_00B46824 = 0x96C47Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B46824;
}
} // namespace lift_004CAE30
} // namespace lift_005F39D0

// [0x005FD090] sub_005FD090 (87 bytes)
namespace lift_005FD090 {
// @name sub_005FD090
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4702C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47028;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD090() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A797Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4702C & 1u) == 0) {
        mem_00B4702C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47028, frame[0]);
        mem_00B47028 = 0x96E5DCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47028;
}
} // namespace lift_004CAE30
} // namespace lift_005FD090

// [0x005FD0F0] sub_005FD0F0 (87 bytes)
namespace lift_005FD0F0 {
// @name sub_005FD0F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47034;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47030;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD0F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A799Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47034 & 1u) == 0) {
        mem_00B47034 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47030, frame[0]);
        mem_00B47030 = 0x96E6B4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47030;
}
} // namespace lift_004CAE30
} // namespace lift_005FD0F0

// [0x005FD150] sub_005FD150 (87 bytes)
namespace lift_005FD150 {
// @name sub_005FD150
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4703C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47038;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD150() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A79BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4703C & 1u) == 0) {
        mem_00B4703C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47038, frame[0]);
        mem_00B47038 = 0x96E78Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47038;
}
} // namespace lift_004CAE30
} // namespace lift_005FD150

// [0x005FD1B0] sub_005FD1B0 (87 bytes)
namespace lift_005FD1B0 {
// @name sub_005FD1B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47044;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47040;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD1B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A79DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47044 & 1u) == 0) {
        mem_00B47044 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47040, frame[0]);
        mem_00B47040 = 0x96E864u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47040;
}
} // namespace lift_004CAE30
} // namespace lift_005FD1B0

// [0x005FD210] sub_005FD210 (87 bytes)
namespace lift_005FD210 {
// @name sub_005FD210
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B4704C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47048;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD210() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A79FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B4704C & 1u) == 0) {
        mem_00B4704C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47048, frame[0]);
        mem_00B47048 = 0x96E93Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47048;
}
} // namespace lift_004CAE30
} // namespace lift_005FD210

// [0x005FD270] sub_005FD270 (87 bytes)
namespace lift_005FD270 {
// @name sub_005FD270
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B47054;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B47050;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005FD270() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A7A1Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B47054 & 1u) == 0) {
        mem_00B47054 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B47050, frame[0]);
        mem_00B47050 = 0x96EA14u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B47050;
}
} // namespace lift_004CAE30
} // namespace lift_005FD270

// [0x005FD2D0] sub_005FD2D0 (95 bytes)
namespace lift_005FD2D0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Called here as (out_str, arg) with a string-object pointer and a constant pointer argument.
extern void* ext_0066AD10(void* out_str, const void* arg);
// Callee 0x006A6C87 (18B), called once with a constant pointer argument during init.
extern void ext_006A6C87(const void* arg);
extern int mem_00B47074;
extern int mem_00B47058;

// @name GetOnceInitString_005FD2D0
// @summary Lazily initializes the static string object at mem_00B47058 exactly once and returns its address.
void* fn_005FD2D0() {
    if ((mem_00B47074 & 1) == 0) {
        mem_00B47074 |= 1;
        void* out = reinterpret_cast<void*>(&mem_00B47058);
        ext_0066AD10(out, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A92EC0u)));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091E6B0u)));
    }
    return reinterpret_cast<void*>(&mem_00B47058);
}
} // namespace lift_005FD2D0

// [0x005F3E70] sub_005F3E70 (109 bytes)
namespace lift_005F3E70 {
extern uintptr_t ext_004AB940(uintptr_t a, uintptr_t b, uintptr_t c, uintptr_t d, uintptr_t e);
extern int mem_00925134;

// @name IsElementValidAndNotLess_005F3E70
// @summary Looks up an element via sub_004AB940, validates it against the container bounds at a1+8, and returns 1 if *a5 is not less than the element's value, else 0.
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x00 uint32_t field_0x00
int fn_005F3E70(uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5, uintptr_t a6) {
    // MSVCR80!_invalid_parameter_noinfo (called via mem_00925134) terminates the process.
    auto invalid_parameter = []() { std::abort(); };

    uintptr_t elem = ext_004AB940(a2, a4, a5, a6, 0);

    if (a1 == 0 || a1 != a3) {
        invalid_parameter();
    }
    if (elem == a4) {
        return 0;
    }
    if (a1 == 0 || elem >= *reinterpret_cast<uint32_t*>(a1 + 8)) {
        invalid_parameter();
    }
    uint32_t lhs = *reinterpret_cast<uint32_t*>(a5);
    if (lhs < *reinterpret_cast<uint32_t*>(elem)) {
        return 0;
    }
    return 1;
}
} // namespace lift_005F3E70

// [0x005FF290]
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF290(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x0096EB5C;
    return obj;
}
} // namespace lift_005FF290

// [0x005FF300]
namespace lift_005FF300 {
extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0);

// @name allocAndInitObject_005FF300
// @summary Allocates 0x40 bytes, runs base initializer, and sets vtable to 0x0096EBCC.
// @field Unknown +0x00 uint32_t vtable
void* fn_005FF300(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg2;
    (void)arg3;
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0);
    *reinterpret_cast<uint32_t*>(obj) = 0x0096EBCCu;
    return obj;
}
} // namespace lift_005FF300

// [0x005FF370] sub_005FF370 (112 bytes)
namespace lift_005FF370 {
// @name sub_005FF370
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF370(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96EC3C;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF370

// [0x005FF3E0] sub_005FF3E0 (112 bytes)
namespace lift_005FF3E0 {
// @name sub_005FF3E0
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF3E0(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96ECAC;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF3E0

// [0x005FF450] sub_005FF450 (112 bytes)
namespace lift_005FF450 {
// @name sub_005FF450
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF450(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96ED1C;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF450

// [0x005FF4C0] sub_005FF4C0 (112 bytes)
namespace lift_005FF4C0 {
// @name sub_005FF4C0
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF4C0(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96ED8C;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF4C0

// [0x005FF530] sub_005FF530 (112 bytes)
namespace lift_005FF530 {
// @name sub_005FF530
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629370(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF530(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00629370(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96EDFC;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF530

// [0x005FF5A0] sub_005FF5A0 (112 bytes)
namespace lift_005FF5A0 {
// @name sub_005FF5A0
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629370(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF5A0(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00629370(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96EE6C;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF5A0

// [0x005FF790] sub_005FF790 (115 bytes)
namespace lift_005FF790 {
// @name sub_005FF790
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629AA0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF790(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x80);
    if (!obj) {
        return nullptr;
    }
    ext_00629AA0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F074;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF790

// [0x005FF810] sub_005FF810 (115 bytes)
namespace lift_005FF810 {
// @name sub_005FF810
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629AA0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF810(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x80);
    if (!obj) {
        return nullptr;
    }
    ext_00629AA0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F0E4;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF810

// [0x005FF920] sub_005FF920 (112 bytes)
namespace lift_005FF920 {
// @name sub_005FF920
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_006271A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF920(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_006271A0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F1C4;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF920

// [0x005FF990] sub_005FF990 (112 bytes)
namespace lift_005FF990 {
// @name sub_005FF990
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_006271A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FF990(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_006271A0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F234;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FF990

// [0x005FFA00] sub_005FFA00 (112 bytes)
namespace lift_005FFA00 {
// @name sub_005FFA00
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00627240(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FFA00(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00627240(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F2A4;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FFA00

// [0x005FFA70] sub_005FFA70 (112 bytes)
namespace lift_005FFA70 {
// @name sub_005FFA70
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629370(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FFA70(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_00629370(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F314;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FFA70

// [0x005FFAE0] sub_005FFAE0 (115 bytes)
namespace lift_005FFAE0 {
// @name sub_005FFAE0
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_00629AA0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FFAE0(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x80);
    if (!obj) {
        return nullptr;
    }
    ext_00629AA0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F384;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FFAE0

// [0x005FFC40] sub_005FFC40 (112 bytes)
namespace lift_005FFC40 {
// @name sub_005FFC40
// @summary Auto-lifted identical-shape clone of 0x005FF290 (Unknown::create_005FF290).
namespace lift_005FF290 {
// @name Unknown::create_005FF290
// @summary Allocates a 0x40-byte object, initializes it via ext_00627240 with four 32-bit arguments, and sets its vtable to 0x0096EB5C.
// @field Unknown +0x00 uint32_t vtable


extern void* ext_006A5C62(uint32_t size);
extern void* ext_006271A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void* fn_005FFC40(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x40);
    if (!obj) {
        return nullptr;
    }
    ext_006271A0(obj, arg0, arg1, arg2, arg3);
    *reinterpret_cast<uint32_t*>(obj) = 0x96F3FC;
    return obj;
}
} // namespace lift_005FF290
} // namespace lift_005FFC40
