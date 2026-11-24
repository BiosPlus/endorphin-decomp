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

// [0x005EB890]
#include "lift_compat.h"

// @name NMData::FixedPathJointData::vfunc_10_off_C
// @class NMData::FixedPathJointData
// @summary For each entry in the child pointer list [field_0x74, field_0x78): unless flag is set and the child's vfunc +0xC4 returns true, call the child's +0xC subobject vfuncs +0x24(arg) and +0x28(arg, 1).
// @field NMData::FixedPathJointData +0x74 void** field_0x74 (begin of child pointer array)
// @field NMData::FixedPathJointData +0x78 void** field_0x78 (end of child pointer array)
void fn_005EB890(void* self, void* arg, bool flag) {
    for (void** it = lift_field<void**>(self, 0x74);
         it != lift_field<void**>(self, 0x78); ++it) {
        void* child = *it;
        if (!flag) {
            void** cvt = *static_cast<void***>(child);
            auto pred = reinterpret_cast<bool (*)(void*)>(cvt[0xC4 / sizeof(void*)]);
            if (pred(child)) {
                continue;
            }
        }
        void* sub = static_cast<uint8_t*>(child) + 0xC;
        void** svt = *static_cast<void***>(sub);
        reinterpret_cast<void (*)(void*, void*)>(svt[0x24 / sizeof(void*)])(sub, arg);
        reinterpret_cast<void (*)(void*, void*, int)>(svt[0x28 / sizeof(void*)])(sub, arg, 1);
    }
}

// [0x005ECCF0] NMData::FixedPathJointData::vfunc_4_off_C (26 bytes)
// @name NMData::FixedPathJointData::vfunc_4_off_C
// @class NMData::FixedPathJointData
// @summary Forwards a float (read from the argument pointer) to ext_005EBC10 on the base subobject at this-0xC.
// @field NMData::FixedPathJointData +0x00 none (no direct field access; only the this-0xC base adjustment)
void fn_005ECCF0(void* self, const float* value) {
    float v = *value;
    void* base = static_cast<unsigned char*>(self) - 0xC;
    ext_005EBC10(base, &v);
}

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

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
namespace lift_005E09B0 {
// @name NMData::FixedPathJointData::vfunc_44
// @class NMData::FixedPathJointData
// @summary Auto-lifted identical-shape clone of 0x004AEC60 (thunk_004AEC60).
// @field NMData::FixedPathJointData +0x18C void* field_0x18C
// @field NMData::FixedPathJointData +0x4 void* field_0x4
// @field NMData::FixedPathJointData +0xB0 void* field_0xB0
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_005E09B0(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0x18C);
    void* vt = lift_field<void*>(sub, 0x4);
    ThisFn target = lift_field<ThisFn>(vt, 0xB0);

    target(static_cast<uint8_t*>(sub) + 0x4);
}
} // namespace lift_004AEC60
} // namespace lift_005E09B0

// [0x005ECB10] NMData::FixedPathJointData::vfunc_9_off_C (136 bytes)
namespace lift_005ECB10 {
// Known callee 0x00528C30: AnimatableTransform::vfunc_9_off_C (If the sub-object at +0x4 is non-null, forwards the call to its vtable slot 8; otherwise returns 0.)
extern uint32_t ext_00528C30(void* self, uint32_t arg0);

// @name NMData::FixedPathJointData::vfunc_9_off_C
// @class NMData::FixedPathJointData
// @summary Maps mode 1->3 and 2->4, forwards it to the AnimatableTransform base, then calls vtable slot 8 on each child pointer in the child vector.
// @field NMData::FixedPathJointData +0x1F8 void** childBegin
// @field NMData::FixedPathJointData +0x1FC void** childEnd
void fn_005ECB10(void* self, uint32_t arg0) {
    uint32_t mode = arg0;
    if (mode == 1) {
        mode = 3;
    } else if (mode == 2) {
        mode = 4;
    }

    ext_00528C30(self, mode);

    using Slot8Fn = void (*)(void* self, uint32_t arg);
    void** it = lift_field<void**>(self, 0x1F8);
    while (it != lift_field<void**>(self, 0x1FC)) {
        void* child = *it;
        void** vtbl = *reinterpret_cast<void***>(child);
        reinterpret_cast<Slot8Fn>(vtbl[8])(child, mode);
        ++it;
    }
}
} // namespace lift_005ECB10
