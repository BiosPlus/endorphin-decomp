// Lifted C++ translation unit: lifted/templates/ReadWriteMethodType.cpp
#include "lift_compat.h"
#include <stdexcept>

// [0x00695620] ExprParser::ReadWriteMethodType<DoubleWithProperties, float, &public: float __thiscall DoubleWithProperties::getValue(void) const, float, &public: void __thiscall DoubleWithProperties::setValue(float)>::vfunc_41 (62 bytes)
namespace lift_00695620 {
// Virtual-call shape of the inner object's slot 1 (vtable +0x04): float getter taking one stack argument.
typedef float (__thiscall* ReadFloatVFunc)(void* self, void* arg);

// @name ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)
// @class ExprParser::ReadWriteMethodType<DoubleWithProperties, float, &public: float __thiscall DoubleWithProperties::getValue(void) const, float, &public: void __thiscall DoubleWithProperties::setValue(float)>
// @summary Reads a float via the source's inner getter and stores it as a double into the target slot; throws if the target slot is null.
// @field ExprParser::ValuePtrType +0x00 double* target
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
void fn_00695620(void* dst, void* src) {
    // dst +0x00: double* destination. Null means the write target is missing, which is an error.
    double* out = *reinterpret_cast<double**>(dst);
    if (out == nullptr) {
        // The original throws a MSVC C++ exception here (MSVCR80 _CxxThrowException with a
        // type descriptor at 0x009DEC1C). No portable equivalent of that exact type exists.
        throw std::runtime_error("ReadWriteMethodType: null double target");
    }

    // src +0x04: inner object whose vtable slot 1 (+0x04) returns the float value.
    void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    ReadFloatVFunc getter = reinterpret_cast<ReadFloatVFunc>(vtbl[1]);

    float value = getter(inner, src);
    *out = static_cast<double>(value);
}
} // namespace lift_00695620

// [0x0066EBA0] ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getX(void) const, float, &public: void __thiscall NM::Vector3::setX(float)>::vfunc_41 (62 bytes)
namespace lift_0066EBA0 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadWriteMethodType<NM::Vector3>::vfunc_41 (NM::Vector3::getX into float out-slot)
// @class ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getX(void) const, float, &public: void __thiscall NM::Vector3::setX(float)>
// @summary Reads a float through the holder's accessor sub-object (vtable slot 1) and stores it into the float slot pointed to by *out; throws if *out is null.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0066EBA0(void** out, void* holder) {
    // *out must point at a writable float; a null destination throws.
    float* dest = reinterpret_cast<float*>(*out);
    if (dest == nullptr) {
        ext_0046C3C0();
        ext_006A6DD2();
        return;
    }

    // Accessor sub-object lives at holder+0x04. Its vtable slot 1 takes the
    // holder as its single stack argument (original: call [vtbl+4], push holder).
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(holder) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetFn = float (*)(void* self, void* holder);
    GetFn get = reinterpret_cast<GetFn>(vtbl[1]);
    const float value = get(accessor, holder);

    *dest = value;
}
} // namespace lift_0066EBA0
