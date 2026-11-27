// Lifted C++ translation unit: lifted/NMData/SkeletalJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>

extern "C" const char* mem_00A9F280;
extern "C" void ext_00661650(void* self);
extern "C" void ext_005E29F0(void* self, void* arg1, uint32_t arg2);
extern "C" void __thiscall ext_00587450(void* self, uint32_t arg);
extern "C" const uint32_t mem_009849A8;
extern "C" uint32_t mem_00B40640;

// [0x005E2A50]
// @class NMData::SkeletalJointData
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_005E2A50(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x47) {
        ext_00661650(arg1);
    } else {
        ext_005E29F0(self, arg1, arg2);
    }
    return arg1;
}

// [0x005E2340]
// @name NMData::SkeletalJointData::vfunc_41
// @class NMData::SkeletalJointData
// @summary Updates the joint's child object via ext_00587450, preserving and restoring its transform matrix when the parent state counter is below mem_009849A8.
// @field NMData::SkeletalJointData +0x179 uint8_t field_0x179
// @field NMData::SkeletalJointData +0x180 void* field_0x180
// @field NMData::SkeletalJointData +0x18C void* field_0x18C
// @field NMData::SkeletalJointData +0x22C void* field_0x22C
void __thiscall fn_005E2340(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint8_t*>(p + 0x179) == 0) {
        return;
    }

    uint8_t* obj22c = *reinterpret_cast<uint8_t**>(p + 0x22C);
    if (obj22c == nullptr) {
        return;
    }

    uint8_t* obj18c = *reinterpret_cast<uint8_t**>(p + 0x18C);
    uint32_t val600 = *reinterpret_cast<uint32_t*>(obj18c + 0x600);

    if (val600 < mem_009849A8) {
        uint8_t local_buf[0x40];
        uint8_t* obj180 = *reinterpret_cast<uint8_t**>(p + 0x180);
        void* iface = obj180 + 0x4;
        void** vtable = *reinterpret_cast<void***>(iface);

        using GetTransformFn = void(__thiscall*)(void*, void*, uint32_t, uint32_t);
        reinterpret_cast<GetTransformFn>(vtable[4])(iface, local_buf, 0, mem_00B40640);

        uint8_t* cur22c = *reinterpret_cast<uint8_t**>(p + 0x22C);
        uint32_t arg20c = *reinterpret_cast<uint32_t*>(cur22c + 0x20C);
        void* cur180 = *reinterpret_cast<void**>(p + 0x180);
        ext_00587450(cur180, arg20c);

        uint8_t* after180 = *reinterpret_cast<uint8_t**>(p + 0x180);
        void* after_iface = after180 + 0x4;
        void** after_vtable = *reinterpret_cast<void***>(after_iface);

        using SetTransformFn = void(__thiscall*)(void*, uint32_t, void*, uint32_t);
        reinterpret_cast<SetTransformFn>(after_vtable[0])(after_iface, 0, local_buf, mem_00B40640);
    } else {
        uint32_t arg20c = *reinterpret_cast<uint32_t*>(obj22c + 0x20C);
        void* cur180 = *reinterpret_cast<void**>(p + 0x180);
        ext_00587450(cur180, arg20c);
    }
}

// [0x005E20F0]
// @name NMData::SkeletalJointData::isAxisUnlocked
// @class NMData::SkeletalJointData
// @summary Checks whether a specified joint axis/DOF (0..6) is unlocked based on TransformInterface state and joint lock flags.
// @field NMData::SkeletalJointData +0x4 void** field_0x04
// @field NMData::SkeletalJointData +0x17A uint8_t field_0x17A
// @field NMData::SkeletalJointData +0x308 uint32_t field_0x308
bool __thiscall fn_005E20F0(void* self, uint32_t axis) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* transformIface = obj + 0x4;
    void** vtable = *reinterpret_cast<void***>(transformIface);
    using VFunc7 = bool(__thiscall*)(void*);
    auto vfunc7 = reinterpret_cast<VFunc7>(vtable[7]);

    if (vfunc7(transformIface) && obj[0x17A] != 0) {
        return true;
    }

    uint32_t flags = *reinterpret_cast<uint32_t*>(obj + 0x308);
    switch (axis) {
        case 0:
            return (flags & 0x1u) == 0;
        case 1:
            return (flags & 0x2u) == 0;
        case 2:
            return (flags & 0x4u) == 0;
        case 3:
            return (flags & 0x100u) == 0;
        case 4:
            return (flags & 0x200u) == 0;
        case 5:
            return (flags & 0x400u) == 0;
        case 6:
            return (flags & 0x7u) != 0x7u;
        default:
            return false;
    }
}

// [0x005F02B0] NMData::SkeletalJointData::vfunc_59 (35 bytes)
namespace lift_005F02B0 {
extern const char* mem_00A9F280;

// @name NMData::SkeletalJointData::vfunc_59
// @class NMData::SkeletalJointData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9F280;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_005F02B0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9F280);
}
} // namespace lift_0047DB90
} // namespace lift_005F02B0

// [0x005E0970]
namespace lift_005E0970 {
// @name NMData::SkeletalJointData::vfunc_60
// @class NMData::SkeletalJointData
// @summary Calls virtual slot 0xDC (index 55) with arguments 0..5 and returns how many calls returned true.
// @field NMData::SkeletalJointData +0x00 void** vtable
int fn_005E0970(void* self) {
    using SlotFn = bool (*)(void* self, int index);

    // Vtable pointer lives at the start of the object.
    void** vtable = lift_field<void**>(self, 0);

    int count = 0;
    for (int i = 0; i < 6; ++i) {
        // Slot at byte offset 0xDC of the vtable; called as a method with `self` as the implicit this.
        auto slot = reinterpret_cast<SlotFn>(
            lift_field<void*>(reinterpret_cast<void*>(vtable), 0xDC));
        if (slot(self, i)) {
            ++count;
        }
    }
    return count;
}
} // namespace lift_005E0970

// [0x005EE3F0]
namespace lift_005EE3F0 {
// @name NMData::SkeletalJointData::vfunc_15
// @class NMData::SkeletalJointData
// @summary Dispatches property/attribute codes 0x25D, 0x33B, 0x33E, and 0x356 to static-object helpers, delegating all other codes to NMData::FixedPathJointData::vfunc_15.


extern void ext_005EC930(void* out, uint32_t value);
extern void ext_005EC950(DWORD* out, DWORD value);
extern void ext_005EC970(DWORD* dst, DWORD value);
extern void ext_005EC990(DWORD* dst, DWORD value);
extern uint32_t __thiscall ext_005EE360(void* self, uint32_t out, uint32_t code);

uint32_t __thiscall fn_005EE3F0(void* self, uint32_t out, uint32_t code) {
    uint32_t val = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    switch (code) {
        case 0x25D:
            ext_005EC990(reinterpret_cast<DWORD*>(static_cast<uintptr_t>(out)), val);
            return out;
        case 0x33B:
            ext_005EC950(reinterpret_cast<DWORD*>(static_cast<uintptr_t>(out)), val);
            return out;
        case 0x33E:
            ext_005EC970(reinterpret_cast<DWORD*>(static_cast<uintptr_t>(out)), val);
            return out;
        case 0x356:
            ext_005EC930(reinterpret_cast<void*>(static_cast<uintptr_t>(out)), val);
            return out;
        default:
            ext_005EE360(self, out, code);
            return out;
    }
}
} // namespace lift_005EE3F0

// [0x005EE2F0] NMData::SkeletalJointData::vfunc_33 (104 bytes)
namespace lift_005EE2F0 {
// Known callee 0x005EDFD0: NMData::FixedPathJointData::vfunc_33 (thiscall, no stack args)
extern void __thiscall ext_005EDFD0(void* self);
// Known callee 0x00587920: sub_00587920 (thiscall, two stack args: (value, 0))
extern void __thiscall ext_00587920(void* self, void* value, uint32_t flag);

// @name NMData::SkeletalJointData::vfunc_33
// @class NMData::SkeletalJointData
// @summary Runs the FixedPathJointData base step, invokes vtable slot 33 on the three owned sub-objects at +0x17C/+0x180/+0x184, sets +0x308 to 0x700, then calls sub_00587920 on the sub-objects.
// @field NMData::SkeletalJointData +0x17C void* field_0x17c
// @field NMData::SkeletalJointData +0x180 void* field_0x180
// @field NMData::SkeletalJointData +0x184 void* field_0x184
// @field NMData::SkeletalJointData +0x308 uint32_t field_0x308
void fn_005EE2F0(void* self) {
    using VSlot33 = void(__thiscall*)(void* self);

    auto invoke_slot33 = [](void* obj) {
        void** vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<VSlot33>(vtable[33])(obj);  // vtable offset 0x84
    };

    ext_005EDFD0(self);

    invoke_slot33(lift_field<void*>(self, 0x17C));
    invoke_slot33(lift_field<void*>(self, 0x180));
    invoke_slot33(lift_field<void*>(self, 0x184));

    lift_field<uint32_t>(self, 0x308) = 0x700;

    ext_00587920(self, lift_field<void*>(self, 0x180), 0);
    ext_00587920(lift_field<void*>(self, 0x17C), lift_field<void*>(self, 0x184), 0);
}
} // namespace lift_005EE2F0
