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

// [0x005A3DC0]
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

// [0x005AA8D0] sub_005AA8D0 (45 bytes)
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

// [0x005AA890]
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
