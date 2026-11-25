// Lifted C++ translation unit: lifted/leaf/decompiled_490000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00495A20 {
extern void (*mem_00925134)();

// @name sub_00495A20
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00596660(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00495A20(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x18;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00596660(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00495A20
#include <cstdint>

// [0x004940D0] sub_004940D0 (8 bytes)
namespace lift_004940D0 {
// Known callee 0x00494050: sub_00491FC0 (MSVC scalar deleting destructor: calls sub_00491A90 and frees memory when (flags & 1) is set.)
extern void ext_00494050();

// @name ForwardToDeletingDtorReturnSelf
// @summary Calls the scalar deleting destructor at 0x00494050 on self and returns self (ecx) unchanged.
void* fn_004940D0(void* self) {
    // The original passes ecx through the call, then returns ecx in eax.
    // The callee's flags argument is not set up by this stub; the call is
    // modeled with no arguments, so the callee's stack-based flags are not
    // reproduced here.
    ext_00494050();
    return self;
}
} // namespace lift_004940D0

// [0x00493E10] sub_00493E10 (20 bytes)
namespace lift_00493E10 {
// @name ForwardByteArgToVirtualSlot5
// @summary Stores the low byte of its argument at this+0x08, then tail-dispatches the same argument to vtable slot 5 (+0x14) of the object referenced by this+0x00.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 uint8_t field_0x08
uint32_t fn_00493E10(void* self, uint32_t arg) {
    // mov byte ptr [self+0x08], al
    lift_field<uint8_t>(self, 0x08) = static_cast<uint8_t>(arg);

    // mov ecx, [self]        ; ecx = object pointer (becomes `this` for the callee)
    void* obj = lift_field<void*>(self, 0x00);

    // mov edx, [ecx]         ; edx = object's vtable
    void* vtable = lift_field<void*>(obj, 0x00);

    // mov [esp+4], eax       ; argument is re-stored unchanged
    // mov eax, [edx+0x14]    ; eax = vtable[5]
    // jmp eax                ; tail call: callee receives (obj, arg) and its result is ours
    using VirtualFn = uint32_t (*)(void* self_obj, uint32_t value);
    auto fn = reinterpret_cast<VirtualFn>(lift_field<void*>(vtable, 0x14));
    return fn(obj, arg);
}
} // namespace lift_00493E10

// [0x004940E0] sub_004940E0 (24 bytes)
namespace lift_004940E0 {
// Known callee 0x00494060: sub_00494060 (XORs a 32-bit value at [ecx] with the first stack argument.)
extern void __thiscall ext_00494060(void* self, uint32_t mask);

// @name Unknown::ToggleMaskIfTestMismatch
// @class Unknown
// @summary Tests whether any bit in mask is set in the dword at [this]; if that boolean differs from the byte flag argument, calls sub_00494060 to XOR mask into the dword.
// @field Unknown +0x00 uint32_t field_0x00
void fn_004940E0(void* self, uint32_t mask, uint8_t flag) {
    // mov eax, [esp+4] ; test [ecx], eax ; setne dl
    uint32_t word = lift_field<uint32_t>(self, 0x00);
    uint8_t set = (word & mask) != 0 ? 1 : 0;

    // cmp dl, [esp+8] ; je ret
    if (set != flag) {
        // push eax ; call sub_00494060 (thiscall: ecx = self, stack = mask)
        ext_00494060(self, mask);
    }

    // ret 8 (callee-cleaned stack arguments; handled by the calling convention)
}
} // namespace lift_004940E0

// [0x00491870] sub_00491870 (27 bytes)
namespace lift_00491870 {
// @name sub_00491870
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00491730(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00491870(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00491730(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00491870

// [0x0049F2E0] sub_0049F2E0 (27 bytes)
namespace lift_0049F2E0 {
// @name sub_0049F2E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0049ECB0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0049F2E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0049ECB0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0049F2E0

// [0x00494FF0]
namespace lift_00494FF0 {
// @name initWithOneAndArg
// @summary Calls ext_00661680 on arg1 with (1, arg2) and returns arg1.


extern uint32_t __thiscall ext_00661680(uint32_t self, uint32_t a1, uint32_t a2);

uint32_t __stdcall sub_00494FF0(uint32_t arg1, uint32_t arg2) {
    ext_00661680(arg1, 1, arg2);
    return arg1;
}
} // namespace lift_00494FF0

// [0x004970A0] sub_004970A0 (40 bytes)
namespace lift_004970A0 {
extern int mem_00924FDC;

// @name UnknownClass::assignFromSubobjectVirtual_004970A0
// @class UnknownClass
// @summary If field +0xBC is non-null, call virtual slot 1 on the sub-object at +0x8 and assign its result into the string at +0x30.
// @field UnknownClass +0xBC void* field_0xBC
// @field UnknownClass +0x30 std::string field_0x30

namespace {

using SubobjectGetFn = const void* (__thiscall*)(void* self);
using StringAssignFn = void* (__thiscall*)(void* self, const void* src);

} // namespace

void fn_004970A0(void* self) {
    void* sub_ptr = lift_field<void*>(self, 0xBC);
    if (sub_ptr == nullptr) {
        return;
    }

    void* sub = static_cast<uint8_t*>(sub_ptr) + 0x8;
    void** vtbl = *reinterpret_cast<void***>(sub);
    auto get = reinterpret_cast<SubobjectGetFn>(vtbl[1]);
    const void* src = get(sub);

    void* str_field = static_cast<uint8_t*>(self) + 0x30;
    auto assign = *reinterpret_cast<StringAssignFn*>(&mem_00924FDC);
    assign(str_field, src);
}
} // namespace lift_004970A0

// [0x00492A50] UnknownClass::checkIndexAgainstCount (40 bytes)
namespace lift_00492A50 {
extern void (*mem_00925134)();   // MSVCR80!_invalid_parameter_noinfo IAT slot

// @name UnknownClass::checkIndexAgainstCount
// @class UnknownClass
// @summary Validates that self->+0x0 is non-null, then returns the index at self->+0x4 after checking it is below the uint32 at (self->+0x0)->+0x8; calls the CRT invalid-parameter handler on either failure.
// @field UnknownClass +0x00 void* field_0x00
// @field UnknownClass +0x04 uint32_t field_0x04

namespace {

// Original tail-called the CRT invalid-parameter handler through its IAT slot.
void invalid_parameter() {
#if defined(_MSC_VER) && defined(_M_IX86)
    mem_00925134();
#else
    (void)mem_00925134;
#endif
}

}  // namespace

// Original: thiscall, `this` in ecx.
uint32_t fn_00492A50(void* self) {
    // Guard: the pointer at +0x0 must be non-null.
    void* target = lift_field<void*>(self, 0x0);
    if (target == nullptr) {
        invalid_parameter();
    }

    // Original reads +0x0 again (eax) and +0x4 (ecx) after the guard.
    target = lift_field<void*>(self, 0x0);
    const uint32_t index = lift_field<uint32_t>(self, 0x4);
    const uint32_t bound = lift_field<uint32_t>(target, 0x8);

    // Guard: index must be below the bound. The original calls the handler
    // on failure and still returns the index in both paths.
    if (index >= bound) {
        invalid_parameter();
    }
    return index;
}
} // namespace lift_00492A50

// [0x00497650] sub_00497650 (40 bytes)
namespace lift_00497650 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(void* self, uint32_t a1, uint32_t a2, uint32_t a3 /* unused */);

// @name Unknown::forwardVtableSlot4Passthrough
// @class Unknown
// @summary Forwards (self, a1, a1, 0) to ext_0046E780 (virtual slot 4 dispatch) and returns self unchanged.
uint32_t fn_00497650(uint32_t self, uint32_t a1) {
    // Original stdcall (ret 8): two dword args. The callee is passed the
    // second argument twice; its fourth argument is unused and set to zero.
    void* selfPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(self));
    (void)ext_0046E780(selfPtr, a1, a1, 0u);
    return self;
}
} // namespace lift_00497650

// [0x0049AD40]
namespace lift_0049AD40 {
extern int mem_00925134;
extern void ext_invalid_parameter_noinfo(void);

// @name checkKeyAndCompareValue
// @summary Requires self->field_00 to be non-zero and equal to other->field_00 (else invalid-parameter path), then returns whether self->field_04 differs from other->field_04.
// @field Unknown +0x00 DWORD field_00
// @field Unknown +0x04 DWORD field_04
bool fn_0049AD40(const void* self, const void* other) {
    DWORD selfKey = lift_field<DWORD>(self, 0x00);
    if (selfKey == 0 || selfKey != lift_field<DWORD>(other, 0x00)) {
        ext_invalid_parameter_noinfo();
    }
    return lift_field<DWORD>(self, 0x04) != lift_field<DWORD>(other, 0x04);
}
} // namespace lift_0049AD40

// [0x00491980] sub_00491980 (41 bytes)
namespace lift_00491980 {
// @name sub_00491980
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00491620(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00491980(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00491620(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00491980

// [0x00497860] sub_00497860 (33 bytes)
namespace lift_00497860 {
extern void ext_0046C460(void* self, uint8_t flag);

// @name forwardMakeBoolString
// @summary Forwards out_str and flag to makeBoolString (0x0046C460) and returns out_str.
void* fn_00497860(void* out_str, uint8_t flag) {
    ext_0046C460(out_str, flag);
    return out_str;
}
} // namespace lift_00497860

// [0x00497830] sub_00497830 (33 bytes)
namespace lift_00497830 {
// @name sub_00497830
// @summary Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).
namespace lift_00497860 {
extern void ext_0046C500(void* self, uint8_t flag);

// @name forwardMakeBoolString
// @summary Forwards out_str and flag to makeBoolString (0x0046C460) and returns out_str.
void* fn_00497830(void* out_str, uint8_t flag) {
    ext_0046C500(out_str, flag);
    return out_str;
}
} // namespace lift_00497860
} // namespace lift_00497830

// [0x004925D0]
namespace lift_004925D0 {
// @name sub_004925D0
// @summary Checks whether field_0x08 equals field_0x0C (when mode == 0) or field_0x10 (when mode == 1), if field_0x00 == 1
// @field unknown +0x00 uint32_t field_0x00
// @field unknown +0x08 uint32_t field_0x08
// @field unknown +0x0C uint32_t field_0x0C
// @field unknown +0x10 uint32_t field_0x10


extern uint32_t mem_r32(uint32_t addr);

uint8_t __thiscall sub_004925D0(uint32_t self, uint32_t mode) {
    if (mem_r32(self) != 1) {
        return 0;
    }
    if (mode == 0) {
        return mem_r32(self + 0x08) == mem_r32(self + 0x0C) ? 1 : 0;
    }
    if (mode == 1) {
        return mem_r32(self + 0x08) == mem_r32(self + 0x10) ? 1 : 0;
    }
    return 0;
}
} // namespace lift_004925D0

// [0x00493330]
namespace lift_00493330 {
// @name TreeErase
// @summary Recursively erases a red-black tree subtree starting from the given node.
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x21 uint8_t is_nil


extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);
extern void ext_006A5C5C(uint32_t ptr);

void __thiscall fn_00493330(void* self, uint32_t node) {
    uint32_t edi = node;
    if (mem_read8(edi + 0x21) == 0) {
        uint32_t esi = edi;
        do {
            uint32_t right = mem_read32(esi + 0x8);
            fn_00493330(self, right);
            esi = mem_read32(esi);
            ext_006A5C5C(edi);
            edi = esi;
        } while (mem_read8(esi + 0x21) == 0);
    }
}
} // namespace lift_00493330

// [0x00492CC0]
namespace lift_00492CC0 {
// Import thunk forwarding to MFC80!ord_762 (cdecl, one stack argument, returns a pointer in eax).
extern void* ext_006A5C62(uint32_t size);

// @name fn_00492CC0 (allocate and zero small record)
// @class Unknown
// @summary Calls ext_006A5C62(0x24) to get a 0x24-byte record, zeroes the dwords at +0x00, +0x04 and +0x08 (each guarded by a non-zero address test), sets byte +0x20 to 1 and byte +0x21 to 0, then returns the record pointer.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x20 uint8_t field_0x20
// @field Unknown +0x21 uint8_t field_0x21
extern void* fn_00492CC0(void) {
    void* eax = ext_006A5C62(0x24);

    if (eax != nullptr) {
        lift_field<uint32_t>(eax, 0x00) = 0;
    }

    uintptr_t ecx = reinterpret_cast<uintptr_t>(eax) + 0x04;
    if (ecx != 0) {
        *reinterpret_cast<uint32_t*>(ecx) = 0;
    }

    ecx = reinterpret_cast<uintptr_t>(eax) + 0x08;
    if (ecx != 0) {
        *reinterpret_cast<uint32_t*>(ecx) = 0;
    }

    lift_field<uint8_t>(eax, 0x20) = 0x01;
    lift_field<uint8_t>(eax, 0x21) = 0x00;
    return eax;
}
} // namespace lift_00492CC0

// [0x00491890] sub_00491890 (55 bytes)
namespace lift_00491890 {
// @name sub_00491890
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_004917B0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_00491890(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_004917B0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x7Cu;
}
} // namespace lift_0054F2C0
} // namespace lift_00491890

// [0x0049BEE0] sub_0049BEE0 (57 bytes)
namespace lift_0049BEE0 {
// @name FindFirstMatchInList
// @summary Walks a sentinel-terminated linked list and stops at the first node whose embedded object's virtual predicate (vtable slot 10) accepts arg; writes {value, node} to out and returns out.
// @field ListNode +0x00 void* next
// @field ListNode +0x08 void* payload (object; vptr at offset 0, predicate in vtable slot 10 at +0x28)
// @field FindResult +0x00 uint32_t value
// @field FindResult +0x04 void* node

namespace {
using PredicateFn = bool (*)(void* self, uint32_t arg);
}

void* fn_0049BEE0(void* out, uint32_t value, void* head, uint32_t unused, void* sentinel, uint32_t arg) {
    (void)unused;

    uint8_t* node = static_cast<uint8_t*>(head);
    while (node != sentinel) {
        // node+0x08 holds an object whose first word is its vtable pointer.
        void** vtable = lift_field<void**>(node, 8);
        auto pred = reinterpret_cast<PredicateFn>(vtable[10]); // vtable +0x28
        if (pred(node + 8, arg)) {
            break;
        }
        node = lift_field<uint8_t*>(node, 0); // node->next
    }

    lift_field<uint32_t>(out, 0) = value;
    lift_field<void*>(out, 4) = node;
    return out;
}
} // namespace lift_0049BEE0

// [0x0049DBA0] sub_0049DBA0 (57 bytes)
namespace lift_0049DBA0 {
// @name ListFindFirstAccepting_0049DBA0
// @summary Walks an intrusive list from begin until end; writes (first, node) to out, where node is the first entry whose embedded object's virtual slot 10 accepts key, or end if none does.
// @field ListNode +0x00 void* next
// @field ListNode +0x10 void* embeddedObjectVtable
// @field ListFindResult +0x00 DWORD first
// @field ListFindResult +0x04 void* node

// Virtual slot 10 (byte offset 0x28 in a 32-bit vtable): bool Accept(DWORD key).
typedef bool (__thiscall *ItemAcceptFn)(void* self, DWORD key);

void fn_0049DBA0(void* out, DWORD first, void* begin, DWORD /*unused arg3*/, void* end, DWORD key) {
    void* node = begin;
    while (node != end) {
        void* obj = static_cast<uint8_t*>(node) + 0x10;
        void* vtable = lift_field<void*>(node, 0x10);
        ItemAcceptFn accept = lift_field<ItemAcceptFn>(vtable, 0x28);
        if (accept(obj, key)) {
            break;
        }
        node = lift_field<void*>(node, 0x00);
    }
    lift_field<DWORD>(out, 0x00) = first;
    lift_field<void*>(out, 0x04) = node;
}
} // namespace lift_0049DBA0

// [0x0049DB60] sub_0049DB60 (62 bytes)
namespace lift_0049DB60 {
// Address of MSVCP80 operator==(const std::string&, const std::string&) (__cdecl).
extern uint32_t mem_00924FC4;

// @name ListFindByStringKey
// @class ListNode
// @summary Walks a singly linked node list from `first` until `last`, returning {head, match} where match is the first node whose string key equals `key`, or `last` if none.
// @field ListNode +0x00 uint32_t next
// @field ListNode +0x24 std::string key

namespace {

using StringEqualFn = bool (__cdecl*)(const void* lhs, const void* rhs);

template <typename T>
T load(uint32_t addr) {
    return *reinterpret_cast<const T*>(static_cast<uintptr_t>(addr));
}

template <typename T>
void store(uint32_t addr, T value) {
    *reinterpret_cast<T*>(static_cast<uintptr_t>(addr)) = value;
}

}  // namespace

// Out-parameter `out` receives two dwords: [0] = head, [1] = matching node (or last).
// `unused` is the 4th stack argument; the original code never reads it.
void fn_0049DB60(uint32_t out, uint32_t head, uint32_t first, uint32_t unused, uint32_t last, uint32_t key) {
    (void)unused;

    auto string_equal = reinterpret_cast<StringEqualFn>(static_cast<uintptr_t>(mem_00924FC4));

    uint32_t node = first;
    while (node != last) {
        const uint32_t node_key = node + 0x24;
        if (string_equal(reinterpret_cast<const void*>(static_cast<uintptr_t>(node_key)),
                         reinterpret_cast<const void*>(static_cast<uintptr_t>(key)))) {
            break;
        }
        node = load<uint32_t>(node);  // node->next
    }

    store<uint32_t>(out, head);
    store<uint32_t>(out + 4, node);
}
} // namespace lift_0049DB60

// [0x004918D0] sub_004918D0 (63 bytes)
namespace lift_004918D0 {
// @name sub_004918D0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00491730(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_004918D0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00491730(lift_field<uint32_t>(self, 0x4),
                     lift_field<uint32_t>(self, 0x8),
                     self,
                     self);
        fn_006A5C5C(lift_field<uint32_t>(self, 0x4));
    }
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_00569970
} // namespace lift_004918D0

// [0x00496CE0] sub_00496CE0 (25 bytes)
namespace lift_00496CE0 {
// @name sub_00496CE0
// @summary Auto-lifted identical-shape clone of 0x005AAD10 (ObjectWithChild::SetValueFromStringKey).
namespace lift_005AAD10 {
// @name ObjectWithChild::SetValueFromStringKey
// @class ObjectWithChild
// @summary Looks up a key in a 7-entry string table and stores the resulting index on the object via setValueAndNotifyChild.

extern int __stdcall ext_004948C0(const void* key);
extern void ext_00496CC0(uint8_t* self, int32_t value);

void fn_00496CE0(uint8_t* self, const void* key) {
    int32_t index = ext_004948C0(key);
    ext_00496CC0(self, index);
}
} // namespace lift_005AAD10
} // namespace lift_00496CE0

// [0x004976D0] sub_004976D0 (71 bytes)
namespace lift_004976D0 {
// @name Unknown::PointInRectInclusive
// @class Unknown
// @summary Returns true if the 2D point (arg[0], arg[1]) lies inside the float rect at this (x1,y1,x2,y2), inclusive; any NaN yields false.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
uint8_t __thiscall fn_004976D0(const void* self, const void* point) {
    const float rect_x1 = lift_field<float>(self, 0x0);
    const float rect_y1 = lift_field<float>(self, 0x4);
    const float rect_x2 = lift_field<float>(self, 0x8);
    const float rect_y2 = lift_field<float>(self, 0xC);

    const float px = lift_field<float>(point, 0x0);
    const float py = lift_field<float>(point, 0x4);

    // Ordered comparisons are false for NaN, matching the x87 unordered-flag checks.
    if (!(rect_x1 <= px)) return 0;
    if (!(rect_x2 >= px)) return 0;
    if (!(rect_y1 <= py)) return 0;
    if (!(rect_y2 >= py)) return 0;
    return 1;
}
} // namespace lift_004976D0

// [0x00491840] sub_00491840 (43 bytes)
namespace lift_00491840 {
// @name sub_00491840
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_004915C0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00491840(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_004915C0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00491840

// [0x00495A60] sub_00495A60 (77 bytes)
namespace lift_00495A60 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);

// @name RigManager::RigManager
// @class RigManager
// @summary Constructor: runs the PropertySource base constructor, installs the RigManager vtable (0x0093F0FC), zeroes the member fields, and returns this.
// @field RigManager +0x00 DWORD vtable
// @field RigManager +0x0c DWORD field_0x0c
// @field RigManager +0x10 DWORD field_0x10
// @field RigManager +0x14 DWORD field_0x14
// @field RigManager +0x1c DWORD field_0x1c
// @field RigManager +0x20 DWORD field_0x20
// @field RigManager +0x24 DWORD field_0x24
// @field RigManager +0x28 DWORD field_0x28
void* fn_00495A60(void* self) {
    auto* p = static_cast<unsigned char*>(self);
    ext_00661980(self);
    *reinterpret_cast<DWORD*>(p + 0x00) = 0x0093F0FCu;
    *reinterpret_cast<DWORD*>(p + 0x0c) = 0;
    *reinterpret_cast<DWORD*>(p + 0x10) = 0;
    *reinterpret_cast<DWORD*>(p + 0x14) = 0;
    *reinterpret_cast<DWORD*>(p + 0x1c) = 0;
    *reinterpret_cast<DWORD*>(p + 0x20) = 0;
    *reinterpret_cast<DWORD*>(p + 0x24) = 0;
    *reinterpret_cast<DWORD*>(p + 0x28) = 0;
    return self;
}
} // namespace lift_00495A60

// [0x00492C60] sub_00492C60 (81 bytes)
namespace lift_00492C60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called with one stack argument (0x24) and returns the allocated pointer in eax.
extern void* __cdecl ext_006A5C62(size_t size);

// @name AllocRecordFromParts
// @class Record
// @summary Allocates a 0x24-byte record, stores three dwords, copies five dwords from src into the record, and stores a flag byte followed by a zero byte. Returns the record, or nullptr if allocation fails.
// @field Record +0x00 uint32_t field_0x00
// @field Record +0x04 uint32_t field_0x04
// @field Record +0x08 uint32_t field_0x08
// @field Record +0x0c uint32_t field_0x0c
// @field Record +0x10 float field_0x10
// @field Record +0x14 float field_0x14
// @field Record +0x18 float field_0x18
// @field Record +0x1c float field_0x1c
// @field Record +0x20 uint8_t field_0x20
// @field Record +0x21 uint8_t field_0x21
void* __stdcall fn_00492C60(DWORD a1, DWORD a2, DWORD a3, const DWORD* src, BYTE flag) {
    void* p = ext_006A5C62(0x24);
    if (p == nullptr) {
        return nullptr;
    }

    uint8_t* out = static_cast<uint8_t*>(p);

    // Copy raw 32-bit words so float payloads are preserved bit-for-bit.
    auto store32 = [out](ptrdiff_t off, DWORD v) {
        std::memcpy(out + off, &v, sizeof(v));
    };

    store32(0x00, a1);
    store32(0x04, a2);
    store32(0x08, a3);
    store32(0x0c, src[0]);
    store32(0x10, src[1]);
    store32(0x14, src[2]);
    store32(0x18, src[3]);
    store32(0x1c, src[4]);

    out[0x20] = flag;
    out[0x21] = 0;

    return p;
}
} // namespace lift_00492C60

// [0x00494940] sub_00494940 (83 bytes)
namespace lift_00494940 {
// Known callee 0x0065C660: sub_0065C660 (Stores address of mem_00928E8C into field at offset +0x0.)
extern void __fastcall ext_0065C660(void* self);

// @name Unknown::ReleaseOptionalSubobjectAndReset
// @class Unknown
// @summary If the subobject pointer at +0x08 is non-null, calls its vtable slot 0 with argument 1 (thiscall), then calls ext_0065C660(this) to reset the object's +0x00 field.
// @field Unknown +0x08 void* field_0x08
void fn_00494940(void* self) {
    using SubobjectDtorFn = void (__thiscall*)(void* self, uint32_t flags);

    void* subobject = lift_field<void*>(self, 0x08);
    if (subobject != nullptr) {
        void** vtable = *reinterpret_cast<void***>(subobject);
        auto release = reinterpret_cast<SubobjectDtorFn>(vtable[0]);
        release(subobject, 1u);
    }

    ext_0065C660(self);
}
} // namespace lift_00494940

// [0x00494860]
namespace lift_00494860 {
extern int32_t ext_00494830(void* self);
extern uint32_t ext_0041CCC0(void* self, int32_t index);
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;

// @name Unknown::getStringAt
// @class Unknown
// @summary Returns a copy of the string element at index if in bounds, or an empty string otherwise.
// @field Unknown +0x08 uint8_t field_0x08
void* __thiscall fn_00494860(void* self, void* out_str, int32_t index) {
    if (index >= 0) {
        int32_t max_index = ext_00494830(self) - 1;
        if (index <= max_index) {
            uint32_t elem_addr = ext_0041CCC0(reinterpret_cast<uint8_t*>(self) + 0x8, index);
            using StringCopyCtor = void* (__thiscall*)(void*, uint32_t);
            reinterpret_cast<StringCopyCtor>(static_cast<uintptr_t>(mem_00924FE0))(out_str, elem_addr);
            return out_str;
        }
    }

    using StringCstrCtor = void* (__thiscall*)(void*, uint32_t);
    reinterpret_cast<StringCstrCtor>(static_cast<uintptr_t>(mem_00924FE4))(out_str, 0x00928B5Du);
    return out_str;
}
} // namespace lift_00494860

// [0x00494070]
namespace lift_00494070 {
// @name findAncestorWithFlags
// @summary Walks up an object's parent chain via vtable+0x10 and dynamic_cast until finding one whose vtable+0x50 flags match the given mask

extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_006A6E9E(uint32_t inptr, uint32_t vf_delta, uint32_t src_type, uint32_t dst_type, uint32_t is_reference);

extern uint32_t fn_00494070(uint32_t mask, uint32_t obj) {
    uint32_t cur = obj;
    while (cur != 0) {
        uint32_t vtable = mem_read32(cur);
        uint32_t get_flags = mem_read32(vtable + 0x50);
        uint32_t flags = reinterpret_cast<uint32_t (*)(uint32_t)>(static_cast<uintptr_t>(get_flags))(cur);
        if ((flags & mask) == mask) {
            return cur;
        }
        uint32_t get_parent = mem_read32(vtable + 0x10);
        uint32_t parent = reinterpret_cast<uint32_t (*)(uint32_t, uint32_t)>(static_cast<uintptr_t>(get_parent))(cur, 0u);
        cur = ext_006A6E9E(parent, 0u, 0x00A2E2F8u, 0x00A2E2D8u, 0u);
    }
    return 0;
}
} // namespace lift_00494070

// [0x00490490] sub_00490490 (87 bytes)
namespace lift_00490490 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADAB78;
extern DWORD mem_00ADAB74;

// @name ensureGuardedStaticDword_00490490
// @summary One-time guarded initializer for the static DWORD at mem_00ADAB74; returns its address.
DWORD* fn_00490490() {
    // Bit 0 of mem_00ADAB78 is the "initialized" guard.
    if ((mem_00ADAB78 & 1u) == 0) {
        mem_00ADAB78 |= 1u;
        ext_0067A670(&mem_00ADAB74, 0u);
        mem_00ADAB74 = 0x0093E7FCu;
    }
    return &mem_00ADAB74;
}
} // namespace lift_00490490

// [0x004989F0] sub_004989F0 (87 bytes)
namespace lift_004989F0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00ADD170;
extern int mem_00ADD16C;

// @name initStaticObjectOnce_004989F0
// @summary One-time guarded initializer for the static object at mem_00ADD16C; returns its address.
void* fn_004989F0() {
    if ((mem_00ADD170 & 1) == 0) {
        mem_00ADD170 |= 1;
        ext_0067A670(&mem_00ADD16C, 0);
        mem_00ADD16C = 0x93f35c;
    }
    return &mem_00ADD16C;
}
} // namespace lift_004989F0

// [0x0049DAA0]
namespace lift_0049DAA0 {
// @name ensureStaticObjectInitialized_0049DAA0
// @summary One-time guarded initializer for the static object at mem_00ADD82C; returns its address.

// Callee: runs the object's constructor-like setup on the object passed as self.
DWORD ext_0067A670(void* self, DWORD value);

// Init guard bitfield (bit 0 = initialized/in-progress).
extern DWORD mem_00ADD830;
// Static object storage; first DWORD holds the object's state/vtable-like value.
extern DWORD mem_00ADD82C;

DWORD fn_0049DAA0() {
    // Guard: run one-time initialization if bit 0 of the guard word is clear.
    if ((mem_00ADD830 & 1u) == 0) {
        mem_00ADD830 |= 1u;
        ext_0067A670(&mem_00ADD82C, 0);
        mem_00ADD82C = 0x009400FCu;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00ADD82C));
}
} // namespace lift_0049DAA0

// [0x0049B3A0] sub_0049B3A0 (87 bytes)
namespace lift_0049B3A0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00ADD7E8;
extern int mem_00ADD7E4;

// @name initStaticObjectOnce_0049B3A0
// @summary One-time guarded initialization of the static object at 0x00ADD7E4; returns its address.
void* fn_0049B3A0() {
    // Bit 0 of mem_00ADD7E8 guards one-time init.
    if ((mem_00ADD7E8 & 1) == 0) {
        mem_00ADD7E8 |= 1;
        ext_0067A670();
        mem_00ADD7E4 = 0x0093FBEC;
    }
    return reinterpret_cast<void*>(&mem_00ADD7E4);
}
} // namespace lift_0049B3A0

// [0x0049CFF0] sub_0049CFF0 (87 bytes)
namespace lift_0049CFF0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADD818;
extern DWORD mem_00ADD814;

// @name ensureStaticObjectInitialized_0049CFF0
// @summary One-time initializer guarded by bit 0 of mem_00ADD818; initializes the static object at mem_00ADD814 and returns its address.
void* fn_0049CFF0() {
    if ((mem_00ADD818 & 1u) == 0) {
        mem_00ADD818 |= 1u;
        ext_0067A670(&mem_00ADD814, 0u);
        mem_00ADD814 = 0x0093FB14u;
    }
    return &mem_00ADD814;
}
} // namespace lift_0049CFF0

// [0x00498F90] sub_00498F90 (87 bytes)
namespace lift_00498F90 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADD178;
extern DWORD mem_00ADD174;

// @name initStaticObjectOnce_00498F90
// @summary One-time guarded initializer for the static object at mem_00ADD174; sets init bit 0 in mem_00ADD178, runs ext_0067A670 on the object, stores its vtable-like pointer 0x0093F284, and returns the object address.
void* fn_00498F90() {
    if ((mem_00ADD178 & 1u) == 0) {
        mem_00ADD178 |= 1u;
        ext_0067A670(&mem_00ADD174, 0);
        mem_00ADD174 = 0x0093F284u;
    }
    return &mem_00ADD174;
}
} // namespace lift_00498F90

// [0x00497720]
namespace lift_00497720 {
extern const double mem_00993828;

// @name Vec2::midpoint
// @class Vec2
// @summary Computes the midpoint between this 2D vector and another, writing to out and returning out.
// @field Vec2 +0x00 float x
// @field Vec2 +0x04 float y
uint32_t __thiscall sub_00497720(uint32_t this_ptr, uint32_t out_ptr, uint32_t other_ptr) {
    float* self = reinterpret_cast<float*>(static_cast<uintptr_t>(this_ptr));
    float* out = reinterpret_cast<float*>(static_cast<uintptr_t>(out_ptr));
    const float* other = reinterpret_cast<const float*>(static_cast<uintptr_t>(other_ptr));

    float dx = static_cast<float>((other[0] - self[0]) * mem_00993828);
    float dy = static_cast<float>((other[1] - self[1]) * mem_00993828);

    out[0] = self[0] + dx;
    out[1] = self[1] + dy;

    return out_ptr;
}
} // namespace lift_00497720

// [0x0049DA40] sub_0049DA40 (87 bytes)
namespace lift_0049DA40 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00ADD828;
extern int mem_00ADD824;

// @name initStaticObjectOnce_0049DA40
// @summary One-time guarded initializer for the static object at 0x00ADD824; sets its vtable-style first DWORD to 0x0093FF4C and returns its address.
void* fn_0049DA40() {
    // Bit 0 of the guard flag at 0x00ADD828 marks "initialized or in progress".
    if ((mem_00ADD828 & 1) == 0) {
        mem_00ADD828 |= 1;
        ext_0067A670(&mem_00ADD824, 0);
        mem_00ADD824 = 0x0093FF4C;
    }
    return &mem_00ADD824;
}
} // namespace lift_0049DA40

// [0x0049DB00] sub_0049DB00 (87 bytes)
namespace lift_0049DB00 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADD838;
extern DWORD mem_00ADD834;

// @name initStaticObjectOnce_0049DB00
// @summary One-time guarded initializer: if bit 0 of mem_00ADD838 is clear, set it, run ext_0067A670 on &mem_00ADD834, then store 0x009402AC there; returns &mem_00ADD834.
// (The original wraps this in an SEH frame via fs:[0]; that is not portable and is omitted.
//  The stack argument passed to ext_0067A670 in the original is the saved SEH link, which is
//  not reproducible here, so 0 is passed.)
void* fn_0049DB00() {
    if ((mem_00ADD838 & 1u) == 0) {
        mem_00ADD838 |= 1u;
        ext_0067A670(&mem_00ADD834, 0);
        mem_00ADD834 = 0x009402ACu;
    }
    return &mem_00ADD834;
}
} // namespace lift_0049DB00

// [0x0049BE80] sub_0049BE80 (87 bytes)
namespace lift_0049BE80 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00ADD7F0;
extern int mem_00ADD7EC;

// @name initStaticObjectOnce_0049BE80
// @summary One-time guarded initialization of the static object at 0x00ADD7EC (stores 0x0093FA3C into it); returns its address.
void* fn_0049BE80() {
    // Bit 0 of mem_00ADD7F0 guards one-time init. The fs:[0] SEH frame push/pop is compiler scaffolding and is not modeled.
    if ((mem_00ADD7F0 & 1) == 0) {
        mem_00ADD7F0 |= 1;
        ext_0067A670();
        mem_00ADD7EC = 0x0093FA3C;
    }
    return reinterpret_cast<void*>(&mem_00ADD7EC);
}
} // namespace lift_0049BE80

// [0x0049CC60] sub_0049CC60 (87 bytes)
namespace lift_0049CC60 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00ADD810;
extern int mem_00ADD80C;

// @name ensureStaticObjectInitialized_0049CC60
// @summary One-time guarded initialization of the global object at 0x00ADD80C (guard bit 0 of 0x00ADD810); returns its address.
int* fn_0049CC60() {
    // The SEH frame setup/teardown (fs:[0] push/restore) is exception-handling
    // bookkeeping and is intentionally not modeled in portable C++.
    if ((mem_00ADD810 & 1) == 0) {
        mem_00ADD810 |= 1;
        ext_0067A670();
        mem_00ADD80C = 0x940024;
    }
    return &mem_00ADD80C;
}
} // namespace lift_0049CC60

// [0x0049E4A0]
namespace lift_0049E4A0 {
// @name storeValueAndStaticObject_0049E4A0
// @summary Calls the one-time guarded initializer for the static object at mem_00ADD82C, then writes the given value to out[0] and the object's address to out[1].

// @callee ext_0049DAA0 -> ensureStaticObjectInitialized_0049DAA0 (DWORD fn_0049DAA0(); returns object address)
extern DWORD ext_0049DAA0();

void sub_0049E4A0(DWORD* out, DWORD value) {
    DWORD obj = ext_0049DAA0();
    out[0] = value;
    out[1] = obj;
}
} // namespace lift_0049E4A0

// [0x0049D3F0] sub_0049D3F0 (30 bytes)
namespace lift_0049D3F0 {
// Known callee 0x0049BE80: initStaticObjectOnce_0049BE80 (One-time guarded initialization of the static object at 0x00ADD7EC; stores 0x0093FA3C into it; returns its address.)
// The disassembly pushes a single 0 argument before the call, so the callee takes one stack argument.
extern void* ext_0049BE80(uint32_t flag);

// @name storeValueAndStaticObjectAddr
// @summary Writes a value into out[0] and the address of the one-time-initialized static object into out[1].
void fn_0049D3F0(uint32_t* out, uint32_t value) {
    void* obj = ext_0049BE80(0);
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0049D3F0

// [0x0049E4C0] sub_0049E4C0 (30 bytes)
namespace lift_0049E4C0 {
// Known callee 0x0049DB00: initStaticObjectOnce_0049DB00 (One-time guarded initializer: if bit 0 of mem_00ADD838 is clear, set it, run ext_0067A670 on &mem_00ADD834, then store 0x009402AC there; returns &mem_00ADD834.)
extern void* ext_0049DB00();

// @name storeValueAndStaticObject_0049E4C0
// @summary Writes value to dst[0] and the address returned by initStaticObjectOnce_0049DB00() to dst[1].
// @field dst +0x00 uint32_t value
// @field dst +0x04 void* staticObject
void fn_0049E4C0(uint32_t* dst, uint32_t value) {
    void* obj = ext_0049DB00();
    dst[0] = value;
    dst[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_0049E4C0

// [0x0049D390] sub_0049D390 (87 bytes)
namespace lift_0049D390 {
// Known callee 0x0049CFF0: ensureStaticObjectInitialized_0049CFF0 (One-time initializer guarded by bit 0 of mem_00ADD818; initializes the static object at mem_00ADD814 and returns its address.)
extern void* ext_0049CFF0();
extern int mem_00B599BC;

// @name initPairWithStaticHandle
// @summary Writes a value into dst[0], stores the static object handle into dst[1], and returns dst.
// @field Pair +0x00 uint32_t field_0x00
// @field Pair +0x04 uint32_t field_0x04
void* fn_0049D390(void* dst, uint32_t value) {
    auto* out = static_cast<uint32_t*>(dst);

    // Pre-initialize both slots (original code zeroes [dst] and seeds [dst+4] from mem_00B599BC).
    out[0] = 0;
    out[1] = static_cast<uint32_t>(mem_00B599BC);

    // One-time initialization of the static object; returns its address.
    void* handle = ext_0049CFF0();

    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(handle));
    return dst;
}
} // namespace lift_0049D390

// [0x0049E440] sub_0049E440 (87 bytes)
namespace lift_0049E440 {
// Known callee 0x0049DA40: initStaticObjectOnce_0049DA40 (One-time guarded initializer for the static object at 0x00ADD824; sets its vtable-style first DWORD to 0x0093FF4C and returns its address.)
extern void* ext_0049DA40();
extern DWORD mem_00B599BC;

// @name initObjectWithStaticBase_0049E440
// @summary Zeroes the object's first DWORD, caches a global DWORD and the address returned by the static initializer into it, stores arg2 into the first DWORD, and returns the object pointer.
// @field <unknown> +0x00 DWORD field_0x00
// @field <unknown> +0x04 DWORD field_0x04
void* fn_0049E440(void* self, DWORD arg2) {
    lift_field<DWORD>(self, 0x00) = 0;
    lift_field<DWORD>(self, 0x04) = mem_00B599BC;

    void* staticObj = ext_0049DA40();

    lift_field<DWORD>(self, 0x04) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(staticObj));
    lift_field<DWORD>(self, 0x00) = arg2;
    return self;
}
} // namespace lift_0049E440

// [0x00499130] sub_00499130 (87 bytes)
namespace lift_00499130 {
// Known callee 0x00498F90: initStaticObjectOnce_00498F90 (One-time guarded initializer for the static object at mem_00ADD174; sets init bit 0 in mem_00ADD178, runs ext_0067A670 on the object, stores its vtable-like pointer 0x0093F284, and returns the object address.)
extern void* ext_00498F90();
extern uint32_t mem_00B599BC;

// @name initStaticPairOnce_00499130
// @summary Fills a two-word result (value, static object pointer) into the caller buffer and returns that buffer.
// @field Result +0x00 uint32_t field_0x00
// @field Result +0x04 void* field_0x04
void* fn_00499130(void* out, uint32_t value) {
    uint8_t* words = static_cast<uint8_t*>(out);
    lift_field<uint32_t>(words, 0) = 0;
    lift_field<uint32_t>(words, 4) = mem_00B599BC;
    void* obj = ext_00498F90();
    lift_field<void*>(words, 4) = obj;
    lift_field<uint32_t>(words, 0) = value;
    return out;
}
} // namespace lift_00499130
