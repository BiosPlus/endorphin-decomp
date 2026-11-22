// Lifted C++ translation unit: lifted/templates/PrimitiveProxyType.cpp
#include "lift_compat.h"
// Known callee 0x006720E0: sub_006720E0 (43B) - string construct/assign from (const char*, flag).
extern "C" void ext_006720E0(void* self, const char* src, int flag);

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
