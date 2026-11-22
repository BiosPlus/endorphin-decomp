// Lifted C++ translation unit: lifted/ExprParser/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00420070(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name ExprParser::BoolType::vfunc_14
// @class ExprParser::BoolType
// @summary Stdcall leaf (ret 4): takes one pointer argument and returns the 32-bit value stored at its first dword.
// @field ExprParser::BoolType +0x00 uint32_t first_dword
extern "C" uint32_t __stdcall fn_0049C000(const uint32_t* self) {
    return *self;
}
extern "C" void __fastcall ext_0065F440(void* self);
extern "C" void __fastcall ext_0066EDB0(void* self);
extern "C" void __fastcall ext_006710E0(void* self);
extern "C" void __fastcall ext_006737B0(void* self);
extern "C" void __fastcall ext_006991A0(void* self);
extern "C" void __fastcall ext_0069AA80(void* self);
extern "C" void __fastcall ext_0069A830(void* self);
extern "C" void __fastcall ext_006A2C20(void* self);

// [0x0066AD70] ExprParser::RealType::vfunc_1 (9 bytes)
// @name ExprParser::RealType::vfunc_1
// @class ExprParser::RealType
// @summary Returns the single-precision float stored at the pointed-to value slot (stdcall, one stack argument).
// @field ExprParser::RealType +0x00 float field_0x00
float __stdcall fn_0066AD70(void* self) {
    return lift_field<float>(self, 0x00);
}

// [0x0066AF00] ExprParser::BoolType::vfunc_3 (9 bytes)
// @name ExprParser::BoolType::vfunc_3
// @class ExprParser::BoolType
// @summary Reads the byte at the pointer passed as the single stack argument and returns it as the result (low byte of eax).
// (No BoolType field offsets are accessed; the only load is through the argument pointer at +0x0, whose pointee type is not recovered.)
uint8_t __stdcall fn_0066AF00(const uint8_t* value) {
    return *value;
}

// [0x0066AE40] ExprParser::IntType::vfunc_1 (9 bytes)
// @name ExprParser::IntType::vfunc_1
// @class ExprParser::IntType
// @summary Reads the 32-bit signed integer that the pointer argument refers to and returns it as a floating-point value.
// @field ExprParser::IntType +0x00 int32_t field_0x00
extern "C" double __stdcall fn_0066AE40(void* self) {
    const int32_t value = *static_cast<const int32_t*>(self);
    return static_cast<double>(value);
}

// [0x0049AE80] ExprParser::PrimitiveProxyType<bool>::vfunc_3 (11 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_3
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stdcall (ret 4) accessor: follows the proxy's first-dword value pointer and returns the bool byte stored there.
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr
uint8_t __stdcall fn_0049AE80(const uint8_t* const* self) {
    const uint8_t* value = *self;
    return *value;
}

// [0x0049AF20] ExprParser::PrimitiveProxyType<int>::vfunc_2 (11 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_2
// @class ExprParser::PrimitiveProxyType<int>
// @summary Stdcall (ret 4) accessor: follows the proxy's first-dword value pointer and returns the int stored there.
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
int32_t __stdcall fn_0049AF20(const int32_t* const* self) {
    const int32_t* value = *self;
    return *value;
}

// [0x0049C040] ExprParser::PrimitiveProxyType<int>::vfunc_1 (11 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_1
// @class ExprParser::PrimitiveProxyType<int>
// @summary Loads the int value behind the proxy's pointer and returns it converted to a floating-point value (x87 st0).
// @field ExprParser::ValuePtrType +0x00 int* field_0x00

// Single stack argument (this), callee-cleans 4 bytes (ret 4).
// The value is returned in st(0) via fild, so it is returned as double
// to preserve the exact int32 value.
double __stdcall fn_0049C040(void* self) {
    int* const* value_ptr = reinterpret_cast<int* const*>(self);
    const int* p = *value_ptr;
    return static_cast<double>(*p);
}

// [0x004B7A40]
// @name ExprParser::PrimitiveProxyType<float>::vfunc_1
// @class ExprParser::PrimitiveProxyType<float>
// @summary Loads the float referenced by the proxy's stored pointer and returns it.
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr

float __stdcall ExprParser_PrimitiveProxyType_float_vfunc_1(void* self) {
    float* p = lift_field<float*>(self, 0x00);
    return *p;
}

// [0x006992D0] ExprParser::ExpressionContainerType::vfunc_24 (12 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_24
// @class ExprParser::ExpressionContainerType
// @summary Reads the object's vtable pointer and returns the function pointer in vtable slot 2 (+0x08).
// @field ExprParser::ExpressionContainerType +0x00 void* vtable
void* fn_006992D0(void* self) {
    void** vtbl = *reinterpret_cast<void***>(self);
    return vtbl[2];
}

// [0x0066B0A0] ExprParser::RealType::vfunc_7 (13 bytes)
// @name ExprParser::RealType::vfunc_7
// @class ExprParser::RealType
// @summary Stores a float value into the object's float slot at +0x00 (RealType setter).
// @field ExprParser::RealType +0x00 float field_0x00
void fn_0066B0A0(void* self, float value) {
    *static_cast<float*>(self) = value;
}

// [0x0066B110] ExprParser::IntType::vfunc_8 (13 bytes)
// @name ExprParser::IntType::vfunc_8
// @class ExprParser::IntType
// @summary Stores the int32 argument into the object's first field (field_0x00).
// @field ExprParser::IntType +0x00 int32_t field_0x00
void fn_0066B110(void* self, int32_t value) {
    lift_field<int32_t>(self, 0x00) = value;
}

// [0x0066B170] ExprParser::BoolType::vfunc_9 (13 bytes)
// @name ExprParser::BoolType::vfunc_9
// @class ExprParser::BoolType
// @summary Stores a byte value through a caller-supplied pointer (stack args: dst at +4, value at +8; callee pops 8).
// Note: no field offsets off the object are accessed; ecx is loaded from the first stack argument, not from `this`.
void fn_0066B170(uint8_t* dst, uint8_t value) {
    *dst = value;
}

// [0x00420660] ExprParser::ExpressionException::vfunc_0 (30 bytes)
// @name ExprParser::ExpressionException::vfunc_0
// @class ExprParser::ExpressionException
// @summary MSVC scalar deleting destructor: calls sub_00420070 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00420660(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00420070(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0059E1E0] ExprParser::SingleVariableContainer::vfunc_0 (30 bytes)
// @name ExprParser::SingleVariableContainer::vfunc_0
// @class ExprParser::SingleVariableContainer
// @summary MSVC scalar deleting destructor: calls sub_0065F440 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0059E1E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0065F440(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0066CE20] ExprParser::Vector3Type::vfunc_24 (15 bytes)
// @name ExprParser::Vector3Type::vfunc_24
// @class ExprParser::Vector3Type
// @summary Null-safe subobject pointer adjustment: returns `this +0x4` if non-null, else nullptr.
extern "C" void* __fastcall fn_0066CE20(void* self, int edx_unused, int a1) {
    if (self == nullptr) {
        return nullptr;
    }
    return static_cast<char*>(self) + 0x4;
}

// [0x0066EDA0] ExprParser::ExpressionContainerType::vfunc_0_off_4 (8 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_0_off_4
// @class ExprParser::ExpressionContainerType
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls sub_0066EDB0.
extern "C" void __fastcall fn_0066EDA0(void* self) {
    ext_0066EDB0(static_cast<char*>(self) - 0x4);
}

// [0x00671030] ExprParser::Vector3Type::vfunc_0_off_4 (8 bytes)
// @name ExprParser::Vector3Type::vfunc_0_off_4
// @class ExprParser::Vector3Type
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls sub_006710E0.
extern "C" void __fastcall fn_00671030(void* self) {
    ext_006710E0(static_cast<char*>(self) - 0x4);
}

// [0x006738B0] ExprParser::DeclarationsParser::vfunc_0 (30 bytes)
// @name ExprParser::DeclarationsParser::vfunc_0
// @class ExprParser::DeclarationsParser
// @summary MSVC scalar deleting destructor: calls sub_006737B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006738B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006737B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00699340] ExprParser::ObjectContainer::vfunc_0 (30 bytes)
// @name ExprParser::ObjectContainer::vfunc_0
// @class ExprParser::ObjectContainer
// @summary MSVC scalar deleting destructor: calls sub_006991A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00699340(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006991A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0069A820] ExprParser::ExpressionContainer::vfunc_0_off_4 (8 bytes)
// @name ExprParser::ExpressionContainer::vfunc_0_off_4
// @class ExprParser::ExpressionContainer
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls ExprParser::ExpressionContainer::vfunc_0.
extern "C" void __fastcall fn_0069A820(void* self) {
    ext_0069AA80(static_cast<char*>(self) - 0x4);
}

// [0x0069AA80] ExprParser::ExpressionContainer::vfunc_0 (30 bytes)
// @name ExprParser::ExpressionContainer::vfunc_0
// @class ExprParser::ExpressionContainer
// @summary MSVC scalar deleting destructor: calls sub_0069A830 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0069AA80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0069A830(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0069B580] ExprParser::ParseException::vfunc_0 (30 bytes)
// @name ExprParser::ParseException::vfunc_0
// @class ExprParser::ParseException
// @summary MSVC scalar deleting destructor: calls sub_006A2C20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0069B580(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006A2C20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0066AE50] ExprParser::IntType::vfunc_3 (14 bytes)
// @name ExprParser::IntType::vfunc_3
// @class ExprParser::IntType
// @summary Returns 1 if the 32-bit integer stored at the first dword of the argument object is nonzero, else 0.
// @field ExprParser::IntType +0x00 int32_t field_0x00
int fn_0066AE50(const int32_t* obj) {
    return (obj[0] != 0) ? 1 : 0;
}

// [0x0066AEF0] ExprParser::BoolType::vfunc_2 (14 bytes)
// @name ExprParser::BoolType::vfunc_2
// @class ExprParser::BoolType
// @summary Returns 1 if the first byte of the object is non-zero, else 0 (stdcall, 1 arg, ret 4).
// @field ExprParser::BoolType +0x00 uint8_t first_byte
int fn_0066AEF0(void* self) {
    const uint8_t first_byte = *static_cast<const uint8_t*>(self);
    return first_byte != 0 ? 1 : 0;
}

// [0x0049B2B0]
// @name ExprParser::PrimitiveProxyType<bool>::setValue
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stores the low byte of the argument through the proxy's value pointer (vtable slot 9).
// @field ExprParser::PrimitiveProxyType<bool> +0x0 const uint8_t* value_ptr

// Stack args: [esp+4] = this (proxy), [esp+8] = value; callee pops 8 bytes (ret 8).
void __stdcall ExprParser_PrimitiveProxyType_bool_vfunc_9(void* self, uint32_t value) {
    const uint8_t* value_ptr = lift_field<const uint8_t*>(self, 0x0);
    *const_cast<uint8_t*>(value_ptr) = static_cast<uint8_t>(value);
}

// [0x0049C0C0] ExprParser::PrimitiveProxyType<int>::vfunc_8 (15 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_8
// @class ExprParser::PrimitiveProxyType<int>
// @summary Stores an int value through the proxy's value pointer (stdcall, callee pops 8 bytes).
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void __stdcall fn_0049C0C0(void* self, int32_t value) {
    // Load value_ptr from this+0x0, then write `value` through it.
    // The field is typed const in RTTI but the original code stores through it,
    // so the store goes through a const_cast.
    const int32_t* value_ptr = lift_field<const int32_t*>(self, 0);
    *const_cast<int32_t*>(value_ptr) = value;
}

// [0x004B7A90] ExprParser::PrimitiveProxyType<float>::vfunc_8 (15 bytes)
// @name ExprParser::PrimitiveProxyType<float>::vfunc_8
// @class ExprParser::PrimitiveProxyType<float>
// @summary Stores an integer argument, converted to float, through the object's float* pointer.
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr
void fn_004B7A90(void* self, int32_t value) {
    float* ptr = *static_cast<float**>(self);
    *ptr = static_cast<float>(value);
}

// [0x004B7A80] ExprParser::PrimitiveProxyType<float>::vfunc_7 (15 bytes)
// @name ExprParser::PrimitiveProxyType<float>::vfunc_7
// @class ExprParser::PrimitiveProxyType<float>
// @summary Stores the float argument through the proxy's float* pointer (*ptr = value).
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr
void fn_004B7A80(void* self, float value) {
    float* ptr = *reinterpret_cast<float**>(self);
    *ptr = value;
}

// [0x0049AF30] ExprParser::PrimitiveProxyType<int>::vfunc_3 (16 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_3
// @class ExprParser::PrimitiveProxyType<int>
// @summary Stdcall (ret 4) accessor: follows the proxy's first-dword value pointer and returns 1 if the int it points to is nonzero, else 0.
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
extern "C" uint8_t __stdcall fn_0049AF30(const int32_t* const* self) {
    const int32_t* value = *self;
    return static_cast<uint8_t>(*value != 0);
}
