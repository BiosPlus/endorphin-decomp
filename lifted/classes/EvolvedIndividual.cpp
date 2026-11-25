// Lifted C++ translation unit: lifted/classes/EvolvedIndividual.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00507E80] EvolvedIndividual::vfunc_6 (35 bytes)
namespace lift_00507E80 {
extern const char* mem_00A9EFC0;

// @name EvolvedIndividual::vfunc_6
// @class EvolvedIndividual
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_00507E80(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EFC0);
    return out;
}
} // namespace lift_00507E80

// [0x00516E60] EvolvedIndividual::vfunc_1_off_8 (73 bytes)
namespace lift_00516E60 {
// @name EvolvedIndividual::vfunc_1_off_8
// @class EvolvedIndividual
// @summary Walks the pointer vector at +0x0C..+0x10 and stores each element's index into that element's +0x34 field.
// @field EvolvedIndividual +0x0C void** elements_begin
// @field EvolvedIndividual +0x10 void** elements_end
// @field ElementUnknown +0x34 int32_t field_0x34
//
// The original is stdcall-style (`ret 0x8`); the two stack arguments are unused
// and the stub keeps only `self`. The _invalid_parameter_noinfo guards inside
// the loop are unreachable once the begin pointer and index bound are checked,
// so they are omitted.
void fn_00516E60(void* self) {
    void** const begin = lift_field<void**>(self, 0x0C);
    void** const end = lift_field<void**>(self, 0x10);

    if (begin == nullptr) {
        return;
    }

    const ptrdiff_t count = (reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) / 4;

    for (ptrdiff_t i = 0; i < count; ++i) {
        void* element = begin[i];
        lift_field<int32_t>(element, 0x34) = static_cast<int32_t>(i);
    }
}
} // namespace lift_00516E60

// [0x00516E10]
namespace lift_00516E10 {
// @name EvolvedIndividual::vfunc_0_off_8
// @class EvolvedIndividual
// @summary Sets the owner pointer on an added Interpreter and updates indices of all elements
// @field EvolvedIndividual +0x14 void** elements_begin (offset +0xC from Owner subobject at +0x8)
// @field EvolvedIndividual +0x18 void** elements_end (offset +0x10 from Owner subobject at +0x8)

void __thiscall fn_00516E10(void* self, void* item, uint32_t /*unused*/) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* item_ptr = static_cast<uint8_t*>(item);
    *reinterpret_cast<uint32_t*>(item_ptr + 0x30) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base - 0x8));

    for (uint32_t i = 0;; ++i) {
        uint32_t begin_addr = *reinterpret_cast<uint32_t*>(base + 0xC);
        if (begin_addr == 0) {
            break;
        }
        uint32_t end_addr = *reinterpret_cast<uint32_t*>(base + 0x10);
        int32_t count = static_cast<int32_t>(end_addr - begin_addr) >> 2;
        if (i >= static_cast<uint32_t>(count)) {
            break;
        }
        uint32_t* elements = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(begin_addr));
        uint8_t* elem = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(elements[i]));
        *reinterpret_cast<uint32_t*>(elem + 0x34) = i;
    }
}
} // namespace lift_00516E10

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
