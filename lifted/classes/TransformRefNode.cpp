// Lifted C++ translation unit: lifted/classes/TransformRefNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x006264A0] TransformRefNode::vfunc_17_off_C (99 bytes)
namespace lift_006264A0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_00626450(void* self, void* owner);

// @name TransformRefNode::vfunc_17_off_C
// @class TransformRefNode
// @summary Auto-lifted identical-shape clone of 0x004D3070 (NMData::TransitionEventData::vfunc_17_off_C).
void* fn_006264A0(void* self) {
    void* mem = ext_006A5C62(0xEC);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_00626450(mem, owner);
}
} // namespace lift_006264A0

// [0x00626650] TransformRefNode::vfunc_12_off_4 (138 bytes)
namespace lift_00626650 {
// @name TransformRefNode::vfunc_12_off_4
// @class TransformRefNode
// @summary Auto-lifted identical-shape clone of 0x00593D90 (IdentityNode::initIdentityMatrixOnce).
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_0091F1D0;
extern int mem_00B4B860;
extern float mem_00B4B820;
extern float mem_00B4B824;
extern float mem_00B4B828;
extern float mem_00B4B82C;
extern float mem_00B4B830;
extern float mem_00B4B834;
extern float mem_00B4B838;
extern float mem_00B4B83C;
extern float mem_00B4B840;
extern float mem_00B4B844;
extern float mem_00B4B848;
extern float mem_00B4B84C;
extern float mem_00B4B850;
extern float mem_00B4B854;
extern float mem_00B4B858;
extern float mem_00B4B85C;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_00626650(void* self) {
    (void)self;
    if ((mem_00B4B860 & 1) != 0) {
        return &mem_00B4B820;
    }
    mem_00B4B860 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B4B820 = 1.0f;
    mem_00B4B824 = 0.0f;
    mem_00B4B828 = 0.0f;
    mem_00B4B82C = 0.0f;
    mem_00B4B830 = 0.0f;
    mem_00B4B834 = 1.0f;
    mem_00B4B838 = 0.0f;
    mem_00B4B83C = 0.0f;
    mem_00B4B840 = 0.0f;
    mem_00B4B844 = 0.0f;
    mem_00B4B848 = 1.0f;
    mem_00B4B84C = 0.0f;
    mem_00B4B850 = 0.0f;
    mem_00B4B854 = 0.0f;
    mem_00B4B858 = 0.0f;
    mem_00B4B85C = 1.0f;

    ext_006A6C87(&mem_0091F1D0);
    return &mem_00B4B820;
}
} // namespace lift_00593D90
} // namespace lift_00626650

// [0x006266E0] TransformRefNode::vfunc_11_off_4 (138 bytes)
namespace lift_006266E0 {
// @name TransformRefNode::vfunc_11_off_4
// @class TransformRefNode
// @summary Auto-lifted identical-shape clone of 0x00593D90 (IdentityNode::initIdentityMatrixOnce).
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_0091F1C0;
extern int mem_00B4B8A8;
extern float mem_00B4B868;
extern float mem_00B4B86C;
extern float mem_00B4B870;
extern float mem_00B4B874;
extern float mem_00B4B878;
extern float mem_00B4B87C;
extern float mem_00B4B880;
extern float mem_00B4B884;
extern float mem_00B4B888;
extern float mem_00B4B88C;
extern float mem_00B4B890;
extern float mem_00B4B894;
extern float mem_00B4B898;
extern float mem_00B4B89C;
extern float mem_00B4B8A0;
extern float mem_00B4B8A4;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_006266E0(void* self) {
    (void)self;
    if ((mem_00B4B8A8 & 1) != 0) {
        return &mem_00B4B868;
    }
    mem_00B4B8A8 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B4B868 = 1.0f;
    mem_00B4B86C = 0.0f;
    mem_00B4B870 = 0.0f;
    mem_00B4B874 = 0.0f;
    mem_00B4B878 = 0.0f;
    mem_00B4B87C = 1.0f;
    mem_00B4B880 = 0.0f;
    mem_00B4B884 = 0.0f;
    mem_00B4B888 = 0.0f;
    mem_00B4B88C = 0.0f;
    mem_00B4B890 = 1.0f;
    mem_00B4B894 = 0.0f;
    mem_00B4B898 = 0.0f;
    mem_00B4B89C = 0.0f;
    mem_00B4B8A0 = 0.0f;
    mem_00B4B8A4 = 1.0f;

    ext_006A6C87(&mem_0091F1C0);
    return &mem_00B4B868;
}
} // namespace lift_00593D90
} // namespace lift_006266E0

// [0x006265C0] TransformRefNode::vfunc_3_off_4 (140 bytes)
namespace lift_006265C0 {
extern void ext_006A6C87(uint32_t arg);

extern uint32_t mem_00B4B818;
extern float mem_00B4B7D8;
extern float mem_00B4B7DC;
extern float mem_00B4B7E0;
extern float mem_00B4B7E4;
extern float mem_00B4B7E8;
extern float mem_00B4B7EC;
extern float mem_00B4B7F0;
extern float mem_00B4B7F4;
extern float mem_00B4B7F8;
extern float mem_00B4B7FC;
extern float mem_00B4B800;
extern float mem_00B4B804;
extern float mem_00B4B808;
extern float mem_00B4B80C;
extern float mem_00B4B810;
extern float mem_00B4B814;

// @name TransformRefNode::vfunc_3_off_4
// @class TransformRefNode
// @summary One-time initialisation of a set of shared float constants (1.0/0.0 table), then calls ext_006A6C87 with 0x91F1E0; always returns &mem_00B4B7D8.
void* fn_006265C0(void* self) {
    (void)self;

    if ((mem_00B4B818 & 1u) == 0) {
        mem_00B4B818 |= 1u;

        mem_00B4B7D8 = 1.0f;
        mem_00B4B7DC = 0.0f;
        mem_00B4B7E0 = 0.0f;
        mem_00B4B7E4 = 0.0f;
        mem_00B4B7E8 = 0.0f;
        mem_00B4B7EC = 1.0f;
        mem_00B4B7F0 = 0.0f;
        mem_00B4B7F4 = 0.0f;
        mem_00B4B7F8 = 0.0f;
        mem_00B4B7FC = 0.0f;
        mem_00B4B800 = 1.0f;
        mem_00B4B804 = 0.0f;
        mem_00B4B808 = 0.0f;
        mem_00B4B80C = 0.0f;
        mem_00B4B810 = 0.0f;
        mem_00B4B814 = 1.0f;

        ext_006A6C87(0x0091F1E0u);
    }

    return static_cast<void*>(&mem_00B4B7D8);
}
} // namespace lift_006265C0
