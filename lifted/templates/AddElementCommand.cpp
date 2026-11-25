// Lifted C++ translation unit: lifted/templates/AddElementCommand.cpp
#include "lift_compat.h"

// [0x00528370] PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1 (69 bytes)
namespace lift_00528370 {
// Known callee 0x00528310 (sub_00528310): called with this = [self+0x10] (ecx) and two stack args; callee pops its arguments.
extern void ext_00528310(void* self, void* arg1, void* arg2);
// Known callee 0x00527AC0: Unknown::forwardDispatchThenVfunc1 (forwards two stack args to dispatchToElements_00527690, then BaseEventDispatcher::vfunc_1 with flag 1).
extern void ext_00527AC0(void* self, void* arg1, void* arg2);

// Slot 0 of the vtable at [self+0x24] (thiscall with two stack args, callee pops).
typedef void (*Slot0Fn)(void* self, void* arg1, void* arg2);

// Converts a 32-bit guest value stored in a field to a host pointer.
static inline void* to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Takes field +0x18 (clearing it), calls 0x528310 on the object at +0x10 with (old +0x18, +0x20); then calls vtable slot 0 of the object at +0x24 with (+0x1c, +0x20) if non-null; then calls 0x527AC0 on the object at +0x14 with (+0x1c, 0) if non-null.
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x24 uint32_t field_0x24
void fn_00528370(void* self) {
    // Take the value at +0x18 and clear the slot.
    uint32_t old18 = lift_field<uint32_t>(self, 0x18);
    lift_field<uint32_t>(self, 0x18) = 0;

    // First call: this = [+0x10], args = (old +0x18, [+0x20]).
    uint32_t f10 = lift_field<uint32_t>(self, 0x10);
    uint32_t f20 = lift_field<uint32_t>(self, 0x20);
    ext_00528310(to_ptr(f10), to_ptr(old18), to_ptr(f20));

    // Virtual call through the object at +0x24, if present.
    uint32_t f24 = lift_field<uint32_t>(self, 0x24);
    if (f24 != 0) {
        void* obj = to_ptr(f24);
        uint32_t f20b = lift_field<uint32_t>(self, 0x20);
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        uint32_t vtbl = lift_field<uint32_t>(obj, 0x00);
        uint32_t slot0 = lift_field<uint32_t>(to_ptr(vtbl), 0x00);
        Slot0Fn fn = reinterpret_cast<Slot0Fn>(static_cast<uintptr_t>(slot0));
        fn(obj, to_ptr(f1c), to_ptr(f20b));
    }

    // Call 0x527AC0 on the object at +0x14, if present, with (+0x1c, 0).
    uint32_t f14 = lift_field<uint32_t>(self, 0x14);
    if (f14 != 0) {
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        ext_00527AC0(to_ptr(f14), to_ptr(f1c), nullptr);
    }
}
} // namespace lift_00528370

// [0x004BC6D0] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_1 (69 bytes)
namespace lift_004BC6D0 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x00528370 (PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1).
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x1C uint32_t field_0x1c
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x24 uint32_t field_0x24
namespace lift_00528370 {
// Known callee 0x00528310 (sub_00528310): called with this = [self+0x10] (ecx) and two stack args; callee pops its arguments.
extern void ext_004BC4B0(void* self, void* arg1, void* arg2);
// Known callee 0x00527AC0: Unknown::forwardDispatchThenVfunc1 (forwards two stack args to dispatchToElements_00527690, then BaseEventDispatcher::vfunc_1 with flag 1).
extern void ext_00527AC0(void* self, void* arg1, void* arg2);

// Slot 0 of the vtable at [self+0x24] (thiscall with two stack args, callee pops).
typedef void (*Slot0Fn)(void* self, void* arg1, void* arg2);

// Converts a 32-bit guest value stored in a field to a host pointer.
static inline void* to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Takes field +0x18 (clearing it), calls 0x528310 on the object at +0x10 with (old +0x18, +0x20); then calls vtable slot 0 of the object at +0x24 with (+0x1c, +0x20) if non-null; then calls 0x527AC0 on the object at +0x14 with (+0x1c, 0) if non-null.
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x24 uint32_t field_0x24
void fn_004BC6D0(void* self) {
    // Take the value at +0x18 and clear the slot.
    uint32_t old18 = lift_field<uint32_t>(self, 0x18);
    lift_field<uint32_t>(self, 0x18) = 0;

    // First call: this = [+0x10], args = (old +0x18, [+0x20]).
    uint32_t f10 = lift_field<uint32_t>(self, 0x10);
    uint32_t f20 = lift_field<uint32_t>(self, 0x20);
    ext_004BC4B0(to_ptr(f10), to_ptr(old18), to_ptr(f20));

    // Virtual call through the object at +0x24, if present.
    uint32_t f24 = lift_field<uint32_t>(self, 0x24);
    if (f24 != 0) {
        void* obj = to_ptr(f24);
        uint32_t f20b = lift_field<uint32_t>(self, 0x20);
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        uint32_t vtbl = lift_field<uint32_t>(obj, 0x00);
        uint32_t slot0 = lift_field<uint32_t>(to_ptr(vtbl), 0x00);
        Slot0Fn fn = reinterpret_cast<Slot0Fn>(static_cast<uintptr_t>(slot0));
        fn(obj, to_ptr(f1c), to_ptr(f20b));
    }

    // Call 0x527AC0 on the object at +0x14, if present, with (+0x1c, 0).
    uint32_t f14 = lift_field<uint32_t>(self, 0x14);
    if (f14 != 0) {
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        ext_00527AC0(to_ptr(f14), to_ptr(f1c), nullptr);
    }
}
} // namespace lift_00528370
} // namespace lift_004BC6D0

// [0x004BC720] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_1 (69 bytes)
namespace lift_004BC720 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x00528370 (PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1).
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x1C uint32_t field_0x1c
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand +0x24 uint32_t field_0x24
namespace lift_00528370 {
// Known callee 0x00528310 (sub_00528310): called with this = [self+0x10] (ecx) and two stack args; callee pops its arguments.
extern void ext_004BC5B0(void* self, void* arg1, void* arg2);
// Known callee 0x00527AC0: Unknown::forwardDispatchThenVfunc1 (forwards two stack args to dispatchToElements_00527690, then BaseEventDispatcher::vfunc_1 with flag 1).
extern void ext_00527AC0(void* self, void* arg1, void* arg2);

// Slot 0 of the vtable at [self+0x24] (thiscall with two stack args, callee pops).
typedef void (*Slot0Fn)(void* self, void* arg1, void* arg2);

// Converts a 32-bit guest value stored in a field to a host pointer.
static inline void* to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Takes field +0x18 (clearing it), calls 0x528310 on the object at +0x10 with (old +0x18, +0x20); then calls vtable slot 0 of the object at +0x24 with (+0x1c, +0x20) if non-null; then calls 0x527AC0 on the object at +0x14 with (+0x1c, 0) if non-null.
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x24 uint32_t field_0x24
void fn_004BC720(void* self) {
    // Take the value at +0x18 and clear the slot.
    uint32_t old18 = lift_field<uint32_t>(self, 0x18);
    lift_field<uint32_t>(self, 0x18) = 0;

    // First call: this = [+0x10], args = (old +0x18, [+0x20]).
    uint32_t f10 = lift_field<uint32_t>(self, 0x10);
    uint32_t f20 = lift_field<uint32_t>(self, 0x20);
    ext_004BC5B0(to_ptr(f10), to_ptr(old18), to_ptr(f20));

    // Virtual call through the object at +0x24, if present.
    uint32_t f24 = lift_field<uint32_t>(self, 0x24);
    if (f24 != 0) {
        void* obj = to_ptr(f24);
        uint32_t f20b = lift_field<uint32_t>(self, 0x20);
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        uint32_t vtbl = lift_field<uint32_t>(obj, 0x00);
        uint32_t slot0 = lift_field<uint32_t>(to_ptr(vtbl), 0x00);
        Slot0Fn fn = reinterpret_cast<Slot0Fn>(static_cast<uintptr_t>(slot0));
        fn(obj, to_ptr(f1c), to_ptr(f20b));
    }

    // Call 0x527AC0 on the object at +0x14, if present, with (+0x1c, 0).
    uint32_t f14 = lift_field<uint32_t>(self, 0x14);
    if (f14 != 0) {
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        ext_00527AC0(to_ptr(f14), to_ptr(f1c), nullptr);
    }
}
} // namespace lift_00528370
} // namespace lift_004BC720

// [0x00501ED0] PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand::vfunc_1 (69 bytes)
namespace lift_00501ED0 {
// @name PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x00528370 (PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1).
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x1C uint32_t field_0x1c
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand +0x24 uint32_t field_0x24
namespace lift_00528370 {
// Known callee 0x00528310 (sub_00528310): called with this = [self+0x10] (ecx) and two stack args; callee pops its arguments.
extern void ext_00501970(void* self, void* arg1, void* arg2);
// Known callee 0x00527AC0: Unknown::forwardDispatchThenVfunc1 (forwards two stack args to dispatchToElements_00527690, then BaseEventDispatcher::vfunc_1 with flag 1).
extern void ext_00527AC0(void* self, void* arg1, void* arg2);

// Slot 0 of the vtable at [self+0x24] (thiscall with two stack args, callee pops).
typedef void (*Slot0Fn)(void* self, void* arg1, void* arg2);

// Converts a 32-bit guest value stored in a field to a host pointer.
static inline void* to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Takes field +0x18 (clearing it), calls 0x528310 on the object at +0x10 with (old +0x18, +0x20); then calls vtable slot 0 of the object at +0x24 with (+0x1c, +0x20) if non-null; then calls 0x527AC0 on the object at +0x14 with (+0x1c, 0) if non-null.
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x24 uint32_t field_0x24
void fn_00501ED0(void* self) {
    // Take the value at +0x18 and clear the slot.
    uint32_t old18 = lift_field<uint32_t>(self, 0x18);
    lift_field<uint32_t>(self, 0x18) = 0;

    // First call: this = [+0x10], args = (old +0x18, [+0x20]).
    uint32_t f10 = lift_field<uint32_t>(self, 0x10);
    uint32_t f20 = lift_field<uint32_t>(self, 0x20);
    ext_00501970(to_ptr(f10), to_ptr(old18), to_ptr(f20));

    // Virtual call through the object at +0x24, if present.
    uint32_t f24 = lift_field<uint32_t>(self, 0x24);
    if (f24 != 0) {
        void* obj = to_ptr(f24);
        uint32_t f20b = lift_field<uint32_t>(self, 0x20);
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        uint32_t vtbl = lift_field<uint32_t>(obj, 0x00);
        uint32_t slot0 = lift_field<uint32_t>(to_ptr(vtbl), 0x00);
        Slot0Fn fn = reinterpret_cast<Slot0Fn>(static_cast<uintptr_t>(slot0));
        fn(obj, to_ptr(f1c), to_ptr(f20b));
    }

    // Call 0x527AC0 on the object at +0x14, if present, with (+0x1c, 0).
    uint32_t f14 = lift_field<uint32_t>(self, 0x14);
    if (f14 != 0) {
        uint32_t f1c = lift_field<uint32_t>(self, 0x1c);
        ext_00527AC0(to_ptr(f14), to_ptr(f1c), nullptr);
    }
}
} // namespace lift_00528370
} // namespace lift_00501ED0
