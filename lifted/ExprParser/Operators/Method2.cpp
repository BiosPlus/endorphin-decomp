// Lifted C++ translation unit: lifted/ExprParser/Operators/Method2.cpp
#include "lift_compat.h"

// [0x006A2100]
namespace lift_006A2100 {
// @name ExprParser::Operators::Method2::vfunc_2
// @class ExprParser::Operators::Method2
// @summary Pops 3 expression tokens from the operand stack, invokes virtual method 0xc4 on the first token's object with all 3 tokens, destroys the temporary result and the 3 popped tokens, and pops 1 entry from arg1.
// @field std::vector<Entry8> +0x04 uint8_t* begin
// @field std::vector<Entry8> +0x08 uint8_t* end


extern void ext_0048A120(uint8_t* begin, uint8_t* end);
extern void ext_006A6DD2(void);
extern void (*mem_00925134)(void);

void __thiscall fn_006A2100(void* self, uint8_t* arg1, uint8_t* arg2) {
    (void)self;
    uint8_t* begin = *reinterpret_cast<uint8_t**>(arg2 + 0x4);
    int32_t count = 0;
    if (begin != nullptr) {
        uint8_t* end = *reinterpret_cast<uint8_t**>(arg2 + 0x8);
        count = static_cast<int32_t>(end - begin) >> 3;
    }
    if (begin == nullptr || count < 3) {
        ext_006A6DD2();
    }

    uint32_t idx0 = static_cast<uint32_t>(count - 3);
    if (idx0 >= static_cast<uint32_t>(count)) {
        mem_00925134();
    }
    begin = *reinterpret_cast<uint8_t**>(arg2 + 0x4);
    uint8_t* elem0 = begin + 8 * idx0;

    uint32_t idx1 = static_cast<uint32_t>(count - 2);
    if (begin == nullptr || idx1 >= static_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<uint8_t**>(arg2 + 0x8) - begin) >> 3)) {
        mem_00925134();
    }
    begin = *reinterpret_cast<uint8_t**>(arg2 + 0x4);
    uint8_t* elem1 = begin + 8 * idx1;

    uint32_t idx2 = static_cast<uint32_t>(count - 1);
    if (begin == nullptr || idx2 >= static_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<uint8_t**>(arg2 + 0x8) - begin) >> 3)) {
        mem_00925134();
    }
    begin = *reinterpret_cast<uint8_t**>(arg2 + 0x4);
    uint8_t* elem2 = begin + 8 * idx2;

    uint8_t result[8] = {};
    void* obj = *reinterpret_cast<void**>(elem0 + 0x4);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFuncC4 = void(__thiscall*)(void*, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
    auto fn_c4 = reinterpret_cast<VFuncC4>(vtable[0xC4 / 4]);
    fn_c4(obj, result, elem0, elem1, elem2);

    void* res_obj = *reinterpret_cast<void**>(result + 0x4);
    if (res_obj != nullptr) {
        void** res_vtable = *reinterpret_cast<void***>(res_obj);
        using VFunc78 = void(__thiscall*)(void*, uint8_t*);
        auto fn_78 = reinterpret_cast<VFunc78>(res_vtable[0x78 / 4]);
        fn_78(res_obj, result);
    }

    for (int i = 0; i < 3; ++i) {
        uint8_t* vec_begin = *reinterpret_cast<uint8_t**>(arg2 + 0x4);
        if (vec_begin != nullptr) {
            uint8_t* vec_end = *reinterpret_cast<uint8_t**>(arg2 + 0x8);
            if ((static_cast<int32_t>(vec_end - vec_begin) >> 3) != 0) {
                ext_0048A120(vec_end - 8, vec_end);
                *reinterpret_cast<uint8_t**>(arg2 + 0x8) = vec_end - 8;
            }
        }
    }

    uint8_t* arg1_begin = *reinterpret_cast<uint8_t**>(arg1 + 0x4);
    if (arg1_begin != nullptr) {
        uint8_t* arg1_end = *reinterpret_cast<uint8_t**>(arg1 + 0x8);
        if ((static_cast<int32_t>(arg1_end - arg1_begin) >> 2) != 0) {
            *reinterpret_cast<uint8_t**>(arg1 + 0x8) = arg1_end - 4;
        }
    }
}
} // namespace lift_006A2100
