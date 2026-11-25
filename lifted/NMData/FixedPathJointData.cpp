// Lifted C++ translation unit: lifted/NMData/FixedPathJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096B92C.
extern "C" const char mem_0096B92C[];
// Known callee 0x0058F6B0: NMData::AxisDefineSensorData::vfunc_14 (self, arg1, arg2); returns arg1 in the default path.
extern "C" void* ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// Known callee 0x00661650: sub_00661650 (35B, thiscall-style: this = arg1, one stack argument).
extern "C" void ext_00661650(void* self, uint32_t value);

extern "C" void* ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// Known callee 0x00661650: sub_00661650 (35B, thiscall-style: this = arg1, one stack argument).
extern "C" void ext_00661650(void* self, uint32_t value);
// @summary Constructs a std::string from the literal at 0x0096B92C in the caller's sret buffer and returns that buffer.
void* __thiscall fn_005EFF60(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0096B92C);
    return out;
}
extern "C" void __thiscall ext_005EBC10(void* self, const float* value);
extern "C" int mem_00924FE4;

extern "C" int mem_00924FE4;
// @name NMData::FixedPathJointData::vfunc_0_off_154
// @class NMData::FixedPathJointData
// @summary If the flag at +0x140 is clear and the object at +0xE0 is set, query the primary base via vtable slot 5 with the stack argument, then forward that result to the object at +0xE0 via vtable slot 43 (+0xAC).
// @field NMData::FixedPathJointData +0xE0 void* field_0xe0 (object pointer; its vtable slot at +0xAC is called)
// @field NMData::FixedPathJointData +0x140 int32_t field_0x140 (non-zero disables the function)

#include <cstdint>

namespace {

// Thiscall virtual slot taking one stack argument (callee pops 4) and returning a dword in EAX.
using SlotGetFn = std::uint32_t (*)(void* self, std::uint32_t arg);
// Thiscall virtual slot taking one stack argument (callee pops 4) and returning nothing.
using SlotSetFn = void (*)(void* self, std::uint32_t arg);

}  // namespace

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4).
void __fastcall NMData_FixedPathJointData_vfunc_0_off_154(void* ecx, std::uint32_t arg) {
    auto* self = static_cast<std::uint8_t*>(ecx);

    if (lift_field<std::int32_t>(self, 0x140) != 0) {
        return;
    }

    void* obj = lift_field<void*>(self, 0xE0);
    if (obj == nullptr) {
        return;
    }

    // Primary base subobject sits at this - 0x150; its vtable slot 5 (+0x14) is queried.
    auto* primary = self - 0x150;
    void** primaryVptr = *reinterpret_cast<void***>(primary);
    auto queryFn = reinterpret_cast<SlotGetFn>(primaryVptr[5]);
    std::uint32_t result = queryFn(primary, arg);

    // Object at +0xE0: vtable slot at +0xAC (index 43) receives the result.
    void** objVptr = *reinterpret_cast<void***>(obj);
    auto forwardFn = reinterpret_cast<SlotSetFn>(objVptr[0xAC / sizeof(void*)]);
    forwardFn(obj, result);
}
#include <cstddef>
extern "C" void ext_0058F670(void* self, void* arg);

extern "C" void ext_0058F670(void* self, void* arg);
// @name NMData::FixedPathJointData::vfunc_14
// @class NMData::FixedPathJointData
// @summary Dispatches on the request code: for codes 0x40/0x137 (and 0x158 via the second slot) forwards arg1 to sub_00661650 with a non-zero stored value, otherwise defers to AxisDefineSensorData::vfunc_14; always returns arg1.
// @field NMData::FixedPathJointData +0x17C uint32_t field_0x17c (non-zero selects the tail call for codes 0x40/0x137)
// @field NMData::FixedPathJointData +0x180 uint32_t field_0x180 (non-zero selects the tail call for codes 0x40/0x137/0x158)
void* fn_005E29F0(void* self, void* arg1, uint32_t arg2) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    uint32_t v = 0;
    bool useTail = false;

    if (arg2 == 0x40u || arg2 == 0x137u) {
        v = *reinterpret_cast<uint32_t*>(base + 0x17C);
        useTail = (v != 0);
    }
    if (!useTail && (arg2 == 0x40u || arg2 == 0x137u || arg2 == 0x158u)) {
        v = *reinterpret_cast<uint32_t*>(base + 0x180);
        useTail = (v != 0);
    }

    if (useTail) {
        ext_00661650(arg1, v);
        return arg1;
    }

    ext_0058F6B0(self, arg1, arg2);
    return arg1;
}
#include <cstring>

// [0x005E1060] NMData::FixedPathJointData::vfunc_15_off_4 (41 bytes)
// @name NMData::FixedPathJointData::vfunc_15_off_4
// @class NMData::FixedPathJointData
// @summary Forwards arg to HelperGraphic::vfunc_15_off_4 on self, then, if the sub-object at +0x178 is set, invokes its interface vtable slot 15 with arg.
// @field NMData::FixedPathJointData +0x178 void* field_0x178
void fn_005E1060(void* self, void* arg) {
    ext_0058F670(self, arg);

    uint8_t* base = static_cast<uint8_t*>(self);
    void* obj = *reinterpret_cast<void**>(base + 0x178);
    if (obj == nullptr) {
        return;
    }

    // Interface sub-object lives at obj+4; its vtable slot 15 (byte offset 0x3C) is called.
    uint8_t* iface = static_cast<uint8_t*>(obj) + 4;
    void** vtbl = *reinterpret_cast<void***>(iface);
    using SlotFn = void (*)(void* self, void* arg);
    auto slot15 = reinterpret_cast<SlotFn>(vtbl[15]);
    slot15(iface, arg);
}

// [0x005E4850] NMData::FixedPathJointData::vfunc_68 (140 bytes)
namespace lift_005E4850 {
// Known callee 0x005E12F0: Unknown::forwardToChildSlot7 (If the child pointer at +0x234 is non-null, tail-calls its vtable slot at byte offset 0x1C with the child as this; otherwise returns.)
extern void ext_005E12F0(void* self);
// Known callee 0x006622D0 (24B): takes ecx = arg2 and one stack argument (this+0x154).
extern void ext_006622D0(void* ecx, void* stack0);

// @name NMData::FixedPathJointData::vfunc_68
// @class NMData::FixedPathJointData
// @summary Steps the state byte at +0x194 (1..6) down to the requested level arg1, calling the forward/notify helpers when leaving level 5.
// @field NMData::FixedPathJointData +0x154 void* field_0x154
// @field NMData::FixedPathJointData +0x194 int32_t field_0x194
extern void __fastcall fn_005E4850(void* self, int edx_unused, int arg1, void* arg2) {
    (void)edx_unused;
    int32_t& state = lift_field<int32_t>(self, 0x194);

    const uint32_t idx = static_cast<uint32_t>(state) - 1u;
    if (idx > 5u) {
        return;
    }

    switch (idx) {
        case 0: goto set0;
        case 1: goto set1;
        case 2: goto set2;
        case 3: goto set3;
        case 4: goto set4;
        default: goto set5;
    }

set5:
    state = 5;
    if (arg1 == 5) {
        return;
    }
    ext_005E12F0(self);
    ext_006622D0(arg2, static_cast<char*>(self) + 0x154);

set4:
    state = 4;
    if (arg1 == 4) {
        return;
    }

set3:
    state = 3;
    if (arg1 == 3) {
        return;
    }

set2:
    state = 2;
    if (arg1 == 2) {
        return;
    }

set1:
    state = 1;
    if (arg1 == 1) {
        return;
    }

set0:
    state = 0;
}
} // namespace lift_005E4850

// [0x005EE360]
namespace lift_005EE360 {
extern void ext_005EC8D0(DWORD* dst, DWORD value);
extern void ext_005EC8F0(DWORD* out, DWORD value);
extern uint32_t __stdcall ext_005DF1F0(uint32_t self, uint32_t arg2);

// @name NMData::FixedPathJointData::vfunc_15
// @class NMData::FixedPathJointData
// @summary Dispatches property/attribute codes 0x2C4 and 0x2C5 to static-object helpers, delegating all other codes to AnimatableTransform::vfunc_15.
uint32_t __thiscall fn_005EE360(void* self, uint32_t out, uint32_t code) {
    if (code == 0x2C4u) {
        ext_005EC8D0(reinterpret_cast<DWORD*>(out), static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
        return out;
    }
    if (code == 0x2C5u) {
        ext_005EC8F0(reinterpret_cast<DWORD*>(out), static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
        return out;
    }
    ext_005DF1F0(out, code);
    return out;
}
} // namespace lift_005EE360

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
namespace lift_005E09B0 {
// @name NMData::FixedPathJointData::vfunc_44
// @class NMData::FixedPathJointData
// @summary Auto-lifted identical-shape clone of 0x00609730 (ThunkForwardToEmbeddedVfunc24).
namespace lift_00609730 {
// Callee 0x00602F20 (sub_00602F20, auto-lifted clone of 0x00602F00). The asm reaches it only
// through the vtable slot at +0x24, so it is recorded here as the known dispatch target and not called directly.
extern void ext_00602F20();

// @name ThunkForwardToEmbeddedVfunc24
// @summary Thunk: loads the subobject at self+0x0C, calls its secondary vtable slot at +0x24 with this adjusted to subobject+4, and returns that result.
// @field UnknownClass +0x0C void* field_0x0C
// @field UnknownSubobject +0x04 void* field_0x04
void* fn_005E09B0(void* self) {
    using VFn = void* (*)(void*);
    [[maybe_unused]] void* const knownSlot24Target = reinterpret_cast<void*>(&ext_00602F20);  // address only, never called

    void* inner = lift_field<void*>(self, 0x18C);                         // mov ecx, [self+0x0C]
    void* vptr = lift_field<void*>(inner, 0x04);                         // mov eax, [inner+0x04]
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vptr, 0xB0));   // mov edx, [vptr+0x24]
    void* adjusted = static_cast<uint8_t*>(inner) + 0x04;                // add ecx, 4
    return target(adjusted);                                             // jmp edx
}
} // namespace lift_00609730
} // namespace lift_005E09B0

// [0x005EFF60]
namespace lift_005EFF60 {
// @name NMData::FixedPathJointData::vfunc_59
// @class NMData::FixedPathJointData
// @summary Constructs the std::string result (sret) from the rdata literal at 0x0096B92C and returns the sret pointer; `this` is unused.

// Rdata string literal referenced by the function.
extern const char mem_0096B92C[];

std::string* NMData_FixedPathJointData_vfunc_59(std::string* out) {
    // MSVCP80 import slot (0x00924FE4) holding std::basic_string<char> ctor thunk; the
    // portable build constructs the string directly from the literal.
    const auto* ctor_slot = reinterpret_cast<const uint32_t*>(0x00924FE4u);
    (void)ctor_slot;
    new (out) std::string(mem_0096B92C);
    return out;
}
} // namespace lift_005EFF60

// [0x005E0E70] NMData::FixedPathJointData::vfunc_0_off_154 (63 bytes)
namespace lift_005E0E70 {
// @name NMData::FixedPathJointData::vfunc_0_off_154
// @class NMData::FixedPathJointData
// @summary Thunk-style tick forwarder: if +0x140 is zero and +0xE0 is set, calls vslot 0x14 on the object at self-0x150 with arg, then vslot 0xAC on the +0xE0 object with that result.
// @field NMData::FixedPathJointData +0x140 int32_t field_0x140
// @field NMData::FixedPathJointData +0xE0 void* field_0xe0
void fn_005E0E70(void* self, uintptr_t arg) {
    // Disabled when field_0x140 is non-zero.
    if (lift_field<int32_t>(self, 0x140) != 0) {
        return;
    }

    void* child = lift_field<void*>(self, 0xE0);
    if (child == nullptr) {
        return;
    }

    // Owner subobject at self-0x150; its vtable slot at byte offset +0x14 is called
    // with the owner as `this` and the incoming argument.
    void* owner = static_cast<uint8_t*>(self) - 0x150;
    void* owner_vtbl = lift_field<void*>(owner, 0);
    using OwnerFn = uintptr_t (*)(void*, uintptr_t);
    const uintptr_t result =
        reinterpret_cast<OwnerFn>(lift_field<void*>(owner_vtbl, 0x14))(owner, arg);

    // Child vtable slot at byte offset +0xAC is called with the child as `this`
    // and the result as its argument.
    void* child_vtbl = lift_field<void*>(child, 0);
    using ChildFn = void (*)(void*, uintptr_t);
    reinterpret_cast<ChildFn>(lift_field<void*>(child_vtbl, 0xAC))(child, result);
}
} // namespace lift_005E0E70

// [0x005EEDB0] NMData::FixedPathJointData::vfunc_67 (118 bytes)
namespace lift_005EEDB0 {
// IAT slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called indirectly; returns and execution continues).
extern void (*mem_00925134)(void);

// Known callee 0x0048EF80: std_vector_8_erase_range (MSVC thiscall, erases [first, last) of 8-byte elements,
// returns the updated iterator through a hidden return pointer).
extern void* ext_0048EF80(void* self, void* ret_iter, void* first_proxy, uint32_t first_ptr,
                              void* last_proxy, uint32_t last_ptr);
// Known callee 0x005EEB90: per-index hook (thiscall, takes the index as its single argument).
extern void ext_005EEB90(void* self, int32_t index);
// Known callee 0x005851B0: AnimatableTransform::vfunc_14_off_C. Listed as a callee of this function, but no
// direct call to it appears in the bytes; it is probably the vtable dispatch target at slot +0xF0 (not verified).
extern uint8_t ext_005851B0(void* self, uint32_t arg1, uint32_t arg2);

// @name NMData::FixedPathJointData::vfunc_67
// @class NMData::FixedPathJointData
// @summary Erases the element range [field_0x16c, field_0x170) from the child vector at +0x168, then calls ext_005EEB90 for each index in [0, vfunc_60()).
// @field NMData::FixedPathJointData +0x0 void* vtable (vptr; vfunc_60 at slot +0xF0 is the element count)
// @field NMData::FixedPathJointData +0x16C uint32_t field_0x16c (erase range begin)
// @field NMData::FixedPathJointData +0x168 void* field_0x168 (address taken; vector container base for erase)
// @field NMData::FixedPathJointData +0x170 uint32_t field_0x170 (erase range end)
void fn_005EEDB0(void* self) {
    const uint32_t first = lift_field<uint32_t>(self, 0x16C);
    const uint32_t last = lift_field<uint32_t>(self, 0x170);

    // Original: if first > last (unsigned), call the CRT invalid-parameter handler via IAT 0x925134, then continue.
    if (first > last) {
        mem_00925134();
    }

    // Erase [first, last) from the container embedded at this+0x168.
    void* vec = &lift_field<uint8_t>(self, 0x168);
    uint32_t ret_iter[2] = {0, 0};
    ext_0048EF80(vec, ret_iter, vec, first, vec, last);

    // Callee 0x005851B0 is listed for this function but has no direct call in the bytes; reference only, no call.
    (void)&ext_005851B0;

    // Loop: for (i = 0; i < vfunc_60(); ++i) ext_005EEB90(self, i);
    // The count is re-fetched through the vtable on every iteration, as in the original.
    using CountFn = int32_t (__thiscall*)(void*);
    auto count = [self]() -> int32_t {
        void* vtbl = lift_field<void*>(self, 0x0);
        void* fn = lift_field<void*>(vtbl, 0xF0);
        return reinterpret_cast<CountFn>(fn)(self);
    };

    for (int32_t i = 0; i < count(); ++i) {
        ext_005EEB90(self, i);
    }
}
} // namespace lift_005EEDB0
