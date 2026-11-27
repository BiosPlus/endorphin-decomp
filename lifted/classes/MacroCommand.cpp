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

// [0x00665A50] MacroCommand::vfunc_1 (64 bytes)
namespace lift_00665A50 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo (debug iterator-validity hook).
extern void* mem_00925134;

// @name MacroCommand::vfunc_1
// @class MacroCommand
// @summary Walks the command list anchored at this+0x30 and invokes virtual slot 1 on each element's command object.
// @field MacroCommand +0x30 void* field_0x30
void fn_00665A50(void* self) {
    // Circular list: field_0x30 points at the sentinel node.
    // Node layout (as used here): +0x0 next, +0x8 element pointer.
    void* sentinel = lift_field<void*>(self, 0x30);
    void* cur = *reinterpret_cast<void**>(sentinel);   // first real node

    while (cur != sentinel) {
        // MSVC debug iterator check: the element must not be the end sentinel.
        if (cur == sentinel) {
            reinterpret_cast<void(*)()>(mem_00925134)();
        }

        void* elem = lift_field<void*>(cur, 0x8);       // command object
        void** vtbl = *reinterpret_cast<void***>(elem);
        auto slot1 = reinterpret_cast<void(__thiscall*)(void*)>(vtbl[1]);
        slot1(elem);

        // Re-validate after the call: the callee may have mutated the list.
        if (cur == sentinel) {
            reinterpret_cast<void(*)()>(mem_00925134)();
        }

        cur = *reinterpret_cast<void**>(cur);            // advance to next node
    }
}
} // namespace lift_00665A50

// [0x00665B10] MacroCommand::vfunc_4 (104 bytes)
namespace lift_00665B10 {
extern int mem_00925134;

// Iterates the command list at +0x3C..+0x40 and invokes virtual slot 1 on each
// element, passing the value stored at +0x0C. The MSVC iterator-debug range checks
// (_invalid_parameter_noinfo via IAT 0x925134) are omitted: they only fire on
// corrupt iterator state and have no effect on valid input.
// @name MacroCommand::vfunc_4
// @class MacroCommand
// @summary Calls vfunc slot 1 on every command in the macro's list, passing the stored argument at +0x0C.
// @field MacroCommand +0x0C DWORD field_0x0C
// @field MacroCommand +0x3C void* field_0x3C
// @field MacroCommand +0x40 void* field_0x40
void fn_00665B10(void* self) {
    (void)&mem_00925134;  // metadata-only: IAT slot for _invalid_parameter_noinfo (range checks omitted)

    using Fn = void (*)(void* obj, uint32_t arg);

    DWORD arg = lift_field<DWORD>(self, 0x0C);
    void** it = lift_field<void**>(self, 0x3C);
    void** end = lift_field<void**>(self, 0x40);

    for (; it != end; ++it) {
        void* obj = *it;
        void** vtbl = *reinterpret_cast<void***>(obj);
        Fn slot1 = reinterpret_cast<Fn>(vtbl[1]);
        slot1(obj, arg);
    }
}
} // namespace lift_00665B10
