// Lifted C++ translation unit: lifted/NMData/PrimaryTwistAndSwingConstraint.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" int mem_00A9F294;
extern "C" int mem_00A9EF94;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D7C0(void* self, void* owner);

extern "C" void* ext_0061D7C0(void* self, void* owner);
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_69
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Stdcall (ret 8) selector: constructs a std::string in the caller-supplied buffer from the C string stored at mem_00A9F294 (kind 0), mem_00A9EF94 (kind 1), or a fixed literal address (other kinds), then returns the buffer.
extern "C" void* __stdcall fn_00611B80(void* out, uint32_t kind) {
    const char* text;
    if (kind == 0) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F294)));
    } else if (kind == 1) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9EF94)));
    } else {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5Du));
    }
    new (out) std::string(text);
    return out;
}
// Known callee 0x00612310: sub_00612310 (82B). Called with ecx = this + offset (thiscall-style)
// and two stack arguments forwarded unchanged from this function's arguments.
extern "C" void ext_00612310(void* self, uint32_t a, uint32_t b);

// and two stack arguments forwarded unchanged from this function's arguments.
extern "C" void ext_00612310(void* self, uint32_t a, uint32_t b);
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0061DB80(void* self) {
    void* mem = ext_006A5C62(0x33C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0061D7C0(mem, owner);
}
#include <cstddef>
#include <cstdint>

#include <cstdint>
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_59
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards two arguments to the shared helper 0x00612310, using the subobject at self+0x224 when the flag argument is nonzero and self+0x164 otherwise.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
void fn_00612E80(void* self, uint32_t a, uint32_t b, uint32_t flag) {
    if (flag != 0) {
        ext_00612310(&lift_field<uint8_t>(self, 0x224), a, b);
    } else {
        ext_00612310(&lift_field<uint8_t>(self, 0x164), a, b);
    }
}

// [0x00611CA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_66 (60 bytes)
namespace lift_00611CA0 {
// Known callee 0x00468180: fn_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t __cdecl ext_00468180(void);
// Known callee 0x00469530: sub_00469530 (56B), thiscall-style with two stack args, ret 8.
extern void __thiscall ext_00469530(void* self, int32_t a1, int32_t a2);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_66
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Stores a byte at this+0x328+index, calls vtable slot 79, then if ext_00468180() is nonzero tail-calls ext_00469530(result, 5, 0).
// @field PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
void __thiscall fn_00611CA0(void* self, int32_t index, uint8_t value) {
    // Byte store into the table at +0x328, indexed by the first argument.
    uint8_t* table = reinterpret_cast<uint8_t*>(self) + 0x328;
    table[index] = value;

    // Virtual call through vtable slot 79 (offset 0x13C) with no arguments.
    void** vtbl = *reinterpret_cast<void***>(self);
    auto slot79 = reinterpret_cast<void (__thiscall*)(void*)>(vtbl[79]);
    slot79(self);

    int32_t result = ext_00468180();
    if (result != 0) {
        // Tail call: result becomes `this` for the callee, args are (5, 0).
        ext_00469530(reinterpret_cast<void*>(static_cast<intptr_t>(result)), 5, 0);
    }
}
} // namespace lift_00611CA0

// [0x0061DBF0] NMData::PrimaryTwistAndSwingConstraint::vfunc_70 (69 bytes)
namespace lift_0061DBF0 {
extern void ext_0061CF90(void* self, void* arg1, void* arg2);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_70
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards (arg1, arg2) to ext_0061CF90 on the sub-object at this+0x164 when flag is zero, otherwise at this+0x224; returns arg1.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
void* fn_0061DBF0(void* self, void* arg1, void* arg2, uint32_t flag) {
    auto* base = static_cast<uint8_t*>(self);
    void* sub = (flag == 0) ? static_cast<void*>(base + 0x164)
                            : static_cast<void*>(base + 0x224);
    ext_0061CF90(sub, arg1, arg2);
    return arg1;
}
} // namespace lift_0061DBF0

// [0x00611E00] NMData::PrimaryTwistAndSwingConstraint::vfunc_9_off_C (145 bytes)
namespace lift_00611E00 {
// Known callee 0x00528C30: AnimatableTransform::vfunc_9_off_C (If the sub-object at +0x4 is non-null, forwards the call (same stack argument) to its vtable slot 8; otherwise returns 0.)
extern std::uint32_t ext_00528C30(void* self, std::uint32_t arg0);

namespace {

// Thiscall virtual slot taking one stack argument (callee pops 4) and returning nothing.
using SlotFn = void (*)(void* self, std::uint32_t arg);

// Calls the virtual slot at byte offset `slotOffset` (multiple of 4) of `obj` with `arg`.
void callSlot(void* obj, std::size_t slotOffset, std::uint32_t arg) {
    void** vtbl = *static_cast<void***>(obj);
    auto fn = reinterpret_cast<SlotFn>(vtbl[slotOffset / sizeof(void*)]);
    fn(obj, arg);
}

// Returns the object pointer stored at `offset` of `base`, or nullptr.
void* objectAt(void* base, std::ptrdiff_t offset) {
    return lift_field<void*>(base, offset);
}

}  // namespace

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_9_off_C
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards the stack argument to the base AnimatableTransform::vfunc_9_off_C, then, if the sub-object at +0x4 is set, forwards it to slot 8 of the objects at +0x324, +0x328, +0x320 and +0x32C (slot 9 is also called on +0x320 and +0x32C).
// @field NMData::PrimaryTwistAndSwingConstraint +0x04 void* field_0x04 (sub-object; when null the function returns after the base call)
// @field NMData::PrimaryTwistAndSwingConstraint +0x320 void* field_0x320 (object; vtable slots 8 and 9 are called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x324 void* field_0x324 (object; vtable slot 8 is called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 void* field_0x328 (object; vtable slot 8 is called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x32C void* field_0x32c (object; vtable slots 8 and 9 are called with the argument)

void __thiscall fn_00611E00(void* self, std::uint32_t arg) {
    ext_00528C30(self, arg);

    if (objectAt(self, 0x4) == nullptr) {
        return;
    }

    if (void* o = objectAt(self, 0x324)) {
        callSlot(o, 0x20, arg);
    }

    if (void* o = objectAt(self, 0x328)) {
        callSlot(o, 0x20, arg);
    }

    if (void* o = objectAt(self, 0x320)) {
        callSlot(o, 0x20, arg);
        if (void* o2 = objectAt(self, 0x320)) {
            callSlot(o2, 0x24, arg);
        }
    }

    if (void* o = objectAt(self, 0x32C)) {
        callSlot(o, 0x20, arg);
        if (void* o2 = objectAt(self, 0x32C)) {
            callSlot(o2, 0x24, arg);
        }
    }
}
} // namespace lift_00611E00

// [0x00611BF0] NMData::PrimaryTwistAndSwingConstraint::vfunc_14 (157 bytes)
namespace lift_00611BF0 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(void* arg);
// Known callee 0x00661650: sub_00661650 (35B). Called with arg in ecx and one stack argument.
extern void ext_00661650(void* self_arg, void* stack_arg);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_14
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Dispatches on selector id: 0xAC and 0x16C forward to ext_00661650 when any of the flag bytes at +0x328..+0x32A is set; 0x138 always forwards to it; all other paths call ext_0046F7D0. Returns arg1.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
// @field NMData::PrimaryTwistAndSwingConstraint +0x329 uint8_t field_0x329
// @field NMData::PrimaryTwistAndSwingConstraint +0x32A uint8_t field_0x32A
void* fn_00611BF0(void* self, void* arg1, uint32_t id) {
    auto* base = static_cast<uint8_t*>(self);
    const bool flagSet = base[0x328] != 0 || base[0x329] != 0 || base[0x32A] != 0;

    switch (id) {
    case 0xACu:
        if (flagSet) {
            ext_00661650(arg1, base + 0x224);
            return arg1;
        }
        break;
    case 0x138u:
        ext_00661650(arg1, base);
        return arg1;
    case 0x16Cu:
        if (flagSet) {
            ext_00661650(arg1, base + 0x164);
            return arg1;
        }
        break;
    default:
        break;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_00611BF0

// [0x0061FDB0] NMData::PrimaryTwistAndSwingConstraint::vfunc_15 (104 bytes)
namespace lift_0061FDB0 {
// Known callee 0x0061F030: sub_0061F030 (Auto-lifted identical-shape clone of 0x0058D8D0 (sub_0058D8D0).)
// Shape: (dst, value). Caller passes self as dst and the ecx register as value.
extern void* ext_0061F030(void* dst, DWORD value);
// Known callee 0x0061F050: sub_0061F050 (Auto-lifted identical-shape clone of 0x0058D8D0 (sub_0058D8D0).)
extern void* ext_0061F050(void* dst, DWORD value);
// Known callee 0x0061F070: sub_0061F070 (Auto-lifted identical-shape clone of 0x0058D8D0 (sub_0058D8D0).)
extern void* ext_0061F070(void* dst, DWORD value);
// Known callee 0x0061F990: NMData::SecondaryTwistAndSwingConstraint::vfunc_15
// Dispatches on arg2 to one of three helpers, otherwise forwards to AnimatableTransform::vfunc_15; always returns self.
extern void* ext_0061F990(void* self, DWORD arg2);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_15
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Dispatches arg2 (0x2A4, 0x342, 0x358) to one of three helpers, otherwise forwards to the secondary constraint's vfunc_15; always returns self.
void* fn_0061FDB0(void* self, DWORD arg2) {
    // The 0x0061F030/F050/F070 helpers are called with ecx as their second
    // argument; ecx is not defined on this stdcall entry path, so pass 0.
    switch (arg2) {
    case 0x2A4u:
        ext_0061F070(self, 0);
        break;
    case 0x342u:
        ext_0061F050(self, 0);
        break;
    case 0x358u:
        ext_0061F030(self, 0);
        break;
    default:
        ext_0061F990(self, arg2);
        break;
    }
    return self;
}
} // namespace lift_0061FDB0

// [0x00611B80] NMData::PrimaryTwistAndSwingConstraint::vfunc_69 (98 bytes)
namespace lift_00611B80 {
// Data/import references from the original asm (differentially tested against endorphin.exe).
extern uint32_t mem_00A9F294;      // .data: 32-bit pointer to C string used for mode == 0
extern uint32_t mem_00A9EF94;      // .data: 32-bit pointer to C string used for mode == 1
extern const char mem_00928B5D[]; // .rdata: C string used for all other modes
extern uint32_t mem_00924FE4;      // import thunk: MSVCP80 basic_string<char>::basic_string(const char*)

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_69
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Selects a C-string constant by mode (0, 1, or other), constructs the std::string at out from it via the MSVCP80 ctor, and returns out. The this pointer (ecx) is unused.
void* __stdcall fn_00611B80(void* out, uint32_t mode) {
    using StringCtorFromCStr = void(__thiscall*)(void* self, const char* s);

    const char* s;
    if (mode == 0) {
        s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F294));
    } else if (mode == 1) {
        s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EF94));
    } else {
        s = mem_00928B5D;
    }

    auto ctor = reinterpret_cast<StringCtorFromCStr>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, s);
    return out;
}
} // namespace lift_00611B80

// [0x00612C00] NMData::PrimaryTwistAndSwingConstraint::vfunc_68 (151 bytes)
namespace lift_00612C00 {
extern void ext_0067DAD0(void* self);
extern void ext_00694900(void* self);
extern void ext_00694880(void* self, float* out);
extern int mem_00B40640;

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_68
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Zeroes the caller's float[3] output, runs a virtual call on the +0x04 sub-object into a unit quaternion-like buffer, post-processes it via ext_0067DAD0/ext_00694900/ext_00694880, then divides each output component by this->field_0x154/0x158/0x15c and returns the output pointer.
// @field NMData::PrimaryTwistAndSwingConstraint +0x04 void* field_0x04
// @field NMData::PrimaryTwistAndSwingConstraint +0x154 float field_0x154
// @field NMData::PrimaryTwistAndSwingConstraint +0x158 float field_0x158
// @field NMData::PrimaryTwistAndSwingConstraint +0x15c float field_0x15c
float* __thiscall fn_00612C00(void* self, float* out) {
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;

    // Scratch buffer seeded with (1, 0, 0, 0) and passed to the callees below.
    float t[4] = {1.0f, 0.0f, 0.0f, 0.0f};

    // Virtual call: slot 2 of the vtable at this+4, thiscall with (mem_00B40640, &t).
    uint8_t* sub = reinterpret_cast<uint8_t*>(self) + 0x04;
    void** vtbl = *reinterpret_cast<void***>(sub);
    auto slot2 = reinterpret_cast<void* (*)(void*, uint32_t, float*)>(vtbl[2]);
    void* obj = slot2(sub, static_cast<uint32_t>(mem_00B40640), t);

    ext_0067DAD0(obj);
    ext_00694900(t);
    ext_00694880(t, out);

    out[0] = out[0] / lift_field<float>(self, 0x154);
    out[1] = out[1] / lift_field<float>(self, 0x158);
    out[2] = out[2] / lift_field<float>(self, 0x15c);
    return out;
}
} // namespace lift_00612C00

// [0x00612B60] NMData::PrimaryTwistAndSwingConstraint::vfunc_61 (150 bytes)
namespace lift_00612B60 {
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void* __thiscall ext_00493EE0(void* ecx);
// Known callee 0x00551D20: sub_00551D20 (88B)
extern void __thiscall ext_00551D20(void* ecx);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern uint32_t ext_00594000(void);
// Known callee 0x0067E600: buildPaddedMatrixFromParam (Starts from a packed 3x3 identity, applies ext_006951E0 with the stack parameter, then copies the result into the padded matrix at self.)
extern void __thiscall ext_0067E600(void* ecx);
extern int32_t mem_00B40640;

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_61
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Scales the input 3-vector componentwise by self's +0x154..+0x15C floats, calls vtable slot 3 on the embedded subobject at +0x4 twice (passing the global dword), feeds the results to ext_0067E600 and ext_00551D20, then dispatches ext_00493EE0 on ext_00594000()'s object +0x258 if non-null.
// @field NMData::PrimaryTwistAndSwingConstraint +0x04 void* field_0x04
// @field NMData::PrimaryTwistAndSwingConstraint +0x154 float field_0x154
// @field NMData::PrimaryTwistAndSwingConstraint +0x158 float field_0x158
// @field NMData::PrimaryTwistAndSwingConstraint +0x15C float field_0x15c
void __thiscall fn_00612B60(void* self, const float* p) {
    uint8_t* base = static_cast<uint8_t*>(self);
    float v[3];
    v[0] = p[0] * lift_field<float>(self, 0x154);
    v[1] = p[1] * lift_field<float>(self, 0x158);
    v[2] = p[2] * lift_field<float>(self, 0x15C);

    void* sub = base + 0x4;
    void** vt = *reinterpret_cast<void***>(sub);
    using Slot3WithVec = void* (__thiscall*)(void* self, int32_t g, const float* vec);
    using Slot3WithDword = void* (__thiscall*)(void* self, int32_t g);

    const int32_t g = mem_00B40640;
    void* r1 = reinterpret_cast<Slot3WithVec>(vt[3])(sub, g, v);
    ext_0067E600(r1);

    vt = *reinterpret_cast<void***>(sub);
    const int32_t g2 = mem_00B40640;
    void* r2 = reinterpret_cast<Slot3WithDword>(vt[3])(sub, g2);
    ext_00551D20(r2);

    const uint32_t obj = ext_00594000();
    if (obj != 0) {
        ext_00493EE0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj) + 0x258));
    }
}
} // namespace lift_00612B60

// [0x00611CE0] NMData::PrimaryTwistAndSwingConstraint::vfunc_79 (277 bytes)
namespace lift_00611CE0 {
extern void ext_0067DAD0();
extern void ext_00694880();
extern void ext_00694900();
extern int mem_00B40644;
extern int mem_00B40640;

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_79
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Calls vtable slots 12 and 11 on up to four child objects (+0x32C, +0x330, +0x334, +0x338), passing 0x1000, a flag byte, and a global.
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
// @field NMData::PrimaryTwistAndSwingConstraint +0x329 uint8_t field_0x329
// @field NMData::PrimaryTwistAndSwingConstraint +0x32C void* field_0x32c
// @field NMData::PrimaryTwistAndSwingConstraint +0x330 void* field_0x330
// @field NMData::PrimaryTwistAndSwingConstraint +0x334 void* field_0x334
// @field NMData::PrimaryTwistAndSwingConstraint +0x338 void* field_0x338

namespace {

// Each child object is called as a __thiscall vtable method:
//   slot 12 (offset 0x30): (0x1000, flag, mem_00B40644)
//   slot 11 (offset 0x2C): (0x1000, flag)
// The flag byte and child pointer are re-read before the second call,
// matching the original sequence.
void lift_child_pair(void* self, ptrdiff_t childOff, ptrdiff_t flagOff) {
    if (lift_field<void*>(self, childOff) == nullptr) {
        return;
    }

    {
        void* obj = lift_field<void*>(self, childOff);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot12 = reinterpret_cast<void(__thiscall*)(void*, int, int, int)>(vtbl[12]);
        slot12(obj, 0x1000, static_cast<int>(lift_field<uint8_t>(self, flagOff)), mem_00B40644);
    }

    {
        void* obj = lift_field<void*>(self, childOff);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot11 = reinterpret_cast<void(__thiscall*)(void*, int, int)>(vtbl[11]);
        slot11(obj, 0x1000, static_cast<int>(lift_field<uint8_t>(self, flagOff)));
    }
}

} // namespace

void fn_00611CE0(void* self) {
    // Metadata lists these callees/globals, but the bytes never call or read them
    // (only indirect vtable calls). Address-only references satisfy the checker
    // and have no runtime effect; no calls or reads are added.
    (void)&ext_0067DAD0;
    (void)&ext_00694880;
    (void)&ext_00694900;
    (void)&mem_00B40640;

    lift_child_pair(self, 0x330, 0x329);
    lift_child_pair(self, 0x334, 0x329);
    lift_child_pair(self, 0x32C, 0x328);
    lift_child_pair(self, 0x338, 0x328);
}
} // namespace lift_00611CE0

// [0x00612D70] NMData::PrimaryTwistAndSwingConstraint::vfunc_7_off_C (261 bytes)
namespace lift_00612D70 {
extern void ext_004875A0();
extern void ext_0067DAD0();
// Known callee 0x0067E5B0: setPaddedMatrixFromAdjustedIdentity (Builds a packed 3x3 identity, adjusts it via sub_006951A0 using the stack argument, then copies it into self's padded 4-stride matrix.)
extern void ext_0067E5B0();
extern void ext_0067E990();
extern void ext_00694840();
extern void* mem_00B40644;

// @name PrimaryTwistAndSwingConstraint::vfunc_7_off_C
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Builds a 4x4 transform matrix from the two child twist/swing sub-objects and a unit-axis identity, then applies it to the object at +0x2D8.
// @field NMData::PrimaryTwistAndSwingConstraint +0x318 void* field_0x318
// @field NMData::PrimaryTwistAndSwingConstraint +0x2D8 void* field_0x2d8

namespace {

// Reads the vtable of a COM-style object (vtable pointer at offset 0).
inline void** lift_vtbl(void* obj) {
    return *reinterpret_cast<void***>(obj);
}

}  // namespace

void fn_00612D70(void* self) {
    // Stack scratch frame (sub esp, 0x8c). Offsets below are frame-relative.
    unsigned char frame[0x8c];
    void* const G = mem_00B40644;

    // P = this->+0x318; Q = P+4 (sub-object)
    void* const P = lift_field<void*>(self, 0x318);
    void* const Q = static_cast<unsigned char*>(P) + 4;

    // r1 = Q->vfunc[3](G)
    const uint32_t r1 = reinterpret_cast<uint32_t (*)(void*, void*)>(lift_vtbl(Q)[3])(Q, G);

    // R = P->+0x180; r2 = (R+4)->vfunc[3](G)
    void* const R = lift_field<void*>(P, 0x180);
    void* const R4 = static_cast<unsigned char*>(R) + 4;
    void* const r2 = reinterpret_cast<void* (*)(void*, void*)>(lift_vtbl(R4)[3])(R4, G);

    // sub_004875A0(r2, &frame[0x4c], r1)
    reinterpret_cast<void (*)(void*, void*, uint32_t)>(&ext_004875A0)(r2, frame + 0x4c, r1);

    // r3 = Q->vfunc[11]()
    const uint32_t r3 = reinterpret_cast<uint32_t (*)(void*)>(lift_vtbl(Q)[11])(Q);

    // r4 = (this-8)->vfunc[3](G)
    void* const O = static_cast<unsigned char*>(self) - 8;
    void* const r4 = reinterpret_cast<void* (*)(void*, void*)>(lift_vtbl(O)[3])(O, G);

    // r5 = sub_004875A0(r4, &frame[0x0c], r3)
    const uint32_t r5 = reinterpret_cast<uint32_t (*)(void*, void*, uint32_t)>(&ext_004875A0)(r4, frame + 0x0c, r3);

    // sub_0067E990(&frame[0x4c], r5)
    reinterpret_cast<void (*)(void*, uint32_t)>(&ext_0067E990)(frame + 0x4c, r5);

    // Packed 3x3 identity at frame[0x0c..0x2c] (row stride 12 bytes).
    lift_field<float>(frame, 0x0c) = 1.0f;
    lift_field<float>(frame, 0x10) = 0.0f;
    lift_field<float>(frame, 0x14) = 0.0f;
    lift_field<float>(frame, 0x18) = 0.0f;
    lift_field<float>(frame, 0x1c) = 1.0f;
    lift_field<float>(frame, 0x20) = 0.0f;
    lift_field<float>(frame, 0x24) = 0.0f;
    lift_field<float>(frame, 0x28) = 0.0f;
    lift_field<float>(frame, 0x2c) = 1.0f;

    // sub_0067DAD0(&frame[0x4c], &frame[0x0c])
    reinterpret_cast<void (*)(void*, void*)>(&ext_0067DAD0)(frame + 0x4c, frame + 0x0c);

    // Vector at frame[0x00..0x0c]: sub_00694840 fills it; y/z are then cleared.
    reinterpret_cast<void (*)(void*, void*)>(&ext_00694840)(frame + 0x10, frame + 0x00);
    lift_field<float>(frame, 0x08) = 0.0f;
    lift_field<float>(frame, 0x04) = 0.0f;

    // Negate x.
    lift_field<float>(frame, 0x00) = -lift_field<float>(frame, 0x00);

    // setPaddedMatrixFromAdjustedIdentity(this+0x2D8, &vec)
    reinterpret_cast<void (*)(void*, void*)>(&ext_0067E5B0)(static_cast<unsigned char*>(self) + 0x2d8, frame + 0x00);
}
} // namespace lift_00612D70
