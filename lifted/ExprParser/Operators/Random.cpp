// Lifted C++ translation unit: lifted/ExprParser/Operators/Random.cpp
#include "lift_compat.h"
#include <cmath>
// Helper calls made by the original code.
extern "C" void* __thiscall ext_006955D0(void* self);
extern "C" int32_t __thiscall ext_00508680(void* self, double x);
// Double constants read from .rdata. Only the low dwords appear in the listing
// (0x00000000 and 0x00100000); the high dwords are not captured here.
// mem_0093BD38 is used as the 2^32 correction for unsigned conversion.
extern "C" const double mem_0093BD38;
extern "C" const double mem_0094FF78;

// [0x006A1730] ExprParser::Operators::Random::vfunc_3 (150 bytes)
// @name ExprParser::Operators::Random::vfunc_3
// @class ExprParser::Operators::Random
// @summary Evaluates lhs and rhs via their child vfn1, calls ext_00508680 with |rhs - lhs| to get a random value, scales it into [0, |rhs-lhs|), and passes lhs + that offset to the lhs child's vfn7.
// @field ExprParser::ExprToken +0x04 void* field_0x04
float __thiscall fn_006A1730(void* self, void* lhs, void* rhs) {
    using VFnEval = float (*)(void* self, void* operand);
    using VFnApply = float (*)(void* self, void* operand, float value);

    auto vslot = [](void* obj, size_t slot) -> void* {
        void** vtbl = *reinterpret_cast<void***>(obj);
        return vtbl[slot];
    };

    // Helper on the outer object; its result is the object for the range call.
    void* const rangeObj = ext_006955D0(self);

    // a = lhs.child->vfn1(lhs)
    void* const lhsChild = lift_field<void*>(lhs, 0x04);
    const float a = reinterpret_cast<VFnEval>(vslot(lhsChild, 1))(lhsChild, lhs);

    // b = rhs.child->vfn1(rhs)
    void* const rhsChild = lift_field<void*>(rhs, 0x04);
    const float b = reinterpret_cast<VFnEval>(vslot(rhsChild, 1))(rhsChild, rhs);

    // d = |b - a| (float-rounded, as stored by the original)
    const float diff = std::fabs(b - a);

    // r = signed 32-bit result of the helper, treated as unsigned.
    const int32_t r = ext_00508680(rangeObj, static_cast<double>(diff));
    double scaled = static_cast<double>(r);
    if (r < 0) {
        scaled += mem_0093BD38;  // unsigned fixup (2^32)
    }
    scaled *= mem_0094FF78;

    // p = float(scaled * d)
    const float p = static_cast<float>(scaled * static_cast<double>(diff));

    // Result offset from lhs: a + p.
    const float offset = p + a;

    // Tail: lhs.child->vfn7(lhs, offset); returns the callee's float result.
    return reinterpret_cast<VFnApply>(vslot(lhsChild, 7))(lhsChild, lhs, offset);
}
