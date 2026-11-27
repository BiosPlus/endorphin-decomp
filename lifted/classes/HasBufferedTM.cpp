// Lifted C++ translation unit: lifted/classes/HasBufferedTM.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x0065D190] HasBufferedTM::vfunc_2 (138 bytes)
namespace lift_0065D190 {
// @name HasBufferedTM::vfunc_2
// @class HasBufferedTM
// @summary Auto-lifted identical-shape clone of 0x00593D90 (IdentityNode::initIdentityMatrixOnce).
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_009213A0;
extern int mem_00B58EE0;
extern float mem_00B58EA0;
extern float mem_00B58EA4;
extern float mem_00B58EA8;
extern float mem_00B58EAC;
extern float mem_00B58EB0;
extern float mem_00B58EB4;
extern float mem_00B58EB8;
extern float mem_00B58EBC;
extern float mem_00B58EC0;
extern float mem_00B58EC4;
extern float mem_00B58EC8;
extern float mem_00B58ECC;
extern float mem_00B58ED0;
extern float mem_00B58ED4;
extern float mem_00B58ED8;
extern float mem_00B58EDC;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_0065D190(void* self) {
    (void)self;
    if ((mem_00B58EE0 & 1) != 0) {
        return &mem_00B58EA0;
    }
    mem_00B58EE0 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B58EA0 = 1.0f;
    mem_00B58EA4 = 0.0f;
    mem_00B58EA8 = 0.0f;
    mem_00B58EAC = 0.0f;
    mem_00B58EB0 = 0.0f;
    mem_00B58EB4 = 1.0f;
    mem_00B58EB8 = 0.0f;
    mem_00B58EBC = 0.0f;
    mem_00B58EC0 = 0.0f;
    mem_00B58EC4 = 0.0f;
    mem_00B58EC8 = 1.0f;
    mem_00B58ECC = 0.0f;
    mem_00B58ED0 = 0.0f;
    mem_00B58ED4 = 0.0f;
    mem_00B58ED8 = 0.0f;
    mem_00B58EDC = 1.0f;

    ext_006A6C87(&mem_009213A0);
    return &mem_00B58EA0;
}
} // namespace lift_00593D90
} // namespace lift_0065D190

// [0x0065D220] HasBufferedTM::vfunc_1 (138 bytes)
namespace lift_0065D220 {
// @name HasBufferedTM::vfunc_1
// @class HasBufferedTM
// @summary Auto-lifted identical-shape clone of 0x00593D90 (IdentityNode::initIdentityMatrixOnce).
namespace lift_00593D90 {
extern void ext_006A6C87(const void* arg);
extern const char mem_009213B0;
extern int mem_00B58F28;
extern float mem_00B58EE8;
extern float mem_00B58EEC;
extern float mem_00B58EF0;
extern float mem_00B58EF4;
extern float mem_00B58EF8;
extern float mem_00B58EFC;
extern float mem_00B58F00;
extern float mem_00B58F04;
extern float mem_00B58F08;
extern float mem_00B58F0C;
extern float mem_00B58F10;
extern float mem_00B58F14;
extern float mem_00B58F18;
extern float mem_00B58F1C;
extern float mem_00B58F20;
extern float mem_00B58F24;

// @name IdentityNode::initIdentityMatrixOnce
// @class IdentityNode
// @summary One-time init of a global 4x4 identity float matrix at mem_00B40C78 (guarded by bit 0 of mem_00B40CB8); calls ext_006A6C87 on first init. Returns the matrix address.
void* fn_0065D220(void* self) {
    (void)self;
    if ((mem_00B58F28 & 1) != 0) {
        return &mem_00B58EE8;
    }
    mem_00B58F28 |= 1;

    // Row-major 4x4 identity: 0x78 + 4*(4*row + col).
    mem_00B58EE8 = 1.0f;
    mem_00B58EEC = 0.0f;
    mem_00B58EF0 = 0.0f;
    mem_00B58EF4 = 0.0f;
    mem_00B58EF8 = 0.0f;
    mem_00B58EFC = 1.0f;
    mem_00B58F00 = 0.0f;
    mem_00B58F04 = 0.0f;
    mem_00B58F08 = 0.0f;
    mem_00B58F0C = 0.0f;
    mem_00B58F10 = 1.0f;
    mem_00B58F14 = 0.0f;
    mem_00B58F18 = 0.0f;
    mem_00B58F1C = 0.0f;
    mem_00B58F20 = 0.0f;
    mem_00B58F24 = 1.0f;

    ext_006A6C87(&mem_009213B0);
    return &mem_00B58EE8;
}
} // namespace lift_00593D90
} // namespace lift_0065D220
