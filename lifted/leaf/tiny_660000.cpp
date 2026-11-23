// Lifted C++ translation unit: lifted/leaf/tiny_660000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065D570(void* self);
extern "C" void __fastcall ext_0065D6C0(void* self);
extern "C" void __fastcall ext_0065DD60(void* self);
extern "C" void __fastcall ext_0065E440(void* self);
extern "C" void __fastcall ext_0065E260(void* self);
extern "C" void __fastcall ext_0065DEE0(void* self);
extern "C" void __fastcall ext_0065D350(void* self);
extern "C" void __fastcall ext_0065D2B0(void* self);
extern "C" void __fastcall ext_0065D300(void* self);
extern "C" int mem_00987A04;
extern "C" int32_t mem_00B59420;
extern "C" void __fastcall ext_006667A0(void* self);
extern "C" int mem_0092DF34;

// [0x00661A00] sub_00661A00 (8 bytes)
// @name sub_00661A00
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D570.
extern "C" void __fastcall fn_00661A00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D570(delegate_obj);
}

// [0x00661A60] sub_00661A60 (8 bytes)
// @name sub_00661A60
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D6C0.
extern "C" void __fastcall fn_00661A60(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D6C0(delegate_obj);
}

// [0x00661A70] sub_00661A70 (8 bytes)
// @name sub_00661A70
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065DD60.
extern "C" void __fastcall fn_00661A70(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065DD60(delegate_obj);
}

// [0x00661A80] sub_00661A80 (8 bytes)
// @name sub_00661A80
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E440.
extern "C" void __fastcall fn_00661A80(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065E440(delegate_obj);
}

// [0x00661A90] sub_00661A90 (8 bytes)
// @name sub_00661A90
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E260.
extern "C" void __fastcall fn_00661A90(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065E260(delegate_obj);
}

// [0x00661AA0] sub_00661AA0 (8 bytes)
// @name sub_00661AA0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065DEE0.
extern "C" void __fastcall fn_00661AA0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065DEE0(delegate_obj);
}

// [0x00661AB0] sub_00661AB0 (8 bytes)
// @name sub_00661AB0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D350.
extern "C" void __fastcall fn_00661AB0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D350(delegate_obj);
}

// [0x00661AC0] sub_00661AC0 (8 bytes)
// @name sub_00661AC0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D2B0.
extern "C" void __fastcall fn_00661AC0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D2B0(delegate_obj);
}

// [0x00661AD0] sub_00661AD0 (8 bytes)
// @name sub_00661AD0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D300.
extern "C" void __fastcall fn_00661AD0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D300(delegate_obj);
}

// [0x00665810] sub_00665810 (7 bytes)
// @name sub_00665810
// @summary Stores address of mem_00987A04 into field at offset +0x0.
extern "C" void __fastcall fn_00665810(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00987A04;
}

// [0x00665870] sub_00665870 (6 bytes)
// @name sub_00665870
// @summary Returns global int32 value from mem_00B59420.
extern "C" int32_t __cdecl fn_00665870(void) {
    return mem_00B59420;
}

// [0x006667D0] sub_006667D0 (7 bytes)
// @name sub_006667D0
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_006667A0.
extern "C" void __fastcall fn_006667D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_006667A0(delegate_obj);
}

// [0x0066AC80] sub_0066AC80 (7 bytes)
// @name sub_0066AC80
// @summary Stores address of mem_0092DF34 into field at offset +0x0.
extern "C" void __fastcall fn_0066AC80(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092DF34;
}

// [0x006616B0]
namespace lift_006616B0 {
uint32_t mem_read32(uint32_t addr);

// @name forwardVtableSlot0x18
// @summary Tail-calls vtable slot +0x18 on the object pointed to by this+0x00.
// @field Unknown +0x00 void* inner
int __thiscall sub_006616B0(void* thisPtr) {
    uint32_t inner = mem_read32(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(thisPtr)));
    uint32_t vtable = mem_read32(inner);
    uint32_t fnAddr = mem_read32(vtable + 0x18);
    using Vfn = int(__thiscall*)(uint32_t);
    return reinterpret_cast<Vfn>(static_cast<uintptr_t>(fnAddr))(inner);
}
} // namespace lift_006616B0

// [0x00661880]
namespace lift_00661880 {
// @name sub_00661880
// @summary Tail-calls virtual method at vtable+0x10 on dereferenced first field


extern uint32_t mem_read32(uint32_t addr);

void sub_00661880(uint32_t ecx) {
    uint32_t inner = mem_read32(ecx);
    uint32_t vtable = mem_read32(inner);
    uint32_t fn = mem_read32(vtable + 0x10);
    ((void(__thiscall*)(uint32_t))fn)(inner);
}
} // namespace lift_00661880

// [0x00661980] sub_00661980 (9 bytes)
namespace lift_00661980 {
// @name setVtable_0093BFB4
// @summary Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).
// @field Unknown +0x00 uint32_t field_0x00

void fn_00661980(void* self) {
    *static_cast<uint32_t*>(self) = 0x0093BFB4u;
}
} // namespace lift_00661980
