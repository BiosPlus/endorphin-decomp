// Lifted C++ translation unit: lifted/Geometry/CuboidType.cpp
#include "lift_compat.h"
extern "C" void ext_00647C30(void* self);
extern "C" uint32_t __thiscall ext_006484C0(uint32_t self, uint32_t arg);
#include <cmath>
// @name Geometry::CuboidType::vfunc_16
// @class Geometry::CuboidType
// @summary Generates the 8 scaled cuboid corner vertices and appends them to a vector.
// @field std::vector<Vec3> +0x04 void* begin
// @field std::vector<Vec3> +0x08 void* end
extern "C" uint32_t mem_00925134;
extern "C" void* __thiscall ext_00539AA0(void* self, uint32_t* out, void* b1, void* it1, void* b2, void* it2);
extern "C" float __thiscall ext_005B11E0(void* self, int32_t index);
extern "C" void __thiscall ext_00539FB0(void* self, const float* vec3);

// @class Geometry::CuboidType
// @summary Generates the 8 scaled cuboid corner vertices and appends them to a vector.
// @field std::vector<Vec3> +0x04 void* begin
// @field std::vector<Vec3> +0x08 void* end
extern "C" uint32_t mem_00925134;
extern "C" void* __thiscall ext_00539AA0(void* self, uint32_t* out, void* b1, void* it1, void* b2, void* it2);
extern "C" float __thiscall ext_005B11E0(void* self, int32_t index);
extern "C" void __thiscall ext_00539FB0(void* self, const float* vec3);

// @name Geometry::CuboidType::vfunc_2
// @class Geometry::CuboidType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1030(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484C0(first, second);
}
extern "C" float __thiscall ext_005B11E0(void* self, int32_t axis);

// [0x005B1680]
// @name Geometry::CuboidType::vfunc_5
// @class Geometry::CuboidType
// @summary Computes a weighted sum of cuboid face areas projected onto a 3D vector

extern "C" float __thiscall ext_005B11E0(void* self, int32_t axis);

extern "C" float __stdcall fn_005B1680(void* cuboid, const float* vec) {
    float a = ext_005B11E0(cuboid, 2);
    float b = ext_005B11E0(cuboid, 1);
    float term0 = std::fabs((a * b) * vec[0]);

    float c = ext_005B11E0(cuboid, 2);
    float d = ext_005B11E0(cuboid, 0);
    float sum1 = term0 + (c * d) * vec[1];

    float e = ext_005B11E0(cuboid, 1);
    float f = ext_005B11E0(cuboid, 0);
    return sum1 + (e * f) * vec[2];
}

// [0x005B4B10]
void __thiscall fn_005B4B10(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
    (void)self;
    (void)arg1;
    (void)arg3;
    (void)arg4;

    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134));
    void* vec_begin = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg2) + 0x4);
    void* vec_end = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg2) + 0x8);

    if (reinterpret_cast<uintptr_t>(vec_begin) > reinterpret_cast<uintptr_t>(vec_end)) {
        invalid_param();
    }

    vec_begin = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg2) + 0x4);
    if (reinterpret_cast<uintptr_t>(vec_begin) > *reinterpret_cast<uintptr_t*>(static_cast<uint8_t*>(arg2) + 0x8)) {
        invalid_param();
    }

    uint32_t ctx = 0;
    ext_00539AA0(arg2, &ctx, arg2, vec_begin, arg2, vec_end);
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(ctx));

    uintptr_t table_addr = 0x0095F6F0;
    while (table_addr < 0x0095F750) {
        float v[3] = {0.0f, 0.0f, 0.0f};
        for (int32_t i = 0; i < 3; ++i) {
            float scale = ext_005B11E0(target, i);
            v[i] = scale * *reinterpret_cast<const float*>(table_addr);
            table_addr += 4;
        }
        ext_00539FB0(arg2, v);
    }
}

// [0x005B19C0] Geometry::CuboidType::vfunc_3 (40 bytes)
// @name Geometry::CuboidType::vfunc_3
// @class Geometry::CuboidType
// @summary Returns the product of extents ext(1) * ext(0) * ext(2) via sub_005B11E0 (float).
// @field Geometry::CuboidType (no direct field accesses; only calls to ext_005B11E0)
float fn_005B19C0(void* self) {
    // self is passed as the thiscall receiver (ecx) to each callee.
    const float a = ext_005B11E0(self, 1);
    const float b = ext_005B11E0(self, 0);
    const float c = ext_005B11E0(self, 2);
    return (a * b) * c;
}

// [0x005B4190] Geometry::CuboidType::vfunc_18 (116 bytes)
namespace lift_005B4190 {
// Callees (cdecl: self pushed last, i.e. (self, value) order).
extern void ext_005B3FF0(void* self, uint32_t value);
extern void ext_005B4010(void* self, uint32_t value);
extern void ext_005B4030(void* self, uint32_t value);
extern void ext_00671F30(void* self);

// @name Geometry::CuboidType::vfunc_18
// @class Geometry::CuboidType
// @summary Dispatches on a 32-bit selector (key) to one of three handlers, passing the value argument; for any other key calls a default handler. Returns self.
// (No fields accessed: the function never dereferences the object; ECX is saved but unused.)
void* __stdcall fn_005B4190(void* self, uint32_t key, uint32_t value) {
    switch (key) {
    case 0x271:
        ext_005B4010(self, value);
        break;
    case 0x29E:
        ext_005B4030(self, value);
        break;
    case 0x37E:
        ext_005B3FF0(self, value);
        break;
    default:
        ext_00671F30(self);
        break;
    }
    return self;
}
} // namespace lift_005B4190
