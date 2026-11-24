// Lifted C++ translation unit: lifted/leaf/tiny_620000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_005DFEB0(void* self);
extern "C" void __fastcall ext_005E0130(void* self);
extern "C" int mem_00977734;
extern "C" void __fastcall ext_0060BA10(void* self);

extern "C" void __fastcall ext_0060BA10(void* self);
// @name VirtualDispatchThunk_Slot17
// @class Object (unidentified; receiver is passed in ecx)
// @summary Virtual dispatch thunk: loads the vtable pointer from the receiver and returns the code address stored at vtable byte offset 0x44 (slot 17 on x86). The original tail-jumps to that address; this lift returns it so the caller can perform the call.
// @field Object +0x00 void** vptr
//
// Notes:
//   The original is `mov eax, [ecx]; jmp [eax+0x44]`. A tail jump transfers
//   control with the caller's return address and arguments still on the stack,
//   which portable C++ cannot express. The closest faithful equivalent is to
//   return the resolved target so the caller performs the indirect call.
//   Assumes a 32-bit x86 target, where vtable slots are 4 bytes and the
//   vptr sits at offset 0 of the receiver.
void* fn_0062A580(void* self) {
    const unsigned char* const* receiver = reinterpret_cast<const unsigned char* const*>(self);
    const unsigned char* vtable = receiver[0];
    return *reinterpret_cast<void* const*>(vtable + 0x44);
}
#include <cstdint>

// [0x006244C0] sub_006244C0 (8 bytes)
// @name sub_006244C0
// @summary This-adjustor thunk: adjusts `this` by +0x28 and tail-calls sub_005DFEB0.
extern "C" void __fastcall fn_006244C0(void* self) {
    ext_005DFEB0(static_cast<char*>(self) + 0x28);
}

// [0x006244D0] sub_006244D0 (8 bytes)
// @name sub_006244D0
// @summary This-adjustor thunk: adjusts `this` by +0x38 and tail-calls sub_005E0130.
extern "C" void __fastcall fn_006244D0(void* self) {
    ext_005E0130(static_cast<char*>(self) + 0x38);
}

// [0x006268F0] sub_006268F0 (11 bytes)
// @name sub_006268F0
// @summary Destructor tail-call: restores vtable mem_00977734 and tail-calls base destructor sub_0060BA10.
extern "C" void __fastcall fn_006268F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00977734;
    ext_0060BA10(self);
}

// [0x00622750] sub_00622750 (20 bytes)
namespace lift_00622750 {
extern const char mem_0097707C[];

// @name InitTaggedZeroFloatTriple
// @summary Stores the tag address mem_0097707C at +0x00 and zeroes three floats at +0x04, +0x08, +0x0C; returns self.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void* InitTaggedZeroFloatTriple(void* self) {
    lift_field<float>(self, 0x04) = 0.0f;
    lift_field<uint32_t>(self, 0x00) = 0x0097707Cu;
    lift_field<float>(self, 0x08) = 0.0f;
    lift_field<float>(self, 0x0C) = 0.0f;
    return self;
}
} // namespace lift_00622750

// [0x00624D10] sub_00624D10 (27 bytes)
namespace lift_00624D10 {
// @name sub_00624D10
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_00624D10(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x19) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_00624D10

// [0x00624CF0] sub_00624CF0 (28 bytes)
namespace lift_00624CF0 {
// @name sub_00624CF0
// @summary Auto-lifted identical-shape clone of 0x005AC820 (Unknown::walkLinkUntilFlagSet_005AC820).
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_00624CF0(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x19) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x19) == 0);
    return eax;
}
} // namespace lift_005AC820
} // namespace lift_00624CF0

// [0x00624E80] sub_00624E80 (28 bytes)
namespace lift_00624E80 {
// @name UnsignedOrderedPair_store
// @summary Writes the unsigned min of (a, b) to out[0] and the unsigned max to out[1].
// (no class: free function, cdecl; out pointer is the first argument)
void fn_00624E80(uint32_t* out, uint32_t a, uint32_t b) {
    if (a < b) {
        out[0] = a;
        out[1] = b;
    } else {
        out[0] = b;
        out[1] = a;
    }
}
} // namespace lift_00624E80

// [0x00620F60] sub_00620F60 (31 bytes)
namespace lift_00620F60 {
// @name sub_00620F60
// @summary Auto-lifted identical-shape clone of 0x00404D50 (ElementCountFromRange).
namespace lift_00404D50 {
// @name ElementCountFromRange
// @class Unknown
// @summary Returns 0 if field +0x04 is null; otherwise (field +0x08 - field +0x04) / 88 (signed, truncating).
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00620F60(void* self) {
    const int32_t first = lift_field<int32_t>(self, 0x04);
    if (first == 0) {
        return 0;
    }
    // 32-bit wrapping difference, as computed by the original sub/imul sequence.
    const int32_t diff = static_cast<int32_t>(
        static_cast<uint32_t>(lift_field<int32_t>(self, 0x08)) -
        static_cast<uint32_t>(first));
    // Signed high-half multiply by 0x2E8BA2E9, arithmetic shift right by 4,
    // then add the sign bit of the shifted value (round toward zero).
    const int64_t product = static_cast<int64_t>(diff) * static_cast<int64_t>(0x38E38E39);
    const int32_t high = static_cast<int32_t>(product >> 32);
    const int32_t shifted = high >> 4;
    const int32_t sign = static_cast<int32_t>(static_cast<uint32_t>(shifted) >> 31);
    return shifted + sign;
}
} // namespace lift_00404D50
} // namespace lift_00620F60
