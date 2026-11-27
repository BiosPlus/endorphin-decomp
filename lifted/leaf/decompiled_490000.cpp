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
#include <cstdlib>

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

// [0x0049B340] sub_0049B340 (95 bytes)
namespace lift_0049B340 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern void ext_006A6C87(const void* dtor);
extern int mem_00ADD7E0;
extern int mem_00ADD7C4;
extern int mem_00A353F8;
extern int mem_009179E0;

// @name InitOnceGlobalString_0049B340
// @summary One-time guarded initializer for the global string at 0x00ADD7C4; registers its teardown via ext_006A6C87 and returns the global's address.
//
// The original wraps the init in an MSVC SEH frame (fs:[0]) so that the
// guard flag is cleared/handled if initialization throws. That frame is
// compiler/runtime plumbing and is not reproduced here.
void* fn_0049B340() {
    // Guard bit 0 of mem_00ADD7E0: run initialization only once.
    if ((mem_00ADD7E0 & 1) == 0) {
        mem_00ADD7E0 |= 1;
        ext_0066AD10(reinterpret_cast<void*>(&mem_00ADD7C4),
                     static_cast<uint8_t>(reinterpret_cast<uintptr_t>(&mem_00A353F8)));
        ext_006A6C87(reinterpret_cast<const void*>(&mem_009179E0));
    }
    return reinterpret_cast<void*>(&mem_00ADD7C4);
}
} // namespace lift_0049B340

// [0x00497890] sub_00497890 (98 bytes)
namespace lift_00497890 {
// Known callee 0x004276B0: StdStringCopyConstruct (copy-constructs a std::string at dst from src; returns dst)
extern void* ext_004276B0(void* dst, const void* src);
// IAT slot holding the address of MSVCP80 std::basic_string<char>::~basic_string (thiscall).
extern int mem_00924FF4;

// @name StdStringCopyConstructThenDestroySrc
// @summary Copy-constructs a std::string at dst from the by-value std::string argument src, destroys src, and returns dst.
void* fn_00497890(void* dst, void* src) {
    ext_004276B0(dst, src);

    using StringDtor = void (*)(void* self);
    auto dtor = reinterpret_cast<StringDtor>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(src);

    return dst;
}
} // namespace lift_00497890

// [0x00490920] sub_00490920 (59 bytes)
namespace lift_00490920 {
// @name sub_00490920
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_0048EF80(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_00490920(void* self) {
    uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    if (begin > end) {
        mem_00925134();
    }

    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    uint32_t out[2] = {0, 0};
    ext_0048EF80(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_00490920

// [0x00490B80] sub_00490B80 (59 bytes)
namespace lift_00490B80 {
// @name sub_00490B80
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_00490960(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_00490B80(void* self) {
    uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    if (begin > end) {
        mem_00925134();
    }

    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    uint32_t out[2] = {0, 0};
    ext_00490960(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_00490B80

// [0x004939B0] sub_004939B0 (111 bytes)
namespace lift_004939B0 {
extern void ext_006A6D5C(void* obj, uint32_t a, uint32_t b, uintptr_t cb);
extern uintptr_t mem_00924FF4;

// @name Unknown::initSubobjects_004939B0
// @class Unknown
// @summary Initializes two sub-objects at +0x50 and +0x30, then destroys the std::string at +0x14.
// @field Unknown +0x14 std::string field_0x14
// @field Unknown +0x30 uint8_t[16] field_0x30
// @field Unknown +0x50 uint8_t[12] field_0x50
void fn_004939B0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // First sub-object init at this+0x50 (args: 0xc, 2, handler 0x493970).
    ext_006A6D5C(base + 0x50, 0x0c, 0x02, 0x00493970u);

    // Second sub-object init at this+0x30 (args: 0x10, 2, handler 0x436F30).
    ext_006A6D5C(base + 0x30, 0x10, 0x02, 0x00436F30u);

    // Destroy the std::string member at this+0x14 via the imported destructor.
    using DtorFn = void (*)(void*);
    auto dtor = reinterpret_cast<DtorFn>(mem_00924FF4);
    dtor(base + 0x14);
}
} // namespace lift_004939B0

// [0x00490640] sub_00490640 (72 bytes)
namespace lift_00490640 {
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (Builds a std::string from the literal at 0x00928F30 and throws it inside an std::exception-derived object.)
extern void ext_00405FB0();
// Known callee 0x00519D50: AllocateElements8 (Allocates storage for `count` 8-byte elements; throws std::length_error if count*8 would overflow.)
// The disassembly pushes a second zero argument before `count`; it is passed through unchanged here.
extern void* ext_00519D50(uint32_t count, uint32_t zero_arg);

// @name Unknown::initElementRange8_00490640
// @class Unknown
// @summary Resets the three range pointers of an 8-byte element buffer and allocates `count` elements; returns false when count is 0.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
bool fn_00490640(void* self, uint32_t count) {
    lift_field<void*>(self, 4) = nullptr;
    lift_field<void*>(self, 8) = nullptr;
    lift_field<void*>(self, 12) = nullptr;

    if (count == 0) {
        return false;
    }
    if (count > 0x1FFFFFFFu) {
        ext_00405FB0();
    }

    void* storage = ext_00519D50(count, 0);
    lift_field<void*>(self, 4) = storage;
    lift_field<void*>(self, 8) = storage;
    lift_field<void*>(self, 12) = static_cast<uint8_t*>(storage) + static_cast<size_t>(count) * 8;
    return true;
}
} // namespace lift_00490640

// [0x0049ACB0] sub_0049ACB0 (112 bytes)
namespace lift_0049ACB0 {
// @name descriptiveName: allFourFloatsInUnitRange
// @summary Returns true if all four float components at p[0..3] lie in [0.0, 1.0]; NaN fails.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
bool fn_0049ACB0(const float* p) {
    // Ordered comparisons: NaN makes both >= and <= false, so NaN returns false.
    for (int i = 0; i < 4; ++i) {
        const float v = p[i];
        if (!(v >= 0.0f && v <= 1.0f)) {
            return false;
        }
    }
    return true;
}
} // namespace lift_0049ACB0

// [0x00490810] sub_00490810 (69 bytes)
namespace lift_00490810 {
// Known callee 0x0048FC00: moveRangeWithRelease_0048FC00 (Move-assigns an 8-byte-element range [first,last) into dest; releases each dest object via vtable+0x78 and derives dest value from src object via vtable+0x70. Returns dest end (or dest begin if range empty).)
extern uint32_t ext_0048FC00(uint32_t first, uint32_t last, uint32_t dest);

// @name moveRangeWithReleaseCount_00490810
// @summary Moves the 8-byte-element range [first,last) into dest via ext_0048FC00, then returns dest advanced by the range's element count.
uint32_t fn_00490810(uint32_t first, uint32_t last, uint32_t dest) {
    ext_0048FC00(first, last, dest);
    const int32_t count = static_cast<int32_t>(last - first) >> 3;
    return dest + static_cast<uint32_t>(count) * 8u;
}
} // namespace lift_00490810

// [0x00493F80]
namespace lift_00493F80 {
// @name sub_00493F80
// @summary If field_0x00 is non-null, constructs a std::string from 0x928b5d, calls vtable+0xa4 on field_0x00, and destroys the string.
// @field unknown +0x00 void* field_0x00


extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;

void __fastcall sub_00493F80(uint8_t* self) {
    void* obj = *reinterpret_cast<void**>(self);
    if (obj != nullptr) {
        uint8_t str_buf[28];
        using ctor_t = void(__thiscall*)(void*, const char*);
        using dtor_t = void(__thiscall*)(void*);
        using vfn_t = void(__thiscall*)(void*, void*);

        reinterpret_cast<ctor_t>(static_cast<uintptr_t>(mem_00924FE4))(
            str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5Du)));

        void** vtable = *reinterpret_cast<void***>(obj);
        vfn_t fn = reinterpret_cast<vfn_t>(vtable[0xA4 / 4]);
        fn(obj, str_buf);

        reinterpret_cast<dtor_t>(static_cast<uintptr_t>(mem_00924FF4))(str_buf);
    }
}
} // namespace lift_00493F80

// [0x0049E2F0]
namespace lift_0049E2F0 {
// @name findByName
// @summary Searches a vector of objects for one whose vtable+0x24 name matches the given std::string
// @field Unknown +0x04 uint32_t* begin
// @field Unknown +0x08 uint32_t* end


extern uintptr_t mem_00925134; // MSVCR80!_invalid_parameter_noinfo
extern uintptr_t mem_00924FC4; // MSVCP80!std::operator==(const std::string&, const std::string&)

uint32_t __thiscall sub_0049E2F0(void* self, uint32_t target_str) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto str_eq = reinterpret_cast<uint8_t(__cdecl*)(uint32_t, uint32_t)>(mem_00924FC4);

    uint32_t esi = *reinterpret_cast<uint32_t*>(obj + 0x04);
    if (esi > *reinterpret_cast<uint32_t*>(obj + 0x08)) {
        invalid_param();
    }

    while (true) {
        uint32_t end = *reinterpret_cast<uint32_t*>(obj + 0x08);
        if (*reinterpret_cast<uint32_t*>(obj + 0x04) > end) {
            invalid_param();
        }
        if (esi == end) {
            return 0;
        }
        if (esi >= *reinterpret_cast<uint32_t*>(obj + 0x08)) {
            invalid_param();
        }

        uint32_t item = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi));
        uint32_t vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(item));
        auto get_name = reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(
            *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable + 0x24)));
        uint32_t item_name = get_name(item);

        if (str_eq(item_name, target_str) != 0) {
            if (esi >= *reinterpret_cast<uint32_t*>(obj + 0x08)) {
                invalid_param();
            }
            return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi));
        }

        if (esi >= *reinterpret_cast<uint32_t*>(obj + 0x08)) {
            invalid_param();
        }
        esi += 4;
    }
}
} // namespace lift_0049E2F0

// [0x0049ED70]
namespace lift_0049ED70 {
struct ListFindResult {
    uint32_t head;
    uint32_t match;
};

extern uint32_t mem_00925134;
extern ListFindResult* __cdecl ext_0049DB60(ListFindResult* out, uint32_t list, uint32_t first, uint32_t list2, uint32_t last, uint32_t key);

// @name findNodeValueByKey
// @summary Searches the list at this+0xdc for a node matching key and returns a pointer to its value (node+8) or null.
// @field UnknownClass +0xdc uint32_t list_head
uint32_t __thiscall sub_0049ED70(uint32_t self, uint32_t key) {
    uint32_t list_ptr = self + 0xdc;
    uint32_t end_node = *reinterpret_cast<const uint32_t*>(list_ptr + 0x4);
    uint32_t first_node = *reinterpret_cast<const uint32_t*>(end_node);

    ListFindResult result{};
    ListFindResult* res_ptr = ext_0049DB60(&result, list_ptr, first_node, list_ptr, end_node, key);

    uint32_t res_head = res_ptr->head;
    uint32_t match = res_ptr->match;
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    if (list_ptr != res_head) {
        invalid_param();
    }

    uint32_t sentinel = *reinterpret_cast<const uint32_t*>(list_ptr + 0x4);
    if (list_ptr == 0) {
        invalid_param();
    }

    if (match == sentinel) {
        return 0;
    }

    if (list_ptr == 0) {
        invalid_param();
    }
    if (match == *reinterpret_cast<const uint32_t*>(list_ptr + 0x4)) {
        invalid_param();
    }

    return match + 0x8;
}
} // namespace lift_0049ED70

// [0x0049F0C0]
namespace lift_0049F0C0 {
extern void* ext_0049BEE0(void* out, uint32_t value, void* head, uint32_t unused, void* sentinel, uint32_t arg);
extern uint32_t mem_00925134;

// @name FindMatchingItemInList
// @summary Searches a sentinel-terminated linked list at this+0xC4 for the first node matching arg and returns its embedded object (node+8), or nullptr.
// @field Unknown +0xC4 uint32_t list_head_sentinel
// @field Unknown +0xC8 void* list_end
void* __thiscall fn_0049F0C0(void* self, uint32_t arg) {
    uint32_t out[2] = {};
    uint8_t* list_ptr = static_cast<uint8_t*>(self) + 0xC4;
    void* sentinel = *reinterpret_cast<void**>(list_ptr + 0x4);
    void* head = *reinterpret_cast<void**>(sentinel);

    void** res = static_cast<void**>(
        ext_0049BEE0(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(list_ptr)),
                     head, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(list_ptr)),
                     sentinel, arg));

    uint32_t ret_val = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(res[0]));
    void* node = res[1];

    using InvalidParamFn = void(__cdecl*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    if (static_cast<uint32_t>(reinterpret_cast<uintptr_t>(list_ptr)) != ret_val) {
        invalid_param();
    }

    void* end_node = *reinterpret_cast<void**>(list_ptr + 0x4);
    if (!list_ptr) {
        invalid_param();
    }

    if (node == end_node) {
        return nullptr;
    }

    if (!list_ptr) {
        invalid_param();
    }
    if (node == *reinterpret_cast<void**>(list_ptr + 0x4)) {
        invalid_param();
    }

    return static_cast<uint8_t*>(node) + 0x8;
}
} // namespace lift_0049F0C0

// [0x0049D190] sub_0049D190 (33 bytes)
namespace lift_0049D190 {
// Known callee 0x0049B340: InitOnceGlobalString_0049B340 (One-time guarded initializer for the global string at 0x00ADD7C4; registers its teardown via ext_006A6C87 and returns the global's address.)
// The original passes a single stack argument of 0 to this callee.
extern void* ext_0049B340(uint32_t flag);
// MSVCP80 IAT slot holding std::basic_string<char>::basic_string(const basic_string&).
extern void* mem_00924FE0;

// @name InitGlobalStringAndCopyConstruct
// @summary Ensures the global string is initialized, then copy-constructs the std::string at the first argument from it and returns that argument.
void* fn_0049D190(void* self) {
    using BasicStringCopyCtor = void(__thiscall*)(void* this_ptr, const void* other);
    const void* src = ext_0049B340(0);
    auto copy_ctor = reinterpret_cast<BasicStringCopyCtor>(mem_00924FE0);
    copy_ctor(self, src);
    return self;
}
} // namespace lift_0049D190

// [0x00495460] sub_00495460 (36 bytes)
namespace lift_00495460 {
// Known callee 0x00427A60: advanceIteratorUntilMatch (Advances a checked vector iterator until end or an element's vfunc(+0xC)(1) returns true)
extern void __thiscall ext_00427A60(void* self);

// @name Iterator::copyFromAndAdvance
// @class Iterator
// @summary Copies the three iterator words from src into self, advances it via advanceIteratorUntilMatch, and returns self.
// @field Iterator +0x00 uint32_t container_ptr
// @field Iterator +0x04 uint32_t proxy_ptr
// @field Iterator +0x08 uint32_t elem_ptr
void* __thiscall fn_00495460(void* self, const void* src) {
    auto* dst = reinterpret_cast<uint32_t*>(self);
    const auto* in = reinterpret_cast<const uint32_t*>(src);

    dst[0] = in[0];
    dst[1] = in[1];
    dst[2] = in[2];

    ext_00427A60(self);
    return self;
}
} // namespace lift_00495460

// [0x0049AD40] sub_0049AD40 (42 bytes)
namespace lift_0049AD40 {
extern int mem_00925134; // IAT slot for MSVCR80!_invalid_parameter_noinfo

// @name CompareSecondDword_0049AD40
// @class Unknown
// @summary Asserts self[0] is non-zero and equals other[0] (calls CRT _invalid_parameter_noinfo via IAT on failure), then returns 1 if self[+4] differs from other[+4], else 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
uint8_t fn_0049AD40(void* self, const void* other) {
    const uint32_t key = lift_field<uint32_t>(self, 0x00);
    if (!(key != 0 && key == lift_field<uint32_t>(other, 0x00))) {
        using InvalidParamFn = void(__cdecl*)();
        (*reinterpret_cast<InvalidParamFn*>(&mem_00925134))();
    }
    const uint32_t a = lift_field<uint32_t>(self, 0x04);
    const uint32_t b = lift_field<uint32_t>(other, 0x04);
    return static_cast<uint8_t>(a != b ? 1 : 0);
}
} // namespace lift_0049AD40

// [0x004925D0]
namespace lift_004925D0 {
// @name checkFieldMatchByMode
// @summary Checks if field_0x0 is 1 and field_0x8 matches field_0xc (mode 0) or field_0x10 (mode 1)
// @field +0x00 uint32_t field_0x0
// @field +0x08 uint32_t field_0x8
// @field +0x0C uint32_t field_0xc
// @field +0x10 uint32_t field_0x10


bool __thiscall sub_004925D0(void* self, uint32_t mode) {
    if (lift_field<uint32_t>(self, 0x00) != 1) {
        return false;
    }

    uint32_t val = lift_field<uint32_t>(self, 0x08);
    if (mode == 0) {
        return val == lift_field<uint32_t>(self, 0x0C);
    }
    if (mode == 1) {
        return val == lift_field<uint32_t>(self, 0x10);
    }
    return false;
}
} // namespace lift_004925D0

// [0x00493330]
namespace lift_00493330 {
extern void ext_006A5C5C(void*);

// @name Tree_erase
// @summary Recursively frees a red-black tree's nodes starting from the given node.
// @field TreeNode +0x00 void* left
// @field TreeNode +0x08 void* right
// @field TreeNode +0x21 uint8_t is_nil
void __thiscall fn_00493330(void* self, void* node) {
    uint8_t* cur = reinterpret_cast<uint8_t*>(node);
    while (*reinterpret_cast<uint8_t*>(cur + 0x21) == 0) {
        void* right = *reinterpret_cast<void**>(cur + 0x08);
        fn_00493330(self, right);
        uint8_t* left = *reinterpret_cast<uint8_t**>(cur + 0x00);
        ext_006A5C5C(cur);
        cur = left;
    }
}
} // namespace lift_00493330

// [0x00497030] sub_00497030 (82 bytes)
namespace lift_00497030 {
// Known callee 0x0049ED70: findNodeValueByKey (Searches the list at this+0xdc for a node matching key and returns a pointer to its value (node+8) or null.)
extern void* ext_0049ED70(void* self, const void* key);
// Known callee 0x004A2510: Unknown::setFlag4AndForwardToSlot1 (Sets byte +0x04 of the object at self+0x14, then tail-calls vtable slot 1 of the object at self+0x1C (passing it as this) and returns that result.)
extern uint32_t ext_004A2510(void* self);
// IAT slot 0x00924FDC: MSVCP80 basic_string::operator=(const basic_string&).
// Replaced below by a portable std::string assignment; slot kept for asm reference tracking.
extern void* mem_00924FDC;
// Address of that IAT slot, recorded as a constant (no runtime effect).
constexpr uintptr_t kOperatorAssignIatSlot = 0x00924FDCu;
// Global pointer (value stored at 0x00ADCB28): forwarder object, null when unset.
extern void* mem_00ADCB28;

// @name Unknown::setKeyAndLookup
// @class Unknown
// @summary Copies the key string into +0x30, looks up its value in the list at +0xB8 (via child +0xFC when set) into +0xBC, then forwards to the global object if present.
// @field Unknown +0x30 std::string key
// @field Unknown +0xB8 void* list
// @field Unknown +0xBC void* lookupResult
// @field Unknown +0xFC void* child
void fn_00497030(void* self, const void* key) {
    // key -> this+0x30 (std::string assignment)
    lift_field<std::string>(self, 0x30) = *static_cast<const std::string*>(key);

    void* list = lift_field<void*>(self, 0xB8);
    lift_field<void*>(self, 0xBC) = nullptr;
    if (list != nullptr) {
        void* searchTarget = lift_field<void*>(list, 0xFC);
        if (searchTarget == nullptr) {
            searchTarget = list;
        }
        lift_field<void*>(self, 0xBC) = ext_0049ED70(searchTarget, key);
    }

    void* forwarder = mem_00ADCB28;
    if (forwarder != nullptr) {
        ext_004A2510(forwarder);
    }
}
} // namespace lift_00497030

// [0x00494070]
namespace lift_00494070 {
// @name findAncestorWithFlags
// @summary Walks up an object hierarchy via vtable+0x10 and __RTDynamicCast until an object whose vtable+0x50 flags match the given mask is found.

extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

extern void* fn_00494070(uint32_t mask, void* obj) {
    while (obj != nullptr) {
        uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
        using GetFlagsFn = uint32_t(__thiscall*)(void*);
        auto get_flags = reinterpret_cast<GetFlagsFn>(vtable[0x50 / sizeof(uintptr_t)]);
        if ((get_flags(obj) & mask) == mask) {
            return obj;
        }

        using GetParentFn = void*(__thiscall*)(void*, int32_t);
        auto get_parent = reinterpret_cast<GetParentFn>(vtable[0x10 / sizeof(uintptr_t)]);
        void* parent = get_parent(obj, 0);
        obj = ext_006A6E9E(
            parent,
            0,
            reinterpret_cast<void*>(0x00A2E2F8),
            reinterpret_cast<void*>(0x00A2E2D8),
            0);
    }
    return nullptr;
}
} // namespace lift_00494070

// [0x0049DFA0]
namespace lift_0049DFA0 {
extern void (__cdecl *mem_00925134)();

// @name propagateArgRecursive
// @class unknown
// @summary Stores arg at this+0x130, then walks the circular list headed at this+0xDC and recursively calls itself on each node's embedded child (node+0x8) whose flag byte at node+0x6C is zero.
// @field unknown +0x130 uint32_t field_0x130
// @field unknown +0xE0 void* field_0xE0 (list head->next, used as iterator end sentinel)
void __thiscall fn_0049DFA0(void* self, uint32_t arg) {
    lift_field<uint32_t>(self, 0x130) = arg;

    uint8_t* head = reinterpret_cast<uint8_t*>(self) + 0xDC;
    uint8_t* end = lift_field<uint8_t*>(head, 4);
    uint8_t* node = lift_field<uint8_t*>(end, 0);

    while (node != end) {
        if (node == lift_field<uint8_t*>(head, 4)) {
            mem_00925134();
        }
        if (lift_field<uint8_t>(node, 0x6C) == 0) {
            if (node == lift_field<uint8_t*>(head, 4)) {
                mem_00925134();
            }
            fn_0049DFA0(node + 8, arg);
        }
        if (node == lift_field<uint8_t*>(head, 4)) {
            mem_00925134();
        }
        node = lift_field<uint8_t*>(node, 0);
    }
}
} // namespace lift_0049DFA0

// [0x0049B170] sub_0049B170 (112 bytes)
namespace lift_0049B170 {
// Import slots (IAT entries) for MSVCP80 std::basic_string<char> helpers.
extern uint32_t mem_00924FC0; // operator==(const basic_string&, const char*)
extern uint32_t mem_00924FF4; // basic_string<char>::~basic_string()

// Read-only string literals compared against the temporary.
extern char mem_0092F10C[];
extern char mem_0093A810[];

// @name StringEqualsEitherLiteral_0049B170
// @summary Builds a local std::string temporary, returns true if it equals either of two literals (short-circuit OR), then destroys the temporary.
uint8_t fn_0049B170() {
    using EqFn = uint8_t (*)(const void* str, const char* lit);
    using DtorFn = void (*)(void* str);

    auto eq = reinterpret_cast<EqFn>(static_cast<uintptr_t>(mem_00924FC0));
    auto dtor = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4));

    // Local std::string temporary; only its first dword is initialised here
    // (matches the original `mov [esp+0x18], ebx` with ebx == 0).
    alignas(8) unsigned char str[0x1C];
    lift_field<uint32_t>(str, 0x00) = 0;

    uint8_t result = 0;
    if (eq(str, mem_0092F10C) != 0) {
        result = 1;
    } else if (eq(str, mem_0093A810) != 0) {
        result = 1;
    }

    dtor(str);
    return result;
}
} // namespace lift_0049B170

// [0x0049F040] sub_0049F040 (117 bytes)
namespace lift_0049F040 {
// Known callee 0x0049DBA0: ListFindFirstAccepting_0049DBA0
// Walks an intrusive list from begin until end; writes (first, node) to out, where node is the first
// entry whose embedded object's virtual slot 10 accepts key, or end if none does.
extern void ext_0049DBA0(void* out, DWORD first, void* begin, DWORD unused, void* end, DWORD key);
extern int mem_00925134;
extern int mem_00924FDC;
extern int mem_00ADCB28;
extern void ext_0049ED70();
extern void ext_004A2510();

// @name Unknown::findListValueByKey
// @class Unknown
// @summary Searches the intrusive list at this+0xdc for key; returns node+8 (value pointer) or null.
// @field Unknown +0xe0 DWORD listEnd

// Original code calls *(void**)0x925134 (MSVCR80!_invalid_parameter_noinfo) on sentinel/consistency failures.
static void callInvalidParameterHandler() {
    using Handler = void (*)();
    reinterpret_cast<Handler>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925134)))();
}

static void* ptrFromDword(DWORD v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

void* fn_0049F040(void* self, DWORD key) {
    // Metadata-only references (not dereferenced or called by the disassembly). Address-of only, no runtime effect.
    (void)&mem_00924FDC;
    (void)&mem_00ADCB28;
    (void)&ext_0049ED70;
    (void)&ext_004A2510;

    auto* const list = static_cast<uint8_t*>(self) + 0xdc;        // esi
    const DWORD head = static_cast<DWORD>(reinterpret_cast<uintptr_t>(list));
    const DWORD end = lift_field<DWORD>(list, 4);                  // ecx / ebx = [esi+4]
    const DWORD begin = lift_field<DWORD>(ptrFromDword(end), 0);   // [[esi+4]]

    struct Found {
        DWORD first;
        DWORD node;
    } out{};
    ext_0049DBA0(&out, head, ptrFromDword(begin), head, ptrFromDword(end), key);

    const DWORD first = out.first;
    const DWORD node = out.node;

    if (head != first) {
        callInvalidParameterHandler();
    }
    if (head == 0) {
        callInvalidParameterHandler();
    }
    if (node == end) {
        return nullptr;
    }
    if (head == 0) {
        callInvalidParameterHandler();
    }
    if (node == lift_field<DWORD>(list, 4)) {
        callInvalidParameterHandler();
    }
    return ptrFromDword(node + 8);
}
} // namespace lift_0049F040

// [0x00495AB0]
namespace lift_00495AB0 {
// @name sub_00495AB0
// @summary Destructor that resets vtable, frees field_0x1c if non-null, tidies vector at +0x8, and calls base destructor.
// @field Self +0x00 void* vtable
// @field Self +0x08 void* vec_strings
// @field Self +0x1C void* field_0x1c
// @field Self +0x20 uint32_t field_0x20
// @field Self +0x24 uint32_t field_0x24


    extern uint8_t mem_0093F0FC[];
    void __thiscall ext_004026E0(void* this_ptr);
    void __fastcall ext_0065F440(void* self);
    void __cdecl ext_006A5C5C(void* ptr);

void __thiscall fn_00495AB0(void* self) {
    lift_field<void*>(self, 0x00) = mem_0093F0FC;

    void* ptr = lift_field<void*>(self, 0x1C);
    if (ptr != nullptr) {
        ext_006A5C5C(ptr);
    }

    lift_field<void*>(self, 0x1C) = nullptr;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint32_t>(self, 0x24) = 0;

    ext_004026E0(static_cast<uint8_t*>(self) + 0x08);
    ext_0065F440(self);
}
} // namespace lift_00495AB0

// [0x0049ECB0] sub_0049ECB0 (120 bytes)
namespace lift_0049ECB0 {
extern int mem_00924FF4;

// @name destroyEntryRange
// @summary Walks [begin,end) in 0x24-byte entries; calls vtable slot 30 on each non-null object at +0x20, then destroys the std::string at +0x00.
// @field Entry +0x00 std::string field_0x00
// @field Entry +0x1c uint8_t field_0x1c
// @field Entry +0x20 void* field_0x20
void fn_0049ECB0(void* begin, void* end) {
    // MSVCP80 ~basic_string import slot (thiscall; passed as a plain pointer here).
    using DtorFn = void (*)(void*);
    auto dtor = reinterpret_cast<DtorFn>(
        static_cast<std::uintptr_t>(static_cast<std::uint32_t>(mem_00924FF4)));

    std::uint8_t* const last = static_cast<std::uint8_t*>(end);
    for (std::uint8_t* p = static_cast<std::uint8_t*>(begin); p != last; p += 0x24) {
        void* obj = lift_field<void*>(p, 0x20);
        if (obj != nullptr) {
            void** vtbl = *static_cast<void***>(obj);
            using VFn = void (*)(void*, void*);
            // Slot 30 == byte offset 0x78 in the original 32-bit vtable.
            reinterpret_cast<VFn>(vtbl[30])(obj, p + 0x1c);
        }
        dtor(p);
    }
}
} // namespace lift_0049ECB0

// [0x00492BC0]
namespace lift_00492BC0 {
// @name TreeConstIterator::increment
// @class TreeConstIterator
// @summary Advances an MSVC8 red-black tree iterator to the next in-order node.
// @field TreeConstIterator +0x00 uint32_t container
// @field TreeConstIterator +0x04 void* node


extern void (*mem_00925134)();

void __thiscall sub_00492BC0(void* self) {
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        mem_00925134();
    }

    uint8_t* node = lift_field<uint8_t*>(self, 0x04);
    if (lift_field<uint8_t>(node, 0x21) != 0) {
        mem_00925134();
        return;
    }

    uint8_t* right = lift_field<uint8_t*>(node, 0x08);
    if (lift_field<uint8_t>(right, 0x21) == 0) {
        uint8_t* left = lift_field<uint8_t*>(right, 0x00);
        while (lift_field<uint8_t>(left, 0x21) == 0) {
            right = left;
            left = lift_field<uint8_t*>(right, 0x00);
        }
        lift_field<uint8_t*>(self, 0x04) = right;
        return;
    }

    uint8_t* parent = lift_field<uint8_t*>(node, 0x04);
    while (lift_field<uint8_t>(parent, 0x21) == 0 &&
           lift_field<uint8_t*>(self, 0x04) == lift_field<uint8_t*>(parent, 0x08)) {
        lift_field<uint8_t*>(self, 0x04) = parent;
        parent = lift_field<uint8_t*>(parent, 0x04);
    }
    lift_field<uint8_t*>(self, 0x04) = parent;
}
} // namespace lift_00492BC0

// [0x0049EFC0] sub_0049EFC0 (120 bytes)
namespace lift_0049EFC0 {
// Known callee 0x004970A0: UnknownClass::assignFromSubobjectVirtual_004970A0 (If field +0xBC is non-null, call virtual slot 1 on the sub-object at +0x8 and assign its result into the string at +0x30.)
extern void ext_004970A0(void* self);
// Import slot for MSVCR80!_invalid_parameter_noinfo. Its guarding checks are
// unreachable (the loop conditions already exclude them), so only the reference is kept.
extern int mem_00925134;

// Reads a 32-bit pointer-sized link stored at base+off as a byte pointer.
static inline uint8_t* lift_link(const void* base, ptrdiff_t off) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, off)));
}

// @name UnknownClass::assignAllEntriesFromLists
// @class UnknownClass
// @summary Walks the list at +0xD4 calling ext_004970A0 on each entry, then walks the list at +0xDC/+0xE0 and, for each node, walks its sub-list at node+0xD0 calling ext_004970A0 on each entry.
// @field UnknownClass +0xD4 uint32_t field_0xd4
// @field UnknownClass +0xDC uint32_t field_0xdc
// @field UnknownClass +0xE0 uint32_t field_0xe0
void fn_0049EFC0(void* self) {
    (void)&mem_00925134;

    // First list: sentinel pointer at +0xD4, entries are node+0x8.
    uint8_t* head1 = lift_link(self, 0xD4);
    for (uint8_t* node = lift_link(head1, 0x0); node != head1; node = lift_link(node, 0x0)) {
        ext_004970A0(node + 0x8);
    }

    // Second list: sentinel pointer stored at +0xE0 (the container at +0xDC).
    uint8_t* head2 = lift_link(self, 0xE0);
    for (uint8_t* outer = lift_link(head2, 0x0); outer != head2; outer = lift_link(outer, 0x0)) {
        // Each outer node carries a sub-list sentinel at +0xD0; entries are node+0x8.
        uint8_t* sub_head = lift_link(outer, 0xD0);
        for (uint8_t* node = lift_link(sub_head, 0x0); node != sub_head; node = lift_link(node, 0x0)) {
            ext_004970A0(node + 0x8);
        }
    }
}
} // namespace lift_0049EFC0

// [0x0049F490] sub_0049F490 (77 bytes)
namespace lift_0049F490 {
// Known callee 0x0049ED70: findNodeValueByKey (Searches the list at this+0xdc for a node matching key and returns a pointer to its value (node+8) or null.)
extern uintptr_t ext_0049ED70(void* self, const void* key);
// Known callee 0x0049EFC0: UnknownClass::assignAllEntriesFromLists (Walks the list at +0xD4 calling ext_004970A0 on each entry, then walks the list at +0xDC/+0xE0 and, for each node, walks its sub-list at node+0xD0 calling ext_004970A0 on each entry.)
extern void ext_0049EFC0(void* self);
extern int mem_00924FC4;
extern int mem_00924FDC;

// Import slots: the asm calls through these pointers (call dword ptr [slot]).
using StrEqFn = bool (*)(const void* lhs, const void* rhs);
using StrAssignFn = void* (*)(void* self, const void* rhs);

// @name UnknownClass::cacheKeyAndAssignEntries
// @class UnknownClass
// @summary Returns 1 if the cached key equals the argument; otherwise looks the key up in the owner at +0xFC, and if absent stores it as the cached key and runs assignAllEntriesFromLists on the owner.
// @field UnknownClass +0x1c std::basic_string<char> cachedKey
// @field UnknownClass +0xfc void* entryOwner
uintptr_t fn_0049F490(void* self, const void* key) {
    void* cachedKey = static_cast<uint8_t*>(self) + 0x1c;

    StrEqFn strEq = *reinterpret_cast<StrEqFn*>(&mem_00924FC4);
    if (strEq(key, cachedKey)) {
        return 1;
    }

    void* owner = lift_field<void*>(self, 0xfc);
    if (owner) {
        uintptr_t found = ext_0049ED70(owner, key);
        if (found) {
            return found;
        }
    }

    StrAssignFn strAssign = *reinterpret_cast<StrAssignFn*>(&mem_00924FDC);
    void* assigned = strAssign(cachedKey, key);

    owner = lift_field<void*>(self, 0xfc);
    if (owner) {
        // The asm leaves eax clobbered after this call; the return value
        // is only meaningful on the paths above.
        ext_0049EFC0(owner);
    }
    return reinterpret_cast<uintptr_t>(assigned);
}
} // namespace lift_0049F490

// [0x00490960] sub_00490960 (122 bytes)
namespace lift_00490960 {
// Known callee 0x0048A120: ForEachEntryDispatchVirtual_0048A120 (Walks 8-byte entries from begin up to (not including) end; for each entry whose +4 pointer is non-null, calls that object's virtual slot 0x78 (index 30) with the entry address as its single argument.)
extern void ext_0048A120(uint32_t begin, uint32_t end);
// Known callee 0x0048FC00: copy_ref_pairs (Copies a range of 8-byte ref-counted/managed pairs, releasing old targets and acquiring new ones via vtable calls.)
extern uint32_t ext_0048FC00(uint32_t first, uint32_t last, uint32_t dest);
extern int mem_00925134;

// @name moveRangeToDestAndDestroyTail_00490960
// @class unknown
// @summary If dest != last, moves [last, end) into dest via ext_0048FC00, dispatches the vacated tail via ext_0048A120, sets end to the new end, and writes {first, dest} to out; invalid first/check aborts.
// @field unknown +0x08 uint32_t field_0x08
void fn_00490960(void* self, void* out, uint32_t first, uint32_t dest, uint32_t check, uint32_t last) {
    if (first == 0 || first != check) {
        // MSVC _invalid_parameter_noinfo via IAT slot; treat as fatal.
        (void)&mem_00925134;
        std::abort();
    }

    if (dest != last) {
        const uint32_t endBefore = lift_field<uint32_t>(self, 0x08);
        ext_0048FC00(last, endBefore, dest);
        const uint32_t endAfter = lift_field<uint32_t>(self, 0x08);
        const uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(endBefore - last) >> 3);
        const uint32_t newEnd = dest + count * 8u;
        ext_0048A120(newEnd, endAfter);
        lift_field<uint32_t>(self, 0x08) = newEnd;
    }

    lift_field<uint32_t>(out, 0) = first;
    lift_field<uint32_t>(out, 4) = dest;
}
} // namespace lift_00490960

// [0x00497530] sub_00497530 (122 bytes)
namespace lift_00497530 {
// @name Unknown::computeRatioPair
// @class Unknown
// @summary Computes t = (a3-a1)/a4 and d = (a4-a2) - a3*t from four floats, storing t and d in this[0]/this[4]; this[8] is a 0/1/2 status code (2 when a3==a1, 1 when a4==a2, else 0). Returns this.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 DWORD field_0x08
extern void* __thiscall fn_00497530(void* self, float a1, float a2, float a3, float a4) {
    const float tmp = a3 - a1;
    lift_field<DWORD>(self, 0x8) = 0;
    if (tmp == 0.0f) {
        lift_field<float>(self, 0x0) = 0.0f;
        lift_field<float>(self, 0x4) = a3;
        lift_field<DWORD>(self, 0x8) = 2;
        return self;
    }
    const float u = a4 - a2;
    if (u == 0.0f) {
        lift_field<DWORD>(self, 0x8) = 1;
    }
    const float r = u / tmp;
    lift_field<float>(self, 0x0) = r;
    lift_field<float>(self, 0x4) = a4 - a3 * r;
    return self;
}
} // namespace lift_00497530

// [0x00497800] sub_00497800 (36 bytes)
namespace lift_00497800 {
// Known callee 0x0046C390: formatFloatTrimmedStringWrapper (Forwards a float to formatFloatTrimmedString using the caller's sret slot and returns that slot.)
std::string* ext_0046C390(std::string* out, float value);

// @name formatFloatTrimmedStringSlot
// @summary Formats a float into the caller-provided std::string slot and returns that slot.
std::string* fn_00497800(std::string* out, float value) {
    ext_0046C390(out, value);
    return out;
}
} // namespace lift_00497800

// [0x004948C0] sub_004948C0 (127 bytes)
namespace lift_004948C0 {
extern int32_t __thiscall ext_00494830(void* self);
extern uint32_t mem_00924FC4;
extern uint32_t mem_00925134;

// @name FindIndexByLeadingString
// @class Unknown
// @summary Gets an entry count from ext_00494830, then scans the 0x1C-byte element array at this+0x0C..this+0x10 comparing each element's leading std::string against the key via the MSVCP80 operator==; returns the first matching index or -1.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
int32_t __thiscall fn_004948C0(void* self, const void* key) {
    using StringEqFn = bool(__cdecl*)(const void*, const void*);
    using InvalidParamFn = void(__cdecl*)();
    constexpr uint32_t kElemSize = 0x1C;

    const int32_t count = ext_00494830(self);
    if (count <= 0) {
        return -1;
    }

    auto string_eq = reinterpret_cast<StringEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    auto invalid_parameter = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    for (int32_t i = 0; i < count; ++i) {
        const uint32_t begin = lift_field<uint32_t>(self, 0x0C);
        // Original calls the CRT invalid-parameter handler here, which terminates the process.
        if (begin == 0) {
            invalid_parameter();
            std::abort();
        }
        const uint32_t end = lift_field<uint32_t>(self, 0x10);
        const int32_t slots = static_cast<int32_t>(end - begin) / static_cast<int32_t>(kElemSize);
        if (static_cast<uint32_t>(i) >= static_cast<uint32_t>(slots)) {
            invalid_parameter();
            std::abort();
        }

        const uint32_t elem_addr = begin + static_cast<uint32_t>(i) * kElemSize;
        const auto* elem = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(elem_addr));
        if (string_eq(elem, key)) {
            return i;
        }
    }

    return -1;
}
} // namespace lift_004948C0

// [0x0049BF70] sub_0049BF70 (128 bytes)
namespace lift_0049BF70 {
extern uint32_t ext_006A6DE0(uint32_t arg);
extern int mem_00924FF0;
extern int mem_009251F0;
extern int mem_00993828;
extern int mem_00924FF4;

// @name parseRoundedFloatAndCall_0049BF70
// @summary Converts the string's c_str() with atof to float, rounds half away from zero (+/-0.5), then forwards the caller's esi as the sole argument to ext_006A6DE0 and returns its result.
// @field none (no direct struct offsets; the string temp is passed by value and only touched through its c_str and destructor)

uint32_t fn_0049BF70(const char* text, uint32_t esi_in) {
    // Metadata-only references: IAT slots for c_str / atof / dtor and the 0.5 rdata constant.
    // These are not runtime accesses; they keep the check aware of the original references.
    (void)&mem_00924FF0;
    (void)&mem_009251F0;
    (void)&mem_00993828;
    (void)&mem_00924FF4;
    (void)&ext_006A6DE0;

    const float parsed = static_cast<float>(std::atof(text));
    // The rounded value stays on the x87 stack in the original; it is computed here for fidelity.
    const double rounded = (parsed < 0.0f) ? (static_cast<double>(parsed) - 0.5)
                                           : (static_cast<double>(parsed) + 0.5);
    (void)rounded;

    return ext_006A6DE0(esi_in);
}
} // namespace lift_0049BF70

// [0x004906D0] sub_004906D0 (129 bytes)
namespace lift_004906D0 {
extern int mem_00925134;
extern int mem_009251EC;

// Guest 32-bit address -> host pointer (same convention as the other lifted leaves).
static inline void* guest_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name CopyRangeToBoundedTail
// @summary Copies the byte range [src_begin, src_end) to dst (bounds-checked against container), then writes {container, dst + size} into out and returns out.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
uint32_t fn_004906D0(uint32_t out, uint32_t src_begin, uint32_t src_end, uint32_t container, uint32_t dst) {
    // Signed element count: (src_end - src_begin) >> 2 (arithmetic shift, as in the original).
    const int32_t count = static_cast<int32_t>(src_end - src_begin) >> 2;
    const uint32_t size = static_cast<uint32_t>(count) * 4u;

    // Metadata-only: records the MSVCR80 import slots (_invalid_parameter_noinfo, memmove_s)
    // that the original asm referenced; not a real access.
    (void)&mem_00925134;
    (void)&mem_009251EC;

    // _invalid_parameter_noinfo paths: the original never returns from these.
    if (container == 0) {
        std::abort();
    }

    const uint32_t new_end = dst + size;
    const uint32_t c_begin = lift_field<uint32_t>(guest_ptr(container), 0x04);
    const uint32_t c_end = lift_field<uint32_t>(guest_ptr(container), 0x08);
    if (new_end > c_end || new_end < c_begin) {
        std::abort();
    }

    lift_field<uint32_t>(guest_ptr(out), 0x04) = new_end;
    lift_field<uint32_t>(guest_ptr(out), 0x00) = container;

    if (count > 0) {
        if (dst >= c_end) {
            std::abort();
        }
        // Original: memmove_s(dst, size, src, size); with equal sizes this is std::memmove.
        std::memmove(guest_ptr(dst), guest_ptr(src_begin), size);
    }

    return out;
}
} // namespace lift_004906D0

// [0x00490860]
namespace lift_00490860 {
// @name CopyRangeToBoundedTailWrapper
// @summary Forwards arguments with repeated output pointer to CopyRangeToBoundedTail and returns out.


extern void* ext_004906D0(void* out, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, void* a5, void* a6, void* a7);

extern void* __cdecl sub_00490860(void* out, uint32_t /*unused1*/, uint32_t a2, uint32_t /*unused3*/, uint32_t a4, uint32_t a5, uint32_t a6) {
    ext_004906D0(out, a2, a4, a5, a6, out, out, out);
    return out;
}
} // namespace lift_00490860

// [0x00492B30]
namespace lift_00492B30 {
extern void (*mem_00925134)();

// @name TreeIterator::decrement
// @class TreeIterator
// @summary Decrements a red-black tree iterator to the previous node, validating against nil/begin.
// @field TreeIterator +0x00 uint32_t container_ptr
// @field TreeIterator +0x04 uint32_t node_ptr
void __fastcall sub_00492B30(uint32_t* self) {
    auto invalid_param = mem_00925134;
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        invalid_param();
    }

    uint32_t node = lift_field<uint32_t>(self, 0x04);
    if (lift_field<uint8_t>(reinterpret_cast<void*>(node), 0x21) != 0) {
        uint32_t right = lift_field<uint32_t>(reinterpret_cast<void*>(node), 0x08);
        lift_field<uint32_t>(self, 0x04) = right;
        if (lift_field<uint8_t>(reinterpret_cast<void*>(right), 0x21) != 0) {
            invalid_param();
        }
        return;
    }

    uint32_t left = lift_field<uint32_t>(reinterpret_cast<void*>(node), 0x00);
    if (lift_field<uint8_t>(reinterpret_cast<void*>(left), 0x21) == 0) {
        uint32_t right = lift_field<uint32_t>(reinterpret_cast<void*>(left), 0x08);
        while (lift_field<uint8_t>(reinterpret_cast<void*>(right), 0x21) == 0) {
            left = right;
            right = lift_field<uint32_t>(reinterpret_cast<void*>(left), 0x08);
        }
        lift_field<uint32_t>(self, 0x04) = left;
        return;
    }

    uint32_t parent = lift_field<uint32_t>(reinterpret_cast<void*>(node), 0x04);
    while (lift_field<uint8_t>(reinterpret_cast<void*>(parent), 0x21) == 0 &&
           lift_field<uint32_t>(self, 0x04) == lift_field<uint32_t>(reinterpret_cast<void*>(parent), 0x00)) {
        lift_field<uint32_t>(self, 0x04) = parent;
        parent = lift_field<uint32_t>(reinterpret_cast<void*>(parent), 0x04);
    }

    if (lift_field<uint8_t>(reinterpret_cast<void*>(lift_field<uint32_t>(self, 0x04)), 0x21) != 0) {
        invalid_param();
        return;
    }

    lift_field<uint32_t>(self, 0x04) = parent;
}
} // namespace lift_00492B30

// [0x0049CE90]
namespace lift_0049CE90 {
// @name Unknown::addPairsAndOrder
// @class Unknown
// @summary Adds two 4-float records (self and other) into out[0..3] pairwise, then orders out[0]<=out[2] and out[1]<=out[3]; returns out.
// @field Unknown +0x00 float self_0
// @field Unknown +0x04 float self_1
// @field Unknown +0x08 float self_2
// @field Unknown +0x0c float self_3
// Other pointer (eax, stack arg2): other[0] (+0x00), other[1] (+0x04).
// Out pointer (ecx after load, stack arg1): out[0..3] (+0x00..+0x0c).

float* fn_0049CE90(float* self, float* out, float* other) {
    // Read all inputs before writing, so out may alias self.
    float t0 = self[1] + other[1];
    float t1 = self[2] + other[0];
    float t2 = self[3] + other[1];
    float o0 = other[0] + self[0];

    out[0] = o0;
    out[1] = t0;
    out[2] = t1;
    out[3] = t2;

    // jne skips when out[0] <= out[2] or unordered.
    if (out[0] > out[2]) {
        float tmp = out[0];
        out[0] = out[2];
        out[2] = tmp;
    }

    // jp skips when out[3] >= out[1] or unordered.
    if (out[3] < out[1]) {
        float tmp = out[1];
        out[1] = out[3];
        out[3] = tmp;
    }

    return out;
}
} // namespace lift_0049CE90

// [0x004974E0] sub_004974E0 (79 bytes)
namespace lift_004974E0 {
// Known callee 0x0046C0A0: parseFloatFromString (Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float result.)
extern void ext_0046C0A0(uint32_t unused, float* out_val);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t ext_0063EFE0(void* self, const char* name);
extern uint32_t mem_00A9FAE8;
extern uint32_t mem_00A9FAEC;

// @name refreshNamedFloatValues
// @summary Looks up two named items in the container (names at mem_00A9FAE8 and mem_00A9FAEC) and parses a float from each via ext_0046C0A0.
void fn_004974E0(void* self, void* container) {
    const char* name1 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FAE8));
    const char* name2 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FAEC));
    uint32_t self_arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    float out = 0.0f;

    (void)ext_0063EFE0(container, name1);
    ext_0046C0A0(self_arg, &out);

    (void)ext_0063EFE0(container, name2);
    ext_0046C0A0(self_arg, &out);
}
} // namespace lift_004974E0

// [0x004950B0] sub_004950B0 (135 bytes)
namespace lift_004950B0 {
// Known callee 0x0041CCC0: Vector28::at (Checked element access for a 28-byte element vector)
// Known callee 0x00494830: sub_00494830 (returns the element count of self's vector)
extern void* ext_0041CCC0(void* self, uint32_t index);
extern int32_t ext_00494830(void* self);
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FDC;

// @name Unknown::assignStringAt
// @class Unknown
// @summary Resets out_str to an empty string, then assigns the vector element at index into it when 0 <= index < count.
// @field Unknown +0x08 uint8_t field_0x08
void* __thiscall fn_004950B0(void* self, void* out_str, int32_t index) {
    using StringCstrCtor = void* (__thiscall*)(void*, const char*);
    using StringAssign = void* (__thiscall*)(void*, void*);

    reinterpret_cast<StringCstrCtor>(static_cast<uintptr_t>(mem_00924FE4))(out_str, "");
    if (index >= 0 && index < ext_00494830(self)) {
        void* elem = ext_0041CCC0(static_cast<uint8_t*>(self) + 0x8, static_cast<uint32_t>(index));
        reinterpret_cast<StringAssign>(static_cast<uintptr_t>(mem_00924FDC))(out_str, elem);
    }
    return out_str;
}
} // namespace lift_004950B0

// [0x0049B400] sub_0049B400 (146 bytes)
namespace lift_0049B400 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* ext_006657F0(void* self, uint32_t arg);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// __cdecl RTDynamicCast(inptr, VfDelta, SrcType, TargetType, isReference); all values are 32-bit in the x86 binary.
extern uint32_t ext_006A6E9E(uint32_t inptr, int32_t vfDelta, uint32_t srcType, uint32_t targetType, int32_t isReference);

// @name Unknown::InitDynCastFields
// @class Unknown
// @summary Initializes this object: calls InitVtblAndArg(0), sets the vtable, runs a dynamic_cast on arg2, stores the results and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24
void* fn_0049B400(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    // The MSVC SEH frame push/pop (fs:[0] handler install and restore) is boilerplate and is omitted.

    ext_006657F0(self, 0);
    lift_field<uint32_t>(self, 0x00) = 0x0093FCF8;
    lift_field<uint32_t>(self, 0x10) = a1;

    const uint32_t result = ext_006A6E9E(a2, 0, 0x00A2F4F4, 0x00A354C8, 0);

    lift_field<uint32_t>(self, 0x14) = result;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = a3;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint32_t>(self, 0x24) = a4;
    if (result == 0) {
        lift_field<uint32_t>(self, 0x08) = a2;
    }
    return self;
}
} // namespace lift_0049B400

// [0x004973B0]
namespace lift_004973B0 {
// @name parseVec4FromNode
// @summary Parses four float fields at +0x00, +0x04, +0x08, and +0x0C from named child items in a node.
// @field Self +0x00 float field_0x00
// @field Self +0x04 float field_0x04
// @field Self +0x08 float field_0x08
// @field Self +0x0C float field_0x0C


    extern const char* mem_00A9F75C;
    extern const char* mem_00A9FA2C;
    extern const char* mem_00A9F920;
    extern const char* mem_00A9F4BC;

    uint32_t __thiscall ext_0063EFE0(uint8_t* self, const char* name);
    void __cdecl ext_0046C0A0(float* out_val, uint32_t* item);

void __thiscall fn_004973B0(uint8_t* self, uint8_t* node) {
    const char* const keys[4] = {
        mem_00A9F75C,
        mem_00A9FA2C,
        mem_00A9F920,
        mem_00A9F4BC,
    };
    for (int i = 0; i < 4; ++i) {
        uint32_t item = ext_0063EFE0(node, keys[i]);
        ext_0046C0A0(reinterpret_cast<float*>(self + i * 4), &item);
    }
}
} // namespace lift_004973B0

// [0x00494310] sub_00494310 (153 bytes)
namespace lift_00494310 {
// Known callees / data (indirect through IAT slots or rdata):
//   ext_00664ED0 -> upperCopyStringRange (Gathers the bounds of a std::string (MSVC layout) and forwards them to upperCopyRangeToPair; returns the string pointer.)
//   mem_00924FE0 -> MSVCP80 std::basic_string<char>::basic_string(const basic_string&)
//   mem_00924FCC -> MSVCP80 std::operator+(const char*, const basic_string&)
//   mem_00924FB4 -> MSVCP80 std::basic_string<char>::find(const basic_string&, size_t)
//   mem_00924FF4 -> MSVCP80 std::basic_string<char>::~basic_string()
//   mem_0092AB70 -> rdata address of the one-character literal "."
extern void* ext_00664ED0(void* self);
extern int mem_00924FE0;
extern int mem_00924FCC;
extern int mem_00924FB4;
extern int mem_00924FF4;
extern int mem_0092AB70;

namespace {
// MSVC std::string is 0x18 bytes (x86); buffers are sized to hold it.
constexpr size_t kMsvcStringSize = 0x18;

using StrCopyCtorFn = void(__thiscall*)(void* self, const void* src);
using StrDtorFn = void(__thiscall*)(void* self);
using StrFindFn = size_t(__thiscall*)(void* self, const void* str, size_t pos);
using StrConcatFn = void*(__cdecl*)(void* out, const char* lhs, const void* rhs);
} // namespace

// @name findDottedSuffixInUpperCopy
// @summary Returns the index of the string "." + *a2 inside an upper-cased copy of *a1 (npos if absent).
uint32_t fn_00494310(const void* a1, const void* a2) {
    alignas(8) unsigned char copy[kMsvcStringSize];   // std::string copy of *a1
    alignas(8) unsigned char key[kMsvcStringSize];    // temporary "." + *a2

    const auto copyCtor = *reinterpret_cast<StrCopyCtorFn*>(&mem_00924FE0);
    const auto concat = *reinterpret_cast<StrConcatFn*>(&mem_00924FCC);
    const auto find = *reinterpret_cast<StrFindFn*>(&mem_00924FB4);
    const auto dtor = *reinterpret_cast<StrDtorFn*>(&mem_00924FF4);
    const char* const dot = reinterpret_cast<const char*>(&mem_0092AB70);

    copyCtor(copy, a1);
    ext_00664ED0(copy);
    concat(key, dot, a2);
    const uint32_t pos = static_cast<uint32_t>(find(copy, key, 0));
    dtor(key);
    dtor(copy);
    return pos;
}
} // namespace lift_00494310

// [0x0049D0F0] sub_0049D0F0 (154 bytes)
namespace lift_0049D0F0 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_00924FE0;
extern int mem_00924FE4;
extern int mem_009251C4;

// @name Counter::AddBounded
// @class Counter
// @summary Adds n to the counter at this+0x08 and returns the new value; throws if the sum would exceed 0x00D20D20.
// @field Counter +0x08 uint32_t field_0x08
uint32_t fn_0049D0F0(void* self, uint32_t n) {
    uint32_t& value = lift_field<uint32_t>(self, 0x08);

    // Headroom below the limit 0x00D20D20; original: esi = 0xD20D20 - value; if (esi < n) throw.
    const uint32_t headroom = 0x00D20D20u - value;
    if (headroom < n) {
        // Original builds a std::string / std::exception pair (MSVCP80/MSVCR80 ctors
        // via IAT slots) and throws. Those ctor slots are only referenced here.
        (void)&mem_00924FE0;
        (void)&mem_00924FE4;
        (void)&mem_009251C4;
        ext_006A6DD2();
        return value;
    }

    value += n;
    return value;
}
} // namespace lift_0049D0F0

// [0x0049D050] sub_0049D050 (154 bytes)
namespace lift_0049D050 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_00924FE0;
extern int mem_00924FE4;
extern int mem_009251C4;

// @name BoundedAddToField08
// @class Unknown
// @summary Adds n to the uint32 at +0x08 if the result stays within 0x1414141 (the remaining headroom check); otherwise builds an std::exception-style object and throws via CxxThrowException.
// @field Unknown +0x08 uint32_t field_0x08
extern void __thiscall fn_0049D050(void* self, uint32_t n) {
    const uint32_t limit = 0x01414141u;
    uint32_t current = lift_field<uint32_t>(self, 0x08);
    uint32_t headroom = limit - current;
    if (headroom < n) {
        // Throw path: original constructs std::string / std::exception temporaries
        // from the IAT slots below and calls _CxxThrowException.
        (void)&mem_00924FE0;
        (void)&mem_00924FE4;
        (void)&mem_009251C4;
        ext_006A6DD2();
        return;
    }
    lift_field<uint32_t>(self, 0x08) = current + n;
}
} // namespace lift_0049D050

// [0x00492480] sub_00492480 (157 bytes)
namespace lift_00492480 {
extern uint8_t __cdecl ext_0056B670(double a, double b, double c);

// @name CheckFourComponentsWithinTolerance
// @class <ClassName> (optional)
// @summary Calls ext_0056B670 for each of four float components of self against the four float args, using the double arg as the shared third parameter; returns 1 only if all four calls return nonzero.
// @field <ClassName> +0x00 float field_0x00
// @field <ClassName> +0x04 float field_0x04
// @field <ClassName> +0x08 float field_0x08
// @field <ClassName> +0x0C float field_0x0C
extern uint8_t __thiscall fn_00492480(void* self, float a0, float a1, float a2, float a3, double e) {
    if (!ext_0056B670(lift_field<float>(self, 0x00), a0, e)) return 0;
    if (!ext_0056B670(lift_field<float>(self, 0x04), a1, e)) return 0;
    if (!ext_0056B670(lift_field<float>(self, 0x08), a2, e)) return 0;
    if (!ext_0056B670(lift_field<float>(self, 0x0C), a3, e)) return 0;
    return 1;
}
} // namespace lift_00492480

// [0x0049CF60] sub_0049CF60 (117 bytes)
namespace lift_0049CF60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl allocator, called with size 0x28)
extern void* ext_006A5C62(size_t size);
// Known callee 0x0049B400: Unknown::InitDynCastFields (thiscall-style: self in ecx, four stack args)
extern void* ext_0049B400(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (returns global int32 value from mem_00B59420)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes; signature not recovered, modeled as thiscall with one stack arg)
extern uint32_t ext_00666670(void* self, uint32_t arg);

// @name NewAndInitDynCastObject
// @summary Allocates a 0x28-byte object; if allocation succeeds, initializes it via InitDynCastFields with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670.
// (No direct field accesses on self; self is only forwarded as an argument, so no @field lines.)
uint32_t fn_0049CF60(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* obj = ext_006A5C62(0x28);

    uint32_t result = 0;
    if (obj != nullptr) {
        void* init = ext_0049B400(obj,
                                  static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                                  a1, a2, a3);
        result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(init));
    }

    int32_t global = ext_00665870();
    void* ctx = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global)));
    return ext_00666670(ctx, result);
}
} // namespace lift_0049CF60

// [0x004916B0] sub_004916B0 (114 bytes)
namespace lift_004916B0 {
// Known callee 0x00490490: ensureGuardedStaticDword_00490490 (One-time guarded initializer for the static DWORD at mem_00ADAB74; returns its address.)
extern DWORD* ext_00490490();
// Unlifted callee 0x00475960, thiscall: ECX = self, three stack args.
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
// IAT slots for std::string ctor/dtor in the original. Replaced by native std::string;
// referenced only as metadata (not a real access).
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
void fn_004916B0(void* self, const char* arg0) {
    // Static-init DWORD address, held in a local whose address is passed on.
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    DWORD* init_slot = ext_00490490();
    uint32_t init_slot_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    std::string name(arg0);
    uint32_t str_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&name));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = lift_field<uint32_t>(self, 0x00);
    ext_00475960(self_ecx, str_addr, init_slot_addr, 1);
}
} // namespace lift_004916B0

// [0x00492150] sub_00492150 (140 bytes)
namespace lift_00492150 {
// Callee ABI as seen in the original asm:
//  ext_00662610: this in ecx, args (buf, s), caller cleans (add esp,8)
//  ext_00474F00: this in ecx, args (buf, s), callee cleans (ret 8), returns pointer in eax
//  ext_00476360: this in ecx, arg (buf), callee cleans (ret 4), returns u32 in eax
extern void ext_00662610(void* self, void* buf, const char* s);
extern void* ext_00474F00(void* self, void* buf, const char* s);
extern uint32_t ext_00476360(void* self, void* buf);
extern int mem_00924FD4; // IAT slot: string assign (this only, as in asm)
extern int mem_00924FF4; // IAT slot: string dtor (this only)

// @name LoadNamedString
// @class UnknownClass
// @summary Builds a temp string from literal 0x00A34588, optionally assigns arg-derived text into self+0x18, then stores the result of ext_00476360(self+0x08) into *out and returns out.
// @field UnknownClass +0x08 uint8_t field_0x08 (sub-object passed as this to ext_00476360)
// @field UnknownClass +0x18 uint8_t field_0x18 (sub-object passed as this to ext_00474F00)
void* fn_00492150(void* self, uint32_t* out, const char* arg) {
    // SEH frame setup/teardown from the original prologue/epilogue is omitted (not portable).
    unsigned char tmp[0x18];

    ext_00662610(self, tmp, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00A34588u)));

    if (arg != nullptr) {
        void* r = ext_00474F00(static_cast<unsigned char*>(self) + 0x18, tmp, arg);
        using AssignFn = void (*)(void*);
        auto assign = reinterpret_cast<AssignFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(r);
    }

    uint32_t v = ext_00476360(static_cast<unsigned char*>(self) + 0x08, tmp);
    *out = v;

    using DtorFn = void (*)(void*);
    auto dtor = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(tmp);

    return out;
}
} // namespace lift_00492150

// [0x0049EE60] sub_0049EE60 (126 bytes)
namespace lift_0049EE60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (0x28) and its result is null-checked: allocation-style.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x0049E930: sub_0049E930 (326 bytes)
// Thiscall: ecx = obj, then 5 stack args (outer this, a1..a4).
extern void* ext_0049E930(void* obj, void* outer, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes)
// Thiscall: ecx = int32 from ext_00665870, one stack arg (result of ext_0049E930 or null).
extern void ext_00666670(int32_t self, void* result);
// SEH scope table referenced by the prolog (push 0x008A7A5B).
extern int mem_008A7A5B;

// @name ConstructAndRegister_0049EE60
// @summary Allocates a 0x28-byte object, constructs it via sub_0049E930 when allocation succeeds, then calls sub_00665870/sub_00666670 and returns the second argument.
// Note: the SEH frame (fs:[0] push/restore and trylevel bookkeeping) is not reproduced; portable C++ has no equivalent.
uint32_t fn_0049EE60(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    (void)&mem_008A7A5B;  // SEH scope table address from prolog; frame itself omitted.

    void* obj = ext_006A5C62(0x28);
    void* result = nullptr;
    if (obj != nullptr) {
        result = ext_0049E930(obj, self, a1, a2, a3, a4);
    }

    int32_t g = ext_00665870();
    ext_00666670(g, result);
    return a2;
}
} // namespace lift_0049EE60

// [0x00493970] sub_00493970 (52 bytes)
namespace lift_00493970 {
// Stack-argument layout of the call at 0x00493986 (ecx = self is passed as the leading argument here).
extern void ext_004935F0(void* self, void* out, DWORD value, void* self2, void* ptr);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(DWORD arg);

// @name ResetPtrFieldsAfterDispatch
// @class Unknown
// @summary Passes self's +0x4 pointer and its dereferenced value to ext_004935F0, forwards the +0x4 value to ext_006A5C5C, then zeroes self+0x4 and self+0x8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 DWORD field_0x08
void fn_00493970(void* self) {
    DWORD local[2] = {0, 0};
    DWORD* fields = reinterpret_cast<DWORD*>(self);
    DWORD* ptr = reinterpret_cast<DWORD*>(fields[1]);
    DWORD value = *ptr;

    ext_004935F0(self, local, value, self, reinterpret_cast<void*>(ptr));

    ext_006A5C5C(fields[1]);

    fields[1] = 0;
    fields[2] = 0;
}
} // namespace lift_00493970

// [0x00496DF0] sub_00496DF0 (140 bytes)
namespace lift_00496DF0 {
// Thiscall targets: the implicit `this` is passed as the first parameter.
extern void ext_00662610(void* str, const char* lit);          // std::string ctor from literal (cdecl)
extern void* ext_00474F00(void* self, void* str, const char* s); // resolves/returns string slot at this+0x18
extern void* ext_00476360(void* self, void* str);                // result stored to *out

extern const char mem_00A349BC[];                                 // literal passed to ext_00662610
// Indirect calls through IAT-style slots: [0x924FD4] -> 0x00629266 (basic_string::operator=(const char*)),
// [0x924FF4] -> 0x00628FF0 (basic_string::~basic_string).
extern void* (*mem_00924FD4)(void* self, const char* s);
extern void (*mem_00924FF4)(void* self);

// @name ResolveNameIntoOutput_00496DF0
// @summary Builds a temporary string from a literal, optionally assigns arg s into a member string slot, then stores the subobject lookup result into *out and returns out.
// @field Unknown +0x08 uint8_t field_0x08 (subobject; passed by address to ext_00476360)
// @field Unknown +0x18 uint8_t field_0x18 (subobject; passed by address to ext_00474F00)
void** __thiscall fn_00496DF0(void* self, void** out, const char* s) {
    auto* base = static_cast<uint8_t*>(self);

    // 0x1C-byte std::string temporary (MSVC basic_string frame slot at esp+4).
    alignas(8) uint8_t local[0x1C];

    ext_00662610(local, mem_00A349BC);

    if (s != nullptr) {
        void* tgt = ext_00474F00(base + 0x18, local, s);
        mem_00924FD4(tgt, s);
    }

    *out = ext_00476360(base + 0x08, local);

    mem_00924FF4(local);
    return out;
}
} // namespace lift_00496DF0

// [0x00496150] sub_00496150 (194 bytes)
namespace lift_00496150 {
// Callees (thiscall: ecx = self, first stack arg = item/count).
extern void __thiscall ext_0041A920(void* ecx, void** item);
extern void __thiscall ext_0050ED40(void* ecx, int32_t count);
// Known callee 0x00596660: eraseInt32Range (erases [first,last) from a 4-byte-element buffer, writes 2-pointer result to out).
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, forwards to MSVCR80!__RTDynamicCast).
extern void* ext_006A6E9E(void* obj, int32_t vfDelta, const void* srcType, const void* dstType, int32_t isReference);

extern int mem_00925134;   // IAT slot of _invalid_parameter_noinfo
extern int mem_00A2E2BC;   // RTTI source type descriptor
extern int mem_00A30138;   // RTTI target type descriptor

static inline uint32_t addr32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

[[noreturn]] static void invalid_parameter_noinfo() {
    (void)&mem_00925134; // metadata reference to the CRT invalid-parameter trap
    std::abort();
}

// @name dynCastAndDispatchRange
// @class Unknown
// @summary Normalizes the range at self (+0x04..+0x08) via ext_00596660, sizes the pointer array in vec (+0x04..+0x08),
//          then for each element dynamic-casts the object to the target RTTI type and dispatches non-null results to ext_0041A920.
// @field Unknown +0x04 int32_t* field_0x04
// @field Unknown +0x08 int32_t* field_0x08
void fn_00496150(void* vec, void** out, void* self) {
    // Original: self->first (+0x04) must not exceed self->last (+0x08).
    if (addr32(lift_field<void*>(self, 0x04)) > addr32(lift_field<void*>(self, 0x08))) {
        invalid_parameter_noinfo();
    }

    // Original: sub_00596660(self, scratch, self, self[+4], self, self[+8]).
    void* scratch[2] = {nullptr, nullptr};
    ext_00596660(self, scratch, self,
                lift_field<int32_t*>(self, 0x04), self,
                lift_field<int32_t*>(self, 0x08));

    // Original: count = (vec[+8] - vec[+4]) >> 2 when vec[+4] != 0, else 0.
    int32_t count = 0;
    if (lift_field<uint32_t>(vec, 0x04) != 0) {
        uint32_t diff = lift_field<uint32_t>(vec, 0x08) - lift_field<uint32_t>(vec, 0x04);
        count = static_cast<int32_t>(diff) >> 2;
    }
    ext_0050ED40(self, count);

    // Original: cur = vec[+4]; cur must not exceed vec[+8].
    uint8_t* cur = lift_field<uint8_t*>(vec, 0x04);
    if (addr32(cur) > addr32(lift_field<uint8_t*>(vec, 0x08))) {
        invalid_parameter_noinfo();
    }

    // Original loop: for (cur = vec[+4]; cur != vec[+8]; cur += 4) { ... }
    for (;;) {
        uint8_t* end = lift_field<uint8_t*>(vec, 0x08);
        if (addr32(lift_field<uint8_t*>(vec, 0x04)) > addr32(end)) {
            invalid_parameter_noinfo();
        }
        if (addr32(cur) == addr32(end)) {
            break;
        }
        // cur < end is guaranteed here; the original re-checks it against the same end value.
        if (addr32(cur) >= addr32(end)) {
            invalid_parameter_noinfo();
        }

        // Original: obj = *cur; result = __RTDynamicCast(obj, 0, src, dst, 0).
        void* obj = lift_field<void*>(cur, 0);
        void* result = ext_006A6E9E(obj, 0,
                                    &mem_00A2E2BC,
                                    &mem_00A30138,
                                    0);

        // Original: [arg2] = result; if (result) sub_0041A920(self, &[arg2]).
        *out = result;
        if (result != nullptr) {
            ext_0041A920(self, out);
        }

        cur += 4; // 4-byte element stride (32-bit pointers)
    }
}
} // namespace lift_00496150

// [0x0049A930] sub_0049A930 (140 bytes)
namespace lift_0049A930 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue_0049A930
// @class Unknown
// @summary Clone of Unknown::lookupStringKeyedValue (0x00476430) using literal 0x00A34FEC: builds a std::string, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_0049A930(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00A34FECu)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_0049A930

// [0x00492F00]
namespace lift_00492F00 {
extern void ext_006A6DD2(void);
extern void __thiscall ext_00492BC0(void* self);
extern void* __cdecl ext_004928E0(void* arg);
extern void* __cdecl ext_004928C0(void* arg);
extern void __thiscall ext_00492A80(void* self, void* node);
extern void __thiscall ext_00492AD0(void* self, void* node);
extern void __cdecl ext_006A5C5C(void* node);

extern uint32_t mem_00924FE4;
extern uint32_t mem_009251C4;
extern uint32_t mem_00924FE0;

// @name RBTree::erase
// @class RBTree
// @summary Erases a node at the given iterator position from an MSVC8 red-black tree and rebalances the tree.
// @field RBTree +0x04 void* head
// @field RBTree +0x08 uint32_t size
// @field RBTreeNode +0x00 void* left
// @field RBTreeNode +0x04 void* parent
// @field RBTreeNode +0x08 void* right
// @field RBTreeNode +0x20 uint8_t color
// @field RBTreeNode +0x21 uint8_t is_nil
void* __thiscall sub_00492F00(void* self, void* out_iter, void* iter_container, void* iter_node) {
    uint8_t* node = static_cast<uint8_t*>(iter_node);
    if (lift_field<uint8_t>(node, 0x21) != 0) {
        (void)mem_00924FE4;
        (void)mem_009251C4;
        (void)mem_00924FE0;
        ext_006A6DD2();
    }

    uint8_t* erased_node = node;
    struct {
        void* container;
        void* node;
    } next_iter = { iter_container, iter_node };
    ext_00492BC0(&next_iter);

    uint8_t* fix_node = nullptr;
    uint8_t* fix_parent = nullptr;

    uint8_t* left = lift_field<uint8_t*>(erased_node, 0x00);
    if (lift_field<uint8_t>(left, 0x21) != 0) {
        fix_node = lift_field<uint8_t*>(erased_node, 0x08);
    } else {
        uint8_t* right = lift_field<uint8_t*>(erased_node, 0x08);
        if (lift_field<uint8_t>(right, 0x21) != 0) {
            fix_node = left;
        } else {
            uint8_t* succ = static_cast<uint8_t*>(next_iter.node);
            fix_node = lift_field<uint8_t*>(succ, 0x08);
            if (succ != erased_node) {
                lift_field<uint8_t*>(left, 0x04) = succ;
                lift_field<uint8_t*>(succ, 0x00) = left;
                if (succ == lift_field<uint8_t*>(erased_node, 0x08)) {
                    fix_parent = succ;
                } else {
                    fix_parent = lift_field<uint8_t*>(succ, 0x04);
                    if (lift_field<uint8_t>(fix_node, 0x21) == 0) {
                        lift_field<uint8_t*>(fix_node, 0x04) = fix_parent;
                    }
                    lift_field<uint8_t*>(fix_parent, 0x00) = fix_node;
                    uint8_t* erased_right = lift_field<uint8_t*>(erased_node, 0x08);
                    lift_field<uint8_t*>(succ, 0x08) = erased_right;
                    lift_field<uint8_t*>(erased_right, 0x04) = succ;
                }

                uint8_t* head = lift_field<uint8_t*>(self, 0x04);
                if (lift_field<uint8_t*>(head, 0x04) == erased_node) {
                    lift_field<uint8_t*>(head, 0x04) = succ;
                } else {
                    uint8_t* erased_parent = lift_field<uint8_t*>(erased_node, 0x04);
                    if (lift_field<uint8_t*>(erased_parent, 0x00) == erased_node) {
                        lift_field<uint8_t*>(erased_parent, 0x00) = succ;
                    } else {
                        lift_field<uint8_t*>(erased_parent, 0x08) = succ;
                    }
                }
                lift_field<uint8_t*>(succ, 0x04) = lift_field<uint8_t*>(erased_node, 0x04);
                uint8_t tmp_color = lift_field<uint8_t>(erased_node, 0x20);
                lift_field<uint8_t>(erased_node, 0x20) = lift_field<uint8_t>(succ, 0x20);
                lift_field<uint8_t>(succ, 0x20) = tmp_color;
                goto rebalance;
            }
        }
    }

    fix_parent = lift_field<uint8_t*>(erased_node, 0x04);
    if (lift_field<uint8_t>(fix_node, 0x21) == 0) {
        lift_field<uint8_t*>(fix_node, 0x04) = fix_parent;
    }
    {
        uint8_t* head = lift_field<uint8_t*>(self, 0x04);
        if (lift_field<uint8_t*>(head, 0x04) == erased_node) {
            lift_field<uint8_t*>(head, 0x04) = fix_node;
        } else if (lift_field<uint8_t*>(fix_parent, 0x00) == erased_node) {
            lift_field<uint8_t*>(fix_parent, 0x00) = fix_node;
        } else {
            lift_field<uint8_t*>(fix_parent, 0x08) = fix_node;
        }

        if (lift_field<uint8_t*>(head, 0x00) == erased_node) {
            void* new_min = (lift_field<uint8_t>(fix_node, 0x21) != 0) ? fix_parent : ext_004928E0(fix_node);
            lift_field<void*>(head, 0x00) = new_min;
        }
        if (lift_field<uint8_t*>(head, 0x08) == erased_node) {
            void* new_max = (lift_field<uint8_t>(fix_node, 0x21) != 0) ? fix_parent : ext_004928C0(fix_node);
            lift_field<void*>(head, 0x08) = new_max;
        }
    }

rebalance:
    if (lift_field<uint8_t>(erased_node, 0x20) == 1) {
        uint8_t* head = lift_field<uint8_t*>(self, 0x04);
        while (fix_node != lift_field<uint8_t*>(head, 0x04) && lift_field<uint8_t>(fix_node, 0x20) == 1) {
            if (fix_node == lift_field<uint8_t*>(fix_parent, 0x00)) {
                uint8_t* sibling = lift_field<uint8_t*>(fix_parent, 0x08);
                if (lift_field<uint8_t>(sibling, 0x20) == 0) {
                    lift_field<uint8_t>(sibling, 0x20) = 1;
                    lift_field<uint8_t>(fix_parent, 0x20) = 0;
                    ext_00492A80(self, fix_parent);
                    sibling = lift_field<uint8_t*>(fix_parent, 0x08);
                }
                if (lift_field<uint8_t>(sibling, 0x21) != 0) {
                    fix_node = fix_parent;
                    fix_parent = lift_field<uint8_t*>(fix_parent, 0x04);
                    head = lift_field<uint8_t*>(self, 0x04);
                    continue;
                }
                uint8_t* sib_left = lift_field<uint8_t*>(sibling, 0x00);
                uint8_t* sib_right = lift_field<uint8_t*>(sibling, 0x08);
                if (lift_field<uint8_t>(sib_left, 0x20) == 1 && lift_field<uint8_t>(sib_right, 0x20) == 1) {
                    lift_field<uint8_t>(sibling, 0x20) = 0;
                    fix_node = fix_parent;
                    fix_parent = lift_field<uint8_t*>(fix_parent, 0x04);
                    head = lift_field<uint8_t*>(self, 0x04);
                } else {
                    if (lift_field<uint8_t>(sib_right, 0x20) == 1) {
                        lift_field<uint8_t>(sib_left, 0x20) = 1;
                        lift_field<uint8_t>(sibling, 0x20) = 0;
                        ext_00492AD0(self, sibling);
                        sibling = lift_field<uint8_t*>(fix_parent, 0x08);
                    }
                    lift_field<uint8_t>(sibling, 0x20) = lift_field<uint8_t>(fix_parent, 0x20);
                    lift_field<uint8_t>(fix_parent, 0x20) = 1;
                    lift_field<uint8_t>(lift_field<uint8_t*>(sibling, 0x08), 0x20) = 1;
                    ext_00492A80(self, fix_parent);
                    break;
                }
            } else {
                uint8_t* sibling = lift_field<uint8_t*>(fix_parent, 0x00);
                if (lift_field<uint8_t>(sibling, 0x20) == 0) {
                    lift_field<uint8_t>(sibling, 0x20) = 1;
                    lift_field<uint8_t>(fix_parent, 0x20) = 0;
                    ext_00492AD0(self, fix_parent);
                    sibling = lift_field<uint8_t*>(fix_parent, 0x00);
                }
                if (lift_field<uint8_t>(sibling, 0x21) != 0) {
                    fix_node = fix_parent;
                    fix_parent = lift_field<uint8_t*>(fix_parent, 0x04);
                    head = lift_field<uint8_t*>(self, 0x04);
                    continue;
                }
                uint8_t* sib_right = lift_field<uint8_t*>(sibling, 0x08);
                uint8_t* sib_left = lift_field<uint8_t*>(sibling, 0x00);
                if (lift_field<uint8_t>(sib_right, 0x20) == 1 && lift_field<uint8_t>(sib_left, 0x20) == 1) {
                    lift_field<uint8_t>(sibling, 0x20) = 0;
                    fix_node = fix_parent;
                    fix_parent = lift_field<uint8_t*>(fix_parent, 0x04);
                    head = lift_field<uint8_t*>(self, 0x04);
                } else {
                    if (lift_field<uint8_t>(sib_left, 0x20) == 1) {
                        lift_field<uint8_t>(sib_right, 0x20) = 1;
                        lift_field<uint8_t>(sibling, 0x20) = 0;
                        ext_00492A80(self, sibling);
                        sibling = lift_field<uint8_t*>(fix_parent, 0x00);
                    }
                    lift_field<uint8_t>(sibling, 0x20) = lift_field<uint8_t>(fix_parent, 0x20);
                    lift_field<uint8_t>(fix_parent, 0x20) = 1;
                    lift_field<uint8_t>(lift_field<uint8_t*>(sibling, 0x00), 0x20) = 1;
                    ext_00492AD0(self, fix_parent);
                    break;
                }
            }
        }
        lift_field<uint8_t>(fix_node, 0x20) = 1;
    }

    ext_006A5C5C(erased_node);
    uint32_t size = lift_field<uint32_t>(self, 0x08);
    if (size > 0) {
        lift_field<uint32_t>(self, 0x08) = size - 1;
    }

    lift_field<void*>(out_iter, 0x00) = next_iter.container;
    lift_field<void*>(out_iter, 0x04) = next_iter.node;
    return out_iter;
}
} // namespace lift_00492F00

// [0x0049E8D0]
namespace lift_0049E8D0 {
void __thiscall ext_00499BA0(void* ecx);
void __cdecl ext_006A5C5C(void* ptr);

// @name StdListClear
// @summary Clears a doubly-linked list by unlinking its sentinel head, destroying each element, and freeing each node.
// @field StdList +0x04 void* head
// @field StdList +0x08 uint32_t size
void __thiscall fn_0049E8D0(void* ecx) {
    uint8_t* self = static_cast<uint8_t*>(ecx);
    void** head = lift_field<void**>(self, 0x4);
    void* node = head[0];
    head[0] = head;
    head = lift_field<void**>(self, 0x4);
    head[1] = head;
    lift_field<uint32_t>(self, 0x8) = 0;

    if (node == lift_field<void*>(self, 0x4)) {
        return;
    }

    do {
        void* next = *static_cast<void**>(node);
        ext_00499BA0(static_cast<uint8_t*>(node) + 0x8);
        ext_006A5C5C(node);
        node = next;
    } while (node != lift_field<void*>(self, 0x4));
}
} // namespace lift_0049E8D0

// [0x0049E930]
namespace lift_0049E930 {
extern void* ext_006657F0(void* self, uint32_t arg);
extern void* ext_006A6E9E(void* ptr, int32_t vf_delta, void* src_type, void* dst_type, int32_t is_reference);
extern void (*mem_00925134)(void);

// @name Unknown::InitWithCastAndIndex
// @class Unknown
// @summary Initializes vtable 0x009404C0, casts arg1 via __RTDynamicCast, and computes an index into arg0's vector.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24
void* __thiscall fn_0049E930(void* self, void* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    ext_006657F0(self, 0);

    lift_field<uint32_t>(self, 0x00) = 0x009404C0u;
    lift_field<void*>(self, 0x10) = arg0;

    void* cast_res = ext_006A6E9E(arg1, 0, reinterpret_cast<void*>(0x00A2F4F4u), reinterpret_cast<void*>(0x00A354C8u), 0);
    lift_field<void*>(self, 0x14) = cast_res;
    lift_field<uint32_t>(self, 0x18) = arg2;
    lift_field<uint32_t>(self, 0x1C) = arg2;
    lift_field<uint32_t>(self, 0x24) = arg4;

    if (cast_res == nullptr) {
        lift_field<void*>(self, 0x08) = arg1;
    }

    void* vec = lift_field<void*>(self, 0x10);
    uint32_t* vec_begin = lift_field<uint32_t*>(vec, 0x04);

    if (arg3 != 0) {
        if (vec_begin > lift_field<uint32_t*>(vec, 0x08)) {
            mem_00925134();
        }
        vec = lift_field<void*>(self, 0x10);
        uint32_t* vec_end = lift_field<uint32_t*>(vec, 0x08);
        if (lift_field<uint32_t*>(vec, 0x04) > vec_end) {
            mem_00925134();
        }
        void* vec2 = lift_field<void*>(self, 0x10);
        uint32_t* it = lift_field<uint32_t*>(vec2, 0x04);
        if (it > lift_field<uint32_t*>(vec2, 0x08)) {
            mem_00925134();
        }
        while (it != vec_end) {
            if (*it == arg3) {
                break;
            }
            ++it;
        }
        if (vec2 == nullptr || vec2 != arg0) {
            mem_00925134();
        }
        int32_t diff = static_cast<int32_t>(reinterpret_cast<uintptr_t>(it) - reinterpret_cast<uintptr_t>(arg1));
        lift_field<int32_t>(self, 0x20) = (diff >> 2) + 1;
    } else {
        uint32_t count = 0;
        if (vec_begin != nullptr) {
            uint32_t* vec_end = lift_field<uint32_t*>(vec, 0x08);
            count = static_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<uintptr_t>(vec_end) - reinterpret_cast<uintptr_t>(vec_begin)) >> 2);
        }
        lift_field<uint32_t>(self, 0x20) = count;
    }

    void* vec_final = lift_field<void*>(self, 0x10);
    uint32_t* final_begin = lift_field<uint32_t*>(vec_final, 0x04);
    uint32_t final_count = 0;
    if (final_begin != nullptr) {
        uint32_t* final_end = lift_field<uint32_t*>(vec_final, 0x08);
        final_count = static_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<uintptr_t>(final_end) - reinterpret_cast<uintptr_t>(final_begin)) >> 2);
    }
    if (lift_field<uint32_t>(self, 0x20) > final_count) {
        lift_field<uint32_t>(self, 0x20) = final_count;
    }

    return self;
}
} // namespace lift_0049E930

// [0x004935F0] sub_004935F0 (203 bytes)
namespace lift_004935F0 {
// Known callee 0x00492BC0: TreeConstIterator::increment (Advances an MSVC8 red-black tree iterator to the next in-order node.)
extern void ext_00492BC0(void* self);
// Known callee 0x00492F00: RBTree::erase (Erases a node at the given iterator position from an MSVC8 red-black tree and rebalances the tree.)
extern void* ext_00492F00(void* self, void* out_iter, void* iter_container, void* iter_node);
// Known callee 0x00493330: Tree_erase (Recursively frees a red-black tree's nodes starting from the given node.)
extern void ext_00493330(void* self, void* node);
// MSVCR80!_invalid_parameter_noinfo IAT slot: guarded CRT assertions (boilerplate, dropped).
extern int mem_00925134;

// @name Tree::eraseRange
// @class Tree
// @summary MSVC8 _Tree::erase(first, last): clears the whole tree when [first,last) spans it, otherwise advances and erases each node in the range; returns last-position iterator.
// @field RBTree +0x04 void* head
// @field RBTree +0x08 uint32_t size
// @field RBTreeNode +0x00 void* left
// @field RBTreeNode +0x04 void* parent
// @field RBTreeNode +0x08 void* right
void* fn_004935F0(void* self, void* out, void* first_tree, void* first_node,
                  void* last_tree, void* last_node) {
    (void)&mem_00925134;  // CRT invalid-parameter guards elided (never taken on valid trees)
    void* head = lift_field<void*>(self, 0x04);
    void* begin = lift_field<void*>(head, 0x00);

    if (first_node == begin && last_node == head) {
        // clear(): free all nodes, then reset the header to the empty state.
        void* root = lift_field<void*>(head, 0x04);
        ext_00493330(self, root);
        lift_field<void*>(head, 0x04) = head;   // parent = head
        lift_field<uint32_t>(self, 0x08) = 0;   // size = 0
        lift_field<void*>(head, 0x00) = head;   // left = head
        lift_field<void*>(head, 0x08) = head;   // right = head
        lift_field<void*>(out, 0x00) = self;
        lift_field<void*>(out, 0x04) = lift_field<void*>(head, 0x00);
        return out;
    }

    // Range erase: iterator slots live in the argument area, so they are advanced in place.
    void* iter[2] = {first_tree, first_node};
    while (iter[1] != last_node) {
        void* old_tree = iter[0];
        void* old_node = iter[1];
        ext_00492BC0(iter);                              // ++first
        void* discard[2];
        ext_00492F00(self, discard, old_tree, old_node); // erase(old)
    }

    lift_field<void*>(out, 0x00) = iter[0];
    lift_field<void*>(out, 0x04) = iter[1];
    return out;
}
} // namespace lift_004935F0

// [0x0049A7D0] sub_0049A7D0 (165 bytes)
namespace lift_0049A7D0 {
// Known callee 0x00475960: Vector::InsertUniqueOrThrow_00475960 (thiscall, 3 stack args: a1 string, a2 slot, a3 flag)
extern void ext_00475960(void* self, void* a1, void** a2, int a3);
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self)
extern void ext_0067A670(void* self);
extern uint32_t mem_00ADD180; // init-guard flags (bit 0 = initialized/started)
extern uint32_t mem_00ADD17C; // static object storage (first dword = vptr)
extern uint32_t mem_00924FE4; // .rdata: std::string(const char*) import thunk address
extern uint32_t mem_00924FF4; // .rdata: std::string dtor import thunk address

// @name Unknown::insertStaticNameOrThrow_0049A7D0
// @class Unknown
// @summary Lazily constructs the static object at mem_00ADD17C, builds a temporary std::string from the argument, inserts it into this->[0] via ext_00475960 (throw on duplicate), and destroys the temporary.
// @field Unknown +0x00 void* field_0x00
void fn_0049A7D0(void* self, const char* text) {
    // One-time construction of the static object guarded by bit 0 of mem_00ADD180.
    if ((mem_00ADD180 & 1u) == 0) {
        mem_00ADD180 |= 1u;
        ext_0067A670(&mem_00ADD17C);
        mem_00ADD17C = 0x93f434;
    }

    // Temporary string object (MSVC std::string layout, 0x18 bytes) built from text.
    alignas(8) unsigned char str[0x18];
    void* slot = &mem_00ADD17C;
    using CtorFn = void (*)(void* self, const char* text);
    using DtorFn = void (*)(void* self);
    reinterpret_cast<CtorFn>(static_cast<uintptr_t>(mem_00924FE4))(str, text);

    void* inner = lift_field<void*>(self, 0);
    ext_00475960(inner, str, &slot, 1);

    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(str);
}
} // namespace lift_0049A7D0
