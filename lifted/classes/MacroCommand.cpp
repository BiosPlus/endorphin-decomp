// Lifted C++ translation unit: lifted/classes/MacroCommand.cpp
#include "lift_compat.h"

// [0x00665840] MacroCommand::vfunc_3 (33 bytes)
namespace lift_00665840 {
// @name MacroCommand::vfunc_3
// @class MacroCommand
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
// @field MacroCommand +0x20 DWORD field_0x20
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_00665840(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x10;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_00665840
