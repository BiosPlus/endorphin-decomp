// Lifted C++ translation unit: lifted/classes/ThreeLayerNet.cpp
#include "lift_compat.h"

// [0x00522160] ThreeLayerNet::vfunc_25 (34 bytes)
namespace lift_00522160 {
// @name ThreeLayerNet::vfunc_25
// @class ThreeLayerNet
// @summary Constructs the std::string result (hidden return buffer) from a constant .rdata literal and returns that buffer.

// Imported: std::basic_string<char>::basic_string(const char*, const allocator&) (MSVCP80).
extern void ext_std_string_ctor_cstr(void* self, const char* s, const void* alloc);

// .rdata pointer to a C string literal (VA 0x00952958).
extern const char mem_00952958[];

// Thiscall with 3 stack args (ret 0xc). `self` is the ThreeLayerNet instance (ecx),
// unused: the original overwrites ecx before use. `out` is the hidden std::string
// return buffer (first stack arg); the function returns it in eax.
// Remaining stack args are not touched by this routine.
void* fn_00522160(void* self, void* out, uint32_t arg1, uint32_t arg2) {
    (void)self;
    (void)arg1;
    (void)arg2;
    ext_std_string_ctor_cstr(out, mem_00952958, nullptr);
    return out;
}
} // namespace lift_00522160
