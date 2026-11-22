// Lifted C++ translation unit: lifted/NMData/EffectorWithMemoryData.cpp
#include "lift_compat.h"
// Imported MSVCP80 std::string helpers (MSVC mangled names in the original binary).
// Declared with opaque 32-bit string-object pointers; layout is MSVC std::string (SSO, 0x18 bytes).
extern "C" void* __thiscall ext_string_ctor_cstr(void* self, const char* s);
extern "C" void* ext_string_concat_str_str(void* result, const void* lhs, const void* rhs);
extern "C" void* ext_string_concat_str_cstr(void* result, const void* lhs, const char* rhs);
extern "C" void __thiscall ext_string_dtor(void* self);
// Read-only C string literals in .rdata.
extern "C" const char mem_00972218[];
extern "C" const char mem_0093BF0C[];

// [0x0060C2C0]
// @name NMData::EffectorWithMemoryData::vfunc_20
// @class NMData::EffectorWithMemoryData
// @summary Builds a std::string as (literal_972218 + this->str_at_+0x4) + literal_93BF0C and returns it by value via the caller-supplied return buffer.
// @field NMData::EffectorWithMemoryData +0x04 std::string field_0x04 (passed by reference to concat; contents not inspected here)
extern "C" void* __thiscall fn_0060C2C0(void* self, void* ret_buf, int unused_arg)
{
    (void)unused_arg;

    unsigned char tmp[0x18];
    unsigned char mid[0x18];
    unsigned char tail[0x18];
    unsigned char* field = (unsigned char*)self + 0x04;

    // tmp = std::string(mem_00972218)
    ext_string_ctor_cstr(tmp, mem_00972218);

    // mid = tmp + *(this + 0x4)
    ext_string_concat_str_str(mid, tmp, field);

    // ret_buf = mid + mem_0093BF0C
    ext_string_concat_str_cstr(tail, mid, mem_0093BF0C);

    // Copy the result into the caller's return buffer (MSVC std::string is a trivially
    // relocatable 0x18-byte object here, matching the original sret copy).
    for (int i = 0; i < 0x18; ++i) ((unsigned char*)ret_buf)[i] = tail[i];

    ext_string_dtor(mid);
    ext_string_dtor(tmp);

    return ret_buf;
}
