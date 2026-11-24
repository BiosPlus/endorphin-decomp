// Lifted C++ translation unit: lifted/leaf/tiny_470000.cpp
#include "lift_compat.h"
#include <cstdint>

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

// [0x00476B80] sub_00476B80 (28 bytes)
namespace lift_00476B80 {
// @name sub_00476B80
// @summary Auto-lifted identical-shape clone of 0x005AC820 (Unknown::walkLinkUntilFlagSet_005AC820).
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_00476B80(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x2D) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x2D) == 0);
    return eax;
}
} // namespace lift_005AC820
} // namespace lift_00476B80
