// Lifted C++ translation unit: lifted/leaf/decompiled_5A0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_005A3610 {
// @name sub_005A3610
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_005A1070(void* arg);

void fn_005A3610() {
    ext_005A1070(reinterpret_cast<void*>(static_cast<uintptr_t>(3)));
}
} // namespace lift_00437DE0
} // namespace lift_005A3610
#include <cstring>
#include <cstddef>

#include <cstddef>
namespace lift_005AD1C0 {
// @name fillRangeWith8ByteValue
// @summary Writes the 8-byte value at *src into every 8-byte slot in [dst_begin, dst_end). Source pointer is not advanced.

void fillRangeWith8ByteValue(uint32_t* dst_begin, uint32_t* dst_end, const uint32_t* src) {
    if (dst_begin == dst_end) {
        return;
    }
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];
    uint32_t* dst = dst_begin;
    do {
        dst[0] = lo;
        dst[1] = hi;
        dst += 2;
    } while (dst != dst_end);
}
} // namespace lift_005AD1C0
#include <stdexcept>
#include <utility>
#include <istream>
#include <bit>

#include <bit>
namespace lift_005A3DC0 {
extern uint32_t mem_00924E90;
extern uint32_t mem_00924FA0;
extern uint32_t mem_00924E94;
extern uint32_t mem_00924E98;

// @name catch_005A3DC0_printExceptionMessage
// @summary Catch-block funclet that prints the caught exception's string at +0x0C to std::cout and returns continuation 0x005A3DAD.
uint32_t sub_005A3DC0(uint32_t ebp) {
    using StreamPtr = void*;
    using EndlFn = StreamPtr (__cdecl*)(StreamPtr);
    using PrintStrFn = StreamPtr (__cdecl*)(StreamPtr, const void*);
    using StreamManipFn = StreamPtr (__thiscall*)(StreamPtr, EndlFn);

    EndlFn endl_fn = reinterpret_cast<EndlFn>(static_cast<uintptr_t>(mem_00924E90));
    StreamPtr cout_obj = reinterpret_cast<StreamPtr>(static_cast<uintptr_t>(mem_00924FA0));
    PrintStrFn print_str = reinterpret_cast<PrintStrFn>(static_cast<uintptr_t>(mem_00924E94));
    StreamManipFn stream_manip = reinterpret_cast<StreamManipFn>(static_cast<uintptr_t>(mem_00924E98));

    uint32_t exc_ptr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ebp - 0x14));
    const void* str_ptr = reinterpret_cast<const void*>(static_cast<uintptr_t>(exc_ptr + 0x0C));

    StreamPtr os = print_str(cout_obj, str_ptr);
    stream_manip(os, endl_fn);

    return 0x005A3DADu;
}
} // namespace lift_005A3DC0
#include <exception>
#include <iostream>
#include <streambuf>

#include <streambuf>
namespace lift_005AA8D0 {
// Import slot for std::basic_string<char> copy-assignment (MSVCP80), used as thiscall.
extern int mem_00924FDC;

// @name sub_005AA8D0
// @summary Assigns the incoming string to the member at +0x170, then if the object at +0x190 is non-null invokes its vtable slot 0.
// @field <ClassName> +0x170 std::string field_0x170
// @field <ClassName> +0x190 void* field_0x190
void __thiscall fn_005AA8D0(void* self, const void* src) {
    using StrAssignFn = void* (__thiscall*)(void* self, const void* rhs);
    using VFn = void (__thiscall*)(void* self);

    auto assign = reinterpret_cast<StrAssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    auto* base = static_cast<unsigned char*>(self);

    assign(base + 0x170, src);

    void* obj = *reinterpret_cast<void**>(base + 0x190);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<VFn>(vtbl[0]);
        slot0(obj);
    }
}
} // namespace lift_005AA8D0
#include <cstdio>
#include <memory>

#include <memory>
namespace lift_005AA890 {
// @name CopyVec3ToSelfAndNotifyChild
// @summary Copies a 3-float vector into self+0x164..0x16c, then calls virtual slot 0 on the child at self+0x190 if present.
// @field Self +0x164 float field_0x164
// @field Self +0x168 float field_0x168
// @field Self +0x16c float field_0x16c
// @field Self +0x190 void* field_0x190
void CopyVec3ToSelfAndNotifyChild(void* self, const float* src) {
    lift_field<float>(self, 0x164) = src[0];
    lift_field<float>(self, 0x168) = src[1];
    lift_field<float>(self, 0x16c) = src[2];

    void* child = lift_field<void*>(self, 0x190);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        auto slot0 = reinterpret_cast<void (*)(void*)>(vtbl[0]);
        slot0(child);
    }
}
} // namespace lift_005AA890

// [0x005AA850] sub_005AA850 (54 bytes)
namespace lift_005AA850 {
// @name SetVec3AndNotifyChild
// @summary Copies a 3-float vector into self+0x158..0x160, then forwards a no-arg notification (vtable slot 0) to the object at self+0x190 if it is set.
// @field Object +0x158 float field_0x158
// @field Object +0x15c float field_0x15c
// @field Object +0x160 float field_0x160
// @field Object +0x190 void* field_0x190
void fn_005AA850(void* self, const float* src) {
    lift_field<float>(self, 0x158) = src[0];
    lift_field<float>(self, 0x15c) = src[1];
    lift_field<float>(self, 0x160) = src[2];

    void* child = lift_field<void*>(self, 0x190);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        using SlotFn = void(__thiscall*)(void*);
        reinterpret_cast<SlotFn>(vtbl[0])(child);
    }
}
} // namespace lift_005AA850

// [0x005AD180] sub_005AD180 (55 bytes)
namespace lift_005AD180 {
// @name sub_005AD180
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
void* fn_005AD180() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x2C);
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

    *reinterpret_cast<uint8_t*>(base + 0x28) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x29) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_005AD180

// [0x005ACC50] sub_005ACC50 (57 bytes)
namespace lift_005ACC50 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* __thiscall ext_006657F0(void* self, uint32_t arg);
// Vtable for this object (address of the static vtable in the executable).
extern int mem_0095F594;

// @name Unknown::initWithArgsAndZeroFloats_005ACC50
// @class Unknown
// @summary Calls ext_006657F0(self, 0), stores the second stack argument at +0x10 and the first at +0x14, sets the vtable to mem_0095F594, zeroes +0x18 (int) and the floats at +0x1C..+0x28, and returns self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 int32_t field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void* __thiscall fn_005ACC50(void* self, uint32_t arg0, uint32_t arg1) {
    ext_006657F0(self, 0);
    const float zero = 0.0f;
    lift_field<uint32_t>(self, 0x10) = arg1;
    lift_field<void*>(self, 0x00) = &mem_0095F594;
    lift_field<uint32_t>(self, 0x14) = arg0;
    lift_field<float>(self, 0x28) = zero;
    lift_field<float>(self, 0x24) = zero;
    lift_field<int32_t>(self, 0x18) = 0;
    lift_field<float>(self, 0x20) = zero;
    lift_field<float>(self, 0x1C) = zero;
    return self;
}
} // namespace lift_005ACC50

// [0x005ACEE0] sub_005ACEE0 (57 bytes)
namespace lift_005ACEE0 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* __thiscall ext_006657F0(void* self, uint32_t arg);
// Vtable for this object (address of the static vtable in the executable).
extern int mem_0095F5C4;

// @name Unknown::initWithArgsAndZeroFloats_005ACEE0
// @class Unknown
// @summary Calls ext_006657F0(self, 0), stores the second stack argument at +0x10 and the first at +0x14, sets the vtable to mem_0095F5C4, zeroes +0x18 (int) and the floats at +0x1C..+0x28, and returns self.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 int32_t field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void* __thiscall fn_005ACEE0(void* self, uint32_t arg0, uint32_t arg1) {
    ext_006657F0(self, 0);
    const float zero = 0.0f;
    lift_field<uint32_t>(self, 0x10) = arg1;
    lift_field<void*>(self, 0x00) = &mem_0095F5C4;
    lift_field<uint32_t>(self, 0x14) = arg0;
    lift_field<float>(self, 0x28) = zero;
    lift_field<float>(self, 0x24) = zero;
    lift_field<int32_t>(self, 0x18) = 0;
    lift_field<float>(self, 0x20) = zero;
    lift_field<float>(self, 0x1C) = zero;
    return self;
}
} // namespace lift_005ACEE0

// [0x005AE480]
namespace lift_005AE480 {
// @name ReleaseChainNodes
// @class ChainNode
// @summary Recursively releases a sibling chain: for each node, releases its child chain, destroys its string member, and invokes the cleanup thunk.
// @field ChainNode +0x00 ChainNode* next
// @field ChainNode +0x08 ChainNode* child
// @field ChainNode +0x0c std::string name
// @field ChainNode +0x2d u8 done

extern void ext_006A5C5C(void* node);   // IAT thunk -> MFC80!ord_764
extern uint32_t mem_00924FF4;           // .rdata slot holding basic_string dtor pointer

using StringDtorFn = void(__thiscall*)(void* self);

static inline uint8_t* BytesOf(void* p) { return reinterpret_cast<uint8_t*>(p); }
static inline uint8_t DoneFlag(void* node) { return *(BytesOf(node) + 0x2d); }
static inline void* ChildOf(void* node) { return *reinterpret_cast<void**>(BytesOf(node) + 0x08); }
static inline void* NextOf(void* node) { return *reinterpret_cast<void**>(node); }

void ReleaseChainNodes(void* self, void* node) {
    if (DoneFlag(node) != 0) {
        return;
    }
    void* cur = node;
    do {
        ReleaseChainNodes(self, ChildOf(cur));
        void* next = NextOf(cur);
        auto dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);
        dtor(BytesOf(cur) + 0x0c);
        ext_006A5C5C(cur);
        cur = next;
    } while (DoneFlag(cur) == 0);
}
} // namespace lift_005AE480

// [0x005A2BD0]
namespace lift_005A2BD0 {
// @name DestroyNodeChain
// @summary Walks a linked node chain, recursively processing each node's child at +0x08, destroying the string at +0x0C, calling ext_006A5C5C on the node, and stopping at a node whose +0x39 flag is set.
// @field Unknown +0x00 void* next
// @field Unknown +0x08 void* child
// @field Unknown +0x0C std::string name
// @field Unknown +0x39 uint8_t flag

extern int mem_00924FF4;
extern void __cdecl ext_006A5C5C(void* ptr);
void __thiscall ext_005A2BD0(void* self, void* node);

void __thiscall ext_005A2BD0(void* self, void* node) {
    uint8_t* cur = static_cast<uint8_t*>(node);
    while (!lift_field<uint8_t>(cur, 0x39)) {
        void* child = lift_field<void*>(cur, 0x08);
        ext_005A2BD0(self, child);
        void* next = lift_field<void*>(cur, 0x00);
        auto string_dtor = reinterpret_cast<void(__thiscall*)(void*)>(
            static_cast<uintptr_t>(mem_00924FF4));
        string_dtor(cur + 0x0C);
        ext_006A5C5C(cur);
        cur = static_cast<uint8_t*>(next);
    }
}
} // namespace lift_005A2BD0

// [0x005AAA00] sub_005AAA00 (64 bytes)
namespace lift_005AAA00 {
// Data table of 7 entries (stride 0x1C) at 0x00B42600..0x00B426C4.
extern uint8_t mem_00B42600[0xC4];
// Import slot holding the MSVCP80 std::string operator== (bool(const string&, const string&)).
extern uint32_t mem_00924FC4;

// @name FindStringInTable
// @summary Scans a 7-entry std::string table for a key; returns matching index or 0.
int __stdcall fn_005AAA00(const void* key) {
    using EqFn = bool(__cdecl*)(const void*, const void*);
    const auto eq = reinterpret_cast<EqFn>(static_cast<uintptr_t>(mem_00924FC4));

    const uint8_t* entry = mem_00B42600;
    const uint8_t* const end = mem_00B42600 + 0xC4;
    int index = 0;
    while (entry < end) {
        if (eq(entry, key)) {
            return index;
        }
        entry += 0x1C;
        ++index;
    }
    return 0;
}
} // namespace lift_005AAA00

// [0x005AAD10]
namespace lift_005AAD10 {
// @name ObjectWithChild::SetValueFromStringKey
// @class ObjectWithChild
// @summary Looks up a key in a 7-entry string table and stores the resulting index on the object via setValueAndNotifyChild.

extern int __stdcall ext_005AAA00(const void* key);
extern void ext_005AA830(uint8_t* self, int32_t value);

void fn_005AAD10(uint8_t* self, const void* key) {
    int32_t index = ext_005AAA00(key);
    ext_005AA830(self, index);
}
} // namespace lift_005AAD10

// [0x005ABBE0]
namespace lift_005ABBE0 {
// Known callee 0x005AAD10: ObjectWithChild::SetValueFromStringKey
extern void ext_005AAD10(uint8_t* self, const void* key);

// @name ObjectWithChild::ForwardValueFromStringKeyIfAllowed
// @class ObjectWithChild
// @summary Calls the child's virtual gate (slot 1) when a child is present; if there is no child or the gate returns true, forwards the key to SetValueFromStringKey.
// @field ObjectWithChild +0x190 void* field_0x190
void fn_005ABBE0(uint8_t* self, const void* key) {
    uint8_t* child = lift_field<uint8_t*>(self, 0x190);
    bool allow = true;
    if (child != nullptr) {
        void** vtable = *reinterpret_cast<void***>(child);
        using GateFn = uint8_t(__thiscall*)(void* thisPtr);
        auto gate = reinterpret_cast<GateFn>(vtable[1]);
        allow = gate(child) != 0;
    }
    if (allow) {
        ext_005AAD10(self, key);
    }
}
} // namespace lift_005ABBE0

// [0x005ACB00]
namespace lift_005ACB00 {
// @name Unknown::InitFromVec4_005ACB00
// @class Unknown
// @summary Ctor-style init: calls base InitVtblAndArg(0), sets vtable 0x0095F57C, stores two dwords and copies four floats from the source pointer.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C

extern void* ext_006657F0(void* self, uint32_t arg);

void* fn_005ACB00(void* self, uint32_t a1, uint32_t a2, const void* a3) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    const float* src = reinterpret_cast<const float*>(a3);

    ext_006657F0(self, 0);

    *reinterpret_cast<void**>(base + 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x0095F57Cu));
    *reinterpret_cast<uint32_t*>(base + 0x14) = a1;
    *reinterpret_cast<uint32_t*>(base + 0x10) = 0u;
    *reinterpret_cast<uint32_t*>(base + 0x18) = a2;
    *reinterpret_cast<float*>(base + 0x20) = src[0];
    *reinterpret_cast<uint32_t*>(base + 0x1C) = 0u;
    *reinterpret_cast<float*>(base + 0x24) = src[1];
    *reinterpret_cast<float*>(base + 0x28) = src[2];
    *reinterpret_cast<float*>(base + 0x2C) = src[3];

    return self;
}
} // namespace lift_005ACB00

// [0x005ACD30] Unknown::InitWithFloat4_005ACD30 (77 bytes)
namespace lift_005ACD30 {
extern void* ext_006657F0(void* self, uint32_t arg);

// @name Unknown::InitWithFloat4_005ACD30
// @class Unknown
// @summary Initializes the object: calls base init (ext_006657F0), stores vtable 0x0095F5AC, two uint32 args at +0x14/+0x18, zeroes +0x10/+0x1C, and copies four floats from the input array to +0x20..+0x2C. Returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
void* fn_005ACD30(void* self, uint32_t arg1, uint32_t arg2, const float* values) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    ext_006657F0(self, 0u);

    *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x0095F5ACu;
    *reinterpret_cast<uint32_t*>(obj + 0x14) = arg1;
    *reinterpret_cast<uint32_t*>(obj + 0x10) = 0u;
    *reinterpret_cast<uint32_t*>(obj + 0x18) = arg2;
    *reinterpret_cast<uint32_t*>(obj + 0x1C) = 0u;

    *reinterpret_cast<float*>(obj + 0x20) = values[0];
    *reinterpret_cast<float*>(obj + 0x24) = values[1];
    *reinterpret_cast<float*>(obj + 0x28) = values[2];
    *reinterpret_cast<float*>(obj + 0x2C) = values[3];

    return self;
}
} // namespace lift_005ACD30

// [0x005A9F50] sub_005A9F50 (89 bytes)
namespace lift_005A9F50 {
// Known callee 0x00678520: XMLConverter::XMLConverter (Constructor: installs XMLConverter primary vtable and default-constructs the std::string member at +0x04; returns this.)
extern void* ext_00678520(void* self);
// Import slot 0x00924FE8: std::string default constructor (MSVCP80, __thiscall, ecx = this).
extern void (*mem_00924FE8)(void* self);

// @name XMLConverterSubclass::XMLConverterSubclass
// @class XMLConverterSubclass
// @summary Constructor: runs the XMLConverter base constructor, installs this class's vtable (0x0095EE74), and default-constructs two std::string members at +0x2C and +0x48. Returns this.
// @field XMLConverterSubclass +0x00 void* vtable
// @field XMLConverterSubclass +0x2C std::string field_0x2C
// @field XMLConverterSubclass +0x48 std::string field_0x48
void* fn_005A9F50(void* self) {
    ext_00678520(self);
    lift_field<uintptr_t>(self, 0x00) = 0x0095EE74u;
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x2C);
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x48);
    return self;
}
} // namespace lift_005A9F50

// [0x005A9FB0] sub_005A9FB0 (97 bytes)
namespace lift_005A9FB0 {
// Known callee 0x00678280: Unknown::~Unknown (Destructor: sets the derived vtable, destroys the string member at +0x04, then runs the base-class reset via sub_0065C660.)
extern void ext_00678280(void* self);
// Holds the address of the MSVCP std::string destructor (value 0x00628FF0).
extern uintptr_t mem_00924FF4;

// @name ClassVt95EE74::~ClassVt95EE74
// @class ClassVt95EE74
// @summary Derived destructor: restores this class's vtable, destroys two std::string members (+0x48, then +0x2C), then chains to the Unknown base destructor.
// @field ClassVt95EE74 +0x00 uint32_t vtable
// @field ClassVt95EE74 +0x2C std::string field_0x2c
// @field ClassVt95EE74 +0x48 std::string field_0x48
void fn_005A9FB0(void* self) {
    using StringDtor = void (*)(void*);
    const auto string_dtor = reinterpret_cast<StringDtor>(mem_00924FF4);

    // Restore this class's vtable pointer (0x0095EE74) at offset 0.
    lift_field<uint32_t>(self, 0x00) = 0x0095EE74u;

    // Destroy string member at +0x48, then the string member at +0x2C.
    string_dtor(static_cast<uint8_t*>(self) + 0x48);
    string_dtor(static_cast<uint8_t*>(self) + 0x2C);

    // Chain to the base-class destructor Unknown::~Unknown.
    ext_00678280(self);
}
} // namespace lift_005A9FB0

// [0x005A0200] sub_005A0200 (53 bytes)
namespace lift_005A0200 {
// Known callee 0x0059FDE0: copyStringRangeFromTreeIterator (Walks a red-black tree range from (container, node) up to endNode, assigning each node's std::string at +0x0C into consecutive 0x1C-byte output slots and advancing the iterator; returns the final output pointer.)
// The caller pushes eight words; the callee reads only the first five (its lifted signature).
extern void* ext_0059FDE0(void* container, void* node, void* expectedContainer, void* endNode, std::string* out);

// @name copyStringRangeFromTreeIteratorWrapper
// @summary Argument-shuffling forwarder to copyStringRangeFromTreeIterator (0x0059FDE0); returns its result unchanged.
void* fn_005A0200(void* container, void* node, void* expectedContainer, void* endNode, std::string* out) {
    return ext_0059FDE0(container, node, expectedContainer, endNode, out);
}
} // namespace lift_005A0200

// [0x005AC360]
namespace lift_005AC360 {
// @name Matrix44::Matrix44_fromVec4s
// @class Matrix44
// @summary Initializes a 4x4 float matrix from four 4-float vector pointers and returns this.
// @field Matrix44 +0x00 float[16] m


void* __thiscall sub_005AC360(void* self, const float* row0, const float* row1, const float* row2, const float* row3) {
    float* dst = reinterpret_cast<float*>(self);
    const float* rows[4] = { row0, row1, row2, row3 };
    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 4; ++c) {
            dst[r * 4 + c] = rows[r][c];
        }
    }
    return self;
}
} // namespace lift_005AC360

// [0x005A0380] sub_005A0380 (61 bytes)
namespace lift_005A0380 {
// @name sub_005A0380
// @summary Auto-lifted identical-shape clone of 0x0046A4D0 (advanceIteratorCounted).
namespace lift_0046A4D0 {
// Known callee 0x00474FF0: sub_00474FF0 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00673C20(void* self);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void (*mem_00925134)();

// @name advanceIteratorCounted
// @summary Advances an iterator with TreeIterator::increment until it equals `last`, incrementing `*counter` once per step; asserts the iterator is non-null and equal to `guard` before each step.
void fn_005A0380(void* it, void* last, void* guard, void* end, int32_t* counter) {
    for (;;) {
        if (it == nullptr || it != guard) {
            mem_00925134();
        }
        if (last == end) {
            return;
        }
        ++*counter;
        ext_00673C20(&it);
    }
}
} // namespace lift_0046A4D0
} // namespace lift_005A0380

// [0x005A07A0] sub_005A07A0 (105 bytes)
namespace lift_005A07A0 {
// @name sub_005A07A0
// @summary Auto-lifted identical-shape clone of 0x0059B2E0 (TreeMap::find).
namespace lift_0059B2E0 {
// @name TreeMap::find
// @class TreeMap
// @summary Finds a string key in the red-black tree map and writes an iterator pair (map, node) to out_iter.
// @field TreeMap +0x04 void* head


extern void* ext_0055C490(void* self, const void* key);
extern void (*mem_00925134)(void);
extern uint8_t (*mem_00924EF4)(const void* lhs, const void* rhs);

void* fn_005A07A0(void* self, void* out_iter, const void* key) {
    void* node = ext_0055C490(self, key);
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
} // namespace lift_005A07A0

// [0x005A3610] sub_005A3610 (8 bytes)
namespace lift_005A3610 {
// @name sub_005A3610
// @summary Auto-lifted identical-shape clone of 0x0044C940 (sub_0044C940).
namespace lift_0044C940 {
// @name sub_0044C940
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_005A1070(void* arg);

void fn_005A3610() {
    ext_005A1070(reinterpret_cast<void*>(static_cast<uintptr_t>(3)));
}
} // namespace lift_00437DE0
} // namespace lift_0044C940
} // namespace lift_005A3610

// [0x005A9E70] sub_005A9E70 (89 bytes)
namespace lift_005A9E70 {
// @name sub_005A9E70
// @summary Auto-lifted identical-shape clone of 0x005A9F50 (XMLConverterSubclass::XMLConverterSubclass).
namespace lift_005A9F50 {
// Known callee 0x00678520: XMLConverter::XMLConverter (Constructor: installs XMLConverter primary vtable and default-constructs the std::string member at +0x04; returns this.)
extern void* ext_00678520(void* self);
// Import slot 0x00924FE8: std::string default constructor (MSVCP80, __thiscall, ecx = this).
extern void (*mem_00924FE8)(void* self);

// @name XMLConverterSubclass::XMLConverterSubclass
// @class XMLConverterSubclass
// @summary Constructor: runs the XMLConverter base constructor, installs this class's vtable (0x0095EE74), and default-constructs two std::string members at +0x2C and +0x48. Returns this.
// @field XMLConverterSubclass +0x00 void* vtable
// @field XMLConverterSubclass +0x2C std::string field_0x2C
// @field XMLConverterSubclass +0x48 std::string field_0x48
void* fn_005A9E70(void* self) {
    ext_00678520(self);
    lift_field<uintptr_t>(self, 0x00) = 0x95EE1Cu;
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x2C);
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x48);
    return self;
}
} // namespace lift_005A9F50
} // namespace lift_005A9E70

// [0x005A9EE0] sub_005A9EE0 (97 bytes)
namespace lift_005A9EE0 {
// @name sub_005A9EE0
// @summary Auto-lifted identical-shape clone of 0x005A9FB0 (ClassVt95EE74::~ClassVt95EE74).
namespace lift_005A9FB0 {
// Known callee 0x00678280: Unknown::~Unknown (Destructor: sets the derived vtable, destroys the string member at +0x04, then runs the base-class reset via sub_0065C660.)
extern void ext_00678280(void* self);
// Holds the address of the MSVCP std::string destructor (value 0x00628FF0).
extern uintptr_t mem_00924FF4;

// @name ClassVt95EE74::~ClassVt95EE74
// @class ClassVt95EE74
// @summary Derived destructor: restores this class's vtable, destroys two std::string members (+0x48, then +0x2C), then chains to the Unknown base destructor.
// @field ClassVt95EE74 +0x00 uint32_t vtable
// @field ClassVt95EE74 +0x2C std::string field_0x2c
// @field ClassVt95EE74 +0x48 std::string field_0x48
void fn_005A9EE0(void* self) {
    using StringDtor = void (*)(void*);
    const auto string_dtor = reinterpret_cast<StringDtor>(mem_00924FF4);

    // Restore this class's vtable pointer (0x0095EE74) at offset 0.
    lift_field<uint32_t>(self, 0x00) = 0x95EE1Cu;

    // Destroy string member at +0x48, then the string member at +0x2C.
    string_dtor(static_cast<uint8_t*>(self) + 0x48);
    string_dtor(static_cast<uint8_t*>(self) + 0x2C);

    // Chain to the base-class destructor Unknown::~Unknown.
    ext_00678280(self);
}
} // namespace lift_005A9FB0
} // namespace lift_005A9EE0

// [0x005AC8C0] sub_005AC8C0 (108 bytes)
namespace lift_005AC8C0 {
// @name sub_005AC8C0
// @summary Auto-lifted identical-shape clone of 0x00624DC0 (TreeConstIterator::operator++).
namespace lift_00624DC0 {
// IAT slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called on debug-iterator misuse).
extern void (*mem_00925134)();

// Node addresses are stored as 32-bit values to match the original layout.
static inline void* node_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name TreeConstIterator::operator++
// @class TreeConstIterator
// @summary Debug-checked MSVC std::_Tree const iterator increment: advances to the in-order successor node.
// @field TreeConstIterator +0x00 uint32_t container
// @field TreeConstIterator +0x04 uint32_t node
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t parent
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x19 uint8_t isnil
void fn_005AC8C0(void* self) {
    if (lift_field<uint32_t>(self, 0) == 0) {
        mem_00925134();
    }

    uint32_t node = lift_field<uint32_t>(self, 4);
    if (lift_field<uint8_t>(node_ptr(node), 0x29) != 0) {
        // Incrementing the head/end sentinel is invalid.
        mem_00925134();
        return;
    }

    uint32_t right = lift_field<uint32_t>(node_ptr(node), 0x08);
    if (lift_field<uint8_t>(node_ptr(right), 0x29) == 0) {
        // Successor is the leftmost node of the right subtree.
        uint32_t cur = right;
        for (;;) {
            uint32_t left = lift_field<uint32_t>(node_ptr(cur), 0x00);
            if (lift_field<uint8_t>(node_ptr(left), 0x29) != 0) {
                break;
            }
            cur = left;
        }
        lift_field<uint32_t>(self, 4) = cur;
        return;
    }

    // No right subtree: climb until we come from a left child.
    uint32_t par = lift_field<uint32_t>(node_ptr(node), 0x04);
    if (lift_field<uint8_t>(node_ptr(par), 0x29) == 0) {
        for (;;) {
            uint32_t curPtr = lift_field<uint32_t>(self, 4);
            if (curPtr != lift_field<uint32_t>(node_ptr(par), 0x08)) {
                break;
            }
            lift_field<uint32_t>(self, 4) = par;
            uint32_t gp = lift_field<uint32_t>(node_ptr(par), 0x04);
            par = gp;
            if (lift_field<uint8_t>(node_ptr(gp), 0x29) != 0) {
                break;
            }
        }
    }
    lift_field<uint32_t>(self, 4) = par;
}
} // namespace lift_00624DC0
} // namespace lift_005AC8C0

// [0x005ACD80] sub_005ACD80 (83 bytes)
namespace lift_005ACD80 {
// @name sub_005ACD80
// @summary Auto-lifted identical-shape clone of 0x0048E310 (Unknown::resetChildAndRefresh_0048E310).
namespace lift_0048E310 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void ext_00665810(void* self);

// @name Unknown::resetChildAndRefresh_0048E310
// @class Unknown
// @summary Releases the object held at +0x14 (via its vtable slot 0 with flag 1) and then calls ext_00665810 on self.
// @field Unknown +0x14 void* field_0x14
struct Unknown {
    unsigned char _pad_0000[0x1C];
    void* field_0x14;
};

void fn_005ACD80(void* self) {
    auto* obj = static_cast<Unknown*>(self);
    void* child = obj->field_0x14;
    if (child != nullptr) {
        void** vtbl = *static_cast<void***>(child);
        reinterpret_cast<void (*)(void*, int)>(vtbl[0])(child, 1);
    }
    ext_00665810(self);
}
} // namespace lift_0048E310
} // namespace lift_005ACD80

// [0x005AD010] sub_005AD010 (70 bytes)
namespace lift_005AD010 {
// @name sub_005AD010
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
void* __thiscall fn_005AD010(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x4);
    void* node = lift_field<void*>(head, 0x4);  // root
    void* result = head;                         // end() if nothing qualifies

    if (lift_field<uint8_t>(node, 0x29) != 0) {
        return head;
    }

    KeyLess less = reinterpret_cast<KeyLess>(static_cast<uintptr_t>(mem_00924EF4));
    while (lift_field<uint8_t>(node, 0x29) == 0) {
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
} // namespace lift_005AD010

// [0x005AE100] sub_005AE100 (105 bytes)
namespace lift_005AE100 {
// @name sub_005AE100
// @summary Auto-lifted identical-shape clone of 0x0059B2E0 (TreeMap::find).
namespace lift_0059B2E0 {
// @name TreeMap::find
// @class TreeMap
// @summary Finds a string key in the red-black tree map and writes an iterator pair (map, node) to out_iter.
// @field TreeMap +0x04 void* head


extern void* ext_005AD010(void* self, const void* key);
extern void (*mem_00925134)(void);
extern uint8_t (*mem_00924EF4)(const void* lhs, const void* rhs);

void* fn_005AE100(void* self, void* out_iter, const void* key) {
    void* node = ext_005AD010(self, key);
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
} // namespace lift_005AE100

// [0x005AD1C0]
namespace lift_005AD1C0 {
// @name fill_qword_range
// @summary Fills a range [first, last) with an 8-byte value pointed to by val.


uint32_t sub_005AD1C0(uint32_t first, uint32_t last, const uint32_t* val) {
    uint32_t cur = first;
    if (cur == last) {
        return cur;
    }
    do {
        *reinterpret_cast<uint32_t*>(cur) = val[0];
        *reinterpret_cast<uint32_t*>(cur + 4) = val[1];
        cur += 8;
    } while (cur != last);
    return cur;
}
} // namespace lift_005AD1C0

// [0x005AE170] sub_005AE170 (62 bytes)
namespace lift_005AE170 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* self);
// IAT slot 0x00924FF4: std::basic_string<char> destructor (MSVCP80), called thiscall with no args.
extern uintptr_t mem_00924FF4;

// @name UnknownNode::ProcessChainRecursive
// @class UnknownNode
// @summary Walks a linked chain of nodes via the +0x00 link, recursing into the +0x08 child and destroying each node's +0x0C string until a node with flag +0x29 set is reached.
// @field UnknownNode +0x00 void* field_0x00
// @field UnknownNode +0x08 void* field_0x08
// @field UnknownNode +0x0C std::string field_0x0C
// @field UnknownNode +0x29 uint8_t field_0x29
void __thiscall fn_005AE170(void* self, void* arg) {
    void* edi = arg;
    void* esi;

    while (lift_field<uint8_t>(edi, 0x29) == 0) {
        // push [edi+8]; mov ecx, self; call fn_005AE170
        fn_005AE170(self, lift_field<void*>(edi, 0x08));

        esi = lift_field<void*>(edi, 0x00);

        // lea ecx, [edi+0xc]; call ~basic_string
        reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(
            static_cast<void*>(&lift_field<uint8_t>(edi, 0x0C)));

        // push edi; call thunk_MFC80_ord_764; add esp,4
        ext_006A5C5C(edi);

        edi = esi;
    }
}
} // namespace lift_005AE170

// [0x005A71E0]
namespace lift_005A71E0 {
// @name sub_005A71E0
// @summary Constructor initializing vtable, std::string at +0x04, and empty RB-tree at +0x20
// @field Self +0x00 uint32_t vtable
// @field Self +0x04 std::string field_0x04
// @field Self +0x20 void* tree_base
// @field Self +0x24 void* tree_head
// @field Self +0x28 uint32_t tree_size

extern void* __thiscall ext_0059F5C0(void* self);
extern void* (__thiscall *mem_00924FE8)(void* self);

extern void* __thiscall sub_005A71E0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    lift_field<uint32_t>(obj, 0x00) = 0x0095E870u;

    mem_00924FE8(obj + 0x04);

    uint8_t* tree = obj + 0x20;
    uint8_t* head = static_cast<uint8_t*>(ext_0059F5C0(tree));
    lift_field<void*>(tree, 0x04) = head;
    lift_field<uint8_t>(head, 0x2D) = 1;
    lift_field<void*>(head, 0x04) = head;
    lift_field<void*>(head, 0x00) = head;
    lift_field<void*>(head, 0x08) = head;
    lift_field<uint32_t>(tree, 0x08) = 0;

    return self;
}
} // namespace lift_005A71E0

// [0x005A1600] sub_005A1600 (59 bytes)
namespace lift_005A1600 {
// Known callee 0x005B8EA0: forEachNodeCallWithOffset (Iterates a checked node cursor range, invoking a member-style callback with (node->field_0x28 + offset))
struct ResultPair005B8EA0 {
    void* fn;
    uint32_t offset;
};

extern void* ext_005B8EA0(
    ResultPair005B8EA0* out_result,
    void* first_container,
    void* first_node,
    void* last_container,
    void* last_node,
    void* fn_ptr,
    uint32_t offset);

// @name Unknown::forEachNodeInRange_005A1600
// @class Unknown
// @summary If the flag at +0x5EC is set, runs forEachNodeCallWithOffset over the node range at +0x598 with callback 0x5B67A0 and zero offset.
// @field Unknown +0x598 uint8_t field_0x598
// @field Unknown +0x59C void* field_0x59C
// @field Unknown +0x5EC int32_t field_0x5ec
void fn_005A1600(void* self) {
    if (lift_field<int32_t>(self, 0x5EC) == 0) {
        return;
    }

    uint8_t* container = reinterpret_cast<uint8_t*>(self) + 0x598;
    void* last_node = lift_field<void*>(self, 0x59C);
    void* first_node = *reinterpret_cast<void**>(last_node);

    ResultPair005B8EA0 result{};
    ext_005B8EA0(
        &result,
        container,
        first_node,
        container,
        last_node,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x005B67A0u)),
        0u);
}
} // namespace lift_005A1600

// [0x005AD0E0]
namespace lift_005AD0E0 {
// @name allocAndInitNode_005AD0E0
// @summary Allocates a 0x2c-byte object, initializes its fields and std::string member, and frees/rethrows on exception.
// @field Node +0x00 uint32_t field_0x00
// @field Node +0x04 uint32_t field_0x04
// @field Node +0x08 uint32_t field_0x08
// @field Node +0x0C uint8_t[0x1C] field_0x0C_std_string
// @field Node +0x28 uint8_t field_0x28
// @field Node +0x29 uint8_t field_0x29

extern void* __cdecl ext_006A5C62(uint32_t size);
extern void __cdecl ext_006A5C5C(void* ptr);
extern void __stdcall ext_006A6DD2(uint32_t pExceptionObject, uint32_t pThrowInfo);
extern void* mem_00924FE0;

extern void* __stdcall fn_005AD0E0(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint8_t a5) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(ext_006A5C62(0x2c));
    if (obj != nullptr) {
        try {
            *reinterpret_cast<uint32_t*>(obj + 0x00) = a1;
            *reinterpret_cast<uint32_t*>(obj + 0x04) = a2;
            *reinterpret_cast<uint32_t*>(obj + 0x08) = a3;
            using StringCopyCtor = void(__thiscall*)(void*, uint32_t);
            reinterpret_cast<StringCopyCtor>(mem_00924FE0)(obj + 0x0c, a4);
            *reinterpret_cast<uint8_t*>(obj + 0x28) = a5;
            *reinterpret_cast<uint8_t*>(obj + 0x29) = 0;
        } catch (...) {
            ext_006A5C5C(obj);
            ext_006A6DD2(0, 0);
        }
    }
    return obj;
}
} // namespace lift_005AD0E0

// [0x005AC4D0] sub_005AC4D0 (125 bytes)
namespace lift_005AC4D0 {
// Known callee 0x00664A80: replaceString (Replaces occurrences of a substring in a std::string and returns the replacement count.)
extern int ext_00664A80(void* str, const char* find_str, const char* replace_str, bool only_first);
// MSVCP80 std::basic_string<char> copy constructor and destructor, reached through their IAT slots.
extern int mem_00924FE0;
extern int mem_00924FF4;
// Data slots holding the .rdata string literal addresses used as find / replace.
extern int mem_00A88880;
extern int mem_00A88884;

// @name ReplaceAllInStringCopy
// @summary Copies the by-value std::string argument into the hidden return slot after running replaceString on it (find/replace literals from data slots, only_first = false), then destroys the temporary.
// (No direct field accesses: the function only touches the std::string objects through their MSVCP80 member functions.)
void* fn_005AC4D0(void* dst, void* src) {
    using CopyCtorFn = void(__thiscall*)(void* self, const void* other);
    using DtorFn = void(__thiscall*)(void* self);

    const char* find_str =
        reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A88880)));
    const char* replace_str =
        reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A88884)));

    // replaceString(&src, find, replace, false); the count result is unused.
    (void)ext_00664A80(src, find_str, replace_str, false);

    // dst->basic_string(src)
    auto copy_ctor = reinterpret_cast<CopyCtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)));
    copy_ctor(dst, src);

    // src->~basic_string()
    auto dtor = reinterpret_cast<DtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(src);

    return dst;
}
} // namespace lift_005AC4D0

// [0x005A6E20] sub_005A6E20 (59 bytes)
namespace lift_005A6E20 {
// @name sub_005A6E20
// @summary Auto-lifted identical-shape clone of 0x0042E820 (UnknownClass::resetAndRelease).
namespace lift_0042E820 {
// Callee 0x0042C770: sub_0042C770 (thiscall-style, 5 stack args, callee-cleaned)
extern void ext_005A5690(void* self, void* out, void* a2, uint32_t a3, void* a4, void* a5);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);
extern int mem_0095E808;

// @name UnknownClass::resetAndRelease
// @class UnknownClass
// @summary Installs vtable at +0x00, calls sub_0042C770 with the pointer at +0x08, passes that pointer to thunk_MFC80_ord_764, then clears +0x08 and +0x0C.
// @field UnknownClass +0x00 uint32_t field_0x00
// @field UnknownClass +0x08 void* field_0x08
// @field UnknownClass +0x0C uint32_t field_0x0C
void fn_005A6E20(void* self) {
    // esi = ecx + 4
    void* const sub = static_cast<uint8_t*>(self) + 4;

    // mov dword ptr [ecx], 0x92f330
    lift_field<uint32_t>(self, 0x00) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0095E808));

    // eax = [esi+4] (= [ecx+8]); ecx = [eax]
    void* const p = lift_field<void*>(self, 0x08);
    const uint32_t pval = lift_field<uint32_t>(p, 0);

    uint32_t local[2] = {0, 0};  // [esp+0x0] .. reserved by "sub esp, 8"
    ext_005A5690(sub, local, sub, pval, sub, p);

    // push [esi+4]; call thunk; add esp, 4
    ext_006A5C5C(lift_field<uint32_t>(self, 0x08));

    // [esi+4] = 0; [esi+8] = 0
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_0042E820
} // namespace lift_005A6E20

// [0x005A6E60] sub_005A6E60 (114 bytes)
namespace lift_005A6E60 {
// @name sub_005A6E60
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_0059E9C0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_005A6E60(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_0059E9C0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_005A6E60

// [0x005A6EE0] sub_005A6EE0 (114 bytes)
namespace lift_005A6EE0 {
// @name sub_005A6EE0
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_0059EA20();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_005A6EE0(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_0059EA20();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_005A6EE0

// [0x005A6F60] sub_005A6F60 (114 bytes)
namespace lift_005A6F60 {
// @name sub_005A6F60
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_0059EA80();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_005A6F60(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_0059EA80();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_005A6F60

// [0x005A6FE0] sub_005A6FE0 (114 bytes)
namespace lift_005A6FE0 {
// @name sub_005A6FE0
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_0059EAE0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_005A6FE0(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_0059EAE0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_005A6FE0

// [0x005A9C90] sub_005A9C90 (140 bytes)
namespace lift_005A9C90 {
// @name sub_005A9C90
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
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

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_005A9C90(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA88248u)));

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
} // namespace lift_00476430
} // namespace lift_005A9C90

// [0x005AC190] sub_005AC190 (140 bytes)
namespace lift_005AC190 {
// @name sub_005AC190
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
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

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_005AC190(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA88844u)));

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
} // namespace lift_00476430
} // namespace lift_005AC190

// [0x005AFAF0] sub_005AFAF0 (59 bytes)
namespace lift_005AFAF0 {
// @name sub_005AFAF0
// @summary Auto-lifted identical-shape clone of 0x0042E820 (UnknownClass::resetAndRelease).
namespace lift_0042E820 {
// Callee 0x0042C770: sub_0042C770 (thiscall-style, 5 stack args, callee-cleaned)
extern void ext_005AEC70(void* self, void* out, void* a2, uint32_t a3, void* a4, void* a5);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);
extern int mem_0095F6C4;

// @name UnknownClass::resetAndRelease
// @class UnknownClass
// @summary Installs vtable at +0x00, calls sub_0042C770 with the pointer at +0x08, passes that pointer to thunk_MFC80_ord_764, then clears +0x08 and +0x0C.
// @field UnknownClass +0x00 uint32_t field_0x00
// @field UnknownClass +0x08 void* field_0x08
// @field UnknownClass +0x0C uint32_t field_0x0C
void fn_005AFAF0(void* self) {
    // esi = ecx + 4
    void* const sub = static_cast<uint8_t*>(self) + 4;

    // mov dword ptr [ecx], 0x92f330
    lift_field<uint32_t>(self, 0x00) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0095F6C4));

    // eax = [esi+4] (= [ecx+8]); ecx = [eax]
    void* const p = lift_field<void*>(self, 0x08);
    const uint32_t pval = lift_field<uint32_t>(p, 0);

    uint32_t local[2] = {0, 0};  // [esp+0x0] .. reserved by "sub esp, 8"
    ext_005AEC70(sub, local, sub, pval, sub, p);

    // push [esi+4]; call thunk; add esp, 4
    ext_006A5C5C(lift_field<uint32_t>(self, 0x08));

    // [esi+4] = 0; [esi+8] = 0
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_0042E820
} // namespace lift_005AFAF0

// [0x005AED40] sub_005AED40 (52 bytes)
namespace lift_005AED40 {
extern void ext_006A5C5C(void* arg);

// @name sub_005AED40
// @summary Auto-lifted identical-shape clone of 0x0048AFE0 (ResetSubObjectLinks_0048AFE0).
namespace lift_0048AFE0 {
// Callee 0x0048AC80 (sub_0048AC80): __thiscall, ecx = this, five stack args
// (out buffer, this, *(this+4) dword, this, this+4 pointer). Callee cleans stack.
extern void __thiscall ext_005AE4E0(uint32_t self, uint32_t out, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// cdecl, one stack argument, caller cleans.
extern void ext_006A5C5C(uint32_t arg);

// @name ResetSubObjectLinks_0048AFE0
// @class SubObject
// @summary Calls 0x0048AC80 with the object's linked pointer, passes the linked pointer to 0x006A5C5C, then zeroes the two link dwords at +0x4 and +0x8.
// @field SubObject +0x04 uint32_t field_0x04
// @field SubObject +0x08 uint32_t field_0x08
void fn_005AED40(void* self) {
    const uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // mov eax, [esi+4]; mov ecx, [eax]
    const uint32_t link = lift_field<uint32_t>(self, 0x4);
    const uint32_t first_dword = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(link)), 0);

    // Five stack args to 0x0048AC80; out buffer is the 8-byte frame local (result unused).
    uint32_t out[2] = {0, 0};
    ext_005AE4E0(self_addr,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out)),
                 self_addr,
                 first_dword,
                 self_addr,
                 link);

    // mov ecx, [esi+4]; push ecx; call 0x006A5C5C; add esp, 4 (re-read: callee may change it)
    ext_006A5C5C(lift_field<uint32_t>(self, 0x4));

    // xor eax, eax; mov [esi+4], eax; mov [esi+8], eax
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
}
} // namespace lift_0048AFE0
} // namespace lift_005AED40

// [0x005A0640] sub_005A0640 (168 bytes)
namespace lift_005A0640 {
// @name sub_005A0640
// @summary Auto-lifted identical-shape clone of 0x00479620 (ResolveOrThrowMissing).
namespace lift_00479620 {
// Callee 0x005DF5C0: thiscall(self) -> void* (non-null means "found").
extern void* __thiscall ext_005DF5C0(void* self);
// Callee 0x0041FF30: thiscall(self = exception object, msg, other); callee pops its 2 stack args.
extern void __thiscall ext_0041FF30(void* self, void* msg, void* other);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* obj, const void* throw_info);

// IAT slots (MSVCP80 std::string): copy-ctor, ctor(const char*), dtor.
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE4;
// .data global holding a const char* used to build the message string.
extern uint32_t mem_00A2E458;

namespace {
using CopyCtorFn = void(__thiscall*)(void* self, const void* src);
using CharCtorFn = void(__thiscall*)(void* self, const char* src);
using DtorFn = void(__thiscall*)(void* self);
} // namespace

// @name ResolveOrThrowMissing
// @summary Copies the std::string argument into a local, calls sub_005DF5C0(self); returns its non-null result, otherwise builds an error string from a global and throws it.
void* fn_005A0640(void* self, const void* arg0) {
    // Local frame, addressed with the same offsets as the original esp-relative slots:
    //   +0x00 string copy of arg0, +0x08 message string, +0x24 exception object,
    //   +0x70 unwind state, +0x78 string slot.
    unsigned char frame[0x9C] = {};

    reinterpret_cast<CopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0))(frame, arg0);

    void* result = ext_005DF5C0(self);
    if (result != nullptr) {
        lift_field<int32_t>(frame, 0x70) = -1;
        reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(frame + 0x78);
        return result;
    }

    const char* message = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A2E458));
    reinterpret_cast<CharCtorFn>(static_cast<uintptr_t>(mem_00924FE4))(frame + 0x08, message);
    lift_field<uint8_t>(frame, 0x70) = 1;
    ext_0041FF30(frame + 0x24, frame + 0x08, frame + 0x78);
    // Throw with the RTTI/ThrowInfo immediate 0x009D3748.
    ext_006A6DD2(frame + 0x24, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009D3748u)));
}
} // namespace lift_00479620
} // namespace lift_005A0640

// [0x005A06F0] sub_005A06F0 (168 bytes)
namespace lift_005A06F0 {
// @name sub_005A06F0
// @summary Auto-lifted identical-shape clone of 0x00479620 (ResolveOrThrowMissing).
namespace lift_00479620 {
// Callee 0x005DF5C0: thiscall(self) -> void* (non-null means "found").
extern void* __thiscall ext_005DF5C0(void* self);
// Callee 0x0041FF30: thiscall(self = exception object, msg, other); callee pops its 2 stack args.
extern void __thiscall ext_0041FF30(void* self, void* msg, void* other);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* obj, const void* throw_info);

// IAT slots (MSVCP80 std::string): copy-ctor, ctor(const char*), dtor.
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE4;
// .data global holding a const char* used to build the message string.
extern uint32_t mem_00A9FB00;

namespace {
using CopyCtorFn = void(__thiscall*)(void* self, const void* src);
using CharCtorFn = void(__thiscall*)(void* self, const char* src);
using DtorFn = void(__thiscall*)(void* self);
} // namespace

// @name ResolveOrThrowMissing
// @summary Copies the std::string argument into a local, calls sub_005DF5C0(self); returns its non-null result, otherwise builds an error string from a global and throws it.
void* fn_005A06F0(void* self, const void* arg0) {
    // Local frame, addressed with the same offsets as the original esp-relative slots:
    //   +0x00 string copy of arg0, +0x08 message string, +0x24 exception object,
    //   +0x70 unwind state, +0x78 string slot.
    unsigned char frame[0x9C] = {};

    reinterpret_cast<CopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0))(frame, arg0);

    void* result = ext_005DF5C0(self);
    if (result != nullptr) {
        lift_field<int32_t>(frame, 0x70) = -1;
        reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(frame + 0x78);
        return result;
    }

    const char* message = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FB00));
    reinterpret_cast<CharCtorFn>(static_cast<uintptr_t>(mem_00924FE4))(frame + 0x08, message);
    lift_field<uint8_t>(frame, 0x70) = 1;
    ext_0041FF30(frame + 0x24, frame + 0x08, frame + 0x78);
    // Throw with the RTTI/ThrowInfo immediate 0x009D3748.
    ext_006A6DD2(frame + 0x24, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009D3748u)));
}
} // namespace lift_00479620
} // namespace lift_005A06F0

// [0x005A1F90] sub_005A1F90 (168 bytes)
namespace lift_005A1F90 {
// @name sub_005A1F90
// @summary Auto-lifted identical-shape clone of 0x00479620 (ResolveOrThrowMissing).
namespace lift_00479620 {
// Callee 0x005DF5C0: thiscall(self) -> void* (non-null means "found").
extern void* __thiscall ext_005DF5C0(void* self);
// Callee 0x0041FF30: thiscall(self = exception object, msg, other); callee pops its 2 stack args.
extern void __thiscall ext_0041FF30(void* self, void* msg, void* other);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* obj, const void* throw_info);

// IAT slots (MSVCP80 std::string): copy-ctor, ctor(const char*), dtor.
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE4;
// .data global holding a const char* used to build the message string.
extern uint32_t mem_00A2E464;

namespace {
using CopyCtorFn = void(__thiscall*)(void* self, const void* src);
using CharCtorFn = void(__thiscall*)(void* self, const char* src);
using DtorFn = void(__thiscall*)(void* self);
} // namespace

// @name ResolveOrThrowMissing
// @summary Copies the std::string argument into a local, calls sub_005DF5C0(self); returns its non-null result, otherwise builds an error string from a global and throws it.
void* fn_005A1F90(void* self, const void* arg0) {
    // Local frame, addressed with the same offsets as the original esp-relative slots:
    //   +0x00 string copy of arg0, +0x08 message string, +0x24 exception object,
    //   +0x70 unwind state, +0x78 string slot.
    unsigned char frame[0x9C] = {};

    reinterpret_cast<CopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0))(frame, arg0);

    void* result = ext_005DF5C0(self);
    if (result != nullptr) {
        lift_field<int32_t>(frame, 0x70) = -1;
        reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(frame + 0x78);
        return result;
    }

    const char* message = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A2E464));
    reinterpret_cast<CharCtorFn>(static_cast<uintptr_t>(mem_00924FE4))(frame + 0x08, message);
    lift_field<uint8_t>(frame, 0x70) = 1;
    ext_0041FF30(frame + 0x24, frame + 0x08, frame + 0x78);
    // Throw with the RTTI/ThrowInfo immediate 0x009D3748.
    ext_006A6DD2(frame + 0x24, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009D3748u)));
}
} // namespace lift_00479620
} // namespace lift_005A1F90

// [0x005A6650] sub_005A6650 (126 bytes)
namespace lift_005A6650 {
// @name sub_005A6650
// @summary Auto-lifted identical-shape clone of 0x004151D0 (ReleaseOwnedNode_004151D0).
namespace lift_004151D0 {
// Known callee 0x00414E60: TreeIterator::releaseChildrenUntil (thiscall: ecx = this, then four stack words).
extern void ext_005A0910(uint32_t ecx, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
// Callee 0x005DF840 (thiscall: ecx = this, then five stack words; a0 is an out-slot pointer).
extern void ext_005AEC70(uint32_t ecx, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764, cdecl, one arg).
extern void ext_006A5C5C(uint32_t p);
// SEH scope table referenced only by the frame prologue/epilogue (boilerplate).
extern int mem_00875928;

// @name ReleaseOwnedNode_004151D0
// @summary Thiscall: reads the owned pointer at +0x04, walks it via ext_00414E60 and ext_005DF840 (re-reading the pointer and its first dword before each), releases the pointer via ext_006A5C5C, then zeroes +0x04 and +0x08.
// @class Unknown
// @field Unknown +0x04 uint32_t ownedPtr
// @field Unknown +0x08 uint32_t field_0x08
void fn_005A6650(void* self) {
    (void)&mem_00875928;

    // First pass: ext_00414E60(this, this, *owned, this, owned)
    uint32_t p1 = lift_field<uint32_t>(self, 0x04);
    uint32_t v1 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(p1));
    uint32_t self32 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    ext_005A0910(self32, self32, v1, self32, p1);

    // Second pass: ext_005DF840(this, &out, this, *owned, this, owned)
    uint32_t p2 = lift_field<uint32_t>(self, 0x04);
    uint32_t v2 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(p2));
    uint32_t out = 0;
    ext_005AEC70(self32, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&out)),
                 self32, v2, self32, p2);

    // Release the owned pointer, then clear the fields.
    ext_006A5C5C(lift_field<uint32_t>(self, 0x04));
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
}
} // namespace lift_004151D0
} // namespace lift_005A6650

// [0x005A66D0] sub_005A66D0 (126 bytes)
namespace lift_005A66D0 {
// @name sub_005A66D0
// @summary Auto-lifted identical-shape clone of 0x004151D0 (ReleaseOwnedNode_004151D0).
namespace lift_004151D0 {
// Known callee 0x00414E60: TreeIterator::releaseChildrenUntil (thiscall: ecx = this, then four stack words).
extern void ext_005A0970(uint32_t ecx, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
// Callee 0x005DF840 (thiscall: ecx = this, then five stack words; a0 is an out-slot pointer).
extern void ext_005AEC70(uint32_t ecx, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764, cdecl, one arg).
extern void ext_006A5C5C(uint32_t p);
// SEH scope table referenced only by the frame prologue/epilogue (boilerplate).
extern int mem_00875928;

// @name ReleaseOwnedNode_004151D0
// @summary Thiscall: reads the owned pointer at +0x04, walks it via ext_00414E60 and ext_005DF840 (re-reading the pointer and its first dword before each), releases the pointer via ext_006A5C5C, then zeroes +0x04 and +0x08.
// @class Unknown
// @field Unknown +0x04 uint32_t ownedPtr
// @field Unknown +0x08 uint32_t field_0x08
void fn_005A66D0(void* self) {
    (void)&mem_00875928;

    // First pass: ext_00414E60(this, this, *owned, this, owned)
    uint32_t p1 = lift_field<uint32_t>(self, 0x04);
    uint32_t v1 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(p1));
    uint32_t self32 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    ext_005A0970(self32, self32, v1, self32, p1);

    // Second pass: ext_005DF840(this, &out, this, *owned, this, owned)
    uint32_t p2 = lift_field<uint32_t>(self, 0x04);
    uint32_t v2 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(p2));
    uint32_t out = 0;
    ext_005AEC70(self32, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&out)),
                 self32, v2, self32, p2);

    // Release the owned pointer, then clear the fields.
    ext_006A5C5C(lift_field<uint32_t>(self, 0x04));
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
}
} // namespace lift_004151D0
} // namespace lift_005A66D0

// [0x005A4640] sub_005A4640 (117 bytes)
namespace lift_005A4640 {
// @name sub_005A4640
// @summary Auto-lifted identical-shape clone of 0x00402730 (Tree::assignFrom).
namespace lift_00402730 {
// Known callee 0x00402500: Tree::cloneSubtree (Recursively clones a red-black tree subtree (non-nil nodes) into newly allocated nodes, linking child pointers; on unwind erases the partial clone and rethrows.)
extern void* ext_005A27F0(void* self, void* rec, void* arg1);

// Node layout: +0x00 left, +0x08 right, +0x15 isnil.
static inline bool tree_node_isnil(const void* node) {
    return lift_field<uint8_t>(node, 0x45) != 0;
}

// @name Tree::assignFrom
// @class Tree
// @summary Replaces this tree's root with a deep clone of the source tree's root, re-establishes the header's leftmost/rightmost links, and copies the source's +0x08 word.
// @field Tree +0x04 void* head
// @field Tree +0x08 void* field_0x08
void fn_005A4640(void* self, void* arg1) {
    void* const dstHead = lift_field<void*>(self, 0x04);
    void* const srcHead = lift_field<void*>(arg1, 0x04);
    void* const srcRoot = lift_field<void*>(srcHead, 0x04);

    // Clone the source subtree under the destination header.
    void* const clonedRoot = ext_005A27F0(self, srcRoot, dstHead);
    lift_field<void*>(dstHead, 0x04) = clonedRoot;

    lift_field<void*>(self, 0x08) = lift_field<void*>(arg1, 0x08);

    void* const newRoot = lift_field<void*>(dstHead, 0x04);
    if (tree_node_isnil(newRoot)) {
        lift_field<void*>(dstHead, 0x00) = dstHead;
        lift_field<void*>(dstHead, 0x08) = dstHead;
        return;
    }

    // Leftmost search (literal translation of the original nil-skipping loop).
    void* p = newRoot;
    void* q = lift_field<void*>(p, 0x00);
    if (tree_node_isnil(q)) {
        do {
            p = q;
            q = lift_field<void*>(p, 0x00);
        } while (tree_node_isnil(q));
    }
    lift_field<void*>(dstHead, 0x00) = p;

    // Rightmost search (literal translation of the original nil-skipping loop).
    void* c = newRoot;
    void* r = lift_field<void*>(c, 0x08);
    if (tree_node_isnil(r)) {
        do {
            c = r;
            r = lift_field<void*>(c, 0x08);
        } while (tree_node_isnil(r));
    }
    lift_field<void*>(dstHead, 0x08) = c;
}
} // namespace lift_00402730
} // namespace lift_005A4640
