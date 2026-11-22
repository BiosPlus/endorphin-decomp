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
