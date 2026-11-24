// Lifted C++ translation unit: lifted/Properties/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0041CAB0(void* self);
extern "C" void __fastcall ext_0041CB00(void* self);
extern "C" void __fastcall ext_0041CB80(void* self);
extern "C" void __fastcall ext_0041CCA0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name Properties::PropertiesControl::vfunc_86
// @class Properties::PropertiesControl
// @summary Member forwarding thunk: loads subobject pointer at +0x1A0 and tail-calls sub_0041CAB0.
// @field Properties::PropertiesControl +0x1A0 void* delegate_0x1A0
extern "C" void __fastcall fn_0041CFB0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x1A0);
    ext_0041CAB0(delegate_obj);
}
extern "C" void __fastcall ext_0041DAD0(void* self);
extern "C" void __fastcall ext_0041DB60(void* self);
extern "C" void __fastcall ext_004482A0(void* self);
extern "C" void __fastcall ext_00448540(void* self);
extern "C" void __fastcall ext_00462380(void* self);
extern "C" void __fastcall ext_004AEF60(void* self);
extern "C" void __fastcall ext_004F1210(void* self);
#include <cstdint>

// [0x0041CFC0] Properties::PropertiesControl::vfunc_87 (11 bytes)
// @name Properties::PropertiesControl::vfunc_87
// @class Properties::PropertiesControl
// @summary Member forwarding thunk: loads subobject pointer at +0x1A0 and tail-calls sub_0041CB00.
// @field Properties::PropertiesControl +0x1A0 void* delegate_0x1A0
extern "C" void __fastcall fn_0041CFC0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x1A0);
    ext_0041CB00(delegate_obj);
}

// [0x0041CFD0] Properties::PropertiesControl::vfunc_89 (11 bytes)
// @name Properties::PropertiesControl::vfunc_89
// @class Properties::PropertiesControl
// @summary Member forwarding thunk: loads subobject pointer at +0x1A0 and tail-calls sub_0041CB80.
// @field Properties::PropertiesControl +0x1A0 void* delegate_0x1A0
extern "C" void __fastcall fn_0041CFD0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x1A0);
    ext_0041CB80(delegate_obj);
}

// [0x0041D940] Properties::PropertyViewFrame::vfunc_1 (30 bytes)
// @name Properties::PropertyViewFrame::vfunc_1
// @class Properties::PropertyViewFrame
// @summary MSVC scalar deleting destructor: calls sub_0041CCA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0041D940(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0041CCA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0041DD20] Properties::PropertiesControl::vfunc_80 (11 bytes)
// @name Properties::PropertiesControl::vfunc_80
// @class Properties::PropertiesControl
// @summary Member forwarding thunk: loads subobject pointer at +0x1A0 and tail-calls sub_0041DAD0.
// @field Properties::PropertiesControl +0x1A0 void* delegate_0x1A0
extern "C" void __fastcall fn_0041DD20(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x1A0);
    ext_0041DAD0(delegate_obj);
}

// [0x0041DD30] Properties::PropertiesControl::vfunc_88 (11 bytes)
// @name Properties::PropertiesControl::vfunc_88
// @class Properties::PropertiesControl
// @summary Member forwarding thunk: loads subobject pointer at +0x1A0 and tail-calls sub_0041DB60.
// @field Properties::PropertiesControl +0x1A0 void* delegate_0x1A0
extern "C" void __fastcall fn_0041DD30(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x1A0);
    ext_0041DB60(delegate_obj);
}

// [0x004482B0] Properties::PropertySpinbuttonEditFeel::vfunc_1 (30 bytes)
// @name Properties::PropertySpinbuttonEditFeel::vfunc_1
// @class Properties::PropertySpinbuttonEditFeel
// @summary MSVC scalar deleting destructor: calls sub_004482A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004482B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004482A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00448F00] Properties::PropInPlaceSpinbuttonEdit::vfunc_1 (30 bytes)
// @name Properties::PropInPlaceSpinbuttonEdit::vfunc_1
// @class Properties::PropInPlaceSpinbuttonEdit
// @summary MSVC scalar deleting destructor: calls sub_00448540 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00448F00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00448540(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00462390] Properties::ValidatingValue::vfunc_0 (30 bytes)
// @name Properties::ValidatingValue::vfunc_0
// @class Properties::ValidatingValue
// @summary MSVC scalar deleting destructor: calls sub_00462380 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00462390(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00462380(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004AF040] Properties::PropertySelectionEngine::vfunc_1 (30 bytes)
// @name Properties::PropertySelectionEngine::vfunc_1
// @class Properties::PropertySelectionEngine
// @summary MSVC scalar deleting destructor: calls sub_004AEF60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004AF040(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004AEF60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004F0B00] Properties::TargetSelectionProxy::vfunc_0_off_4 (8 bytes)
// @name Properties::TargetSelectionProxy::vfunc_0_off_4
// @class Properties::TargetSelectionProxy
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls sub_004F1210.
extern "C" void __fastcall fn_004F0B00(void* self) {
    ext_004F1210(static_cast<char*>(self) - 0x4);
}

// [0x00681B20]
namespace lift_00681B20 {
// @name Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_8
// @class Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>
// @summary Virtual method that returns its second stack argument.
uint32_t fn_00681B20(void* self, uint32_t arg1, uint32_t arg2) {
    (void)self;
    (void)arg1;
    return arg2;
}
} // namespace lift_00681B20

// [0x0041D350] Properties::GWCPropertiesControlDriver::vfunc_9 (17 bytes)
namespace lift_0041D350 {
// @name Properties::GWCPropertiesControlDriver::vfunc_9
// @class Properties::GWCPropertiesControlDriver
// @summary Auto-lifted identical-shape clone of 0x004407B0 (GetPointerChainDword10).
namespace lift_004407B0 {
// @name GetPointerChainDword10
// @class <ClassName> (unknown; receiver type not yet identified)
// @summary Returns the DWORD at +0x10 of the pointer stored at self+0x44, or 0 if that pointer is null.
// @field <ClassName> +0x44 void* field_0x44
// @field void +0x10 DWORD field_0x10
DWORD fn_0041D350(void* self) {
    void* p = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0xC);
    if (p == nullptr) {
        return 0;
    }
    return *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(p) + 0x19C);
}
} // namespace lift_004407B0
} // namespace lift_0041D350

// [0x004F0510] Properties::TestControl::vfunc_8 (19 bytes)
namespace lift_004F0510 {
// @name Properties::TestControl::vfunc_8
// @class Properties::TestControl
// @summary Returns the dword at +0x40 of the given object, or 0 if the object pointer is null.
// @field Properties::TestControl +0x40 DWORD field_0x40
DWORD fn_004F0510(const void* self) {
    if (self == nullptr) {
        return 0;
    }
    return *reinterpret_cast<const DWORD*>(static_cast<const BYTE*>(self) + 0x40);
}
} // namespace lift_004F0510

// [0x00681C10]
namespace lift_00681C10 {
// @name Properties::PropertyIteratorTypes::PropertySourceType::vfunc_8
// @class Properties::PropertyIteratorTypes::PropertySourceType
// @summary Forwards arg2 to virtual slot 19 (+0x4C) of the object pointed to by arg1's first word, and returns its result.
// @field arg1 +0x00 pointer field_0x00 (pointer to object whose first word is a vtable-bearing object)
// @field Properties::PropertyIteratorTypes::PropertySourceType +0x4C vtable slot 19 (virtual call target)
typedef uint32_t(__thiscall* PropertySourceVfn19)(void* self, uint32_t arg);

uint32_t fn_00681C10(void* holder, uint32_t arg) {
    void* inner = *reinterpret_cast<void**>(holder);
    void** vtable = *reinterpret_cast<void***>(inner);
    PropertySourceVfn19 target = reinterpret_cast<PropertySourceVfn19>(vtable[19]);
    return target(inner, arg);
}
} // namespace lift_00681C10
