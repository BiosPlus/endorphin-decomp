// Lifted C++ translation unit: lifted/templates/SetType.cpp
#include "lift_compat.h"

// [0x004BAF90] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
namespace lift_004BAF90 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>
// @summary Auto-lifted identical-shape clone of 0x004B4D90 (PointainerVectorType::vfunc_3).
namespace lift_004B4D90 {
void* __stdcall ext_004BA920(void* out_pair, DWORD elem);
    void __thiscall ext_00493D90(void* self);
    extern void (__cdecl* mem_00925134)();

// @name PointainerVectorType::vfunc_3
// @class Properties::PointainerVectorType
// @summary Iterates over a vector of pointers, transforms each element via ext_004B4C00, and invokes visitor vfunc_0 until it returns false.
// @field VectorContainer +0x04 uint32_t* begin
// @field VectorContainer +0x08 uint32_t* end
void __stdcall fn_004BAF90(void* arg1, void* arg2) {
    uint8_t* vec = *reinterpret_cast<uint8_t**>(arg1);
    uint32_t* it = lift_field<uint32_t*>(vec, 0x4);
    if (it > lift_field<uint32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    while (true) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x8);
        if (lift_field<uint32_t*>(vec, 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }

        uint32_t pair_buf[2] = {0, 0};
        uint32_t* pair = reinterpret_cast<uint32_t*>(ext_004BA920(pair_buf, *it));

        void** vtable = *reinterpret_cast<void***>(arg2);
        typedef uint8_t (__thiscall* VisitorFn)(void*, uint32_t, uint32_t);
        VisitorFn visit = reinterpret_cast<VisitorFn>(vtable[0]);
        uint8_t cont = visit(arg2, pair[0], pair[1]);

        ext_00493D90(pair_buf);

        if (!cont) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        ++it;
    }
}
} // namespace lift_004B4D90
} // namespace lift_004BAF90

// [0x00500C50] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
namespace lift_00500C50 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_3
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>
// @summary Auto-lifted identical-shape clone of 0x004B4D90 (PointainerVectorType::vfunc_3).
namespace lift_004B4D90 {
void* __stdcall ext_005007C0(void* out_pair, DWORD elem);
    void __thiscall ext_00493D90(void* self);
    extern void (__cdecl* mem_00925134)();

// @name PointainerVectorType::vfunc_3
// @class Properties::PointainerVectorType
// @summary Iterates over a vector of pointers, transforms each element via ext_004B4C00, and invokes visitor vfunc_0 until it returns false.
// @field VectorContainer +0x04 uint32_t* begin
// @field VectorContainer +0x08 uint32_t* end
void __stdcall fn_00500C50(void* arg1, void* arg2) {
    uint8_t* vec = *reinterpret_cast<uint8_t**>(arg1);
    uint32_t* it = lift_field<uint32_t*>(vec, 0x4);
    if (it > lift_field<uint32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    while (true) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x8);
        if (lift_field<uint32_t*>(vec, 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }

        uint32_t pair_buf[2] = {0, 0};
        uint32_t* pair = reinterpret_cast<uint32_t*>(ext_005007C0(pair_buf, *it));

        void** vtable = *reinterpret_cast<void***>(arg2);
        typedef uint8_t (__thiscall* VisitorFn)(void*, uint32_t, uint32_t);
        VisitorFn visit = reinterpret_cast<VisitorFn>(vtable[0]);
        uint8_t cont = visit(arg2, pair[0], pair[1]);

        ext_00493D90(pair_buf);

        if (!cont) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        ++it;
    }
}
} // namespace lift_004B4D90
} // namespace lift_00500C50
