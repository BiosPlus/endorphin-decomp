// Lifted C++ translation unit: lifted/templates/PrimitiveProxyType.cpp
#include "lift_compat.h"
// Known callee 0x006720E0: sub_006720E0 (43B) - string construct/assign from (const char*, flag).
extern "C" void ext_006720E0(void* self, const char* src, int flag);
extern "C" void ext_00671100(int selector, void* arg);

// [0x00497900] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_0 (35 bytes)
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_0
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Initializes the std::string at self from the C-string pointer held in src's first dword, returns self.
// @field ExprParser::ValuePtrType +0x00 const char* value
void* fn_00497900(void* self, void* src) {
    const char* s = *static_cast<const char* const*>(src);
    ext_006720E0(self, s, 0);
    return self;
}

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
