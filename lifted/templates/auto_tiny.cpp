// Lifted C++ translation unit: lifted/templates/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065C660(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_004B5030(void* self);
extern "C" void __fastcall ext_004B6760(void* self);
extern "C" void __fastcall ext_004BA170(void* self);
extern "C" void __fastcall ext_004CDE30(void* self);
extern "C" void __fastcall ext_004FDEF0(void* self);
extern "C" void __fastcall ext_00624640(void* self);
extern "C" void __fastcall ext_0087273C(void* self);

// [0x00401CE0] DirtyOrClean<LoadableFromXMLBase>::vfunc_0 (30 bytes)
// @name DirtyOrClean<LoadableFromXMLBase>::vfunc_0
// @class DirtyOrClean<LoadableFromXMLBase>
// @summary MSVC scalar deleting destructor: calls sub_0065C660 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00401CE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0065C660(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004B5160] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_0 (30 bytes)
// @name PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_0
// @class PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand
// @summary MSVC scalar deleting destructor: calls sub_004B5030 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004B5160(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004B5030(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004B67C0] ModeManager<VMCSMode>::vfunc_0 (30 bytes)
// @name ModeManager<VMCSMode>::vfunc_0
// @class ModeManager<VMCSMode>
// @summary MSVC scalar deleting destructor: calls sub_004B6760 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004B67C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004B6760(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004BA580] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_0 (30 bytes)
// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_0
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand
// @summary MSVC scalar deleting destructor: calls sub_004BA170 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004BA580(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004BA170(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004CDEC0] ClassFactory<CompoundSensor>::vfunc_0 (30 bytes)
// @name ClassFactory<CompoundSensor>::vfunc_0
// @class ClassFactory<CompoundSensor>
// @summary MSVC scalar deleting destructor: calls sub_004CDE30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004CDEC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004CDE30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004FE0A0] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RenameElementCommand::vfunc_0 (30 bytes)
// @name PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RenameElementCommand::vfunc_0
// @class PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RenameElementCommand
// @summary MSVC scalar deleting destructor: calls sub_004FDEF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004FE0A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004FDEF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006248D0] SymbolMap<SymbolSourcePointerMap<EffectorBase>>::vfunc_1 (8 bytes)
// @name SymbolMap<SymbolSourcePointerMap<EffectorBase>>::vfunc_1
// @class SymbolMap<SymbolSourcePointerMap<EffectorBase>>
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_00624640.
// @field SymbolMap<SymbolSourcePointerMap<EffectorBase>> +0x4 void* delegate_0x4
extern "C" void __fastcall fn_006248D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_00624640(delegate_obj);
}

// [0x006A7FD0] CTypedPtrMap<CMapStringToPtr, ATL::CStringT<char, StrTraitMFC_DLL<char, ATL::ChTraitsCRT<char>>>, GWCPropertyFeel *>::vfunc_1 (30 bytes)
// @name CTypedPtrMap<CMapStringToPtr, ATL::CStringT<char, StrTraitMFC_DLL<char, ATL::ChTraitsCRT<char>>>, GWCPropertyFeel *>::vfunc_1
// @class CTypedPtrMap<CMapStringToPtr, ATL::CStringT<char, StrTraitMFC_DLL<char, ATL::ChTraitsCRT<char>>>, GWCPropertyFeel *>
// @summary MSVC scalar deleting destructor: calls thunk_MFC80_ord_663 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006A7FD0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0087273C(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0052EF40]
namespace lift_0052EF40 {
extern uint8_t mem_read8(uintptr_t addr);

// @name ManagedDisplayList<UtilityGraphics::Grid>::vfunc_17
// @class ManagedDisplayList<UtilityGraphics::Grid>
// @summary Returns whether the byte field at offset 0x0C is non-zero.
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x0C uint8_t field_0x0C
uint32_t __thiscall fn_0052EF40(uintptr_t ecx) {
    return static_cast<uint32_t>(mem_read8(ecx + 0xC) != 0);
}
} // namespace lift_0052EF40
