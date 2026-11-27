// Lifted C++ translation unit: lifted/templates/SequenceType.cpp
#include "lift_compat.h"

// [0x004C2160] Properties::SequenceType<std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>, Properties::GetConstStringProxy, DeRefValue>::vfunc_3 (61 bytes)
namespace lift_004C2160 {
extern void (*mem_00925134)(void);  // import slot: _invalid_parameter_noinfo (MSVCR80)

// @name Properties::SequenceType::vfunc_3
// @class Properties::SequenceType<std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>, Properties::GetConstStringProxy, DeRefValue>
// @summary Loads the inner range pointer from self, validates its cur/end fields (cur must not exceed end, else invalid-parameter handler), then continues at 0x004C21A0 (outside the decoded span).
// @field Properties::SequenceType +0x00 void* field_0x00
void fn_004C2160(void* self) {
    // Inner range object pointer stored at self+0x00 (32-bit address).
    void* range = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x00)));

    // range+0x04 = current position, range+0x08 = end position (offsets on the inner
    // object, not on the SequenceType; type not recovered).
    uint32_t cur = lift_field<uint32_t>(range, 0x04);
    uint32_t end = lift_field<uint32_t>(range, 0x08);
    if (cur > end) {
        mem_00925134();
    }

    // Control transfers to 0x004C21A0, which lies past the 61-byte span of this
    // symbol. The remaining body is not present in the disassembly provided, so the
    // lift stops here. The second stack argument ([ebp+0x0C]) is read only by that
    // continuation and is therefore not modelled.
}
} // namespace lift_004C2160

// [0x00505B30]
namespace lift_00505B30 {
extern uint32_t mem_00925134;
extern uint32_t __thiscall ext_00494FF0(void* self, void* arg1, uint32_t arg2);
extern void __thiscall ext_00493D90(void* self);

// @name SequenceType_VectorChromosome_vfunc_3
// @class Properties::SequenceType<std::vector<Chromosome, std::allocator<Chromosome>>, Properties::GetPropertySource, DeRefValue>
// @summary Iterates over a vector of Chromosome elements and invokes the visitor's vfunc_0 on each until it returns false.
// @field std::vector<Chromosome> +0x04 uint32_t _Myfirst
// @field std::vector<Chromosome> +0x08 uint32_t _Mylast
void __stdcall sub_00505B30(uint32_t* vec_ptr, void* visitor) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    uint8_t* vec = reinterpret_cast<uint8_t*>(*vec_ptr);
    uint32_t cur = lift_field<uint32_t>(vec, 0x04);
    if (cur > lift_field<uint32_t>(vec, 0x08)) {
        invalid_param();
    }

    for (;;) {
        uint32_t end = lift_field<uint32_t>(vec, 0x08);
        if (lift_field<uint32_t>(vec, 0x04) > end) {
            invalid_param();
        }
        if (cur == end) {
            break;
        }
        if (cur >= lift_field<uint32_t>(vec, 0x08)) {
            invalid_param();
        }

        uint8_t tmp[16]{};
        uint32_t* pair = reinterpret_cast<uint32_t*>(ext_00494FF0(tmp, tmp + 4, cur));
        void** vtable = *reinterpret_cast<void***>(visitor);
        auto visit_fn = reinterpret_cast<uint8_t(__thiscall*)(void*, uint32_t, uint32_t)>(vtable[0]);
        uint8_t keep_going = visit_fn(visitor, pair[0], pair[1]);
        ext_00493D90(tmp + 4);

        if (!keep_going) {
            break;
        }
        if (cur >= lift_field<uint32_t>(vec, 0x08)) {
            invalid_param();
        }
        cur += 0x68;
    }
}
} // namespace lift_00505B30
