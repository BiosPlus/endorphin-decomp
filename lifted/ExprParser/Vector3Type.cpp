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
extern "C" uint32_t __thiscall ext_00699000(uint32_t self, uint32_t arg);

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

// [0x0066D120] ExprParser::Vector3Type::vfunc_46 (98 bytes)
// @name ExprParser::Vector3Type::vfunc_46
// @class ExprParser::Vector3Type
// @summary Replaces the float[3] at *a1 with the cross product of itself and the vector returned by a2->+0x04->vfunc_5(a2).
// @field Unknown +0x04 void* field_0x04

#include "lift_compat.h"

void fn_0066D120(void* self, void** a1, void* a2) {
    (void)self;
    // Source vector: a2->+0x04->vfunc_5(a2) (vtable slot 5, offset 0x14).
    void* sub = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    void** vtbl = *static_cast<void***>(sub);
    float* b = static_cast<float*>(reinterpret_cast<void* (*)(void*, void*)>(vtbl[5])(sub, a2));

    // Destination vector a = *a1, updated in place with a x b.
    float* a = static_cast<float*>(*a1);
    float a0 = a[0], a1c = a[1], a2c = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];

    a[0] = a1c * b2 - a2c * b1;
    a[1] = a2c * b0 - a0 * b2;
    a[2] = a0 * b1 - a1c * b0;
}

// [0x0066D040]
// @name ExprParser::Vector3Type::vfunc_18
// @class ExprParser::Vector3Type
// @summary Returns the address of a function-local static zero-valued vector, constructing it (and registering its destructor) on first call.

#include "lift_compat.h"

extern uint8_t mem_00B59684; // function-local static init guard (bit 0)
extern uint8_t mem_00B5967C; // function-local static vector object
extern uint8_t mem_009217B0; // destructor registration argument

// Static object constructor (this, arg). Matches the signature already declared in the merged file.
extern "C" void ext_00672110(void* self, void* arg);
// Registers a destructor for a static object (__cdecl, one argument).
extern "C" void __cdecl ext_006A6C87(void* dtorArg);

extern "C" void* __thiscall fn_0066D040(void* self, uint32_t unused) {
    (void)self;
    (void)unused;

    if ((mem_00B59684 & 1u) == 0) {
        mem_00B59684 |= 1u;
        float zero[3] = {0.0f, 0.0f, 0.0f};
        ext_00672110(&mem_00B5967C, zero);
        ext_006A6C87(&mem_009217B0);
    }
    return &mem_00B5967C;
}

// [0x0066B6E0]
// @name ExprParser::Vector3Type::vfunc_45
// @class ExprParser::Vector3Type
// @summary Scales or dots a Vector3 operand depending on a predicate on the second operand's source.
// @field ExprParser::Vector3Type +0x00 float* data
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

namespace {

// Call virtual slot `idx` on `obj` using the MSVC thiscall-with-stack-args convention
// (this passed as the first parameter in the portable form).
template <class R, class... A>
R vcall(void* obj, int idx, A... args) {
    void** vt = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<R (*)(void*, A...)>(vt[idx])(obj, args...);
}

}  // namespace

void fn_0066B6E0(void* a1, void* a2) {
    // Predicate on the second operand's source object (vfunc +0x3C).
    void* src = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    bool pred = vcall<bool>(src, 15, a2);
    if (pred) {
        // Second operand's source (vfunc +0x14) yields a float[3] of the other vector.
        void* src2 = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
        float* b = vcall<float*>(src2, 5, a2);

        // Operand a1 becomes the target of the dot product.
        float* a = *reinterpret_cast<float**>(a1);
        void* tgt = *reinterpret_cast<void**>(static_cast<char*>(a1) + 0x04);

        float t1 = a[1] * b[1];
        float t0 = a[0] * b[0];
        float dot = (t0 + t1) + a[2] * b[2];

        vcall<void>(tgt, 7, a1, dot);
        return;
    }

    // Otherwise: scale a1's floats by the scalar returned from source vfunc +0x04.
    void* src3 = *reinterpret_cast<void**>(static_cast<char*>(a2) + 0x04);
    float s = vcall<float>(src3, 1, a2);

    float* out = *reinterpret_cast<float**>(a1);
    out[0] = out[0] * s;
    out[1] = out[1] * s;
    out[2] = out[2] * s;
}

// [0x0066B5D0] ExprParser::Vector3Type::vfunc_35 (19 bytes)
// @name ExprParser::Vector3Type::vfunc_35
// @class ExprParser::Vector3Type
// @summary Reads the first dword of the pointer in arg1 and forwards it, with arg2 as this, to ext_00699000; returns that result.
// @field ExprParser::Vector3Type +0x00 void* vtable (unverified; no direct field access in this function)
extern "C" uint32_t __stdcall fn_0066B5D0(uint32_t* arg1, uint32_t arg2) {
    uint32_t value = *arg1;
    return ext_00699000(arg2, value);
}
