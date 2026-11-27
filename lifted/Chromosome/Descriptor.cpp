// Lifted C++ translation unit: lifted/Chromosome/Descriptor.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

// [0x005116F0] Chromosome::Descriptor::vfunc_3 (375 bytes)
namespace lift_005116F0 {
// Known callee 0x00640110: thiscall-style helper (self in ecx, one u32 key on stack, returns object pointer).
extern void* ext_00640110(void* self, uint32_t key);
// Known callee 0x00427550: ResetChildAndAssignName.
extern void ext_00427550(void* self, const char* name);
// Known callee 0x00640BC0: cdecl (object pointer, float value).
extern void ext_00640BC0(void* obj, float value);
// Known callee 0x00640AA0: ResetChildFromFormattedId.
extern void ext_00640AA0(void* a, uint32_t b);

extern uint32_t mem_00924FF0;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9F79C;
extern uint32_t mem_00A9FA9C;
extern uint32_t mem_00A9F798;
extern uint32_t mem_00A9FA98;
extern uint32_t mem_00A9F55C;
extern uint32_t mem_00A9F824;
extern uint32_t mem_00A9F820;
extern uint32_t mem_00A9F834;
extern uint32_t mem_00A9F830;
extern uint32_t mem_00A9F658;
extern uint32_t mem_00A9F654;

// Helper mirroring the repeated asm pattern:
//   obj = ext_00640110(a, key); ext_00640BC0(obj, value);
static void apply_float_slot(void* a, uint32_t key, float value) {
    void* obj = ext_00640110(a, key);
    ext_00640BC0(obj, value);
}

// @name Chromosome::Descriptor::vfunc_3
// @class Chromosome::Descriptor
// @summary Pushes the descriptor's name string and 12 float/int values into the child objects of the argument, returning the argument.
// @field Chromosome::Descriptor +0x08 std::string name_string
// @field Chromosome::Descriptor +0x24 uint32_t formatted_id
// @field Chromosome::Descriptor +0x28 float value_28
// @field Chromosome::Descriptor +0x2C float value_2C
// @field Chromosome::Descriptor +0x30 float value_30
// @field Chromosome::Descriptor +0x34 float value_34
// @field Chromosome::Descriptor +0x38 float value_38
// @field Chromosome::Descriptor +0x3C float value_3C
// @field Chromosome::Descriptor +0x40 float value_40
// @field Chromosome::Descriptor +0x44 float value_44
// @field Chromosome::Descriptor +0x48 float value_48
// @field Chromosome::Descriptor +0x4C float value_4C
void* fn_005116F0(void* self, void* a) {
    // Name child: obj = ext_00640110(a, key0); ResetChildAndAssignName(&obj, name.c_str()).
    (void)&mem_00924FF0; // c_str thunk pointer (metadata only)
    void* obj = ext_00640110(a, mem_00A9F838);
    const std::string& name = lift_field<std::string>(self, 0x08);
    ext_00427550(&obj, name.c_str());

    apply_float_slot(a, mem_00A9F79C, lift_field<float>(self, 0x40));
    apply_float_slot(a, mem_00A9FA9C, lift_field<float>(self, 0x44));
    apply_float_slot(a, mem_00A9F798, lift_field<float>(self, 0x48));
    apply_float_slot(a, mem_00A9FA98, lift_field<float>(self, 0x4C));

    {
        void* obj2 = ext_00640110(a, mem_00A9F55C);
        ext_00640AA0(obj2,lift_field<uint32_t>(self, 0x24));
    }

    apply_float_slot(a, mem_00A9F824, lift_field<float>(self, 0x38));
    apply_float_slot(a, mem_00A9F820, lift_field<float>(self, 0x3C));
    apply_float_slot(a, mem_00A9F834, lift_field<float>(self, 0x28));
    apply_float_slot(a, mem_00A9F830, lift_field<float>(self, 0x2C));
    apply_float_slot(a, mem_00A9F658, lift_field<float>(self, 0x30));
    apply_float_slot(a, mem_00A9F654, lift_field<float>(self, 0x34));

    return a;
}
} // namespace lift_005116F0
