// Lifted C++ translation unit: lifted/Primitives/Cuboid.cpp
#include "lift_compat.h"

// [0x0053B4F0] Primitives::Cuboid::vfunc_28 (150 bytes)
namespace lift_0053B4F0 {
extern void ext_0053B4B0(void* self);

// OpenGL 1.1 entry points imported by the original (glBegin/glEnd/glNormal3fv/
// glTexCoord2fv/glVertex3fv). Declared here so the lift compiles without <GL/gl.h>.
extern void glBegin(GLenum mode);
extern void glEnd();
extern void glNormal3fv(const GLfloat* v);
extern void glTexCoord2fv(const GLfloat* v);
extern void glVertex3fv(const GLfloat* v);

// Cuboid face data (.rdata): 6 face normals, 4 texcoord pairs, 24 vertex indices.
extern const float mem_009555C8[];  // normals: 6 x float[3]
extern const float mem_00955610[];  // texcoords: 4 x float[2]
extern const int8_t mem_00955630[]; // vertex index bytes, consumed 4 per normal

// @name Primitives::Cuboid::vfunc_28
// @class Primitives::Cuboid
// @summary Emits the cuboid as six immediate-mode GL quads (normal, texcoord, vertex per corner) when the enable flag at +0x20 is set.
// @field Primitives::Cuboid +0x20 int32_t field_0x20
// @field Primitives::Cuboid +0x3C float[3] field_0x3C (vertex array base; vertex i is at +0x3C + 12*i, i signed byte)
void fn_0053B4F0(void* self) {
    if (lift_field<int32_t>(self, 0x20) == 0) {
        return;
    }

    ext_0053B4B0(self);

    constexpr GLenum GL_QUADS = 0x0007;
    glBegin(GL_QUADS);

    const uint8_t* vertex_base = reinterpret_cast<const uint8_t*>(self) + 0x3C;
    int vi = 0;
    for (int face = 0; face < 6; ++face) {
        const float* normal = mem_009555C8 + face * 3;
        glNormal3fv(normal);
        for (int corner = 0; corner < 4; ++corner, ++vi) {
            const float* texcoord = mem_00955610 + corner * 2;
            glTexCoord2fv(texcoord);
            const int8_t index = mem_00955630[vi];
            const float* vertex = reinterpret_cast<const float*>(vertex_base + 12 * index);
            glVertex3fv(vertex);
        }
    }

    glEnd();
}
} // namespace lift_0053B4F0
