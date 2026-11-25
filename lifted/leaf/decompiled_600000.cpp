// Lifted C++ translation unit: lifted/leaf/decompiled_600000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_00609730 {
// @name sub_00609730
// @summary Auto-lifted identical-shape clone of 0x004AEC60 (thunk_004AEC60).
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_00609730(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0xC);
    void* vt = lift_field<void*>(sub, 0x4);
    ThisFn target = lift_field<ThisFn>(vt, 0x24);

    target(static_cast<uint8_t*>(sub) + 0x4);
}
} // namespace lift_004AEC60
} // namespace lift_00609730

// [0x00602EC0]
namespace lift_00602EC0 {
void mem_write32(uint32_t addr, uint32_t val);
void mem_write_f32(uint32_t addr, float val);

// @name sub_00602EC0_ctor
// @summary Initializes vtable and zeroes integer and float fields of an object
// @field Object +0x00 uint32_t vtable
// @field Object +0x04 uint32_t field_0x04
// @field Object +0x08 uint32_t field_0x08
// @field Object +0x0c uint32_t field_0x0c
// @field Object +0x10 uint32_t field_0x10
// @field Object +0x14 float field_0x14
// @field Object +0x18 float field_0x18
// @field Object +0x1c float field_0x1c
// @field Object +0x20 float field_0x20
// @field Object +0x24 float field_0x24
// @field Object +0x28 float field_0x28
uint32_t __thiscall sub_00602EC0(uint32_t this_ptr) {
    mem_write32(this_ptr + 0x00, 0x0096f81cu);
    mem_write32(this_ptr + 0x04, 0u);
    mem_write32(this_ptr + 0x08, 0u);
    mem_write32(this_ptr + 0x0c, 0u);
    mem_write32(this_ptr + 0x10, 0u);
    mem_write_f32(this_ptr + 0x1c, 0.0f);
    mem_write_f32(this_ptr + 0x18, 0.0f);
    mem_write_f32(this_ptr + 0x14, 0.0f);
    mem_write_f32(this_ptr + 0x28, 0.0f);
    mem_write_f32(this_ptr + 0x24, 0.0f);
    mem_write_f32(this_ptr + 0x20, 0.0f);
    return this_ptr;
}
} // namespace lift_00602EC0

// [0x0060B8D0] sub_0060B8D0 (62 bytes)
namespace lift_0060B8D0 {
// Format string at 0x009720E8 (.rdata), used as the snprintf format.
extern const char mem_009720E8[];

// @name StringFromFormattedInt
// @summary Formats an int into a 50-byte buffer with snprintf and constructs a std::string in place from it; returns the string object.
std::string* fn_0060B8D0(std::string* self, int value) {
    char buf[50];
    std::snprintf(buf, sizeof(buf), mem_009720E8, value);
    new (self) std::string(buf);
    return self;
}
} // namespace lift_0060B8D0

// [0x0060FA40]
namespace lift_0060FA40 {
// @name Unknown::ReleaseHandleAndThrowNull
// @summary Passes a stack-slot value (ebp-0x18) to a release helper, then throws with two null arguments.

extern void ext_005577A0(void* self);
extern void ext_006A6DD2(void);

void fn_0060FA40(void* local_18) {
    ext_005577A0(local_18);
    // push 0; push 0; call _CxxThrowException
    ext_006A6DD2();
}
} // namespace lift_0060FA40

// [0x0060AF10] sub_0060AF10 (74 bytes)
namespace lift_0060AF10 {
// @name sub_0060AF10
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_0060A3A0(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_0060AF10(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_0060A3A0(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_0060AF10
