// Lifted C++ translation unit: lifted/Geometry/FrustumType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484B0(uint32_t self, uint32_t arg);
#include <cstdint>

// [0x005B10B0] Geometry::FrustumType::vfunc_2 (17 bytes)
// @name Geometry::FrustumType::vfunc_2
// @class Geometry::FrustumType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B10B0(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484B0(first, second);
}

// [0x005B1A70] Geometry::FrustumType::vfunc_3 (64 bytes)
namespace lift_005B1A70 {
extern double ext_005B11E0(int which);

// @name Geometry::FrustumType::vfunc_3
// @class Geometry::FrustumType
// @summary Returns s2 * pi * m^2 where m = (s1 + s0) / 2 (rounded to float) and s_k = ext_005B11E0(k); the float argument is overwritten before being read, so it is unused.
float fn_005B1A70(float /*unused*/) {
    // rdata constants: mem_00993828 == 0.5, mem_009576E8 == 3.1415927410125732 (float pi widened to double)
    constexpr double kHalf = 0.5;
    constexpr double kPi = 3.1415927410125732;

    const double s1 = ext_005B11E0(1);
    const double s0 = ext_005B11E0(0);
    // Original stores the midpoint to a float stack slot, so round it to float here.
    const float mid = static_cast<float>((s1 + s0) * kHalf);
    const double s2 = ext_005B11E0(2);

    const double m = static_cast<double>(mid);
    return static_cast<float>(s2 * (kPi * m * m));
}
} // namespace lift_005B1A70

// [0x005B42D0]
namespace lift_005B42D0 {
using u32 = std::uint32_t;

// External callees (lifted elsewhere).
u32 ext_005B3FF0(u32 self, u32 arg);
u32 ext_005B4010(u32 self, u32 arg);
u32 ext_005B4030(u32 self, u32 arg);
u32 ext_00671F30(u32 self);

// @name Geometry::FrustumType::vfunc_18
// @class Geometry::FrustumType
// @summary Dispatches on a selector argument (0x29E, 0x2F8, 0x29F, else) to one of three helpers or sub_00671F30, then returns the first argument unchanged.
u32 fn_005B42D0(u32 self, u32 selector, u32 arg) {
    switch (selector) {
    case 0x29E:
        ext_005B4030(self, arg);
        break;
    case 0x29E + 0x5A:
        ext_005B3FF0(self, arg);
        break;
    case 0x29E + 0x5A + 1:
        ext_005B4010(self, arg);
        break;
    default:
        ext_00671F30(self);
        break;
    }
    return self;
}
} // namespace lift_005B42D0
