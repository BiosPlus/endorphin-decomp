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

// [0x0053E2E0]
namespace lift_0053E2E0 {
// @name Primitives::Mesh::vfunc_28
// @class Primitives::Mesh
// @summary Renders the mesh polygons using OpenGL immediate mode with normals, texture coordinates, and vertices.
// @field Primitives::Mesh +0x20 OglRenderer* field_0x20


void* __thiscall ext_005B11F0(void* self); // OglRenderer::vfunc_118

extern void (__stdcall *mem_00925418)(uint32_t cap);            // glEnable
extern void (__stdcall *mem_00925414)();                        // glPushMatrix
extern void (__stdcall *mem_009254B0)(float x, float y, float z); // glScalef
extern void (__stdcall *mem_00925490)(uint32_t mode);           // glBegin
extern void (__stdcall *mem_0092549C)(const float* v);          // glNormal3fv
extern void (__stdcall *mem_009254D4)(const float* v);          // glTexCoord2fv
extern void (__stdcall *mem_00925498)(const float* v);          // glVertex3fv
extern void (__stdcall *mem_00925488)();                        // glEnd
extern void (__stdcall *mem_00925404)();                        // glPopMatrix
extern void (__stdcall *mem_00925438)(uint32_t cap);            // glDisable
extern void (__cdecl *mem_00925134)();                           // _invalid_parameter_noinfo

namespace {
struct MsvcVec {
    uint32_t proxy;
    uint32_t begin;
    uint32_t end;
    uint32_t cap;
};

struct MeshFace {
    MsvcVec vertexIndices;   // +0x00
    MsvcVec texCoordIndices; // +0x10
    MsvcVec normalIndices;   // +0x20
};
} // namespace

void __thiscall fn_0053E2E0(void* self) {
    void* renderer = lift_field<void*>(self, 0x20);
    void* meshData = lift_field<void*>(renderer, 0x0C);
    auto vtbl = *reinterpret_cast<void***>(meshData);

    using GetVecFn = MsvcVec* (__thiscall*)(void*);
    MsvcVec* faces     = reinterpret_cast<GetVecFn>(vtbl[0x3C / 4])(meshData);
    MsvcVec* vertices  = reinterpret_cast<GetVecFn>(vtbl[0x30 / 4])(meshData);
    MsvcVec* normals   = reinterpret_cast<GetVecFn>(vtbl[0x34 / 4])(meshData);
    MsvcVec* texCoords = reinterpret_cast<GetVecFn>(vtbl[0x38 / 4])(meshData);

    mem_00925418(0x0BA1); // GL_NORMALIZE
    mem_00925414();       // glPushMatrix

    float* scale = reinterpret_cast<float*>(ext_005B11F0(renderer));
    mem_009254B0(scale[0], scale[1], scale[2]);

    if (faces->begin > faces->end) {
        mem_00925134();
    }

    auto faceBegin = reinterpret_cast<MeshFace*>(static_cast<uintptr_t>(faces->begin));
    auto faceEnd   = reinterpret_cast<MeshFace*>(static_cast<uintptr_t>(faces->end));

    auto vertsData  = reinterpret_cast<const float*>(static_cast<uintptr_t>(vertices->begin));
    auto normsData  = reinterpret_cast<const float*>(static_cast<uintptr_t>(normals->begin));
    auto texData    = reinterpret_cast<const float*>(static_cast<uintptr_t>(texCoords->begin));

    for (MeshFace* face = faceBegin; face != faceEnd; ++face) {
        auto vIt  = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->vertexIndices.begin));
        auto vEnd = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->vertexIndices.end));
        auto tIt  = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->texCoordIndices.begin));
        auto tEnd = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->texCoordIndices.end));
        auto nIt  = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->normalIndices.begin));
        auto nEnd = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(face->normalIndices.end));

        mem_00925490(9); // GL_POLYGON
        while (vIt != vEnd) {
            if (nIt != nEnd) {
                mem_0092549C(normsData + (*nIt * 3));
                ++nIt;
            }
            if (tIt != tEnd) {
                mem_009254D4(texData + (*tIt * 3));
                ++tIt;
            }
            mem_00925498(vertsData + (*vIt * 3));
            ++vIt;
        }
        mem_00925488(); // glEnd
    }

    mem_00925404();       // glPopMatrix
    mem_00925438(0x0BA1); // glDisable(GL_NORMALIZE)
}
} // namespace lift_0053E2E0
