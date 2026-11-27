// Lifted C++ translation unit: lifted/NMData/MagnetJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096AFE8.
extern "C" const char mem_0096AFE8[];
#include <cstddef>
#include <cstdint>

#include <cstdint>
// Original (ret 4): calls vtable slot 59 (+0xEC) on self with (arg, 0), ignores its result, returns arg.
// The original also pushes the saved esi as a stack word; that word is not modelled here.
// @name NMData::MagnetJointData::vfunc_8
// @class NMData::MagnetJointData
// @summary Calls vtable slot 59 on self with (arg, 0) and returns arg.
void* fn_005F0D20(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0);
    using VFn = void (*)(void* obj, void* a, int flag);
    reinterpret_cast<VFn>(vtbl[59])(self, arg, 0);
    return arg;
}

// [0x005F0FA0]
namespace lift_005F0FA0 {
// @name NMData::MagnetJointData::vfunc_17_off_C
// @class NMData::MagnetJointData
// @summary Allocates and constructs a 0x318-byte object (likely MagnetJointData) and copies a flag from TransformInterface::vfunc_0x20 to offset +0x148.
// @field NMData::MagnetJointData +0x04 void* vptr_TransformInterface
// @field NMData::MagnetJointData +0x148 uint8_t field_0x148


extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_005F0AE0(void* self);

extern void* __thiscall fn_005F0FA0(uint8_t* self_off_c) {
    uint8_t* obj = static_cast<uint8_t*>(ext_006A5C62(0x318));
    uint8_t* result = nullptr;
    if (obj != nullptr) {
        result = static_cast<uint8_t*>(ext_005F0AE0(obj));
    }

    uint8_t* transform_iface = self_off_c - 0x8;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(transform_iface);
    using VFunc20 = uint8_t(__thiscall*)(void*);
    VFunc20 vfunc_20 = *reinterpret_cast<VFunc20*>(vtable + 0x20);
    uint8_t flag = vfunc_20(transform_iface);

    result[0x148] = flag;
    return result;
}
} // namespace lift_005F0FA0

// [0x005F0D40]
namespace lift_005F0D40 {
// C string literal at VA 0x0096AFE8.
extern const char mem_0096AFE8[];
// MSVCP80 import slot at VA 0x00924FE4: holds the address of
// std::basic_string<char>::basic_string(const char*, const allocator&).
extern void* mem_00924FE4;

// Original (ret 4): constructs a std::string from the literal at 0x0096AFE8 in the
// buffer whose pointer is the stack argument, then returns that pointer. The
// original also pushes a saved-esi word and a zero word as extra stack words;
// those are not modelled here (same convention as MagnetJointData::vfunc_8).
// @name NMData::MagnetJointData::vfunc_59
// @class NMData::MagnetJointData
// @summary Constructs a std::string from the literal at 0x0096AFE8 into the caller-supplied buffer and returns that buffer.
void* fn_005F0D40(void* dst) {
    using StrCtorFn = void(__thiscall*)(void* self, const char* s, const void* alloc);
    StrCtorFn ctor = *reinterpret_cast<StrCtorFn*>(&mem_00924FE4);
    ctor(dst, mem_0096AFE8, nullptr);
    return dst;
}
} // namespace lift_005F0D40

// [0x005EE590] NMData::MagnetJointData::vfunc_33 (104 bytes)
namespace lift_005EE590 {
// @name NMData::MagnetJointData::vfunc_33
// @class NMData::MagnetJointData
// @summary Auto-lifted identical-shape clone of 0x005EE2F0 (NMData::SkeletalJointData::vfunc_33).
// @field NMData::MagnetJointData +0x17C void* field_0x17c
// @field NMData::MagnetJointData +0x180 void* field_0x180
// @field NMData::MagnetJointData +0x184 void* field_0x184
// @field NMData::MagnetJointData +0x2FC uint32_t field_0x2FC
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
void fn_005EE590(void* self) {
    using VSlot33 = void(__thiscall*)(void* self);

    auto invoke_slot33 = [](void* obj) {
        void** vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<VSlot33>(vtable[33])(obj);  // vtable offset 0x84
    };

    ext_005EDFD0(self);

    invoke_slot33(lift_field<void*>(self, 0x17C));
    invoke_slot33(lift_field<void*>(self, 0x180));
    invoke_slot33(lift_field<void*>(self, 0x184));

    lift_field<uint32_t>(self, 0x2FC) = 0x0;

    ext_00587920(self, lift_field<void*>(self, 0x180), 0);
    ext_00587920(lift_field<void*>(self, 0x17C), lift_field<void*>(self, 0x184), 0);
}
} // namespace lift_005EE2F0
} // namespace lift_005EE590

// [0x005E2AB0] NMData::MagnetJointData::vfunc_54 (128 bytes)
namespace lift_005E2AB0 {
// Callees (signatures inferred from the call sites: __thiscall(this, arg) / cdecl(arg)).
extern void ext_005B5780(void* self, uint32_t arg);   // sub_005B5780: static-object init, called with size 0xC
extern void ext_005E0380(void* self, void* arg);      // sub_005E0380: called on this with &mem_00B45E10
extern void ext_006A6C87(void* fn);                   // sub_006A6C87: registers 0x0091E470 (atexit-style)

// Globals
extern uint8_t mem_00B45E10;   // static object returned by this function
extern uint8_t mem_00B45E5C;   // init-guard byte; bit 0 = initialized
extern uint8_t mem_00B45E54;   // cached byte copied from this->field_0x178

// Metadata-only references: listed in CALLEES / RDATA_CONSTANTS but never called or read
// by the 128-byte disassembly. Taking the address has no runtime effect.
extern void ext_0053F5F0(int* out);
extern void ext_00587920();
extern void ext_005F2970();
extern void ext_0063EFE0(uint8_t* self, const char* name);
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;

// @name NMData::MagnetJointData::vfunc_54
// @class NMData::MagnetJointData
// @summary Lazily initializes the static object at 0x00B45E10 once, caches this->field_0x178 into 0x00B45E54, and returns the static object.
// @field NMData::MagnetJointData +0x178 uint8_t field_0x178
void* fn_005E2AB0(void* self) {
    // Address-only references to metadata-listed symbols (no call / no read).
    (void)&ext_0053F5F0;
    (void)&ext_00587920;
    (void)&ext_005F2970;
    (void)&ext_0063EFE0;
    (void)&mem_00924ECC;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    // One-time initialization guarded by bit 0 of mem_00B45E5C.
    if ((mem_00B45E5C & 1u) == 0) {
        mem_00B45E5C |= 1u;
        ext_005B5780(&mem_00B45E10, 0xCu);
        // 0x0091E470 is a function address; it is passed through unchanged.
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x0091E470u)));
    }

    ext_005E0380(self, &mem_00B45E10);

    mem_00B45E54 = lift_field<uint8_t>(self, 0x178);
    return &mem_00B45E10;
}
} // namespace lift_005E2AB0

// [0x005F3370] NMData::MagnetJointData::vfunc_21 (364 bytes)
namespace lift_005F3370 {
// Callees (signatures taken from the call sites: stack args pushed in order, callee/caller cleanup as observed).
// NMData::NullRelationshipData::vfunc_21: thiscall(this, arg), one stack arg, callee cleans (ret 4).
extern void __thiscall ext_005F2970(void* self, void* arg);
// sub_0063EFE0: thiscall(this=arg, const char* name), returns uint32 (found item or sentinel), callee cleans.
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
// parseIntFromStringProp: cdecl(int* out, uint32_t* key); caller cleans 8 bytes (add esp,8 after the call).
extern void ext_0053F5F0(int* out, uint32_t* key);
// sub_00587920: thiscall(this, a, b), two stack args, callee cleans (ret 8).
extern void __thiscall ext_00587920(void* self, void* a, int b);

// .rdata string literals referenced by the function (contents not recovered here).
extern const char mem_0096AFD8[];
extern const char mem_0096B500[];
extern const char mem_0096B4F4[];
extern const char mem_0096B938[];

// MSVCP80 import slots (IAT entries holding function pointers).
// operator+(const std::string& lhs, const char* rhs): sret-by-hidden-pointer, returns sret pointer.
extern void* (*mem_00924ECC)(void* sret, const void* lhs, const char* rhs);
// std::basic_string::basic_string(const char*) (thiscall).
extern void (*mem_00924FE4)(void* self, const char* s);
// std::basic_string::~basic_string() (thiscall).
extern void (*mem_00924FF4)(void* self);

// Opaque storage for a temporary MSVCP80 std::string (28 bytes on x86, padded).
struct alignas(8) StringStorage {
    uint8_t bytes[32];
};

// Virtual slot invocation: thiscall(obj, arg) via vtable byte offset `slot_off`.
using VSlot1Fn = void(__thiscall*)(void* self, void* arg);
static inline void call_vslot1(void* obj, size_t slot_off, void* arg) {
    void** vt = *reinterpret_cast<void***>(obj);
    reinterpret_cast<VSlot1Fn>(vt[slot_off / sizeof(void*)])(obj, arg);
}

// @name NMData::MagnetJointData::vfunc_21
// @class NMData::MagnetJointData
// @summary Calls NullRelationshipData::vfunc_21(arg), looks up a string-keyed item in the (+0x17c) list, parses an int into +0x2FC, notifies the +0x17c/+0x180/+0x184 sub-objects with std::string keys built from +0x14 and literals, then sub_00587920 on +0x180 and +0x17c.
// @field NMData::MagnetJointData +0x14 std::string field_0x14
// @field NMData::MagnetJointData +0x17C void* field_0x17c
// @field NMData::MagnetJointData +0x180 void* field_0x180
// @field NMData::MagnetJointData +0x184 void* field_0x184
// @field NMData::MagnetJointData +0x2FC uint32_t field_0x2FC
extern void __thiscall fn_005F3370(void* self, void* arg) {
    uint8_t* const self_bytes = static_cast<uint8_t*>(self);

    ext_005F2970(self, arg);

    uint32_t found = ext_0063EFE0(arg, mem_0096AFD8);
    int out = 0;
    ext_0053F5F0(&out, &found);
    lift_field<uint32_t>(self, 0x2FC) = static_cast<uint32_t>(out);

    // Object A = field_0x17c: vslot 0x54(arg).
    call_vslot1(lift_field<void*>(self, 0x17C), 0x54, arg);

    // tmp1 = field_0x14 + "lit1"; A->vslot 0x5C(tmp1); destroy tmp1.
    StringStorage tmp1{};
    mem_00924ECC(&tmp1, self_bytes + 0x14, mem_0096B500);
    call_vslot1(lift_field<void*>(self, 0x17C), 0x5C, &tmp1);
    mem_00924FF4(&tmp1);

    // Object C = field_0x180: vslot 0x54(arg).
    call_vslot1(lift_field<void*>(self, 0x180), 0x54, arg);

    // tmp2 = field_0x14 + "lit2"; C->vslot 0x5C(tmp2); destroy tmp2.
    StringStorage tmp2{};
    mem_00924ECC(&tmp2, self_bytes + 0x14, mem_0096B4F4);
    call_vslot1(lift_field<void*>(self, 0x180), 0x5C, &tmp2);
    mem_00924FF4(&tmp2);

    // Object D = field_0x184: vslot 0x54(arg).
    call_vslot1(lift_field<void*>(self, 0x184), 0x54, arg);

    // tmp3 = "lit3"; D->vslot 0x5C(tmp3); destroy tmp3.
    StringStorage tmp3{};
    mem_00924FE4(&tmp3, mem_0096B938);
    call_vslot1(lift_field<void*>(self, 0x184), 0x5C, &tmp3);
    mem_00924FF4(&tmp3);

    // sub_00587920(this=self, C, 0) then sub_00587920(this=A, D, 0).
    ext_00587920(self, lift_field<void*>(self, 0x180), 0);
    ext_00587920(lift_field<void*>(self, 0x17C), lift_field<void*>(self, 0x184), 0);
}
} // namespace lift_005F3370

// [0x005EC320]
namespace lift_005EC320 {
// Callees (x86 thiscall/cdecl conventions are preserved by argument order here).
// ext_006404E0: thiscall(self=arg, const char* literal) -> returns object pointer.
extern void* __thiscall ext_006404E0(void* self, const void* s);
// ext_005EB5A0 = NMData::RelationshipData::vfunc_22: thiscall(self, void* arg), result unused.
extern void __thiscall ext_005EB5A0(void* self, void* arg);
// ext_00640110: thiscall(self, const void* value) -> returns object pointer.
extern void* __thiscall ext_00640110(void* self, const void* value);
// Known callee 0x00640A80: ResetChildNameFromBool. Caller pushes (obj, flag).
extern void ext_00640A80(void* obj, uint8_t flag);
// Known callee 0x00640AA0: ResetChildFromFormattedId. Caller pushes (a, b).
extern void ext_00640AA0(void* a, uint32_t b);

// Data referenced by the original asm.
extern const char mem_0096AFE8[];   // literal pushed at 0x005EC329
extern const char mem_0096AFD8[];   // literal pushed at 0x005EC33F
extern uint32_t   mem_00A9F724;     // u32 value 0x0098573C loaded at 0x005EC39F / 0x005EC3DA

// Vtable call shapes: slot index = byte offset / 4.
using VFnThisArg  = void    (*)(void* self, void* arg);   // vtable +0x58 (slot 22)
using VFnThisBool = uint8_t (*)(void* self);              // vtable +0x70 (slot 28)

// @name NMData::MagnetJointData::vfunc_22
// @class NMData::MagnetJointData
// @summary Initialises three child objects from literals, resets the name of the 0x190 peer's flag-dependent child, and returns arg.
// @field NMData::MagnetJointData +0x178 uint8_t field_0x178
// @field NMData::MagnetJointData +0x17C void* field_0x17c
// @field NMData::MagnetJointData +0x180 void* field_0x180
// @field NMData::MagnetJointData +0x184 void* field_0x184
// @field NMData::MagnetJointData +0x190 void* field_0x190
// @field NMData::MagnetJointData +0x2FC uint32_t field_0x2FC
void* fn_005EC320(void* self, void* arg) {
    void* obj = ext_006404E0(arg, mem_0096AFE8);
    ext_005EB5A0(self, obj);

    void* r = ext_00640110(obj, mem_0096AFD8);
    ext_00640AA0(r, lift_field<uint32_t>(self, 0x2FC));

    // Three child objects: each vtable slot 22 is invoked with (obj).
    {
        void* child = lift_field<void*>(self, 0x17C);
        void** vt = *reinterpret_cast<void***>(child);
        reinterpret_cast<VFnThisArg>(vt[22])(child, obj);
    }
    {
        void* child = lift_field<void*>(self, 0x180);
        void** vt = *reinterpret_cast<void***>(child);
        reinterpret_cast<VFnThisArg>(vt[22])(child, obj);
    }
    {
        void* child = lift_field<void*>(self, 0x184);
        void** vt = *reinterpret_cast<void***>(child);
        reinterpret_cast<VFnThisArg>(vt[22])(child, obj);
    }

    void* peer = lift_field<void*>(self, 0x190);
    if (peer != nullptr) {
        void** vt = *reinterpret_cast<void***>(peer);
        bool changed = reinterpret_cast<VFnThisBool>(vt[28])(peer) != 0;
        if (!changed) {
            // Re-check peer's flag against ours only when the virtual call reported no change.
            changed = lift_field<uint8_t>(peer, 0x178) != lift_field<uint8_t>(self, 0x178);
        }
        if (changed) {
            void* e = ext_00640110(obj, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F724)));
            ext_00640A80(e, lift_field<uint8_t>(self, 0x178));
        }
    }

    return arg;
}
} // namespace lift_005EC320
