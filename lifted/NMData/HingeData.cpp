// Lifted C++ translation unit: lifted/NMData/HingeData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EF9C;
extern "C" void __thiscall ext_005E29F0(void* self, void* a, void* b);

// [0x005E2A90] NMData::HingeData::vfunc_14 (32 bytes)
// @name NMData::HingeData::vfunc_14
// @class NMData::HingeData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005E2A90(void* self, void* a, void* b) {
    ext_005E29F0(self, a, b);
    return a;
}

// [0x005E05F0]
// @name NMData::HingeData::vfunc_55
// @class NMData::HingeData
// @summary Returns true if the base TransformInterface virtual slot 7 reports success and the hinge is not flagged at +0x17a; otherwise true only when the stack argument is 0, 1, 2 or 6.
// @field NMData::HingeData +0x4 void* transform_interface_vptr (TransformInterface subobject; vtable slot 7 at +0x1c is called)
// @field NMData::HingeData +0x17A uint8_t hinge_flag

#include <cstdint>

namespace {

// Virtual slot 7 (offset 0x1C) of the TransformInterface subobject, thiscall, returns bool in AL.
using SlotFn = std::uint8_t (*)(void* self);

}  // namespace

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4).
std::uint8_t __fastcall NMData_HingeData_vfunc_55(void* ecx, std::uint32_t arg) {
    auto* self = static_cast<std::uint8_t*>(ecx);
    void* sub = self + 0x4;
    void** vptr = *reinterpret_cast<void***>(sub);
    auto slot7 = reinterpret_cast<SlotFn>(vptr[7]);

    if (slot7(sub) == 0) {
        return 0;
    }
    if (*(self + 0x17A) != 0) {
        return 1;
    }
    switch (arg) {
        case 0:
        case 1:
        case 2:
        case 6:
            return 1;
        default:
            return 0;
    }
}

// [0x005EE3B0]
namespace lift_005EE3B0 {
// Known callee 0x005EE360: NMData::FixedPathJointData::vfunc_15
extern uint32_t ext_005EE360(void* self, uint32_t code);
// Known callee 0x005EC910: fillPairWithStaticObject
extern void ext_005EC910(void* self, uint32_t value);

// @name NMData::HingeData::vfunc_15
// @class NMData::HingeData
// @summary Forwards code 0x22F to FixedPathJointData::vfunc_15; otherwise calls fillPairWithStaticObject, then returns self.
void* __stdcall fn_005EE3B0(void* self, uint32_t code) {
    if (code == 0x22F) {
        ext_005EE360(self, code);
    } else {
        // Original pushes the ecx register at entry as the second argument.
        // That value is not defined by this function, so it is passed as 0 here.
        ext_005EC910(self, 0);
    }
    return self;
}
} // namespace lift_005EE3B0

// [0x005EF8A0] NMData::HingeData::vfunc_59 (35 bytes)
namespace lift_005EF8A0 {
extern const char* mem_00A9EF9C;

// @name NMData::HingeData::vfunc_59
// @class NMData::HingeData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9EF9C;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_005EF8A0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9EF9C);
}
} // namespace lift_0047DB90
} // namespace lift_005EF8A0

// [0x005E1C50] NMData::HingeData::vfunc_54 (128 bytes)
namespace lift_005E1C50 {
extern void __thiscall ext_005B5780(void* self, uint32_t arg);
extern void __thiscall ext_005E0380(void* self, void* arg);
extern int __cdecl ext_006A6C87(void* fn);
extern uint32_t mem_00B45CCC;
extern uint8_t mem_00B45CC4;
extern uint8_t mem_00B45C80;

// @name NMData::HingeData::vfunc_54
// @class NMData::HingeData
// @summary One-time guarded init of the static object at 0xB45C80 (ext_005B5780 with arg 10, then atexit-style registration via ext_006A6C87); always calls ext_005E0380(this, &obj), caches the byte at this+0x178 into mem_00B45CC4, and returns &obj.
// @field NMData::HingeData +0x178 uint8_t field_0x178
// Note: the MSVC SEH frame (fs:[0] push/pop, -1 state slot, esp bookkeeping) is
// unwinding/state bookkeeping and is not modeled. The "or dword" init flag write
// is kept as a 32-bit store to match the original. The hinge_flag known at +0x17A
// is not accessed by this function; the byte read here is at +0x178.
void* __thiscall fn_005E1C50(void* self) {
    // One-time initialization guarded by bit 0 of mem_00B45CCC.
    if ((mem_00B45CCC & 1u) == 0) {
        mem_00B45CCC |= 1u;
        ext_005B5780(&mem_00B45C80, 10u);
        // Registers the teardown callback for mem_00B45C80 (address 0x0091E400).
        ext_006A6C87(reinterpret_cast<void*>(uintptr_t{0x0091E400u}));
    }

    ext_005E0380(self, &mem_00B45C80);

    mem_00B45CC4 = lift_field<uint8_t>(self, 0x178);
    return &mem_00B45C80;
}
} // namespace lift_005E1C50

// [0x005E1970] NMData::HingeData::vfunc_61 (223 bytes)
namespace lift_005E1970 {
extern uint32_t __thiscall ext_004875A0(void* self);
extern void __thiscall ext_0067DAD0(void* self, void* arg);
extern void __thiscall ext_0067E990(void* self, uint32_t arg);
extern void __thiscall ext_00694B60(void* self, int32_t zero, void* out);
extern int mem_00B40640;
extern int mem_0093A444;
// Metadata-only references: listed as callees/data for this function but not called or
// dereferenced by the 223-byte body (checked against the disassembly). Address-only, no code.
extern void ext_00528BB0();
extern void ext_00528BD0();
extern void ext_00528C70();
extern void ext_00584C00();
extern void ext_005ECF40();

// @name NMData::HingeData::vfunc_61
// @class NMData::HingeData
// @summary For index < 1 builds a 4x4 matrix copy and a 3-float vector via virtual calls, runs two helper calls, and returns vector[index]; returns 0.0 for index >= 1.
// @field NMData::HingeData +0x04 void* transform_interface_vptr
// @field NMData::HingeData +0x17C void* field_0x17c
extern float __thiscall fn_005E1970(void* self, int32_t index) {
    (void)&ext_00528BB0;
    (void)&ext_00528BD0;
    (void)&ext_00528C70;
    (void)&ext_00584C00;
    (void)&ext_005ECF40;
    (void)&mem_0093A444;

    if (index >= 1) {
        return 0.0f;
    }

    using SlotFn2 = void* (__thiscall*)(void* self, int32_t g);
    using SlotFn12 = void* (__thiscall*)(void* self);
    using SlotFn3 = void* (__thiscall*)(void* self, int32_t g, float* out, void* x);

    uint8_t* self_bytes = static_cast<uint8_t*>(self);
    void* ti = self_bytes + 0x04;                       // TransformInterface subobject (ebx)
    void** ti_vt = *reinterpret_cast<void***>(ti);

    float a[3] = {0.0f, 0.0f, 0.0f};                    // vector  (frame S+0x00..S+0x08)
    float b[6] = {};                                    // object  (frame S+0x0C..S+0x20)
    float m[16];                                        // matrix  (frame S+0x40..S+0x7C)

    // ti->vtbl[2](ti, mem_00B40640) returns a pointer to a 4x4 float matrix.
    void* src = reinterpret_cast<SlotFn2>(ti_vt[2])(ti, mem_00B40640);
    std::memcpy(m, src, sizeof m);

    // child = self->field_0x17c + 4 (read before the next virtual call).
    void* child_base = *reinterpret_cast<void**>(self_bytes + 0x17C);
    uint8_t* child = static_cast<uint8_t*>(child_base) + 0x04;

    // x = ti->vtbl[12](ti)
    void* x = reinterpret_cast<SlotFn12>(ti_vt[12])(ti);

    // z = child->vtbl[3](child, mem_00B40640, a, x)
    void** child_vt = *reinterpret_cast<void***>(child);
    void* z = reinterpret_cast<SlotFn3>(child_vt[3])(child, mem_00B40640, a, x);

    uint32_t y = ext_004875A0(z);
    ext_0067E990(m, y);

    a[2] = 0.0f;
    b[1] = 0.0f;
    b[2] = 0.0f;
    b[0] = 0.0f;
    b[4] = 0.0f;
    b[3] = 0.0f;
    a[0] = 1.0f;
    b[1] = 1.0f;
    b[5] = 1.0f;

    ext_0067DAD0(m, b);
    ext_00694B60(b, 0, a);

    // Original reads a 32-bit float at frame + 4*index. Only index 0..2 is in range of the
    // modelled vector; negative indices would read the spill area below the frame (not modelled).
    return a[index];
}
} // namespace lift_005E1970

// [0x005ED550] NMData::HingeData::vfunc_14_off_C (123 bytes)
namespace lift_005ED550 {
// Known callee 0x005ECF40: NMData::FixedPathJointData::vfunc_14_off_C (thiscall: ecx = self, two stack args: a pointer to mem_0093A444 and the flags DWORD).
extern uint8_t ext_005ECF40(void* self, void* tag, uint32_t flags);
// Known callee 0x00528BD0: sub_00528BD0 (thiscall: ecx = self, one stack arg 0x20000; returns a byte in AL).
extern uint32_t ext_00528BD0(void* self, uint32_t arg0);
// Known callee 0x00584C00: sub_00584C00 (thiscall: ecx = the object at self+0x174; returns a byte in AL).
extern uint8_t ext_00584C00(void* self);
// Known callee 0x00528BB0: descriptiveName_00528BB0 (forwardVirtual0x2CIfNonNull; thiscall, two stack args, callee pops 8).
extern uint32_t ext_00528BB0(void* self, uint32_t arg0, uint32_t arg1);
// Known callee 0x00528C70: setFlagOnPointedObject (thiscall: ecx = self).
extern void ext_00528C70(void* self);

extern int mem_0093A444; // .rdata u32 0x005E0AD0; its address is passed as the tag argument to ext_005ECF40
extern int mem_00B40640; // (global) listed in metadata; not referenced by the bytes

// Callees listed in metadata but never called by the 123 bytes at 0x005ED550 (decoded: only
// 0x005ECF40, 0x00528BD0, 0x00584C00, 0x00528BB0, 0x00528C70 are called). Address-only references below; no calls.
extern void ext_00466910();
extern void ext_00466F00();
extern void ext_0053B470();
extern void ext_00586D00();
extern void ext_00661B10();
extern void ext_00662120();
extern void ext_0067E6C0();

// @name NMData::HingeData::vfunc_14_off_C
// @class NMData::HingeData
// @summary Gate on ext_005ECF40; when it succeeds, recomputes a flag from ext_00528BD0 and (if flags & 0x200) ext_00584C00 on self+0x174, and when that flag changes it re-dispatches via ext_00528BB0 and ext_00528C70. Returns the gate result.
// @field NMData::HingeData +0x174 void* field_0x174
uint8_t fn_005ED550(void* self, uint32_t unusedArg0, uint32_t flags) {
    (void)unusedArg0; // stack slot is caller-owned and never read by the original code
    (void)&mem_0093A444;
    // Metadata-only references (see note above); taking the address has no runtime effect.
    (void)&mem_00B40640;
    (void)&ext_00466910;
    (void)&ext_00466F00;
    (void)&ext_0053B470;
    (void)&ext_00586D00;
    (void)&ext_00661B10;
    (void)&ext_00662120;
    (void)&ext_0067E6C0;

    const uint8_t gate = ext_005ECF40(self, reinterpret_cast<void*>(&mem_0093A444), flags);
    if (gate == 0) {
        return gate;
    }

    const uint8_t prev = static_cast<uint8_t>(ext_00528BD0(self, 0x20000));

    uint8_t cur = 0;
    if ((flags & 0x200u) != 0) {
        void* child = lift_field<void*>(self, 0x174);
        cur = ext_00584C00(child) != 0 ? 1 : 0;
    }

    if (cur != prev) {
        // The original writes only the low byte of a spilled dword slot that still holds the
        // saved `this` pointer, then passes that dword as the argument. Reproduce those upper bits.
        const uint32_t selfBits = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        const uint32_t spilled = (selfBits & 0xFFFFFF00u) | cur;
        ext_00528BB0(self, 0x20000, spilled);
        ext_00528C70(self);
    }

    return gate;
}
} // namespace lift_005ED550

// [0x005EBEC0] NMData::HingeData::vfunc_22 (170 bytes)
namespace lift_005EBEC0 {
extern void* __thiscall ext_006404E0(void* self, void* arg);
extern void __thiscall ext_005EB5A0(void* self, void* arg);
extern void* __thiscall ext_00640110(void* self, void* arg);
// Known callee 0x00640A80: ResetChildNameFromBool (Resets the child object's name to "true" or "false" depending on the boolean argument.)
extern void ext_00640A80(void* value, uint8_t flag);
extern void* mem_00A9EF9C;
extern void* mem_00A9F724;

// @name NMData::HingeData::vfunc_22
// @class NMData::HingeData
// @summary Resolves a handle from arg via 0x006404E0, forwards it to RelationshipData::vfunc_22, calls vtable slot 22 on the object at +0x17C, then, if the object at +0x190 exists and its vfunc 28 returns true, or its flag at +0x178 differs from this flag, resets the child name via 0x00640110 and 0x00640A80; returns arg.
// @field NMData::HingeData +0x178 uint8_t field_0x178
// @field NMData::HingeData +0x17C void* field_0x17c
// @field NMData::HingeData +0x190 void* field_0x190
void* __thiscall fn_005EBEC0(void* self, void* arg) {
    void* handle = ext_006404E0(arg, mem_00A9EF9C);
    ext_005EB5A0(self, handle);

    // Vtable slot 22 (offset 0x58) of the object at +0x17C, thiscall, takes handle.
    void* sub = lift_field<void*>(self, 0x17C);
    void** sub_vt = *reinterpret_cast<void***>(sub);
    reinterpret_cast<void(__thiscall*)(void*, void*)>(sub_vt[22])(sub, handle);

    void* other = lift_field<void*>(self, 0x190);
    if (other == nullptr) {
        return arg;
    }

    // Vtable slot 28 (offset 0x70) of the object at +0x190: thiscall, no args, bool in AL.
    void** other_vt = *reinterpret_cast<void***>(other);
    bool other_true = reinterpret_cast<uint8_t(__thiscall*)(void*)>(other_vt[28])(other) != 0;

    if (other_true) {
        void* r = ext_00640110(handle, mem_00A9F724);
        ext_00640A80(r, lift_field<uint8_t>(self, 0x178));
    } else if (lift_field<uint8_t>(other, 0x178) != lift_field<uint8_t>(self, 0x178)) {
        void* r = ext_00640110(handle, mem_00A9F724);
        ext_00640A80(r, lift_field<uint8_t>(self, 0x178));
    }
    return arg;
}
} // namespace lift_005EBEC0
