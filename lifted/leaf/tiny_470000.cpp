// Lifted C++ translation unit: lifted/leaf/tiny_470000.cpp
#include "lift_compat.h"

// [0x004773B0] sub_004773B0 (27 bytes)
namespace lift_004773B0 {
// Import slot holding the address of MSVCP80 std::basic_string<char>::operator=(const basic_string&).
extern uint32_t mem_00924FDC;

// @name Unknown::SetByteAndAssignString
// @class Unknown
// @summary Stores a flag byte into the owner object at self->+0x28 (+0x1C), then assigns the string argument to that owner via std::string::operator=.
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x1C uint8_t field_0x1c
void fn_004773B0(void* self, uint8_t flag, const void* rhs) {
    void* owner = lift_field<void*>(self, 0x28);
    lift_field<uint8_t>(owner, 0x1c) = flag;

    using AssignFn = void* (*)(void* thisObj, const void* src);
    auto assign = reinterpret_cast<AssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    assign(owner, rhs);
}
} // namespace lift_004773B0
