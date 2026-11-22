// Lifted C++ translation unit: lifted/Primitives/Mesh.cpp
#include "lift_compat.h"
// External callee (OglRenderer::vfunc_118): returns pointer to a float[3] scale vector.
extern "C" const float* ext_005B11F0(const void* self);
// GL entry points, reached through their import-address-table slots.
extern "C" void (*mem_00925418)(GLenum);                     // glEnable
extern "C" void (*mem_00925414)(void);                       // glPushMatrix
extern "C" void (*mem_009254B0)(GLfloat, GLfloat, GLfloat); // glScalef
extern "C" void (*mem_00925490)(GLenum);                     // glBegin
extern "C" void (*mem_0092549C)(const GLfloat*);             // glNormal3fv
extern "C" void (*mem_009254D4)(const GLfloat*);             // glTexCoord2fv
extern "C" void (*mem_00925498)(const GLfloat*);             // glVertex3fv
extern "C" void (*mem_00925488)(void);                       // glEnd
extern "C" void (*mem_00925404)(void);                       // glPopMatrix
extern "C" void (*mem_00925438)(GLenum);                     // glDisable
namespace {
constexpr GLenum kGL_NORMALIZE = 0x0BA1;
constexpr GLenum kGL_POLYGON   = 0x0009;
// 32-bit image address -> pointer.
inline const void* addr(uint32_t a) {
    return reinterpret_cast<const void*>(static_cast<uintptr_t>(a));
}
// Calls the virtual slot at vtable byte offset `slot` (4 bytes per entry) returning a pointer.
inline const void* call_vslot(const void* obj, ptrdiff_t slot) {
    using GetFn = const void* (*)(const void*);
    const uint32_t* vtbl = reinterpret_cast<const uint32_t*>(addr(lift_field<uint32_t>(obj, 0)));
    return reinterpret_cast<GetFn>(static_cast<uintptr_t>(vtbl[slot / 4]))(obj);
}
// Element `index` of the float[3] array described by the {begin,end} pair at `vec`.
// Out-of-range access aborts, mirroring the original _invalid_parameter_noinfo path.
inline const float* float3_at(const void* vec, uint32_t index) {
    const uint32_t begin = lift_field<uint32_t>(vec, 0x04);
    const uint32_t end   = lift_field<uint32_t>(vec, 0x08);
    if (begin == 0 || index >= (end - begin) / 12u) std::abort();
    return reinterpret_cast<const float*>(addr(begin + 12u * index));
}
// Index stored at the cursor address (uint32 entries).
inline uint32_t index_at(uint32_t cursor) {
    return lift_field<uint32_t>(addr(cursor), 0);
}
}  // namespace

// [0x0053E2E0] Primitives::Mesh::vfunc_28 (651 bytes)
// @name Primitives::Mesh::vfunc_28
// @class Primitives::Mesh
// @summary Applies the renderer's scale, then draws each primitive as GL_POLYGON, emitting normal, texcoord and vertex per index step.
// @field Primitives::Mesh +0x20 OglRenderer* field_0x20
void fn_0053E2E0(void* self) {
    const void* renderer = addr(lift_field<uint32_t>(self, 0x20));
    const void* src      = addr(lift_field<uint32_t>(renderer, 0x0C));

    const void* prims   = call_vslot(src, 0x3C);
    const void* verts   = call_vslot(src, 0x30);
    const void* normals = call_vslot(src, 0x34);
    const void* uvs     = call_vslot(src, 0x38);

    mem_00925418(kGL_NORMALIZE);
    mem_00925414();
    const float* scale = ext_005B11F0(renderer);
    mem_009254B0(scale[0], scale[1], scale[2]);

    const uint32_t primEnd = lift_field<uint32_t>(prims, 0x08);
    for (uint32_t p = lift_field<uint32_t>(prims, 0x04); p != primEnd; p += 0x30) {
        const void* prim = addr(p);

        uint32_t vIdx       = lift_field<uint32_t>(prim, 0x04);  // vertex index cursor
        const uint32_t vEnd = lift_field<uint32_t>(prim, 0x08);
        uint32_t tIdx       = lift_field<uint32_t>(prim, 0x14);  // texcoord index cursor
        const uint32_t tEnd = lift_field<uint32_t>(prim, 0x18);
        uint32_t nIdx       = lift_field<uint32_t>(prim, 0x24);  // normal index cursor
        const uint32_t nEnd = lift_field<uint32_t>(prim, 0x28);

        mem_00925490(kGL_POLYGON);
        for (; vIdx != vEnd; vIdx += 4) {
            if (nIdx != nEnd) {
                mem_0092549C(float3_at(normals, index_at(nIdx)));
                nIdx += 4;
            }
            if (tIdx != tEnd) {
                mem_009254D4(float3_at(uvs, index_at(tIdx)));
                tIdx += 4;
            }
            mem_00925498(float3_at(verts, index_at(vIdx)));
        }
        mem_00925488();
    }

    mem_00925404();
    mem_00925438(kGL_NORMALIZE);
}
