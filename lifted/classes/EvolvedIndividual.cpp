// Lifted C++ translation unit: lifted/classes/EvolvedIndividual.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005171B0]
namespace lift_005171B0 {
extern uint32_t mem_00A9EFC0;
extern uint32_t mem_00AEC0D0;
extern uint32_t mem_00AEC0D4;
extern uint32_t mem_00924FC0;

extern uint32_t ext_005170A0();
extern void ext_0046F7D0(uint32_t out_ptr);
extern uint32_t __thiscall ext_0055DA20(uint32_t self, uint32_t a, uint32_t b);

// @name EvolvedIndividual::vfunc_13_off_C
// @class EvolvedIndividual
// @summary Looks up a property/symbol by name, returning a descriptor pair if matched or an empty descriptor otherwise.
// @field EvolvedIndividual +0x10 uint32_t field_0x10
uint32_t __thiscall fn_005171B0(uint32_t self, uint32_t out_ptr, uint32_t name_str) {
    if ((mem_00AEC0D4 & 1u) == 0u) {
        mem_00AEC0D4 |= 1u;
        mem_00AEC0D0 = ext_005170A0();
    }

    using EqFn = uint8_t(__cdecl*)(uint32_t, uint32_t);
    uint8_t eq = reinterpret_cast<EqFn>(mem_00924FC0)(name_str, mem_00A9EFC0);
    if (eq != 0) {
        ext_0055DA20(out_ptr, mem_00AEC0D0, self + 4u);
        return out_ptr;
    }

    ext_0046F7D0(out_ptr);
    return out_ptr;
}
} // namespace lift_005171B0

// [0x00507E80] EvolvedIndividual::vfunc_6 (35 bytes)
namespace lift_00507E80 {
extern const char* mem_00A9EFC0;

// @name EvolvedIndividual::vfunc_6
// @class EvolvedIndividual
// @summary Auto-lifted identical-shape clone of 0x005A98F0 (NMData::BackGroundData::vfunc_6).
namespace lift_005A98F0 {
extern const char* mem_00A9EFC0;

// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9EFC0;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_00507E80(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9EFC0);
}
} // namespace lift_0047DB90
} // namespace lift_005A98F0
} // namespace lift_00507E80

// [0x00516E60] EvolvedIndividual::vfunc_1_off_8 (73 bytes)
namespace lift_00516E60 {
// Import slot holding _invalid_parameter_noinfo (MSVCR80); only reached on an
// out-of-range path that the loop guard already excludes.
extern void (*mem_00925134)(void);

// @name EvolvedIndividual::vfunc_1_off_8
// @class EvolvedIndividual
// @summary Walks the element-pointer array at +0x0C..+0x10 and stores each element's index into its +0x34 slot.
// @field EvolvedIndividual +0x0C uint32_t field_0x0C
// @field EvolvedIndividual +0x10 uint32_t field_0x10
void __thiscall fn_00516E60(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t i = 0;
    for (;;) {
        const uint32_t begin = *reinterpret_cast<const uint32_t*>(base + 0x0C);
        if (begin == 0)
            break;
        const uint32_t end = *reinterpret_cast<const uint32_t*>(base + 0x10);
        const uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
        if (i >= count)
            break;
        // Original re-checks the bound here; with the guard above, the call is unreachable.
        if (i >= count)
            mem_00925134();
        const uint32_t elem = reinterpret_cast<const uint32_t*>(
            static_cast<uintptr_t>(begin))[i];
        auto* element = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(elem));
        *reinterpret_cast<uint32_t*>(element + 0x34) = i;
        ++i;
    }
}
} // namespace lift_00516E60

// [0x00516E10]
namespace lift_00516E10 {
extern void (*mem_00925134)();

// @name EvolvedIndividual::vfunc_0_off_8
// @class EvolvedIndividual
// @summary Sets owner pointer on added item and updates indices of all owned items
// @field EvolvedIndividual +0x0C uint32_t* field_0x0C
// @field EvolvedIndividual +0x10 uint32_t* field_0x10
void __thiscall fn_00516E10(void* this_ptr, void* item, uint32_t /*unused*/) {
    uint8_t* self = reinterpret_cast<uint8_t*>(this_ptr);
    uint8_t* item_bytes = reinterpret_cast<uint8_t*>(item);

    // Set owner pointer (EvolvedIndividual* = this_ptr - 0x8) at item + 0x30
    *reinterpret_cast<uint32_t*>(item_bytes + 0x30) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self - 0x8));

    uint32_t i = 0;
    for (;;) {
        uint32_t* begin = *reinterpret_cast<uint32_t**>(self + 0x0C);
        if (!begin) {
            break;
        }
        uint32_t* end = *reinterpret_cast<uint32_t**>(self + 0x10);
        int32_t count = static_cast<int32_t>(end - begin);
        if (i >= static_cast<uint32_t>(count)) {
            break;
        }

        if (!begin || i >= static_cast<uint32_t>(count)) {
            mem_00925134();
        }

        uint32_t* begin2 = *reinterpret_cast<uint32_t**>(self + 0x0C);
        uint8_t* elem = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(begin2[i]));
        *reinterpret_cast<uint32_t*>(elem + 0x34) = i;
        ++i;
    }
}
} // namespace lift_00516E10
