// Lifted C++ translation unit: lifted/clones/auto_clones_610000.cpp
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

// [0x00614FB0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00614FB0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>
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

void fn_00614FB0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA0);

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
} // namespace lift_00614FB0

// [0x00615060] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00615060 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>
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

void fn_00615060(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA0);

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
} // namespace lift_00615060

// [0x00615310] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00615310 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>
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

void fn_00615310(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA4);

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
} // namespace lift_00615310

// [0x006153C0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_006153C0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>
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

void fn_006153C0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA4);

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
} // namespace lift_006153C0

// [0x00615470] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00615470 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>
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

void fn_00615470(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA4);

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
} // namespace lift_00615470

// [0x00615520] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00615520 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, 0>
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

void fn_00615520(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA4);

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
} // namespace lift_00615520

// [0x006157C0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_006157C0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>
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

void fn_006157C0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA8);

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
} // namespace lift_006157C0

// [0x00615870] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00615870 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>
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

void fn_00615870(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA8);

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
} // namespace lift_00615870

// [0x00615920] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00615920 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>
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

void fn_00615920(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA8);

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
} // namespace lift_00615920

// [0x00615AF0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00615AF0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>
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

void fn_00615AF0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xAC);

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
} // namespace lift_00615AF0

// [0x00615BA0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00615BA0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>
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

void fn_00615BA0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xAC);

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
} // namespace lift_00615BA0

// [0x00615D20] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_00615D20 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>
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

void fn_00615D20(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB4);

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
} // namespace lift_00615D20

// [0x00615DD0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_00615DD0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>
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

void fn_00615DD0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB4);

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
} // namespace lift_00615DD0

// [0x00615E80] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_00615E80 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>
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

void fn_00615E80(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB4);

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
} // namespace lift_00615E80

// [0x00615F30] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_00615F30 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, 0>
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

void fn_00615F30(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB4);

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
} // namespace lift_00615F30

// [0x0061A0C0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_0061A0C0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>
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

void fn_0061A0C0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA0);

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
} // namespace lift_0061A0C0

// [0x0061A170] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_0061A170 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, 0>
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

void fn_0061A170(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA0);

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
} // namespace lift_0061A170

// [0x0061A670] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_0061A670 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, 0>
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

void fn_0061A670(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xA8);

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
} // namespace lift_0061A670

// [0x0061AAE0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_0061AAE0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>
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

void fn_0061AAE0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB0);

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
} // namespace lift_0061AAE0

// [0x0061AB90] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_44 (171 bytes)
namespace lift_0061AB90 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_44
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>
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

void fn_0061AB90(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB0);

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
} // namespace lift_0061AB90

// [0x0061AC40] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_45 (171 bytes)
namespace lift_0061AC40 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_45
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>
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

void fn_0061AC40(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB0);

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
} // namespace lift_0061AC40

// [0x0061ACF0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_0061ACF0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, 0>
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

void fn_0061ACF0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xB0);

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
} // namespace lift_0061ACF0

// [0x0061B0E0] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_43 (171 bytes)
namespace lift_0061B0E0 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_43
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>
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

void fn_0061B0E0(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xAC);

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
} // namespace lift_0061B0E0

// [0x0061B190] ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_46 (171 bytes)
namespace lift_0061B190 {
// @name ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>::vfunc_46
// @class ExprParser::ReadMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, 0>
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

void fn_0061B190(void* self) {
    void* source = *static_cast<void**>(self);
    if (source == nullptr) {
        // Original: construct DerivedException and _CxxThrowException(&ex, &mem_009DEC1C).
        (void)&ext_0046C3C0;
        (void)&ext_006A6DD2;
        (void)&mem_009DEC1C;
        throw std::runtime_error("ExprParser::ReadMethodType: null source value");
    }

    const float value = lift_field<float>(source, 0xAC);

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
} // namespace lift_0061B190
