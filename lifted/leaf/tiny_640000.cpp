// Lifted C++ translation unit: lifted/leaf/tiny_640000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00648910(void* self);
extern "C" void __fastcall ext_00648920(void* self);
extern "C" void __fastcall ext_00648940(void* self);
extern "C" void __fastcall ext_006488F0(void* self);
extern "C" void __fastcall ext_00648960(void* self);
extern "C" void __fastcall ext_00648980(void* self);
extern "C" void __fastcall ext_006489A0(void* self);
extern "C" void __fastcall ext_006489D0(void* self);
extern "C" void __fastcall ext_006489E0(void* self);
extern "C" void __fastcall ext_00658CF0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name VirtualSlot23Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 23 (offset +0x5C) with the same this pointer; the callee's result is passed through.
// @field VTable +0x5C void* slot23
void* fn_0064F8E0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x5C]      ; tail-jump to vtable slot 23 (0x5C / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[0x5C / sizeof(void*)]);
    return target(self);
}
extern "C" void __fastcall ext_00659650(void* self);
extern "C" void __fastcall ext_00649840(void* self);
extern "C" void __fastcall ext_00659E10(void* self);
extern "C" void __fastcall ext_0064F950(void* self);
extern "C" void __fastcall ext_0065A200(void* self);
extern "C" void __fastcall ext_00645EB0(void* self);
extern "C" void __fastcall ext_0065A8E0(void* self);
extern "C" void __fastcall ext_0065A980(void* self);
extern "C" void __fastcall ext_0065A910(void* self);
extern "C" void __fastcall ext_0065AF20(void* self);
extern "C" void __fastcall ext_0065AEF0(void* self);
extern "C" void __fastcall ext_0065B000(void* self);
extern "C" void __fastcall ext_0065ADF0(void* self);
extern "C" void __fastcall ext_0065AE40(void* self);
extern "C" void __fastcall ext_00402040(void* self);
extern "C" void __fastcall ext_0065AD90(void* self);
extern "C" void __fastcall ext_0065AD50(void* self);
extern "C" void __fastcall ext_0065AE90(void* self);
extern "C" void __fastcall ext_0065AF30(void* self);
extern "C" void __fastcall ext_0065AEC0(void* self);
extern "C" void __fastcall ext_0065B140(void* self);
extern "C" void __fastcall ext_0065B250(void* self);
#include <cstdint>
#include <cstring>

// [0x0064F900] sub_0064F900 (5 bytes)
// @name VirtualSlot21Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.
// @field VTable +0x54 void* slot21
void* fn_0064F900(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x54]      ; tail-jump to vtable slot 21 (byte offset 0x54), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x54));
    return target(self);
}

// [0x0064F8F0] sub_0064F8F0 (5 bytes)
// @name VirtualSlot24Thunk
// @class Unknown
// @summary Loads the object's vtable pointer and dispatches through vtable slot 24 (offset +0x60), tail-jumping with the caller's arguments.
// @field Unknown +0x00 void* const* vtable
void fn_0064F8F0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void* const* vtable = *reinterpret_cast<void* const* const*>(self);
    // jmp [eax + 0x60]     ; slot index 0x60 / sizeof(void*) = 24
    // The original is a tail jump, so the callee receives the caller's
    // arguments unchanged. That cannot be expressed portably without
    // knowing the slot's signature, so only the slot lookup is kept here.
    void* slot = vtable[0x60 / sizeof(void*)];
    (void)slot;
}

// [0x0064F910] sub_0064F910 (5 bytes)
// @name VirtualSlot29Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 29 (offset +0x74) with the same this pointer; the callee's result is passed through.
// @field VTable +0x74 void* slot29
void* fn_0064F910(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x74]      ; tail-jump to vtable slot 29 (byte offset 0x74), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x74));
    return target(self);
}

// [0x0064F930] sub_0064F930 (5 bytes)
// @name VTable::VirtualSlot26Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 26 (offset +0x68) with the same this pointer; the callee's result is passed through.
// @field VTable +0x68 void* slot26
void* fn_0064F930(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x68]      ; tail-jump to vtable slot 26 (0x68 / 4 on x86), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x68));
    return target(self);
}

// [0x0064F940] sub_0064F940 (5 bytes)
// @name VTable::VirtualSlot30Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 30 (offset +0x78) with the same this pointer; the callee's result is passed through.
// @field VTable +0x78 void* slot30
void* fn_0064F940(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x78]      ; tail-jump to vtable slot 30 (byte offset 0x78), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x78));
    return target(self);
}

// [0x006425C0] sub_006425C0 (8 bytes)
// @name sub_006425C0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648910.
extern "C" void __fastcall fn_006425C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_00648910(delegate_obj);
}

// [0x006425D0] sub_006425D0 (8 bytes)
// @name sub_006425D0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648920.
extern "C" void __fastcall fn_006425D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_00648920(delegate_obj);
}

// [0x006425E0] sub_006425E0 (8 bytes)
// @name sub_006425E0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648940.
extern "C" void __fastcall fn_006425E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_00648940(delegate_obj);
}

// [0x00642620] sub_00642620 (8 bytes)
// @name sub_00642620
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_006488F0.
extern "C" void __fastcall fn_00642620(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_006488F0(delegate_obj);
}

// [0x00642680] sub_00642680 (8 bytes)
// @name sub_00642680
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648960.
extern "C" void __fastcall fn_00642680(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_00648960(delegate_obj);
}

// [0x00642690] sub_00642690 (8 bytes)
// @name sub_00642690
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_00648980.
extern "C" void __fastcall fn_00642690(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_00648980(delegate_obj);
}

// [0x006426A0] sub_006426A0 (8 bytes)
// @name sub_006426A0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_006489A0.
extern "C" void __fastcall fn_006426A0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_006489A0(delegate_obj);
}

// [0x006426B0] sub_006426B0 (8 bytes)
// @name sub_006426B0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_006489D0.
extern "C" void __fastcall fn_006426B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_006489D0(delegate_obj);
}

// [0x006426C0] sub_006426C0 (8 bytes)
// @name sub_006426C0
// @summary Member forwarding thunk: loads subobject pointer at +0xC and tail-calls sub_006489E0.
extern "C" void __fastcall fn_006426C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xC);
    ext_006489E0(delegate_obj);
}

// [0x00645F90] sub_00645F90 (30 bytes)
// @name sub_00645F90
// @summary MSVC scalar deleting destructor: calls sub_00658CF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00645F90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00658CF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00646050] sub_00646050 (30 bytes)
// @name sub_00646050
// @summary MSVC scalar deleting destructor: calls sub_00659650 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00646050(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00659650(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00646130] sub_00646130 (30 bytes)
// @name sub_00646130
// @summary MSVC scalar deleting destructor: calls sub_00649840 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00646130(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00649840(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00646190] sub_00646190 (30 bytes)
// @name sub_00646190
// @summary MSVC scalar deleting destructor: calls sub_00659E10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00646190(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00659E10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00646550] sub_00646550 (30 bytes)
// @name sub_00646550
// @summary MSVC scalar deleting destructor: calls sub_0064F950 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00646550(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0064F950(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006465D0] sub_006465D0 (30 bytes)
// @name sub_006465D0
// @summary MSVC scalar deleting destructor: calls sub_0065A200 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006465D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0065A200(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00646FA0] sub_00646FA0 (30 bytes)
// @name sub_00646FA0
// @summary MSVC scalar deleting destructor: calls sub_00645EB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00646FA0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00645EB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00647CA0] sub_00647CA0 (11 bytes)
// @name sub_00647CA0
// @summary Member forwarding thunk: loads subobject pointer at +0xA4 and tail-calls sub_0065A8E0.
extern "C" void __fastcall fn_00647CA0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xA4);
    ext_0065A8E0(delegate_obj);
}

// [0x00647F20] sub_00647F20 (11 bytes)
// @name sub_00647F20
// @summary Member forwarding thunk: loads subobject pointer at +0xA4 and tail-calls sub_0065A980.
extern "C" void __fastcall fn_00647F20(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xA4);
    ext_0065A980(delegate_obj);
}

// [0x00647F70] sub_00647F70 (11 bytes)
// @name sub_00647F70
// @summary Member forwarding thunk: loads subobject pointer at +0xA4 and tail-calls sub_0065A910.
extern "C" void __fastcall fn_00647F70(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xA4);
    ext_0065A910(delegate_obj);
}

// [0x00648450] sub_00648450 (8 bytes)
// @name sub_00648450
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AF20.
extern "C" void __fastcall fn_00648450(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AF20(delegate_obj);
}

// [0x00648460] sub_00648460 (8 bytes)
// @name sub_00648460
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AEF0.
extern "C" void __fastcall fn_00648460(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AEF0(delegate_obj);
}

// [0x00648470] sub_00648470 (8 bytes)
// @name sub_00648470
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065B000.
extern "C" void __fastcall fn_00648470(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065B000(delegate_obj);
}

// [0x00648490] sub_00648490 (8 bytes)
// @name sub_00648490
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065ADF0.
extern "C" void __fastcall fn_00648490(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065ADF0(delegate_obj);
}

// [0x006484A0] sub_006484A0 (8 bytes)
// @name sub_006484A0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AE40.
extern "C" void __fastcall fn_006484A0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AE40(delegate_obj);
}

// [0x006484B0] sub_006484B0 (8 bytes)
// @name sub_006484B0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls AVIIO::vfunc_1.
extern "C" void __fastcall fn_006484B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_00402040(delegate_obj);
}

// [0x006484C0] sub_006484C0 (8 bytes)
// @name sub_006484C0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AD90.
extern "C" void __fastcall fn_006484C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AD90(delegate_obj);
}

// [0x006484D0] sub_006484D0 (8 bytes)
// @name sub_006484D0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AD50.
extern "C" void __fastcall fn_006484D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AD50(delegate_obj);
}

// [0x006484E0] sub_006484E0 (8 bytes)
// @name sub_006484E0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AE90.
extern "C" void __fastcall fn_006484E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AE90(delegate_obj);
}

// [0x006484F0] sub_006484F0 (8 bytes)
// @name sub_006484F0
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AF30.
extern "C" void __fastcall fn_006484F0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AF30(delegate_obj);
}

// [0x00648500] sub_00648500 (8 bytes)
// @name sub_00648500
// @summary Member forwarding thunk: loads subobject pointer at +0x5C and tail-calls sub_0065AEC0.
extern "C" void __fastcall fn_00648500(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5C);
    ext_0065AEC0(delegate_obj);
}

// [0x006489D0] sub_006489D0 (8 bytes)
// @name sub_006489D0
// @summary Member forwarding thunk: loads subobject pointer at +0x30 and tail-calls sub_0065B140.
extern "C" void __fastcall fn_006489D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x30);
    ext_0065B140(delegate_obj);
}

// [0x006489E0] sub_006489E0 (8 bytes)
// @name sub_006489E0
// @summary Member forwarding thunk: loads subobject pointer at +0x30 and tail-calls sub_0065B250.
extern "C" void __fastcall fn_006489E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x30);
    ext_0065B250(delegate_obj);
}

// [0x00648E00] sub_00648E00 (10 bytes)
// @name sub_00648E00
// @summary Setter storing float argument into field at offset +0x6C.
extern "C" void __fastcall fn_00648E00(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x6C) = value;
}

// [0x00648E10] sub_00648E10 (10 bytes)
// @name sub_00648E10
// @summary Setter storing float argument into field at offset +0x70.
extern "C" void __fastcall fn_00648E10(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x70) = value;
}

// [0x00648E20] sub_00648E20 (10 bytes)
// @name sub_00648E20
// @summary Setter storing float argument into field at offset +0x74.
extern "C" void __fastcall fn_00648E20(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x74) = value;
}

// [0x00648E40] sub_00648E40 (10 bytes)
// @name sub_00648E40
// @summary Setter storing float argument into field at offset +0x78.
extern "C" void __fastcall fn_00648E40(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x78) = value;
}

// [0x00648E50] sub_00648E50 (10 bytes)
// @name sub_00648E50
// @summary Setter storing float argument into field at offset +0x7C.
extern "C" void __fastcall fn_00648E50(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x7C) = value;
}

// [0x00648E60] sub_00648E60 (13 bytes)
// @name sub_00648E60
// @summary Setter storing float argument into field at offset +0x80.
extern "C" void __fastcall fn_00648E60(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x80) = value;
}

// [0x00648E70] sub_00648E70 (13 bytes)
// @name sub_00648E70
// @summary Setter storing float argument into field at offset +0x84.
extern "C" void __fastcall fn_00648E70(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x84) = value;
}

// [0x00648E80] sub_00648E80 (13 bytes)
// @name sub_00648E80
// @summary Setter storing float argument into field at offset +0x88.
extern "C" void __fastcall fn_00648E80(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x88) = value;
}

// [0x00648E90] sub_00648E90 (13 bytes)
// @name sub_00648E90
// @summary Setter storing float argument into field at offset +0x8C.
extern "C" void __fastcall fn_00648E90(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x8C) = value;
}

// [0x0064F920] sub_0064F920 (8 bytes)
// @name sub_0064F920
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x84.
extern "C" void __fastcall fn_0064F920(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x84);
    target(self);
}

// [0x00648930]
namespace lift_00648930 {
extern uint8_t* mem_read_ptr(const void* addr);
extern float mem_read_f32(const void* addr);

// @name getField0x28Float0x04
// @summary Reads a pointer at +0x28 and returns the float at +0x04 of that object.
// @field unknown +0x28 void* field_0x28
// @field unknown +0x04 float field_0x04
float __thiscall sub_00648930(void* this_ptr) {
    uint8_t* ptr = mem_read_ptr(static_cast<uint8_t*>(this_ptr) + 0x28);
    return mem_read_f32(ptr + 0x04);
}
} // namespace lift_00648930

// [0x00648920]
namespace lift_00648920 {
uint32_t mem_r32(uint32_t addr);

// @name sub_00648920
// @summary Reads a 32-bit value at offset 0x04 of the pointer stored at this+0x2c
// @field Object +0x2c uint32_t field_0x2c

uint32_t __fastcall sub_00648920(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t ptr = mem_r32(ecx + 0x2c);
    return mem_r32(ptr + 0x4);
}
} // namespace lift_00648920

// [0x00648910]
namespace lift_00648910 {
// @name getNestedField0x0C
// @summary Reads a 32-bit value at offset 0x0C from the pointer stored at this+0x28.
// @field Unknown +0x28 uint32_t field_0x28


extern uint32_t mem_read32(uint32_t addr);

extern uint32_t __thiscall sub_00648910(uintptr_t self) {
    uint32_t ptr = mem_read32(static_cast<uint32_t>(self + 0x28));
    return mem_read32(ptr + 0x0C);
}
} // namespace lift_00648910

// [0x006488F0]
namespace lift_006488F0 {
// @name get_field_0x28_float_0x08
// @summary Reads a float at offset +0x08 from the pointer stored at this+0x28
// @field unknown +0x28 const uint8_t* field_0x28
float __thiscall sub_006488F0(const void* self) {
    const auto* base = static_cast<const uint8_t*>(self);
    const uint8_t* ptr = *reinterpret_cast<const uint8_t* const*>(base + 0x28);
    return *reinterpret_cast<const float*>(ptr + 0x08);
}
} // namespace lift_006488F0

// [0x00640930]
namespace lift_00640930 {
// @name sub_00640930
// @summary Decrements dword at +0xc and sets byte at +0x10 to 1
// @field unknown +0x0c int32_t field_0x0c
// @field unknown +0x10 uint8_t field_0x10


uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);
void mem_write8(uint32_t addr, uint8_t val);

void __thiscall sub_00640930(void* self) {
    uint32_t base = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t val = mem_read32(base + 0x0c);
    mem_write32(base + 0x0c, val - 1);
    mem_write8(base + 0x10, 1);
}
} // namespace lift_00640930

// [0x00644F20]
namespace lift_00644F20 {
// @name forwardVCall24
// @summary Dereferences the inner object at +0x00 and tail-calls its vtable slot +0x24
// @field Object +0x00 uint32_t field_0x00

void __fastcall sub_00644F20(uint32_t ecx)
{
    uint32_t inner = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ecx));
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(inner));
    uint32_t target = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x24));
    using Fn = void(__fastcall*)(uint32_t);
    reinterpret_cast<Fn>(static_cast<uintptr_t>(target))(inner);
}
} // namespace lift_00644F20

// [0x006452C0]
namespace lift_006452C0 {
extern uint32_t mem_read32(uint32_t addr);

// @name forwardVtable18
// @summary Tail-calls virtual method at vtable +0x18 on member object at +0x4
// @field unknown +0x04 uint32_t field_0x04
uint32_t sub_006452C0(uint32_t self) {
    uint32_t obj = mem_read32(self + 0x4);
    uint32_t vtable = mem_read32(obj);
    uint32_t fn = mem_read32(vtable + 0x18);
    return reinterpret_cast<uint32_t (*)(uint32_t)>(static_cast<uintptr_t>(fn))(obj);
}
} // namespace lift_006452C0

// [0x00648EC0] sub_00648EC0 (10 bytes)
namespace lift_00648EC0 {
// @name sub_00648EC0
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00648EC0(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x20));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 0);
}
} // namespace lift_00629B00
} // namespace lift_00648EC0

// [0x00648ED0] sub_00648ED0 (10 bytes)
namespace lift_00648ED0 {
// @name sub_00648ED0
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00648ED0(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x20));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 1);
}
} // namespace lift_00629B00
} // namespace lift_00648ED0

// [0x00648EE0] sub_00648EE0 (10 bytes)
namespace lift_00648EE0 {
// @name sub_00648EE0
// @summary Auto-lifted identical-shape clone of 0x00629B00 (CompoundSensor::vfunc_19).
namespace lift_00629B00 {
// @name CompoundSensor::vfunc_19
// @class CompoundSensor
// @summary Calls vtable slot 16 (offset 0x40) on this with argument 1
// @field CompoundSensor +0x0 void** vtable


uint32_t __thiscall fn_00648EE0(void* self) {
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(self);
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x20));
    using vfunc_t = uint32_t(__thiscall*)(void*, uint32_t);
    return reinterpret_cast<vfunc_t>(static_cast<uintptr_t>(fn_addr))(self, 2);
}
} // namespace lift_00629B00
} // namespace lift_00648EE0

// [0x00642650] sub_00642650 (11 bytes)
namespace lift_00642650 {
// @name sub_00642650
// @summary Auto-lifted identical-shape clone of 0x0041B3B0 (callGlobalThunk00430D40).
namespace lift_0041B3B0 {
// @name callGlobalThunk00430D40
// @summary Loads global pointer at 0x00ACDB40 into ECX and tail-calls 0x00430D40.


extern uint32_t mem_00B55748;
extern void ext_00648930(void);

extern void fn_00642650(void) {
    (void)mem_00B55748;
    ext_00648930();
}
} // namespace lift_0041B3B0
} // namespace lift_00642650

// [0x006452D0]
namespace lift_006452D0 {
uint32_t mem_read32(uint32_t addr);

// @name forwardVCall0x1c
// @summary Tail-call virtual method at vtable +0x1c on delegate at +0x04
// @field Self +0x04 void* field_0x04
void __thiscall sub_006452D0(void* self) {
    uint32_t delegate = mem_read32(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x4));
    uint32_t vtable = mem_read32(delegate);
    uint32_t target = mem_read32(vtable + 0x1c);
    reinterpret_cast<void(__thiscall*)(uint32_t)>(target)(delegate);
}
} // namespace lift_006452D0

// [0x00648850] sub_00648850 (12 bytes)
namespace lift_00648850 {
extern int32_t mem_00B5574C;

// @name sub_00648850
// @summary Auto-lifted identical-shape clone of 0x004A24A0 (setGlobalU32FromArg).
namespace lift_004A24A0 {
extern uint32_t mem_00B5574C;

// @name setGlobalU32FromArg
// @summary Stores its single stack argument (stdcall, callee pops 4 bytes) into the global mem_00A35B7C.
void fn_00648850(uint32_t value) {
    // mov eax, [esp+4]     -> eax = first argument
    // mov [0xa35b7c], eax  -> mem_00A35B7C = eax
    mem_00B5574C = value;
    // ret 4                -> stdcall epilogue; handled by the calling convention
}
} // namespace lift_004A24A0
} // namespace lift_00648850

// [0x00648900] sub_00648900 (13 bytes)
namespace lift_00648900 {
// @name SubObject::setField8Float
// @class SubObject
// @summary Stores a float argument into the float at +0x08 of the object pointed to by +0x28.
// @field SubObject +0x28 pointer field_0x28
// @field SubObject::field_0x28 +0x08 float field_0x08
void sub_00648900_setField8Float(void* self, float value) {
    void* inner = lift_field<void*>(self, 0x28);
    lift_field<float>(inner, 0x08) = value;
}
} // namespace lift_00648900

// [0x00642000] sub_00642000 (15 bytes)
namespace lift_00642000 {
// @name FlagsTest_Bit10
// @class unknown (this-pointer accessor; owning class not identified)
// @summary Returns 1 if bit 0x10 is set in the byte at this+0x20, otherwise 0.
// @field unknown +0x20 uint8_t field_0x20
uint8_t FlagsTest_Bit10(void* self) {
    const uint8_t flags = *reinterpret_cast<const uint8_t*>(static_cast<const char*>(self) + 0x20);
    return (flags & 0x10u) == 0x10u ? 1u : 0u;
}
} // namespace lift_00642000

// [0x00641FD0] sub_00641FD0 (15 bytes)
namespace lift_00641FD0 {
// @name IsFlagBit0AtOffset20
// @class <ClassName> (optional)
// @summary Returns bit 0 of the DWORD at this+0x20 as 0 or 1 (x86 sequence: and al,1 / sub / neg / sbb / add 1).
// @field <ClassName> +0x20 DWORD field_0x20
DWORD IsFlagBit0AtOffset20(const void* self) {
    const auto* base = static_cast<const unsigned char*>(self);
    DWORD value;
    std::memcpy(&value, base + 0x20, sizeof(value));
    return value & 1u;
}
} // namespace lift_00641FD0

// [0x00641FF0] sub_00641FF0 (15 bytes)
namespace lift_00641FF0 {
// @name IsFlag08Set
// @class Unknown
// @summary Returns 1 if bit 0x08 of the dword at this+0x20 is set, else 0.
// @field Unknown +0x20 uint32_t field_0x20
uint8_t fn_00641FF0(void* self) {
    const uint32_t flags = *reinterpret_cast<const uint32_t*>(
        static_cast<const uint8_t*>(self) + 0x20);
    return (flags & 0x08u) == 0x08u ? 1u : 0u;
}
} // namespace lift_00641FF0

// [0x00641FE0] sub_00641FE0 (15 bytes)
namespace lift_00641FE0 {
// @name descriptiveName: FlagBit1IsSetAt20
// @summary Returns 1 if bit 1 of the dword at offset 0x20 is set, else 0 (bool-valued getter).
// @field Unknown +0x20 uint32_t field_0x20
uint8_t fn_00641FE0(void* self) {
    const uint32_t flags = lift_field<uint32_t>(self, 0x20);
    return (flags & 0x2u) == 0x2u ? 1 : 0;
}
} // namespace lift_00641FE0

// [0x00642010] sub_00642010 (15 bytes)
namespace lift_00642010 {
// @name IsFlag20Set
// @summary Returns 1 if bit 0x20 is set in the dword at +0x20 of self, else 0.
// @field Unknown +0x20 DWORD field_0x20
BOOLEAN fn_00642010(void* self) {
    DWORD flags = lift_field<DWORD>(self, 0x20);
    return (static_cast<BYTE>(flags) & 0x20) == 0x20;
}
} // namespace lift_00642010
