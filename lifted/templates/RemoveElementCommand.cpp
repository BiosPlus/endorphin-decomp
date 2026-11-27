// Lifted C++ translation unit: lifted/templates/RemoveElementCommand.cpp
#include "lift_compat.h"

// [0x00527FE0] PointainerWithUndo<UndoablePointainerVector<Interpreter>>::RemoveElementCommand::vfunc_1 (82 bytes)
namespace lift_00527FE0 {
// Known callee 0x00527EC0: VectorPtrFindAndErase (Finds a pointer in a vector, clears it to null, erases it via VectorPtrErase, and returns its index.)
extern int32_t __thiscall ext_00527EC0(void* self, uintptr_t* target_ptr);
// Known callee 0x00517510: CallSlot3OnEachEntryThenDispatch (Forwards its argument to CallSlot3OnEachEntry (0x005170D0) on this, then calls 0x00678D70 on this with flag 1.)
extern void ext_00517510(void* self, void* arg);

// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::RemoveElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::RemoveElementCommand
// @summary Swaps the pending element pointer into slot +0x18 (releasing the old one via its vtable slot 0), removes the target from the vector at +0x10 (recording the index at +0x20), then notifies the object at +0x24 and the callee at +0x14.
// @field RemoveElementCommand +0x10 void* field_0x10
// @field RemoveElementCommand +0x14 void* field_0x14
// @field RemoveElementCommand +0x18 void* field_0x18
// @field RemoveElementCommand +0x1C uintptr_t field_0x1c
// @field RemoveElementCommand +0x20 int32_t field_0x20
// @field RemoveElementCommand +0x24 void* field_0x24
void fn_00527FE0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* old_value = lift_field<void*>(self, 0x1C);
    void* cur_value = lift_field<void*>(self, 0x18);

    if (old_value != cur_value && cur_value != nullptr) {
        // vtable slot 0 with flag 1 (virtual deleting destructor)
        void** vt = *reinterpret_cast<void***>(cur_value);
        reinterpret_cast<void (*)(void*, int)>(vt[0])(cur_value, 1);
    }
    lift_field<void*>(self, 0x18) = old_value;

    uintptr_t* target = reinterpret_cast<uintptr_t*>(base + 0x1C);
    int32_t index = ext_00527EC0(lift_field<void*>(self, 0x10), target);
    lift_field<int32_t>(self, 0x20) = index;

    void* notifier = lift_field<void*>(self, 0x24);
    if (notifier != nullptr) {
        // vtable slot 1: (this, target value, index)
        void** vt = *reinterpret_cast<void***>(notifier);
        reinterpret_cast<void (*)(void*, void*, int32_t)>(vt[1])(
            notifier, reinterpret_cast<void*>(*target), index);
    }

    void* dispatcher = lift_field<void*>(self, 0x14);
    if (dispatcher != nullptr) {
        ext_00517510(dispatcher, reinterpret_cast<void*>(*target));
    }
}
} // namespace lift_00527FE0
