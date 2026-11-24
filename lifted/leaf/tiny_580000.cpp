// Lifted C++ translation unit: lifted/leaf/tiny_580000.cpp
#include "lift_compat.h"

// [0x00584AE0] sub_00584AE0 (27 bytes)
namespace lift_00584AE0 {
extern uint8_t mem_00B58DFC;

// @name descriptiveName_00584AE0
// @class <ClassName> (optional)
// @summary Returns 1 if global flag mem_00B58DFC is set and this+0x8C is clear, else 0.
// @field <ClassName> +0x8C uint8_t field_0x8C
int fn_00584AE0(void* self) {
    if (mem_00B58DFC == 0) {
        return 0;
    }
    if (lift_field<uint8_t>(self, 0x8C) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00584AE0
