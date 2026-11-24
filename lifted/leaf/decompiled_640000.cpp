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

// [0x00647F00] sub_00647F00 (18 bytes)
namespace lift_00647F00 {
// @name sub_00647F00
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C5F80(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00647F00(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C5F80(arg0);
}
} // namespace lift_00648480
} // namespace lift_00647F00

// [0x00647F30] sub_00647F30 (18 bytes)
namespace lift_00647F30 {
// @name sub_00647F30
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C5F90(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00647F30(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C5F90(arg0);
}
} // namespace lift_00648480
} // namespace lift_00647F30

// [0x006481C0] sub_006481C0 (18 bytes)
namespace lift_006481C0 {
// @name sub_006481C0
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6120(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_006481C0(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6120(arg0);
}
} // namespace lift_00648480
} // namespace lift_006481C0

// [0x006481E0] sub_006481E0 (18 bytes)
namespace lift_006481E0 {
// @name sub_006481E0
// @summary Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).
namespace lift_00648480 {
// Known callee 0x007C6F70: GetField_0x44Thunk (Tail-calls getField_0x04 with arg0 + 0x44, returning the 32-bit value at object offset +0x48.)
extern uint32_t __cdecl ext_007C6110(uint32_t arg0);

// @name GetIndirectField_0x5c_0x00
// @class Unknown
// @summary Loads the object pointer at self+0x5C, reads the dword it points to, and returns GetField_0x44Thunk applied to that value.
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_006481E0(void* self) {
    // mov ecx, [self+0x5c]; mov eax, [ecx]; push eax; call ext_007C6F70; add esp,4; ret
    const uint32_t inner_ptr = lift_field<uint32_t>(self, 0xA4);
    void* inner = reinterpret_cast<void*>(static_cast<uintptr_t>(inner_ptr));
    const uint32_t arg0 = lift_field<uint32_t>(inner, 0x00);
    return ext_007C6110(arg0);
}
} // namespace lift_00648480
} // namespace lift_006481E0
