// Lifted C++ translation unit: lifted/clones/auto_clones_630000.cpp
#include "lift_compat.h"
#include <stdexcept>
#include <cstdint>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <new>
#include <memory>
#include <cstddef>
#include "../include/lift_compat.h"

// [0x00633400] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00633400 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633400(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xCC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633400

// [0x006334B0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_006334B0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006334B0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xCC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006334B0

// [0x00633560] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00633560 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633560(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xCC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633560

// [0x00633900] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00633900 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633900(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633900

// [0x006339B0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_006339B0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006339B0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006339B0

// [0x00633B70] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00633B70 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633B70(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xEC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633B70

// [0x00633C20] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00633C20 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633C20(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xEC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633C20

// [0x00633EE0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00633EE0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633EE0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633EE0

// [0x00633F90] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00633F90 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00633F90(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00633F90

// [0x00634200] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00634200 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634200(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xDC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634200

// [0x006342B0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_006342B0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006342B0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xDC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006342B0

// [0x00634490] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00634490 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634490(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634490

// [0x00634540] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00634540 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634540(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634540

// [0x00634710] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00634710 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634710(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634710

// [0x006347C0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_006347C0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006347C0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006347C0

// [0x00634AF0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00634AF0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634AF0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634AF0

// [0x00634BA0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00634BA0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634BA0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634BA0

// [0x00634C50] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00634C50 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634C50(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634C50

// [0x00634DD0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00634DD0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634DD0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634DD0

// [0x00634E80] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00634E80 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00634E80(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00634E80

// [0x00635690] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00635690 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00635690(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xF0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00635690

// [0x006370C0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_006370C0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006370C0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xCC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006370C0

// [0x00637240] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00637240 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637240(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637240

// [0x006372F0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_006372F0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006372F0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006372F0

// [0x00637650] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00637650 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637650(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xEC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637650

// [0x00637700] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00637700 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637700(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xEC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637700

// [0x00637960] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00637960 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637960(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637960

// [0x00637A10] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00637A10 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637A10(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637A10

// [0x00637CC0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00637CC0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637CC0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xDC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637CC0

// [0x00637D70] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00637D70 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00637D70(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xDC);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00637D70

// [0x006380B0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_006380B0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006380B0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006380B0

// [0x00638160] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00638160 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00638160(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE4);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00638160

// [0x006384B0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_006384B0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006384B0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006384B0

// [0x00638560] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00638560 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00638560(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xD8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00638560

// [0x00638750] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00638750 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00638750(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00638750

// [0x00638AF0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00638AF0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00638AF0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB4 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00638AF0

// [0x00638BA0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00638BA0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00638BA0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xE8);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00638BA0

// [0x00639190] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00639190 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00639190(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xF0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xAC / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00639190

// [0x00639240] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00639240 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_00639240(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xF0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB0 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_00639240

// [0x006392F0] ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_006392F0 {
// @name ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, 0>
// @summary Auto-lifted identical-shape clone of 0x004B7DE0 (ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44).
namespace lift_004B7DE0 {
// Known callee 0x00672080: sub_00672080 (18B). Called as thiscall(this = &other.field_0x04, float value).
extern void ext_00672080();
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50. Called as thiscall(self, other).
extern void ext_0041CF50();
// Known callee 0x0046C3C0: DerivedException::DerivedException. Only on the null-source path.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException. Only on the null-source path.
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<NMData::EngineData>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, 0>
// @summary Reads a float from the held source value, assigns it through a temp into self, then dispatches to the target's vfunc_44 (vtable slot 0xB0).
// @field ExprParser::ReadMethodType +0x00 void* source (pointer to the source value object)
// @field ExprParser::ReadMethodType +0x04 void* target (object whose vfunc_44 is dispatched)
// @field ExprParser::ValuePtrType +0x1c float value (field read from the source object)

namespace {

// Stack-resident pair used as the `other` argument to assignFromOther.
struct Pair {
    void* field_0x00;
    void* field_0x04;
};

using ThisCall1 = void* (__thiscall*)(void* self, void* other);
using ThisCallFloat = void (__thiscall*)(void* self, float value);
using ThisCallVoid = void (__thiscall*)(void* self, void* other);
using ThisCallVFunc44 = void (__thiscall*)(void* self, void* p, float value);

} // namespace

void fn_006392F0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xF0);

    Pair other{};
    // sub_00672080(&other.field_0x04, value)
    reinterpret_cast<ThisCallFloat>(&ext_00672080)(&other.field_0x04, value);

    // self->assignFromOther(other)
    reinterpret_cast<ThisCall1>(&ext_0041CF50)(self, &other);

    // Release the temporary held in other.field_0x04 (vtable slot 0x78).
    void* held = other.field_0x04;
    if (held != nullptr) {
        void** vtbl = *static_cast<void***>(held);
        reinterpret_cast<ThisCallVoid>(vtbl[0x78 / sizeof(void*)])(held, &other);
    }

    // Dispatch: target->vfunc_44(self, value) through vtable slot 0xB0.
    void* target = lift_field<void*>(self, 0x04);
    void** vtbl = *static_cast<void***>(target);
    reinterpret_cast<ThisCallVFunc44>(vtbl[0xB8 / sizeof(void*)])(target, self, value);
}
} // namespace lift_004B7DE0
} // namespace lift_006392F0
