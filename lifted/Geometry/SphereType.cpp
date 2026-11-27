// Lifted C++ translation unit: lifted/Geometry/SphereType.cpp
#include "lift_compat.h"
extern "C" float ext_005B11E0(void* self, int32_t arg);
extern "C" double mem_0095FFC0;
#include <cmath>

// [0x005B1990] Geometry::SphereType::vfunc_3 (42 bytes)
// @name Geometry::SphereType::vfunc_3
// @class Geometry::SphereType
// @summary Returns the volume of the sphere, (4/3)*pi*r^3, where r is the value returned by ext_005B11E0(self, 0).
float fn_005B1990(void* self) {
    // The original takes one stack argument (ret 4) that is overwritten before use, so it is not modeled here.
    const float radius = ext_005B11E0(self, 0);
    const double k = mem_0095FFC0; // 4/3 * pi
    const double r = static_cast<double>(radius);
    return static_cast<float>(k * r * r * r);
}

// [0x005B4150]
// @name Geometry::SphereType::vfunc_18
// @class Geometry::SphereType
// @summary Dispatches to SphereType helper when tag == 0x2f7 or fallback otherwise, returning arg1

#include "lift_compat.h"

extern "C" void __cdecl ext_005B3FF0(uint32_t, uint32_t);
extern "C" void __cdecl ext_00671F30(uint32_t);

uint32_t __thiscall fn_005B4150(void* /*this*/, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    if (arg2 == 0x2f7) {
        ext_005B3FF0(arg1, arg3);
    } else {
        ext_00671F30(arg1);
    }
    return arg1;
}

// [0x005B1370]
// @name Geometry::SphereType::vfunc_4
// @class Geometry::SphereType
// @summary Computes distance from a point to a sphere surface/center via transformed local coordinates
#include "lift_compat.h"
#include <cmath>
#include <cstdint>

extern void __thiscall ext_00540D60(void* self);
extern float __thiscall ext_005B11E0(void* self, uint32_t arg0);
extern float* __thiscall ext_0053B470(void* self, float* out_vec, float scale);
extern void __thiscall ext_0047FFA0(const void* self, float* out_vec, const float* in_vec);

float __stdcall fn_005B1370(float* out_vec, void* sphere, const float* point) {
    out_vec[0] = point[0];
    out_vec[1] = point[1];
    out_vec[2] = point[2];
    out_vec[3] = point[3];
    ext_00540D60(out_vec);

    float radius = ext_005B11E0(sphere, 0);
    float local_buf[4];
    float* scaled = ext_0053B470(out_vec, local_buf, radius);

    out_vec[0] = scaled[0];
    out_vec[1] = scaled[1];
    out_vec[2] = scaled[2];
    out_vec[3] = 1.0f;

    ext_0047FFA0(point, local_buf, out_vec);

    float len_sq = local_buf[0] * local_buf[0]
                 + local_buf[1] * local_buf[1]
                 + local_buf[2] * local_buf[2];
    return std::sqrt(len_sq);
}

// [0x005B1700]
namespace lift_005B1700 {
extern float __thiscall ext_005B11E0(void* self, uint32_t arg0);
extern double mem_009576E8; // pi (stored as double)

// @name Geometry::SphereType::vfunc_5
// @class Geometry::SphereType
// @summary Returns |pi * r * r| where r = ext_005B11E0(self, 0); the second stack argument is unused.
float __stdcall fn_005B1700(void* self, uint32_t /*unused*/) {
    const float r = ext_005B11E0(self, 0);
    const double rd = static_cast<double>(r);
    // Original order: st0 = pi * r, then st1 = r * st0, rounded to float on store.
    const double pr = mem_009576E8 * rd;
    const float v = static_cast<float>(rd * pr);
    return std::fabs(v);
}
} // namespace lift_005B1700

// [0x005B4CD0] Geometry::SphereType::vfunc_16 (359 bytes)
namespace lift_005B4CD0 {
// Known callee 0x00539AA0: Float3Vector::erase (Erases a range [first, last) of 12-byte float3 elements from the vector and returns the updated checked iterator.)
// Known callee 0x00539FB0: sub_00539FB0 (159B) - Float3Vector push of one float3 (called with this=points, arg=&p[0]).
// Known callee 0x005B11E0: ReadFloatArrayElement (Returns float element `index` from the float array at this+0x10 (thiscall, ret 4).)
extern float ext_005B11E0(void* self, int32_t index);
extern void* ext_00539AA0(void* self, void* out_iter, void* first_container, float* first_ptr, void* last_container, float* last_ptr);
extern void ext_00539FB0(void* self, const float* value);
extern void* mem_00925134;   // _invalid_parameter_noinfo function pointer
extern double mem_00955090;  // 2*pi (double)

// @name Geometry::SphereType::vfunc_16
// @class Geometry::SphereType
// @summary Clears a Float3Vector and refills it with latitude rings of points on a sphere of radius params[0] (stacks latitude steps, slices points per ring, XZ-plane rings)
// @field Float3Vector +0x04 float* begin
// @field Float3Vector +0x08 float* end
struct CheckedFloat3Iter {
    void* container;
    float* ptr;
};

void fn_005B4CD0(void* params, void* points, int32_t stacks, int32_t slices) {
    const float radius = ext_005B11E0(params, 0);
    const float b = ext_005B11E0(params, 0);
    const float two_b = b + b;

    float* begin = lift_field<float*>(points, 0x04);
    float* end = lift_field<float*>(points, 0x08);
    if (reinterpret_cast<std::uintptr_t>(begin) > reinterpret_cast<std::uintptr_t>(end)) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    const float step = two_b / static_cast<float>(stacks);

    CheckedFloat3Iter out_iter{};
    ext_00539AA0(points, &out_iter, points, begin, points, end);

    float p[3] = {0.0f, 0.0f, 0.0f};
    if (stacks <= 0) {
        return;
    }

    int32_t i = -(stacks / 2);
    int32_t remaining = stacks;
    do {
        const float t = static_cast<float>(i) * step;
        const float u = t / radius;
        const float theta = static_cast<float>(std::asin(static_cast<double>(u)));
        const float ring = static_cast<float>(std::cos(static_cast<double>(theta))) * radius;

        if (slices > 0) {
            const float fslices = static_cast<float>(slices);
            for (int32_t j = 0; j < slices; ++j) {
                const float phi = static_cast<float>(
                    (static_cast<double>(j) * mem_00955090) / static_cast<double>(fslices));
                const float c = static_cast<float>(std::cos(static_cast<double>(phi)));
                const float s = static_cast<float>(std::sin(static_cast<double>(phi)));
                p[0] = c * ring;
                p[1] = 0.0f;
                p[2] = s * ring;
                ext_00539FB0(points, p);
            }
        }
        ++i;
    } while (--remaining != 0);
}
} // namespace lift_005B4CD0
