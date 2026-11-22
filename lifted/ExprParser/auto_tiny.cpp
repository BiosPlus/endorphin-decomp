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
#include <cstdint>

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

// [0x0049B210] ExprParser::PrimitiveProxyType<bool>::vfunc_2 (16 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_2
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Returns true when the bool value pointed to by value_ptr is non-zero.
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr
bool fn_0049B210(void* self) {
    const uint8_t* value_ptr = lift_field<const uint8_t*>(self, 0x00);
    return *value_ptr != 0;
}

// [0x0067A970] ExprParser::BoolType::vfunc_28 (15 bytes)
// @name ExprParser::BoolType::vfunc_28
// @class ExprParser::BoolType
// @summary Copies the first dword of the source object (src) into the destination slot (dst); self is unused.
// Note: no BoolType fields are accessed; the only offset read is +0x0 of the *src* pointee, which is not a BoolType field.
void fn_0067A970(void* self, uint32_t* dst, const uint32_t* src) {
    (void)self;
    *dst = *src;
}

// [0x0049B290] ExprParser::PrimitiveProxyType<bool>::vfunc_8 (19 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_8
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stores (value != 0) as a bool through the proxy's value pointer at +0x00.
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr

namespace {
struct PrimitiveProxyTypeBool {
    const uint8_t* value_ptr; // +0x00
};
} // namespace

// Stdcall-style setter: arg1 = proxy object, arg2 = value (non-zero means true).
void fn_0049B290(void* self, int32_t value) {
    auto* proxy = static_cast<PrimitiveProxyTypeBool*>(self);
    uint8_t* dst = const_cast<uint8_t*>(proxy->value_ptr);
    *dst = (value != 0) ? 1 : 0;
}

// [0x0049C0D0]
// @name ExprParser::PrimitiveProxyType<int>::vfunc_9
// @class ExprParser::PrimitiveProxyType<int>
// @summary Writes (flag != 0) as an int32 through the proxy's value pointer.
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr

struct PrimitiveProxyTypeInt {
    const int32_t* value_ptr;
};

// Original takes self and flag on the stack and pops 8 bytes on return (ret 8).
void ExprParser_PrimitiveProxyType_int_vfunc_9(PrimitiveProxyTypeInt* self, uint8_t flag) {
    int32_t* dst = const_cast<int32_t*>(self->value_ptr);
    *dst = (flag != 0) ? 1 : 0;
}

// [0x00699070] ExprParser::ExpressionContainerType::vfunc_28 (19 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_28
// @class ExprParser::ExpressionContainerType
// @summary Stdcall intrusive-reference assign: loads the object pointer from *src, increments its 32-bit count at +0x04, then stores it into *dst (ret 8).
// @field ExprParser::ExpressionContainerType +0x04 int32_t field_0x04
// Disassembly: mov eax,[esp+8]; mov ecx,[eax]; mov eax,[esp+4]; add dword [ecx+4],1; mov [eax],ecx; ret 8.
// Arguments: dst = first stack argument (esp+4), src = second stack argument (esp+8).
// The object's class is not established by this function; field_0x04 is the only accessed offset.
void __stdcall fn_00699070(void** dst, void* const* src) {
    void* obj = *src;                                   // mov ecx, [eax]
    int32_t* count = reinterpret_cast<int32_t*>(
        reinterpret_cast<uint8_t*>(obj) + 0x04);        // [ecx + 4]
    *count = *count + 1;                                // add dword ptr [ecx+4], 1
    *dst = obj;                                         // mov [eax], ecx
}

// [0x0067A690] ExprParser::ExpressionContainerType::vfunc_42 (20 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_42
// @class ExprParser::ExpressionContainerType
// @summary Stdcall (ret 8) type-match test: returns 1 if the first dword of self equals the first dword of the argument (i.e. both share the same vtable), else 0.
// @field ExprParser::ExpressionContainerType +0x00 void* vtable
extern "C" uint32_t __stdcall fn_0067A690(const uint32_t* self, const uint32_t* other) {
    return (self[0] == other[0]) ? 1u : 0u;
}

// [0x0066BB70] ExprParser::ExtROType::vfunc_13 (21 bytes)
// @name ExprParser::ExtROType::vfunc_13
// @class ExprParser::ExtROType
// @summary Returns the field at +0x04 of the inner object at (*arg)+0x00, or 0 if arg is null.
// @field ExprParser::ExtROType +0x00 void* inner
// @field ? +0x04 uint32_t field_0x04   (accessed on the inner object; owning class not yet established)

// Original: mov eax,[esp+4]; test eax,eax; je null; mov eax,[eax]; mov eax,[eax+4]; ret 4
// null: xor eax,eax; ret 4
uint32_t fn_0066BB70(void* self) {
    if (self == nullptr) {
        return 0;
    }
    void* inner = *reinterpret_cast<void**>(self);                                  // self +0x00
    return *reinterpret_cast<uint32_t*>(static_cast<char*>(inner) + 0x04);          // inner +0x04
}

// [0x0049B2F0] ExprParser::PrimitiveProxyType<bool>::vfunc_41 (26 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_41
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Reads a bool from the source proxy (via its vtable slot 3) and stores it through this proxy's value pointer.
// @field ExprParser::PrimitiveProxyType<bool> +0x00 uint8_t* value_ptr

namespace {
// Invoke virtual slot `slot` of `obj` (vtable entry index = byte offset / 4).
template <typename R, typename... A>
inline R lift_vcall(void* obj, int slot, A... args) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<R (*)(void*, A...)>(vtbl[slot])(obj, args...);
}
} // namespace

void fn_0049B2F0(void* self, void* src) {
    void* inner = lift_field<void*>(src, 4);
    bool value = lift_vcall<bool>(inner, 3, src);
    lift_field<uint8_t*>(self, 0)[0] = value ? 1 : 0;
}

// [0x0049C140] ExprParser::PrimitiveProxyType<int>::vfunc_43 (28 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_43
// @class ExprParser::PrimitiveProxyType<int>
// @summary Adds the int32 returned by ctx's child virtual slot 2 into *value_ptr (*value_ptr += ctx->field_0x04->vfunc_2(ctx)).
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void fn_0049C140(void* self, void* ctx) {
    using VFn = int32_t(__thiscall*)(void* self, void* arg);

    // dst = value_ptr, read before the call as in the original.
    int32_t* dst = const_cast<int32_t*>(lift_field<const int32_t*>(self, 0x00));

    // child = ctx->+0x04 (class of ctx not identified); target = child->vtbl[2]
    void* child = lift_field<void*>(ctx, 0x04);
    void** vtbl = lift_field<void**>(child, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x08));
    int32_t delta = target(child, ctx);

    // *dst += delta. Unsigned arithmetic gives x86 add wrap-around without signed-overflow UB.
    *dst = static_cast<int32_t>(static_cast<uint32_t>(*dst) + static_cast<uint32_t>(delta));
}

// [0x0066BBA0] ExprParser::VPtrProxyType::vfunc_7 (28 bytes)
// @name ExprParser::VPtrProxyType::vfunc_7
// @class ExprParser::VPtrProxyType
// @summary Forwards a float argument to vfunc_7 of the object held by the proxied pointer's inner target.
// @field ExprParser::VPtrProxyType +0x00 void* field_0x00
struct VPtrProxyInner { void** vtbl; };
struct VPtrProxyHolder { void* field_0x00; VPtrProxyInner* target; };

void fn_0066BBA0(VPtrProxyHolder** self, float value) {
    VPtrProxyHolder* h = *self;
    VPtrProxyInner* t = h->target;
    using Fn = void (*)(VPtrProxyInner*, VPtrProxyHolder*, float);
    reinterpret_cast<Fn>(t->vtbl[7])(t, h, value);
}

// [0x0066BBC0] ExprParser::VPtrProxyType::vfunc_8 (27 bytes)
// @name ExprParser::VPtrProxyType::vfunc_8
// @class ExprParser::VPtrProxyType
// @summary Forwarding tail-call: invokes virtual slot 8 (+0x20) on the held pointer's +0x04 object, passing (held pointer, ctx) as stack args; result stays in eax.
// @field ExprParser::VPtrProxyType +0x00 void* field_0x00
uint32_t fn_0066BBC0(void* self, void* ctx) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg0, void* arg1);

    // p = this->field_0x00
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[8] (offset 0x20)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x20));

    // Stack args: p first, then ctx. Result stays in eax.
    return target(obj, p, ctx);
}

// [0x0066B0D0] ExprParser::RealType::vfunc_41 (24 bytes)
// @name ExprParser::RealType::vfunc_41
// @class ExprParser::RealType
// @summary Forwards to vtable slot 1 of the object at holder->+0x04, passing the holder as its argument, and stores the float result through the first argument.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0066B0D0(void* result, void* self) {
    // mov ecx, [eax+4]: inner object pointer held by the value-pointer holder
    uint32_t innerAddr = lift_field<uint32_t>(self, 0x04);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(innerAddr));
    // mov edx, [ecx]: vtable of the inner object
    uint32_t vtblAddr = lift_field<uint32_t>(inner, 0x00);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtblAddr));
    // call [edx+4]: slot 1, this = inner, one argument = holder
    uint32_t slotAddr = lift_field<uint32_t>(vtbl, 0x04);
    using Slot = float (*)(void* thisPtr, void* arg);
    Slot target = reinterpret_cast<Slot>(static_cast<uintptr_t>(slotAddr));
    float value = target(inner, self);
    // mov ecx, [esp+4] ; fstp dword ptr [ecx]: store result through first argument
    *static_cast<float*>(result) = value;
}

// [0x0066BBE0] ExprParser::VPtrProxyType::vfunc_9 (27 bytes)
// @name ExprParser::VPtrProxyType::vfunc_9
// @class ExprParser::VPtrProxyType
// @summary Forwarding tail-call: invokes virtual slot 9 (+0x24) on the held pointer's +0x04 object, passing (held pointer, ctx) as stack args; result stays in eax.
// @field ExprParser::VPtrProxyType +0x00 void* field_0x00
uint32_t fn_0066BBE0(void* self, void* ctx) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg0, void* arg1);

    // p = this->field_0x00
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[9] (offset 0x24)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x24));

    // Stack args: p first, then ctx. Result stays in eax.
    return target(obj, p, ctx);
}

// [0x0066B120] ExprParser::IntType::vfunc_41 (24 bytes)
// @name ExprParser::IntType::vfunc_41
// @class ExprParser::IntType
// @summary Forwards to vtable slot 2 of the object at holder->+0x04, passing the holder as its argument, and stores the 32-bit integer result through the first argument.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0066B120(void* result, void* self) {
    // mov ecx, [eax+4]: inner object pointer held by the value-pointer holder
    uint32_t innerAddr = lift_field<uint32_t>(self, 0x04);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(innerAddr));
    // mov edx, [ecx]: vtable of the inner object
    uint32_t vtblAddr = lift_field<uint32_t>(inner, 0x00);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtblAddr));
    // call [edx+8]: slot 2, this = inner, one argument = holder
    uint32_t slotAddr = lift_field<uint32_t>(vtbl, 0x08);
    using Slot = int32_t (*)(void* thisPtr, void* arg);
    Slot target = reinterpret_cast<Slot>(static_cast<uintptr_t>(slotAddr));
    int32_t value = target(inner, self);
    // mov ecx, [esp+4] ; mov [ecx], eax: store result through first argument
    *static_cast<int32_t*>(result) = value;
}

// [0x0066BC00] ExprParser::VPtrProxyType::vfunc_10 (27 bytes)
// @name ExprParser::VPtrProxyType::vfunc_10
// @class ExprParser::VPtrProxyType
// @summary Forwarding tail-call: invokes virtual slot 10 (+0x28) on the held pointer's +0x04 object, passing (held pointer, ctx) as stack args; result stays in eax.
// @field ExprParser::VPtrProxyType +0x00 void* field_0x00
uint32_t fn_0066BC00(void* self, void* ctx) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg0, void* arg1);

    // p = this->field_0x00
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[10] (offset 0x28)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x28));

    // Stack args: p first, then ctx. Result stays in eax.
    return target(obj, p, ctx);
}

// [0x0049C120] ExprParser::PrimitiveProxyType<int>::vfunc_41 (26 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_41
// @class ExprParser::PrimitiveProxyType<int>
// @summary Stores into *value_ptr the int32 returned by ctx's child virtual slot 2 (ctx->field_0x04->vfunc_2(ctx)).
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void fn_0049C120(void* self, void* ctx) {
    using VFn = int32_t(__thiscall*)(void* self, void* arg);

    // child = ctx->+0x04 (class of ctx not identified)
    void* child = lift_field<void*>(ctx, 0x04);
    // vtbl = child->vptr; target = vtbl[2] (offset 0x08)
    void** vtbl = lift_field<void**>(child, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x08));

    // Call first; value_ptr is read only after the call, as in the original.
    int32_t value = target(child, ctx);

    // *value_ptr = value (the field is declared const in RTTI, but the original writes through it)
    int32_t* dst = const_cast<int32_t*>(lift_field<const int32_t*>(self, 0x00));
    *dst = value;
}

// [0x0066B180] ExprParser::BoolType::vfunc_41 (24 bytes)
// @name ExprParser::BoolType::vfunc_41
// @class ExprParser::BoolType
// @summary Forwards to vtable slot 3 of the object at holder->+0x04, passing the holder as its argument, and stores the byte (bool) result through the first argument.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0066B180(void* result, void* self) {
    // mov ecx, [eax+4]: inner object pointer held by the value-pointer holder
    uint32_t innerAddr = lift_field<uint32_t>(self, 0x04);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(innerAddr));
    // mov edx, [ecx]: vtable of the inner object
    uint32_t vtblAddr = lift_field<uint32_t>(inner, 0x00);
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(vtblAddr));
    // call [edx+0xc]: slot 3, this = inner, one argument = holder
    uint32_t slotAddr = lift_field<uint32_t>(vtbl, 0x0C);
    using Slot = uint8_t (*)(void* thisPtr, void* arg);
    Slot target = reinterpret_cast<Slot>(static_cast<uintptr_t>(slotAddr));
    uint8_t value = target(inner, self);
    // mov ecx, [esp+4] ; mov [ecx], al: store result through first argument
    *static_cast<uint8_t*>(result) = value;
}

// [0x0066BCC0] ExprParser::VPtrProxyType::vfunc_46 (30 bytes)
// @name ExprParser::VPtrProxyType::vfunc_46
// @class ExprParser::VPtrProxyType
// @summary Auto-lifted identical-shape clone of 0x0066BBE0 (ExprParser::VPtrProxyType::vfunc_9).
// @field ExprParser::VPtrProxyType +0x0 void* field_0x00
uint32_t fn_0066BCC0(void* self, void* ctx) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg0, void* arg1);

    // p = this->field_0x00
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[9] (offset 0x24)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0xB8));

    // Stack args: p first, then ctx. Result stays in eax.
    return target(obj, p, ctx);
}

// [0x0063CB70] ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_41 (29 bytes)
// @name ExprParser::WriteMethodType<EffectorWithMemory,float>::setIntegralGradient_vfunc41
// @class ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>
// @summary Calls slot 1 of arg->+0x04 to get a float and stores it at self->+0x00 target +0x60 (integral gradient).
// @field ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)> +0x00 void* field_0x00
void fn_0063CB70(void* self, void* arg) {
    using GetFloatFn = float (*)(void* self, void* arg);

    // Target object (EffectorWithMemory*) stored at self+0x00.
    auto* target = *reinterpret_cast<std::uint8_t**>(self);

    // Source sub-object at arg+0x04; its vtable slot 1 returns a float.
    auto* source = *reinterpret_cast<std::uint8_t**>(static_cast<std::uint8_t*>(arg) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(source);
    float value = reinterpret_cast<GetFloatFn>(vtbl[1])(source, arg);

    *reinterpret_cast<float*>(target + 0x60) = value;
}

// [0x006A09A0] ExprParser::Operators::Multiply::vfunc_3 (28 bytes)
// @name ExprParser::Operators::Multiply::vfunc_3
// @class ExprParser::Operators::Multiply
// @summary Forwards (a, b) to virtual slot +0xB4 of the object held at a+0x4 and returns that call's result. The incoming this (ecx) is unused.
// @field <unknown: arg a> +0x04 void* field_0x04
using VirtualBinaryFn = uint32_t (*)(void* self, void* a, void* b);

uint32_t fn_006A09A0(void* self, void* a, void* b) {
    (void)self;
    void* obj = lift_field<void*>(a, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto fn = reinterpret_cast<VirtualBinaryFn>(lift_field<void*>(vtbl, 0xB4));
    return fn(obj, a, b);
}
