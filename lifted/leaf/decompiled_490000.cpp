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
