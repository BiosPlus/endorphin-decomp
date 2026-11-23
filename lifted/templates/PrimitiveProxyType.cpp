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
// Known callee 0x00672080: sub_00672080 (18B). Member call on self with a float, a stack slot
// holding the caller's saved esi (not meaningful to the callee; passed as nullptr here), and flag 0.
extern "C" void __thiscall ext_00672080(void* self, float value, void* savedSlot, int flag);

// holding the caller's saved esi (not meaningful to the callee; passed as nullptr here), and flag 0.
extern "C" void __thiscall ext_00672080(void* self, float value, void* savedSlot, int flag);
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_004A25D0(void* arg) {
    ext_00671100(2, arg);
}
// Known callee 0x006A6DE0: sub_006A6DE0 (171B). Takes its argument on the x87 stack;
// modelled here as a double parameter (assumption, see lift notes).
extern "C" int32_t ext_006A6DE0(double value);
extern "C" const double mem_00993828;

// modelled here as a double parameter (assumption, see lift notes).
extern "C" int32_t ext_006A6DE0(double value);
extern "C" const double mem_00993828;
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_00511F80(void* arg) {
    ext_00671100(3, arg);
}
// @class ExprParser::PrimitiveProxyType<float>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_00594460(void* arg) {
    ext_00671100(0, arg);
}
// Imported std::operator==(const std::string&, const char*) (MSVCP80, cdecl), read through its IAT slot.
extern "C" bool (*mem_00924FC0)(const std::string& lhs, const char* rhs);
// C-string literals compared against (addresses pushed as const char* arguments in the original).
extern "C" const char mem_0092F10C[];
extern "C" const char mem_0093A810[];

extern "C" bool (*mem_00924FC0)(const std::string& lhs, const char* rhs);
// C-string literals compared against (addresses pushed as const char* arguments in the original).
extern "C" const char mem_0092F10C[];
extern "C" const char mem_0093A810[];
// @summary Converts the std::string referenced by the argument's first pointer to float via atof.
// @field ExprParser::ValuePtrType +0x00 std::string* value
float fn_004975B0(void* self) {
    std::string* s = *static_cast<std::string**>(self);
    return static_cast<float>(std::atof(s->c_str()));
}
// Project-wide convention for this helper (see lifted/ExprParser/RealType.cpp): takes the
// rounded double, returns nothing in portable form. Its eax result is modeled below.
extern "C" int32_t ext_006A6DE0(double value);

// rounded double, returns nothing in portable form. Its eax result is modeled below.
extern "C" int32_t ext_006A6DE0(double value);
// @class ExprParser::PrimitiveProxyType<int>
// @summary Follows the source proxy's value_ptr, passes the pointed-to int32 to sub_006720C0 on the first argument, and returns the first argument (stdcall, ret 8).
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void* fn_0049C010(void* target, const void* src) {
    const int32_t* value_ptr = lift_field<const int32_t*>(src, 0x00);
    ext_006720C0(target, *value_ptr);
    return target;
}
// Known callee 0x006A6DE0: sub_006A6DE0 (171B). Takes its argument on the x87 stack;
// modelled as a double parameter (matches the project-wide declaration). Its eax result is modelled below.
extern "C" const double mem_00993828; // 0.5

// modelled as a double parameter (matches the project-wide declaration). Its eax result is modelled below.
extern "C" const double mem_00993828; // 0.5
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Follows the source proxy's value_ptr, zero-extends the byte it points to, passes it to sub_006720A0 on the first argument, and returns the first argument (stdcall, ret 8).
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr
void* fn_0049B1E0(void* target, const void* src) {
    const uint8_t* value_ptr = lift_field<const uint8_t*>(src, 0x00);
    ext_006720A0(target, static_cast<uint32_t>(*value_ptr));
    return target;
}
// MSVCP80 std::string::c_str (thiscall; string object pointer in ecx, returns const char*).
extern "C" const char* (*mem_00924FF0)(const void* str);
// MSVCR80 atof (cdecl; takes const char*, returns double on the x87 stack).
extern "C" double (*mem_009251F0)(const char* s);
void fn_004B7B50(void* self, void* arg) {
    float* value = lift_field<float*>(self, 0x00);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    // Virtual slot 1 (vtable offset 0x04); returns float.
    float r = reinterpret_cast<float(__thiscall*)(void*, void*)>(vtbl[1])(sub, arg);
    *value = *value + r;
}
// operator==(const std::string&, const char*) imported from MSVCP80, pointer at 0x924FC0
extern "C" bool (__cdecl *const ext_00924FC0)(const void *str, const char *cstr);

extern "C" bool (__cdecl *const ext_00924FC0)(const void *str, const char *cstr);
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_7
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stores (x >= 1e-6) into *value_ptr, where x is the float argument (false for NaN).
// @field ExprParser::PrimitiveProxyType<bool> +0x00 uint8_t* value_ptr
void fn_0049B260(void* self, float x) {
    uint8_t* value = lift_field<uint8_t*>(self, 0x00);
    *value = (static_cast<double>(x) >= mem_0093F958) ? 1 : 0;
}
// MSVCP80 std::string::c_str (thiscall; string object pointer in ecx, returns const char*).
// MSVCR80 atof (cdecl; takes const char*, returns double on the x87 stack).
// 0.5 constant used to round half away from zero.
// Callee takes the adjusted value on the x87 stack (double); declared void to match the merged template file.

// MSVCR80 atof (cdecl; takes const char*, returns double on the x87 stack).
// 0.5 constant used to round half away from zero.
// Callee takes the adjusted value on the x87 stack (double); declared void to match the merged template file.
// @summary Reads the float at **src, calls ext_00672080 on self with that value and flag 0, and returns self.
// @field Unknown +0x00 float* field_0x00
void* fn_004B7A10(void* self, void* src) {
    float* source = *reinterpret_cast<float**>(src);
    float value = *source;
    ext_00672080(self, value, nullptr, 0);
    return self;
}
// @name ExprParser::PrimitiveProxyType<float>::vfunc_9
// @class ExprParser::PrimitiveProxyType<float>
// @summary Stores 1.0f into *ptr when flag is nonzero, otherwise 0.0f.
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr
void fn_004B7AA0(void* self, uint8_t flag) {
    float* value = lift_field<float*>(self, 0x00);
    *value = (flag != 0) ? 1.0f : 0.0f;
}
// @class ExprParser::PrimitiveProxyType<bool>
// @summary If *value_ptr is already set, keeps it true; otherwise sets it to the result of virtual slot 3 of arg->field_0x04 (passing arg).
// @field ExprParser::PrimitiveProxyType<bool> +0x00 uint8_t* value_ptr
// @field Unknown +0x04 void* field_0x04
void fn_0049B220(void* self, void* arg) {
    uint8_t* value = lift_field<uint8_t*>(self, 0x00);
    if (*value != 0) {
        *value = 1;
        return;
    }
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    // Virtual slot 3 (vtable offset 0x0C); returns bool in al.
    uint8_t r = reinterpret_cast<uint8_t(__thiscall*)(void*, void*)>(vtbl[3])(sub, arg);
    *value = (r != 0) ? 1 : 0;
}
// Callee 0x006A6DE0: receives the rounded value as a double (originally left on the x87 stack).
// Project-wide convention (see lifted/ExprParser/RealType.cpp): declared void in portable form;
// its eax result is not modeled here.
extern "C" int32_t ext_006A6DE0(double rounded);

// Project-wide convention (see lifted/ExprParser/RealType.cpp): declared void in portable form;
// its eax result is not modeled here.
extern "C" int32_t ext_006A6DE0(double rounded);
// @summary Reads x = *ptr, passes x - 0.5 (if x < 0 or NaN) or x + 0.5 (otherwise) to ext_006A6DE0.
// @field ExprParser::PrimitiveProxyType<float> +0x00 float* ptr
void fn_004B7180(void* self) {
    float x = *lift_field<float*>(self, 0x00);
    double adjusted = (!(x >= 0.0f))
                          ? static_cast<double>(x) - mem_00993828
                          : static_cast<double>(x) + mem_00993828;
    ext_006A6DE0(adjusted);
}
// @summary Rounds a float to int (half away from zero) and stores it through value_ptr.
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void fn_0049C080(void* self, float value) {
    const double x = static_cast<double>(value);
    // Negative (or unordered/NaN) values get -0.5, others get +0.5.
    const double adjusted = (!(x >= 0.0)) ? (x - mem_00993828) : (x + mem_00993828);
    ext_006A6DE0(adjusted);
    // Helper's eax result is assumed to be the truncation of its argument toward zero.
    const int32_t result = static_cast<int32_t>(adjusted);
    int32_t* dst = const_cast<int32_t*>(lift_field<const int32_t*>(self, 0));
    *dst = result;
}
extern "C" int32_t ext_006A6DE0(double rounded);
extern "C" uint32_t ext_00498F90();
// Callee 0x004989F0: sub_004989F0 (87B). Takes no stack arguments; its 32-bit result is returned in eax.
extern "C" uint32_t ext_004989F0();

extern "C" uint32_t ext_004989F0();
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_3
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Checks whether the string pointed to by *arg equals either of two constant strings (0x0092F10C or 0x0093A810).
uint32_t __thiscall fn_004975E0(void* self, const std::string* const* arg) {
    (void)self;
    const std::string* str_ptr = *arg;
    if (mem_00924FC0(*str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x0092F10C)))) {
        return 1;
    }
    if (mem_00924FC0(*str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x0093A810)))) {
        return 1;
    }
    return 0;
}
extern "C" uint32_t ext_0049B3A0();
extern "C" uint32_t ext_0049CC60();
// Callee 0x004276B0 (32B): takes two pointer-sized arguments (cdecl, caller cleans up).
extern "C" void ext_004276B0(void* a, uintptr_t b);

extern "C" void ext_004276B0(void* a, uintptr_t b);
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_2
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Parses the std::string pointed to by *arg as a float, rounds half away from zero, and converts to int via ext_006A6DE0.
// @field ExprParser::ValuePtrType +0x00 const std::string* field_0x00
int32_t __stdcall fn_00497930(void* arg) {
    const std::string* s = *static_cast<const std::string* const*>(arg);
    const float val = static_cast<float>(std::atof(s->c_str()));
    const double rounded = (val >= 0.0f)
        ? static_cast<double>(val) + mem_00993828
        : static_cast<double>(val) - mem_00993828;
    return ext_006A6DE0(rounded);
}

// [0x00499190] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_38 (15 bytes)
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_38
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Calls ext_00498F90 and stores its 32-bit result into self+0x04; takes one stack argument (self) and returns with ret 4.
// @field ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>> +0x04 uint32_t field_0x04
void fn_00499190(void* self) {
    uint32_t result = ext_00498F90();
    lift_field<uint32_t>(self, 0x04) = result;
}

// [0x0049DBE0]
// @name ExprParser::PrimitiveProxyType<int>::vfunc_38
// @class ExprParser::PrimitiveProxyType<int>
// @summary Calls helper sub_0049DA40 and stores its result at object offset +0x04.
// @field ExprParser::PrimitiveProxyType<int> +0x04 uint32_t field_0x04

// External helper sub_0049DA40 (returns result in eax).
extern uint32_t ext_0049DA40(void);

// Single stack argument: pointer to the proxy object (stdcall, ret 4).
void fn_0049DBE0(uint8_t* self) {
    uint32_t result = ext_0049DA40();
    *reinterpret_cast<uint32_t*>(self + 0x04) = result;
}

// [0x00498F80] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_37 (15 bytes)
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_37
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Calls ext_004989F0 and stores its 32-bit result into self+0x04; takes one stack argument (self) and returns with ret 4.
// @field ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>> +0x04 uint32_t field_0x04
void fn_00498F80(void* self) {
    uint32_t result = ext_004989F0();
    lift_field<uint32_t>(self, 0x04) = result;
}

// [0x0049E2E0]
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_38
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Calls sub_0049CFF0 to obtain a 32-bit result and stores it into this+0x04.
// @field ExprParser::PrimitiveProxyType<bool> +0x04 uint32_t field_0x04

extern "C" uint32_t __cdecl ext_0049CFF0(void);

extern "C" void __stdcall fn_0049E2E0(void* self) {
    uint32_t eax = ext_0049CFF0();
    lift_field<uint32_t>(self, 0x04) = eax;
}

// [0x004BA260]
// @name ExprParser::PrimitiveProxyType<float>::vfunc_37
// @class ExprParser::PrimitiveProxyType<float>
// @summary Calls sub_004B99B0 to obtain a 32-bit result and stores it into this+0x04.
// @field ExprParser::PrimitiveProxyType<float> +0x04 uint32_t field_0x04

extern "C" uint32_t __cdecl ext_004B99B0(void);

extern "C" void __stdcall fn_004BA260(void* self) {
    uint32_t eax = ext_004B99B0();
    lift_field<uint32_t>(self, 0x04) = eax;
}

// [0x004BA3A0]
#include "lift_compat.h"

// Known callee 0x004BA270: sub_004BA270 (87B). Takes no stack arguments; result returned in eax.
extern "C" void* ext_004BA270(void);

// @name ExprParser::PrimitiveProxyType<float>::vfunc_38
// @class ExprParser::PrimitiveProxyType<float>
// @summary Calls the helper at 0x004BA270 and stores its eax result at offset +0x4 of the object.
// @field ExprParser::PrimitiveProxyType<float> +0x04 void* field_0x04
void fn_004BA3A0(void* self) {
    void* result = ext_004BA270();
    static_cast<void**>(self)[1] = result;
}

// [0x0049CFE0] ExprParser::PrimitiveProxyType<bool>::vfunc_37 (15 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_37
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Auto-lifted identical-shape clone of 0x00499190 (ExprParser::PrimitiveProxyType<std::string>::vfunc_38).
void fn_0049CFE0(void* self) {
    uint32_t result = ext_0049B3A0();
    lift_field<uint32_t>(self, 0x04) = result;
}

// [0x0049DA30] ExprParser::PrimitiveProxyType<int>::vfunc_37 (15 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_37
// @class ExprParser::PrimitiveProxyType<int>
// @summary Auto-lifted identical-shape clone of 0x00499190 (ExprParser::PrimitiveProxyType<std::string>::vfunc_38).
void fn_0049DA30(void* self) {
    uint32_t result = ext_0049CC60();
    lift_field<uint32_t>(self, 0x04) = result;
}

// [0x00497620] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_4 (37 bytes)
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_4
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Passes the first argument and the value stored at the pointee of the second argument to ext_004276B0, then returns the first argument.
// @field ExprParser::PrimitiveProxyType<std::string> +0x00 uintptr_t field_0x00
void* fn_00497620(void* self, const uintptr_t* src) {
    ext_004276B0(self, *src);
    return self;
}
