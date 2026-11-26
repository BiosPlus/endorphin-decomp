// Lifted C++ translation unit: lifted/classes/PoseTool.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00545120] PoseTool::vfunc_23 (29 bytes)
namespace lift_00545120 {
// @name PoseTool::vfunc_23
// @class PoseTool
// @summary Forwards to the sub-object at +0x88 via its vtable slot 34, then tail-calls this's vtable slot 26.
// @field PoseTool +0x88 void* field_0x88
void fn_00545120(void* self) {
    void* sub = lift_field<void*>(self, 0x88);

    // Slot at vtable offset 0x88 (index 34) on the sub-object, called with sub as `this`.
    void** subVtable = *reinterpret_cast<void***>(sub);
    auto subFn = reinterpret_cast<void (*)(void*)>(subVtable[0x88 / sizeof(void*)]);
    subFn(sub);

    // Slot at vtable offset 0x68 (index 26) on self, tail-called with self as `this`.
    void** selfVtable = *reinterpret_cast<void***>(self);
    auto tailFn = reinterpret_cast<void (*)(void*)>(selfVtable[0x68 / sizeof(void*)]);
    tailFn(self);
}
} // namespace lift_00545120

// [0x00545140] PoseTool::vfunc_24 (38 bytes)
namespace lift_00545140 {
// @name PoseTool::vfunc_24
// @class PoseTool
// @summary Auto-lifted identical-shape clone of 0x00544070 (ForceApplicationTool::vfunc_24).
// @field PoseTool +0x88 void* field_0x88
namespace lift_00544070 {
// @name ForceApplicationTool::vfunc_24
// @class ForceApplicationTool
// @summary Calls virtual method at +0x74 on this and tail-calls virtual method at +0x3c on field_0x88 if non-null
// @field ForceApplicationTool +0x88 void* field_0x88


void __thiscall fn_00545140(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x74 / 4])(self);

    void* field_0x88 = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x88);
    if (field_0x88 != nullptr) {
        uint32_t* obj_vtable = *reinterpret_cast<uint32_t**>(field_0x88);
        reinterpret_cast<void(__thiscall*)(void*)>(obj_vtable[0x8C / 4])(field_0x88);
    }
}
} // namespace lift_00544070
} // namespace lift_00545140

// [0x00545170] PoseTool::vfunc_25 (38 bytes)
namespace lift_00545170 {
// @name PoseTool::vfunc_25
// @class PoseTool
// @summary Auto-lifted identical-shape clone of 0x00544070 (ForceApplicationTool::vfunc_24).
// @field PoseTool +0x88 void* field_0x88
namespace lift_00544070 {
// @name ForceApplicationTool::vfunc_24
// @class ForceApplicationTool
// @summary Calls virtual method at +0x74 on this and tail-calls virtual method at +0x3c on field_0x88 if non-null
// @field ForceApplicationTool +0x88 void* field_0x88


void __thiscall fn_00545170(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x74 / 4])(self);

    void* field_0x88 = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x88);
    if (field_0x88 != nullptr) {
        uint32_t* obj_vtable = *reinterpret_cast<uint32_t**>(field_0x88);
        reinterpret_cast<void(__thiscall*)(void*)>(obj_vtable[0x90 / 4])(field_0x88);
    }
}
} // namespace lift_00544070
} // namespace lift_00545170

// [0x005453D0] PoseTool::vfunc_18_off_98 (45 bytes)
namespace lift_005453D0 {
// Dispatcher: reads a mode word at +0x2b8 of this, then forwards the call (with
// the same two stack arguments) to a virtual method on the object at this-0x10.
// Mode 1 -> vtable slot 0x9c; mode 2 -> vtable slot 0xa0; otherwise no-op.
// @name PoseTool::vfunc_18_off_98
// @class PoseTool
// @summary Mode-switched forwarder: mode 1 tail-calls vslot 0x9c, mode 2 tail-calls vslot 0xa0 on the object at this-0x10; passes the two stack args through unchanged.
// @field PoseTool +0x2b8 uint32_t field_0x2b8
void __thiscall fn_005453D0(void* self, uintptr_t arg0, uintptr_t arg1) {
    const uint32_t mode = lift_field<uint32_t>(self, 0x2b8);

    if (mode == 1) {
        void* target = lift_field<void*>(self, -0x10);
        void** vtable = *reinterpret_cast<void***>(target);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uintptr_t, uintptr_t)>(
            vtable[0x9c / sizeof(void*)]);
        fn(target, arg0, arg1);
        return;
    }

    if (mode == 2) {
        void* target = lift_field<void*>(self, -0x10);
        void** vtable = *reinterpret_cast<void***>(target);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uintptr_t, uintptr_t)>(
            vtable[0xa0 / sizeof(void*)]);
        fn(target, arg0, arg1);
        return;
    }
}
} // namespace lift_005453D0

// [0x00545440] PoseTool::vfunc_19_off_98 (45 bytes)
namespace lift_00545440 {
// @name PoseTool::vfunc_19_off_98
// @class PoseTool
// @summary Thunk for the ToolClient sub-object (this+0x98 of PoseTool): forwards arg0 to vtable slot 45 of the object at PoseTool+0x88, then calls vtable slot 33 on the owning PoseTool.
// @field PoseTool +0x88 void* field_0x88
void __thiscall fn_00545440(void* self, uint32_t arg0) {
    // `self` is the ToolClient sub-object at PoseTool+0x98; recover the owning PoseTool.
    uint8_t* poseTool = reinterpret_cast<uint8_t*>(self) - 0x98;

    // Object at PoseTool+0x88 (read as self-0x10): virtual slot 0xB4 (index 45), arg0 pushed.
    void* field_0x88 = *reinterpret_cast<void**>(poseTool + 0x88);
    void** fieldVtable = *reinterpret_cast<void***>(field_0x88);
    auto slot45 = reinterpret_cast<void (*)(void*, uint32_t)>(fieldVtable[0xB4 / sizeof(void*)]);
    slot45(field_0x88, arg0);

    // Owning PoseTool's primary vtable slot 0x84 (index 33), no arguments.
    void** poseVtable = *reinterpret_cast<void***>(poseTool);
    auto slot33 = reinterpret_cast<void (*)(void*)>(poseVtable[0x84 / sizeof(void*)]);
    slot33(poseTool);
}
} // namespace lift_00545440

// [0x00545370]
namespace lift_00545370 {
// @name PoseTool::vfunc_21
// @class PoseTool
// @summary Sets state fields and delegates to subobject vfunc at +0x44, returning 1.
// @field PoseTool +0x254 void* field_0x254
// @field PoseTool +0x338 uint8_t field_0x338
// @field PoseTool +0x350 uint32_t field_0x350


uint32_t __thiscall fn_00545370(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* sub = base + 0x254;
    void** vtable = *reinterpret_cast<void***>(sub);
    auto vfunc = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(
        vtable[0x44 / sizeof(void*)]);

    *reinterpret_cast<uint32_t*>(base + 0x350) = 2;
    *reinterpret_cast<uint8_t*>(base + 0x338) = 1;

    vfunc(sub, arg1, arg2);
    return 1;
}
} // namespace lift_00545370

// [0x00545400] PoseTool::vfunc_22_off_98 (58 bytes)
namespace lift_00545400 {
// @name PoseTool::vfunc_22_off_98
// @class PoseTool
// @summary ToolClient thunk: forwards its three stack args to vtable slot 0xB8 of the object at PoseTool+0x88, then calls vtable slot 0x84 on the owning PoseTool.
// @field PoseTool +0x88 void* field_0x88
void __thiscall fn_00545400(void* self, uint32_t arg0, uint32_t arg1, float arg2) {
    // `self` is the ToolClient sub-object at PoseTool+0x98; the object at self-0x10 is PoseTool+0x88.
    void* owner = lift_field<void*>(self, -0x10);
    void** ownerVtable = *reinterpret_cast<void***>(owner);
    auto slot46 = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t, float)>(
        ownerVtable[0xB8 / sizeof(void*)]);
    slot46(owner, arg0, arg1, arg2);

    // Owning PoseTool (self-0x98): primary vtable slot 0x84 (index 33), no arguments.
    uint8_t* poseTool = static_cast<uint8_t*>(self) - 0x98;
    void** poseVtable = *reinterpret_cast<void***>(poseTool);
    auto slot33 = reinterpret_cast<void(__thiscall*)(void*)>(poseVtable[0x84 / sizeof(void*)]);
    slot33(poseTool);
}
} // namespace lift_00545400

// [0x00545320] sub_00545320 (68 bytes)
namespace lift_00545320 {
// @name PoseTool::vfunc_18
// @class PoseTool
// @summary Queries the sub-object at +0xA0 via vtable slot 0x38; if it returns true, calls vtable slot 0x14 on this (arg 0 if +0x9C is nonzero, else 1) and returns 1, otherwise returns 0.
// @field PoseTool +0x9C uint32_t field_0x9c
// @field PoseTool +0xA0 void* field_0xa0

namespace {

// Fetch the function pointer stored at byte offset `off` within a vtable.
inline void* vtable_slot(void* obj, std::size_t off) {
    auto* vt = *reinterpret_cast<uint8_t**>(obj);
    return *reinterpret_cast<void**>(vt + off);
}

}  // namespace

int fn_00545320(void* self, uint32_t arg0, uint32_t arg1) {
    (void)arg0;
    (void)arg1;

    auto* base = static_cast<uint8_t*>(self);

    void* sub = *reinterpret_cast<void**>(base + 0xA0);
    using QueryFn = int (*)(void*);
    auto query = reinterpret_cast<QueryFn>(vtable_slot(sub, 0x38));
    if (!query(sub)) {
        return 0;
    }

    uint32_t flag = *reinterpret_cast<uint32_t*>(base + 0x9C);
    using NotifyFn = void (*)(void*, int);
    auto notify = reinterpret_cast<NotifyFn>(vtable_slot(self, 0x14));
    notify(self, flag != 0 ? 0 : 1);
    return 1;
}
} // namespace lift_00545320

// [0x005451E0] PoseTool::vfunc_32 (22 bytes)
namespace lift_005451E0 {
// Known callee 0x00543470: CameraTool::vfunc_32 (Fetches a 64-byte block via two virtual calls, copies it into this+0x04, then duplicates it into this+0x44.)
extern void ext_00543470(void* self);

// @name PoseTool::vfunc_32
// @class PoseTool
// @summary Calls CameraTool::vfunc_32 on self, then tail-calls vtable slot 26 (+0x68) of the object at this+0xA0 with this = that object and returns its result.
// @field PoseTool +0xA0 void* field_0xA0
uint32_t __thiscall fn_005451E0(void* self) {
    ext_00543470(self);

    void* obj = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0xA0);
    void** objVtbl = *reinterpret_cast<void***>(obj);
    using VFuncRet = uint32_t(__thiscall*)(void*);
    return reinterpret_cast<VFuncRet>(objVtbl[0x68 / sizeof(void*)])(obj);
}
} // namespace lift_005451E0

// [0x005454D0] sub_005454D0 (109 bytes)
namespace lift_005454D0 {
// @name PoseTool::vfunc_5
// @class PoseTool
// @summary Sets the active pose slot (flag 1 or 0), re-points the slot-A pointer to the matching embedded object, notifies the sub-object at +0x88, then fires the virtual hook at vtable slot 32 on self.
// @field PoseTool +0x88 void* field_0x88
// @field PoseTool +0x9C uint32_t field_0x9c
// @field PoseTool +0xA0 void* field_0xA0

// Portable virtual-slot dispatch. Slot numbers are byte offsets / 4.
static inline void vcall0(void* obj, size_t slot) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (*)(void*)>(vtbl[slot])(obj);
}

static inline void vcall1(void* obj, size_t slot, uint32_t arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (*)(void*, uint32_t)>(vtbl[slot])(obj, arg);
}

// Original: thiscall with one stack argument (ret 4). `self` is ECX.
void fn_005454D0(void* self, uint32_t arg) {
    // Early out when the requested state is already active.
    if (arg == lift_field<uint32_t>(self, 0x9C)) {
        return;
    }

    // Tear down the current slot-A object (vtable slot 0x60 / 4 = 24).
    vcall0(lift_field<void*>(self, 0xA0), 0x60 / 4);

    if (arg == 1) {
        // Slot A -> embedded object at +0x16C; state = 1.
        lift_field<void*>(self, 0xA0) = static_cast<uint8_t*>(self) + 0x16C;
        lift_field<uint32_t>(self, 0x9C) = arg;
        vcall1(lift_field<void*>(self, 0x88), 0x0C / 4, arg);
    } else {
        // Slot A -> embedded object at +0xA4; state = 0.
        lift_field<void*>(self, 0xA0) = static_cast<uint8_t*>(self) + 0xA4;
        lift_field<uint32_t>(self, 0x9C) = 0;
        vcall1(lift_field<void*>(self, 0x88), 0x0C / 4, 0);
    }

    // Final hook: virtual slot 0x80 / 4 = 32 on self.
    vcall0(self, 0x80 / 4);
}
} // namespace lift_005454D0

// [0x005451B0] PoseTool::vfunc_26 (48 bytes)
namespace lift_005451B0 {
// @name PoseTool::vfunc_26
// @class PoseTool
// @summary Calls vtable slots +0xA4 and +0xA8 on the object at this+0x88, then tail-dispatches vtable slot +0x80 on this.
// @field PoseTool +0x00 void* vtable
// @field PoseTool +0x88 void* field_0x88
void fn_005451B0(void* self) {
    // Thiscall-style virtual invocation: first argument is the object (ecx on x86).
    using ThisFn = uint32_t (__thiscall*)(void*);
    auto vcall = [](void* obj, ptrdiff_t slot) -> uint32_t {
        void* vt = lift_field<void*>(obj, 0);
        ThisFn fn = reinterpret_cast<ThisFn>(lift_field<void*>(vt, slot));
        return fn(obj);
    };

    vcall(lift_field<void*>(self, 0x88), 0xA4);
    vcall(lift_field<void*>(self, 0x88), 0xA8);
    // Original ends in a tail jmp to slot +0x80; the callee's return value is discarded
    // because the wip signature is void.
    vcall(self, 0x80);
}
} // namespace lift_005451B0
