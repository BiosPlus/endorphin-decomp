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

// [0x00593E20] IdentityNode::vfunc_9_off_4 (138 bytes)
namespace lift_00593E20 {
// @name IdentityNode::vfunc_9_off_4
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x00593D90 (IdentityNode::initIdentityMatrixOnce).
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_0091D550;
extern int mem_00B40D00;
extern float mem_00B40CC0;
extern float mem_00B40CC4;
extern float mem_00B40CC8;
extern float mem_00B40CCC;
extern float mem_00B40CD0;
extern float mem_00B40CD4;
extern float mem_00B40CD8;
extern float mem_00B40CDC;
extern float mem_00B40CE0;
extern float mem_00B40CE4;
extern float mem_00B40CE8;
extern float mem_00B40CEC;
extern float mem_00B40CF0;
extern float mem_00B40CF4;
extern float mem_00B40CF8;
extern float mem_00B40CFC;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_00593E20(void* self) {
    (void)self;
    if ((mem_00B40D00 & 1) != 0) {
        return &mem_00B40CC0;
    }
    mem_00B40D00 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B40CC0 = 1.0f;
    mem_00B40CC4 = 0.0f;
    mem_00B40CC8 = 0.0f;
    mem_00B40CCC = 0.0f;
    mem_00B40CD0 = 0.0f;
    mem_00B40CD4 = 1.0f;
    mem_00B40CD8 = 0.0f;
    mem_00B40CDC = 0.0f;
    mem_00B40CE0 = 0.0f;
    mem_00B40CE4 = 0.0f;
    mem_00B40CE8 = 1.0f;
    mem_00B40CEC = 0.0f;
    mem_00B40CF0 = 0.0f;
    mem_00B40CF4 = 0.0f;
    mem_00B40CF8 = 0.0f;
    mem_00B40CFC = 1.0f;

    ext_006A6C87(&mem_0091D550);
    return &mem_00B40CC0;
}
} // namespace lift_00593D90
} // namespace lift_00593E20

// [0x0059CBD0] IdentityNode::vfunc_3_off_4 (140 bytes)
namespace lift_0059CBD0 {
// @name IdentityNode::vfunc_3_off_4
// @class IdentityNode
// @summary Auto-lifted identical-shape clone of 0x006265C0 (TransformRefNode::vfunc_3_off_4).
namespace lift_006265C0 {
extern void ext_006A6C87(uint32_t arg);

extern uint32_t mem_00B41458;
extern float mem_00B41418;
extern float mem_00B4141C;
extern float mem_00B41420;
extern float mem_00B41424;
extern float mem_00B41428;
extern float mem_00B4142C;
extern float mem_00B41430;
extern float mem_00B41434;
extern float mem_00B41438;
extern float mem_00B4143C;
extern float mem_00B41440;
extern float mem_00B41444;
extern float mem_00B41448;
extern float mem_00B4144C;
extern float mem_00B41450;
extern float mem_00B41454;

// @name TransformRefNode::vfunc_3_off_4
// @class TransformRefNode
// @summary One-time initialisation of a set of shared float constants (1.0/0.0 table), then calls ext_006A6C87 with 0x91F1E0; always returns &mem_00B4B7D8.
void* fn_0059CBD0(void* self) {
    (void)self;

    if ((mem_00B41458 & 1u) == 0) {
        mem_00B41458 |= 1u;

        mem_00B41418 = 1.0f;
        mem_00B4141C = 0.0f;
        mem_00B41420 = 0.0f;
        mem_00B41424 = 0.0f;
        mem_00B41428 = 0.0f;
        mem_00B4142C = 1.0f;
        mem_00B41430 = 0.0f;
        mem_00B41434 = 0.0f;
        mem_00B41438 = 0.0f;
        mem_00B4143C = 0.0f;
        mem_00B41440 = 1.0f;
        mem_00B41444 = 0.0f;
        mem_00B41448 = 0.0f;
        mem_00B4144C = 0.0f;
        mem_00B41450 = 0.0f;
        mem_00B41454 = 1.0f;

        ext_006A6C87(0x91D650u);
    }

    return static_cast<void*>(&mem_00B41418);
}
} // namespace lift_006265C0
} // namespace lift_0059CBD0
