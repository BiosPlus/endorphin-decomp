// Lifted C++ translation unit: lifted/ExprParser/Operators/AssignToSetMethod.cpp
#include "lift_compat.h"

// [0x006A1FB0]
namespace lift_006A1FB0 {
extern void ext_0048A120(uint8_t* begin, uint8_t* end);
extern void __thiscall ext_006720C0(void* self, uint32_t arg);
extern void ext_006A6DD2(void);
extern void (*mem_00925134)(void);

// @name ExprParser::Operators::AssignToSetMethod::vfunc_2
// @class ExprParser::Operators::AssignToSetMethod
// @summary Evaluates AssignToSetMethod operator on expression evaluation stacks.
// @field ExprParser::Operators::AssignToSetMethod +0x00 void** vtable
void __thiscall fn_006A1FB0(void* self, uint8_t* arg0, uint8_t* arg1) {
    uint8_t* begin = lift_field<uint8_t*>(arg1, 0x04);
    int32_t count = 0;
    if (begin == nullptr) {
        ext_006A6DD2();
        return;
    }
    uint8_t* end = lift_field<uint8_t*>(arg1, 0x08);
    count = static_cast<int32_t>(end - begin) >> 3;
    if (count < 1) {
        ext_006A6DD2();
        return;
    }

    auto** vtable = lift_field<void**>(self, 0x00);
    auto vfunc_3 = reinterpret_cast<void(__thiscall*)(void*, void*, void*)>(vtable[3]);

    if (count < 2) {
        uint8_t tmp[8] = {};
        ext_006720C0(tmp, 0);
        int32_t idx = count - 1;
        uint8_t* cur_begin = lift_field<uint8_t*>(arg1, 0x04);
        if (cur_begin == nullptr ||
            static_cast<uint32_t>(idx) >= static_cast<uint32_t>(static_cast<int32_t>(lift_field<uint8_t*>(arg1, 0x08) - cur_begin) >> 3)) {
            mem_00925134();
        }
        cur_begin = lift_field<uint8_t*>(arg1, 0x04);
        vfunc_3(self, cur_begin + idx * 8, tmp);

        void* obj = lift_field<void*>(tmp, 0x04);
        if (obj != nullptr) {
            auto** obj_vt = lift_field<void**>(obj, 0x00);
            auto vfunc_30 = reinterpret_cast<void(__thiscall*)(void*, void*)>(obj_vt[30]);
            vfunc_30(obj, tmp);
        }
    } else {
        uint32_t idx1 = static_cast<uint32_t>(count - 1);
        if (idx1 >= static_cast<uint32_t>(count)) {
            mem_00925134();
        }
        int32_t idx2 = count - 2;
        uint8_t* cur_begin = lift_field<uint8_t*>(arg1, 0x04);
        uint8_t* elem1 = cur_begin + idx1 * 8;
        if (cur_begin == nullptr ||
            static_cast<uint32_t>(idx2) >= static_cast<uint32_t>(static_cast<int32_t>(lift_field<uint8_t*>(arg1, 0x08) - cur_begin) >> 3)) {
            mem_00925134();
        }
        cur_begin = lift_field<uint8_t*>(arg1, 0x04);
        vfunc_3(self, cur_begin + idx2 * 8, elem1);

        cur_begin = lift_field<uint8_t*>(arg1, 0x04);
        if (cur_begin != nullptr) {
            uint8_t* cur_end = lift_field<uint8_t*>(arg1, 0x08);
            if ((static_cast<int32_t>(cur_end - cur_begin) >> 3) != 0) {
                ext_0048A120(cur_end - 8, cur_end);
                lift_field<uint8_t*>(arg1, 0x08) = cur_end - 8;
            }
        }
    }

    uint8_t* a0_begin = lift_field<uint8_t*>(arg0, 0x04);
    if (a0_begin != nullptr) {
        uint8_t* a0_end = lift_field<uint8_t*>(arg0, 0x08);
        if ((static_cast<int32_t>(a0_end - a0_begin) >> 2) != 0) {
            lift_field<uint8_t*>(arg0, 0x08) = a0_end - 4;
        }
    }
}
} // namespace lift_006A1FB0
