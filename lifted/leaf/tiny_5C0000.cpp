// Lifted C++ translation unit: lifted/leaf/tiny_5C0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_005B2110(void* self);
extern "C" void __fastcall ext_005B2130(void* self);
extern "C" void __fastcall ext_00647F70(void* self);
extern "C" void __fastcall ext_00647CB0(void* self);
extern "C" void __fastcall ext_00647CE0(void* self);
extern "C" void __fastcall ext_00647D30(void* self);
extern "C" void __fastcall ext_00647D60(void* self);
extern "C" void __fastcall ext_00647DB0(void* self);
extern "C" void __fastcall ext_00647DE0(void* self);
extern "C" void __fastcall ext_00647E20(void* self);
extern "C" void __fastcall ext_00647E40(void* self);
extern "C" void __fastcall ext_00647E60(void* self);
extern "C" void __fastcall ext_00647E80(void* self);
extern "C" void __fastcall ext_00647EA0(void* self);
extern "C" void __fastcall ext_00647EC0(void* self);
extern "C" void __fastcall ext_00647EE0(void* self);
#include <cstdint>

// [0x005C3640] sub_005C3640 (5 bytes)
// @name VirtualSlot27Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 27 (offset +0x6C) with the same this pointer.
// @field VTable +0x6C void* slot27
void fn_005C3640(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x6C]      ; tail-jump to vtable slot 27 (0x6C / 4 on x86), this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[27]);
    target(self);
}

// [0x005C3650] sub_005C3650 (8 bytes)
// @name sub_005C3650
// @summary Virtual dispatch thunk: forwards to vtable slot at +0xF4.
extern "C" void __fastcall fn_005C3650(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0xF4);
    target(self);
}

// [0x005CE8B0] sub_005CE8B0 (8 bytes)
// @name sub_005CE8B0
// @summary This-adjustor thunk: adjusts `this` by +0x24 and tail-calls 0x005B2110.
extern "C" void __fastcall fn_005CE8B0(void* self) {
    ext_005B2110(static_cast<char*>(self) + 0x24);
}

// [0x005CE8C0] sub_005CE8C0 (8 bytes)
// @name sub_005CE8C0
// @summary This-adjustor thunk: adjusts `this` by +0x24 and tail-calls sub_005B2130.
extern "C" void __fastcall fn_005CE8C0(void* self) {
    ext_005B2130(static_cast<char*>(self) + 0x24);
}

// [0x005CE930] sub_005CE930 (11 bytes)
// @name sub_005CE930
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647F70.
extern "C" void __fastcall fn_005CE930(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647F70(delegate_obj);
}

// [0x005CE960] sub_005CE960 (11 bytes)
// @name sub_005CE960
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647CB0.
extern "C" void __fastcall fn_005CE960(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647CB0(delegate_obj);
}

// [0x005CE970] sub_005CE970 (11 bytes)
// @name sub_005CE970
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647CE0.
extern "C" void __fastcall fn_005CE970(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647CE0(delegate_obj);
}

// [0x005CE980] sub_005CE980 (11 bytes)
// @name sub_005CE980
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647D30.
extern "C" void __fastcall fn_005CE980(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647D30(delegate_obj);
}

// [0x005CE990] sub_005CE990 (11 bytes)
// @name sub_005CE990
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647D60.
extern "C" void __fastcall fn_005CE990(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647D60(delegate_obj);
}

// [0x005CE9A0] sub_005CE9A0 (11 bytes)
// @name sub_005CE9A0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647DB0.
extern "C" void __fastcall fn_005CE9A0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647DB0(delegate_obj);
}

// [0x005CE9B0] sub_005CE9B0 (11 bytes)
// @name sub_005CE9B0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647DE0.
extern "C" void __fastcall fn_005CE9B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647DE0(delegate_obj);
}

// [0x005CE9C0] sub_005CE9C0 (11 bytes)
// @name sub_005CE9C0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E20.
extern "C" void __fastcall fn_005CE9C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647E20(delegate_obj);
}

// [0x005CE9D0] sub_005CE9D0 (11 bytes)
// @name sub_005CE9D0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E40.
extern "C" void __fastcall fn_005CE9D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647E40(delegate_obj);
}

// [0x005CE9E0] sub_005CE9E0 (11 bytes)
// @name sub_005CE9E0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E60.
extern "C" void __fastcall fn_005CE9E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647E60(delegate_obj);
}

// [0x005CE9F0] sub_005CE9F0 (11 bytes)
// @name sub_005CE9F0
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E80.
extern "C" void __fastcall fn_005CE9F0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647E80(delegate_obj);
}

// [0x005CEA00] sub_005CEA00 (11 bytes)
// @name sub_005CEA00
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EA0.
extern "C" void __fastcall fn_005CEA00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647EA0(delegate_obj);
}

// [0x005CEA10] sub_005CEA10 (11 bytes)
// @name sub_005CEA10
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EC0.
extern "C" void __fastcall fn_005CEA10(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647EC0(delegate_obj);
}

// [0x005CEA20] sub_005CEA20 (11 bytes)
// @name sub_005CEA20
// @summary Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EE0.
extern "C" void __fastcall fn_005CEA20(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xAC);
    ext_00647EE0(delegate_obj);
}

// [0x005CF910]
namespace lift_005CF910 {
extern uint8_t mem_00B3F200;

// @name sub_005CF910
// @summary Clears the global byte flag at 0x00B3F200 to 0.
void sub_005CF910() {
    mem_00B3F200 = 0;
}
} // namespace lift_005CF910

// [0x005C3170] sub_005C3170 (16 bytes)
namespace lift_005C3170 {
// @name sub_005C3170
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_005B72E0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_005C3170(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x164);
    if (sub != 0) {
        ext_005B72E0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_005C3170

// [0x005CE910] sub_005CE910 (16 bytes)
namespace lift_005CE910 {
// @name sub_005CE910
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_00648120(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_005CE910(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0xAC);
    if (sub != 0) {
        ext_00648120(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_005CE910

// [0x005CE920] sub_005CE920 (16 bytes)
namespace lift_005CE920 {
// @name sub_005CE920
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_00648150(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_005CE920(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0xAC);
    if (sub != 0) {
        ext_00648150(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_005CE920

// [0x005C30F0] sub_005C30F0 (18 bytes)
namespace lift_005C30F0 {
// @name sub_005C30F0
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_005B72C0(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005C30F0(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x164);
    if (child != 0) {
        ext_005B72C0(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005C30F0

// [0x005CE8F0] sub_005CE8F0 (18 bytes)
namespace lift_005CE8F0 {
// @name sub_005CE8F0
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_006483A0(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005CE8F0(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0xAC);
    if (child != 0) {
        ext_006483A0(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005CE8F0

// [0x005C3070] sub_005C3070 (18 bytes)
namespace lift_005C3070 {
// @name sub_005C3070
// @summary Auto-lifted identical-shape clone of 0x005B7260 (Unknown::forwardIfChild).
namespace lift_005B7260 {
// Known callee 0x005CE970: sub_005CE970 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647CE0.)
extern void ext_005B7260(void* self);

// @name Unknown::forwardIfChild
// @class Unknown
// @summary Forwards the call to ext_005CE970 when the pointer at +0x158 is non-null; otherwise returns, popping 8 bytes of stack arguments.
// @field Unknown +0x158 void* field_0x158
extern void fn_005C3070(void* self, DWORD stackArg0, DWORD stackArg1) {
    (void)stackArg0;
    (void)stackArg1;
    auto* child = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x164);
    if (child != nullptr) {
        ext_005B7260(child);
        return;
    }
}
} // namespace lift_005B7260
} // namespace lift_005C3070

// [0x005C30D0] sub_005C30D0 (18 bytes)
namespace lift_005C30D0 {
// @name sub_005C30D0
// @summary Auto-lifted identical-shape clone of 0x005B7260 (Unknown::forwardIfChild).
namespace lift_005B7260 {
// Known callee 0x005CE970: sub_005CE970 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647CE0.)
extern void ext_005B72A0(void* self);

// @name Unknown::forwardIfChild
// @class Unknown
// @summary Forwards the call to ext_005CE970 when the pointer at +0x158 is non-null; otherwise returns, popping 8 bytes of stack arguments.
// @field Unknown +0x158 void* field_0x158
extern void fn_005C30D0(void* self, DWORD stackArg0, DWORD stackArg1) {
    (void)stackArg0;
    (void)stackArg1;
    auto* child = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x164);
    if (child != nullptr) {
        ext_005B72A0(child);
        return;
    }
}
} // namespace lift_005B7260
} // namespace lift_005C30D0

// [0x005C3110] sub_005C3110 (19 bytes)
namespace lift_005C3110 {
extern int mem_00B40640;

// @name Forwarder_Field04_VSlot5
// @summary Forwards to virtual slot 5 (+0x14) of the object stored at +0x04, passing this+4 as this and the global mem_00B40640 as the single stack argument; returns the callee's result.
// @field Unknown +0x04 void* field_0x04
// @field VTable +0x14 void* slot5
int fn_005C3110(void* self) {
    // mov eax, [ecx+4]          ; obj = self->field_0x04
    void* obj = lift_field<void*>(self, 0x04);
    // mov edx, [0xB40640]       ; edx = mem_00B40640 (pushed as argument)
    // mov eax, [eax+0x14]       ; eax = obj->vtable[5]
    void** vtable = lift_field<void**>(obj, 0x00);
    // add ecx, 4                ; this = self + 4
    void* thisPtr = static_cast<char*>(self) + 0x04;
    // push edx / call eax       ; thiscall with one stack arg, callee cleans
    using VSlot5Fn = int(__thiscall*)(void* self, int arg);
    VSlot5Fn target = reinterpret_cast<VSlot5Fn>(vtable[5]);
    return target(thisPtr, mem_00B40640);
}
} // namespace lift_005C3110

// [0x005CE940] sub_005CE940 (20 bytes)
namespace lift_005CE940 {
// @name ForwardFieldAC_ToSubobjectVirtualSlot1
// @class Unknown
// @summary Forwards the dword at this+0xAC to virtual slot 1 of the subobject at this+0x30.
// @field Unknown +0x30 void* field_0x30
// @field Unknown +0xAC uint32_t field_0xAC
void fn_005CE940(void* self) {
    // Read a 32-bit little-endian value at byte offset 'off' from 'base'.
    auto rd32 = [](const void* base, uint32_t off) -> uint32_t {
        uint32_t v;
        std::memcpy(&v, static_cast<const uint8_t*>(base) + off, sizeof v);
        return v;
    };

    // Subobject pointer at this+0x30 and its vtable pointer (offset 0 of subobject).
    const uint32_t sub_addr = rd32(self, 0x30);
    const uint32_t vtbl_addr = rd32(reinterpret_cast<const void*>(static_cast<uintptr_t>(sub_addr)), 0);

    // Argument at this+0xAC.
    const uint32_t arg = rd32(self, 0xAC);

    // Slot 1 of the vtable (offset +4) is the target; call it with the subobject as 'this'
    // and 'arg' as the single stack argument. The return value is discarded.
    using SlotFn = void (*)(void* self_obj, uint32_t arg_value);
    const uint32_t target = rd32(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtbl_addr)), 4);
    auto fn = reinterpret_cast<SlotFn>(static_cast<uintptr_t>(target));
    fn(reinterpret_cast<void*>(static_cast<uintptr_t>(sub_addr)), arg);
}
} // namespace lift_005CE940

// [0x005C3130]
namespace lift_005C3130 {
extern int mem_00B40640;

// @name ForwardGlobalArgAndAdd16
// @class Unknown
// @summary Calls the callback stored at obj->field_14 (obj = this->field_04), passing this+4 and a global, then returns its result + 0x10.
// @field Unknown +0x04 void* field_04
// @field Unknown +0x14 void* field_14
int fn_005C3130(void* self) {
    using Callback = int (*)(void* self, int arg);

    uint8_t* obj = lift_field<uint8_t*>(self, 0x04);
    Callback fn = lift_field<Callback>(obj, 0x14);
    int result = fn(static_cast<uint8_t*>(self) + 0x04, mem_00B40640);
    return result + 0x10;
}
} // namespace lift_005C3130

// [0x005C3150]
namespace lift_005C3150 {
extern int mem_00B40640;

// @name CallSlot14ThenAdd20
// @class Unknown
// @summary Calls virtual slot 0x14 of the object at self+0x04 with self+0x04 as this and the global mem_00B40640 as its single argument, then returns the result plus 0x20.
// @field Unknown +0x04 void* field_0x04
uint32_t fn_005C3150(void* self) {
    auto* sub = static_cast<uint8_t*>(self) + 0x04;
    auto* obj = *reinterpret_cast<uint8_t**>(sub);
    auto* vtbl = *reinterpret_cast<uint8_t**>(obj);
    using SlotFn = uint32_t (*)(void* thisPtr, int arg);
    auto slot = reinterpret_cast<SlotFn>(*reinterpret_cast<void**>(vtbl + 0x14));
    uint32_t result = slot(sub, mem_00B40640);
    return result + 0x20;
}
} // namespace lift_005C3150

// [0x005CFCC0] sub_005CFCC0 (23 bytes)
namespace lift_005CFCC0 {
// @name sub_005CFCC0
// @summary Auto-lifted identical-shape clone of 0x004CE810 (Unknown::GetRecordByIndex).
namespace lift_004CE810 {
// Table of 28-byte records at 0x00AE5290.
extern uint8_t mem_00B45854[];

// @name Unknown::GetRecordByIndex
// @summary Returns the address of record `index` in the 28-byte-stride table at 0x00AE5290 (stdcall, ret 4).
// (no @class / @field: the function touches no struct fields)
void* __stdcall fn_005CFCC0(uint32_t index) {
    // ecx = 8*eax - eax = 7*index; eax = 4*ecx + 0xAE5290 = 28*index + 0xAE5290
    return mem_00B45854 + static_cast<size_t>(index) * 28u;
}
} // namespace lift_004CE810
} // namespace lift_005CFCC0

// [0x005C3C00] sub_005C3C00 (25 bytes)
namespace lift_005C3C00 {
// @name Unknown::getValueViaChild
// @class Unknown
// @summary Returns 0.0f if the pointer at +0x15C is null; otherwise forwards to the vtable slot 3 method of the object at (ptr+0x0C), passing ptr as argument, and returns its float result.
// @field Unknown +0x15C void* field_0x15c

// Vtable slot 3 (+0x0C) of the child object: float __thiscall(this, owner).
typedef float (__thiscall *ChildGetFn)(void* self, void* owner);

float __thiscall fn_005C3C00(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* child = *reinterpret_cast<void**>(base + 0x15C);
    if (child == nullptr) {
        return 0.0f;
    }
    auto* childBytes = static_cast<uint8_t*>(child);
    void* obj = *reinterpret_cast<void**>(childBytes + 0x0C);
    void** vtable = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<ChildGetFn>(vtable[3]);
    return fn(obj, child);
}
} // namespace lift_005C3C00

// [0x005CFE50] sub_005CFE50 (29 bytes)
namespace lift_005CFE50 {
// @name ForwardToChildOrReadFlag
// @class UnknownObject
// @summary If the child pointer at +0x2C4 is non-null, tail-dispatch to its vtable slot at +0x3C; otherwise return the byte at +0x1F2.
// @field UnknownObject +0x1F2 uint8_t field_0x1f2
// @field UnknownObject +0x2C4 void* field_0x2c4
uint32_t fn_005CFE50(void* self) {
    void* child = lift_field<void*>(self, 0x2C4);
    if (child == nullptr) {
        return lift_field<uint8_t>(self, 0x1F2);
    }
    void* vtable = lift_field<void*>(child, 0);
    auto target = reinterpret_cast<uint32_t (*)(void*)>(lift_field<void*>(vtable, 0x3C));
    return target(child);
}
} // namespace lift_005CFE50
