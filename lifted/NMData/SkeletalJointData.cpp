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

// [0x005E4BB0] NMData::SkeletalJointData::vfunc_66 (182 bytes)
namespace lift_005E4BB0 {
extern void* ext_00435D00(void* os, const char* text);
extern void* ext_0067E9E0(void* os, void* value);
extern void* mem_00924E90;          // std::endl manipulator (function address)
extern void* mem_00924FA0;          // std::cout object address
extern void* mem_00924E98;          // ostream::operator<<(manip) (__thiscall, returns ostream&)
extern void* mem_00B40640;          // global value passed to sub-object vtable slot 5
extern const char mem_0096AD54[];   // .rdata string literal
extern const char mem_0096AD3C[];   // .rdata string literal

// @name NMData::SkeletalJointData::vfunc_66
// @class NMData::SkeletalJointData
// @summary Dumps two debug blocks to std::cout: a header string, then the result of the
//          sub-object at +0x17C (vtable slot 5), a header string, then the result of the
//          sub-object at +0x180 (vtable slot 5); each block is followed by std::endl.
// @field NMData::SkeletalJointData +0x17C void* field_0x17c
// @field NMData::SkeletalJointData +0x180 void* field_0x180

namespace {

// std::ostream& operator<<(std::ostream& (*)(std::ostream&)) -- __thiscall member
using OstreamManipFn = void* (__thiscall*)(void* os, void* manip);
// Virtual slot 5 on the sub-object interface -- __thiscall, one argument
using SubObjectSlot5Fn = void* (__thiscall*)(void* iface, void* arg);

inline void* put_endl(void* os) {
    auto fn = reinterpret_cast<OstreamManipFn>(reinterpret_cast<uintptr_t>(mem_00924E98));
    return fn(os, mem_00924E90);
}

// Sub-object pointer at self+offset; its interface lives at +4 and its vtable pointer is at iface[0].
inline void* call_sub_slot5(void* self, ptrdiff_t offset) {
    void* sub = lift_field<void*>(self, offset);
    void* iface = static_cast<uint8_t*>(sub) + 4;
    void** vtbl = *reinterpret_cast<void***>(iface);
    auto fn = reinterpret_cast<SubObjectSlot5Fn>(vtbl[5]);
    return fn(iface, mem_00B40640);
}

}  // namespace

void fn_005E4BB0(void* self) {
    void* cout_obj = mem_00924FA0;

    // std::cout << "<header A>" << std::endl;
    put_endl(ext_00435D00(cout_obj, mem_0096AD54));

    // ext_0067E9E0(std::cout, call_sub_slot5(field_0x17c)) << std::endl;
    void* value_a = call_sub_slot5(self, 0x17C);
    put_endl(ext_0067E9E0(cout_obj, value_a));

    // std::cout << "<header B>" << std::endl;
    put_endl(ext_00435D00(cout_obj, mem_0096AD3C));

    // ext_0067E9E0(std::cout, call_sub_slot5(field_0x180)) << std::endl;
    void* value_b = call_sub_slot5(self, 0x180);
    put_endl(ext_0067E9E0(cout_obj, value_b));
}
} // namespace lift_005E4BB0

// [0x005ED030] NMData::SkeletalJointData::vfunc_2 (464 bytes)
namespace lift_005ED030 {
// Known callees: each stores `value` into dst[0] and a static-object address into dst[1] (cdecl, caller cleans).
// 0x005EC9B0: fillValueAndStaticObject_005EC9B0
extern void ext_005EC9B0(void* dst, DWORD value);
// 0x005EC9D0: storeValueAndLazyStaticObject_005EC9D0
extern void ext_005EC9D0(void* dst, DWORD value);
// 0x005EC9F0: sub_005EC9F0 (clone of 0x005EC8D0 storeValueAndStaticObject)
extern void ext_005EC9F0(void* dst, DWORD value);
// 0x005ECA10: sub_005ECA10 (clone of 0x005EC8D0)
extern void ext_005ECA10(void* dst, DWORD value);
// 0x005ECA30: sub_005ECA30 (clone of 0x005EC8D0)
extern void ext_005ECA30(void* dst, DWORD value);
// 0x005ECA50: sub_005ECA50 (clone of 0x005EC8D0)
extern void ext_005ECA50(void* dst, DWORD value);
// 0x005ECA70: sub_005ECA70 (clone of 0x005EC8D0)
extern void ext_005ECA70(void* dst, DWORD value);
// 0x005ECA90: sub_005ECA90 (clone of 0x005EC8D0)
extern void ext_005ECA90(void* dst, DWORD value);
// 0x005ECAB0: sub_005ECAB0 (clone of 0x005EC8D0)
extern void ext_005ECAB0(void* dst, DWORD value);
// 0x005ECAD0: sub_005ECAD0 (clone of 0x005EC8D0)
extern void ext_005ECAD0(void* dst, DWORD value);
// 0x005ECAF0: sub_005ECAF0 (clone of 0x005EC8D0)
extern void ext_005ECAF0(void* dst, DWORD value);
// 0x005E24F0: NMData::FixedPathJointData::vfunc_2 (thiscall: self in ECX, two stack args)
extern void ext_005E24F0(void* self, void* a, void* b);
// 0x00588330: AnimatableTransform::vfunc_40 (not invoked by this function; referenced for metadata only)
extern void ext_00588330();
// 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (not invoked by this function; referenced for metadata only)
extern void ext_006A6E9E();

// IAT slot holding std::operator==(const std::string&, const char*) (cdecl).
extern void* mem_00924FC0;
// Data references from the original asm (not accessed by this function's code; metadata only).
extern int mem_00A2E2BC;
extern int mem_00A8F318;

// Literal strings in .rdata compared against the std::string argument.
extern const char mem_0096B094[];
extern const char mem_0096B084[];
extern const char mem_0096B074[];
extern const char mem_0096B064[];
extern const char mem_0096B054[];
extern const char mem_0096B044[];
extern const char mem_0096B034[];
extern const char mem_0096B024[];
extern const char mem_0096B014[];
extern const char mem_0096B004[];
extern const char mem_0096AFF4[];

using StringEqFn = bool (*)(const void* str, const char* lit);

// @name NMData::SkeletalJointData::vfunc_2
// @class NMData::SkeletalJointData
// @summary Compares the std::string argument against 11 literals in order; on the first match calls the matching store helper with (dst, this) and returns dst. If nothing matches, forwards (dst, name) to FixedPathJointData::vfunc_2 and returns dst.
// (No fields of *this are accessed directly; `this` is only passed by value to the helpers.)
void* fn_005ED030(void* self, void* dst, const void* name) {
    // Reference-only (no code emitted).
    (void)&ext_00588330;
    (void)&ext_006A6E9E;
    (void)&mem_00A2E2BC;
    (void)&mem_00A8F318;

    const auto strEq = reinterpret_cast<StringEqFn>(mem_00924FC0);
    const auto selfValue = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));

    if (strEq(name, mem_0096B094)) {
        ext_005EC9B0(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B084)) {
        ext_005EC9D0(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B074)) {
        ext_005EC9F0(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B064)) {
        ext_005ECA10(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B054)) {
        ext_005ECA30(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B044)) {
        ext_005ECA50(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B034)) {
        ext_005ECA70(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B024)) {
        ext_005ECA90(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B014)) {
        ext_005ECAB0(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096B004)) {
        ext_005ECAD0(dst, selfValue);
        return dst;
    }
    if (strEq(name, mem_0096AFF4)) {
        ext_005ECAF0(dst, selfValue);
        return dst;
    }

    ext_005E24F0(self, dst, const_cast<void*>(name));
    return dst;
}
} // namespace lift_005ED030
