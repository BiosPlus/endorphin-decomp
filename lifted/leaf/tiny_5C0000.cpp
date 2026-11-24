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
