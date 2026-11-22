// Lifted C++ translation unit: lifted/leaf/tiny_590000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00B40D08;
extern "C" void __fastcall ext_00642650(void* self);
extern "C" void __fastcall ext_00642620(void* self);
extern "C" void __fastcall ext_006425C0(void* self);
extern "C" void __fastcall ext_0047A4A0(void* self);
extern "C" void __fastcall ext_0047A4E0(void* self);
extern "C" void __fastcall ext_0047A580(void* self);
extern "C" void __fastcall ext_004969D0(void* self);
extern "C" void __fastcall ext_00496D00(void* self);
extern "C" void __fastcall ext_006750B0(void* self);

// [0x00594000] sub_00594000 (6 bytes)
// @name sub_00594000
// @summary Returns global int32 value from mem_00B40D08.
extern "C" int32_t __cdecl fn_00594000(void) {
    return mem_00B40D08;
}

// [0x00594010] sub_00594010 (11 bytes)
// @name sub_00594010
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642650.
extern "C" void __fastcall fn_00594010(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_00642650(delegate_obj);
}

// [0x00594070] sub_00594070 (11 bytes)
// @name sub_00594070
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_00642620.
extern "C" void __fastcall fn_00594070(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_00642620(delegate_obj);
}

// [0x005940C0] sub_005940C0 (11 bytes)
// @name sub_005940C0
// @summary Member forwarding thunk: loads subobject pointer at +0xF8 and tail-calls sub_006425C0.
extern "C" void __fastcall fn_005940C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xF8);
    ext_006425C0(delegate_obj);
}

// [0x005945D0] sub_005945D0 (8 bytes)
// @name sub_005945D0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x158.
extern "C" void __fastcall fn_005945D0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x158);
    target(self);
}

// [0x005945E0] sub_005945E0 (8 bytes)
// @name sub_005945E0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x15C.
extern "C" void __fastcall fn_005945E0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x15C);
    target(self);
}

// [0x00594620] sub_00594620 (11 bytes)
// @name sub_00594620
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A4A0.
extern "C" void __fastcall fn_00594620(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A4A0(delegate_obj);
}

// [0x00594630] sub_00594630 (11 bytes)
// @name sub_00594630
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A4E0.
extern "C" void __fastcall fn_00594630(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A4E0(delegate_obj);
}

// [0x00594640] sub_00594640 (11 bytes)
// @name sub_00594640
// @summary Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.
extern "C" void __fastcall fn_00594640(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x26C);
    ext_0047A580(delegate_obj);
}

// [0x0059DCA0] sub_0059DCA0 (13 bytes)
// @name sub_0059DCA0
// @summary Setter storing float argument into field at offset +0x618.
extern "C" void __fastcall fn_0059DCA0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x618) = value;
}

// [0x0059DCB0] sub_0059DCB0 (11 bytes)
// @name sub_0059DCB0
// @summary This-adjustor thunk: adjusts `this` by +0x620 and tail-calls sub_004969D0.
extern "C" void __fastcall fn_0059DCB0(void* self) {
    ext_004969D0(static_cast<char*>(self) + 0x620);
}

// [0x0059DCC0] sub_0059DCC0 (11 bytes)
// @name sub_0059DCC0
// @summary This-adjustor thunk: adjusts `this` by +0x620 and tail-calls sub_00496D00.
extern "C" void __fastcall fn_0059DCC0(void* self) {
    ext_00496D00(static_cast<char*>(self) + 0x620);
}

// [0x0059DEB0] sub_0059DEB0 (8 bytes)
// @name sub_0059DEB0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x80.
extern "C" void __fastcall fn_0059DEB0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x80);
    target(self);
}

// [0x0059DEC0] sub_0059DEC0 (8 bytes)
// @name sub_0059DEC0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0xFC.
extern "C" void __fastcall fn_0059DEC0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0xFC);
    target(self);
}

// [0x0059DED0] sub_0059DED0 (11 bytes)
// @name sub_0059DED0
// @summary Member forwarding thunk: loads subobject pointer at +0x5FC and tail-calls sub_006750B0.
extern "C" void __fastcall fn_0059DED0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x5FC);
    ext_006750B0(delegate_obj);
}
