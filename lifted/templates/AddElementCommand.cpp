// Lifted C++ translation unit: lifted/templates/AddElementCommand.cpp
#include "lift_compat.h"
#include <cstdint>

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

// [0x00517910]
namespace lift_00517910 {
// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_2
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Swaps the pending element pointer at +0x1C into +0x18 (releasing the old one via its vfunc_0), updates the container via ext_00527EC0, then fires the optional callback object at +0x24 and ext_00517510 on +0x14.
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x10 void* field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x14 void* field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x18 void* field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x1C void* field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand +0x24 void* field_0x24

extern int32_t __thiscall ext_00527EC0(void* self, uintptr_t* target_ptr);
extern void __thiscall ext_00517510(void* self, void* arg);

namespace lift_00517910 {

void __thiscall fn_00517910(void* self) {
    auto* esi = static_cast<unsigned char*>(self);
    auto field = [&](std::ptrdiff_t off) -> uintptr_t& {
        return *reinterpret_cast<uintptr_t*>(esi + off);
    };

    uintptr_t ebx = field(0x1C);
    uintptr_t ecx = field(0x18);
    if (ebx != ecx && ecx != 0) {
        void* obj = reinterpret_cast<void*>(ecx);
        void** vtbl = *reinterpret_cast<void***>(obj);
        using VFunc0 = void(__thiscall*)(void* self_, int32_t flag);
        reinterpret_cast<VFunc0>(vtbl[0])(obj, 1);
    }
    field(0x18) = ebx;

    ext_00527EC0(reinterpret_cast<void*>(field(0x10)),
                 reinterpret_cast<uintptr_t*>(esi + 0x1C));

    if (field(0x24) != 0) {
        void* obj = reinterpret_cast<void*>(field(0x24));
        void** vtbl = *reinterpret_cast<void***>(obj);
        using VFunc1 = void(__thiscall*)(void* self_, uintptr_t a, uint32_t b);
        reinterpret_cast<VFunc1>(vtbl[1])(obj, field(0x1C),
                                          *reinterpret_cast<uint32_t*>(esi + 0x20));
    }

    if (field(0x14) != 0) {
        ext_00517510(reinterpret_cast<void*>(field(0x14)),
                     reinterpret_cast<void*>(field(0x1C)));
    }
}

} // namespace lift_00517910
} // namespace lift_00517910

// [0x00501450] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_2 (94 bytes)
namespace lift_00501450 {
// Known callee 0x00527EC0: VectorPtrFindAndErase (Finds a pointer in a vector, clears it to null, erases it via VectorPtrErase, and returns its index.)
extern int32_t __thiscall ext_00527EC0(void* self, uintptr_t* target_ptr);
// Known callee 0x00517510: CallSlot3OnEachEntryThenDispatch (Forwards its argument to CallSlot3OnEachEntry (0x005170D0) on this, then calls 0x00678D70 on this with flag 1.)
extern void __thiscall ext_00517510(void* self, void* arg);

static inline void* u32_to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_2
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand
// @summary Swaps the pending pointer at +0x18 for the current one at +0x1c (releasing the old one via its vtable slot 0 with flag 1), removes the new one from the vector at +0x10, invokes the callback at +0x24 with the new pointer and +0x20, then dispatches to slot 3 of the object at +0x14 if set.
// @field AddElementCommand +0x10 uint32_t field_0x10
// @field AddElementCommand +0x14 uint32_t field_0x14
// @field AddElementCommand +0x18 uint32_t field_0x18
// @field AddElementCommand +0x1c uint32_t field_0x1c
// @field AddElementCommand +0x20 uint32_t field_0x20
// @field AddElementCommand +0x24 uint32_t field_0x24
void fn_00501450(void* self) {
    // Old pointer at +0x18 is released if it differs from the new one at +0x1c.
    uint32_t old_ptr = lift_field<uint32_t>(self, 0x18);
    uint32_t new_ptr = lift_field<uint32_t>(self, 0x1c);
    if (new_ptr != old_ptr && old_ptr != 0) {
        void* obj = u32_to_ptr(old_ptr);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto release = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[0]);
        release(obj, 1);
    }
    lift_field<uint32_t>(self, 0x18) = new_ptr;

    // Remove the new pointer from the vector at +0x10.
    uintptr_t target = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x1c));
    ext_00527EC0(u32_to_ptr(lift_field<uint32_t>(self, 0x10)), &target);

    // Invoke the callback at +0x24 (slot 1) with (+0x1c, +0x20).
    if (lift_field<uint32_t>(self, 0x24) != 0) {
        uint32_t arg2 = lift_field<uint32_t>(self, 0x20);
        void* obj = u32_to_ptr(lift_field<uint32_t>(self, 0x24));
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto callback = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtbl[1]);
        callback(obj, lift_field<uint32_t>(self, 0x1c), arg2);
    }

    // Dispatch on the object at +0x14 if present.
    if (lift_field<uint32_t>(self, 0x14) != 0) {
        ext_00517510(u32_to_ptr(lift_field<uint32_t>(self, 0x14)),
                     u32_to_ptr(lift_field<uint32_t>(self, 0x1c)));
    }
}
} // namespace lift_00501450

// [0x004B5480] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_2 (98 bytes)
namespace lift_004B5480 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
// Known callee 0x004B53E0: VectorFindAndErase (Finds an element matching *target_ptr in a pointer vector, clears and erases it, and returns its index.)
extern int32_t ext_004B53E0(void* self, const uint32_t* target_ptr);
// Known callee 0x00517510: CallSlot3OnEachEntryThenDispatch (Forwards its argument to CallSlot3OnEachEntry (0x005170D0) on this, then calls 0x00678D70 on this with flag 1.)
extern void ext_00517510(void* self, void* arg);
// .rdata slot 0x00924FF4 holds the address of the string destructor (MSVCP80).
extern uint32_t mem_00924FF4;

static inline void* lift_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_2
// @class PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand
// @summary Releases the element at +0x18 if it is non-null and differs from +0x1c, sets +0x18 = +0x1c, removes +0x1c from the pointer vector at +0x10, then invokes the vtable slot 1 callback on +0x24 and dispatches +0x14 if set.
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand +0x24 uint32_t field_0x24
void fn_004B5480(void* self) {
    uint32_t& f10 = lift_field<uint32_t>(self, 0x10);
    uint32_t& f14 = lift_field<uint32_t>(self, 0x14);
    uint32_t& f18 = lift_field<uint32_t>(self, 0x18);
    uint32_t& f1c = lift_field<uint32_t>(self, 0x1c);
    uint32_t& f20 = lift_field<uint32_t>(self, 0x20);
    uint32_t& f24 = lift_field<uint32_t>(self, 0x24);

    const uint32_t end = f1c;
    const uint32_t begin = f18;
    if (end != begin && begin != 0) {
        auto dtor = reinterpret_cast<void (*)(void*)>(
            static_cast<uintptr_t>(mem_00924FF4));
        void* elem = lift_ptr(begin);
        dtor(static_cast<uint8_t*>(elem) + 4);
        ext_006A5C5C(elem);
    }
    f18 = end;

    ext_004B53E0(lift_ptr(f10), &f1c);

    if (f24 != 0) {
        void* obj = lift_ptr(f24);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot1 = reinterpret_cast<void (*)(void*, uint32_t, uint32_t)>(
            reinterpret_cast<uintptr_t>(vtbl[1]));
        slot1(obj, f1c, f20);
    }

    if (f14 != 0) {
        ext_00517510(lift_ptr(f14), lift_ptr(f1c));
    }
}
} // namespace lift_004B5480

// [0x004BBFD0]
namespace lift_004BBFD0 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_2
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand
// @summary Replaces the pending element at +0x18 with the one at +0x1c (releasing the old one), removes the new element from the +0x10 string vector, notifies the +0x24 listener, then forwards to +0x14 if set.
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x10 uint32_t field_0x10
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x14 uint32_t field_0x14
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x18 uint32_t field_0x18
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x1c uint32_t field_0x1c
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x20 uint32_t field_0x20
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand +0x24 uint32_t field_0x24

// Callees (original asm: ext_006A5C5C, ext_004BBEB0, ext_00517510)
extern void ext_006A5C5C(void* p);
extern int32_t ext_004BBEB0(void* self, uint32_t* elem_ptr);
extern void ext_00517510(void* self, void* arg);

// IAT slot for MSVCP80 basic_string<char> destructor (thiscall); holds a function pointer.
extern void (*mem_00924FF4)(void* self);

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

extern void fn_004BBFD0(void* self) {
    // ebx = +0x1c, edi = +0x18
    const uint32_t new_elem = lift_field<uint32_t>(self, 0x1c);
    const uint32_t old_elem = lift_field<uint32_t>(self, 0x18);

    // Release the displaced element when it differs from the new one.
    if (new_elem != old_elem && old_elem != 0) {
        mem_00924FF4(as_ptr(old_elem));   // std::string::~string
        ext_006A5C5C(as_ptr(old_elem));   // operator delete
    }

    // +0x18 = new element
    lift_field<uint32_t>(self, 0x18) = new_elem;

    // Remove new element from the string vector at +0x10.
    uint32_t local = lift_field<uint32_t>(self, 0x1c);
    ext_004BBEB0(as_ptr(lift_field<uint32_t>(self, 0x10)), &local);

    // Notify listener at +0x24 via vtable slot 1: (new_elem, +0x20).
    const uint32_t listener = lift_field<uint32_t>(self, 0x24);
    if (listener != 0) {
        const uint32_t arg20 = lift_field<uint32_t>(self, 0x20);
        const uint32_t arg1c = lift_field<uint32_t>(self, 0x1c);
        void* obj = as_ptr(listener);
        void** vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (*)(void*, uint32_t, uint32_t)>(vtbl[1])(obj, arg1c, arg20);
    }

    // Forward to CallSlot3OnEachEntryThenDispatch on +0x14 if set.
    const uint32_t target = lift_field<uint32_t>(self, 0x14);
    if (target != 0) {
        ext_00517510(as_ptr(target), as_ptr(lift_field<uint32_t>(self, 0x1c)));
    }
}
} // namespace lift_004BBFD0

// [0x0049EA80] PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_0049EA80 {
// @name PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_0049D190(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_0049EA80(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_0049D190(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_0049EA80

// [0x004B5090] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_004B5090 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_004B4AA0(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_004B5090(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_004B4AA0(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_004B5090

// [0x004BB810] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_004BB810 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_004BA5A0(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_004BB810(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_004BA5A0(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_004BB810

// [0x004BBA30] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_004BBA30 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_004BA670(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_004BBA30(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_004BA670(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_004BBA30

// [0x00500FC0] PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_00500FC0 {
// @name PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_00500050(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_00500FC0(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_00500050(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_00500FC0

// [0x0050BB00] PointainerWithUndo<UndoablePointainerVector<NMData::TaskTemplateParam>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_0050BB00 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::TaskTemplateParam>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<NMData::TaskTemplateParam>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_00509F10(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_0050BB00(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_00509F10(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_0050BB00

// [0x0050BD20] PointainerWithUndo<UndoablePointainerVector<NMData::Task>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_0050BD20 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::Task>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<NMData::Task>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_00509F40(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_0050BD20(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_00509F40(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_0050BD20

// [0x00517750] PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_00517750 {
// @name PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_00517070(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_00517750(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_00517070(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_00517750

// [0x00527C90] PointainerWithUndo<UndoablePointainerVector<NMData::VariableValue>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_00527C90 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::VariableValue>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<NMData::VariableValue>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_00527570(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_00527C90(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_00527570(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_00527C90

// [0x0060AE40] PointainerWithUndo<UndoablePointainerVector<NMData::DisabledCollisionPair>>::AddElementCommand::vfunc_3 (205 bytes)
namespace lift_0060AE40 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::DisabledCollisionPair>>::AddElementCommand::vfunc_3
// @class PointainerWithUndo<UndoablePointainerVector<NMData::DisabledCollisionPair>>::AddElementCommand
// @summary Auto-lifted identical-shape clone of 0x0049E370 (RemoveElementCommand::describe).
namespace lift_0049E370 {
extern void* ext_0060A4F0(void* out, uint32_t value);
extern void* ext_00435D00(void* out, const char* lit, void* str);
extern uint32_t mem_00924E4C; // ostringstream::ostringstream(int)
extern uint32_t mem_00924E54; // ostringstream::str()
extern uint32_t mem_00924E58; // ostringstream::~ostringstream (vbase dtor)
extern uint32_t mem_00924E94; // operator<<(ostream&, const string&)
extern uint32_t mem_00924FF4; // string::~string

// @name RemoveElementCommand::describe
// @class PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand
// @summary Builds a description string from a literal and the element at +0x1C via an ostringstream, returning it by value.
// @field RemoveElementCommand +0x1C uint32_t field_0x1C
void* __fastcall fn_0060AE40(void* self, void* /*edx*/, void* result)
{
    alignas(8) uint8_t oss[0x80];
    alignas(8) uint8_t tmp[0x20];
    alignas(8) uint8_t tmp2[0x20];

    using CtorFn = void(__thiscall*)(void*, int);
    using StrFn = void*(__thiscall*)(void*, void*);
    using DtorFn = void(__thiscall*)(void*);
    using ShlFn = void*(__cdecl*)(void*, void*);

    ((CtorFn)(uintptr_t)mem_00924E4C)(oss, 2);
    void* s = ext_0060A4F0(tmp, *(uint32_t*)((uint8_t*)self + 0x1C));
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x9404D4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
} // namespace lift_0060AE40
