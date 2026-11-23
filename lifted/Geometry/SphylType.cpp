// Lifted C++ translation unit: lifted/Geometry/SphylType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484A0(uint32_t self, uint32_t arg);
#include <cmath>
extern "C" float __thiscall ext_005B11E0(void* self, int index);
extern "C" const double mem_009576E8;

extern "C" float __thiscall ext_005B11E0(void* self, int index);
extern "C" const double mem_009576E8;
// @class Geometry::SphylType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1070(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484A0(first, second);
}

// [0x005B17B0]
// @name Geometry::SphylType::vfunc_5
// @class Geometry::SphylType
// @summary Computes projected area of a sphyl along a direction vector.
float __stdcall fn_005B17B0(void* geom, const float* dir) {
    float r = ext_005B11E0(geom, 0);
    double pi_r2 = mem_009576E8 * static_cast<double>(r) * static_cast<double>(r);
    float h = ext_005B11E0(geom, 1);

    float side_area = static_cast<float>(2.0 * static_cast<double>(r) * static_cast<double>(h) + pi_r2);
    float cap_area = static_cast<float>(pi_r2);
    float z_proj = std::fabs(dir[2] * cap_area);

    return dir[0] * side_area + z_proj + dir[1] * side_area;
}

// [0x005B1A30]
namespace lift_005B1A30 {
// @name Geometry::SphylType::computeVolume
// @class Geometry::SphylType
// @summary Computes the volume of a sphyl (capsule) from its radius and length.


double __thiscall ext_005B11E0(void* self, int index);
extern double mem_0095FFC8;
extern double mem_009576E8;

float __stdcall fn_005B1A30(void* arg0) {
    float r = static_cast<float>(ext_005B11E0(arg0, 0));
    double h = ext_005B11E0(arg0, 1);
    double vol = (mem_009576E8 * static_cast<double>(r) * static_cast<double>(r)) *
                 (h + mem_0095FFC8 * static_cast<double>(r));
    return static_cast<float>(vol);
}
} // namespace lift_005B1A30

// [0x005B4E40] Geometry::SphylType::vfunc_16 (806 bytes)
namespace lift_005B4E40 {
extern float ext_005B11E0(int32_t index);
extern void ext_00539AA0(void* self, float* out, void* a, uint32_t lo, void* b, int32_t hi);
extern void ext_00539FB0(void* self, const float* vertex);
// MSVCR80!_invalid_parameter_noinfo (loaded through IAT slot mem_00925134)
extern void (*mem_00925134)(void);

// @name Geometry::SphylType::vfunc_16
// @class Geometry::SphylType
// @summary Emits the vertex rings of a sphere-like primitive (lower latitude rings, equator, upper latitude rings) via SphylType::emitVertex.
// @field Geometry::SphylType +0x04 uint32_t field_0x04
// @field Geometry::SphylType +0x08 int32_t field_0x08
void fn_005B4E40(void* arg1, void* self, int32_t ringCount, int32_t segCount) {
    // arg1 is loaded into ecx on entry but never read afterwards.
    (void)arg1;

    constexpr double kTwoPi = 6.2831854820251465;  // mem_00955090

    const float radius = ext_005B11E0(0);  // A
    const float param1 = ext_005B11E0(1);  // only feeds a store that is overwritten before use
    (void)param1;

    const uint32_t lo = lift_field<uint32_t>(self, 0x04);
    const int32_t hi = lift_field<int32_t>(self, 0x08);
    // Both range checks in the original test the same condition (lo > hi).
    if (lo > static_cast<uint32_t>(hi)) {
        mem_00925134();
    }
    float scratch[3] = {0.0f, 0.0f, 0.0f};
    ext_00539AA0(self, scratch, self, lo, self, hi);

    const int32_t h = ringCount / 2;  // truncating toward zero, matches (n - sign) >> 1
    const int32_t M = segCount;       // segments per ring
    const float step = radius / static_cast<float>(h);

    // Emit one ring of M vertices at radius r. The y slot is zero for every ring.
    auto emit_ring = [&](float r) {
        for (int32_t j = 0; j < M; ++j) {
            const float theta = static_cast<float>(static_cast<double>(j) * kTwoPi / static_cast<double>(M));
            const float c = static_cast<float>(std::cos(static_cast<double>(theta)));
            const float s = static_cast<float>(std::sin(static_cast<double>(theta)));
            float v[3];
            v[0] = c * r;
            v[1] = 0.0f;
            v[2] = s * r;
            ext_00539FB0(self, v);
        }
    };

    // Ring radius at latitude index k: sqrt(A^2 - (k*step)^2), computed as A*cos(asin(s/A)).
    auto ring_radius = [&](int32_t k) -> float {
        const float s = static_cast<float>(k) * step;
        const float u = s / radius;
        const float phi = static_cast<float>(std::asin(static_cast<double>(u)));
        const float c = static_cast<float>(std::cos(static_cast<double>(phi)));
        return c * radius;
    };

    // Lower latitude rings: k = -h .. -1
    for (int32_t k = -h; k < 0; ++k) {
        emit_ring(ring_radius(k));
    }
    // Equator ring (always emitted)
    emit_ring(radius);
    // Upper latitude rings: k = 1 .. h
    for (int32_t k = 1; k <= h; ++k) {
        emit_ring(ring_radius(k));
    }
}
} // namespace lift_005B4E40
