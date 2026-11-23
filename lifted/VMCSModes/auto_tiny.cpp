// Lifted C++ translation unit: lifted/VMCSModes/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004690F0(void* self);
extern "C" void __fastcall ext_00469150(void* self);
extern "C" void __fastcall ext_004F9820(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name VMCSModes::RunEvolutionMode::vfunc_17
// @class VMCSModes::RunEvolutionMode
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_004690F0.
// @field VMCSModes::RunEvolutionMode +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F27C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_004690F0(delegate_obj);
}
extern "C" void __fastcall ext_00469130(void* self);
extern "C" void __fastcall ext_00468A40(void* self);
extern "C" void __fastcall ext_00468A80(void* self);
extern "C" void __fastcall ext_00468AD0(void* self);
extern "C" void __fastcall ext_00468B10(void* self);

// [0x004F27D0] VMCSModes::RunEvolutionMode::vfunc_19 (8 bytes)
// @name VMCSModes::RunEvolutionMode::vfunc_19
// @class VMCSModes::RunEvolutionMode
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00469150.
// @field VMCSModes::RunEvolutionMode +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F27D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00469150(delegate_obj);
}

// [0x004F2E00] VMCSModes::DefaultImplementation::vfunc_141 (30 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_141
// @class VMCSModes::DefaultImplementation
// @summary MSVC scalar deleting destructor: calls sub_004F9820 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004F2E00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004F9820(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004F9830] VMCSModes::DefaultImplementation::vfunc_18 (8 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_18
// @class VMCSModes::DefaultImplementation
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00469130.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F9830(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00469130(delegate_obj);
}

// [0x004F98C0] VMCSModes::DefaultImplementation::vfunc_28 (8 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_28
// @class VMCSModes::DefaultImplementation
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00468A40.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F98C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00468A40(delegate_obj);
}

// [0x004F98F0] VMCSModes::DefaultImplementation::vfunc_30 (8 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_30
// @class VMCSModes::DefaultImplementation
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00468A80.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F98F0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00468A80(delegate_obj);
}

// [0x004F9900] VMCSModes::DefaultImplementation::vfunc_32 (8 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_32
// @class VMCSModes::DefaultImplementation
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00468AD0.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F9900(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00468AD0(delegate_obj);
}

// [0x004F9910] VMCSModes::DefaultImplementation::vfunc_31 (8 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_31
// @class VMCSModes::DefaultImplementation
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00468B10.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
extern "C" void __fastcall fn_004F9910(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00468B10(delegate_obj);
}

// [0x004F9920] VMCSModes::DefaultImplementation::vfunc_67 (10 bytes)
// @name VMCSModes::DefaultImplementation::vfunc_67
// @class VMCSModes::DefaultImplementation
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x178.
// @field VMCSModes::DefaultImplementation +0x0 void* vtable
extern "C" void __fastcall fn_004F9920(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x178);
    target(self);
}

// [0x004F9BD0]
namespace lift_004F9BD0 {
// @name VMCSModes::DefaultImplementation::vfunc_33
// @class VMCSModes::DefaultImplementation
// @summary Tail-calls sub_0046F890 on the object at delegate_0x8 + 0x14.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8


extern uint32_t __thiscall ext_0046F890(void* this_ptr);

uint32_t __thiscall fn_004F9BD0(void* this_ptr) {
    const auto* self = static_cast<const uint8_t*>(this_ptr);
    const auto* delegate = *reinterpret_cast<const uint8_t* const*>(self + 0x8);
    void* target = *reinterpret_cast<void* const*>(delegate + 0x14);
    return ext_0046F890(target);
}
} // namespace lift_004F9BD0

// [0x004F9BE0]
namespace lift_004F9BE0 {
extern uint32_t mem_r32(uint32_t addr);
extern uint32_t __thiscall ext_0046F8A0(uint32_t self);

// @name VMCSModes::DefaultImplementation::vfunc_34
// @class VMCSModes::DefaultImplementation
// @summary Forwards vfunc_34 to sub_0046F8A0 on the object at delegate_0x8 + 0x14
// @field VMCSModes::DefaultImplementation +0x8 uint32_t delegate_0x8

uint32_t __thiscall fn_004F9BE0(uint32_t self) {
    uint32_t delegate = mem_r32(self + 0x8);
    uint32_t target = mem_r32(delegate + 0x14);
    return ext_0046F8A0(target);
}
} // namespace lift_004F9BE0

// [0x004F2890] VMCSModes::SimulationMode::vfunc_143 (11 bytes)
namespace lift_004F2890 {
// @name VMCSModes::SimulationMode::vfunc_143
// @class VMCSModes::SimulationMode
// @summary Auto-lifted identical-shape clone of 0x004F9BD0 (VMCSModes::DefaultImplementation::vfunc_33).
// @field VMCSModes::SimulationMode +0x8 void* delegate_0x8
namespace lift_004F9BD0 {
// @name VMCSModes::DefaultImplementation::vfunc_33
// @class VMCSModes::DefaultImplementation
// @summary Tail-calls sub_0046F890 on the object at delegate_0x8 + 0x14.
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8


extern uint32_t __thiscall ext_00472350(void* this_ptr);

uint32_t __thiscall fn_004F2890(void* this_ptr) {
    const auto* self = static_cast<const uint8_t*>(this_ptr);
    const auto* delegate = *reinterpret_cast<const uint8_t* const*>(self + 0x8);
    void* target = *reinterpret_cast<void* const*>(delegate + 0x14);
    return ext_00472350(target);
}
} // namespace lift_004F9BD0
} // namespace lift_004F2890
