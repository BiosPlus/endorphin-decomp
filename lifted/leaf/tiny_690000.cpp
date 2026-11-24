// Lifted C++ translation unit: lifted/leaf/tiny_690000.cpp
#include "lift_compat.h"
extern "C" int mem_0098FABC;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_00699040
// @summary Stores address of mem_0098FABC into field at offset +0x0.
extern "C" void __fastcall fn_00699040(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098FABC;
}

// [0x00692210] sub_00692210 (19 bytes)
// @name sub_00692210
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00692210(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0xC);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x10);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x00699930] sub_00699930 (19 bytes)
// @name sub_00699930
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00699930(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x1C);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x20);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x00692000] sub_00692000 (12 bytes)
namespace lift_00692000 {
// Table of 32-bit entries at global mem_00B5AE98, indexed by the first stack argument.
extern DWORD mem_00B5AE98[];

// @name lookupTableEntry00B5AE98
// @summary Returns mem_00B5AE98[index] where index is the single stack argument (__cdecl).
extern DWORD fn_00692000(DWORD index) {
    return mem_00B5AE98[index];
}
} // namespace lift_00692000

// [0x00699180] sub_00699180 (17 bytes)
namespace lift_00699180 {
// @name Unknown::initCore
// @class Unknown
// @summary Initializes three 32-bit fields of the object in ecx: stores the constant 0x0098FAC4 at +0x00, clears +0x04 and +0x08.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_00699180(void* self) {
    // Original: mov eax,ecx / xor ecx,ecx / mov [eax+4],ecx / mov [eax],0x98fac4 / mov [eax+8],ecx / ret
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x00) = 0x0098FAC4u;
    lift_field<uint32_t>(self, 0x08) = 0u;
}
} // namespace lift_00699180

// [0x00696DB0]
namespace lift_00696DB0 {
// @name init_00696DB0
// @summary Initializes a 20-byte struct with 0x19, three zeros, and 1.
// @field struct +0x00 uint32_t field_0x00
// @field struct +0x04 uint32_t field_0x04
// @field struct +0x08 uint32_t field_0x08
// @field struct +0x0C uint32_t field_0x0C
// @field struct +0x10 uint32_t field_0x10
void __thiscall sub_00696DB0(void* self) {
    uint32_t* fields = reinterpret_cast<uint32_t*>(self);
    fields[0] = 0x19;
    fields[1] = 0;
    fields[2] = 0;
    fields[3] = 0;
    fields[4] = 1;
}
} // namespace lift_00696DB0

// [0x00696D90]
namespace lift_00696D90 {
// @name initStruct_00696D90
// @summary Initializes a 20-byte struct with 0x19 at +0x00, zeros at +0x04..+0x0C, and 1 at +0x10, returning this.
// @field Struct +0x00 uint32_t field_0x00
// @field Struct +0x04 uint32_t field_0x04
// @field Struct +0x08 uint32_t field_0x08
// @field Struct +0x0C uint32_t field_0x0C
// @field Struct +0x10 uint32_t field_0x10


void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_00696D90(uint32_t this_ptr) {
    mem_write32(this_ptr + 0x00, 0x19);
    mem_write32(this_ptr + 0x04, 0);
    mem_write32(this_ptr + 0x08, 0);
    mem_write32(this_ptr + 0x0C, 0);
    mem_write32(this_ptr + 0x10, 1);
    return this_ptr;
}
} // namespace lift_00696D90

// [0x0069B680] sub_0069B680 (30 bytes)
namespace lift_0069B680 {
// @name shrinkEndByOneSlotIfNonEmpty
// @summary If the pointer at +0x4 is non-null and (end - begin) >> 3 is nonzero, subtract 8 from the pointer at +0x8.
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
void fn_0069B680(void* self) {
    auto& first = lift_field<uint32_t>(self, 0x04);
    auto& last = lift_field<uint32_t>(self, 0x08);

    if (first == 0) {
        return;
    }

    // The original code computes (last - first) >> 3 with `sar`, which sets ZF
    // from the shifted result; `je` therefore tests that shifted value.
    const int32_t slots = static_cast<int32_t>(last - first) >> 3;
    if (slots == 0) {
        return;
    }

    last -= 8;
}
} // namespace lift_0069B680
