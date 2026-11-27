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
extern void ext_00406FC0(void* self, void* arg);
extern void ext_00427A60(void* self);
extern void ext_00554530(void* self, uint32_t arg);
extern uint32_t mem_00924FC0;
extern uint32_t mem_00925134;
extern uint32_t mem_00A9EFAC;

// Checked vector iterator as laid out on the stack by the original code:
//   +0x0 container, +0x4 container2 (same owner), +0x8 current element address.
struct DbgIter {
    uint32_t container;
    uint32_t container2;
    uint32_t cur;
};

// MSVCP80 std::operator==(const std::string&, const char*), __cdecl.
using StrEqFn = bool (*)(const void* str, const char* rhs);

// MSVCR80!_invalid_parameter_noinfo via IAT slot.
static inline void invalid_param() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

static inline uint32_t addr_of(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

// @name NMFileIO::vfunc_1
// @class NMFileIO
// @summary Scans the pointer vector at arg+0x24 and, for each entry whose name string equals the global key, inserts it into self+0x5C (first match) or self+0x16C (later matches).
// @field NMFileIO +0x5C void* field_0x5c
// @field NMFileIO +0x16C void* field_0x16c
void fn_00558D70(void* self, void* arg) {
    uint8_t* self_b = static_cast<uint8_t*>(self);
    uint8_t* vec = static_cast<uint8_t*>(arg) + 0x24;
    bool firstMatch = true;  // [esp+0x13]

    // Iterator 1 starts at begin (vec+0x4) and is advanced to a valid element.
    uint32_t begin = lift_field<uint32_t>(vec, 0x4);
    if (begin > lift_field<uint32_t>(vec, 0x8)) {
        invalid_param();
    }
    DbgIter it1{addr_of(vec), addr_of(vec), begin};
    ext_00427A60(&it1);

    // Iterator 2 is the end sentinel.
    uint32_t end = lift_field<uint32_t>(vec, 0x8);
    if (lift_field<uint32_t>(vec, 0x4) > end) {
        invalid_param();
    }
    DbgIter it2{addr_of(vec), addr_of(vec), end};
    ext_00427A60(&it2);

    for (;;) {
        // Iterator compatibility check (both must belong to vec).
        uint32_t container = it1.container2;
        if (container == 0 || container != it2.container2) {
            invalid_param();
        }
        if (it1.cur >= it2.cur) {
            break;
        }

        uint32_t elem = it1.cur;
        if (!(elem < lift_field<uint32_t>(vec, 0x8))) {
            invalid_param();
        }

        // node = *elem; compare node->name (string at node+4) against the global key.
        uint32_t node = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem));
        const char* key = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EFAC));
        StrEqFn strEq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(mem_00924FC0));
        const void* nameStr = reinterpret_cast<const void*>(static_cast<uintptr_t>(node + 4));

        if (strEq(nameStr, key)) {
            uint32_t value = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem));
            if (firstMatch) {
                ext_00554530(self_b + 0x5C, value);
                ext_00406FC0(self_b + 0x16C, self_b + 0x5C);
                firstMatch = false;
            } else {
                ext_00554530(self_b + 0x16C, value);
            }
        }

        // Advance: elem += 4, then let the iterator skip to the next valid element.
        if (!(elem < lift_field<uint32_t>(vec, 0x8))) {
            invalid_param();
        }
        it1.cur = elem + 4;
        ext_00427A60(&it1);
    }
}
} // namespace lift_00558D70
