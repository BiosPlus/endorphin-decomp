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
extern "C" void ext_0046C500(void* self, int32_t value);
extern "C" void ext_0046C460(void* self, uint8_t raw_value);
// Known callee 0x0046C390: sub_0046C390 (36B). Called with two stack arguments (self, float value);
// the caller pops both (add esp, 8), so it is modelled as a cdecl-style external taking (void*, float).
extern "C" void ext_0046C390(void* self, float value);

// the caller pops both (add esp, 8), so it is modelled as a cdecl-style external taking (void*, float).
extern "C" void ext_0046C390(void* self, float value);
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Calls ext_00498F90 and stores its 32-bit result into self+0x04; takes one stack argument (self) and returns with ret 4.
// @field ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>> +0x04 uint32_t field_0x04
void fn_00499190(void* self) {
    uint32_t result = ext_00498F90();
    lift_field<uint32_t>(self, 0x04) = result;
}
extern "C" uint8_t ext_0049B170(const std::string& text);
extern "C" int mem_00924FE0;

extern "C" int mem_00924FE0;
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
#include <cstdint>
// Known callee 0x0049BF70: sub_0049BF70 (128B). Takes a std::string by value on the stack
// (the caller copy-constructs the temporary in place via MSVCP80 IAT slot mem_00924FE0)
// and returns an int32 in eax. Modelled here as a C++ function taking std::string by value.
int32_t ext_0049BF70(std::string value);

// Known callee 0x0049BF70: sub_0049BF70 (128B). Takes a std::string by value on the stack
// (the caller copy-constructs the temporary in place via MSVCP80 IAT slot mem_00924FE0)
// and returns an int32 in eax. Modelled here as a C++ function taking std::string by value.
int32_t ext_0049BF70(std::string value);
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

// [0x00497620] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_4 (37 bytes)
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_4
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Passes the first argument and the value stored at the pointee of the second argument to ext_004276B0, then returns the first argument.
// @field ExprParser::PrimitiveProxyType<std::string> +0x00 uintptr_t field_0x00
void* fn_00497620(void* self, const uintptr_t* src) {
    ext_004276B0(self, *src);
    return self;
}

// [0x0049C050] ExprParser::PrimitiveProxyType<int>::vfunc_4 (39 bytes)
// @name ExprParser::PrimitiveProxyType<int>::vfunc_4
// @class ExprParser::PrimitiveProxyType<int>
// @summary Reads the int32 through the proxy's value_ptr (src +0x00) and forwards it to ext_0046C500 on self; returns self.
// @field ExprParser::PrimitiveProxyType<int> +0x00 const int32_t* value_ptr
void* fn_0049C050(void* self, const void* src) {
    const int32_t* value_ptr = *static_cast<const int32_t* const*>(src);
    const int32_t value = *value_ptr;
    ext_0046C500(self, value);
    return self;
}

// [0x0049AE90] ExprParser::PrimitiveProxyType<bool>::vfunc_4 (40 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_4
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Reads the bool stored behind the ValuePtrType argument, forwards it with self to ext_0046C460, and returns self.
// @field ValuePtrType +0x00 const uint8_t* value_ptr
void* fn_0049AE90(void* self, const void* src) {
    // src is a ValuePtrType*; its first field is the pointer to the stored value.
    const uint8_t* value_ptr = lift_field<const uint8_t*>(src, 0);
    // Raw byte is zero-extended and forwarded as-is (not normalized to bool).
    // The original's trailing zero store only overwrites a saved-ecx stack slot
    // and has no observable effect, so it is omitted.
    const uint8_t raw_value = *value_ptr;
    ext_0046C460(self, raw_value);
    return self;
}

// [0x004B71C0] ExprParser::PrimitiveProxyType<float>::vfunc_4 (42 bytes)
// @name ExprParser::PrimitiveProxyType<float>::vfunc_4
// @class ExprParser::PrimitiveProxyType<float>
// @summary Loads the float referenced by the source's first pointer, forwards it to ext_0046C390 with self, and returns self.
// @field ExprParser::ValuePtrType +0x00 float* ptr
void* fn_004B71C0(void* self, void* src) {
    float* p = *static_cast<float**>(src);
    float value = *p;
    ext_0046C390(self, value);
    return self;
}

// [0x004B7AE0]
namespace lift_004B7AE0 {
extern uint32_t mem_00924FE0;
extern float ext_004B79B0(char[0x1c], void*);

// @name ExprParser::PrimitiveProxyType<float>::vfunc_10
// @class ExprParser::PrimitiveProxyType<float>
// @summary Evaluates expression string via sub_004B79B0 and stores float result into *arg1
void __thiscall fn_004B7AE0(void* self, float** arg1, void* arg2) {
    (void)self;
    char str_buf[0x1c];
    using copy_ctor_t = void (__thiscall*)(void*, void*);
    reinterpret_cast<copy_ctor_t>(static_cast<uintptr_t>(mem_00924FE0))(str_buf, arg2);
    float val = ext_004B79B0(str_buf, arg2);
    **arg1 = val;
}
} // namespace lift_004B7AE0

// [0x00497B50]
namespace lift_00497B50 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_41
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Evaluates arg1 into a temporary std::string via ext_00497650 and assigns it to *arg0.


extern uint32_t ext_00497650(void* out_str, uint32_t arg1);
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FF4;

void __thiscall fn_00497B50(void* /*this*/, uint32_t* arg0, uint32_t arg1) {
    uint8_t local_str[0x1c];
    uint32_t str_ptr = ext_00497650(local_str, arg1);

    using AssignFn = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<AssignFn>(mem_00924FDC)(reinterpret_cast<void*>(*arg0), str_ptr);

    using DtorFn = void(__thiscall*)(void*);
    reinterpret_cast<DtorFn>(mem_00924FF4)(local_str);
}
} // namespace lift_00497B50

// [0x00497BB0]
namespace lift_00497BB0 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_43
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Appends the string representation of arg1 to *arg0


extern uint32_t __stdcall ext_00497650(void* out_str, void* val);
extern uint32_t mem_00924FD8;
extern uint32_t mem_00924FF4;

void __thiscall fn_00497BB0(void* self, void** arg0, void* arg1) {
    uint8_t local_str[0x1c];
    uint32_t str_ptr = ext_00497650(local_str, arg1);

    using AppendFn = void(__thiscall*)(void*, uint32_t);
    auto append_fn = reinterpret_cast<AppendFn>(mem_00924FD8);
    append_fn(*arg0, str_ptr);

    using DtorFn = void(__thiscall*)(void*);
    auto dtor_fn = reinterpret_cast<DtorFn>(mem_00924FF4);
    dtor_fn(local_str);
}
} // namespace lift_00497BB0

// [0x004979F0]
namespace lift_004979F0 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_8
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Evaluates/converts a value to std::string via sub_00497830 and assigns it to *arg0

extern uint32_t __cdecl ext_00497830(void* out_str, uint32_t a1, uint32_t a2);
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FF4;

void __stdcall fn_004979F0(uint32_t* arg0, uint32_t arg1) {
    uint8_t temp_str[0x1c];
    uint32_t str_ptr = ext_00497830(temp_str, arg1, arg1);

    using AssignFn = void(__thiscall*)(void*, uint32_t);
    auto assign_fn = reinterpret_cast<AssignFn>(mem_00924FDC);
    assign_fn(reinterpret_cast<void*>(*arg0), str_ptr);

    using DtorFn = void(__thiscall*)(void*);
    auto dtor_fn = reinterpret_cast<DtorFn>(mem_00924FF4);
    dtor_fn(temp_str);
}
} // namespace lift_004979F0

// [0x00497A60]
namespace lift_00497A60 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_9
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Converts/copies arg1 via sub_00497860 into a temporary std::string and assigns it to *arg0.


extern uint32_t ext_00497860(void* out_str, uint32_t a1, uint32_t a2);
extern uint32_t mem_00924FDC; // std::string::operator=(const std::string&)
extern uint32_t mem_00924FF4; // std::string::~basic_string()

void __stdcall fn_00497A60(uint32_t* arg0, uint32_t arg1) {
    uint8_t temp_str[28];
    uint32_t str_ptr = ext_00497860(temp_str, arg1, arg1);

    using AssignFn = uint32_t (__thiscall*)(void*, uint32_t);
    auto assign_fn = reinterpret_cast<AssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    assign_fn(reinterpret_cast<void*>(static_cast<uintptr_t>(*arg0)), str_ptr);

    using DtorFn = void (__thiscall*)(void*);
    auto dtor_fn = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor_fn(temp_str);
}
} // namespace lift_00497A60

// [0x00497780]
namespace lift_00497780 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_42
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Compares a dereferenced string pointer with the string value extracted from arg2.

extern uint32_t __stdcall ext_00497650(void* out_str, uint32_t arg2);
extern uint32_t mem_00924FC4;
extern uint32_t mem_00924FF4;

uint8_t __thiscall fn_00497780(void* self, uint32_t* arg1, uint32_t arg2) {
    (void)self;
    uint8_t local_str[28];
    uint32_t rhs = ext_00497650(local_str, arg2);
    uint32_t lhs = *arg1;

    using OpEqFn = uint8_t(__cdecl*)(uint32_t, uint32_t);
    uint8_t result = reinterpret_cast<OpEqFn>(mem_00924FC4)(lhs, rhs);

    using DtorFn = void(__thiscall*)(void*);
    reinterpret_cast<DtorFn>(mem_00924FF4)(local_str);

    return result;
}
} // namespace lift_00497780

// [0x00497980]
namespace lift_00497980 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_7
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Converts a float argument to std::string via sub_00497800 and assigns it to *out_str_ptr.

extern uint32_t ext_00497800(void* out_str, float val, uint32_t raw_val);
extern void* mem_00924FDC;
extern void* mem_00924FF4;

void __thiscall fn_00497980(void* self, void** out_str_ptr, float val) {
    (void)self;
    uint8_t temp_str[0x1c];
    uint32_t raw_val = 0;
    __builtin_memcpy(&raw_val, &val, sizeof(raw_val));
    uint32_t str_ptr = ext_00497800(temp_str, val, raw_val);

    using AssignFn = void* (__thiscall*)(void*, uint32_t);
    using DtorFn = void (__thiscall*)(void*);
    reinterpret_cast<AssignFn>(mem_00924FDC)(*out_str_ptr, str_ptr);
    reinterpret_cast<DtorFn>(mem_00924FF4)(temp_str);
}
} // namespace lift_00497980

// [0x00497AD0]
namespace lift_00497AD0 {
// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_10
// @class ExprParser::PrimitiveProxyType<std::string>
// @summary Copies/transforms a std::string via sub_00497890 and assigns it to *arg1.

void* ext_00497890(void* out_str, ...);
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FF4;

using MsvcStringCtorCopy = void(__thiscall*)(void* self, const void* other);
using MsvcStringAssign = void*(__thiscall*)(void* self, const void* other);
using MsvcStringDtor = void(__thiscall*)(void* self);

struct MsvcStringBuf {
    uint8_t data[28];
};

void __stdcall fn_00497AD0(uint32_t* dst_ptr, const void* src_str) {
    MsvcStringBuf temp_out;
    MsvcStringBuf temp_arg;

    reinterpret_cast<MsvcStringCtorCopy>(mem_00924FE0)(&temp_arg, src_str);
    void* res = ext_00497890(&temp_out, temp_arg, src_str);

    void* dst_str = reinterpret_cast<void*>(*dst_ptr);
    reinterpret_cast<MsvcStringAssign>(mem_00924FDC)(dst_str, res);
    reinterpret_cast<MsvcStringDtor>(mem_00924FF4)(&temp_out);
}
} // namespace lift_00497AD0

// [0x0049CFE0] ExprParser::PrimitiveProxyType<bool>::vfunc_37 (15 bytes)
namespace lift_0049CFE0 {
extern uint32_t ext_0049B3A0();

// @name ExprParser::PrimitiveProxyType<bool>::vfunc_37
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Auto-lifted identical-shape clone of 0x0049E2E0 (ExprParser::PrimitiveProxyType<bool>::vfunc_38).
// @field ExprParser::PrimitiveProxyType<bool> +0x4 uint32_t field_0x04
extern uint32_t __cdecl ext_0049CFF0(void);

extern void __stdcall fn_0049CFE0(void* self) {
    uint32_t eax = ext_0049B3A0();
    lift_field<uint32_t>(self, 0x04) = eax;
}
} // namespace lift_0049CFE0

// [0x0049DA30] ExprParser::PrimitiveProxyType<int>::vfunc_37 (15 bytes)
namespace lift_0049DA30 {
extern uint32_t ext_0049CC60();

// @name ExprParser::PrimitiveProxyType<int>::vfunc_37
// @class ExprParser::PrimitiveProxyType<int>
// @summary Auto-lifted identical-shape clone of 0x0049E2E0 (ExprParser::PrimitiveProxyType<bool>::vfunc_38).
// @field ExprParser::PrimitiveProxyType<int> +0x4 uint32_t field_0x04
extern uint32_t __cdecl ext_0049CFF0(void);

extern void __stdcall fn_0049DA30(void* self) {
    uint32_t eax = ext_0049CC60();
    lift_field<uint32_t>(self, 0x04) = eax;
}
} // namespace lift_0049DA30

// [0x004975B0] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_1 (33 bytes)
namespace lift_004975B0 {
// IAT slots (populated by the loader): MSVCP80 std::string::c_str (thiscall, this in ecx) and MSVCR80 atof.
extern const char* (*mem_00924FF0)(void* self);
extern double (*mem_009251F0)(const char* text);

// @name ExprParser::PrimitiveProxyType<std::string>::vfunc_1
// @class ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>
// @summary Parses the wrapped std::string (pointer stored at +0x00) as a decimal float via atof and returns it.
// @field ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>> +0x00 void* field_0x00
float fn_004975B0(void* self) {
    void* str = lift_field<void*>(self, 0x00);
    const char* text = mem_00924FF0(str);
    // Original rounds the double result of atof to float via fstp/fld before returning.
    return static_cast<float>(mem_009251F0(text));
}
} // namespace lift_004975B0

// [0x004B7B50] ExprParser::PrimitiveProxyType<float>::vfunc_43 (38 bytes)
namespace lift_004B7B50 {
// Known callee 0x006720A0: sub_006720A0 (18B). Resolved as the vtable slot 1 target of arg->+4.
extern float ext_006720A0(void* self, void* arg);

// @name ExprParser::PrimitiveProxyType<float>::vfunc_43
// @class ExprParser::PrimitiveProxyType<float>
// @summary Adds a float obtained from arg's virtual getter (vtable slot 1 of arg->+4) into the float this proxy points to, in place.
// @field ExprParser::ValuePtrType +0x00 float* ptr
void fn_004B7B50(void* self, void* arg) {
    float* target = *static_cast<float**>(self);

    // arg+4 is a pointer to a polymorphic object; its vtable slot 1 is called with the
    // object as "this" and arg as its single argument, returning a float.
    void* obj = lift_field<void*>(arg, 4);
    void** vtbl = *static_cast<void***>(obj);
    using Getter = float (*)(void* self_obj, void* arg_val);
    // Dispatch through the vtable; ext_006720A0 is the known target for that slot.
    // A null slot would crash in the original, so falling back to the known target is benign.
    const Getter getter = vtbl[1] ? reinterpret_cast<Getter>(vtbl[1]) : &ext_006720A0;
    const float delta = getter(obj, arg);

    *target = *target + delta;
}
} // namespace lift_004B7B50
