// Lifted C++ translation unit: lifted/ExprParser/Vector3Type.cpp
#include "lift_compat.h"
extern "C" void ext_0066C030(void* self, void* arg);
extern "C" void ext_00672110(void* self, void* arg);

void fn_0066D0C0(void* self, void** slot) {
    ext_0066C030(static_cast<char*>(self) + 0x08, *slot);
    *slot = nullptr;
}
// Shared zero vector (float[3] at 0x00B5963C) and its lazy-init flag (bit 0 at 0x00B59648).
extern float mem_00B5963C[3];
extern uint32_t mem_00B59648;

extern float mem_00B5963C[3];
extern uint32_t mem_00B59648;
// @class ExprParser::Vector3Type
// @summary Calls slot 5 on self with arg2, passes the result to sub_00672110 (this=arg2), returns arg2.
// @field ExprParser::Vector3Type +0x00 void* vtable
void* fn_0066B530(void* self, void* a1, void* a2) {
    (void)a1;  // first stack argument is never read
    // The original also pushes a saved-register word and a literal 0 for the
    // slot-5 call; those are not modelled here (see report).
    // Indirect call through vtable slot 5 (offset 0x14) on self.
    void** vtbl = *static_cast<void***>(self);
    void* r = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5])(self, a2);
    ext_00672110(a2, r);
    return a2;
}

// [0x0066B680] ExprParser::Vector3Type::vfunc_43 (48 bytes)
// @name ExprParser::Vector3Type::vfunc_43
// @class ExprParser::Vector3Type
// @summary Adds the vector from arg2->+0x04->vfunc_5(arg2) component-wise into the float[3] at *a1.
// @field Unknown +0x00 float* field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_0066B680(void* self, void** a1, void* a2) {
    (void)self;
    void* sub = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    void** vtbl = *static_cast<void***>(sub);
    float* src = static_cast<float*>(reinterpret_cast<void* (*)(void*, void*)>(vtbl[5])(sub, a2));
    float* dst = static_cast<float*>(*a1);
    for (int i = 0; i < 3; ++i) {
        dst[i] += src[i];
    }
}

// [0x0066B6B0] ExprParser::Vector3Type::vfunc_44 (48 bytes)
// @name ExprParser::Vector3Type::vfunc_44
// @class ExprParser::Vector3Type
// @summary Subtracts the vector from arg2->+0x04->vfunc_5(arg2) component-wise from the float[3] at *a1.
// @field Unknown +0x00 float* field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_0066B6B0(void* self, void** a1, void* a2) {
    (void)self;
    void* sub = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    void** vtbl = *static_cast<void***>(sub);
    float* src = static_cast<float*>(reinterpret_cast<void* (*)(void*, void*)>(vtbl[5])(sub, a2));
    float* dst = static_cast<float*>(*a1);
    for (int i = 0; i < 3; ++i) {
        dst[i] -= src[i];
    }
}

// [0x0066B560] ExprParser::Vector3Type::vfunc_5 (57 bytes)
// @name ExprParser::Vector3Type::vfunc_5
// @class ExprParser::Vector3Type
// @summary Returns the float[3] already held in *a1, or lazily initialises and returns the shared zero vector.
// @field Unknown +0x00 void* field_0x00
void* fn_0066B560(void* self, void** a1) {
    (void)self;
    if (*a1 != nullptr) {
        return *a1;
    }
    if ((mem_00B59648 & 1u) == 0) {
        mem_00B59648 |= 1u;
        mem_00B5963C[0] = 0.0f;
        mem_00B5963C[1] = 0.0f;
        mem_00B5963C[2] = 0.0f;
    }
    return mem_00B5963C;
}

// [0x0066B620] ExprParser::Vector3Type::vfunc_42 (93 bytes)
// @name ExprParser::Vector3Type::vfunc_42
// @class ExprParser::Vector3Type
// @summary Returns 1 if both arg vectors (each fetched via +0x04->vfunc_5) are component-wise equal, else 0 (NaN compares unequal).
// @field Unknown +0x04 void* field_0x04
int fn_0066B620(void* self, void* a1, void* a2) {
    (void)self;
    void* sub2 = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    void** vtbl2 = *static_cast<void***>(sub2);
    float* vb = static_cast<float*>(reinterpret_cast<void* (*)(void*, void*)>(vtbl2[5])(sub2, a2));
    void* sub1 = *reinterpret_cast<void**>(static_cast<char*>(a1) + 0x04);
    void** vtbl1 = *static_cast<void***>(sub1);
    float* va = static_cast<float*>(reinterpret_cast<void* (*)(void*, void*)>(vtbl1[5])(sub1, a1));
    for (int i = 0; i < 3; ++i) {
        if (!(va[i] == vb[i])) {
            return 0;
        }
    }
    return 1;
}
