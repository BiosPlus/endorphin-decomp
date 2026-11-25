// Lifted C++ translation unit: lifted/classes/ThreeLayerNet.cpp
#include "lift_compat.h"

// [0x00522160] ThreeLayerNet::vfunc_25 (34 bytes)
namespace lift_00522160 {
// @name ThreeLayerNet::vfunc_25
// @class ThreeLayerNet
// @summary Constructs a std::string from the C string at 0x00952958 into the caller-supplied sret buffer and returns that buffer (this/ecx unused; stdcall, 3 stack args).

// MSVCP80 import slot [0x924FE4]: std::basic_string<char>::basic_string(const char*, const allocator&) (thiscall).
extern void* (__thiscall* mem_00924FE4)(void* self, const char* s, const void* alloc);
// Read-only C string literal at VA 0x00952958.
extern const char mem_00952958[];

void* __stdcall fn_00522160(void* out, void* a2, void* a3) {
    (void)a2;
    (void)a3;
    mem_00924FE4(out, mem_00952958, nullptr);
    return out;
}
} // namespace lift_00522160
