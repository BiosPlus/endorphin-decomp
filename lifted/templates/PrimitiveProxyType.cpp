// Lifted C++ translation unit: lifted/templates/PrimitiveProxyType.cpp
#include "lift_compat.h"
// Known callee 0x006720E0: sub_006720E0 (43B) - string construct/assign from (const char*, flag).
extern "C" void ext_006720E0(void* self, const char* src, int flag);
extern "C" void ext_00671100(int selector, void* arg);
#include <cstdlib>
#include <string>

#include <string>
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_0
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Initializes the std::string at self from the C-string pointer held in src's first dword, returns self.
// @field ExprParser::ValuePtrType +0x00 const char* value
void* fn_00497900(void* self, void* src) {
    const char* s = *static_cast<const char* const*>(src);
    ext_006720E0(self, s, 0);
    return self;
}
extern "C" void __thiscall ext_006720C0(void* self, int32_t value);
extern "C" void __thiscall ext_006720A0(void* self, uint32_t value);
extern "C" const double mem_0093F958;

// [0x004A25D0] ExprParser::PrimitiveProxyType<bool>::vfunc_13 (13 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_13
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_004A25D0(void* arg) {
    ext_00671100(2, arg);
}

// [0x00511F80] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_13 (13 bytes)
// @name ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_13
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_00511F80(void* arg) {
    ext_00671100(3, arg);
}

// [0x00594460] ExprParser::PrimitiveProxyType<float>::vfunc_13 (13 bytes)
// @name ExprParser::PrimitiveProxyType<float>::vfunc_13
// @class ExprParser::PrimitiveProxyType<float>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_00594460(void* arg) {
    ext_00671100(0, arg);
}

// [0x004975B0] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_1 (33 bytes)
// Original (ret 4): s = *arg; atof(s->c_str()), stored as float and returned in st0.
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_1
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Converts the std::string referenced by the argument's first pointer to float via atof.
// @field ExprParser::ValuePtrType +0x00 std::string* value
float fn_004975B0(void* self) {
    std::string* s = *static_cast<std::string**>(self);
    return static_cast<float>(std::atof(s->c_str()));
}

// [0x0049C010] ExprParser::PrimitiveProxyType<int>::vfunc_0 (37 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_0
// @class ExprParser::PrimitiveProxyType<int>
// @summary Follows the source proxy's value_ptr, passes the pointed-to int32 to sub_006720C0 on the first argument, and returns the first argument (stdcall, ret 8).
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void* fn_0049C010(void* target, const void* src) {
    const int32_t* value_ptr = lift_field<const int32_t*>(src, 0x00);
    ext_006720C0(target, *value_ptr);
    return target;
}

// [0x0049B1E0] ExprParser::PrimitiveProxyType<bool>::vfunc_0 (38 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_0
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Follows the source proxy's value_ptr, zero-extends the byte it points to, passes it to sub_006720A0 on the first argument, and returns the first argument (stdcall, ret 8).
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr
void* fn_0049B1E0(void* target, const void* src) {
    const uint8_t* value_ptr = lift_field<const uint8_t*>(src, 0x00);
    ext_006720A0(target, static_cast<uint32_t>(*value_ptr));
    return target;
}

// [0x004B7B50] ExprParser::PrimitiveProxyType<float>::vfunc_43 (38 bytes)
// @name ExprParser::PrimitiveProxyType<float>::vfunc_43
// @class ExprParser::PrimitiveProxyType<float>
// @summary Calls virtual slot 1 of arg->field_0x04 (passing arg) and adds the float result into *ptr.
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr
// @field Unknown +0x04 void* field_0x04
void fn_004B7B50(void* self, void* arg) {
    float* value = lift_field<float*>(self, 0x00);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    // Virtual slot 1 (vtable offset 0x04); returns float.
    float r = reinterpret_cast<float(__thiscall*)(void*, void*)>(vtbl[1])(sub, arg);
    *value = *value + r;
}

// [0x0049B260] ExprParser::PrimitiveProxyType<bool>::vfunc_7 (40 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_7
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stores (x >= 1e-6) into *value_ptr, where x is the float argument (false for NaN).
// @field ExprParser::PrimitiveProxyType<bool> +0x00 uint8_t* value_ptr
void fn_0049B260(void* self, float x) {
    uint8_t* value = lift_field<uint8_t*>(self, 0x00);
    *value = (static_cast<double>(x) >= mem_0093F958) ? 1 : 0;
}
