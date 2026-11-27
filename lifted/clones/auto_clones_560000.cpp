// Lifted C++ translation unit: lifted/clones/auto_clones_560000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstddef>
#include <cmath>
#include <cstdlib>
#include <cstring>

// [0x00560270] sub_00560270 (143 bytes)
namespace lift_00560270 {
// @name sub_00560270
// @summary Auto-lifted identical-shape clone of 0x00475710 (Vector::InsertAndGetIterator_00475710).
namespace lift_00475710 {
extern void ext_0055F850(void* self, void* a2, uint8_t* a3, uint32_t one, uint32_t a4);
extern int mem_00925134;  // IAT slot for MSVCR80!_invalid_parameter_noinfo

// @name Vector::InsertAndGetIterator_00475710
// @class Vector
// @summary Validates the vector range, calls ext_00475240 to insert one element at a3, then writes {container, iterator} to out.
// @field Vector +0x04 uint8_t* begin
// @field Vector +0x08 uint8_t* end

namespace {

struct VecHeader {
    void*    field_0x00;
    uint8_t* begin;   // +0x04
    uint8_t* end;     // +0x08
};

struct IterResult {
    void*    container;  // written from this
    uint8_t* pos;        // +0x04 in out struct
};

[[noreturn]] void invalid_parameter_noinfo() {
    (void)&mem_00925134;  // original: call dword ptr [0x925134]
    std::abort();
}

} // namespace

void fn_00560270(void* self, IterResult* out, void* a2, uint8_t* a3, uint32_t a4) {
    auto* vec = static_cast<VecHeader*>(self);

    uint8_t* begin = vec->begin;
    ptrdiff_t index = 0;
    if (begin != nullptr && ((vec->end - begin) >> 4) != 0) {
        if (begin > vec->end) {
            invalid_parameter_noinfo();
        }
        if (a2 == nullptr || a2 != self) {
            invalid_parameter_noinfo();
        }
        index = (a3 - begin) >> 4;
    }

    ext_0055F850(self, a2, a3, 1, a4);

    begin = vec->begin;
    if (begin > vec->end) {
        invalid_parameter_noinfo();
    }

    uint8_t* newpos = begin + (index << 4);
    if (newpos > vec->end || newpos < vec->begin) {
        invalid_parameter_noinfo();
    }

    out->pos = newpos;
    out->container = self;
}
} // namespace lift_00475710
} // namespace lift_00560270
