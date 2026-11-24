// Lifted C++ translation unit: lifted/leaf/decompiled_640000.cpp
#include "lift_compat.h"

// [0x00648480] sub_00648480 (15 bytes)
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6F70(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00648480(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0x5c);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6F70(arg0);
}
} // namespace lift_00648480
