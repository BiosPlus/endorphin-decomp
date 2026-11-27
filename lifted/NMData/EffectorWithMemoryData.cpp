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
#include <string>

// [0x0060C2C0] NMData::EffectorWithMemoryData::vfunc_20 (157 bytes)
namespace lift_0060C2C0 {
// .rdata string literals (0x00972218 prefix, 0x0093BF0C suffix).
extern const char mem_00972218[];
extern const char mem_0093BF0C[];
// MSVCP80 IAT slots (std::string ctor / concat / dtor). Replaced by portable std::string ops below.
extern void* mem_00924ECC;
extern void* mem_00924FD0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

// @name NMData::EffectorWithMemoryData::vfunc_20
// @class NMData::EffectorWithMemoryData
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithMemoryData +0x04 std::string field_0x04
std::string fn_0060C2C0(void* self) {
    (void)&mem_00924ECC;
    (void)&mem_00924FD0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(mem_00972218) + member;
    return result + std::string(mem_0093BF0C);
}
} // namespace lift_0060C2C0

// [0x0060D3E0] NMData::EffectorWithMemoryData::vfunc_15 (140 bytes)
namespace lift_0060D3E0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// cdecl allocator, called with 0x88 bytes.
extern void* ext_006A5C62(size_t size);
// Known callee 0x00607E70: sub_00607E70 (85B). Thiscall, no stack args; constructs the new object.
extern void __thiscall ext_00607E70(void* self);
// Known callee 0x0060CDE0: NMData::EffectorData::vfunc_15 (If arg3 is null, allocates and constructs a 0x60-byte object; then fills it from arg1 and this, invokes its vtable slot 0x30 with this, stores it at this+0x40 and returns it.)
extern void* __thiscall ext_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3);

// @name NMData::EffectorWithMemoryData::vfunc_15
// @class NMData::EffectorWithMemoryData
// @summary Stdcall (ret 0xC, ECX = this): allocates and constructs a 0x88-byte object, copies this+0x5C (float) into object+0x60 and this+0x60 into object+0x68, then forwards to NMData::EffectorData::vfunc_15 with the new object as arg3 and returns its result.
// @field NMData::EffectorWithMemoryData +0x5C float field_0x5c
// @field NMData::EffectorWithMemoryData +0x60 uint32_t field_0x60
extern void* __thiscall fn_0060D3E0(void* self, void* arg1, uint32_t arg2, void* arg3) {
    // arg3 is pushed by the original but never read here (ret 0xC only cleans it up).
    (void)arg3;

    // The original's SEH frame setup/teardown (fs:[0] push/restore, state-byte writes) is
    // compiler boilerplate and is not reproduced.
    void* obj = ext_006A5C62(0x88);
    if (obj != nullptr) {
        ext_00607E70(obj);
    }

    lift_field<uint32_t>(obj, 0x68) = lift_field<uint32_t>(self, 0x60);
    lift_field<float>(obj, 0x60) = lift_field<float>(self, 0x5C);

    return ext_0060CDE0(self, arg1, arg2, obj);
}
} // namespace lift_0060D3E0
