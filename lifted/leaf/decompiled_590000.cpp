// Lifted C++ translation unit: lifted/leaf/decompiled_590000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00675650(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00594790(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00675650(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_0059E060 {
// Callee 0x006AD940 (sub_006AD940): thiscall, takes the object in ECX, returns a pointer-sized value in EAX.
extern uint32_t __thiscall ext_006AD940(void* self);
// Known callee 0x00492550: IsStateOneWithNonZeroField8 (Returns 1 if the dword at self+0x00 equals 1 and the dword at self+0x08 is nonzero, else 0.)
extern int __thiscall ext_00492550(void* self);

// @name IsResolvedChildStateOneWithNonZeroField8
// @summary Returns 0 if the dword at +0x5F8 is null; otherwise resolves the object at +0x26C of that pointer via ext_006AD940 and tail-returns IsStateOneWithNonZeroField8 on the result.
// @field Self +0x5F8 uint32_t field_0x5F8
// @field ChildObject +0x26C uint32_t field_0x26C
int __thiscall fn_0059E060(void* self) {
    const uint32_t child = lift_field<uint32_t>(self, 0x5F8);
    if (child == 0) {
        return 0;
    }

    void* child_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    const uint32_t arg = lift_field<uint32_t>(child_obj, 0x26C);
    const uint32_t resolved = ext_006AD940(reinterpret_cast<void*>(static_cast<uintptr_t>(arg)));

    return ext_00492550(reinterpret_cast<void*>(static_cast<uintptr_t>(resolved)));
}
} // namespace lift_0059E060

// [0x00599C10] sub_00599C10 (41 bytes)
namespace lift_00599C10 {
// @name sub_00599C10
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_004148F0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00599C10(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_004148F0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00599C10

// [0x00596A30] sub_00596A30 (51 bytes)
namespace lift_00596A30 {
// Callback type: the original calls through a register-passed (ECX) single-argument
// function pointer; the result is ignored. Modelled here as a plain one-argument callable.
using OffsetCallback = void (*)(uint32_t value);

// @name CallForEachOffsetPlusBase
// @summary For each DWORD in [begin, end), calls cb(*entry + base); then writes (cb, base) to out[0], out[1].
void fn_00596A30(uint32_t* out,
                 uint32_t /*stack slot +0x08, unused*/,
                 const uint32_t* begin,
                 uint32_t /*stack slot +0x10, unused*/,
                 const uint32_t* end,
                 OffsetCallback cb,
                 uint32_t base) {
    for (const uint32_t* p = begin; p != end; ++p) {
        cb(*p + base);
    }
    out[0] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(cb));
    out[1] = base;
}
} // namespace lift_00596A30

// [0x00595C50] sub_00595C50 (55 bytes)
namespace lift_00595C50 {
// @name sub_00595C50
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_00595C50() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x34);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x30) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x31) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_00595C50

// [0x0059DC60]
namespace lift_0059DC60 {
extern uint32_t __fastcall ext_00661A90(void* self, uint32_t arg);

// @name SetResultFromSubobjectCall
// @summary Calls ext_00661A90 with the stack argument as self and (this+0x158) as its argument (0 when this is null), then stores the result at this+0x61C.
// @field Self +0x158 BYTE field_0x158 (address taken only, passed to ext_00661A90; not dereferenced here)
// @field Self +0x61C uint32_t result (written with the return value of ext_00661A90)
extern void __fastcall fn_0059DC60(void* self, uint32_t arg0) {
    // Null-this path: callee receives 0 as its second argument and the store
    // goes to absolute address 0x61C, exactly as the original code does.
    uint32_t subobjectAddr = 0;
    if (self != nullptr) {
        subobjectAddr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)) + 0x158u;
    }

    void* first = reinterpret_cast<void*>(static_cast<uintptr_t>(arg0));
    uint32_t r = ext_00661A90(first, subobjectAddr);

    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x61Cu) = r;
}
} // namespace lift_0059DC60

// [0x00596330]
namespace lift_00596330 {
// @name getGlobalListHeadPrevCount
// @summary Validates a checked iterator in global object +0x8 and returns node+0x8 decremented by 1 if non-zero.

extern uint32_t mem_00B40640;
extern uint32_t mem_00925134;

uint32_t sub_00596330() {
    uint8_t* iter = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(mem_00B40640)) + 8;
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    uint32_t container_addr = *reinterpret_cast<uint32_t*>(iter);
    if (container_addr == 0) {
        invalid_param();
        container_addr = *reinterpret_cast<uint32_t*>(iter);
    }

    uint32_t node_addr = *reinterpret_cast<uint32_t*>(iter + 4);
    uint32_t head_addr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(container_addr) + 4);
    if (node_addr == head_addr) {
        invalid_param();
        node_addr = *reinterpret_cast<uint32_t*>(iter + 4);
    }

    uint32_t val = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(node_addr) + 8);
    if (val == 0) {
        return 0;
    }
    return val - 1;
}
} // namespace lift_00596330

// [0x00596370]
namespace lift_00596370 {
// @name getGlobalListFrontMinusOne
// @summary Validates a global list iterator at [0xB40644]+8 and returns its node value minus one (or 0 if zero)


extern uint32_t mem_00B40644;
extern uint32_t mem_00925134;

uint32_t sub_00596370() {
    auto esi = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00B40644) + 8);
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    if (esi[0] == 0) {
        invalid_param();
    }

    const auto* proxy = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(esi[0]));
    if (esi[1] == proxy[1]) {
        invalid_param();
    }

    const auto* current_node = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(esi[1]));
    uint32_t val = current_node[2];
    if (val != 0) {
        return val - 1;
    }
    return 0;
}
} // namespace lift_00596370

// [0x0059FE40] sub_0059FE40 (59 bytes)
namespace lift_0059FE40 {
extern void ext_0059F310(void* base, int32_t index, int32_t count, uint32_t value);

// @name makeHeapU32Range
// @summary Heapify a uint32 range [first, last): for each index from count/2 down to 1, call ext_0059F310 (sift-down) with that element as the value.
// @field none (function accesses only the argument array; no struct offsets)
void fn_0059FE40(uint32_t* first, const uint32_t* last) {
    // Element count, rounded toward zero when halving (matches cdq/sub/sar sequence).
    int32_t count = static_cast<int32_t>(last - first);
    int32_t half = (count < 0 ? count + 1 : count) >> 1;

    while (half > 0) {
        uint32_t value = first[half - 1];
        --half;
        ext_0059F310(first, half, count, value);
    }
}
} // namespace lift_0059FE40

// [0x005991D0]
namespace lift_005991D0 {
// @name Unknown::EraseAtAndWritePair
// @class Unknown
// @summary Erases the 8-byte slot at pos by shifting later slots down, decrements end by 8, and writes (a2, pos) to out.
// @field Unknown +0x08 DWORD end
void* fn_005991D0(void* self, void* out, DWORD a2, DWORD pos) {
    DWORD end = lift_field<DWORD>(self, 0x8);
    DWORD src = pos + 8;
    if (src != end) {
        auto* dst = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(pos));
        const auto* from = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(src));
        std::memmove(dst, from, static_cast<size_t>(end - src));
    }
    lift_field<DWORD>(self, 0x8) -= 8;
    lift_field<DWORD>(out, 0x0) = a2;
    lift_field<DWORD>(out, 0x4) = pos;
    return out;
}
} // namespace lift_005991D0

// [0x0059D660] sub_0059D660 (63 bytes)
namespace lift_0059D660 {
// @name Unknown::ForwardUnlessIgnoredId
// @class Unknown
// @summary Returns the id unchanged if it is one of five ignored ids; otherwise tail-forwards it to vtable entry +0x54 of the object at self+0x160.
// @field Unknown +0x160 void* subobject
uint32_t fn_0059D660(void* self, uint32_t id) {
    constexpr uint32_t kIgnoredIds[] = {
        0x00B53A34, 0x00B53B30, 0x00B53AB0, 0x00B53A70, 0x00B53AF0,
    };
    for (uint32_t ignored : kIgnoredIds) {
        if (id == ignored) {
            return id;
        }
    }

    using ForwardFn = uint32_t (*)(void* thisPtr, uint32_t value);

    auto* base = static_cast<uint8_t*>(self);
    void* object = base + 0x160;
    // The object's first dword is its vtable pointer; +0x54 is the byte offset of the slot.
    auto* vtable = *reinterpret_cast<uint8_t**>(object);
    auto target = *reinterpret_cast<ForwardFn*>(vtable + 0x54);
    return target(object, id);
}
} // namespace lift_0059D660

// [0x0059B120] sub_0059B120 (73 bytes)
namespace lift_0059B120 {
// @name sub_0059B120
// @summary Auto-lifted identical-shape clone of 0x004A73F0 (Unknown::FindNodeByStringKey).
namespace lift_004A73F0 {
extern int mem_00924EF4;

// @name Unknown::FindNodeByStringKey
// @class Unknown
// @summary Walks a binary search tree (head sentinel at holder->field_0x04) comparing each node's string key at +0x0C against the argument; returns the last left-branch node visited (or the holder when the tree is empty).
// @field Unknown +0x04 uint32_t field_0x04
// @field UnknownHolder +0x04 uint32_t field_0x04
// @field UnknownNode +0x00 uint32_t field_0x00
// @field UnknownNode +0x08 uint32_t field_0x08
// @field UnknownNode +0x0C uint8_t field_0x0C
// @field UnknownNode +0xAD uint8_t field_0xAD

namespace {

// Pointer-sized address in the 32-bit image space.
inline uint8_t* at(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

// std::string equality routine, resolved through the import slot at 0x00924EF4.
using StringEqFn = bool (*)(const void* lhs, const void* rhs);

inline bool isSentinel(uint32_t node) {
    return lift_field<uint8_t>(at(node), 0xB9) != 0;
}

}  // namespace

void* fn_0059B120(void* self, const void* key) {
    uint32_t holder = lift_field<uint32_t>(self, 0x04);
    uint32_t node = lift_field<uint32_t>(at(holder), 0x04);

    if (isSentinel(node)) {
        return at(holder);
    }

    auto eq = reinterpret_cast<StringEqFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));

    do {
        if (eq(at(node) + 0x0C, key)) {
            node = lift_field<uint32_t>(at(node), 0x08);
        } else {
            holder = node;
            node = lift_field<uint32_t>(at(node), 0x00);
        }
    } while (!isSentinel(node));

    return at(holder);
}
} // namespace lift_004A73F0
} // namespace lift_0059B120

// [0x0059FF10]
namespace lift_0059FF10 {
// Import slot (IAT) holding MSVCR80!_invalid_parameter_noinfo.
extern void (*mem_00925134)(void);

// @name Unknown::GetElementAddress_0059FF10
// @class Unknown
// @summary Validates this->+0x08 / this->+0x0C linkage, then returns begin + 4*index for the 4-byte-element vector at (this->+0x0C)+0x2C, calling the invalid-parameter handler on bad state or out-of-range index.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
uint8_t* __thiscall Unknown_GetElementAddress_0059FF10(void* self, uint32_t index) {
    // this->+0x08 must be non-null.
    void* a = lift_field<void*>(self, 0x08);
    if (a == nullptr) {
        mem_00925134();
    }

    // this->+0x0C must differ from a->+0x04.
    void* b = lift_field<void*>(self, 0x0C);
    if (b == lift_field<void*>(a, 0x04)) {
        mem_00925134();
    }

    // Vector header lives at b+0x2C: begin at +0x04 (b+0x30), end at +0x08 (b+0x34).
    uint8_t* header = static_cast<uint8_t*>(b) + 0x2C;
    uint8_t* begin = lift_field<uint8_t*>(header, 0x04);

    if (begin != nullptr) {
        uint8_t* end = lift_field<uint8_t*>(header, 0x08);
        int32_t diff = static_cast<int32_t>(reinterpret_cast<uintptr_t>(end) -
                                            reinterpret_cast<uintptr_t>(begin));
        uint32_t count = static_cast<uint32_t>(diff >> 2);
        if (index >= count) {
            mem_00925134();
        }
    }

    return begin + 4 * static_cast<uintptr_t>(index);
}
} // namespace lift_0059FF10

// [0x00593D40] sub_00593D40 (78 bytes)
namespace lift_00593D40 {
// @name Unknown::SelectByKeyWithRecursion_00593D40
// @summary Switch on the dword at *p: 1 returns a3, 2 returns a2, 3 recurses with the key forced to 2 (yielding a2), anything else returns a4. Stdcall, callee pops 0x10.
// @field none (no struct field offsets accessed)
extern uint32_t fn_00593D40(uint32_t* p, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t key = *p;
    switch (key) {
    case 1:
        return a3;
    case 2:
        return a2;
    case 3: {
        // Original code pushes a pointer to the key slot, stores 2 into it,
        // and re-enters with the same remaining arguments.
        uint32_t forced_key = 2;
        return fn_00593D40(&forced_key, a2, a3, a4);
    }
    default:
        return a4;
    }
}
} // namespace lift_00593D40

// [0x00593EB0]
namespace lift_00593EB0 {
// @name Unknown::assignGlobalFromLocal_00593EB0
// @summary Assigns the global Unknown at 0x00AECC04 from a local temporary, then invokes the temporary's field_0x04 vtable slot 0x78 (passing the temporary) when that pointer is non-null.
// @field Unknown +0x04 void* field_0x04

extern void* __thiscall ext_0041CF50(void* self, void* other);
extern uint8_t mem_00AECC04[];

extern void fn_00593EB0(void) {
    // Structured-exception frame setup/teardown from the original prologue/epilogue is omitted;
    // it only tracks exception state and has no effect on the data flow below.
    alignas(8) uint8_t tmp[8] = {};

    void* self = mem_00AECC04;
    ext_0041CF50(self, tmp);

    void* p = lift_field<void*>(tmp, 0x04);
    if (p != nullptr) {
        void* vtbl = lift_field<void*>(p, 0x00);
        void* slot = lift_field<void*>(vtbl, 0x78);
        auto fn = reinterpret_cast<void (*)(void*, void*)>(slot);
        fn(p, tmp);
    }
}
} // namespace lift_00593EB0

// [0x005940E0] sub_005940E0 (89 bytes)
namespace lift_005940E0 {
// Import thunk pointer: MSVCP80 std::basic_string<char>::~basic_string (0x00628FF0).
extern uint32_t mem_00924FF4;

// @name Unknown::destructorBody_005940E0
// @class Unknown
// @summary Releases an optional child object at +0x20 through its vtable slot 0x78 (passing &field_0x1c), then destroys the std::string at offset 0.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C void* field_0x1c
// @field Unknown +0x20 void* child
void __thiscall fn_005940E0(uint8_t* self) {
    // Optional virtual notification on the child object at +0x20.
    uint8_t* child = *reinterpret_cast<uint8_t**>(self + 0x20);
    if (child != nullptr) {
        uint8_t* arg = self + 0x1c;
        uint8_t* vtbl = *reinterpret_cast<uint8_t**>(child);
        uintptr_t slot = *reinterpret_cast<uintptr_t*>(vtbl + 0x78);
        using VirtualFn = void(__thiscall*)(void* obj, void* arg);
        reinterpret_cast<VirtualFn>(slot)(child, arg);
    }

    // Destroy the std::string stored at offset 0 of this object.
    using StringDtorFn = void(__thiscall*)(void* obj);
    reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(self);
}
} // namespace lift_005940E0

// [0x0059DDA0]
namespace lift_0059DDA0 {
extern uint8_t __fastcall ext_00410390(uint32_t self);
extern uint32_t mem_00924FC4;
extern uint32_t mem_00924FDC;

// @name sub_0059DDA0
// @summary Validates state via virtual predicate +0x28 and sub_00410390, resetting string at +0x458 to 0x00B41B9C when needed
// @field Self +0x00 uint32_t vtable
// @field Self +0x458 std::string field_0x458
void __fastcall sub_0059DDA0(uint32_t self) {
    auto vtable = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(self)), 0);
    auto vfn_28 = reinterpret_cast<uint8_t(__fastcall*)(uint32_t)>(
        static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x28)));

    bool assign_default = false;
    if (vfn_28(self) == 0 && ext_00410390(self) == 0) {
        assign_default = true;
    } else if (vfn_28(self) == 0) {
        auto str_eq = reinterpret_cast<uint8_t(__cdecl*)(uint32_t, uint32_t)>(mem_00924FC4);
        if (str_eq(self + 0x458, 0x00B41B80) != 0) {
            assign_default = true;
        }
    }

    if (assign_default) {
        auto str_assign = reinterpret_cast<uint32_t(__fastcall*)(uint32_t, uint32_t, uint32_t)>(mem_00924FDC);
        str_assign(self + 0x458, 0, 0x00B41B9C);
    }
}
} // namespace lift_0059DDA0

// [0x005957F0] sub_005957F0 (87 bytes)
namespace lift_005957F0 {
// @name sub_005957F0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413D0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413CC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005957F0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0BEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413D0 & 1u) == 0) {
        mem_00B413D0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413CC, frame[0]);
        mem_00B413CC = 0x95D04Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413CC;
}
} // namespace lift_004CAE30
} // namespace lift_005957F0

// [0x00595850] sub_00595850 (87 bytes)
namespace lift_00595850 {
// @name sub_00595850
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413D8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413D4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595850() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413D8 & 1u) == 0) {
        mem_00B413D8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413D4, frame[0]);
        mem_00B413D4 = 0x95D124u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413D4;
}
} // namespace lift_004CAE30
} // namespace lift_00595850

// [0x005958B0] sub_005958B0 (87 bytes)
namespace lift_005958B0 {
// @name sub_005958B0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413E0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413DC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005958B0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413E0 & 1u) == 0) {
        mem_00B413E0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413DC, frame[0]);
        mem_00B413DC = 0x95D1FCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413DC;
}
} // namespace lift_004CAE30
} // namespace lift_005958B0

// [0x00595910] sub_00595910 (87 bytes)
namespace lift_00595910 {
// @name sub_00595910
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413E8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413E4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595910() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413E8 & 1u) == 0) {
        mem_00B413E8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413E4, frame[0]);
        mem_00B413E4 = 0x95D2D4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413E4;
}
} // namespace lift_004CAE30
} // namespace lift_00595910

// [0x00595970] sub_00595970 (87 bytes)
namespace lift_00595970 {
// @name sub_00595970
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413F0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413EC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595970() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413F0 & 1u) == 0) {
        mem_00B413F0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413EC, frame[0]);
        mem_00B413EC = 0x95D3ACu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413EC;
}
} // namespace lift_004CAE30
} // namespace lift_00595970

// [0x005959D0] sub_005959D0 (87 bytes)
namespace lift_005959D0 {
// @name sub_005959D0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B413F8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413F4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005959D0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0C8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B413F8 & 1u) == 0) {
        mem_00B413F8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413F4, frame[0]);
        mem_00B413F4 = 0x95D484u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413F4;
}
} // namespace lift_004CAE30
} // namespace lift_005959D0

// [0x00595A30] sub_00595A30 (87 bytes)
namespace lift_00595A30 {
// @name sub_00595A30
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41400;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B413FC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595A30() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0CAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41400 & 1u) == 0) {
        mem_00B41400 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B413FC, frame[0]);
        mem_00B413FC = 0x95D634u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B413FC;
}
} // namespace lift_004CAE30
} // namespace lift_00595A30

// [0x00595A90] sub_00595A90 (87 bytes)
namespace lift_00595A90 {
// @name sub_00595A90
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41408;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41404;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00595A90() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A0CCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41408 & 1u) == 0) {
        mem_00B41408 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41404, frame[0]);
        mem_00B41404 = 0x95D7E4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41404;
}
} // namespace lift_004CAE30
} // namespace lift_00595A90

// [0x0059E9C0] sub_0059E9C0 (87 bytes)
namespace lift_0059E9C0 {
// @name sub_0059E9C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41480;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4147C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059E9C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15BEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41480 & 1u) == 0) {
        mem_00B41480 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4147C, frame[0]);
        mem_00B4147C = 0x95DE0Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4147C;
}
} // namespace lift_004CAE30
} // namespace lift_0059E9C0

// [0x0059EA20] sub_0059EA20 (87 bytes)
namespace lift_0059EA20 {
// @name sub_0059EA20
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41488;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41484;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EA20() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41488 & 1u) == 0) {
        mem_00B41488 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41484, frame[0]);
        mem_00B41484 = 0x95DEE4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41484;
}
} // namespace lift_004CAE30
} // namespace lift_0059EA20

// [0x0059EA80] sub_0059EA80 (87 bytes)
namespace lift_0059EA80 {
// @name sub_0059EA80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41490;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B4148C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EA80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A15FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41490 & 1u) == 0) {
        mem_00B41490 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B4148C, frame[0]);
        mem_00B4148C = 0x95DFBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B4148C;
}
} // namespace lift_004CAE30
} // namespace lift_0059EA80

// [0x0059EAE0] sub_0059EAE0 (87 bytes)
namespace lift_0059EAE0 {
// @name sub_0059EAE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B41498;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B41494;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0059EAE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A161Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B41498 & 1u) == 0) {
        mem_00B41498 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B41494, frame[0]);
        mem_00B41494 = 0x95E094u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B41494;
}
} // namespace lift_004CAE30
} // namespace lift_0059EAE0

// [0x005947B0] sub_005947B0 (95 bytes)
namespace lift_005947B0 {
namespace lift_005947B0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString)).
// Takes (out_str, flag); the second pushed argument is a raw 32-bit constant (0x00A2F0CC).
extern void* ext_0066AD10(void* out_str, uint32_t arg);
// Known callee 0x006A6C87: sub_006A6C87 (one stack argument, the constant 0x0091D670; return value unused).
extern void ext_006A6C87(uint32_t arg);
extern int mem_00B41358;
extern int mem_00B4133C;

// @name GetOnceInitString_005947B0
// @summary Returns the global string at 0x00B4133C, initializing it once on first call (sets bit 0 of 0x00B41358, calls ext_0066AD10, then registers teardown via ext_006A6C87).
void* fn_005947B0() {
    if ((mem_00B41358 & 1) == 0) {
        mem_00B41358 |= 1;
        ext_0066AD10(&mem_00B4133C, 0x00A2F0CCu);
        ext_006A6C87(0x0091D670u);
    }
    return &mem_00B4133C;
}
} // namespace lift_005947B0
} // namespace lift_005947B0

// [0x00597630] sub_00597630 (99 bytes)
namespace lift_00597630 {
extern int mem_00925134;

namespace {

using InvalidParamFn = void (*)();

inline uint32_t slot_value(int slot) {
    return static_cast<uint32_t>(slot);
}

inline uint32_t read_u32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

// Debug-iterator compatibility failure: MSVCR80 _invalid_parameter_noinfo (noreturn in the CRT).
[[noreturn]] inline void raise_invalid_parameter() {
    reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(slot_value(mem_00925134)))();
    std::abort();
}

}  // namespace

// @name Unknown::findValueByKey
// @class Unknown
// @summary Scans 8-byte {value, key} pairs in the range [this+0x2D0, this+0x2D4) and returns the value of the first pair whose key equals the argument, or 0 if none matches.
// @field Unknown +0x2D0 DWORD field_0x2D0
// @field Unknown +0x2D4 DWORD field_0x2D4
uint32_t fn_00597630(void* self, uint32_t key) {
    uint32_t cur = lift_field<uint32_t>(self, 0x2CC + 0x4);
    const uint32_t last = lift_field<uint32_t>(self, 0x2CC + 0x8);

    // Iterator validity check: the range begin must not be past its end.
    if (cur > last) raise_invalid_parameter();

    while (cur != last) {
        // Each step must still lie inside the range.
        if (!(cur < last)) raise_invalid_parameter();

        if (read_u32(cur + 4) == key) {
            return read_u32(cur);
        }

        cur += 8;
    }
    return 0;
}
} // namespace lift_00597630

// [0x0059DD00] sub_0059DD00 (104 bytes)
namespace lift_0059DD00 {
// @name Unknown::DispatchOrDynamicCastByKey
// @class Unknown
// @summary Compares arg2 (std::string) to a global C string; on match dispatches arg1 via sub_0059DCD0, otherwise dispatches arg1 and dynamic_casts the sub_00586140 result to a fixed RTTI type.
// (no direct field accesses on this; self is only forwarded to callees)

extern void* __thiscall ext_0059DCD0(void* self, void* arg);
extern void* __thiscall ext_00586140(void* self, const void* arg);
extern void* ext_006A6E9E(void* pVoid, int32_t vdelta, const void* srcType, const void* dstType, int32_t isReference);

// Global C string pointer (0x00A34650) and MSVCP80 std::operator==(const std::string&, const char*) (0x00924FC0).
extern uint32_t mem_00A34650;
extern uint32_t mem_00924FC0;

typedef uint8_t (__cdecl *StdStringEqCStrFn)(const void* str, uint32_t cstr);

extern void* __thiscall fn_0059DD00(void* self, void* arg1, const void* arg2) {
    auto str_eq = reinterpret_cast<StdStringEqCStrFn>(static_cast<uintptr_t>(mem_00924FC0));
    if (str_eq(arg2, mem_00A34650)) {
        return ext_0059DCD0(self, arg1);
    }

    void* r = ext_0059DCD0(self, arg1);
    if (r == nullptr) {
        return nullptr;
    }

    void* t = ext_00586140(r, arg2);
    // RTTI type_info addresses (source 0x00A2E2BC, target 0x00A30158).
    const void* src_type = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A2E2BCu));
    const void* dst_type = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A30158u));
    return ext_006A6E9E(t, 0, src_type, dst_type, 0);
}
} // namespace lift_0059DD00

// [0x00596AE0] sub_00596AE0 (61 bytes)
namespace lift_00596AE0 {
// @name sub_00596AE0
// @summary Auto-lifted identical-shape clone of 0x0046A4D0 (advanceIteratorCounted).
namespace lift_0046A4D0 {
// Known callee 0x00474FF0: sub_00474FF0 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00595AF0(void* self);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void (*mem_00925134)();

// @name advanceIteratorCounted
// @summary Advances an iterator with TreeIterator::increment until it equals `last`, incrementing `*counter` once per step; asserts the iterator is non-null and equal to `guard` before each step.
void fn_00596AE0(void* it, void* last, void* guard, void* end, int32_t* counter) {
    for (;;) {
        if (it == nullptr || it != guard) {
            mem_00925134();
        }
        if (last == end) {
            return;
        }
        ++*counter;
        ext_00595AF0(&it);
    }
}
} // namespace lift_0046A4D0
} // namespace lift_00596AE0

// [0x00598930] sub_00598930 (53 bytes)
namespace lift_00598930 {
// Known callee 0x00596B20: invalid_parameter_noinfo (no arguments in lifted form; clone of the MSVCR80 invalid-parameter path).
extern void ext_00596B20(void);

// @name forwardInvalidParameterNoinfo_00598930
// @summary Pushes eight stack copies of its caller's arguments (unused by the callee), calls invalid_parameter_noinfo, and cdecl-cleans the 0x24 bytes.
void __cdecl fn_00598930(void) {
    ext_00596B20();
}
} // namespace lift_00598930

// [0x0059B170]
namespace lift_0059B170 {
// @name StdMapString::find
// @class StdMapString
// @summary Finds a node by string key in a std::map-like tree, returning an iterator (or end() if not found).
// @field StdMapString +0x04 uint32_t head


extern uint32_t ext_0059B120(uint32_t self, uint32_t key);
extern void (*mem_00925134)();
extern uint8_t (*mem_00924EF4)(uint32_t lhs, uint32_t rhs);

uint32_t sub_0059B170(uint32_t self, uint32_t out_iter, uint32_t key) {
    uint32_t node = ext_0059B120(self, key);
    if (self == 0) {
        mem_00925134();
    }
    uint32_t head = *reinterpret_cast<uint32_t*>(self + 0x04);
    uint32_t result_node = head;
    if (node != head) {
        uint8_t less = mem_00924EF4(key, node + 0x0C);
        if (less == 0) {
            result_node = node;
        }
    }
    *reinterpret_cast<uint32_t*>(out_iter) = self;
    *reinterpret_cast<uint32_t*>(out_iter + 0x04) = result_node;
    return out_iter;
}
} // namespace lift_0059B170

// [0x0059B2E0]
namespace lift_0059B2E0 {
// @name TreeMap::find
// @class TreeMap
// @summary Finds a string key in the red-black tree map and writes an iterator pair (map, node) to out_iter.
// @field TreeMap +0x04 void* head


extern void* ext_0059B290(void* self, const void* key);
extern void (*mem_00925134)(void);
extern uint8_t (*mem_00924EF4)(const void* lhs, const void* rhs);

void* fn_0059B2E0(void* self, void* out_iter, const void* key) {
    void* node = ext_0059B290(self, key);
    if (!self) {
        mem_00925134();
    }
    void* head = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(self) + 0x4);
    void* result_node = head;
    if (node != head) {
        const void* node_key = reinterpret_cast<const void*>(reinterpret_cast<uintptr_t>(node) + 0xc);
        if (!mem_00924EF4(key, node_key)) {
            result_node = node;
        }
    }
    void** iter = reinterpret_cast<void**>(out_iter);
    iter[0] = self;
    iter[1] = result_node;
    return out_iter;
}
} // namespace lift_0059B2E0

// [0x00594250]
namespace lift_00594250 {
// @name copy_string_and_field
// @summary Copy-constructs a std::string at +0x00 and clones/copies a vtable-backed member at +0x1C/+0x20
// @field Obj +0x00 std::string name
// @field Obj +0x1C uint32_t field_0x1C
// @field Obj +0x20 void* field_0x20


extern uint32_t mem_00924FE0;

typedef void (__thiscall *msvcp80_string_copy_ctor_t)(void* self, const void* rhs);
typedef uint32_t* (__thiscall *vtable_clone_70_t)(void* self, uint32_t* out, const void* src_pair);

void* __thiscall sub_00594250(void* self, const void* rhs) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    const uint8_t* src = static_cast<const uint8_t*>(rhs);

    auto string_copy_ctor = reinterpret_cast<msvcp80_string_copy_ctor_t>(mem_00924FE0);
    string_copy_ctor(dst, src);

    const uint8_t* src_pair = src + 0x1C;
    void* obj = *reinterpret_cast<void* const*>(src_pair + 0x04);
    uint32_t cloned_val = 0;

    if (obj != nullptr) {
        uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
        auto clone_fn = reinterpret_cast<vtable_clone_70_t>(vtable[0x70 / sizeof(uintptr_t)]);
        uint32_t tmp = 0;
        uint32_t* res = clone_fn(obj, &tmp, src_pair);
        cloned_val = *res;
    }

    *reinterpret_cast<uint32_t*>(dst + 0x1C) = cloned_val;
    *reinterpret_cast<void**>(dst + 0x20) = obj;

    return self;
}
} // namespace lift_00594250

// [0x005971D0]
namespace lift_005971D0 {
// @name computeScaledTimeOffset
// @summary Computes (globalListCount + self->field_0xEC) * reciprocal(globalObj) as float.
// @field Self +0xEC uint32_t field_0xEC


extern uint32_t ext_00596330();
extern uint32_t ext_00596370();
extern float __thiscall ext_00661A40(void* self);

extern uint8_t mem_00B3F200;
extern void* mem_00B40640;
extern void* mem_00B40644;

float __thiscall fn_005971D0(void* self) {
    uint32_t count;
    void* obj;
    if (mem_00B3F200 != 0) {
        count = ext_00596370();
        obj = mem_00B40644;
    } else {
        count = ext_00596330();
        obj = mem_00B40640;
    }
    int32_t total = static_cast<int32_t>(count + *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xEC));
    double total_d = static_cast<double>(total);
    float recip = ext_00661A40(obj);
    return static_cast<float>(static_cast<double>(recip) * total_d);
}
} // namespace lift_005971D0

// [0x00594140] sub_00594140 (77 bytes)
namespace lift_00594140 {
// @name sub_00594140
// @summary Auto-lifted identical-shape clone of 0x004AD970 (Unknown::DestroyStringAndArray).
namespace lift_004AD970 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_00682FD0(void* self);
// Import slot for MSVCP80 std::basic_string<char>::~basic_string (IAT entry, bound at load time).
extern int mem_00924FF4;

// @name Unknown::DestroyStringAndArray
// @class Unknown
// @summary Releases the StringArray at +0x1c, then runs the std::string destructor on the object itself.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c StringArray field_0x1c
void fn_00594140(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the string elements held in the array at +0x1c.
    ext_00682FD0(base + 0x1c);

    // Destroy the std::string at offset 0 via the imported MSVC destructor (thiscall).
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_004AD970
} // namespace lift_00594140

// [0x005943D0] sub_005943D0 (108 bytes)
namespace lift_005943D0 {
// @name sub_005943D0
// @summary Auto-lifted identical-shape clone of 0x00667030 (advanceCursorSkipFlagged).
namespace lift_00667030 {
// Import slot 0x00925134 holds the address of MSVCR80!_invalid_parameter_noinfo.
// The raw .rdata label is "P{b", but the code loads a function pointer from it.
extern void (*mem_00925134)();

// @name advanceCursorSkipFlagged
// @summary Advances the cursor at self+0x04 past nodes whose byte at +0x39 is set, using the +0x04 and +0x08 links; calls the invalid-parameter handler when self+0x00 is null or the cursor node is flagged on entry.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* cursor
// @field UnknownNode +0x00 void* field_0x00
// @field UnknownNode +0x04 void* field_0x04
// @field UnknownNode +0x08 void* field_0x08
// @field UnknownNode +0x39 uint8_t flag
void fn_005943D0(void* self) {
    if (lift_field<void*>(self, 0x00) == nullptr) {
        mem_00925134();
    }

    void* eax = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(eax, 0x31) != 0) {
        mem_00925134();
        return;
    }

    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x31) == 0) {
        // Walk the +0x00 chain from ecx until a node with flag set is found.
        void* n = lift_field<void*>(ecx, 0x00);
        if (lift_field<uint8_t>(n, 0x31) == 0) {
            do {
                ecx = n;
                n = lift_field<void*>(ecx, 0x00);
            } while (lift_field<uint8_t>(n, 0x31) == 0);
        }
        lift_field<void*>(self, 0x04) = ecx;
        return;
    }

    // ecx (eax+0x08) is flagged: step to eax+0x04 and skip forward.
    eax = lift_field<void*>(eax, 0x04);
    if (lift_field<uint8_t>(eax, 0x31) == 0) {
        for (;;) {
            void* cur = lift_field<void*>(self, 0x04);
            if (cur != lift_field<void*>(eax, 0x08)) {
                break;
            }
            lift_field<void*>(self, 0x04) = eax;
            void* edx = eax;
            eax = lift_field<void*>(edx, 0x04);
            if (lift_field<uint8_t>(eax, 0x31) != 0) {
                break;
            }
        }
    }
    lift_field<void*>(self, 0x04) = eax;
}
} // namespace lift_00667030
} // namespace lift_005943D0

// [0x0059B290] sub_0059B290 (70 bytes)
namespace lift_0059B290 {
// @name sub_0059B290
// @summary Auto-lifted identical-shape clone of 0x00472730 (Tree::lowerBound).
namespace lift_00472730 {
// Imported string less-than comparator (function address stored in .rdata).
extern uint32_t mem_00924EF4;

using KeyLess = bool (__cdecl*)(const void* a, const void* b);

// @name Tree::lowerBound
// @class Tree
// @summary MSVC-style std::_Tree lower_bound: walks from the root to the first node whose key is not less than the argument; returns the head (end) sentinel if none.
// @field Tree +0x04 void* head
// @field TreeNode +0x00 void* left
// @field TreeNode +0x04 void* parent_or_root
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C std::string key
// @field TreeNode +0x39 uint8_t is_nil
void* __thiscall fn_0059B290(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x4);
    void* node = lift_field<void*>(head, 0x4);  // root
    void* result = head;                         // end() if nothing qualifies

    if (lift_field<uint8_t>(node, 0x31) != 0) {
        return head;
    }

    KeyLess less = reinterpret_cast<KeyLess>(static_cast<uintptr_t>(mem_00924EF4));
    while (lift_field<uint8_t>(node, 0x31) == 0) {
        if (less(static_cast<char*>(node) + 0xC, key)) {
            // node.key < key: answer lies in the right subtree.
            node = lift_field<void*>(node, 0x8);
        } else {
            // node.key >= key: candidate; keep searching left.
            result = node;
            node = lift_field<void*>(node, 0x0);
        }
    }
    return result;
}
} // namespace lift_00472730
} // namespace lift_0059B290

// [0x00599E70]
namespace lift_00599E70 {
// @name Unknown::getGrandparentField0x38C
// @class Unknown
// @summary Returns DWORD at (*(*(*(self+0x26C))+0x1C)->next->+0x28)+0x38C, or 0 if self+0x26C->+0x20 is null.
// @field Unknown +0x26C void* field_0x26C
// @field Unknown +0x20 DWORD field_0x20
// @field Unknown +0x1C void* field_0x1C
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x38C DWORD field_0x38C

// Import thunk slot for MSVCR80!_invalid_parameter_noinfo (rdata 0x925134).
extern void (*mem_00925134)(void);

DWORD sub_00599E70(void* self) {
    void* p = lift_field<void*>(self, 0x26C);
    if (lift_field<DWORD>(p, 0x20) == 0) {
        return 0;
    }

    void* head = lift_field<void*>(p, 0x1C);
    void* node = lift_field<void*>(head, 0x00);
    if (node == head) {
        mem_00925134();
    }

    void* q = lift_field<void*>(node, 0x28);
    return lift_field<DWORD>(q, 0x38C);
}
} // namespace lift_00599E70

// [0x00596C50] sub_00596C50 (76 bytes)
namespace lift_00596C50 {
// Known callee 0x005A3610: sub_005A3610 (Auto-lifted identical-shape clone of 0x0044C940 (sub_0044C940).)
// thiscall: element pointer passed in ecx.
extern void __fastcall ext_005A3610(void* self);
// Known callee 0x00594020: RaiseFieldF4ToValue (running max into self+0xF4; thiscall, one stack arg).
extern void __thiscall ext_00594020(void* self, int32_t value);
// CRT _invalid_parameter_noinfo function pointer slot.
extern void (*mem_00925134)(void);

// @name VectorNotifyElementsAndRaiseMax
// @class Unknown (layout not recovered)
// @summary Calls ext_005A3610 on each 4-byte element of the pointer range [+0x23C, +0x240), then RaiseFieldF4ToValue(self, 2).
// @field Unknown +0x23C uint32_t field_0x23C (range begin, 32-bit address)
// @field Unknown +0x240 uint32_t field_0x240 (range end, 32-bit address)
void fn_00596C50(void* self) {
    auto invalid_param = mem_00925134;
    const uint32_t end = lift_field<uint32_t>(self, 0x240);
    const uint32_t begin = lift_field<uint32_t>(self, 0x23C);

    // Range sanity checks (begin must not exceed end).
    if (begin > end) {
        invalid_param();
    }

    for (uint32_t cur = begin; cur != end; cur += 4) {
        uint32_t elem = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cur));
        ext_005A3610(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)));
    }

    ext_00594020(self, 2);
}
} // namespace lift_00596C50

// [0x0059FDE0]
namespace lift_0059FDE0 {
extern void* mem_00924FDC;
extern void* mem_00925134;
extern void ext_00673C20(void* self);

// @name copyTreeStringRange
// @summary Copies std::string elements from a checked tree iterator range [first, last) into a destination std::string array.
// @field TreeContainer +0x04 void* myhead
void* __cdecl fn_0059FDE0(void* first_cont, void* first_node, void* last_cont, void* last_node, void* dest) {
    struct TreeIter {
        void* cont;
        void* node;
    };
    TreeIter first = {first_cont, first_node};
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto assign_str = reinterpret_cast<void*(__thiscall*)(void*, const void*)>(mem_00924FDC);

    char* out = static_cast<char*>(dest);
    for (;;) {
        void* cont = first.cont;
        if (cont != nullptr && cont != last_cont) {
            invalid_param();
        }
        void* node = first.node;
        if (node == last_node) {
            break;
        }
        if (cont == nullptr) {
            invalid_param();
        }
        if (node == lift_field<void*>(cont, 0x4)) {
            invalid_param();
        }
        assign_str(out, static_cast<const char*>(node) + 0xC);
        out += 0x1C;
        ext_00673C20(&first);
    }
    return out;
}
} // namespace lift_0059FDE0

// [0x00596660] sub_00596660 (92 bytes)
namespace lift_00596660 {
extern void ext_0059DE60();
extern int mem_00925134;
extern int mem_009251EC;

// @name eraseInt32Range
// @summary Validates (self-pointer) args, erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, and writes a 2-pointer result to out.
// @field <unnamed> +0x08 int32_t* field_0x08
void fn_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last) {
    // Original: if (a2 == NULL || a2 != a4) _invalid_parameter_noinfo();
    // Portable equivalent of the CRT invalid-parameter trap: abort.
    if (a2 == nullptr || a2 != a4) {
        (void)&mem_00925134; // IAT slot of _invalid_parameter_noinfo (metadata reference only)
        std::abort();
    }

    // Original: end pointer is stored at self+0x08.
    int32_t*& end = lift_field<int32_t*>(self, 0x08);

    if (first != last) {
        // Original: count = (end - last) >> 2 (signed); newEnd = first + 4*count.
        intptr_t count = (reinterpret_cast<intptr_t>(end) - reinterpret_cast<intptr_t>(last)) >> 2;
        int32_t* newEnd = reinterpret_cast<int32_t*>(reinterpret_cast<intptr_t>(first) + count * 4);

        // Original: if (count > 0) memmove_s(first, 4*count, last, 4*count).
        if (count > 0) {
            (void)&mem_009251EC; // IAT slot of memmove_s (metadata reference only)
            std::memmove(first, last, static_cast<size_t>(count) * 4);
        }
        end = newEnd;
    }

    // Original: [out] = a2; [out+4] = first.
    lift_field<void*>(out, 0) = a2;
    lift_field<void*>(out, sizeof(void*)) = first;

    (void)&ext_0059DE60; // callee listed in metadata; not called by the disassembly
}
} // namespace lift_00596660

// [0x00599EA0]
namespace lift_00599EA0 {
// @name Unknown::getGrandparentVectorOrField0x38C
// @class Unknown
// @summary Returns field_0x22C of the first element in grandparent's vector at +0x330, or falls back to ext_00599E70.
// @field Unknown +0x26C void* field_0x26C


extern void* mem_00925134;
DWORD __fastcall ext_00599E70(void* self);

DWORD __fastcall sub_00599EA0(void* self) {
    uint8_t* node = lift_field<uint8_t*>(self, 0x26C);
    if (lift_field<uint32_t>(node, 0x20) == 0) {
        return 0;
    }

    uint8_t* list_head = lift_field<uint8_t*>(node, 0x1C);
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    uint8_t* first = lift_field<uint8_t*>(list_head, 0x0);
    if (first == list_head) {
        invalid_param();
    }

    uint8_t* obj = lift_field<uint8_t*>(first, 0x28);
    uint32_t vec_first = lift_field<uint32_t>(obj, 0x334);
    uint8_t* vec = obj + 0x330;

    if (vec_first == 0) {
        return ext_00599E70(self);
    }

    int32_t count = static_cast<int32_t>(lift_field<uint32_t>(vec, 0x8) - vec_first) >> 2;
    if (count == 0) {
        return ext_00599E70(self);
    }

    if (static_cast<uint32_t>(count) == 0) {
        invalid_param();
    }

    uint8_t* elem_ptr = lift_field<uint8_t*>(vec, 0x4);
    uint8_t* elem = lift_field<uint8_t*>(elem_ptr, 0x0);
    return lift_field<DWORD>(elem, 0x22C);
}
} // namespace lift_00599EA0

// [0x005963F0]
namespace lift_005963F0 {
// @name sub_005963F0
// @summary Sums field_0x5a0 across all pointer elements in the vector at this+0x238
// @field Self +0x238 uint8_t[] field_0x238
// @field Elem +0x5a0 int32_t field_0x5a0


extern void (*mem_00925134)();

int32_t __thiscall sub_005963F0(void* self) {
    uint8_t* vec = reinterpret_cast<uint8_t*>(self) + 0x238;
    uint32_t* it = lift_field<uint32_t*>(vec, 0x4);
    int32_t sum = 0;

    if (it > lift_field<uint32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    for (;;) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x8);
        if (lift_field<uint32_t*>(vec, 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        uint8_t* elem = reinterpret_cast<uint8_t*>(*it);
        sum += lift_field<int32_t>(elem, 0x5a0);
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        ++it;
    }

    return sum;
}
} // namespace lift_005963F0

// [0x00596A70]
namespace lift_00596A70 {
extern void* mem_00925134;
extern void ext_00673C20(void* self);

// @name forEachTreeNode
// @summary Iterates over a checked tree iterator range, invoking a callback on each node's value at +0x28.
// @field TreeContainer +0x04 void* headNode
// @field TreeNode +0x28 void* value
void** fn_00596A70(void** out_fn, void* begin_container, void* begin_node, void* end_container, void* end_node, void* fn) {
    struct TreeIter {
        void* container;
        void* node;
    };

    using InvalidParamFn = void(*)();
    using CallbackFn = void(*)(void*);

    InvalidParamFn invalid_param = *reinterpret_cast<InvalidParamFn*>(&mem_00925134);
    TreeIter it{begin_container, begin_node};

    for (;;) {
        if (it.container == nullptr || it.container != end_container) {
            invalid_param();
        }
        if (it.node == end_node) {
            break;
        }
        if (it.container == nullptr) {
            invalid_param();
        }
        if (it.node == lift_field<void*>(it.container, 0x04)) {
            invalid_param();
        }

        CallbackFn callback = reinterpret_cast<CallbackFn>(fn);
        callback(lift_field<void*>(it.node, 0x28));

        ext_00673C20(&it);
    }

    *out_fn = fn;
    return out_fn;
}
} // namespace lift_00596A70

// [0x005969C0] sub_005969C0 (100 bytes)
namespace lift_005969C0 {
// Known callee 0x00527690: sub_00527690 (Iterates over a vector of objects at +0x14 and invokes vtable[2](arg0, arg1) on each)
extern void __thiscall ext_00527690(void* self, uint32_t arg0, uint32_t arg1);
// Known callee 0x00678D70: BaseEventDispatcher::vfunc_1 (Invokes virtual slot 0 on every object pointer in the dispatcher's [begin, end) list, passing the single argument.)
extern void __thiscall ext_00678D70(void* self, uint32_t arg);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (referenced on the bounds-check failure paths)
extern int mem_00925134;

// @name BaseEventDispatcher::dispatchToRange
// @class BaseEventDispatcher
// @summary Walks the [begin, end) range struct passed as the first stack argument, calling sub_00527690(self, element, extra) for each element, then calls ext_00678D70(self, 1). Bounds failures abort.
// @field BaseEventDispatcher +0x00 void* field_0x00
void __thiscall fn_005969C0(void* self, void* range, uint32_t extra) {
    // Range struct: +0x04 = begin, +0x08 = end (32-bit guest addresses).
    auto invalidParameter = []() {
        (void)&mem_00925134;
        std::abort();
    };

    uint32_t begin = lift_field<uint32_t>(range, 0x04);
    uint32_t end = lift_field<uint32_t>(range, 0x08);
    if (begin > end) {
        invalidParameter();
    }

    uint32_t cur = begin;
    while (cur != lift_field<uint32_t>(range, 0x08)) {
        if (cur >= lift_field<uint32_t>(range, 0x08)) {
            invalidParameter();
        }
        uint32_t element = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)), 0);
        ext_00527690(self, element, extra);
        if (cur >= lift_field<uint32_t>(range, 0x08)) {
            invalidParameter();
        }
        cur += 4;
    }

    ext_00678D70(self, 1);
}
} // namespace lift_005969C0

// [0x00598A90] sub_00598A90 (126 bytes)
namespace lift_00598A90 {
extern void ext_00519CF0(void* self);
extern void ext_00673C20(void* self);
extern uint32_t mem_00925134;

// @name iterateFlaggedNodesAndDispatch
// @class <Unknown> (owner class not yet recovered)
// @summary Walks a debug-checked node list from this->field_0x26C and, for each node, calls a vtable slot (+0x30) and ext_00519CF0 on the node's object, then advances the iterator via fn_00673C20.
// @field Unknown +0x26C void* field_0x26C
namespace {

struct LiftIter {
    uint32_t cont; // iterator's container (sentinel) address
    uint32_t node; // current node address
};

inline uint8_t* lift_ptr(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

inline void lift_invalid_parameter() {
    // Equivalent of: call dword ptr [mem_00925134] (_invalid_parameter_noinfo)
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

} // namespace

void fn_00598A90(void* self) {
    // mov ebx, [ecx+0x26c]; mov eax, [ebx+0xc]; add ebx, 8
    const uint32_t proxy = lift_field<uint32_t>(self, 0x26C);
    const uint32_t sentinel = proxy + 8;
    // mov edi, [eax] where eax = [proxy+0xc]
    const uint32_t first = lift_field<uint32_t>(lift_ptr(lift_field<uint32_t>(lift_ptr(proxy), 0xC)), 0);

    LiftIter it{sentinel, first}; // stored to [esp+0x10] / [esp+0x14]

    for (;;) {
        // mov ebp, [ebx+4]
        const uint32_t end = lift_field<uint32_t>(lift_ptr(sentinel), 4);

        // iterator validity checks (debug): esi must be non-null and == ebx
        if (it.cont == 0 || it.cont != sentinel) {
            lift_invalid_parameter();
        }

        if (it.node == end) {
            break;
        }

        if (it.cont == 0) {
            lift_invalid_parameter();
        }
        if (it.node == lift_field<uint32_t>(lift_ptr(it.cont), 4)) {
            lift_invalid_parameter();
        }

        // mov ecx, [edi+0x28]; mov edx, [ecx]; mov eax, [edx+0x30]; push 0; call eax
        const uint32_t obj = lift_field<uint32_t>(lift_ptr(it.node), 0x28);
        const uint32_t vtbl = lift_field<uint32_t>(lift_ptr(obj), 0);
        const uint32_t slot = lift_field<uint32_t>(lift_ptr(vtbl), 0x30);
        reinterpret_cast<void (*)(void*, int)>(static_cast<uintptr_t>(slot))(lift_ptr(obj), 0);

        // re-check iterator after the virtual call
        if (it.node == lift_field<uint32_t>(lift_ptr(it.cont), 4)) {
            lift_invalid_parameter();
        }

        // mov ecx, [edi+0x28]; call sub_00519CF0
        const uint32_t obj2 = lift_field<uint32_t>(lift_ptr(it.node), 0x28);
        ext_00519CF0(lift_ptr(obj2));

        // lea ecx, [esp+0x10]; call ext_00673C20 (advances it in place)
        ext_00673C20(&it);
    }
}
} // namespace lift_00598A90

// [0x00595AF0] sub_00595AF0 (127 bytes)
namespace lift_00595AF0 {
extern uintptr_t mem_00925134;

// @name TreeIterator::advanceToSuccessor
// @class TreeIterator
// @summary Advances a red-black-tree iterator to its in-order successor (stored at this+0x04), with _invalid_parameter_noinfo reporting on null/sentinel inputs.
// @field TreeIterator +0x00 void* field_0x00
// @field TreeIterator +0x04 void* currentNode
void fn_00595AF0(void* self) {
    // mem_00925134 holds the imported _invalid_parameter_noinfo pointer.
    auto invalid_parameter = reinterpret_cast<void (*)()>(mem_00925134);

    if (lift_field<void*>(self, 0x00) == nullptr) {
        invalid_parameter();
    }

    // Node layout: +0x00 left/link, +0x04 parent, +0x08 right, +0xB9 isNil flag.
    void* node = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(node, 0xB9) != 0) {
        invalid_parameter();
        return;
    }

    void* cur = lift_field<void*>(node, 0x08);
    if (lift_field<uint8_t>(cur, 0xB9) == 0) {
        // Right subtree exists: take its leftmost node.
        void* next = lift_field<void*>(cur, 0x00);
        if (lift_field<uint8_t>(next, 0xB9) == 0) {
            do {
                cur = next;
                next = lift_field<void*>(cur, 0x00);
            } while (lift_field<uint8_t>(next, 0xB9) == 0);
        }
        lift_field<void*>(self, 0x04) = cur;
        return;
    }

    // No right subtree: climb parents while we are the right child.
    void* p = lift_field<void*>(node, 0x04);
    if (lift_field<uint8_t>(p, 0xB9) == 0) {
        while (lift_field<void*>(self, 0x04) == lift_field<void*>(p, 0x08)) {
            lift_field<void*>(self, 0x04) = p;
            p = lift_field<void*>(p, 0x04);
            if (lift_field<uint8_t>(p, 0xB9) != 0) {
                break;
            }
        }
    }
    lift_field<void*>(self, 0x04) = p;
}
} // namespace lift_00595AF0

// [0x00596B20] sub_00596B20 (88 bytes)
namespace lift_00596B20 {
// Known callee 0x00595AF0: TreeIterator::advanceToSuccessor (Advances a red-black-tree iterator to its in-order successor (stored at this+0x04), with _invalid_parameter_noinfo reporting on null/sentinel inputs.)
extern void ext_00595AF0(void* self);
extern int mem_00925134;
extern int mem_00924FDC;

// @name CopyTreeStringRange_00596B20
// @summary Copies the std::string value of each tree node in [it, end) into consecutive 28-byte slots starting at dest, advancing the iterator after each copy; reports invalid parameters on null or mismatched head/sentinel.
// @field TreeHeader +0x04 uint8_t* field_0x04
// @field TreeNode +0x0C std::string value
uint8_t* fn_00596B20(uint8_t* head, uint8_t* node, uint8_t* expectedHead, uint8_t* end, uint8_t* dest) {
    // it[0] = head (container), it[1] = current node; the iterator advance reads/writes it[1] via this+4.
    using string_assign_fn = void* (__thiscall*)(void* self, const void* src);
    auto invalid_parameter = [] {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };

    uint8_t* it[2] = {head, node};
    uint8_t* out = dest;

    for (;;) {
        uint8_t* h = it[0];
        if (h == nullptr || h != expectedHead) {
            invalid_parameter();
        }

        uint8_t* cur = it[1];
        if (cur == end) {
            return out;
        }

        if (h == nullptr) {
            invalid_parameter();
        }
        if (cur == lift_field<uint8_t*>(h, 0x04)) {
            invalid_parameter();
        }

        reinterpret_cast<string_assign_fn>(static_cast<uintptr_t>(mem_00924FDC))(out, cur + 0x0C);
        out += 0x1C;
        ext_00595AF0(it);
    }
}
} // namespace lift_00596B20

// [0x005948E0]
namespace lift_005948E0 {
// @name TreeIterator::decrement
// @class TreeIterator
// @summary Decrements a red-black tree iterator to the previous node, invoking _invalid_parameter_noinfo on invalid state.
// @field TreeIterator +0x00 void* container
// @field TreeIterator +0x04 void* node


extern void (*mem_00925134)();

void __thiscall sub_005948E0(void* self) {
    auto* iter = static_cast<uint8_t*>(self);
    auto invalid_param = mem_00925134;

    if (lift_field<uint32_t>(iter, 0x00) == 0) {
        invalid_param();
    }

    auto* node = lift_field<uint8_t*>(iter, 0x04);
    if (lift_field<uint8_t>(node, 0x31) != 0) {
        node = lift_field<uint8_t*>(node, 0x08);
        lift_field<uint8_t*>(iter, 0x04) = node;
        if (lift_field<uint8_t>(node, 0x31) != 0) {
            invalid_param();
        }
        return;
    }

    auto* left = lift_field<uint8_t*>(node, 0x00);
    if (lift_field<uint8_t>(left, 0x31) == 0) {
        auto* right = lift_field<uint8_t*>(left, 0x08);
        while (lift_field<uint8_t>(right, 0x31) == 0) {
            left = right;
            right = lift_field<uint8_t*>(left, 0x08);
        }
        lift_field<uint8_t*>(iter, 0x04) = left;
        return;
    }

    auto* parent = lift_field<uint8_t*>(node, 0x04);
    while (lift_field<uint8_t>(parent, 0x31) == 0) {
        auto* cur = lift_field<uint8_t*>(iter, 0x04);
        if (cur != lift_field<uint8_t*>(parent, 0x00)) {
            break;
        }
        lift_field<uint8_t*>(iter, 0x04) = parent;
        parent = lift_field<uint8_t*>(parent, 0x04);
    }

    auto* cur = lift_field<uint8_t*>(iter, 0x04);
    if (lift_field<uint8_t>(cur, 0x31) != 0) {
        invalid_param();
        return;
    }

    lift_field<uint8_t*>(iter, 0x04) = parent;
}
} // namespace lift_005948E0

// [0x0059E220]
namespace lift_0059E220 {
// @name TreeConstIterator::decrement
// @class TreeConstIterator
// @summary Decrements an MSVC8 std::_Tree iterator to the previous in-order node.
// @field TreeConstIterator +0x00 uint32_t container
// @field TreeConstIterator +0x04 uint8_t* node


extern void (*mem_00925134)();

void __thiscall sub_0059E220(void* self) {
    if (lift_field<uint32_t>(self, 0x00) == 0) {
        mem_00925134();
    }

    uint8_t* node = lift_field<uint8_t*>(self, 0x04);
    if (lift_field<uint8_t>(node, 0x2d) != 0) {
        node = lift_field<uint8_t*>(node, 0x08);
        lift_field<uint8_t*>(self, 0x04) = node;
        if (lift_field<uint8_t>(node, 0x2d) != 0) {
            mem_00925134();
        }
        return;
    }

    uint8_t* left = lift_field<uint8_t*>(node, 0x00);
    if (lift_field<uint8_t>(left, 0x2d) == 0) {
        uint8_t* right = lift_field<uint8_t*>(left, 0x08);
        while (lift_field<uint8_t>(right, 0x2d) == 0) {
            left = right;
            right = lift_field<uint8_t*>(left, 0x08);
        }
        lift_field<uint8_t*>(self, 0x04) = left;
        return;
    }

    uint8_t* parent = lift_field<uint8_t*>(node, 0x04);
    while (lift_field<uint8_t>(parent, 0x2d) == 0) {
        if (lift_field<uint8_t*>(self, 0x04) != lift_field<uint8_t*>(parent, 0x00)) {
            break;
        }
        lift_field<uint8_t*>(self, 0x04) = parent;
        parent = lift_field<uint8_t*>(parent, 0x04);
    }

    if (lift_field<uint8_t>(lift_field<uint8_t*>(self, 0x04), 0x2d) != 0) {
        mem_00925134();
        return;
    }
    lift_field<uint8_t*>(self, 0x04) = parent;
}
} // namespace lift_0059E220

// [0x0059E2B0]
namespace lift_0059E2B0 {
// @name TreeIterator::decrement
// @class TreeIterator
// @summary Decrements a red-black tree iterator to the previous in-order node.
// @field TreeIterator +0x00 void* container
// @field TreeIterator +0x04 uint8_t* node


extern void (*mem_00925134)();

void __thiscall sub_0059E2B0(void* self) {
    if (lift_field<void*>(self, 0x00) == nullptr) {
        mem_00925134();
    }

    uint8_t* node = lift_field<uint8_t*>(self, 0x04);
    if (lift_field<uint8_t>(node, 0x69) != 0) {
        node = lift_field<uint8_t*>(node, 0x08);
        lift_field<uint8_t*>(self, 0x04) = node;
        if (lift_field<uint8_t>(node, 0x69) != 0) {
            mem_00925134();
        }
        return;
    }

    uint8_t* left = lift_field<uint8_t*>(node, 0x00);
    if (lift_field<uint8_t>(left, 0x69) == 0) {
        uint8_t* right = lift_field<uint8_t*>(left, 0x08);
        while (lift_field<uint8_t>(right, 0x69) == 0) {
            left = right;
            right = lift_field<uint8_t*>(left, 0x08);
        }
        lift_field<uint8_t*>(self, 0x04) = left;
        return;
    }

    uint8_t* parent = lift_field<uint8_t*>(node, 0x04);
    while (lift_field<uint8_t>(parent, 0x69) == 0) {
        uint8_t* cur = lift_field<uint8_t*>(self, 0x04);
        if (cur != lift_field<uint8_t*>(parent, 0x00)) {
            break;
        }
        lift_field<uint8_t*>(self, 0x04) = parent;
        parent = lift_field<uint8_t*>(parent, 0x04);
    }

    uint8_t* cur = lift_field<uint8_t*>(self, 0x04);
    if (lift_field<uint8_t>(cur, 0x69) != 0) {
        mem_00925134();
        return;
    }
    lift_field<uint8_t*>(self, 0x04) = parent;
}
} // namespace lift_0059E2B0

// [0x00597860] sub_00597860 (141 bytes)
namespace lift_00597860 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764), cdecl, one argument.
extern void ext_006A5C5C(void* p);
// Indirect IAT slot 0x00924FF4: holds the address of MSVCP80 basic_string<char> destructor (thiscall).
extern uint32_t mem_00924FF4;

// Node field accessors (32-bit guest layout; pointers are stored as uint32_t).
static inline uint32_t u32_at(const uint8_t* base, std::ptrdiff_t off) {
    return lift_field<uint32_t>(base, off);
}
static inline uint8_t u8_at(const uint8_t* base, std::ptrdiff_t off) {
    return lift_field<uint8_t>(base, off);
}
static inline uint8_t* ptr_at(const uint8_t* base, std::ptrdiff_t off) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(u32_at(base, off)));
}

// @name Unknown::processNodeList
// @class Unknown
// @summary Walks a singly linked node list starting at arg (next at +0x00); recursively processes each node's +0x08 child, invokes vfunc slot 30 on the object at +0x2C if non-null, destroys the std::string at +0x0C, then calls ext_006A5C5C(node). Stops when a node's flag at +0x31 is nonzero.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C std::basic_string<char> field_0x0c
// @field Unknown +0x2C uint32_t field_0x2c
// @field Unknown +0x31 uint8_t field_0x31
void fn_00597860(void* self, void* arg) {
    uint8_t* edi = static_cast<uint8_t*>(arg);

    while (u8_at(edi, 0x31) == 0) {
        uint8_t* esi = edi;

        // Recurse into child at +0x08 with the same `this`.
        fn_00597860(self, reinterpret_cast<void*>(static_cast<uintptr_t>(u32_at(esi, 0x08))));

        // Advance to next node.
        esi = ptr_at(esi, 0x00);

        uint8_t* const ebp = edi + 0x0C;

        // Optional virtual call on the object at +0x2C (vtable slot 30, byte offset 0x78).
        if (u32_at(edi, 0x2C) != 0) {
            uint8_t* obj = ptr_at(edi, 0x2C);
            uint8_t* vtbl = ptr_at(obj, 0x00);
            uint32_t slot = u32_at(vtbl, 0x78);
            using VFunc = void (*)(void* self, void* arg);
            reinterpret_cast<VFunc>(static_cast<uintptr_t>(slot))(obj, edi + 0x28);
        }

        // Destroy the std::string member at +0x0C (MSVCP80 basic_string dtor via IAT slot).
        using DtorFn = void (*)(void* self);
        reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(ebp);

        ext_006A5C5C(edi);

        // Continue with the next node (loop condition re-checks its flag at +0x31).
        edi = esi;
    }
}
} // namespace lift_00597860

// [0x0059FE80] sub_0059FE80 (142 bytes)
namespace lift_0059FE80 {
// .idata IAT slot for MSVCR80!memmove_s
extern int (*mem_009251EC)(void* dest, size_t destSize, const void* src, size_t count);

// @name InsertionSortDwordRange
// @summary Insertion sort of a DWORD range [first, last): elements below *first are block-shifted to the front via memmove_s, others are shifted into place by unguarded-style linear scan.
void fn_0059FE80(DWORD* first, DWORD* last) {
    if (first == last) {
        return;
    }
    DWORD* it = first + 1;
    if (it == last) {
        return;
    }
    for (; it != last; ++it) {
        const DWORD v = *it;
        if (v < *first) {
            const size_t bytes = reinterpret_cast<uintptr_t>(it) - reinterpret_cast<uintptr_t>(first);
            mem_009251EC(first + 1, bytes, first, bytes);
            *first = v;
        } else {
            DWORD* p = it;
            while (v < p[-1]) {
                p[0] = p[-1];
                --p;
            }
            *p = v;
        }
    }
}
} // namespace lift_0059FE80

// [0x00595B70]
namespace lift_00595B70 {
// Known callee 0x00594250: copy_string_and_field (Copy-constructs a std::string at +0x00 and clones/copies a vtable-backed member at +0x1C/+0x20)
extern void ext_00594250();
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.) -- operator delete
extern void ext_006A5C5C();
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.) -- operator new
extern void ext_006A5C62();

// @name Obj::create (sub_00595B70)
// @summary Allocates a 0x34-byte Obj, stores three dwords, copy-constructs the string sub-object at +0x0C from rhs, and sets the trailing flag byte; returns the new object or null on allocation failure.
// @field Obj +0x00 uint32_t field_0x00
// @field Obj +0x04 uint32_t field_0x04
// @field Obj +0x08 uint32_t field_0x08
// @field Obj +0x0C std::string field_0x0C
// @field Obj +0x30 uint8_t field_0x30
// @field Obj +0x31 uint8_t field_0x31
void* __stdcall fn_00595B70(uint32_t a, uint32_t b, uint32_t c, const void* rhs, uint8_t flag) {
    using alloc_fn_t = void* (__cdecl*)(size_t);
    using free_fn_t = void (__cdecl*)(void*);
    using copy_fn_t = void* (__thiscall*)(void* self, const void* rhs);

    void* obj = reinterpret_cast<alloc_fn_t>(ext_006A5C62)(0x34);
    if (obj == nullptr) {
        return nullptr;
    }

    try {
        lift_field<uint32_t>(obj, 0x00) = a;
        lift_field<uint32_t>(obj, 0x04) = b;
        lift_field<uint32_t>(obj, 0x08) = c;

        reinterpret_cast<copy_fn_t>(ext_00594250)(static_cast<uint8_t*>(obj) + 0x0C, rhs);

        lift_field<uint8_t>(obj, 0x30) = flag;
        lift_field<uint8_t>(obj, 0x31) = 0;
    } catch (...) {
        // Unwind funclet: release the partially constructed object, then rethrow.
        reinterpret_cast<free_fn_t>(ext_006A5C5C)(obj);
        throw;
    }

    return obj;
}
} // namespace lift_00595B70

// [0x00595C90] sub_00595C90 (82 bytes)
namespace lift_00595C90 {
// @name sub_00595C90
// @summary Auto-lifted identical-shape clone of 0x0052A140 (Unknown::ctor_CopyPairAt1C).
namespace lift_0052A140 {
// Known callee 0x00532900: Copy-initialize from source (ctor-style copy of vec4 + string + flag) (Sets the vtable, enable flag, copies 4 floats (+0x08..+0x14), a std::string (+0x18), and a byte flag (+0x34) from the source object.)
extern void ext_0049BD50(void* self, const void* src);
extern int mem_00924FE0;

// @name Unknown::ctor_CopyPairAt1C
// @class Unknown
// @summary Copy-constructs a std::string at +0x00 from src, then copy-initializes the sub-object at +0x1C from src+0x1C.
// @field Unknown +0x00 std::string copy (MSVCP80 basic_string copy ctor, via mem_00924FE0 IAT slot)
// @field Unknown +0x1C <unknown> field_0x1C (copy-initialized by ext_00532900)
void* fn_00595C90(void* self, const void* src) {
    // MSVCP80 std::string copy ctor, called indirectly through the IAT slot.
    using StringCopyCtor = void (*)(void* self, const void* src);
    auto copy_string = *reinterpret_cast<StringCopyCtor*>(&mem_00924FE0);
    copy_string(self, src);

    auto* dst_sub = static_cast<unsigned char*>(self) + 0x1C;
    auto* src_sub = static_cast<const unsigned char*>(src) + 0x1C;
    ext_0049BD50(dst_sub, src_sub);

    return self;
}
} // namespace lift_0052A140
} // namespace lift_00595C90

// [0x005978F0] sub_005978F0 (141 bytes)
namespace lift_005978F0 {
// @name sub_005978F0
// @summary Auto-lifted identical-shape clone of 0x00667810 (Unknown::destroyNodeList).
namespace lift_00667810 {
// Known callee 0x006668B0: ReleaseFiveStringMembers_006668B0 (Destroys five std::string members (at +0x74, +0x54, +0x38, +0x1C, +0x00) in reverse order via the MSVCP80 basic_string destructor import.)
extern void ext_00682FD0(void* self);
extern void ext_00667810(void* self, void* node);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called cdecl with one pointer argument.)
extern void ext_006A5C5C(void* arg);
extern int mem_00924FF4;

// @name Unknown::destroyNodeList
// @class Unknown
// @summary Recursively walks a singly linked node list starting at node; for each node it recurses on the child at +0x08, destroys the ObjectWithStrings at +0x28 and the std::string at +0x0C, then frees the node via MFC80!ord_764, until a node with the flag at +0xC1 set is reached.
// @field Unknown +0x00 Unknown* field_0x00
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C std::string field_0x0C
// @field Unknown +0x28 ObjectWithStrings field_0x28
// @field Unknown +0xC1 BYTE field_0xC1
void fn_005978F0(void* self, void* node) {
    // MSVCP80 std::basic_string<char>::~basic_string, called thiscall on the string object.
    using StringDtorFn = void (*)(void*);
    const StringDtorFn string_dtor = *reinterpret_cast<StringDtorFn*>(&mem_00924FF4);

    uint8_t* edi = static_cast<uint8_t*>(node);
    uint8_t* esi = edi;

    // Nothing to do when the starting node is already flagged.
    if (lift_field<uint8_t>(edi, 0xB9) != 0) {
        return;
    }

    do {
        ext_00667810(self, lift_field<void*>(esi, 0x08));
        esi = lift_field<uint8_t*>(esi, 0x00);

        uint8_t* const str_obj = edi + 0x0C;
        ext_00682FD0(edi + 0x28);
        string_dtor(str_obj);
        ext_006A5C5C(edi);

        edi = esi;
    } while (lift_field<uint8_t>(esi, 0xB9) == 0);
}
} // namespace lift_00667810
} // namespace lift_005978F0

// [0x00594330] sub_00594330 (154 bytes)
namespace lift_00594330 {
// Import slot (IAT) holding MSVCR80!_invalid_parameter_noinfo.
extern void (*mem_00925134)(void);

namespace {
inline uint8_t* node_at(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}
inline uint32_t link_at(uint32_t node, ptrdiff_t off) {
    return lift_field<uint32_t>(node_at(node), off);
}
inline bool flag_at(uint32_t node) {
    return lift_field<uint8_t>(node_at(node), 0xB9) != 0;
}
} // namespace

// @name TreeConstIterator::operator++
// @class TreeConstIterator
// @summary MSVC std::_Tree const-iterator increment: advances the current node at +0x04 to its in-order successor (via the node+0x08 / node+0x00 / node+0x04 links), stopping at nodes whose byte at +0xB9 is set; calls _invalid_parameter_noinfo when the iterator state is invalid.
// @field TreeConstIterator +0x00 uint32_t field_0x00 (container/header pointer, must be non-null)
// @field TreeConstIterator +0x04 uint32_t field_0x04 (current node pointer)
// @field TreeNode +0x00 uint32_t field_0x00 (link)
// @field TreeNode +0x04 uint32_t field_0x04 (link)
// @field TreeNode +0x08 uint32_t field_0x08 (link)
// @field TreeNode +0xB9 uint8_t field_0xB9 (sentinel flag)
void fn_00594330(void* self) {
    uint32_t& container = lift_field<uint32_t>(self, 0x00);
    uint32_t& cur = lift_field<uint32_t>(self, 0x04);

    if (container == 0) {
        mem_00925134();
    }

    uint32_t a = cur;
    if (flag_at(a)) {
        // Current node is a sentinel: step to node+0x08.
        uint32_t b = link_at(a, 0x08);
        cur = b;
        if (flag_at(b)) {
            mem_00925134();
        }
        return;
    }

    uint32_t c = link_at(a, 0x00);
    if (!flag_at(c)) {
        uint32_t d = link_at(c, 0x08);
        if (!flag_at(d)) {
            do {
                c = d;
                d = link_at(c, 0x08);
            } while (!flag_at(d));
        }
        cur = c;
        return;
    }

    // c is a sentinel: walk up the +0x04 chain from a.
    uint32_t x = link_at(a, 0x04);
    if (!flag_at(x)) {
        for (;;) {
            if (cur != link_at(x, 0x00)) {
                break;
            }
            cur = x;
            uint32_t y = link_at(x, 0x04);
            x = y;
            if (flag_at(y)) {
                break;
            }
        }
    }

    if (flag_at(cur)) {
        mem_00925134();
        return;
    }
    cur = x;
}
} // namespace lift_00594330

// [0x00593710] sub_00593710 (155 bytes)
namespace lift_00593710 {
// Known callee 0x00664ED0: upperCopyStringRange (Gathers the bounds of a std::string (MSVC layout) and forwards them to upperCopyRangeToPair; returns the string pointer.)
extern void* ext_00664ED0(void* self);
extern int mem_00924FC0;
extern int mem_00924FF4;

// @name ClassifyStringToken
// @summary Uppercases a by-value std::string argument in place, then maps it to 1, 0 or 2 by comparing against three literals (default 2).

namespace {
// MSVC 2005 std::string::operator==(const string&, const char*) (__cdecl).
using StrEqFn = bool (__cdecl*)(const void* str, const char* lit);
// MSVC 2005 std::string::~string() (__thiscall).
using StrDtorFn = void (__thiscall*)(void* str);

inline const char* lit_at(uintptr_t addr) {
    return reinterpret_cast<const char*>(addr);
}
} // namespace

int fn_00593710(void* self) {
    // Uppercase the argument string in place (case-insensitive compare below).
    ext_00664ED0(self);

    auto str_eq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FC0)));
    auto str_dtor = reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));

    int result = 2;
    if (str_eq(self, lit_at(0x95CFD8))) {
        result = 1;
    } else if (str_eq(self, lit_at(0x95CFD0))) {
        result = 2;
    } else if (str_eq(self, lit_at(0x95CFC8))) {
        result = 0;
    }

    str_dtor(self);
    return result;
}
} // namespace lift_00593710
