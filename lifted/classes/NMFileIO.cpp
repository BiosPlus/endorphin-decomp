// Lifted C++ translation unit: lifted/classes/NMFileIO.cpp
#include "lift_compat.h"
extern "C" void ext_00552B00(void* self, void* arg);

// [0x00553720] NMFileIO::vfunc_3 (36 bytes)
// @name NMFileIO::vfunc_3
// @class NMFileIO
// @summary Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.
// @field NMFileIO +0x5C void* field_0x5c
// @field NMFileIO +0x16C void* field_0x16c
void* fn_00553720(void* self, void* arg) {
    ext_00552B00(static_cast<unsigned char*>(self) + 0x5C, arg);
    ext_00552B00(static_cast<unsigned char*>(self) + 0x16C, arg);
    return arg;
}

// [0x00558D70] NMFileIO::vfunc_1 (280 bytes)
namespace lift_00558D70 {
// @name NMFileIO::vfunc_1
// @class NMFileIO
// @summary Scans a 4-byte-stride pointer range; entries whose std::string at +4 equals a fixed key are routed into this+0x5C (first hit, then moved to +0x16C via ext_00406FC0) or into this+0x16C (later hits).
// @field NMFileIO +0x5C void* field_0x5c
// @field NMFileIO +0x16C void* field_0x16c

// Member helpers, called thiscall-style (ecx = object, one stack argument).
extern void ext_00554530(void* self, uint32_t entry);
extern void ext_00406FC0(void* self, void* arg);

// IAT slot for MSVCP80 operator==(const std::string&, const char*).
extern uint32_t mem_00924FC0;
// Holds the address of the key C string.
extern uint32_t mem_00A9EFAC;

using StrEqFn = bool (*)(const void* str, const char* s);

// Reads a 32-bit guest pointer/word at the given address.
static inline uint32_t load_u32(uint32_t addr) {
    return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(addr));
}

void fn_00558D70(void* self, void* src) {
    // Range lives at src+0x24: begin at +4, end at +8, elements are 4-byte pointers.
    auto* range = static_cast<uint8_t*>(src) + 0x24;
    uint32_t cur = lift_field<uint32_t>(range, 4);
    const uint32_t end = lift_field<uint32_t>(range, 8);

    const auto strEq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(mem_00924FC0));
    const char* key = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EFAC));
    auto* obj = static_cast<uint8_t*>(self);

    bool first = true;
    for (; cur < end; cur += 4) {
        const uint32_t entry = load_u32(cur);
        // Each entry is a pointer to a record whose std::string is at +4.
        const void* name = reinterpret_cast<const void*>(static_cast<uintptr_t>(entry + 4));
        if (!strEq(name, key)) {
            continue;
        }
        if (first) {
            ext_00554530(obj + 0x5C, entry);
            ext_00406FC0(obj + 0x16C, obj + 0x5C);
            first = false;
        } else {
            ext_00554530(obj + 0x16C, entry);
        }
    }
}
} // namespace lift_00558D70
