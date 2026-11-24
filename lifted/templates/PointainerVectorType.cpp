// Lifted C++ translation unit: lifted/templates/PointainerVectorType.cpp
#include "lift_compat.h"

// [0x00681B00]
namespace lift_00681B00 {
extern void ext_00661620(void* self, uint32_t zeroArg);

// @name Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_1
// @class Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>
// @summary Calls the base-class helper ext_00661620 on self with a zero argument and returns self (fluent thunk).
// Note: the first stack argument is treated as the receiver (the original code loads it into esi/ecx).
void* fn_00681B00(void* self, uint32_t a1, uint32_t a2) {
    (void)a1;
    (void)a2;
    ext_00661620(self, 0u);
    return self;
}
} // namespace lift_00681B00
