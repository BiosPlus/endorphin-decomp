// Lifted C++ translation unit: lifted/templates/RemoveElementCommand.cpp
#include "lift_compat.h"
#include <cstdint>

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

// [0x00501620]
namespace lift_00501620 {
// Callees (declared as free functions; __thiscall is a no-op in the portable build).
int32_t __thiscall ext_00527EC0(void* self, uintptr_t* target_ptr);
void __thiscall ext_00517510(void* self, void* arg);

// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand
// @summary Swaps the stored element at +0x1C into +0x18 (releasing the previous one via its virtual dtor), removes the element from the container at +0x10 recording its index in +0x20, notifies the object at +0x24, and forwards the element to the handler at +0x14.
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x10 void* container
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x14 void* handler
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x18 void* prev_element
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x1C void* element
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x20 int32_t removed_index
// @field PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand +0x24 void* listener
void __thiscall fn_00501620(void* self) {
    void* prev = lift_field<void*>(self, 0x18);
    void* elem = lift_field<void*>(self, 0x1C);

    // if (prev != elem && prev != nullptr) prev->vfunc_0(1);
    if (elem != prev && prev != nullptr) {
        void** vt = *reinterpret_cast<void***>(prev);
        reinterpret_cast<void(__thiscall*)(void*, int)>(vt[0])(prev, 1);
    }
    lift_field<void*>(self, 0x18) = elem;

    uintptr_t target = reinterpret_cast<uintptr_t>(elem);
    int32_t idx = ext_00527EC0(lift_field<void*>(self, 0x10), &target);
    lift_field<int32_t>(self, 0x20) = idx;

    void* listener = lift_field<void*>(self, 0x24);
    if (listener != nullptr) {
        void** vt = *reinterpret_cast<void***>(listener);
        reinterpret_cast<void(__thiscall*)(void*, void*, int32_t)>(vt[1])(listener, elem, idx);
    }

    void* handler = lift_field<void*>(self, 0x14);
    if (handler != nullptr) {
        ext_00517510(handler, elem);
    }
}
} // namespace lift_00501620

// [0x004BC240] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand::vfunc_1 (103 bytes)
namespace lift_004BC240 {
// Known callee 0x004BBEB0: std::vector<std::string*>::find_and_erase_null (Finds an element in a vector of std::string*, nulls it out, erases it, and returns its index.)
extern int32_t ext_004BBEB0(void* self, uint32_t* elem_ptr);
// Known callee 0x00517510: CallSlot3OnEachEntryThenDispatch (Forwards its argument to CallSlot3OnEachEntry (0x005170D0) on this, then calls 0x00678D70 on this with flag 1.)
extern void ext_00517510(void* self, void* arg);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.) Called cdecl with one argument (operator delete).
extern void ext_006A5C5C(void* p);
// Function pointer stored at 0x00924FF4 (points to the std::string destructor, 0x00628FF0).
extern int mem_00924FF4;

// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand
// @summary Removes a string pointer from the owner's vector, replaces the stored pointer (releasing the old one), then notifies the sub-object at +0x24 and the callback at +0x14.
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x10 void* owner
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x14 void* callback
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x18 void* old_str
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x1c void* str
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x20 uint32_t index
// @field PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand +0x24 void* notify_obj
void fn_004BC240(void* self) {
    // Release the previously held string when it differs from the current one.
    void* old_str = lift_field<void*>(self, 0x18);
    void* cur_str = lift_field<void*>(self, 0x1c);
    if (cur_str != old_str && old_str != nullptr) {
        // std::string destructor via the function pointer at 0x00924FF4 (thiscall, this = old_str).
        auto dtor = reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(mem_00924FF4));
        dtor(old_str);
        ext_006A5C5C(old_str);
    }

    // Store the current string as the new held value.
    lift_field<void*>(self, 0x18) = cur_str;

    // Remove the element from the owner's vector; the callee takes a pointer to a slot holding the value.
    uint32_t slot = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x1c)));
    int32_t index = ext_004BBEB0(lift_field<void*>(self, 0x10), &slot);
    lift_field<int32_t>(self, 0x20) = index;

    // Notify the object at +0x24 (virtual slot 1): obj->vfunc1(str, index).
    void* notify_obj = lift_field<void*>(self, 0x24);
    if (notify_obj != nullptr) {
        void** vtable = *reinterpret_cast<void***>(notify_obj);
        auto vfunc1 = reinterpret_cast<void (*)(void*, void*, int32_t)>(vtable[1]);
        vfunc1(notify_obj, lift_field<void*>(self, 0x1c), index);
    }

    // Forward to the callback at +0x14, if present.
    void* callback = lift_field<void*>(self, 0x14);
    if (callback != nullptr) {
        ext_00517510(callback, lift_field<void*>(self, 0x1c));
    }
}
} // namespace lift_004BC240

// [0x004B55B0]
namespace lift_004B55B0 {
// @name PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand::vfunc_1
// @class PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand
// @summary Releases the saved element if it changed, removes the target element from the owner's pointer vector, stores the removed index, then notifies the object at +0x24 (vtable slot 1) and the object at +0x14.
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x10 uint32_t owner
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x14 uint32_t listener
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x18 uint32_t saved_value
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x1C uint32_t target_value
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x20 int32_t removed_index
// @field PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand +0x24 uint32_t notifier

// Imported helpers and data (differentially tested against endorphin.exe).
int32_t ext_004B53E0(void* self, const uint32_t* target_ptr);   // VectorFindAndErase
void ext_00517510(void* self, void* arg);                      // CallSlot3OnEachEntryThenDispatch
void ext_006A5C5C(uint32_t arg);                               // thunk_MFC80_ord_764 (cdecl)
extern uint32_t mem_00924FF4;                                  // IAT slot: basic_string dtor

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

void fn_004B55B0(void* self) {
    uint32_t ebx = lift_field<uint32_t>(self, 0x1C);
    uint32_t ebp = lift_field<uint32_t>(self, 0x18);

    if (ebx != ebp && ebp != 0) {
        // call [mem_00924FF4] with this = ebp + 4
        auto dtor = reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(mem_00924FF4));
        dtor(as_ptr(ebp + 4));
        ext_006A5C5C(ebp);
    }

    lift_field<uint32_t>(self, 0x18) = ebx;

    uint32_t owner = lift_field<uint32_t>(self, 0x10);
    int32_t eax = ext_004B53E0(as_ptr(owner), &lift_field<uint32_t>(self, 0x1C));
    lift_field<int32_t>(self, 0x20) = eax;

    uint32_t notifier = lift_field<uint32_t>(self, 0x24);
    if (notifier != 0) {
        // edx = [[notifier] + 4]; call edx with this = notifier,
        // args = ([self+0x1C], eax)
        uint32_t* obj = reinterpret_cast<uint32_t*>(as_ptr(notifier));
        uint32_t* vtable = reinterpret_cast<uint32_t*>(as_ptr(obj[0]));
        uint32_t slot1 = vtable[1];
        auto fn = reinterpret_cast<void (*)(void*, uint32_t, int32_t)>(as_ptr(slot1));
        fn(as_ptr(notifier), lift_field<uint32_t>(self, 0x1C), eax);
    }

    uint32_t listener = lift_field<uint32_t>(self, 0x14);
    if (listener != 0) {
        ext_00517510(as_ptr(listener), as_ptr(lift_field<uint32_t>(self, 0x1C)));
    }
}
} // namespace lift_004B55B0

// [0x0049E370]
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
void* __fastcall fn_0049E370(void* self, void* /*edx*/, void* result)
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
    void* s2 = ext_00435D00(tmp2, (const char*)(uintptr_t)0x009404B4u, s);
    ((ShlFn)(uintptr_t)mem_00924E94)(oss, s2);
    ((DtorFn)(uintptr_t)mem_00924FF4)(tmp);
    ((StrFn)(uintptr_t)mem_00924E54)(oss, result);
    ((DtorFn)(uintptr_t)mem_00924E58)(oss);
    return result;
}
} // namespace lift_0049E370
