// Lifted C++ translation unit: lifted/NMData/MagnetJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096AFE8.
extern "C" const char mem_0096AFE8[];

// [0x005F0D20] NMData::MagnetJointData::vfunc_8 (32 bytes)
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
