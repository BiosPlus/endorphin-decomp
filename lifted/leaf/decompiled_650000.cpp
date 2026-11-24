// Lifted C++ translation unit: lifted/leaf/decompiled_650000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_005136C0 {
// @name sub_005136C0
// @summary Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).
namespace lift_00500310 {
// Callee 0x004FFD60: sub_004FFD60 (35B). Called with ECX passed through as `this`, two stack args, DWORD result in EAX.
extern DWORD ext_00511E40(void* self, DWORD a, DWORD b);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name DwordPairInitFromCall_00500310
// @summary Calls ext_004FFD60 with the incoming this and second argument, then initialises the pair object (first argument) with that result and the second argument via initDwordPair; returns the pair object.
void* fn_005136C0(void* self, void* pair, DWORD b) {
    const DWORD value = ext_00511E40(self, b, 0);
    ext_0055DA20(pair, value, b);
    return pair;
}
} // namespace lift_00500310
} // namespace lift_005136C0
#include <cstring>
#include <cstdint>

// [0x005142F0] sub_005142F0 (35 bytes)
namespace lift_005142F0 {
// Known callee 0x005136C0: sub_005136C0 (Auto-lifted identical-shape clone of 0x00500310 (DwordPairInitFromCall_00500310).)
extern void* ext_005136C0(void* self, void* pair, DWORD b);

// @name WrapPairInit_005142F0
// @summary Forwards (self, pair) to ext_005136C0 with a zero DWORD and returns self.
void* fn_005142F0(void* self, void* pair) {
    // Stack-level detail: the 0 store in the disassembly lands in the saved-ECX slot,
    // so the third argument read by the callee is not literally 0 at the ABI level.
    // Lifted as the evident intent (b = 0); verify against the callee before relying on it.
    ext_005136C0(self, pair, 0);
    return self;
}
} // namespace lift_005142F0

// [0x00519C80] sub_00519C80 (42 bytes)
namespace lift_00519C80 {
// MSVC std::basic_string<char>::basic_string(const char*) (thiscall), imported via IAT slot mem_00924FE4.
extern void ext_00629122(void* self, const char* s);
// Literal passed to the string constructor (.rdata).
extern const char mem_00928B5D[];

// @name initStringAndCounters
// @summary Constructs a vtable-tagged object holding a std::string built from a literal, then zeroes two counters and sets a flag to 1; returns this.
// @field +0x00 uint32_t vtable (0x0095219C)
// @field +0x04 std::string name (basic_string subobject, constructed from literal)
// @field +0x20 int32_t field_0x20 (set to 1)
// @field +0x24 int32_t field_0x24 (set to 0)
// @field +0x28 int32_t field_0x28 (set to 0)
void* fn_00519C80(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0095219C;
    ext_00629122(reinterpret_cast<uint8_t*>(self) + 0x04, mem_00928B5D);
    lift_field<int32_t>(self, 0x24) = 0;
    lift_field<int32_t>(self, 0x28) = 0;
    lift_field<int32_t>(self, 0x20) = 1;
    return self;
}
} // namespace lift_00519C80

// [0x0051E7D0] sub_0051E7D0 (41 bytes)
namespace lift_0051E7D0 {
// @name sub_0051E7D0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00500430(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0051E7D0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00500430(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0051E7D0

// [0x00519CB0] sub_00519CB0 (44 bytes)
namespace lift_00519CB0 {
// Import thunk reached via indirect call through IAT slot 0x00924FE0
// (its .rdata value is 0x0062916E). Annotated as the MSVCP80
// basic_string copy constructor: basic_string(const basic_string&).
extern void ext_0062916E(void* self, const void* src);

static inline void store_u32(unsigned char* base, std::size_t off, std::uint32_t v) {
    std::memcpy(base + off, &v, sizeof v);
}

// @name ctorFromStdString
// @class Unknown (vtable 0x0095219C)
// @summary Constructor: writes vtable 0x0095219C, copy-constructs a std::string at +0x04 from the argument, sets +0x20 = 1, zeroes +0x24 and +0x28, returns this.
// @field Unknown +0x00 const void* vptr
// @field Unknown +0x04 MSVCP80_basic_string field_0x04
// @field Unknown +0x20 std::uint32_t field_0x20
// @field Unknown +0x24 std::uint32_t field_0x24
// @field Unknown +0x28 std::uint32_t field_0x28
void* fn_00519CB0(void* self, const void* name) {
    auto* obj = static_cast<unsigned char*>(self);
    store_u32(obj, 0x00, 0x0095219Cu);
    ext_0062916E(obj + 0x04, name);
    store_u32(obj, 0x24, 0u);
    store_u32(obj, 0x28, 0u);
    store_u32(obj, 0x20, 1u);
    return self;
}
} // namespace lift_00519CB0

// [0x00519D10]
namespace lift_00519D10 {
// @name checkStringMatchIndex
// @summary Returns 0 if the string matches the first global string, 1 if it matches the second, or 0 otherwise.

extern uint32_t mem_00924FC4;
extern uint8_t mem_00AECC0C[];
extern uint8_t mem_00AECC28[];

using StringEqFn = uint8_t(__cdecl*)(const void*, const void*);

uint32_t __cdecl sub_00519D10(const void* str) {
    auto eq = reinterpret_cast<StringEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    if (eq(str, mem_00AECC0C) != 0) {
        return 0;
    }
    return eq(str, mem_00AECC28) != 0 ? 1u : 0u;
}
} // namespace lift_00519D10
