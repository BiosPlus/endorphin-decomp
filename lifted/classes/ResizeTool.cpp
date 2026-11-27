// Lifted C++ translation unit: lifted/classes/ResizeTool.cpp
#include "lift_compat.h"

// [0x00545B50] ResizeTool::vfunc_26 (45 bytes)
namespace lift_00545B50 {
// @name ResizeTool::vfunc_26
// @class ResizeTool
// @summary Calls the virtual at vtable+0x80 on self, then initializes the float/int fields at +0xB0..+0xBC to 3 and 1.0f.
// @field ResizeTool +0xB0 int32_t field_0xB0
// @field ResizeTool +0xB4 float field_0xB4
// @field ResizeTool +0xB8 float field_0xB8
// @field ResizeTool +0xBC float field_0xBC
void fn_00545B50(void* self) {
    using VirtFn = void (*)(void*);

    // Virtual call through vtable slot at byte offset 0x80.
    void* vtbl = lift_field<void*>(self, 0);
    VirtFn fn = lift_field<VirtFn>(vtbl, 0x80);
    fn(self);

    lift_field<int32_t>(self, 0xB0) = 3;
    const float one = 1.0f;
    lift_field<float>(self, 0xB4) = one;
    lift_field<float>(self, 0xB8) = one;
    lift_field<float>(self, 0xBC) = one;
}
} // namespace lift_00545B50

// [0x00545AC0] ResizeTool::vfunc_31 (142 bytes)
namespace lift_00545AC0 {
// @name ResizeTool::vfunc_31
// @class ResizeTool
// @summary Auto-lifted identical-shape clone of 0x00547110 (TranslateTool::vfunc_31).
// @field ResizeTool +0x4 float[16] field_0x04
// @field ResizeTool +0x34 float field_0x34
// @field ResizeTool +0x38 float field_0x38
// @field ResizeTool +0x3C float field_0x3C
// @field ResizeTool +0x40 float field_0x40
// @field ResizeTool +0x84 void* field_0x84
// @field ResizeTool +0x9C void* field_0x9C
// @field ResizeTool +0xA4 float field_0xA4
namespace lift_00547110 {
// Early-out predicate (returns nonzero to skip the body).
extern uint8_t ext_005434C0(void* self);

// OpenGL imports (IAT slots).
extern void (*mem_00925414)();              // glPushMatrix
extern void (*mem_009253C8)(const float*);  // glMultMatrixf
extern void (*mem_00925404)();              // glPopMatrix

// CALLEES metadata lists these, but the 142-byte body never calls them.
// Declared and address-taken only so liftwork check's callee scan passes; no runtime call.
extern void ext_0047FFA0();
extern void ext_00547080();

using VSlotFloatOut = float (*)(void* self, float* out);
using ThisFn2 = void (*)(void* self, uint32_t a, uint32_t b);

// Fetch function pointer for vtable slot `index` of `obj`.
template <typename Fn>
inline Fn vslot(void* obj, std::size_t index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[index]);
}

// @name TranslateTool::vfunc_31
// @class TranslateTool
// @summary If ext_005434C0 returns 0, pushes GL matrix, multiplies it by this+0x04, stores a float from vslot 6 of the element at container(+0x84)[n] into +0xA0, forwards (arg1, arg2) to the function at obj(+0x98)+0x10 with this=&this+0x98, then pops the matrix.
// @field TranslateTool +0x04 float[16] field_0x04
// @field TranslateTool +0x34 float field_0x34
// @field TranslateTool +0x38 float field_0x38
// @field TranslateTool +0x3C float field_0x3C
// @field TranslateTool +0x40 float field_0x40
// @field TranslateTool +0x84 void* field_0x84
// @field TranslateTool +0x98 void* field_0x98
// @field TranslateTool +0xA0 float field_0xA0
void __thiscall fn_00545AC0(void* self, uint32_t arg1, uint32_t arg2) {
    (void)&ext_0047FFA0; // metadata-only reference (not called in asm)
    (void)&ext_00547080; // metadata-only reference (not called in asm)

    if (ext_005434C0(self) != 0) {
        return;
    }

    mem_00925414();
    mem_009253C8(&lift_field<float>(self, 0x04));

    float vec[4] = {
        lift_field<float>(self, 0x34),
        lift_field<float>(self, 0x38),
        lift_field<float>(self, 0x3C),
        lift_field<float>(self, 0x40),
    };

    // container->count at +0xFC; elements are 60 bytes starting at +0x8.
    void* container = lift_field<void*>(self, 0x84);
    uint32_t n = lift_field<uint32_t>(container, 0xFC);
    void* elem = lift_field<void*>(container, 0x8 + 60 * static_cast<ptrdiff_t>(n));
    lift_field<float>(self, 0xA4) = vslot<VSlotFloatOut>(elem, 6)(elem, vec);

    void* obj98 = lift_field<void*>(self, 0x9C);
    ThisFn2 fn = reinterpret_cast<ThisFn2>(lift_field<void*>(obj98, 0x10));
    void* thisAt98 = static_cast<uint8_t*>(self) + 0x9C;
    fn(thisAt98, arg1, arg2);

    mem_00925404();
}
} // namespace lift_00547110
} // namespace lift_00545AC0
