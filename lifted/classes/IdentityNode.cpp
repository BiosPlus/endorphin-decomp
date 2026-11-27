// Lifted C++ translation unit: lifted/classes/IdentityNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>

#include <new>
namespace lift_0059CC60 {
extern void ext_00480920(uint32_t arg);

// @name IdentityNode::vfunc_2_off_4
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x00551A10 (NMCamera::Orthogonal::vfunc_5).
void fn_0059CC60(uint32_t arg) {
    ext_00480920(arg);
}
} // namespace lift_0059CC60

// [0x00620EF0] IdentityNode::vfunc_17_off_C (99 bytes)
namespace lift_00620EF0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_00620EB0(void* self, void* owner);

// @name IdentityNode::vfunc_17_off_C
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_00620EF0(void* self) {
    void* mem = ext_006A5C62(0xE8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_00620EB0(mem, owner);
}
} // namespace lift_00620EF0

// [0x00593D90] IdentityNode::vfunc_10_off_4 (138 bytes)
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_0091D540;
extern int mem_00B40CB8;
extern float mem_00B40C78;
extern float mem_00B40C7C;
extern float mem_00B40C80;
extern float mem_00B40C84;
extern float mem_00B40C88;
extern float mem_00B40C8C;
extern float mem_00B40C90;
extern float mem_00B40C94;
extern float mem_00B40C98;
extern float mem_00B40C9C;
extern float mem_00B40CA0;
extern float mem_00B40CA4;
extern float mem_00B40CA8;
extern float mem_00B40CAC;
extern float mem_00B40CB0;
extern float mem_00B40CB4;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_00593D90(void* self) {
    (void)self;
    if ((mem_00B40CB8 & 1) != 0) {
        return &mem_00B40C78;
    }
    mem_00B40CB8 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B40C78 = 1.0f;
    mem_00B40C7C = 0.0f;
    mem_00B40C80 = 0.0f;
    mem_00B40C84 = 0.0f;
    mem_00B40C88 = 0.0f;
    mem_00B40C8C = 1.0f;
    mem_00B40C90 = 0.0f;
    mem_00B40C94 = 0.0f;
    mem_00B40C98 = 0.0f;
    mem_00B40C9C = 0.0f;
    mem_00B40CA0 = 1.0f;
    mem_00B40CA4 = 0.0f;
    mem_00B40CA8 = 0.0f;
    mem_00B40CAC = 0.0f;
    mem_00B40CB0 = 0.0f;
    mem_00B40CB4 = 1.0f;

    ext_006A6C87(&mem_0091D540);
    return &mem_00B40C78;
}
} // namespace lift_00593D90
