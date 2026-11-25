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
// @name MacroCommand::vfunc_1
// @class MacroCommand
// @summary Walks the command list at +0x30 and invokes virtual slot 1 on each element's payload.
// @field MacroCommand +0x30 void* commandList
void fn_00665A50(void* self) {
    // +0x30 holds the list sentinel/header node; its +0 is the first node.
    void* header = lift_field<void*>(self, 0x30);
    void* node = lift_field<void*>(header, 0);

    while (node != header) {
        // Each node: +0 next, +8 payload object pointer.
        void* payload = lift_field<void*>(node, 0x8);
        void* vtable = *reinterpret_cast<void**>(payload);
        // Virtual slot 1 (offset +0x4 in the vtable), called with payload as 'this'.
        auto slot1 = reinterpret_cast<void (*)(void*)>(reinterpret_cast<void**>(vtable)[1]);
        slot1(payload);
        node = lift_field<void*>(node, 0);
    }
}
} // namespace lift_00665A50

// [0x00665B10] MacroCommand::vfunc_4 (104 bytes)
namespace lift_00665B10 {
// @name MacroCommand::vfunc_4
// @class MacroCommand
// @summary Iterates the child command pointer array (this+0x3C..this+0x40) and calls vtable slot 1 on each child, passing this+0x0C as the argument.
// @field MacroCommand +0x0C DWORD field_0x0C
// @field MacroCommand +0x3C void* field_0x3C
// @field MacroCommand +0x40 void* field_0x40
void fn_00665B10(void* self) {
    using ChildFn = void(__thiscall*)(void*, DWORD);

    void** it = lift_field<void**>(self, 0x3C);
    void** end = lift_field<void**>(self, 0x40);

    for (; it != end; ++it) {
        void* child = *it;
        void** vtbl = *reinterpret_cast<void***>(child);
        ChildFn fn = reinterpret_cast<ChildFn>(vtbl[1]);
        DWORD arg = lift_field<DWORD>(self, 0x0C);
        fn(child, arg);
    }
}
} // namespace lift_00665B10
