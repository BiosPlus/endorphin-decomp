// Lifted C++ translation unit: lifted/leaf/decompiled_780000.cpp
#include "lift_compat.h"
#include <cstdio>
#include <cstdlib>

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
