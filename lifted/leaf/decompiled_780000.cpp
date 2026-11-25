// Lifted C++ translation unit: lifted/leaf/decompiled_780000.cpp
#include "lift_compat.h"
#include <cstdio>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

// [0x00780250]
namespace lift_00780250 {
// @name UnknownClass::destroyField04
// @class UnknownClass
// @summary Passes field_0x04 to thunk_MFC80_ord_764.
// @field UnknownClass +0x04 uint32_t field_0x04


extern void ext_006A5C5C(uint32_t arg0);

void __thiscall fn_00780250(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x4);
    ext_006A5C5C(val);
}
} // namespace lift_00780250

// [0x00782B10]
namespace lift_00782B10 {
// @name GetBipedQuadrupedName
// @summary Returns "Biped" for selector 0, "Quadruped" for selector 1, otherwise nullptr.

extern const char mem_00AAF2A4[]; // "Biped"
extern const char mem_00AAF2AC[]; // "Quadruped"

const char* sub_00782B10(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2A4;
    }
    if (selector == 1) {
        return mem_00AAF2AC;
    }
    return nullptr;
}
} // namespace lift_00782B10

// [0x00782B60]
namespace lift_00782B60 {
// @name GetAutoUserModeName
// @summary Returns "Auto" for selector 0, "User" for selector 1, otherwise nullptr.

extern const char mem_00AAF2BC[]; // "Auto"
extern const char mem_00AAF2C4[]; // "User"

const char* sub_00782B60(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2BC;
    }
    if (selector == 1) {
        return mem_00AAF2C4;
    }
    return nullptr;
}
} // namespace lift_00782B60

// [0x00782B80] sub_00782B80 (32 bytes)
namespace lift_00782B80 {
extern const char mem_00AAF2CC[];
extern const char mem_00AAF2D8[];

// @name descriptiveName: sub_00782B80 (selects "Relative"/"Absolute" label)
// @class (none; free function)
// @summary Maps a mode selector (0 = "Relative", 1 = "Absolute") to a static label string; returns nullptr for other values.
const char* sub_00782B80(DWORD mode) {
    switch (mode) {
    case 0:
        return mem_00AAF2CC;
    case 1:
        return mem_00AAF2D8;
    default:
        return nullptr;
    }
}
} // namespace lift_00782B80

// [0x00782CB0] sub_00782CB0 (32 bytes)
namespace lift_00782CB0 {
extern const char mem_00AAF348[];
extern const char mem_00AAF354[];

// @name GetRigidName
// @summary Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.
// @field none
const char* fn_00782CB0(DWORD selector) {
    switch (selector) {
        case 0:
            return mem_00AAF348;
        case 1:
            return mem_00AAF354;
        default:
            return nullptr;
    }
}
} // namespace lift_00782CB0

// [0x00782D00] sub_00782D00 (32 bytes)
namespace lift_00782D00 {
// @name sub_00782D00 (thiscall: reset object state, store one DWORD argument)
// @class <unknown> (self pointer in ECX; class not identified)
// @summary Zeroes the dword fields at +0x00/+0x04/+0x08 and byte flags at +0x10/+0x11, stores the stack argument at +0x0C, then returns (ret 4).
// @field <unknown> +0x00 DWORD field_0x00
// @field <unknown> +0x04 DWORD field_0x04
// @field <unknown> +0x08 DWORD field_0x08
// @field <unknown> +0x0C DWORD field_0x0C
// @field <unknown> +0x10 BYTE field_0x10
// @field <unknown> +0x11 BYTE field_0x11
void fn_00782D00(void* self, DWORD arg) {
    BYTE* obj = static_cast<BYTE*>(self);
    *reinterpret_cast<BYTE*>(obj + 0x11) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x00) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x04) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x08) = 0;
    *reinterpret_cast<DWORD*>(obj + 0x0C) = arg;
    *reinterpret_cast<BYTE*>(obj + 0x10) = 0;
}
} // namespace lift_00782D00

// [0x007833F0] sub_007833F0 (32 bytes)
namespace lift_007833F0 {
// @name CloseOwnedFileIfOpen
// @class Unknown
// @summary If the inner handle's open flag (+0x04) is set, clear it and fclose the FILE* at inner+0x00.
// @field Unknown +0x04 void* inner
// @field Unknown +0x04 uint8_t openFlag (inner+0x04)
// @field Unknown +0x00 FILE* file (inner+0x00)
void fn_007833F0(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(inner, 0x04) == 0) {
        return;
    }
    lift_field<uint8_t>(inner, 0x04) = 0;
    inner = lift_field<void*>(self, 0x04);
    FILE* file = lift_field<FILE*>(inner, 0x00);
    fclose(file);
}
} // namespace lift_007833F0

// [0x00783800] sub_00783800 (32 bytes)
namespace lift_00783800 {
// @name ResetNodeChain (descriptive label inferred from behavior; no class name recovered)
// @class Unknown
// @summary Zeroes the +0x08/+0x0C words of the owner and of every node in its +0x00 singly linked chain.
// @field Unknown +0x00 uint32_t next_or_head
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0c
void fn_00783800(void* self) {
    uint32_t node = lift_field<uint32_t>(self, 0x00);
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;

    while (node != 0) {
        void* n = reinterpret_cast<void*>(static_cast<uintptr_t>(node));
        lift_field<uint32_t>(n, 0x08) = 0;
        lift_field<uint32_t>(n, 0x0C) = 0;
        node = lift_field<uint32_t>(n, 0x00);
    }
}
} // namespace lift_00783800

// [0x00783820] sub_00783820 (32 bytes)
namespace lift_00783820 {
// @name ResetChainLinkFields (descriptive label inferred from behavior; no class name recovered)
// @class Unknown
// @summary Zeroes the +0x04 word of the owner and of every node in its +0x00 singly linked chain.
// @field Unknown +0x00 uint32_t next_or_head
// @field Unknown +0x04 uint32_t field_0x04
void fn_00783820(void* self) {
    uint32_t node = lift_field<uint32_t>(self, 0x00);
    lift_field<uint32_t>(self, 0x04) = 0;

    while (node != 0) {
        void* n = reinterpret_cast<void*>(static_cast<uintptr_t>(node));
        lift_field<uint32_t>(n, 0x04) = 0;
        node = lift_field<uint32_t>(n, 0x00);
    }
}
} // namespace lift_00783820

// [0x00784620] sub_00784620 (32 bytes)
namespace lift_00784620 {
// @name sub_00784620 (thiscall: reset object state, store one DWORD argument)
// @class <unknown> (self pointer in ECX; class not identified)
// @summary Zeroes the dword fields at +0x00/+0x04/+0x08 and byte flag at +0x10, stores the stack argument at +0x0C (ret 4).
// @field <unknown> +0x00 DWORD field_0x00
// @field <unknown> +0x04 DWORD field_0x04
// @field <unknown> +0x08 DWORD field_0x08
// @field <unknown> +0x0C DWORD field_0x0C
// @field <unknown> +0x10 BYTE field_0x10
void fn_00784620(void* self, DWORD arg) {
    auto* base = static_cast<uint8_t*>(self);
    const DWORD zero = 0;
    std::memcpy(base + 0x00, &zero, sizeof(DWORD));
    std::memcpy(base + 0x04, &zero, sizeof(DWORD));
    std::memcpy(base + 0x08, &zero, sizeof(DWORD));
    std::memcpy(base + 0x0C, &arg, sizeof(DWORD));
    base[0x10] = 0;
}
} // namespace lift_00784620

// [0x0078C240] sub_0078C240 (32 bytes)
namespace lift_0078C240 {
uint32_t ext_0078C220(void* self, uint32_t arg);
void ext_0078C230(void* self);

// @name Unknown::AccumulateScaledDelta
// @class Unknown
// @summary Computes the scaled delta of arg against field +0x04 and then bumps the counter at +0x1C.
void fn_0078C240(void* self, uint32_t arg) {
    const uint32_t delta = ext_0078C220(self, arg);
    (void)delta;
    ext_0078C230(self);
}
} // namespace lift_0078C240

// [0x00789650] sub_00789650 (32 bytes)
namespace lift_00789650 {
// @name Unknown::ForwardVirtualByField08OrField14
// @class Unknown
// @summary Forwards to a virtual method on the object at +0x08 if set, otherwise to a virtual method on the object at +0x14.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x14 void* field_0x14
using ThisCallVirtual = DWORD(__thiscall*)(void* self);

DWORD fn_00789650(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    void* obj08 = *reinterpret_cast<void**>(base + 0x08);
    if (obj08 != nullptr) {
        // vtable slot at byte offset 0x24 in a 32-bit vtable = index 9
        void** vtbl = *reinterpret_cast<void***>(obj08);
        return reinterpret_cast<ThisCallVirtual>(vtbl[9])(obj08);
    }

    void* obj14 = *reinterpret_cast<void**>(base + 0x14);
    // vtable slot at byte offset 0x38 in a 32-bit vtable = index 14
    void** vtbl = *reinterpret_cast<void***>(obj14);
    return reinterpret_cast<ThisCallVirtual>(vtbl[14])(obj14);
}
} // namespace lift_00789650

// [0x0078CA10]
namespace lift_0078CA10 {
// @name SwitchIndexByteTable_0078CA10
// @summary Byte lookup table (17 entries) used as switch-case index map; not executable code.

extern const unsigned char sub_0078CA10[17] = {
    0x00, 0x01, 0x05, 0x02, 0x05, 0x05, 0x02, 0x05, 0x05,
    0x01, 0x05, 0x05, 0x05, 0x05, 0x05, 0x03, 0x04
};
} // namespace lift_0078CA10

// [0x0078BEC0] sub_0078BEC0 (37 bytes)
namespace lift_0078BEC0 {
// Known callee 0x00789650: Unknown::ForwardVirtualByField08OrField14 (Forwards to a virtual method on the object at +0x08 if set, otherwise to a virtual method on the object at +0x14.)
extern DWORD __fastcall ext_00789650(void* self);

// Virtual gate at vtable slot +0x2c (thiscall, no stack args, returns bool in AL).
using GateFn = BYTE(__thiscall*)(void* self);

// @name Unknown::VirtualGateThenForwardOrReadField1C
// @class Unknown
// @summary If the virtual gate at vtable +0x2c returns true, forward to ext_00789650; a -1 result is returned unchanged, otherwise return the DWORD at +0x1C. Returns 0 when the gate is false.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x1c DWORD field_0x1c
DWORD fn_0078BEC0(void* self) {
    auto* bytes = static_cast<unsigned char*>(self);
    void** vtable = *reinterpret_cast<void***>(self);
    GateFn gate = *reinterpret_cast<GateFn*>(reinterpret_cast<unsigned char*>(vtable) + 0x2c);

    if (!gate(self)) {
        return 0;
    }

    DWORD r = ext_00789650(self);
    if (r == 0xFFFFFFFFu) {
        return r;
    }
    return *reinterpret_cast<DWORD*>(bytes + 0x1c);
}
} // namespace lift_0078BEC0

// [0x00783440] sub_00783440 (40 bytes)
namespace lift_00783440 {
// @name readLineFromHolderStream
// @class Unknown
// @summary Reads a line into buf from the FILE* held by the holder object; returns buf, or NULL when the holder's flag byte is zero.
// @field Unknown +0x04 void* field_0x04 (pointer to holder object)
// @field Holder +0x00 FILE* field_0x00 (stream handle passed to fgets)
// @field Holder +0x04 uint8_t field_0x04 (enabled flag; zero means no read)
char* fn_00783440(void* self, char* buf, int n) {
    auto* base = static_cast<unsigned char*>(self);
    auto* holder = *reinterpret_cast<unsigned char**>(base + 0x04);
    if (holder[0x04] == 0) {
        return nullptr;
    }
    FILE* stream = *reinterpret_cast<FILE**>(holder + 0x00);
    return std::fgets(buf, n, stream);
}
} // namespace lift_00783440

// [0x007836D0]
namespace lift_007836D0 {
extern uint32_t mem_00925198;

// @name FileStream::setSize
// @class FileStream
// @summary Resizes the underlying file descriptor via _chsize if the stream is open.
// @field FileStream +0x04 void* field_0x04
int32_t __thiscall fn_007836D0(void* this_ptr, int32_t size) {
    uint8_t* inner = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(this_ptr) + 0x4);
    if (inner[0x4] == 0) {
        return -1;
    }
    uint8_t* handle = *reinterpret_cast<uint8_t**>(inner);
    int32_t fd = *reinterpret_cast<int32_t*>(handle + 0x10);
    auto chsize_fn = reinterpret_cast<int32_t(__cdecl*)(int32_t, int32_t)>(mem_00925198);
    return chsize_fn(fd, size);
}
} // namespace lift_007836D0

// [0x00783410] sub_00783410 (42 bytes)
namespace lift_00783410 {
// @name FileStream::ReadBytes
// @class FileStream
// @summary If the owner's flag byte at +0x04 is set, fread(buf, 1, count, stream) on the stream at +0x00 of the owner; otherwise return 0.
// @field FileStream +0x04 void* owner
// @field FileStream +0x00 uint32_t stream_handle
uint32_t fn_00783410(void* self, void* buf, uint32_t count) {
    void* owner = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(owner, 0x04) == 0) {
        return 0;
    }
    uint32_t stream = lift_field<uint32_t>(owner, 0x00);
    return static_cast<uint32_t>(
        std::fread(buf, 1, count, reinterpret_cast<FILE*>(static_cast<uintptr_t>(stream))));
}
} // namespace lift_00783410

// [0x00783510]
namespace lift_00783510 {
extern uint32_t mem_009252AC;

// @name StreamReader::readByte
// @class StreamReader
// @summary Reads a single byte from the underlying FILE stream if open, returning the byte read or 0.
// @field StreamReader +0x04 void* field_0x04
uint8_t __thiscall sub_00783510(void* self, uint8_t* outByte) {
    uint8_t* streamWrapper = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x4);
    if (streamWrapper[0x4] == 0) {
        return 0;
    }

    void* file = *reinterpret_cast<void**>(streamWrapper);
    using FreadFn = size_t(__cdecl*)(void* ptr, size_t size, size_t count, void* stream);
    auto freadFn = reinterpret_cast<FreadFn>(static_cast<uintptr_t>(mem_009252AC));
    freadFn(outByte, 1, 1, file);
    return *outByte;
}
} // namespace lift_00783510

// [0x00786050] sub_00786050 (46 bytes)
namespace lift_00786050 {
extern int mem_00B60A10;
extern int mem_00B60A18;
extern int mem_00B60A20;
extern int mem_00B60A28;
extern int mem_00925284;

// @name negateHugeIntoGlobals
// @summary Stores -_HUGE (negated MSVCR80 _HUGE double) into four global double slots.
void fn_00786050(void* self) {
    (void)self;
    // mem_00925284 holds the address of the MSVCR80 _HUGE double.
    const double huge = *reinterpret_cast<const double*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925284)));
    const double neg = -huge;

    double* const slots[] = {
        reinterpret_cast<double*>(static_cast<uintptr_t>(0x00B60A10u)),
        reinterpret_cast<double*>(static_cast<uintptr_t>(0x00B60A18u)),
        reinterpret_cast<double*>(static_cast<uintptr_t>(0x00B60A20u)),
        reinterpret_cast<double*>(static_cast<uintptr_t>(0x00B60A28u)),
    };
    for (double* slot : slots) {
        *slot = neg;
    }
}
} // namespace lift_00786050

// [0x00789260] sub_00789260 (46 bytes)
namespace lift_00789260 {
// @name ConstructRecord4
// @summary Constructor-style init: stores four args at +0x04..+0x10, zeroes +0x14, sets vtable at +0x00; returns self.
// @field ConstructRecord4 +0x00 uint32_t vtable
// @field ConstructRecord4 +0x04 uint32_t field_0x04
// @field ConstructRecord4 +0x08 uint32_t field_0x08
// @field ConstructRecord4 +0x0C uint32_t field_0x0C
// @field ConstructRecord4 +0x10 uint8_t field_0x10
// @field ConstructRecord4 +0x14 uint32_t field_0x14
void* fn_00789260(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t a4) {
    // Original: thiscall (self in ecx), four stack args, callee-cleans 0x10 bytes, returns self in eax.
    lift_field<uint32_t>(self, 0x04) = a1;
    lift_field<uint32_t>(self, 0x08) = a2;
    lift_field<uint32_t>(self, 0x0C) = a3;
    lift_field<uint8_t>(self, 0x10) = a4;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x00) = 0x00996FA0; // vtable address from the binary
    return self;
}
} // namespace lift_00789260

// [0x00782BA0]
namespace lift_00782BA0 {
// @name sub_00782BA0
// @summary Maps a selector argument (0, 1, 2) to one of three constant addresses (0x00AAF2BC, 0x00AAF2E4, 0x00AAF2EC); any other value returns 0.
uint32_t sub_00782BA0(uint32_t selector) {
    switch (selector) {
        case 0:  return 0x00AAF2BCu;
        case 1:  return 0x00AAF2E4u;
        case 2:  return 0x00AAF2ECu;
        default: return 0u;
    }
}
} // namespace lift_00782BA0

// [0x00782B30] sub_00782B30 (48 bytes)
namespace lift_00782B30 {
// @name selectStaticAddressByIndex
// @summary Maps selector 0/1/2 to one of three static addresses; any other value yields 0.
uint32_t __cdecl fn_00782B30(uint32_t selector) {
    switch (selector) {
        case 0:  return 0x00AAF2B8u;
        case 1:  return 0x00AAF2BCu;
        case 2:  return 0x00AAF2C4u;
        default: return 0u;
    }
}
} // namespace lift_00782B30

// [0x00782BD0] sub_00782BD0 (48 bytes)
namespace lift_00782BD0 {
// @name sub_00782BD0
// @summary Auto-lifted identical-shape clone of 0x00782B30 (selectStaticAddressByIndex).
namespace lift_00782B30 {
// @name selectStaticAddressByIndex
// @summary Maps selector 0/1/2 to one of three static addresses; any other value yields 0.
uint32_t __cdecl fn_00782BD0(uint32_t selector) {
    switch (selector) {
        case 0:  return 0xAAF2BCu;
        case 1:  return 0xAAF2F4u;
        case 2:  return 0xAAF2FCu;
        default: return 0u;
    }
}
} // namespace lift_00782B30
} // namespace lift_00782BD0

// [0x00782C80] sub_00782C80 (48 bytes)
namespace lift_00782C80 {
// @name sub_00782C80
// @summary Auto-lifted identical-shape clone of 0x00782B30 (selectStaticAddressByIndex).
namespace lift_00782B30 {
// @name selectStaticAddressByIndex
// @summary Maps selector 0/1/2 to one of three static addresses; any other value yields 0.
uint32_t __cdecl fn_00782C80(uint32_t selector) {
    switch (selector) {
        case 0:  return 0xAAF328u;
        case 1:  return 0xAAF330u;
        case 2:  return 0xAAF338u;
        default: return 0u;
    }
}
} // namespace lift_00782B30
} // namespace lift_00782C80

// [0x00782CD0] sub_00782CD0 (48 bytes)
namespace lift_00782CD0 {
// @name sub_00782CD0
// @summary Auto-lifted identical-shape clone of 0x00782B30 (selectStaticAddressByIndex).
namespace lift_00782B30 {
// @name selectStaticAddressByIndex
// @summary Maps selector 0/1/2 to one of three static addresses; any other value yields 0.
uint32_t __cdecl fn_00782CD0(uint32_t selector) {
    switch (selector) {
        case 0:  return 0xAAF360u;
        case 1:  return 0xAAF36Cu;
        case 2:  return 0xAAF378u;
        default: return 0u;
    }
}
} // namespace lift_00782B30
} // namespace lift_00782CD0

// [0x007837A0]
namespace lift_007837A0 {
// @name bumpNodeChainCounters
// @class Node
// @summary Increments counters at +0x08 and +0x0C on this node, then walks the next-pointer chain at +0x00 incrementing the same counters on each node until a null link.
// @field Node +0x00 Node* next
// @field Node +0x08 uint32_t counter_08
// @field Node +0x0C uint32_t counter_0C

struct Node {
    Node*    next;        // +0x00
    uint32_t field_0x04;  // +0x04
    uint32_t counter_08;  // +0x08
    uint32_t counter_0C;  // +0x0C
};

void bumpNodeChainCounters(Node* self)
{
    self->counter_08++;
    self->counter_0C++;

    Node* node = self->next;
    while (node != nullptr) {
        node->counter_08++;
        node->counter_0C++;
        node = node->next;
    }
}
} // namespace lift_007837A0

// [0x00784720] sub_00784720 (48 bytes)
namespace lift_00784720 {
// @name resetBufferState
// @summary Frees the owned buffer at +0x00 (if non-null), then zeroes the buffer pointer, +0x04, +0x08 and the flag byte at +0x10.
// @field Unknown +0x00 void* buffer
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint8_t field_0x10
void fn_00784720(void* self) {
    void*& buffer = lift_field<void*>(self, 0x00);
    if (buffer != nullptr) {
        std::free(buffer);
        buffer = nullptr;
    }
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint8_t>(self, 0x10) = 0;
}
} // namespace lift_00784720

// [0x007837D0]
namespace lift_007837D0 {
// @name IndexListNode::shiftIndicesAfterRemove
// @class IndexListNode
// @summary Walks the node list from this; decrements the indices at +0x08 and +0x0C that are greater than the removed index argument.
// @field IndexListNode +0x00 IndexListNode* field_0x00
// @field IndexListNode +0x08 int32_t field_0x08
// @field IndexListNode +0x0C int32_t field_0x0C

// __thiscall-style: self in ECX, one stack argument, callee-cleanup (ret 4).
void IndexListNode_shiftIndicesAfterRemove(void* self, int32_t removedIndex) {
    void* node = self;
    while (node != nullptr) {
        int32_t& f08 = lift_field<int32_t>(node, 0x08);
        if (removedIndex < f08) {
            f08--;
        }
        int32_t& f0C = lift_field<int32_t>(node, 0x0C);
        if (removedIndex < f0C) {
            f0C--;
        }
        node = lift_field<void*>(node, 0x00);
    }
}
} // namespace lift_007837D0

// [0x0078D720] sub_0078D720 (32 bytes)
namespace lift_0078D720 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern uint32_t __thiscall ext_006D2130(void* self, int32_t arg1, uint32_t arg2);

// @name initSelfRefAt14
// @summary Initializes the object via ext_006D2130(self, arg1, 4), then stores a pointer to self+0x10 at self+0x14; returns self.
// @field UnknownStruct +0x14 void* field_0x14
uint32_t fn_0078D720(void* self, int32_t arg1) {
    ext_006D2130(self, arg1, 4);
    void* inner = static_cast<uint8_t*>(self) + 0x10;
    lift_field<void*>(self, 0x14) = inner;
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
}
} // namespace lift_0078D720

// [0x00783540]
namespace lift_00783540 {
// Imported from MSVCR80: fwrite(const void* ptr, size_t size, size_t nmemb, FILE* stream).
size_t ext_fwrite(const void* ptr, size_t size, size_t nmemb, FILE* stream);

// @name writeIfEnabled (sub_00783540)
// @summary Writes count bytes from buf to the stream held by self's inner object, unless that object's flag byte at +0x04 is zero; returns fwrite's result or 0 when disabled.
// @field Unknown +0x04 void* field_0x04 (pointer to inner object)
// @field Unknown +0x00 void* field_0x00 (FILE* stream passed to fwrite)
// @field Unknown +0x04 uint8_t field_0x04 (enable flag on inner object)
UINT fn_00783540(void* self, const void* buf, UINT count) {
    void* inner = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(inner, 0x04) == 0) {
        return 0;
    }
    void* stream = lift_field<void*>(inner, 0x00);
    return static_cast<UINT>(ext_fwrite(buf, 1, count, static_cast<FILE*>(stream)));
}
} // namespace lift_00783540

// [0x00783860] sub_00783860 (32 bytes)
namespace lift_00783860 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern uint32_t __thiscall ext_006D2130(uint32_t self, int32_t arg1, uint32_t arg2);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name InitInlineBufferHeader
// @summary Runs the 0x006D2130 initializer with count 0x10 and element size 4, then points +0x14 at the inline buffer at +0x10 and clears +0x18.
// @field InlineBufferHeader +0x14 uint32_t field_0x14 (set to self+0x10, the address of inline storage)
// @field InlineBufferHeader +0x18 uint32_t field_0x18 (cleared to 0)
uint32_t fn_00783860(uint32_t self) {
    ext_006D2130(self, 0x10, 4);
    mem_write32(self + 0x18, 0);
    mem_write32(self + 0x14, self + 0x10);
    return self;
}
} // namespace lift_00783860

// [0x007847B0]
namespace lift_007847B0 {
// @name sortEntriesIfDirty
// @summary If the flag at +0x10 is set, qsorts the entry array at +0x00 (count at +0x04, 8-byte elements) with ext_00784790, then clears the flag; always returns 0.
// @field sortEntriesIfDirty +0x00 void* field_0x00
// @field sortEntriesIfDirty +0x04 uint32_t field_0x04
// @field sortEntriesIfDirty +0x10 uint8_t field_0x10

// Known callee 0x00784790: comparator passed to qsort.
extern int __cdecl ext_00784790(const void* a, const void* b);
// Known callee: IAT target of MSVCR80!qsort (called via mem_00925298 slot in the original).
extern void __cdecl ext_0062D38C(void* base, size_t nmemb, size_t size,
                                     int(__cdecl* compar)(const void*, const void*));

// __thiscall-style: self in ECX, no stack arguments, returns 0 in EAX.
int32_t sortEntriesIfDirty(void* self) {
    uint8_t& dirty = lift_field<uint8_t>(self, 0x10);
    if (dirty != 0) {
        void* base = lift_field<void*>(self, 0x00);
        uint32_t count = lift_field<uint32_t>(self, 0x04);
        ext_0062D38C(base, static_cast<size_t>(count), 8, ext_00784790);
        dirty = 0;
    }
    return 0;
}
} // namespace lift_007847B0

// [0x00788DF0]
namespace lift_00788DF0 {
// @name FileFindCursor::findNextRaw
// @class FileFindCursor
// @summary Calls FindNextFileW on the handle at +0x00 with the WIN32_FIND_DATAW buffer at +0x04, wrapped in SetErrorMode(1)/SetErrorMode(0); returns true if an entry was found.

extern void* mem_0092416C; // .rdata u32 0x0062D568 -> KERNEL32!SetErrorMode (IAT slot)
extern void* mem_00924170; // .rdata u32 0x0062D578 -> KERNEL32!FindNextFileW (IAT slot)

struct FileFindCursor {
    HANDLE hFind;                       // +0x00 (field_0x00)
    uint8_t findData[0x23C];            // +0x04 WIN32_FIND_DATAW (field_0x04)

    bool findNextRaw();
};

using SetErrorMode_fn  = UINT (*)(UINT);
using FindNextFileW_fn = BOOL (*)(HANDLE, void*);

bool FileFindCursor::findNextRaw()
{
    auto setErrorMode = reinterpret_cast<SetErrorMode_fn>(mem_0092416C);
    auto findNext     = reinterpret_cast<FindNextFileW_fn>(mem_00924170);

    bool found = false;
    setErrorMode(1);
    if (findNext(this->hFind, this->findData) != 0) {
        found = true;
    }
    setErrorMode(0);
    return found;
}
} // namespace lift_00788DF0

// [0x00788E20]
namespace lift_00788E20 {
extern uint32_t mem_0092416C; // .rdata u32 0x0062D568 -> KERNEL32!SetErrorMode
    extern uint32_t mem_009241CC; // .rdata u32 0x00628198 -> KERNEL32!FindClose

struct FileFindCursor {
    void* hFind;             // +0x00
    uint8_t findData[0x23C]; // +0x04 WIN32_FIND_DATAW
    uint8_t field_0x240[0x654 - 0x240]; // +0x240 unknown
    uint8_t field_0x654;     // +0x654 (cleared on close)
};

using SetErrorMode_fn = unsigned int (__stdcall*)(unsigned int);
using FindClose_fn = int (__stdcall*)(void*);

// @name FileFindCursor::closeFind
// @class FileFindCursor
// @summary Closes the find handle at +0x00 via FindClose with SetErrorMode(1) around it, then clears the handle and the flag at +0x654.
// @field FileFindCursor +0x00 void* hFind
// @field FileFindCursor +0x654 uint8_t field_0x654
void fn_00788E20(void* self) {
    auto* cursor = static_cast<FileFindCursor*>(self);
    auto setErrorMode = reinterpret_cast<SetErrorMode_fn>(mem_0092416C);
    auto findClose = reinterpret_cast<FindClose_fn>(mem_009241CC);

    setErrorMode(1);
    findClose(cursor->hFind);
    cursor->hFind = nullptr;
    setErrorMode(0);
    cursor->field_0x654 = 0;
}
} // namespace lift_00788E20

// [0x00788E50]
namespace lift_00788E50 {
extern uint32_t mem_009241F8; // .rdata u32 0x00628286 -> KERNEL32!WideCharToMultiByte

using WideCharToMultiByte_fn = int (__stdcall*)(
    unsigned int codePage, unsigned int flags,
    const wchar_t* wide, int wideLen,
    char* multi, int multiLen,
    const char* defChar, int* usedDefault);

// @name TextConverter::convertWideToUtf8Field
// @class TextConverter
// @summary Converts the NUL-terminated UTF-16 string at +0x30 into UTF-8 in the 0x400-byte buffer at +0x254 (CP 65001), and returns a pointer to that buffer.
// @field TextConverter +0x30 wchar_t[] wideText
// @field TextConverter +0x254 char[0x400] utf8Text
void* fn_00788E50(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    auto* wide = reinterpret_cast<const wchar_t*>(base + 0x30);
    auto* utf8 = reinterpret_cast<char*>(base + 0x254);
    auto convert = reinterpret_cast<WideCharToMultiByte_fn>(static_cast<uintptr_t>(mem_009241F8));

    convert(65001 /* CP_UTF8 */, 0, wide, -1, utf8, 0x400, nullptr, nullptr);
    return utf8;
}
} // namespace lift_00788E50

// [0x0078CBE0] sub_0078CBE0 (48 bytes)
namespace lift_0078CBE0 {
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t ext_006E7460(void* self);
// Known callee 0x0078CB70: getIndexedDword (Returns the dword at index arg1 of the array whose pointer is stored at this+0x10 (thiscall, one stack arg, ret 4).)
extern uint32_t ext_0078CB70(void* ecx, uint32_t index);

// @name getIndexedDwordBoundedBy1C
// @class UnknownClass
// @summary Returns the dword at index this->field_0x1C if 0 <= index < ext_006E7460(this), else 0.
// @field UnknownClass +0x1C int32_t field_0x1C
uint32_t fn_0078CBE0(void* self) {
    const int32_t index = *reinterpret_cast<int32_t*>(static_cast<uint8_t*>(self) + 0x1C);
    if (index <= -1) {
        return 0;
    }
    const int32_t count = ext_006E7460(self);
    if (index >= count) {
        return 0;
    }
    return ext_0078CB70(self, static_cast<uint32_t>(index));
}
} // namespace lift_0078CBE0

// [0x00789590] sub_00789590 (48 bytes)
namespace lift_00789590 {
// @name UnknownClass::releaseChildOrField14
// @class UnknownClass
// @summary If the pointer at +0x08 is set, calls vtable slot 4 on it; otherwise calls vtable slot 3 on the object at +0x14. Then clears the DWORD at +0x0c.
// @field UnknownClass +0x08 void* field_0x08
// @field UnknownClass +0x0c DWORD field_0x0c
// @field UnknownClass +0x14 void* field_0x14
void fn_00789590(void* self) {
    using VFn = void(__thiscall*)(void*);

    void* obj = lift_field<void*>(self, 0x08);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<VFn>(vtbl[4])(obj);   // vtable +0x10
    } else {
        void* other = lift_field<void*>(self, 0x14);
        void** vtbl = *reinterpret_cast<void***>(other);
        reinterpret_cast<VFn>(vtbl[3])(other); // vtable +0x0c
    }
    lift_field<DWORD>(self, 0x0c) = 0;
}
} // namespace lift_00789590

// [0x0078C410] sub_0078C410 (48 bytes)
namespace lift_0078C410 {
// @name UnknownClass::getByteAtIndex
// @summary Returns the last byte of the string at index in the pointer table, or 'S' if the table is empty or index is out of range.
// @field UnknownClass +0x20 int32_t field_0x20
// @field UnknownClass +0x28 int32_t field_0x28
// @field UnknownClass +0x2c uint32_t field_0x2c
uint8_t fn_0078C410(const void* self, int32_t index) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    int32_t len = *reinterpret_cast<const int32_t*>(base + 0x20);
    if (len == 0) {
        return 0x53; // 'S'
    }
    int32_t count = *reinterpret_cast<const int32_t*>(base + 0x28);
    if (index >= count) {
        return 0x53; // 'S'
    }
    uint32_t table = *reinterpret_cast<const uint32_t*>(base + 0x2c);
    uint32_t entry = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(table))[index];
    const uint8_t* str = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(entry));
    return str[len - 1];
}
} // namespace lift_0078C410

// [0x0078AAC0] sub_0078AAC0 (48 bytes)
namespace lift_0078AAC0 {
// @name dataTable_0078AAC0
// @summary 48-byte constant byte table at 0x0078AAC0; disassembles as junk, so it is data, not code.
//
// The bytes at this address do not form a meaningful function: they decode to
// `add [ebx], al` / `add eax, [ebx]` pairs followed by a run of 0x90 values.
// Recovered here as a constant byte table so the content is preserved.
// No entry point with behavior is recovered; fn_0078AAC0 is a no-op kept for
// signature compatibility with the lift pipeline.

namespace {

inline constexpr uint8_t kDataTable_0078AAC0[48] = {
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x02, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
};

} // namespace

void fn_0078AAC0(void* self) {
    (void)self;
    (void)kDataTable_0078AAC0;
}
} // namespace lift_0078AAC0

// [0x0078CB90] sub_0078CB90 (48 bytes)
namespace lift_0078CB90 {
extern int32_t ext_006E7460(void* self);
extern uint32_t ext_0078CB70(void* ecx, uint32_t index);

// @name GetIndexedDwordIfInRange
// @class Unknown
// @summary Returns the indexed dword for the index stored at +0x18, or 0 if the index is negative or not below the count returned by ext_006E7460.
// @field Unknown +0x18 int32_t field_0x18
uint32_t fn_0078CB90(void* self) {
    int32_t index = *reinterpret_cast<int32_t*>(static_cast<uint8_t*>(self) + 0x18);
    if (index <= -1) {
        return 0;
    }
    int32_t count = ext_006E7460(self);
    if (index >= count) {
        return 0;
    }
    return ext_0078CB70(self, static_cast<uint32_t>(index));
}
} // namespace lift_0078CB90

// [0x0078D4E0] sub_0078D4E0 (48 bytes)
namespace lift_0078D4E0 {
// @name UnknownClass::getEntryField10Ptr
// @class UnknownClass
// @summary Thiscall lookup: resolves self[a] (24-byte stride) -> table[b] -> entry, returns entry+0x10 + c*16.
// @field UnknownClass +0x00 DWORD field_0x00 (array of 24-byte elements; element +0x10 holds table pointer)

// 32-bit guest address -> host pointer.
static inline uint8_t* lift_ptr(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

// Element layout (stride 24): +0x10 = guest pointer to uint32 table, indexed by b.
// Table entry: guest pointer to a record whose +0x10 is a base of 16-byte records, indexed by c.
uint8_t* __thiscall fn_0078D4E0(void* self, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t table = lift_field<uint32_t>(self, 24 * static_cast<ptrdiff_t>(a) + 0x10);
    uint32_t record = lift_field<uint32_t>(lift_ptr(table), 4 * static_cast<ptrdiff_t>(b));
    uint32_t base = lift_field<uint32_t>(lift_ptr(record), 0x10);
    return lift_ptr(base + 16u * c);
}
} // namespace lift_0078D4E0

// [0x00784750]
namespace lift_00784750 {
// @name EntryTable::getEntryValue
// @class EntryTable
// @summary Sorts the entry table if dirty, optionally writes entry[idx].key to *outKey, and returns entry[idx].value (0 if idx is out of range).
// @field EntryTable +0x00 uint32_t* entries
// @field EntryTable +0x04 int32_t count

extern int32_t ext_007847B0(void* self);

struct EntryTable {
    uint32_t* entries;   // +0x00: array of {key, value} pairs, 8 bytes each
    int32_t   count;     // +0x04
};

int32_t EntryTable_getEntryValue(EntryTable* self, int32_t idx, uint32_t* outKey) {
    if (idx < 0 || idx >= self->count) {
        return 0;
    }
    ext_007847B0(self);
    if (outKey != nullptr) {
        *outKey = self->entries[idx * 2];
    }
    return static_cast<int32_t>(self->entries[idx * 2 + 1]);
}
} // namespace lift_00784750

// [0x007847E0]
namespace lift_007847E0 {
// @name SortedArray::find
// @class SortedArray
// @summary Binary-searches an 8-byte-element sorted array for a matching key, returning the element pointer or null.
// @field SortedArray +0x00 void* data
// @field SortedArray +0x04 int32_t count


extern uint32_t mem_0092529C;
extern int __cdecl ext_00784790(const void* a, const void* b);

void* __thiscall sub_007847E0(void* self, uint32_t key_val) {
    int32_t count = *reinterpret_cast<const int32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x04);
    if (count <= 0) {
        return nullptr;
    }

    uint32_t key[2] = { key_val, 0 };
    void* base = *reinterpret_cast<void* const*>(self);
    auto bsearch_fn = reinterpret_cast<void* (__cdecl*)(const void*, const void*, size_t, size_t, int (__cdecl*)(const void*, const void*))>(mem_0092529C);
    return bsearch_fn(key, base, static_cast<size_t>(count), 8, ext_00784790);
}
} // namespace lift_007847E0

// [0x00783570] sub_00783570 (63 bytes)
namespace lift_00783570 {
// @name Unknown::SeekStreamFromObject
// @class Unknown
// @summary Seeks the FILE* held by the object at self+0x04 when that object's flag byte is set; arg1 selects SEEK_SET/SEEK_CUR/SEEK_END (anything else -> SEEK_SET) and arg2 is the signed offset.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x00 FILE* field_0x00 (inner object: stream pointer)
// @field Unknown +0x04 BYTE field_0x04 (inner object: valid flag)
void fn_00783570(void* self, DWORD whence_arg, DWORD offset) {
    const DWORD obj_addr = lift_field<DWORD>(self, 0x04);
    auto* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(obj_addr));
    if (obj == nullptr || lift_field<uint8_t>(obj, 0x04) == 0) {
        return;
    }

    int whence = SEEK_SET;
    if (whence_arg == 1) {
        whence = SEEK_CUR;
    } else if (whence_arg == 2) {
        whence = SEEK_END;
    }

    const DWORD stream_addr = lift_field<DWORD>(obj, 0x00);
    auto* stream = reinterpret_cast<FILE*>(static_cast<uintptr_t>(stream_addr));
    std::fseek(stream, static_cast<long>(static_cast<int32_t>(offset)), whence);
}
} // namespace lift_00783570

// [0x00780090] sub_00780090 (64 bytes)
namespace lift_00780090 {
// @name SetValueAndCopyString
// @summary Stores a 32-bit value at offset 0 and copies a NUL-terminated string (including terminator) to offset 4.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 char field_0x04
void fn_00780090(uint8_t* self, uint32_t value, const char* src) {
    *reinterpret_cast<uint32_t*>(self) = value;
    size_t count = std::strlen(src) + 1;
    std::memcpy(self + 4, src, count);
}
} // namespace lift_00780090

// [0x007839B0] sub_007839B0 (64 bytes)
namespace lift_007839B0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; takes one argument, caller cleans up).
// Known callee 0x006D2250: Buffer::release (frees the buffer at +0x10 if non-null and zeroes +0x00, +0x04, +0x10).
// Known callee 0x00783800: ResetNodeChain (zeroes the +0x08/+0x0C words of the owner and of every node in its +0x00 chain).
extern void ext_006A5C5C(void* arg);
extern void ext_006D2250(void* self);
extern void ext_00783800(void* self);

// @name ReleaseEntriesAndResetChain
// @class Unknown
// @summary Passes each pointer in the +0x10 array (count at +0x00) to the MFC thunk, releases the buffer, then resets the chain at +0x18 if present.
// @field Unknown +0x00 int count
// @field Unknown +0x10 void** entries
// @field Unknown +0x18 void* chain
int fn_007839B0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    int count = *reinterpret_cast<int*>(base + 0x00);
    if (count > 0) {
        for (int i = 0; i < count; ++i) {
            void** entries = *reinterpret_cast<void***>(base + 0x10);
            ext_006A5C5C(entries[i]);
            count = *reinterpret_cast<int*>(base + 0x00);
        }
    }
    ext_006D2250(self);
    void* chain = *reinterpret_cast<void**>(base + 0x18);
    if (chain != nullptr) {
        ext_00783800(chain);
    }
    return 0;
}
} // namespace lift_007839B0

// [0x00789940] sub_00789940 (64 bytes)
namespace lift_00789940 {
// @name Unknown::BuildCrc32MsbTable
// @class Unknown
// @summary Fills a 256-entry MSB-first CRC-32 table (polynomial 0x04C11DB7) starting at +0x18.
// @field Unknown +0x18 uint32_t field_0x18[256]
void fn_00789940(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    uint32_t* table = reinterpret_cast<uint32_t*>(base + 0x18);
    for (uint32_t i = 0; i < 256; ++i) {
        uint32_t crc = i << 24;
        for (int bit = 0; bit < 8; ++bit) {
            if (crc & 0x80000000u) {
                crc = (crc << 1) ^ 0x04C11DB7u;
            } else {
                crc <<= 1;
            }
        }
        table[i] = crc;
    }
}
} // namespace lift_00789940

// [0x007892B0] sub_007892B0 (64 bytes)
namespace lift_007892B0 {
// @name Unknown::ReleaseOwnedObjects
// @class Unknown
// @summary Resets the vtable, deletes the optional owned object at +0x08 (only when the flag at +0x10 is set), then always deletes the owned object at +0x14, nulling each slot.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 void* ownedObjectA
// @field Unknown +0x10 uint8_t ownsObjectA
// @field Unknown +0x14 void* ownedObjectB
namespace {

// Calls the object's virtual slot 0 with the "delete" flag set (1),
// mirroring the original `call [vtable+0]` with argument 1.
inline void VirtualDeleteObject(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    using DeleteFn = void (__thiscall*)(void*, int);
    reinterpret_cast<DeleteFn>(vtable[0])(obj, 1);
}

} // namespace

void fn_007892B0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x996fa0;

    void* objectA = lift_field<void*>(self, 0x08);
    if (objectA != nullptr) {
        if (lift_field<uint8_t>(self, 0x10) != 0) {
            VirtualDeleteObject(objectA);
        }
        lift_field<void*>(self, 0x08) = nullptr;
    }

    void* objectB = lift_field<void*>(self, 0x14);
    if (objectB != nullptr) {
        VirtualDeleteObject(objectB);
        lift_field<void*>(self, 0x14) = nullptr;
    }
}
} // namespace lift_007892B0

// [0x0078D510] sub_0078D510 (64 bytes)
namespace lift_0078D510 {
// @name Unknown::FindKeyIndexInSubtable
// @class Unknown
// @summary Looks up subtable [group][sub] (32-bit pointer chain) and returns the index of the first 16-byte record whose leading DWORD equals key, or -1 if absent.
// @field Unknown +0x10 DWORD group_table_entries (24-byte stride; each entry's first DWORD is a pointer to a subtable array)
// @field Unknown +0x00 DWORD subtable_count (signed; read from the container pointed to by a group-table pointer)
// @field Unknown +0x10 DWORD subtable_records (pointer to 16-byte records; first DWORD of each record is the key)

static inline uint32_t ReadU32(uintptr_t addr) {
    uint32_t value;
    std::memcpy(&value, reinterpret_cast<const void*>(addr), sizeof(value));
    return value;
}

int32_t __thiscall fn_0078D510(void* self, int32_t group, int32_t sub, int32_t key) {
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);

    // ecx = *(self + 0x10 + 24*group)
    const uint32_t table = ReadU32(base + 0x10u + 24u * static_cast<uint32_t>(group));
    // edx = *(table + 4*sub)
    const uint32_t container = ReadU32(table + 4u * static_cast<uint32_t>(sub));

    const int32_t count = static_cast<int32_t>(ReadU32(container));
    if (count <= 0) {
        return -1;
    }

    uint32_t record = ReadU32(container + 0x10u);
    for (int32_t i = 0; i < count; ++i) {
        if (static_cast<int32_t>(ReadU32(record)) == key) {
            return i;
        }
        record += 0x10u;
    }
    return -1;
}
} // namespace lift_0078D510

// [0x00783470]
namespace lift_00783470 {
// @name StreamReader::readUInt32
// @class StreamReader
// @summary Reads a 32-bit unsigned integer from an open stream, optionally byte-swapping it.
// @field StreamReader +0x04 void* field_0x04

extern size_t __cdecl MSVCR80_fread(void* ptr, size_t size, size_t count, void* stream);
// mem_009252AC -> MSVCR80.dll!fread

uint32_t __thiscall sub_00783470(void* self, uint32_t* outVal, uint8_t swapEndian) {
    uint8_t* streamWrapper = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x4);
    if (streamWrapper[0x4] == 0) {
        return 0;
    }

    void* fp = *reinterpret_cast<void**>(streamWrapper);
    MSVCR80_fread(outVal, 4, 1, fp);

    if (swapEndian != 0) {
        uint32_t val = *outVal;
        val = ((val & 0x000000FFu) << 24) |
              ((val & 0x0000FF00u) << 8)  |
              ((val & 0x00FF0000u) >> 8)  |
              ((val & 0xFF000000u) >> 24);
        *outVal = val;
    }

    return *outVal;
}
} // namespace lift_00783470

// [0x007834C0] sub_007834C0 (71 bytes)
namespace lift_007834C0 {
// MSVCR80 fread import (IAT slot 0x009252AC).
extern size_t ext_fread(void* buf, size_t size, size_t count, void* stream);

// @name Unknown::ReadU16
// @class Unknown
// @summary Reads one 16-bit value from the open stream (if valid), optionally byte-swapping it; returns 0 if the stream is not valid.
// @field Unknown +0x04 void* field_04
struct StreamRec {
    uint32_t handle; // +0x00 FILE* handle
    uint8_t  valid;  // +0x04 nonzero when stream is open
};

uint16_t __thiscall fn_007834C0(void* self, uint16_t* buf, uint8_t swap) {
    auto* rec = *reinterpret_cast<StreamRec**>(reinterpret_cast<uint8_t*>(self) + 0x04);
    if (rec->valid == 0) {
        return 0;
    }
    ext_fread(buf, 1, 2, reinterpret_cast<void*>(static_cast<uintptr_t>(rec->handle)));
    if (swap != 0) {
        const uint16_t v = *buf;
        *buf = static_cast<uint16_t>((v >> 8) | (v << 8));
    }
    return *buf;
}
} // namespace lift_007834C0

// [0x007856A0]
namespace lift_007856A0 {
// @name Unknown::InvokeSlot4ForEachArg
// @class Unknown
// @summary For each of count 32-bit items, calls this object's vtable slot +0x04 with the item as its single argument; always returns true.
// @field Unknown +0x00 void* vtable

typedef void(__thiscall* Slot4Fn)(void* self, uint32_t arg);

bool __thiscall fn_007856A0(void* self, const uint32_t* items, int32_t count) {
    for (int32_t i = 0; i < count; ++i) {
        void** vtbl = *reinterpret_cast<void***>(self);
        Slot4Fn slot4 = reinterpret_cast<Slot4Fn>(vtbl[1]);
        slot4(self, items[i]);
    }
    return true;
}
} // namespace lift_007856A0

// [0x007857A0] sub_007857A0 (80 bytes)
namespace lift_007857A0 {
// @name callVirtualSlot4OverArray
// @summary Walks a uint32 array and calls virtual slot 4 on this for each element, alternating which return values are kept; returns the final flag (initially true).
// @field Unknown +0x00 void** vtable
using VirtualSlot4Fn = uint8_t (*)(void* self, uint32_t value);

uint8_t fn_007857A0(void* self, const uint32_t* values, int32_t count) {
    uint8_t flag = 1;
    void** vtable = *reinterpret_cast<void***>(self);
    for (int32_t i = 0; i < count; ++i) {
        const uint32_t value = values[i];
        auto slot4 = reinterpret_cast<VirtualSlot4Fn>(vtable[4]);
        if (flag != 0) {
            slot4(self, value);
        } else {
            flag = slot4(self, value);
        }
    }
    return flag;
}
} // namespace lift_007857A0

// [0x007846D0] sub_007846D0 (80 bytes)
namespace lift_007846D0 {
extern int32_t __thiscall ext_007847B0(void* self);
extern void* __thiscall ext_007847E0(void* self, uint32_t key_val);

// @name SortedArray::findValue
// @class SortedArray
// @summary Sorts the array if dirty, binary-searches for key; on hit writes element index (optional out) and returns element +0x04, on miss writes -1 (optional out) and returns 0.
// @field SortedArray +0x00 void* field_0x00
extern uint32_t __thiscall fn_007846D0(void* self, uint32_t key, int32_t* outIndex) {
    (void)ext_007847B0(self);

    void* hit = ext_007847E0(self, key);
    if (hit != nullptr) {
        if (outIndex != nullptr) {
            const uintptr_t base = reinterpret_cast<uintptr_t>(*reinterpret_cast<void* const*>(self));
            const uintptr_t diff = reinterpret_cast<uintptr_t>(hit) - base;
            *outIndex = static_cast<int32_t>(static_cast<uint32_t>(diff >> 3));
        }
        return *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(hit) + 0x4);
    }

    if (outIndex != nullptr) {
        *outIndex = -1;
    }
    return 0u;
}
} // namespace lift_007846D0

// [0x00782E70] sub_00782E70 (80 bytes)
namespace lift_00782E70 {
// @name sub_00782E70
// @summary Auto-lifted identical-shape clone of 0x007846D0 (SortedArray::findValue).
namespace lift_007846D0 {
extern int32_t __thiscall ext_00782F70(void* self);
extern void* __thiscall ext_00783020(void* self, uint32_t key_val);

// @name SortedArray::findValue
// @class SortedArray
// @summary Sorts the array if dirty, binary-searches for key; on hit writes element index (optional out) and returns element +0x04, on miss writes -1 (optional out) and returns 0.
// @field SortedArray +0x00 void* field_0x00
extern uint32_t __thiscall fn_00782E70(void* self, uint32_t key, int32_t* outIndex) {
    (void)ext_00782F70(self);

    void* hit = ext_00783020(self, key);
    if (hit != nullptr) {
        if (outIndex != nullptr) {
            const uintptr_t base = reinterpret_cast<uintptr_t>(*reinterpret_cast<void* const*>(self));
            const uintptr_t diff = reinterpret_cast<uintptr_t>(hit) - base;
            *outIndex = static_cast<int32_t>(static_cast<uint32_t>(diff >> 3));
        }
        return *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(hit) + 0x4);
    }

    if (outIndex != nullptr) {
        *outIndex = -1;
    }
    return 0u;
}
} // namespace lift_007846D0
} // namespace lift_00782E70

// [0x00784DD0]
namespace lift_00784DD0 {
// @name SortedArray::findOrDefault
// @class SortedArray
// @summary Looks up arg2, then arg3 in the sorted array at arg1; returns the first non-zero result, else arg4.
// Accesses no fields directly; the callee ext_00782E70 (SortedArray::findValue) does the lookups.

extern uint32_t ext_00782E70(void* self, uint32_t key, int32_t* outIndex);

uint32_t fn_00784DD0(void* self, uint32_t key1, uint32_t key2, uint32_t fallback) {
    uint32_t result = ext_00782E70(self, key1, nullptr);
    if (result != 0) {
        result = ext_00782E70(reinterpret_cast<void*>(result), key2, nullptr);
        if (result != 0) {
            return result;
        }
    }
    return fallback;
}
} // namespace lift_00784DD0

// [0x00789C80] sub_00789C80 (32 bytes)
namespace lift_00789C80 {
// Known callee 0x00782E70: sub_00782E70 (Auto-lifted identical-shape clone of 0x007846D0 (SortedArray::findValue).)
extern uint32_t __thiscall ext_00782E70(void* self, uint32_t key, int32_t* outIndex);

// @name ForwardSortedArrayFindValue
// @summary Thiscall forwarder: calls the SortedArray find routine on the subobject at this+0x04 with the same key and optional out-index arguments.
uint32_t __thiscall fn_00789C80(void* self, uint32_t key, int32_t* outIndex) {
    void* sortedArray = static_cast<uint8_t*>(self) + 0x04;
    return ext_00782E70(sortedArray, key, outIndex);
}
} // namespace lift_00789C80

// [0x00783670] sub_00783670 (83 bytes)
namespace lift_00783670 {
// @name Unknown::logFormatted_00783670
// @class Unknown
// @summary Formats a printf-style message into a 16 KiB stack buffer and writes it to the sink's FILE* when the sink's enabled byte is nonzero.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x00 FILE* field_0x00
// @field Unknown +0x04 uint8_t field_0x04
void fn_00783670(void* self, const char* fmt, ...) {
    // self+0x4 points to a sink object: sink+0x0 is the FILE*, sink+0x4 is an enabled flag.
    void* sink = lift_field<void*>(self, 0x4);
    if (lift_field<uint8_t>(sink, 0x4) == 0) {
        return;
    }

    char buf[0x4000];
    va_list args;
    va_start(args, fmt);
    std::vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    FILE* stream = lift_field<FILE*>(sink, 0x0);
    std::fputs(buf, stream);
}
} // namespace lift_00783670

// [0x0078BF70] sub_0078BF70 (84 bytes)
namespace lift_0078BF70 {
namespace lift_0078BF70 {
// IAT slot for MSVCR80!vsprintf
extern int (__cdecl* mem_009252B8)(char* dst, const char* fmt, va_list args);

// @name Unknown::formatAndDispatch_0078BF70
// @class Unknown
// @summary printf-style formats into a 16 KiB stack buffer via vsprintf, then calls virtual slot +0x1c on this with (buffer, strlen+1).
// @field Unknown +0x00 void* vptr
void fn_0078BF70(void* self, const char* fmt, ...) {
    char buf[0x4000];

    va_list args;
    va_start(args, fmt);
    mem_009252B8(buf, fmt, args);
    va_end(args);

    DWORD len = static_cast<DWORD>(std::strlen(buf) + 1);

    void* vtbl = lift_field<void*>(self, 0x0);
    void* slot = lift_field<void*>(vtbl, 0x1c);
    using DispatchFn = void(__thiscall*)(void* self_, char* text, DWORD length);
    reinterpret_cast<DispatchFn>(slot)(self, buf, len);
}
} // namespace lift_0078BF70
} // namespace lift_0078BF70
