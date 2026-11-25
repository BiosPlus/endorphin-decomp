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
