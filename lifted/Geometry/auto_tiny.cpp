// Lifted C++ translation unit: lifted/Geometry/auto_tiny.cpp
#include "lift_compat.h"
extern "C" int mem_00B59400;
extern "C" int mem_0095F7D8;
extern "C" int mem_00924FDC;

// [0x005B1110] Geometry::AnimationType::vfunc_8 (6 bytes)
// @name Geometry::AnimationType::vfunc_8
// @class Geometry::AnimationType
// @summary Returns the address of the global mem_00B59400 (ignores this).
// @field AnimationType +0x00 void* vtable
int* fn_005B1110(void* self) {
    (void)self;
    return &mem_00B59400;
}

// [0x005B1900] Geometry::SphereType::vfunc_9 (9 bytes)
// @name Geometry::SphereType::vfunc_9
// @class Geometry::SphereType
// @summary Loads a single float from the pointer passed as the second stack argument and returns it on the x87 stack (ignores this).
// @field SphereType +0x00 void* vtable
extern "C" float __stdcall fn_005B1900(void* self, const float* value_ptr) {
    (void)self;
    return *value_ptr;
}

// [0x005B10F0] Geometry::AnimationType::vfunc_4 (9 bytes)
// @name Geometry::AnimationType::vfunc_4
// @class Geometry::AnimationType
// @summary Returns the float constant stored at mem_0095F7D8 (0x7F7FFFFF, FLT_MAX); ignores this.
// @field AnimationType +0x00 void* vtable
float fn_005B10F0(void* self) {
    (void)self;
    return std::bit_cast<float>(mem_0095F7D8);
}

// [0x005B1980] Geometry::FileType::vfunc_7 (9 bytes)
// @name Geometry::FileType::vfunc_7
// @class Geometry::FileType
// @summary This-adjustor thunk: advances this by 4 bytes to reach the embedded GeometryType base, then forwards the call (and its stack argument) to the function pointer stored at mem_00924FDC (MSVCP80 std::string::operator=).
// @field Geometry::FileType +0x04 void* embedded_base_subobject
//
// Note: the original is a tail `jmp` that leaves stack cleanup to the callee.
// Portable C++ cannot express that exactly, so this models the adjustment and
// the forwarded call with the same thiscall signature.
typedef void* (__thiscall* ForwardFn)(void* self, const void* rhs);

extern "C" void* __thiscall fn_005B1980(void* self, const void* rhs) {
    void* adjusted = static_cast<unsigned char*>(self) + 4;
    ForwardFn target = reinterpret_cast<ForwardFn>(static_cast<intptr_t>(mem_00924FDC));
    return target(adjusted, rhs);
}
