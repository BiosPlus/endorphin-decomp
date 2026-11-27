// Lifted C++ translation unit: lifted/clones/auto_clones_650000.cpp
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

// [0x00651930] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitTwistAngle(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00651930 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitTwistAngle(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitTwistAngle(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA20(void* self);
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
void fn_00651930(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA20(src);

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
} // namespace lift_00651930

// [0x00651D30] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_00651D30 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA30(void* self);
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
void fn_00651D30(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA30(src);

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
} // namespace lift_00651D30

// [0x00651DE0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_00651DE0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA30(void* self);
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
void fn_00651DE0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA30(src);

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
} // namespace lift_00651DE0

// [0x00651E90] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_00651E90 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA30(void* self);
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
void fn_00651E90(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA30(src);

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
} // namespace lift_00651E90

// [0x00651F40] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00651F40 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA30(void* self);
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
void fn_00651F40(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA30(src);

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
} // namespace lift_00651F40

// [0x00652340] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_00652340 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA40(void* self);
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
void fn_00652340(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA40(src);

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
} // namespace lift_00652340

// [0x006523F0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_006523F0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA40(void* self);
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
void fn_006523F0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA40(src);

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
} // namespace lift_006523F0

// [0x006524A0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_006524A0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA40(void* self);
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
void fn_006524A0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA40(src);

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
} // namespace lift_006524A0

// [0x00652550] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00652550 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getSoftLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA40(void* self);
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
void fn_00652550(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA40(src);

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
} // namespace lift_00652550

// [0x00652950] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_00652950 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA50(void* self);
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
void fn_00652950(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA50(src);

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
} // namespace lift_00652950

// [0x00652A00] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_00652A00 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA50(void* self);
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
void fn_00652A00(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA50(src);

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
} // namespace lift_00652A00

// [0x00652AB0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_00652AB0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA50(void* self);
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
void fn_00652AB0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA50(src);

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
} // namespace lift_00652AB0

// [0x00652B60] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00652B60 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitTwistAngle(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA50(void* self);
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
void fn_00652B60(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA50(src);

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
} // namespace lift_00652B60

// [0x00652F60] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_00652F60 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA60(void* self);
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
void fn_00652F60(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA60(src);

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
} // namespace lift_00652F60

// [0x00653010] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_00653010 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA60(void* self);
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
void fn_00653010(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA60(src);

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
} // namespace lift_00653010

// [0x006530C0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_006530C0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA60(void* self);
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
void fn_006530C0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA60(src);

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
} // namespace lift_006530C0

// [0x00653170] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00653170 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle1(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA60(void* self);
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
void fn_00653170(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA60(src);

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
} // namespace lift_00653170

// [0x00653570] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_43 (170 bytes)
namespace lift_00653570 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_43
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA70(void* self);
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
void fn_00653570(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA70(src);

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
} // namespace lift_00653570

// [0x00653620] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_44 (170 bytes)
namespace lift_00653620 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_44
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA70(void* self);
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
void fn_00653620(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA70(src);

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
} // namespace lift_00653620

// [0x006536D0] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_45 (170 bytes)
namespace lift_006536D0 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_45
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA70(void* self);
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
void fn_006536D0(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA70(src);

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
} // namespace lift_006536D0

// [0x00653780] ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_46 (170 bytes)
namespace lift_00653780 {
// @name ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>::vfunc_46
// @class ExprParser::ReadMethodType<SkeletalJoint, float, {public: float __thiscall SkeletalJoint::getHardLimitSwingAngle2(void) const, 0}, 1>
// @summary Auto-lifted identical-shape clone of 0x0046C930 (ExprParser::ReadMethodType<ImageExporter>::vfunc_46).
namespace lift_0046C930 {
// Known callee 0x0046C080: NMData::SkeletalCalibrationVariables::vfunc_12 (returns float in st0)
extern float ext_0064EA70(void* self);
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
void fn_00653780(void* self, void* out) {
    void* src = lift_field<void*>(self, 0x00);
    if (src == nullptr) {
        // Original: construct DerivedException in a local and raise it via CxxThrowException.
        alignas(8) uint8_t exc[16] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, reinterpret_cast<const void*>(&mem_009DEC1C));
        return;
    }

    float value = ext_0064EA70(src);

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
} // namespace lift_00653780
