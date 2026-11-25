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

// [0x004F9840] VMCSModes::DefaultImplementation::vfunc_16 (13 bytes)
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_004F9840(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0x8);
    lift_field<uint32_t>(target, 0x3c) = value;
}
} // namespace lift_004F9840

// [0x004F9850] VMCSModes::DefaultImplementation::vfunc_37 (15 bytes)
namespace lift_004F9850 {
// @name VMCSModes::DefaultImplementation::vfunc_37
// @class VMCSModes::DefaultImplementation
// @summary Calls the virtual method at vtable slot +0x98 on this with argument 4, discards its result, and returns 0.
// @field VMCSModes::DefaultImplementation +0x0 void* vtable
extern uint8_t __fastcall fn_004F9850(void* self) {
    typedef void (__thiscall* VFunc)(void* self, uint32_t arg);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x98);
    target(self, 4u);
    return 0; // xor al, al
}
} // namespace lift_004F9850

// [0x004F9930] VMCSModes::DefaultImplementation::vfunc_90 (18 bytes)
namespace lift_004F9930 {
// @name VMCSModes::DefaultImplementation::vfunc_90
// @class VMCSModes::DefaultImplementation
// @summary Calls vmethod at vtable+0x84 on self and returns 1 if its low byte is zero, else 0.
// @field VMCSModes::DefaultImplementation +0x00 void* vtable
uint32_t fn_004F9930(void* self) {
    // Byte offsets are used for the vtable lookup so the 32-bit slot layout holds on any host.
    void* vtable = *reinterpret_cast<void**>(self);
    using VMethodFn = uint8_t (*)(void*);
    VMethodFn method = *reinterpret_cast<VMethodFn*>(reinterpret_cast<char*>(vtable) + 0x84);
    uint8_t lowByte = method(self);
    return lowByte == 0 ? 1u : 0u;
}
} // namespace lift_004F9930

// [0x004F9880] VMCSModes::DefaultImplementation::vfunc_94 (21 bytes)
namespace lift_004F9880 {
// Dispatches through the object's vtable slot at +0xA0 (no-arg virtual call,
// this = self) and returns 1 if the signed int result is greater than 1, else 0.
extern int32_t ext_vcall_slot_A0(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_94
// @class VMCSModes::DefaultImplementation
// @summary Calls the vtable slot at +0xA0 on self and returns (result > 1) as a byte.
// @field VMCSModes::DefaultImplementation +0x00 void* vtable
uint8_t fn_004F9880(void* self) {
    int32_t r = ext_vcall_slot_A0(self);
    return r > 1 ? 1 : 0;
}
} // namespace lift_004F9880
