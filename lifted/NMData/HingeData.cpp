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

// [0x005F2F80] NMData::HingeData::vfunc_21 (326 bytes)
namespace lift_005F2F80 {
// NMData::NullRelationshipData::vfunc_21 (direct base-class call; thiscall(self, arg1)).
extern void ext_005F2970(void* self, void* arg1);
// sub_005E0C10: thiscall(ident, eps) -> bool; used as "is ident within eps" test.
extern uint8_t ext_005E0C10(void* self, float eps);
// sub_0067DAD0: thiscall(this=ret-of-TI-slot3, float[9] ident).
extern void ext_0067DAD0(void* self, float* m);
// sub_0067DE10: thiscall(this=ret-of-TI-slot3).
extern void ext_0067DE10(void* self);

extern const double mem_00A8F2C0;   // .data double 1e-5
extern const double mem_00996B98;   // .rdata double 10.0
extern const uint32_t mem_00B40640; // global DWORD passed to TransformInterface slot 3
extern void* mem_00924ECC;          // IAT slot: MSVCP80 basic_string operator+(const string&, const char*)
extern void* mem_00924FF4;          // IAT slot: MSVCP80 basic_string::~basic_string
extern const char mem_0096B500[];   // string literal (rhs of first concat)
extern const char mem_0096B4F4[];   // string literal (rhs of second concat)

// MSVC 32-bit thiscall signatures, expressed as plain function pointers.
using ThisVoidPtr = void (__thiscall*)(void* self, void* arg);
using ThisPtrU32  = void* (__thiscall*)(void* self, uint32_t arg);
using ConcatFn    = void* (__cdecl*)(void* ret, void* lhs, const char* rhs);
using DtorFn      = void (__thiscall*)(void* self);

// Vtable entry at byte offset `off` (32-bit MSVC layout: 4-byte entries).
inline void* vslot(void* obj, uint32_t off) {
    void* const* vt = *reinterpret_cast<void* const* const*>(obj);
    return vt[off / 4];
}

// @name NMData::HingeData::vfunc_21
// @class NMData::HingeData
// @summary Forwards arg to base vfunc_21 and to the object at +0x17C; if the 3x3 identity test with eps 1e-4 fails, resets via TransformInterface; then forwards two "<+0x14 string> + literal" strings to vslot 0x5C of the objects at +0x17C and +0x180.
// @field NMData::HingeData +0x04 void* transform_interface_vptr
// @field NMData::HingeData +0x14 uint8_t field_0x14
// @field NMData::HingeData +0x17C void* field_0x17c
// @field NMData::HingeData +0x180 void* field_0x180
void fn_005F2F80(void* self, void* arg1) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // NullRelationshipData::vfunc_21(arg1)
    ext_005F2970(self, arg1);

    // field_0x17c->vfunc_21(arg1)   (vslot 0x54)
    void* p17c = lift_field<void*>(self, 0x17c);
    reinterpret_cast<ThisVoidPtr>(vslot(p17c, 0x54))(p17c, arg1);

    // eps = (float)(1e-5 * 10.0)
    const float eps = static_cast<float>(mem_00A8F2C0 * mem_00996B98);

    // 3x3 row-major identity buffer (diagonal at float indices 0, 4, 8).
    float ident[9] = {1.0f, 0.0f, 0.0f,
                      0.0f, 1.0f, 0.0f,
                      0.0f, 0.0f, 1.0f};

    // TransformInterface (self+4) slot 3, arg = mem_00B40640.
    void* ti = base + 0x4;
    void* r = reinterpret_cast<ThisPtrU32>(vslot(ti, 0x0C))(ti, mem_00B40640);
    ext_0067DAD0(r, ident);

    if (!ext_005E0C10(ident, eps)) {
        void* r2 = reinterpret_cast<ThisPtrU32>(vslot(ti, 0x0C))(ti, mem_00B40640);
        ext_0067DE10(r2);
    }

    // std::string tmpA = <self+0x14> + "mem_0096B500"; field_0x17c->vslot_0x5C(&tmpA); ~tmpA
    auto concat = reinterpret_cast<ConcatFn>(mem_00924ECC);
    auto dtor   = reinterpret_cast<DtorFn>(mem_00924FF4);

    alignas(4) uint8_t tmpA[0x1C];
    concat(tmpA, base + 0x14, mem_0096B500);
    reinterpret_cast<ThisVoidPtr>(vslot(p17c, 0x5C))(p17c, tmpA);
    dtor(tmpA);

    // std::string tmpB = <self+0x14> + "mem_0096B4F4"; field_0x180->vslot_0x5C(&tmpB); ~tmpB
    void* p180 = lift_field<void*>(self, 0x180);
    alignas(4) uint8_t tmpB[0x1C];
    concat(tmpB, base + 0x14, mem_0096B4F4);
    reinterpret_cast<ThisVoidPtr>(vslot(p180, 0x5C))(p180, tmpB);
    dtor(tmpB);
}
} // namespace lift_005F2F80

// [0x005EECA0]
namespace lift_005EECA0 {
extern uint32_t mem_00925134;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00A8F2B4;
extern uint32_t mem_00A8F2B8;
extern uint32_t mem_00A9EE64;
extern uint32_t __thiscall ext_0048EF80(void* self, uint32_t ret_iter, uint32_t first_proxy, uint32_t first_ptr, uint32_t last_proxy, uint32_t last_ptr);
extern void __thiscall ext_00412690(void* self, uint32_t arg1);
extern void ext_005A2F70(void);
extern void ext_005A3500(void);
extern void ext_005A7320(void);
extern void ext_005DF5C0(void);
extern void* __thiscall ext_0060C570(void* self);
extern void ext_006A5C62(void);

struct HingeAxisEntry {
    uint32_t index;
    float value;
};

// @name NMData::HingeData::vfunc_67
// @class NMData::HingeData
// @summary Clears the vector at +0x168 and appends three zero-initialized axis entries (indices 0, 1, 2).
// @field NMData::HingeData +0x168 void* field_0x168
void __thiscall fn_005EECA0(void* self) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x168;

    uint32_t last = lift_field<uint32_t>(vec, 0x8);
    if (lift_field<uint32_t>(vec, 0x4) > last) {
        invalid_param();
    }
    uint32_t first = lift_field<uint32_t>(vec, 0x4);
    if (first > lift_field<uint32_t>(vec, 0x8)) {
        invalid_param();
    }

    HingeAxisEntry entry{};
    ext_0048EF80(vec, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&entry)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)), first,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)), last);

    for (uint32_t i = 0; i < 3; ++i) {
        entry.index = i;
        entry.value = 0.0f;
        ext_00412690(vec, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&entry)));
    }

    (void)ext_005A2F70;
    (void)ext_005A3500;
    (void)ext_005A7320;
    (void)ext_005DF5C0;
    (void)ext_0060C570;
    (void)ext_006A5C62;
    (void)mem_00924ECC;
    (void)mem_00924FDC;
    (void)mem_00924FE0;
    (void)mem_00924FE4;
    (void)mem_00924FF4;
    (void)mem_00A8F2B4;
    (void)mem_00A8F2B8;
    (void)mem_00A9EE64;
}
} // namespace lift_005EECA0

// [0x005EDAC0]
namespace lift_005EDAC0 {
// @name NMData::HingeData::vfunc_64
// @class NMData::HingeData
// @summary Allocates and initializes a record object from this HingeData and registers it with the object at +0x18C.
// @field NMData::HingeData +0x14 MsvcString field_0x14
// @field NMData::HingeData +0x18c void* field_0x18c


struct MsvcString {
    uint8_t data[0x1C];
};

extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_0060C570(void* self);
extern int32_t __thiscall ext_005DF5C0(void* self, MsvcString name);
extern void __thiscall ext_005A7320(void* self, const MsvcString* name, uint32_t flag);
extern void __thiscall ext_005A2F70(void* self, const MsvcString* name, uint32_t a, uint32_t b);
extern void __thiscall ext_005A3500(void* self, void* item);

extern uint32_t mem_00924FDC;
extern uint32_t mem_00A9EE64;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00A8F2B4;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00A8F2B8;

using StrAssignFn = MsvcString* (__thiscall*)(MsvcString* self, const MsvcString* other);
using StrCtorCstrFn = MsvcString* (__thiscall*)(MsvcString* self, const char* s);
using StrCtorCopyFn = MsvcString* (__thiscall*)(MsvcString* self, const MsvcString* other);
using StrDtorFn = void (__thiscall*)(MsvcString* self);
using StrConcatCstrFn = MsvcString* (__cdecl*)(MsvcString* out, const MsvcString* lhs, const char* rhs);

static void register_hinge_channel(void* target, const char* channel_name, void* record, uint32_t vtable_offset) {
    auto str_ctor_cstr = reinterpret_cast<StrCtorCstrFn>(mem_00924FE4);
    auto str_ctor_copy = reinterpret_cast<StrCtorCopyFn>(mem_00924FE0);
    auto str_dtor = reinterpret_cast<StrDtorFn>(mem_00924FF4);

    MsvcString tmp;
    str_ctor_cstr(&tmp, channel_name);
    MsvcString arg;
    str_ctor_copy(&arg, &tmp);
    int32_t found = ext_005DF5C0(reinterpret_cast<uint8_t*>(target) + 0x568, arg);
    str_dtor(&tmp);

    if (found == 0) {
        MsvcString add_name;
        str_ctor_cstr(&add_name, channel_name);
        ext_005A7320(target, &add_name, 0);
        str_dtor(&add_name);
    }

    MsvcString key;
    str_ctor_cstr(&key, channel_name);
    uint8_t** vtable = *reinterpret_cast<uint8_t***>(record);
    using VFuncU32 = uint32_t (__thiscall*)(void* self);
    uint32_t b = reinterpret_cast<VFuncU32>(vtable[vtable_offset / 4])(record);
    uint32_t a = reinterpret_cast<VFuncU32>(vtable[0x24 / 4])(record);
    ext_005A2F70(target, &key, a, b);
    str_dtor(&key);
}

void __thiscall fn_005EDAC0(void* self) {
    void* raw = ext_006A5C62(0x5C);
    void* record = (raw != nullptr) ? ext_0060C570(raw) : nullptr;

    lift_field<float>(record, 0x50) = 0.0f;
    lift_field<float>(record, 0x4C) = 0.0f;
    lift_field<float>(record, 0x48) = 0.0f;
    lift_field<uint8_t>(record, 0x58) = 1;
    lift_field<uint32_t>(record, 0x44) = 0;

    auto str_assign = reinterpret_cast<StrAssignFn>(mem_00924FDC);
    auto str_concat = reinterpret_cast<StrConcatCstrFn>(mem_00924ECC);
    auto str_dtor = reinterpret_cast<StrDtorFn>(mem_00924FF4);

    const MsvcString* src_name = reinterpret_cast<const MsvcString*>(reinterpret_cast<uint8_t*>(self) + 0x14);
    str_assign(reinterpret_cast<MsvcString*>(reinterpret_cast<uint8_t*>(record) + 0x20), src_name);

    MsvcString concat_tmp;
    const char* suffix = reinterpret_cast<const char*>(mem_00A9EE64);
    MsvcString* concat_res = str_concat(&concat_tmp, src_name, suffix);
    str_assign(reinterpret_cast<MsvcString*>(reinterpret_cast<uint8_t*>(record) + 0x04), concat_res);
    str_dtor(&concat_tmp);

    void* target = lift_field<void*>(self, 0x18C);
    register_hinge_channel(target, reinterpret_cast<const char*>(mem_00A8F2B4), record, 0x44);
    register_hinge_channel(target, reinterpret_cast<const char*>(mem_00A8F2B8), record, 0x48);

    ext_005A3500(target, record);
}
} // namespace lift_005EDAC0
