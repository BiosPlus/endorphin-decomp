// Lifted C++ translation unit: lifted/clones/auto_clones_680000.cpp
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

// [0x0068C830] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_0068C830 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BDC0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068C830(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BDC0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xAC);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068C830

// [0x0068C8E0] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_0068C8E0 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BDC0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068C8E0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BDC0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB0);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068C8E0

// [0x0068C990] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_0068C990 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BDC0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068C990(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BDC0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB4);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068C990

// [0x0068CA40] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_0068CA40 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::rand(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BDC0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068CA40(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BDC0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB8);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068CA40

// [0x0068CE40] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_0068CE40 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BED0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068CE40(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BED0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xAC);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068CE40

// [0x0068CEF0] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_0068CEF0 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BED0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068CEF0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BED0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB0);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068CEF0

// [0x0068CFA0] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_0068CFA0 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BED0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068CFA0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BED0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB4);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068CFA0

// [0x0068D050] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_0068D050 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randDblExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BED0(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068D050(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BED0(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB8);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068D050

// [0x0068D450] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_0068D450 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BE70(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068D450(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BE70(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xAC);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068D450

// [0x0068D500] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_0068D500 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BE70(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068D500(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BE70(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB0);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068D500

// [0x0068D5B0] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_0068D5B0 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BE70(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068D5B0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BE70(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB4);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068D5B0

// [0x0068D660] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_0068D660 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::randExc(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BE70(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068D660(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BE70(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB8);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068D660

// [0x0068DA60] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_0068DA60 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BC30(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068DA60(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BC30(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xAC);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068DA60

// [0x0068DB10] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_0068DB10 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BC30(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068DB10(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BC30(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB0);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068DB10

// [0x0068DBC0] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_0068DBC0 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BC30(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068DBC0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BC30(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB4);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068DBC0

// [0x0068DC70] ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_0068DC70 {
// @name ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<Randomizer, float, {public: float __thiscall Randomizer::gaussian(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0068BC30(void* self);
// Known callee 0x00672080: sub_00672080 (thiscall, one float stack arg; constructs temp at ecx)
extern void ext_00672080(void* self, float value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy; returns self)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs exception in place)
extern void* ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to _CxxThrowException)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
// Throw info RDATA for the DerivedException throw
extern int mem_009DEC1C;

// @name ExprParser::ReadMethodType<ImageExporter>::vfunc_46
// @class ExprParser::ReadMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, 0>
// @summary Reads a float from this->field_0x00 and, via a temp, assigns it into this, then dispatches this->field_0x04->vfunc_46(this, out); throws if field_0x00 is null.
// @field ExprParser::ReadMethodType<ImageExporter> +0x00 void* field_0x00
// @field ExprParser::ReadMethodType<ImageExporter> +0x04 void* field_0x04
void fn_0068DC70(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0068BC30(src);

    alignas(8) uint8_t temp[8] = {};
    ext_00672080(temp, value);
    ext_0041CF50(self, temp);

    // Release the temp's field_0x04 (vtable slot 0x78) if it is set.
    void* temp_obj = lift_field<void*>(temp, 0x04);
    if (temp_obj != nullptr) {
        void* vtbl = lift_field<void*>(temp_obj, 0x00);
        void* release_fn = lift_field<void*>(vtbl, 0x78);
        reinterpret_cast<void (*)(void*, void*)>(release_fn)(temp_obj, temp);
    }

    // self->field_0x04->vfunc_46(self, out)  (vtable slot 0xB8)
    void* obj = lift_field<void*>(self, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    void* dispatch_fn = lift_field<void*>(vtbl, 0xB8);
    reinterpret_cast<void (*)(void*, void*, void*)>(dispatch_fn)(obj, self, out);
}
} // namespace lift_0046C930
} // namespace lift_0068DC70
