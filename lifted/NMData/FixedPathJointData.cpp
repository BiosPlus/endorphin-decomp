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
#include <ios>
#include <ostream>
#include <sstream>

#include <ostream>
#include <sstream>
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

// [0x005ECB10] NMData::FixedPathJointData::vfunc_9_off_C (136 bytes)
namespace lift_005ECB10 {
// Known callee 0x00528C30: AnimatableTransform::vfunc_9_off_C (If the sub-object at +0x4 is non-null, forwards the call (same stack argument) to its vtable slot 8; otherwise returns 0.)
extern std::uint32_t ext_00528C30(void* self, std::uint32_t arg0);
// MSVCR80 _invalid_parameter_noinfo IAT slot; only used by MSVC bounds checks, not a real data access.
extern int mem_00925134;

// @name NMData::FixedPathJointData::vfunc_9_off_C
// @class NMData::FixedPathJointData
// @summary Remaps arg (1->3, 2->4), forwards it to the base callee, then calls vtable slot 8 with the remapped arg on each object in the vector at +0x1F8.
// @field NMData::FixedPathJointData +0x1F8 void** field_0x1f8
// @field NMData::FixedPathJointData +0x1FC void** field_0x1fc
void fn_005ECB10(void* self, std::uint32_t arg0) {
    (void)&mem_00925134;

    std::uint32_t mode = arg0;
    if (arg0 == 1) {
        mode = 3;
    } else if (arg0 == 2) {
        mode = 4;
    }

    ext_00528C30(self, mode);

    auto* base = static_cast<unsigned char*>(self);
    void** it = *reinterpret_cast<void***>(base + 0x1F8);
    void** const end = *reinterpret_cast<void***>(base + 0x1FC);

    for (; it != end; ++it) {
        auto* obj = static_cast<unsigned char*>(*it);
        void** vtbl = *reinterpret_cast<void***>(obj);
        // vtable slot 8 (byte offset 0x20): thiscall(this, arg)
        using Slot8 = void(__thiscall*)(void*, std::uint32_t);
        auto fn = reinterpret_cast<Slot8>(vtbl[8]);
        fn(obj, mode);
    }
}
} // namespace lift_005ECB10

// [0x005EB890] NMData::FixedPathJointData::vfunc_10_off_C (139 bytes)
namespace lift_005EB890 {
// MSVC iterator bounds-check trap (_invalid_parameter_noinfo IAT slot); not modelled.
extern int mem_00925134;

// @name NMData::FixedPathJointData::vfunc_10_off_C
// @class NMData::FixedPathJointData
// @summary Iterates the child pointer array [field_0x74, field_0x78); unless arg2 is set, children whose vfunc_c4 returns true are skipped, otherwise the child's +0xC sub-object gets vfunc_24(arg1) and vfunc_28(arg1, 1).
// @field NMData::FixedPathJointData +0x74 void** field_0x74 (begin of child pointer array)
// @field NMData::FixedPathJointData +0x78 void** field_0x78 (end of child pointer array)
void fn_005EB890(void* self, uint32_t arg1, uint8_t arg2) {
    (void)&mem_00925134;
    using PredFn = uint8_t(__thiscall*)(void*);
    using VFn1 = void(__thiscall*)(void*, uint32_t);
    using VFn2 = void(__thiscall*)(void*, uint32_t, uint32_t);

    void** begin = lift_field<void**>(self, 0x74);
    void** end = lift_field<void**>(self, 0x78);

    for (void** p = begin; p != end; ++p) {
        void* child = *p;

        if (arg2 == 0) {
            void** child_vt = *reinterpret_cast<void***>(child);
            auto pred = reinterpret_cast<PredFn>(child_vt[0xC4 / sizeof(void*)]);
            if (pred(child)) {
                continue;
            }
        }

        void* sub = reinterpret_cast<uint8_t*>(child) + 0xC;
        void** sub_vt = *reinterpret_cast<void***>(sub);
        reinterpret_cast<VFn1>(sub_vt[0x24 / sizeof(void*)])(sub, arg1);
        reinterpret_cast<VFn2>(sub_vt[0x28 / sizeof(void*)])(sub, arg1, 1u);
    }
}
} // namespace lift_005EB890

// [0x005E1CD0] NMData::FixedPathJointData::vfunc_54 (128 bytes)
namespace lift_005E1CD0 {
extern void ext_005B5780(void* self, uint32_t arg);
extern void ext_005E0380(void* self, void* arg);
extern void ext_006A6C87(void* fn);
extern int mem_00B45D1C;
extern uint8_t mem_00B45D14;

// @name NMData::FixedPathJointData::vfunc_54
// @class NMData::FixedPathJointData
// @summary Lazily constructs the static object at 0xB45CD0 (guarded by bit 0 of mem_00B45D1C), runs sub_005E0380 on this with it, caches this->field_0x178 into mem_00B45D14, and returns the static object's address.
// @field NMData::FixedPathJointData +0x178 uint8_t field_0x178
void* fn_005E1CD0(void* self) {
    void* const static_obj = reinterpret_cast<void*>(0x00B45CD0);

    // One-time initialization guard (bit 0 of the flag dword).
    if ((mem_00B45D1C & 1) == 0) {
        mem_00B45D1C |= 1;
        ext_005B5780(static_obj, 0x0C);
        ext_006A6C87(reinterpret_cast<void*>(0x0091E410));
    }

    ext_005E0380(self, static_obj);

    *reinterpret_cast<uint8_t*>(&mem_00B45D14) = lift_field<uint8_t>(self, 0x178);
    return static_obj;
}
} // namespace lift_005E1CD0

// [0x005ECE20] NMData::FixedPathJointData::vfunc_35 (274 bytes)
namespace lift_005ECE20 {
// Known callee 0x005ECDC0: Unknown::MarkVectorElementsFlag4
extern void __thiscall ext_005ECDC0(void* self);
// Known callee 0x00584AE0: descriptiveName_00584AE0
extern int __thiscall ext_00584AE0(void* self);
// Known callee 0x005E0EB0: computeClampedScaledLength
extern float __thiscall ext_005E0EB0(void* self, const float* vec);
extern int mem_00B40640;
// MSVCR80!_invalid_parameter_noinfo import slot (debug iterator checks; metadata only)
extern int mem_00925134;

// @name NMData::FixedPathJointData::vfunc_35
// @class NMData::FixedPathJointData
// @summary Marks the element vector, then for each entry in the pointer vector at +0x1D4 whose flag test fails, computes a clamped length and forwards a 3-float vector to the matching element's vtable slot 13.
// @field NMData::FixedPathJointData +0x1D4 void** field_0x1d4 (begin of pointer vector)
// @field NMData::FixedPathJointData +0x1D8 void** field_0x1d8 (end of pointer vector)
// @field NMData::FixedPathJointData +0x204 void** field_0x204 (begin of element pointer vector)
// @field NMData::FixedPathJointData +0x208 void** field_0x208 (end of element pointer vector)
void __thiscall fn_005ECE20(void* self) {
    ext_005ECDC0(self);
    (void)&mem_00925134;

    void** begin = lift_field<void**>(self, 0x1D4);
    void** end = lift_field<void**>(self, 0x1D8);
    uint32_t counter = 0;

    for (void** it = begin; it != end; ++it) {
        void* obj = *it;
        if (ext_00584AE0(obj) != 0) {
            continue;
        }

        // obj+4 is a secondary (interface) sub-object; call its vtable slot 3.
        void** iface = *reinterpret_cast<void***>(reinterpret_cast<uint8_t*>(obj) + 4);
        using GetVecFn = void* (__thiscall*)(void* self_sub, uint32_t arg);
        GetVecFn get_vec = reinterpret_cast<GetVecFn>(iface[3]);
        void* result = get_vec(reinterpret_cast<uint8_t*>(obj) + 4,
                               static_cast<uint32_t>(mem_00B40640));

        const float* vec = reinterpret_cast<const float*>(reinterpret_cast<uint8_t*>(result) + 0x30);
        float tmp[3];
        tmp[0] = vec[0];
        tmp[1] = vec[1];
        tmp[2] = ext_005E0EB0(self, vec);

        void** elems = lift_field<void**>(self, 0x204);
        void* elem = elems[counter];
        if (elem != nullptr) {
            void** vt = *reinterpret_cast<void***>(elem);
            using ElemFn = void(__thiscall*)(void* self_elem, float* out);
            ElemFn fn = reinterpret_cast<ElemFn>(vt[13]);
            fn(elem, tmp);
        }
        ++counter;
    }
}
} // namespace lift_005ECE20

// [0x005EB920] NMData::FixedPathJointData::vfunc_63 (184 bytes)
namespace lift_005EB920 {
extern void ext_005C2BE0(int32_t a1, int32_t a2);
extern int mem_00925134; // MSVC _invalid_parameter_noinfo IAT slot (debug iterator checks; metadata only)

// @name NMData::FixedPathJointData::vfunc_63
// @class NMData::FixedPathJointData
// @summary Returns early if a1 == field_0x194; otherwise optionally calls ext_005C2BE0(a1, a2), dispatches a1/a2 to virtual slot 68 or 69 on self, then calls virtual slot 63 on each child pointer in the vector at +0x1D4..+0x1D8.
// @field NMData::FixedPathJointData +0x00 void* vtable
// @field NMData::FixedPathJointData +0x194 int32_t field_0x194
// @field NMData::FixedPathJointData +0x1D4 void** field_0x1d4
// @field NMData::FixedPathJointData +0x1D8 void** field_0x1d8
// @field NMData::FixedPathJointData +0x22C uint32_t field_0x22c
void fn_005EB920(void* self, int32_t a1, int32_t a2) {
    using VFn = void (*)(void*, int32_t, int32_t);
    (void)&mem_00925134;

    if (a1 == lift_field<int32_t>(self, 0x194)) {
        return;
    }

    if (lift_field<uint32_t>(self, 0x22C) != 0) {
        ext_005C2BE0(a1, a2);
    }

    void** vt = *reinterpret_cast<void***>(self);
    int slot = (lift_field<int32_t>(self, 0x194) >= a1) ? 68 : 69;
    reinterpret_cast<VFn>(vt[slot])(self, a1, a2);

    void** it = lift_field<void**>(self, 0x1D4);
    while (it != lift_field<void**>(self, 0x1D8)) {
        void* child = *it;
        void** cvt = *reinterpret_cast<void***>(child);
        reinterpret_cast<VFn>(cvt[63])(child, a1, a2);
        ++it;
    }
}
} // namespace lift_005EB920

// [0x005ECCF0]
namespace lift_005ECCF0 {
// @name NMData::FixedPathJointData::vfunc_4_off_C
// @class NMData::FixedPathJointData
// @summary Adjusts this by -0xC and forwards dereferenced float argument to sub_005EBC10


extern const uint32_t mem_00924FE4;
extern uint32_t __thiscall ext_005EBC10(void* self, float* value);

uint32_t __thiscall fn_005ECCF0(void* self, const float* value_ptr) {
    (void)mem_00924FE4;
    float value = *value_ptr;
    void* adjusted_self = static_cast<char*>(self) - 0xC;
    return ext_005EBC10(adjusted_self, &value);
}
} // namespace lift_005ECCF0

// [0x005E4C80] NMData::FixedPathJointData::vfunc_3 (261 bytes)
namespace lift_005E4C80 {
extern void* ext_00435D00(void* stream);
extern void* mem_00B41854;
extern void* mem_00924E4C;  // MSVCP80 ostringstream ctor (import thunk)
extern void* mem_00924E54;  // MSVCP80 ostringstream::str
extern void* mem_00924E58;  // MSVCP80 ostringstream dtor
extern void* mem_00924E94;  // MSVCP80 operator<< (ostream&, string const&)
extern void* mem_00924FF4;  // MSVCP80 string dtor

// @name NMData::FixedPathJointData::vfunc_3
// @class NMData::FixedPathJointData
// @summary Builds a diagnostic string via an ostringstream, using the child at +0x18C and a vfunc on this.
// @field NMData::FixedPathJointData +0x000 void* vptr
// @field NMData::FixedPathJointData +0x18C void* field_0x18c
std::string fn_005E4C80(void* self) {
    std::ostringstream ss(std::ios_base::out);
    std::ostream& os = ss;

    // Child object at this->field_0x18c + 4; call its vslot 3 with a temporary string.
    uint8_t* sub = lift_field<uint8_t*>(self, 0x18C) + 4;
    void** sub_vt = *reinterpret_cast<void***>(sub);
    std::string tmp;
    using Slot3Fn = const std::string* (*)(void*, std::string*);
    const std::string* desc = reinterpret_cast<Slot3Fn>(sub_vt[3])(sub, &tmp);

    // Virtual call on this, slot 9 (+0x24), result is used as an int.
    void** vt = *reinterpret_cast<void***>(self);
    using Slot9Fn = int (*)(void*);
    int r = reinterpret_cast<Slot9Fn>(vt[9])(self);
    (void)r;

    os << *desc;

    void* p = static_cast<void*>(&os);
    p = ext_00435D00(p);
    p = ext_00435D00(p);
    p = ext_00435D00(p);
    (void)p;

    (void)mem_00B41854;
    (void)&mem_00924E4C;
    (void)&mem_00924E54;
    (void)&mem_00924E58;
    (void)&mem_00924E94;
    (void)&mem_00924FF4;
    return ss.str();
}
} // namespace lift_005E4C80

// [0x005EDFD0] NMData::FixedPathJointData::vfunc_33 (317 bytes)
namespace lift_005EDFD0 {
// Known callee 0x0048EF80: std_vector_8_erase_range. Erases [first, last) of 8-byte elements, returns updated iterator via ret_iter.
extern uint32_t __thiscall ext_0048EF80(void* self, void* ret_iter, void* first_proxy, uint32_t first_ptr, void* last_proxy, uint32_t last_ptr);
// Known callee 0x00596660: eraseInt32Range. Erases [first, last) from a 4-byte-element vector, writes a 2-pointer result to out.
extern void __thiscall ext_00596660(void* self, void* out, void* a2, uint32_t first, void* a4, uint32_t last);
// AnimatableTransform::vfunc_33: thiscall, tail-called with self in ecx; its return value is returned unchanged.
extern uint32_t __thiscall ext_0058A1A0(void* self);

// MSVCR80!_invalid_parameter_noinfo IAT slot.
extern int mem_00925134;
// MSVCP80 basic_string::clear IAT slot.
extern int mem_00924EA8;

namespace {

inline uint8_t* at(void* base, ptrdiff_t off) {
    return static_cast<uint8_t*>(base) + off;
}

// call dword ptr [0x925134] (falls through, as in the original asm).
inline void invalid_parameter_noinfo() {
    (*reinterpret_cast<void (**)()>(&mem_00925134))();
}

// call dword ptr [0x924ea8] : std::string::clear, thiscall with this in ecx.
inline void string_clear(void* s) {
    (*reinterpret_cast<void(__thiscall**)(void*)>(&mem_00924EA8))(s);
}

} // namespace

// @name NMData::FixedPathJointData::vfunc_33
// @class NMData::FixedPathJointData
// @summary Erases the range [+0x16C,+0x170) from the vector at +0x168 and [+0x204,+0x208) from the vector at +0x200, clears two strings and one more string at +0x1E4, resets several flags/counters and six floats to 0.0, then tail-calls AnimatableTransform::vfunc_33 on self.
// @field NMData::FixedPathJointData +0x168 std_vector_8 field_0x168
// @field NMData::FixedPathJointData +0x16C uint32_t field_0x16c
// @field NMData::FixedPathJointData +0x170 uint32_t field_0x170
// @field NMData::FixedPathJointData +0x179 uint8_t field_0x179
// @field NMData::FixedPathJointData +0x17A uint8_t field_0x17a
// @field NMData::FixedPathJointData +0x198 std_string_msvc field_0x198
// @field NMData::FixedPathJointData +0x1B4 std_string_msvc field_0x1b4
// @field NMData::FixedPathJointData +0x1D0 std_vector_4 field_0x1d0
// @field NMData::FixedPathJointData +0x1D4 uint32_t field_0x1d4
// @field NMData::FixedPathJointData +0x1D8 uint32_t field_0x1d8
// @field NMData::FixedPathJointData +0x1E0 uint32_t field_0x1e0
// @field NMData::FixedPathJointData +0x1E4 std_string_msvc field_0x1e4
// @field NMData::FixedPathJointData +0x200 std_vector_4 field_0x200
// @field NMData::FixedPathJointData +0x204 uint32_t field_0x204
// @field NMData::FixedPathJointData +0x208 uint32_t field_0x208
// @field NMData::FixedPathJointData +0x210 float field_0x210
// @field NMData::FixedPathJointData +0x214 float field_0x214
// @field NMData::FixedPathJointData +0x218 float field_0x218
// @field NMData::FixedPathJointData +0x21C float field_0x21c
// @field NMData::FixedPathJointData +0x220 float field_0x220
// @field NMData::FixedPathJointData +0x224 float field_0x224
// @field NMData::FixedPathJointData +0x228 uint32_t field_0x228
// @field NMData::FixedPathJointData +0x22C uint32_t field_0x22c
// @field NMData::FixedPathJointData +0x230 uint8_t field_0x230
// @field NMData::FixedPathJointData +0x294 uint32_t field_0x294
// @field NMData::FixedPathJointData +0x298 uint32_t field_0x298
uint32_t __thiscall fn_005EDFD0(void* self) {
    // Range erase #1: vector at +0x168, range [+0x16C, +0x170).
    uint32_t end1 = lift_field<uint32_t>(self, 0x170);
    if (lift_field<uint32_t>(self, 0x16C) > end1) {
        invalid_parameter_noinfo();
    }
    uint32_t begin1 = lift_field<uint32_t>(self, 0x16C);
    void* vec1 = at(self, 0x168);
    uint32_t ret1[2] = {0, 0};
    ext_0048EF80(vec1, ret1, vec1, begin1, vec1, end1);

    string_clear(at(self, 0x198));
    string_clear(at(self, 0x1B4));

    // Range erase #2: vector at +0x1D0, range [+0x1D4, +0x1D8).
    uint32_t end2 = lift_field<uint32_t>(self, 0x1D8);
    if (lift_field<uint32_t>(self, 0x1D4) > end2) {
        invalid_parameter_noinfo();
    }
    uint32_t begin2 = lift_field<uint32_t>(self, 0x1D4);
    void* vec2 = at(self, 0x1D0);
    void* ret2[2] = {nullptr, nullptr};
    ext_00596660(vec2, ret2, vec2, begin2, vec2, end2);

    lift_field<uint32_t>(self, 0x228) = 0;
    lift_field<uint32_t>(self, 0x22C) = 0;
    lift_field<uint8_t>(self, 0x230) = 0;
    lift_field<uint8_t>(self, 0x17A) = 0;
    lift_field<uint32_t>(self, 0x1E0) = 0;
    string_clear(at(self, 0x1E4));
    lift_field<uint8_t>(self, 0x179) = 0;

    // Range erase #3: vector at +0x200, range [+0x204, +0x208).
    uint32_t end3 = lift_field<uint32_t>(self, 0x208);
    if (lift_field<uint32_t>(self, 0x204) > end3) {
        invalid_parameter_noinfo();
    }
    uint32_t begin3 = lift_field<uint32_t>(self, 0x204);
    void* vec3 = at(self, 0x200);
    void* ret3[2] = {nullptr, nullptr};
    ext_00596660(vec3, ret3, vec3, begin3, vec3, end3);

    lift_field<uint32_t>(self, 0x298) = 0;
    lift_field<uint32_t>(self, 0x294) = 0;
    lift_field<float>(self, 0x218) = 0.0f;
    lift_field<float>(self, 0x214) = 0.0f;
    lift_field<float>(self, 0x210) = 0.0f;
    lift_field<float>(self, 0x224) = 0.0f;
    lift_field<float>(self, 0x220) = 0.0f;
    lift_field<float>(self, 0x21C) = 0.0f;

    return ext_0058A1A0(self);
}
} // namespace lift_005EDFD0

// [0x005EBF70] NMData::FixedPathJointData::vfunc_22 (36 bytes)
namespace lift_005EBF70 {
// Known callee 0x006404E0 (sub_006404E0, 224B): thiscall with self = arg1 and one stack argument; returns a pointer.
extern void* __thiscall ext_006404E0(void* self, void* value);
// Known callee 0x005EB5A0: NMData::RelationshipData::vfunc_22 (752B). Thiscall with one stack argument (callee-cleaned).
extern void __thiscall ext_005EB5A0(void* self, void* arg);
// Known callee 0x0048EF80: std_vector_8_erase_range. Listed as a callee but has no direct call in the bytes; metadata-only reference.
extern void* __thiscall ext_0048EF80(void* self, void* ret_iter, void* first_proxy, uint32_t first_ptr,
                                         void* last_proxy, uint32_t last_ptr);
// Known callee 0x005EEB90 (sub_005EEB90, 38B). Listed as a callee but has no direct call in the bytes; metadata-only reference.
extern void __thiscall ext_005EEB90(void* self, int32_t index);
// Global dword at 0x00A9EF14 (holds 0x00986F54). Its value is passed through as a stack argument, not dereferenced.
extern void* mem_00A9EF14;
// IAT slot 0x00925134: MSVCR80!_invalid_parameter_noinfo. Metadata-only reference; not a real access.
extern int mem_00925134;

// @name NMData::FixedPathJointData::vfunc_22
// @class NMData::FixedPathJointData
// @summary Passes the global value at mem_00A9EF14 and arg1 through ext_006404E0, forwards that result to NMData::RelationshipData::vfunc_22 on this, and returns arg1.
void* __thiscall fn_005EBF70(void* self, void* arg1) {
    // Metadata-only references to listed callees (no direct call in the original bytes).
    (void)&ext_0048EF80;
    (void)&ext_005EEB90;
    (void)&mem_00925134;

    void* g = mem_00A9EF14;
    void* r = ext_006404E0(arg1, g);
    ext_005EB5A0(self, r);
    return arg1;
}
} // namespace lift_005EBF70

// [0x005E4710]
namespace lift_005E4710 {
extern void __thiscall ext_005E12D0(void* self);
extern uint8_t __thiscall ext_005E1310(void* self);
extern void __thiscall ext_00662400(void* self, void* arg);

// @name FixedPathJointData::vfunc_69
// @class NMData::FixedPathJointData
// @summary Advances FixedPathJointData initialization state machine and binds target transform/frame-buffer listener on state 4.
// @field NMData::FixedPathJointData +0x4 void* TransformInterface_vptr
// @field NMData::FixedPathJointData +0x154 void* FrameBufferTickEventListener_base
// @field NMData::FixedPathJointData +0x18C void* field_0x18c
// @field NMData::FixedPathJointData +0x190 void* field_0x190
// @field NMData::FixedPathJointData +0x194 uint32_t field_0x194
// @field NMData::FixedPathJointData +0x234 void* field_0x234
void __thiscall fn_005E4710(void* self, uint32_t target_state, void* arg2) {
    uint32_t state = lift_field<uint32_t>(self, 0x194);
    if (state > 5) {
        return;
    }

    switch (state) {
    case 0:
        lift_field<uint32_t>(self, 0x194) = 1;
        if (target_state == 1) {
            return;
        }
        [[fallthrough]];
    case 1:
        lift_field<uint32_t>(self, 0x194) = 2;
        if (target_state == 2) {
            return;
        }
        [[fallthrough]];
    case 2:
        lift_field<uint32_t>(self, 0x194) = 3;
        if (target_state == 3) {
            return;
        }
        [[fallthrough]];
    case 3:
        lift_field<uint32_t>(self, 0x194) = 4;
        if (target_state == 4) {
            return;
        }
        [[fallthrough]];
    case 4: {
        ext_005E12D0(self);
        void* iface = static_cast<uint8_t*>(self) + 0x4;
        void* vtbl = lift_field<void*>(self, 0x4);
        using Vfunc7 = uint8_t(__thiscall*)(void*);
        auto fn7 = *reinterpret_cast<Vfunc7*>(static_cast<uint8_t*>(vtbl) + 0x1C);
        bool skip_register = false;
        if (fn7(iface) != 0) {
            void* obj190 = lift_field<void*>(self, 0x190);
            if (obj190 != nullptr) {
                uint8_t res = ext_005E1310(obj190);
                obj190 = lift_field<void*>(self, 0x190);
                void* sub234 = lift_field<void*>(self, 0x234);
                if (res != 0) {
                    void* inner234 = lift_field<void*>(obj190, 0x234);
                    lift_field<void*>(sub234, 0x5C) =
                        inner234 ? (static_cast<uint8_t*>(inner234) + 0x4) : nullptr;
                    skip_register = true;
                } else {
                    lift_field<void*>(sub234, 0x5C) =
                        obj190 ? (static_cast<uint8_t*>(obj190) + 0x150) : nullptr;
                }
            } else {
                void* obj18c = lift_field<void*>(self, 0x18C);
                if (obj18c != nullptr) {
                    void* sub234 = lift_field<void*>(self, 0x234);
                    lift_field<void*>(sub234, 0x5C) = static_cast<uint8_t*>(obj18c) + 0x154;
                }
            }
        }
        if (!skip_register) {
            ext_00662400(arg2, static_cast<uint8_t*>(self) + 0x154);
        }
        [[fallthrough]];
    }
    case 5:
        lift_field<uint32_t>(self, 0x194) = 5;
        if (target_state == 5) {
            return;
        }
        lift_field<uint32_t>(self, 0x194) = 6;
        return;
    }
}
} // namespace lift_005E4710

// [0x005ECF40] NMData::FixedPathJointData::vfunc_14_off_C (233 bytes)
namespace lift_005ECF40 {
// Known callee 0x005851B0: AnimatableTransform::vfunc_14_off_C (Checks if field_0x5c is nonzero and if arg2 contains the bit flag for vfunc_0x2C().)
extern uint8_t ext_005851B0(void* self, uint32_t arg1, uint32_t arg2);
extern void ext_005E4990();
extern void ext_005EBCF0();
extern char mem_0093A444[];
extern int mem_00925134;

// Virtual dispatch helper: calls vtable slot `slot` of `obj` (thiscall semantics on MSVC).
template <typename R, typename... Args>
static inline R vcall(void* obj, size_t slot, Args... args) {
    using Fn = R (*)(void*, Args...);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, args...);
}

// @name NMData::FixedPathJointData::vfunc_14_off_C
// @class NMData::FixedPathJointData
// @summary Returns ext_005851B0 result unless the first child's vfunc_21 matches the 0x800 flag; otherwise sets each child's flag byte and calls its vfunc_11.
// @field NMData::FixedPathJointData +0x1F8 void** field_0x1f8 (begin of child pointer vector)
// @field NMData::FixedPathJointData +0x1FC void** field_0x1fc (end of child pointer vector)
uint8_t fn_005ECF40(void* self, uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    // Metadata-only address references: CALLEES/RDATA list these, but the bytes never call or read them.
    (void)&ext_005E4990;
    (void)&ext_005EBCF0;
    (void)&mem_00925134;

    // Base-class call: result is the function's return value.
    const uint8_t result = ext_005851B0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_0093A444)), arg2);

    void** first = lift_field<void**>(self, 0x1F8);
    void** last  = lift_field<void**>(self, 0x1FC);
    if (first == last) {
        return result;
    }

    const uint8_t wantFlag = (arg2 & 0x800) == 0x800 ? 1 : 0;

    // Early out when the first child already matches the requested flag state.
    void* head = *first;
    if (vcall<uint8_t>(head, 21, static_cast<uint32_t>(0x80000)) == wantFlag) {
        return result;
    }

    for (void** it = first; it != last; ++it) {
        void* child = *it;
        vcall<void>(child, 11, static_cast<uint32_t>(0x80000), static_cast<uint32_t>(wantFlag));
        lift_field<uint8_t>(child, 0x4) = 1;
    }

    return result;
}
} // namespace lift_005ECF40

// [0x005E0430] NMData::FixedPathJointData::vfunc_2_off_C (309 bytes)
namespace lift_005E0430 {
extern void ext_0067DDB0(void* self);
extern void ext_00586D00(void* self);
extern uint32_t mem_00B40640;

// Fetch virtual slot `index` of obj's vtable as a callable function pointer.
template <typename Fn>
inline Fn lift_vslot(void* obj, size_t index) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtable[index]);
}

// @name NMData::FixedPathJointData::vfunc_2_off_C
// @class NMData::FixedPathJointData
// @summary Calls the sub-object at this-8 (slot 3 / 4 / 0 / 7 / 11) to measure a vector delta against mem_00B40640-derived data, then adds the difference into the object returned by slot 11; finally forwards to the object at +0x184 (slot 35) if set.
// @field NMData::FixedPathJointData +0x184 void* field_0x184 (non-null object; its vtable slot 35 is called)
void fn_005E0430(void* self, const float* delta) {
    uint8_t* const base = reinterpret_cast<uint8_t*>(self);
    void* const sub = base - 8;

    // First vector: P1 = sub->vt[3](g); a = { P1+0x30, P1+0x34, P1+0x38 }.
    const uint32_t g = mem_00B40640;
    void* p1 = lift_vslot<void* (*)(void*, uint32_t)>(sub, 3)(sub, g);
    const float a[3] = {
        lift_field<float>(p1, 0x30),
        lift_field<float>(p1, 0x34),
        lift_field<float>(p1, 0x38),
    };

    // Output vector b = sub->vt[4](&b, 0).
    float b[3];
    lift_vslot<void (*)(void*, void*, uint32_t)>(sub, 4)(sub, b, 0);

    // The original accumulates *delta into a stack temporary that is never
    // read again afterwards; the result is dead, so the delta read is dropped.
    (void)delta;

    ext_0067DDB0(b);

    lift_vslot<void (*)(void*, uint32_t, void*, uint32_t)>(sub, 0)(sub, 0, b, mem_00B40640);

    ext_00586D00(base - 0xC);

    if (lift_vslot<uint8_t (*)(void*)>(sub, 7)(sub) != 0) {
        // Second vector: P2 = sub->vt[3](g); q = { P2+0x30, P2+0x34, P2+0x38 }.
        const uint32_t g3 = mem_00B40640;
        void* p2 = lift_vslot<void* (*)(void*, uint32_t)>(sub, 3)(sub, g3);
        const float q[3] = {
            lift_field<float>(p2, 0x30),
            lift_field<float>(p2, 0x34),
            lift_field<float>(p2, 0x38),
        };

        const float d[3] = {q[0] - a[0], q[1] - a[1], q[2] - a[2]};

        // Add d into the object returned by sub->vt[11]().
        void* r = lift_vslot<void* (*)(void*)>(sub, 11)(sub);
        lift_field<float>(r, 0x30) += d[0];
        lift_field<float>(r, 0x34) += d[1];
        lift_field<float>(r, 0x38) += d[2];
    }

    void* obj = lift_field<void*>(self, 0x184);
    if (obj != nullptr) {
        lift_vslot<void (*)(void*)>(obj, 35)(obj);
    }
}
} // namespace lift_005E0430

// [0x00493E50] stack args: (root, this->field_0xe8, this+0x0C, 0); self = param.
namespace lift_005EE760 {
// Callees (MSVC __thiscall / stack-argument conventions preserved by the differential harness).

extern void* ext_00493E50(void* self, ...);
// [0x00493E40] stack args: (root or arr, X-or-B, this+0x0C or 0, ...); self = param.
extern void* ext_00493E40(void* self, ...);
// [0x00528B90] Unknown::setPeerWithBackLink(self = this+0x0C, peer)
extern void ext_00528B90(void* self, void* peer);
// [0x00584AE0] descriptiveName_00584AE0(self) -> int (non-zero when global flag set and obj+0x8C clear)
extern int ext_00584AE0(void* self);
// [0x00596660] eraseInt32Range(self, out, a2, first, a4, last)
extern void ext_00596660(void* self, void** out, void* a2, uint32_t first, void* a4, uint32_t last);
// [0x005B11D0] UnknownClass::getElementPtr(self, index) -> uint32_t* into inline array at +0x10
extern uint32_t* ext_005B11D0(void* self, uint32_t index);
// [0x005E0380] sub_005E0380(self, arr) (176B, non-virtual)
extern void ext_005E0380(void* self, void* arr);
// [0x005E0EB0] computeClampedScaledLength(self, const float* vec) -> float
extern float ext_005E0EB0(void* self, const float* vec);
// [0x00480920] sub_00480920(a, b) -> void* (138B)
extern void* ext_00480920(void* a, uint32_t b);
// [0x00493E70] forwardVtable198_viaFirstField(self, a) -> void*
extern void* ext_00493E70(void* self, void* a);
// [0x0041A920] container insert: self = this+0x200, arg = pointer to {first, second} pair
extern void ext_0041A920(void* self, void* pair);
// Global object pointer read from .data at 0x00B40640.
extern void* mem_00B40640;
// IAT slot for MSVCR80!_invalid_parameter_noinfo, reached only from the iterator-debug
// bounds asserts (which are no-ops on the success path). Referenced for metadata only.
extern void* mem_00925134;

using ThisFnRet = void* (__thiscall*)(void*);
using ThisFnRet1 = void* (__thiscall*)(void*, void*);
using ThisFnBool = uint8_t (__thiscall*)(void*);
using ThisFnVoid1 = void (__thiscall*)(void*, void*);

// Reads the vtable pointer stored at obj[0] and returns the slot at byteOffset.
static inline void* vslot(void* obj, size_t byteOffset) {
    uint8_t* vt = *reinterpret_cast<uint8_t**>(obj);
    return *reinterpret_cast<void**>(vt + byteOffset);
}

// [0x005EE760] NMData::FixedPathJointData::vfunc_34 (564 bytes)
// @name NMData::FixedPathJointData::vfunc_34
// @class NMData::FixedPathJointData
// @summary Resolves a per-frame value through virtual calls, then rebuilds the 0x23C float-triplet array and interface pointers for each entry in the 0x1D0 container, finally erasing the 0x200 range.
// @field NMData::FixedPathJointData +0x00 void* vtable
// @field NMData::FixedPathJointData +0x04 void* field_0x04 (TransformInterface vptr; virtual calls via this+0x04)
// @field NMData::FixedPathJointData +0x0C uint8_t field_0x0c (RenderObjectOwner/Updateable sub-object; address passed)
// @field NMData::FixedPathJointData +0xE8 void* field_0xe8
// @field NMData::FixedPathJointData +0x1D4 void** field_0x1d4 (begin of object-pointer container)
// @field NMData::FixedPathJointData +0x1D8 void** field_0x1d8 (end of object-pointer container)
// @field NMData::FixedPathJointData +0x200 uint8_t field_0x200 (container base; address passed to erase/insert)
// @field NMData::FixedPathJointData +0x204 uint32_t field_0x204 (erase range begin)
// @field NMData::FixedPathJointData +0x208 uint32_t field_0x208 (erase range end)
// @field NMData::FixedPathJointData +0x23C uint8_t field_0x23c (float-array container; address passed to getElementPtr)
void* fn_005EE760(void* self, void* param) {
    (void)&mem_00925134;  // debug-assert IAT slot; see declaration above
    uint8_t* selfb = static_cast<uint8_t*>(self);
    void* ifaceThis = selfb + 0x04;   // TransformInterface sub-object (its first word is a vptr)

    // Root value: self->vtable[0xD8/4](self)
    void* root = reinterpret_cast<ThisFnRet>(vslot(self, 0xD8))(self);

    void* res = nullptr;

    // Choose source value by interface predicate at slot 0x1C.
    uint8_t flag = reinterpret_cast<ThisFnBool>(vslot(ifaceThis, 0x1C))(ifaceThis);
    void* a;
    if (flag) {
        a = ext_00493E50(param, root, lift_field<void*>(self, 0xE8), selfb + 0x0C, 0);
    } else {
        void* x = reinterpret_cast<ThisFnRet1>(vslot(ifaceThis, 0x0C))(ifaceThis, mem_00B40640);
        a = ext_00493E40(param, root, x, selfb + 0x0C, 0);
    }
    res = a;
    ext_00528B90(selfb + 0x0C, a);

    // Erase the full [begin, end) range of the 0x200 container.
    uint32_t first = lift_field<uint32_t>(self, 0x204);
    uint32_t last = lift_field<uint32_t>(self, 0x208);
    void* erased[2] = {nullptr, nullptr};
    ext_00596660(selfb + 0x200, erased, selfb + 0x200, first, selfb + 0x200, last);

    // Iterate the object-pointer container at 0x1D0 (begin 0x1D4, end 0x1D8).
    void** it = lift_field<void**>(self, 0x1D4);
    while (it != lift_field<void**>(self, 0x1D8)) {
        void* obj = *it;
        if (ext_00584AE0(obj) == 0) {
            uint8_t* objb = static_cast<uint8_t*>(obj);
            void* objIface = objb + 0x04;
            void* x = reinterpret_cast<ThisFnRet1>(vslot(objIface, 0x0C))(objIface, mem_00B40640);
            float* vec = reinterpret_cast<float*>(static_cast<uint8_t*>(x) + 0x30);
            float vx = vec[0];
            float vy = vec[1];
            float vz = vec[2];

            void* arr = selfb + 0x23C;
            *reinterpret_cast<float*>(ext_005B11D0(arr, 0)) = vx;
            *reinterpret_cast<float*>(ext_005B11D0(arr, 1)) = vy;
            *reinterpret_cast<float*>(ext_005B11D0(arr, 2)) = vz;
            float* p3 = reinterpret_cast<float*>(ext_005B11D0(arr, 3));
            float r = ext_005E0EB0(self, vec);
            *p3 = r;
            ext_005E0380(self, arr);

            void* b = ext_00480920(selfb + 0x0C, 0);
            void* g = ext_00493E40(param, arr, b);

            void* old = res;
            res = nullptr;
            void* h = ext_00493E70(param, old);
            void* pair[2] = {h, g};
            ext_0041A920(selfb + 0x200, &pair[1]);
            reinterpret_cast<ThisFnVoid1>(vslot(h, 0x0C))(h, g);
        }
        ++it;
    }
    return res;
}
} // namespace lift_005EE760

// [0x005E4900] NMData::FixedPathJointData::vfunc_0_off_150 (111 bytes)
namespace lift_005E4900 {
// Lifted C++20 translation unit: lifted/wip/fn_005E4900.cpp


// Known callee 0x0058AF80: sub_0058AF80 (110B, thiscall with one stack argument).
extern void ext_0058AF80(void* self, std::uint32_t arg);
// Known callee 0x0067E820: sub_0067E820 (96B, thiscall with one stack argument; this = first arg).
extern void ext_0067E820(void* self, std::uint32_t value);
// Known callee 0x005E1090: sub_005E1090 (570B, thiscall with one stack argument).
extern void ext_005E1090(void* self, std::uint32_t arg);

// @name NMData::FixedPathJointData::vfunc_0_off_150
// @class NMData::FixedPathJointData
// @summary Dispatches on the mode at +0x44: modes 0/2/4 forward to the primary base (this-0x150) and then to the object at +0x148 when set; modes 5/6 forward to the primary base if +0x144 is set, otherwise tail-call slot 0 of the sub-object at (+0xE4)+4; other modes return.
// @field NMData::FixedPathJointData +0x44 int32_t field_0x44 (dispatch mode; 0..6 handled)
// @field NMData::FixedPathJointData +0x144 int32_t field_0x144 (non-zero selects the primary-base forward in modes 5/6)
// @field NMData::FixedPathJointData +0x148 std::uint32_t field_0x148 (object value forwarded in modes 0/2/4 when non-zero)
// @field NMData::FixedPathJointData +0xE4 void* field_0xe4 (object pointer; its sub-object at +4 receives the tail call)

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4).
void __fastcall fn_005E4900(void* self, std::uint32_t arg) {
    auto* obj = static_cast<std::uint8_t*>(self);
    const std::int32_t mode = lift_field<std::int32_t>(obj, 0x44);

    switch (mode) {
    case 0:
    case 2:
    case 4: {
        // Primary base subobject sits at this - 0x150.
        std::uint8_t* primary = obj - 0x150;
        ext_0058AF80(primary, arg);

        const std::uint32_t next = lift_field<std::uint32_t>(obj, 0x148);
        if (next != 0) {
            ext_0067E820(reinterpret_cast<void*>(static_cast<std::uintptr_t>(arg)), next);
        }
        return;
    }
    case 5:
    case 6: {
        std::uint8_t* primary = obj - 0x150;
        if (lift_field<std::int32_t>(obj, 0x144) != 0) {
            ext_005E1090(primary, arg);
            return;
        }

        // Tail call: vtable slot 0 of the sub-object at (+0xE4)+4, with ECX = that sub-object.
        // The stack argument is passed through unchanged.
        using SlotFn = void (*)(void* self, std::uint32_t arg);
        void* target = lift_field<void*>(obj, 0xE4);
        std::uint8_t* sub = static_cast<std::uint8_t*>(target) + 4;
        void** vptr = *reinterpret_cast<void***>(sub);
        auto fn = reinterpret_cast<SlotFn>(vptr[0]);
        fn(sub, arg);
        return;
    }
    default:
        return;
    }
}
} // namespace lift_005E4900

// [0x005EE290]
namespace lift_005EE290 {
// @name NMData::FixedPathJointData::vfunc_39
// @class NMData::FixedPathJointData
// @summary Prepares fixed path joint data, applies an update with one argument, and finalizes via sub_005EDA00.


void __thiscall ext_005ED960(void* self);
void __thiscall ext_005EBDD0(void* self, uint32_t arg);
uint32_t __thiscall ext_005EDA00(void* self);
void ext_005EB5A0();
void ext_006404E0();
extern uint32_t mem_00A9EF14;

uint32_t __thiscall fn_005EE290(void* self, uint32_t arg) {
    (void)ext_005EB5A0;
    (void)ext_006404E0;
    (void)mem_00A9EF14;
    ext_005ED960(self);
    ext_005EBDD0(self, arg);
    return ext_005EDA00(self);
}
} // namespace lift_005EE290

// [0x005ECD10]
namespace lift_005ECD10 {
extern void __thiscall ext_005EBCF0(void* self, const float* val);
extern void __thiscall ext_005E4990(void* self, const float* val);
extern void ext_00586D00();
extern void ext_0067DDB0();
extern uint8_t mem_00B40640[];

// @name NMData::FixedPathJointData::vfunc_37
// @class NMData::FixedPathJointData
// @summary Forwards a float value by pointer to ext_005EBCF0 and ext_005E4990.
void __thiscall fn_005ECD10(void* self, const float* arg)
{
    (void)ext_00586D00;
    (void)ext_0067DDB0;
    (void)mem_00B40640;
    float val = *arg;
    ext_005EBCF0(self, &val);
    val = *arg;
    ext_005E4990(self, &val);
}
} // namespace lift_005ECD10

// [0x005E24F0]
namespace lift_005E24F0 {
extern uint32_t mem_00B599BC;
void* __thiscall ext_0058A370(void* self, void* arg0, void* arg1);
void* __cdecl ext_006798D0(void* out, void* arg1, void* arg2, void* self);
void* __thiscall ext_00679030(void* self);
void* __thiscall ext_0041CF50(void* self, void* other);
void* __thiscall ext_005EBDD0(void* self);
void* __thiscall ext_005ED960(void* self);
void* __thiscall ext_005EDA00(void* self);

// @name NMData::FixedPathJointData::vfunc_2
// @class NMData::FixedPathJointData
// @summary Forwards to AnimatableTransform::vfunc_2 and conditionally updates arg0 from field_0x234.
// @field NMData::FixedPathJointData +0x234 void* field_0x234
void* __thiscall fn_005E24F0(void* self, void* arg0, void* arg1) {
    ext_0058A370(self, arg0, arg1);

    uint32_t tag = lift_field<uint32_t>(arg0, 0x4);
    if (tag == 0 || tag == mem_00B599BC) {
        void* obj = lift_field<void*>(self, 0x234);
        void* sub = obj ? static_cast<char*>(obj) + 0x8 : nullptr;

        struct LocalPair {
            uint32_t f0;
            void* f4;
        } local_obj{};

        void* res = ext_006798D0(&local_obj, sub, arg1, self);
        void* val = ext_00679030(res);
        ext_0041CF50(arg0, val);

        if (local_obj.f4 != nullptr) {
            using ReleaseFn = void(__thiscall*)(void*, void*);
            void** vtable = *reinterpret_cast<void***>(local_obj.f4);
            reinterpret_cast<ReleaseFn>(vtable[0x78 / sizeof(void*)])(local_obj.f4, &local_obj.f0);
        }
    }

    (void)&ext_005EBDD0;
    (void)&ext_005ED960;
    (void)&ext_005EDA00;
    return arg0;
}
} // namespace lift_005E24F0

// [0x005EE110]
namespace lift_005EE110 {
// @name NMData::FixedPathJointData::vfunc_12_off_C
// @class NMData::FixedPathJointData
// @summary Unlinks/cleans up FixedPathJointData from its parent/children and removes its name from registries.
// @field NMData::FixedPathJointData +0x14 uint8_t field_0x14 (at this+0x8, passed as string/name)
// @field NMData::FixedPathJointData +0x7C uint8_t field_0x7c (at this+0x70, dword range)
// @field NMData::FixedPathJointData +0x18C void* field_0x18c (at this+0x180)
// @field NMData::FixedPathJointData +0x190 void* field_0x190 (at this+0x184)

struct MsvcString28 {
    uint8_t bytes[28];
};

extern void (__thiscall* const mem_00925134)();
extern void (__thiscall* const mem_00924FE0)(void* dst, const void* src);

extern void __thiscall ext_00481BD0(void* self, uint32_t value);
extern uint8_t __thiscall ext_00480280(void* self);
extern void __thiscall ext_005ECBA0(void* self, void* obj);
extern void __thiscall ext_005A3FE0(void* self, void* str);
extern uint32_t __thiscall ext_005DF5C0(void* self, MsvcString28 str);
extern void __thiscall ext_005BFDE0(void* self, MsvcString28 str);

uint8_t __thiscall fn_005EE110(void* self, uint32_t arg0, void* arg1) {
    auto* base = static_cast<uint8_t*>(self);

    void* obj180 = lift_field<void*>(base, 0x180);
    if (obj180 != nullptr) {
        auto vtbl = lift_field<void**>(obj180, 0);
        auto fn3c = reinterpret_cast<uint8_t (__thiscall*)(void*)>(vtbl[0x3C / 4]);
        if (fn3c(obj180) == 0) {
            return 0;
        }
    }

    void* fixed_path_joint = base - 0xC;
    ext_00481BD0(arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(fixed_path_joint)));

    uint8_t* range = base + 0x70;
    while (ext_00480280(range) == 0) {
        uint32_t begin = lift_field<uint32_t>(range, 0x4);
        if (begin == 0) {
            mem_00925134();
        } else {
            uint32_t end = lift_field<uint32_t>(range, 0x8);
            if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
                mem_00925134();
            }
        }

        uint32_t first_elem = *reinterpret_cast<uint32_t*>(lift_field<uintptr_t>(range, 0x4));
        void* child_sub = reinterpret_cast<void*>(first_elem + 0xC);
        auto child_vtbl = lift_field<void**>(child_sub, 0);
        auto fn30 = reinterpret_cast<void (__thiscall*)(void*, uint32_t, void*)>(child_vtbl[0x30 / 4]);
        fn30(child_sub, arg0, arg1);
    }

    void* obj184 = lift_field<void*>(base, 0x184);
    if (obj184 != nullptr) {
        ext_005ECBA0(obj184, fixed_path_joint);
    }

    void* name_str = base + 0x8;
    ext_005A3FE0(lift_field<void*>(base, 0x180), name_str);

    MsvcString28 tmp1;
    mem_00924FE0(&tmp1, name_str);
    uint8_t* reg1 = static_cast<uint8_t*>(lift_field<void*>(base, 0x180)) + 0x58C;
    if (ext_005DF5C0(reg1, tmp1) != 0) {
        MsvcString28 tmp2;
        mem_00924FE0(&tmp2, name_str);
        ext_005BFDE0(static_cast<uint8_t*>(lift_field<void*>(base, 0x180)) + 0x58C, tmp2);
        return 1;
    }

    MsvcString28 tmp3;
    mem_00924FE0(&tmp3, name_str);
    uint8_t* reg2 = static_cast<uint8_t*>(lift_field<void*>(base, 0x180)) + 0x5A4;
    if (ext_005DF5C0(reg2, tmp3) != 0) {
        MsvcString28 tmp4;
        mem_00924FE0(&tmp4, name_str);
        ext_005BFDE0(static_cast<uint8_t*>(lift_field<void*>(base, 0x180)) + 0x5A4, tmp4);
    }

    return 1;
}
} // namespace lift_005EE110
