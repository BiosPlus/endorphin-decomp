// Lifted C++ translation unit: lifted/templates/Function2Type.cpp
#include "lift_compat.h"
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A398B0;
extern "C" int mem_00A2E2F8;
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A87014;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A87014;
// @class ExprParser::Function2Type<SelectionVariable, bool, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, ValuePtr const &, {public: bool __thiscall SelectionVariable::getMethodForEachChild(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, ValuePtr const &), 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A398B0 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_004ECA70(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A398B0), 0);
}
#include <stdexcept>
// Known callee 0x0067AB10: sub_0067AB10 (105 bytes). Thiscall: receives the exception-object buffer in ecx.
extern "C" void ext_0067AB10(void* self);

// Known callee 0x0067AB10: sub_0067AB10 (105 bytes). Thiscall: receives the exception-object buffer in ecx.
extern "C" void ext_0067AB10(void* self);
// @class ExprParser::Function2Type<World, ValuePtr, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class ValuePtr __thiscall World::getCollisionWithSensor(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A87014 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_00594440(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A87014), 0);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00AA3000;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00AA3000;
// @class ExprParser::Function2Type<Randomizer, float, float, float, {public: float __thiscall Randomizer::randBounded(float, float), 0}>
// @summary Unsupported-call stub: builds a local error object via sub_0067AB10, then throws. Never returns normally.
void fn_0067ABB0(void* self) {
    (void)self;
    // The original throws the object built by sub_0067AB10 via MSVC _CxxThrowException
    // (ThrowInfo at mem_00A17E7C is NULL). The concrete exception type is not recovered, so the
    // portable equivalent throws std::runtime_error after running the constructor for its side effects.
    alignas(8) unsigned char exc[0x28];
    ext_0067AB10(exc);
    throw std::runtime_error("ExprParser::Function2Type<Randomizer>::vfunc_1: unsupported call");
}

// [0x0068BD10] ExprParser::Function2Type<Randomizer, float, float, float, {public: float __thiscall Randomizer::randBounded(float, float), 0}>::vfunc_16 (30 bytes)
// @name ExprParser::Function2Type<Randomizer>::vfunc_16
// @class ExprParser::Function2Type<Randomizer, float, float, float, {public: float __thiscall Randomizer::randBounded(float, float), 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00AA3000 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_0068BD10(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00AA3000), 0);
}
