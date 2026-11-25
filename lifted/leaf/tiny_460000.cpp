// Lifted C++ translation unit: lifted/leaf/tiny_460000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0045E4A0(void* self);
extern "C" void __fastcall ext_0045DD20(void* self);
extern "C" int mem_00938378;
extern "C" int mem_00938684;
extern "C" int mem_00938918;
extern "C" int mem_00938B58;
extern "C" int mem_00938B9C;
extern "C" void __fastcall ext_006AEB40(void* self);

extern "C" void __fastcall ext_006AEB40(void* self);
// @name VirtualSlot1Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 1 (offset +0x4) with the same this pointer.
// @field VTable +0x04 void* slot1
void fn_0046A470(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 4]         ; tail-jump to vtable slot 1, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[1]);
    target(self);
}
extern "C" void __fastcall ext_00462B10(void* self);
extern "C" int mem_00938D48;
extern "C" int mem_00939338;
extern "C" int mem_00939948;
extern "C" int mem_009399F0;
extern "C" int mem_00939BA8;
extern "C" int32_t mem_00AD6C80;
extern "C" void __fastcall ext_00468B50(void* self);
extern "C" void __fastcall ext_00468B30(void* self);
extern "C" int mem_00939D3C;
extern "C" void __fastcall ext_006A6AF6(void* self);

extern "C" void __fastcall ext_006A6AF6(void* self);
// @name VirtualSlot2Thunk
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 2 (offset +0x8) with the same this pointer.
// @field VTable +0x08 void* slot2
void fn_0046A480(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 8]         ; tail-jump to vtable slot 2, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[2]);
    target(self);
}
extern "C" int mem_00939DDC;
extern "C" void __fastcall ext_006A5F56(void* self);

extern "C" void __fastcall ext_006A5F56(void* self);
// @name sub_00460470
// @summary Member forwarding thunk: loads subobject pointer at +0xB4 and tail-calls sub_0045E4A0.
extern "C" void __fastcall fn_00460470(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xB4);
    ext_0045E4A0(delegate_obj);
}
extern "C" int mem_00939F5C;
extern "C" void __fastcall ext_0065C650(void* self);
extern "C" int32_t mem_00AD7CD8;
extern "C" void __fastcall ext_004AEC70(void* self);
extern "C" void __fastcall ext_004AEC80(void* self);
extern "C" void __fastcall ext_004AEC90(void* self);
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_0046C120(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_00460480
// @summary Member forwarding thunk: loads subobject pointer at +0xB4 and tail-calls sub_0045DD20.
extern "C" void __fastcall fn_00460480(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xB4);
    ext_0045DD20(delegate_obj);
}
extern "C" int32_t mem_00AD89B8;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_004605E0
// @summary Returns address of global mem_00938378.
extern "C" void* __cdecl fn_004605E0(void) {
    return &mem_00938378;
}

// [0x004614A0] sub_004614A0 (6 bytes)
// @name sub_004614A0
// @summary Returns address of global mem_00938684.
extern "C" void* __cdecl fn_004614A0(void) {
    return &mem_00938684;
}

// [0x00461650] sub_00461650 (6 bytes)
// @name sub_00461650
// @summary Returns address of global mem_00938918.
extern "C" void* __cdecl fn_00461650(void) {
    return &mem_00938918;
}

// [0x004622D0] sub_004622D0 (6 bytes)
// @name sub_004622D0
// @summary Returns address of global mem_00938B58.
extern "C" void* __cdecl fn_004622D0(void) {
    return &mem_00938B58;
}

// [0x00462380] sub_00462380 (11 bytes)
// @name sub_00462380
// @summary Destructor tail-call: restores vtable mem_00938B9C and tail-calls base destructor sub_006AEB40.
extern "C" void __fastcall fn_00462380(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00938B9C;
    ext_006AEB40(self);
}

// [0x004624B0] sub_004624B0 (8 bytes)
// @name sub_004624B0
// @summary Member forwarding thunk: loads subobject pointer at +0x74 and tail-calls sub_00462B10.
extern "C" void __fastcall fn_004624B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x74);
    ext_00462B10(delegate_obj);
}

// [0x00462820] sub_00462820 (6 bytes)
// @name sub_00462820
// @summary Returns address of global mem_00938D48.
extern "C" void* __cdecl fn_00462820(void) {
    return &mem_00938D48;
}

// [0x00463580] sub_00463580 (10 bytes)
// @name sub_00463580
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x15C.
extern "C" void __fastcall fn_00463580(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x15C);
    target(self);
}

// [0x004645A0] sub_004645A0 (6 bytes)
// @name sub_004645A0
// @summary Returns address of global mem_00939338.
extern "C" void* __cdecl fn_004645A0(void) {
    return &mem_00939338;
}

// [0x00464DC0] sub_00464DC0 (6 bytes)
// @name sub_00464DC0
// @summary Returns address of global mem_00939948.
extern "C" void* __cdecl fn_00464DC0(void) {
    return &mem_00939948;
}

// [0x00465450] sub_00465450 (6 bytes)
// @name sub_00465450
// @summary Returns address of global mem_009399F0.
extern "C" void* __cdecl fn_00465450(void) {
    return &mem_009399F0;
}

// [0x004658B0] sub_004658B0 (6 bytes)
// @name sub_004658B0
// @summary Returns address of global mem_00939BA8.
extern "C" void* __cdecl fn_004658B0(void) {
    return &mem_00939BA8;
}

// [0x004658C0] sub_004658C0 (6 bytes)
// @name sub_004658C0
// @summary Returns global int32 value from mem_00AD6C80.
extern "C" int32_t __cdecl fn_004658C0(void) {
    return mem_00AD6C80;
}

// [0x00465F10] sub_00465F10 (8 bytes)
// @name sub_00465F10
// @summary Member forwarding thunk: loads subobject pointer at +0x58 and tail-calls sub_00468B50.
extern "C" void __fastcall fn_00465F10(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x58);
    ext_00468B50(delegate_obj);
}

// [0x00465F20] sub_00465F20 (8 bytes)
// @name sub_00465F20
// @summary Member forwarding thunk: loads subobject pointer at +0x58 and tail-calls sub_00468B30.
extern "C" void __fastcall fn_00465F20(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x58);
    ext_00468B30(delegate_obj);
}

// [0x004675D0] sub_004675D0 (11 bytes)
// @name sub_004675D0
// @summary Destructor tail-call: restores vtable mem_00939D3C and tail-calls base destructor thunk_MFC80_ord_612.
extern "C" void __fastcall fn_004675D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00939D3C;
    ext_006A6AF6(self);
}

// [0x00467F40] sub_00467F40 (11 bytes)
// @name sub_00467F40
// @summary Destructor tail-call: restores vtable mem_00939DDC and tail-calls base destructor thunk_MFC80_ord_630.
extern "C" void __fastcall fn_00467F40(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00939DDC;
    ext_006A5F56(self);
}

// [0x00467F50] sub_00467F50 (6 bytes)
// @name sub_00467F50
// @summary Returns address of global mem_00939F5C.
extern "C" void* __cdecl fn_00467F50(void) {
    return &mem_00939F5C;
}

// [0x00468170] sub_00468170 (7 bytes)
// @name sub_00468170
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_0065C650.
extern "C" void __fastcall fn_00468170(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_0065C650(delegate_obj);
}

// [0x00468180] sub_00468180 (6 bytes)
// @name sub_00468180
// @summary Returns global int32 value from mem_00AD7CD8.
extern "C" int32_t __cdecl fn_00468180(void) {
    return mem_00AD7CD8;
}

// [0x00468F30] sub_00468F30 (8 bytes)
// @name sub_00468F30
// @summary Member forwarding thunk: loads subobject pointer at +0x2C and tail-calls sub_004AEC70.
extern "C" void __fastcall fn_00468F30(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x2C);
    ext_004AEC70(delegate_obj);
}

// [0x00468F40] sub_00468F40 (8 bytes)
// @name sub_00468F40
// @summary Member forwarding thunk: loads subobject pointer at +0x2C and tail-calls sub_004AEC80.
extern "C" void __fastcall fn_00468F40(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x2C);
    ext_004AEC80(delegate_obj);
}

// [0x00469170] sub_00469170 (8 bytes)
// @name sub_00469170
// @summary Member forwarding thunk: loads subobject pointer at +0x2C and tail-calls sub_004AEC90.
extern "C" void __fastcall fn_00469170(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x2C);
    ext_004AEC90(delegate_obj);
}

// [0x0046C060] sub_0046C060 (9 bytes)
// @name sub_0046C060
// @summary This-adjustor thunk: adjusts `this` by +0x28 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_0046C060(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x28);
}

// [0x0046C5E0] sub_0046C5E0 (30 bytes)
// @name sub_0046C5E0
// @summary MSVC scalar deleting destructor: calls sub_0046C120 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0046C5E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0046C120(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0046F7F0] sub_0046F7F0 (6 bytes)
// @name sub_0046F7F0
// @summary Returns global int32 value from mem_00AD89B8.
extern "C" int32_t __cdecl fn_0046F7F0(void) {
    return mem_00AD89B8;
}

// [0x0046F920] sub_0046F920 (11 bytes)
// @name sub_0046F920
// @summary Auto-lifted identical-shape clone of 0x004A9B50 (NMData::State::vfunc_9_off_10).
void fn_0046F920(void* self) {
    // Embedded subobject at +0x228; its first dword is its vtable pointer.
    void* sub = static_cast<uint8_t*>(self) + 0x3C;
    void** vtbl = *reinterpret_cast<void***>(sub);
    // Slot 2 (byte offset 8) is invoked with this = sub.
    auto fn = reinterpret_cast<void (*)(void*)>(vtbl[2]);
    fn(sub);
}

// [0x00468660]
namespace lift_00468660 {
extern uint32_t mem_read32(uint32_t addr);

// @name getNestedField_0x18_0xc
// @summary Reads a 32-bit value at offset 0xc of the object pointed to by this+0x18
// @field Unknown +0x18 uint32_t field_0x18
uint32_t __thiscall sub_00468660(uint32_t this_ptr) {
    uint32_t inner = mem_read32(this_ptr + 0x18);
    return mem_read32(inner + 0x0c);
}
} // namespace lift_00468660

// [0x00462A60]
namespace lift_00462A60 {
extern uint32_t mem_r32(uint32_t addr);
extern uint8_t mem_r8(uint32_t addr);

// @name getInnerByte1C
// @summary Reads a byte at offset 0x1C from the pointer stored at this+0x00.
uint8_t __thiscall sub_00462A60(uint32_t this_ptr) {
    uint32_t inner = mem_r32(this_ptr);
    return mem_r8(inner + 0x1c);
}
} // namespace lift_00462A60

// [0x00462A70]
namespace lift_00462A70 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name setSubField0x4To2
// @summary Sets dword at offset 0x4 of the pointer at this+0x4 to 2
// @field Self +0x04 uint32_t field_0x04
void __thiscall sub_00462A70(void* self) {
    uint32_t ptr = mem_read32(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)) + 0x4);
    mem_write32(ptr + 0x4, 2);
}
} // namespace lift_00462A70

// [0x00462A80]
namespace lift_00462A80 {
// @name sub_00462A80
// @summary Sets field_0x4 of the object referenced by this->field_0x4 to 1.
// @field unknown +0x04 uint32_t field_0x04
void __thiscall sub_00462A80(uint8_t* this_ptr) {
    uint8_t* obj = *reinterpret_cast<uint8_t* const*>(this_ptr + 0x4);
    *reinterpret_cast<uint32_t*>(obj + 0x4) = 1;
}
} // namespace lift_00462A80

// [0x00462A90]
namespace lift_00462A90 {
// @name sub_00462A90
// @summary Clears the dword at offset 0x4 of the object pointed to by field_0x04.
// @field unknown +0x04 uint32_t field_0x04


uint32_t& mem_u32(uint32_t addr);

void __thiscall sub_00462A90(uint32_t this_) {
    uint32_t eax = mem_u32(this_ + 0x4);
    mem_u32(eax + 0x4) = 0;
}
} // namespace lift_00462A90

// [0x00465B00] sub_00465B00 (11 bytes)
namespace lift_00465B00 {
// @name sub_00465B00
// @summary Auto-lifted identical-shape clone of 0x0041B3B0 (callGlobalThunk00430D40).
namespace lift_0041B3B0 {
// @name callGlobalThunk00430D40
// @summary Loads global pointer at 0x00ACDB40 into ECX and tail-calls 0x00430D40.


extern uint32_t mem_00ACDB40;
extern void ext_00434A00(void);

extern void fn_00465B00(void) {
    (void)mem_00ACDB40;
    ext_00434A00();
}
} // namespace lift_0041B3B0
} // namespace lift_00465B00

// [0x00465B10] sub_00465B10 (11 bytes)
namespace lift_00465B10 {
// @name sub_00465B10
// @summary Auto-lifted identical-shape clone of 0x0041B3B0 (callGlobalThunk00430D40).
namespace lift_0041B3B0 {
// @name callGlobalThunk00430D40
// @summary Loads global pointer at 0x00ACDB40 into ECX and tail-calls 0x00430D40.


extern uint32_t mem_00ACDB40;
extern void ext_00434930(void);

extern void fn_00465B10(void) {
    (void)mem_00ACDB40;
    ext_00434930();
}
} // namespace lift_0041B3B0
} // namespace lift_00465B10

// [0x004684C0]
namespace lift_004684C0 {
// @name setGlobalByte_00B58DFC
// @summary Stores a byte argument into global mem_00B58DFC.


extern uint8_t mem_00B58DFC;

void __stdcall sub_004684C0(uint8_t value) {
    mem_00B58DFC = value;
}
} // namespace lift_004684C0

// [0x0046C110] sub_0046C110 (13 bytes)
namespace lift_0046C110 {
// @name Unknown::GetFieldF138ViaF8
// @class Unknown
// @summary Returns the float at +0x138 of the sub-object pointed to by self+0xF8.
// @field Unknown +0xF8 void* field_0xF8
// @field Unknown +0x138 float field_0x138
float fn_0046C110(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto* sub = *reinterpret_cast<unsigned char**>(base + 0xF8);
    return *reinterpret_cast<float*>(sub + 0x138);
}
} // namespace lift_0046C110

// [0x0046F910] sub_0046F910 (13 bytes)
namespace lift_0046F910 {
// @name Unknown::ReadF8ObjectByte12C
// @class Unknown
// @summary Returns the low byte at +0x12C of the object referenced by this+0xF8.
// @field Unknown +0xF8 void* field_0xF8
// @field Unknown +0x12C uint8_t field_0x12C
uint8_t fn_0046F910(void* self) {
    void* inner = lift_field<void*>(self, 0xF8);
    return lift_field<uint8_t>(inner, 0x12C);
}
} // namespace lift_0046F910

// [0x0046FE50] sub_0046FE50 (19 bytes)
namespace lift_0046FE50 {
// @name sub_0046FE50
// @summary Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).
namespace lift_005355B0 {
// @name OglRenderer::vfunc_71
// @class OglRenderer
// @summary Returns the byte flag at delegate_0x38->field_0x64->+0xC4.
// @field OglRenderer +0x38 void* delegate_0x38
uint8_t fn_0046FE50(void* self) {
    char* renderer = static_cast<char*>(self);
    char* delegate = *reinterpret_cast<char**>(renderer + 0xCC);
    char* inner = *reinterpret_cast<char**>(delegate + 0x26C);
    return *reinterpret_cast<uint8_t*>(inner + 0x1F0);
}
} // namespace lift_005355B0
} // namespace lift_0046FE50

// [0x0046FE70] sub_0046FE70 (19 bytes)
namespace lift_0046FE70 {
// @name sub_0046FE70
// @summary Auto-lifted identical-shape clone of 0x005355B0 (OglRenderer::vfunc_71).
namespace lift_005355B0 {
// @name OglRenderer::vfunc_71
// @class OglRenderer
// @summary Returns the byte flag at delegate_0x38->field_0x64->+0xC4.
// @field OglRenderer +0x38 void* delegate_0x38
uint8_t fn_0046FE70(void* self) {
    char* renderer = static_cast<char*>(self);
    char* delegate = *reinterpret_cast<char**>(renderer + 0xCC);
    char* inner = *reinterpret_cast<char**>(delegate + 0x26C);
    return *reinterpret_cast<uint8_t*>(inner + 0x1F1);
}
} // namespace lift_005355B0
} // namespace lift_0046FE70

// [0x004646A0] sub_004646A0 (15 bytes)
namespace lift_004646A0 {
// USER32!GetKeyState import slot (IAT entry at 0x009255F4).
extern int mem_009255F4;
// Imported USER32!GetKeyState(int nVirtKey) -> SHORT (__stdcall).
extern SHORT ext_GetKeyState(INT nVirtKey);

// @name Input::isMiddleMouseDown
// @summary Returns 1 if virtual key 0x04 (VK_MBUTTON) is currently down, else 0.
// Note: no struct fields are accessed, so no @field lines.
uint8_t fn_004646A0() {
    // push 4; call GetKeyState; test ax,ax; setl al; ret
    // setl after test: OF is cleared by test, so result = sign bit of AX
    // (i.e. the high bit of GetKeyState's SHORT return, set while the key is down).
    const SHORT state = ext_GetKeyState(4);
    return static_cast<uint8_t>(state < 0);
}
} // namespace lift_004646A0

// [0x00465B20] sub_00465B20 (16 bytes)
namespace lift_00465B20 {
// @name Unknown::ReleaseOrNotifyChild
// @class UnknownClass
// @summary If the pointer stored at self+0x00 is non-null, calls its vtable slot 2 with argument 1.
// @field UnknownClass +0x00 void* field_0x00
void fn_00465B20(void* self) {
    void* obj = *static_cast<void**>(self);
    if (obj == nullptr) {
        return;
    }
    void** vtable = *static_cast<void***>(obj);
    auto fn = reinterpret_cast<void (*)(void*, int)>(vtable[2]);
    fn(obj, 1);
}
} // namespace lift_00465B20

// [0x00468A30] sub_00468A30 (16 bytes)
namespace lift_00468A30 {
// @name GetEnabledChildField28OrZero
// @summary Returns the DWORD at +0x28 of the child object held at +0x14 when the byte flag at +0x10 is nonzero; otherwise returns 0.
// @field Object +0x10 BYTE enabledFlag
// @field Object +0x14 void* child
// @field Child +0x28 DWORD field_0x28
DWORD fn_00468A30(void* self) {
    auto* base = reinterpret_cast<BYTE*>(self);
    if (*(base + 0x10) == 0) {
        return 0;
    }
    auto* child = *reinterpret_cast<BYTE**>(base + 0x14);
    return *reinterpret_cast<DWORD*>(child + 0x28);
}
} // namespace lift_00468A30

// [0x00468AC0] sub_00468AC0 (16 bytes)
namespace lift_00468AC0 {
// @name Unknown::GetChildFieldOrZero
// @class Unknown
// @summary If the flag byte at +0x10 is nonzero, returns the dword at (*(this+0x14)) +0x24; otherwise returns 0.
// @field Unknown +0x10 BYTE field_0x10
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x24 DWORD field_0x24
DWORD fn_00468AC0(void* self) {
    if (lift_field<BYTE>(self, 0x10) == 0) {
        return 0;
    }
    const DWORD child = lift_field<DWORD>(self, 0x14);
    return lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), 0x24);
}
} // namespace lift_00468AC0

// [0x0046FAA0] sub_0046FAA0 (16 bytes)
namespace lift_0046FAA0 {
// @name Unknown::NotifyChildIfPresent
// @class Unknown
// @summary If the child pointer at +0x00 is nonnull, calls the child's vtable slot at +0x10 (thiscall, arg 1); otherwise does nothing.
// @field Unknown +0x00 DWORD field_0x00
void fn_0046FAA0(void* self) {
    const DWORD child = lift_field<DWORD>(self, 0x00);
    if (child == 0) {
        return;
    }
    // Child's vtable pointer is at child+0x00; slot at vtable+0x10 is the callee.
    const DWORD vtable = lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), 0x00);
    const DWORD slot = lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x10);
    using SlotFn = void(__thiscall*)(void* thisPtr, int arg);
    auto fn = reinterpret_cast<SlotFn>(static_cast<uintptr_t>(slot));
    fn(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), 1);
}
} // namespace lift_0046FAA0

// [0x0046FA80] sub_0046FA80 (19 bytes)
namespace lift_0046FA80 {
// @name sub_0046FA80
// @summary Auto-lifted identical-shape clone of 0x0046FAA0 (Unknown::NotifyChildIfPresent).
namespace lift_0046FAA0 {
// @name Unknown::NotifyChildIfPresent
// @class Unknown
// @summary If the child pointer at +0x00 is nonnull, calls the child's vtable slot at +0x10 (thiscall, arg 1); otherwise does nothing.
// @field Unknown +0x00 DWORD field_0x00
void fn_0046FA80(void* self) {
    const DWORD child = lift_field<DWORD>(self, 0x00);
    if (child == 0) {
        return;
    }
    // Child's vtable pointer is at child+0x00; slot at vtable+0x10 is the callee.
    const DWORD vtable = lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), 0x00);
    const DWORD slot = lift_field<DWORD>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0xFC);
    using SlotFn = void(__thiscall*)(void* thisPtr, int arg);
    auto fn = reinterpret_cast<SlotFn>(static_cast<uintptr_t>(slot));
    fn(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), 1);
}
} // namespace lift_0046FAA0
} // namespace lift_0046FA80

// [0x0046F8F0] sub_0046F8F0 (19 bytes)
namespace lift_0046F8F0 {
// @name sub_0046F8F0
// @summary Auto-lifted identical-shape clone of 0x005304A0 (Unknown::SetByteAt1D8).
namespace lift_005304A0 {
// @name Unknown::SetByteAt1D8
// @class Unknown
// @summary Stores a byte argument into the sub-object at this->+0x10 at offset +0x1D8.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x1D8 uint8_t field_0x1D8

struct Unknown {
    uint8_t pad_0000[0xF8];
    uint8_t* field_0x10;
};

void __thiscall fn_0046F8F0(Unknown* self, uint8_t value) {
    uint8_t* sub = self->field_0x10;
    sub[0x12C] = value;
}
} // namespace lift_005304A0
} // namespace lift_0046F8F0

// [0x00468580]
namespace lift_00468580 {
// @name Unknown::invokeChildVfunc0
// @class Unknown
// @summary Thiscall with no stack args. If *(this+0x00) is non-null, loads the pointer at (that+0x10), then calls vtable slot 0 of that object with this = (that+0x10) and one int argument of 1.
// @field Unknown +0x00 void* field_0x00

typedef void (*lift_vfunc_1_t)(void* self, int arg);

void Unknown_invokeChildVfunc0(void* self) {
    void* eax = lift_field<void*>(self, 0x00);
    if (eax == nullptr) {
        return;
    }
    void* ecx = reinterpret_cast<uint8_t*>(eax) + 0x10;
    void* obj = *reinterpret_cast<void**>(ecx);
    void** vtbl = *reinterpret_cast<void***>(obj);
    lift_vfunc_1_t fn = reinterpret_cast<lift_vfunc_1_t>(vtbl[0]);
    fn(ecx, 1);
}
} // namespace lift_00468580

// [0x0046FE10] sub_0046FE10 (25 bytes)
namespace lift_0046FE10 {
// @name sub_0046FE10
// @summary Auto-lifted identical-shape clone of 0x00535610 (ExportDialog::vfunc_0).
namespace lift_00535610 {
// @name OglRenderer::vfunc_34
// @class OglRenderer
// @summary Stores a byte argument into byte +0xC4 of the object referenced by this->+0x38->+0x64.
// @field OglRenderer +0x38 void* field_0x38
// @field field_0x38 +0x64 void* field_0x64
// @field field_0x64 +0xC4 uint8_t field_0xC4
void fn_0046FE10(void* self, uint8_t value) {
    void* a = lift_field<void*>(self, 0xCC);
    void* b = lift_field<void*>(a, 0x26C);
    lift_field<uint8_t>(b, 0x1F0) = value;
}
} // namespace lift_00535610
} // namespace lift_0046FE10

// [0x0046FE30] sub_0046FE30 (25 bytes)
namespace lift_0046FE30 {
// @name sub_0046FE30
// @summary Auto-lifted identical-shape clone of 0x00535610 (ExportDialog::vfunc_0).
namespace lift_00535610 {
// @name OglRenderer::vfunc_34
// @class OglRenderer
// @summary Stores a byte argument into byte +0xC4 of the object referenced by this->+0x38->+0x64.
// @field OglRenderer +0x38 void* field_0x38
// @field field_0x38 +0x64 void* field_0x64
// @field field_0x64 +0xC4 uint8_t field_0xC4
void fn_0046FE30(void* self, uint8_t value) {
    void* a = lift_field<void*>(self, 0xCC);
    void* b = lift_field<void*>(a, 0x26C);
    lift_field<uint8_t>(b, 0x1F1) = value;
}
} // namespace lift_00535610
} // namespace lift_0046FE30

// [0x00468710] sub_00468710 (17 bytes)
namespace lift_00468710 {
// Known callee 0x0046FE10: sub_0046FE10 (Auto-lifted identical-shape clone of 0x00535610 (ExportDialog::vfunc_0).)
extern void ext_0046FE10(void* self, uint8_t value);

// @name descriptiveName_00468710 (forwardToChildIfEnabled)
// @summary If the byte flag at +0x10 is set, forward the call and value to the object pointer stored at +0x14; otherwise return.
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
void fn_00468710(void* self, uint8_t value) {
    if (lift_field<uint8_t>(self, 0x10) == 0) {
        return;
    }
    const uint32_t next = lift_field<uint32_t>(self, 0x14);
    ext_0046FE10(reinterpret_cast<void*>(static_cast<uintptr_t>(next)), value);
}
} // namespace lift_00468710

// [0x00468730] sub_00468730 (17 bytes)
namespace lift_00468730 {
// Known callee 0x0046FE30: sub_0046FE30 (Auto-lifted identical-shape clone of 0x00535610 (ExportDialog::vfunc_0).)
extern void __thiscall ext_0046FE30(void* self, uint8_t value);

// @name forwardToLinkedIfFlagged
// @summary If the flag byte at +0x10 is set, forward (value) to the object at +0x14; otherwise do nothing.
// @field field_0x10 uint8_t flag
// @field field_0x14 void* linked
// Calling convention: thiscall (ecx = self), one stack argument, callee pops 4 (ret 4).
void __thiscall fn_00468730(void* self, uint8_t value) {
    auto* base = static_cast<uint8_t*>(self);
    if (*(base + 0x10) == 0) {
        return;
    }
    void* linked = *reinterpret_cast<void**>(base + 0x14);
    ext_0046FE30(linked, value);
}
} // namespace lift_00468730

// [0x00463950] sub_00463950 (23 bytes)
namespace lift_00463950 {
// @name sub_00463950
// @summary Auto-lifted identical-shape clone of 0x0040BEE0 (Window::sendMessage_0x18B).
namespace lift_0040BEE0 {
extern int mem_00925694;
extern int32_t __stdcall ext_SendMessageA(uint32_t hWnd, uint32_t msg, uint32_t wParam, uint32_t lParam);

// @name Window::sendMessage_0x18B
// @class Window
// @summary Sends message 0x18B with zero wParam/lParam to the window handle stored in this->+0x20.
// @field Window +0x20 uint32_t hWnd
void fn_00463950(void* self) {
    const uint32_t hWnd = lift_field<uint32_t>(self, 0x2E4);
    ext_SendMessageA(hWnd, 0x1009, 0, 0);
}
} // namespace lift_0040BEE0
} // namespace lift_00463950

// [0x00465EF0] sub_00465EF0 (24 bytes)
namespace lift_00465EF0 {
// Known callee 0x00433290: Unknown::forwardToChildAt154 (Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.)
extern void ext_00433290(void* self, DWORD stackArg);
// Global holding a pointer to the object whose +0x20 flag gates the forward.
extern void* mem_00ACDB40;

// @name ForwardToChildIfFlagSet
// @class Unknown
// @summary Forwards one stack argument to forwardToChildAt154 on the global object when its +0x20 field is nonzero; otherwise returns (ret 4).
// @field Unknown +0x20 DWORD field_0x20
void fn_00465EF0(DWORD stackArg) {
    void* self = mem_00ACDB40;
    if (self == nullptr) {
        return;
    }
    if (lift_field<DWORD>(self, 0x20) == 0) {
        return;
    }
    ext_00433290(self, stackArg);
}
} // namespace lift_00465EF0

// [0x0046FDA0] sub_0046FDA0 (25 bytes)
namespace lift_0046FDA0 {
// @name Unknown::setSubobject1E0Value
// @class Unknown
// @summary Stores the single stack argument into field +0x1E0 of the object reached via self->+0xCC->+0x26C (thiscall, ret 4).
// @field Unknown +0xCC void* field_0xcc
// @field Unknown +0x26C void* field_0x26c
// @field Unknown +0x1E0 int32_t field_0x1e0
void fn_0046FDA0(void* self, int32_t value) {
    // mov eax, [ecx + 0xcc]      ; eax = self->field_0xcc
    void* sub = lift_field<void*>(self, 0xCC);
    // mov ecx, [eax + 0x26c]     ; ecx = sub->field_0x26c
    void* target = lift_field<void*>(sub, 0x26C);
    // mov edx, [esp + 4]         ; edx = value (first stack argument)
    // mov [ecx + 0x1e0], edx     ; target->field_0x1e0 = value
    lift_field<int32_t>(target, 0x1E0) = value;
    // ret 4                      ; callee pops the one stack argument
}
} // namespace lift_0046FDA0

// [0x0046FDC0] sub_0046FDC0 (25 bytes)
namespace lift_0046FDC0 {
// @name sub_0046FDC0
// @summary Auto-lifted identical-shape clone of 0x0046FDA0 (Unknown::setSubobject1E0Value).
namespace lift_0046FDA0 {
// @name Unknown::setSubobject1E0Value
// @class Unknown
// @summary Stores the single stack argument into field +0x1E0 of the object reached via self->+0xCC->+0x26C (thiscall, ret 4).
// @field Unknown +0xCC void* field_0xcc
// @field Unknown +0x26C void* field_0x26c
// @field Unknown +0x1E0 int32_t field_0x1e0
void fn_0046FDC0(void* self, int32_t value) {
    // mov eax, [ecx + 0xcc]      ; eax = self->field_0xcc
    void* sub = lift_field<void*>(self, 0xCC);
    // mov ecx, [eax + 0x26c]     ; ecx = sub->field_0x26c
    void* target = lift_field<void*>(sub, 0x26C);
    // mov edx, [esp + 4]         ; edx = value (first stack argument)
    // mov [ecx + 0x1e0], edx     ; target->field_0x1e0 = value
    lift_field<int32_t>(target, 0x1E4) = value;
    // ret 4                      ; callee pops the one stack argument
}
} // namespace lift_0046FDA0
} // namespace lift_0046FDC0

// [0x00468B10] sub_00468B10 (26 bytes)
namespace lift_00468B10 {
// @name UnknownObject::getInnerFields
// @class UnknownObject
// @summary Loads the sub-object at this+0x14 and returns its fields at +0x24 (dword), +0x28 (dword) and +0x2C (byte) via out-params (original returns in ecx, edx, al).
// @field UnknownObject +0x14 void* field_0x14
// @field UnknownObject +0x24 uint32_t field_0x24
// @field UnknownObject +0x28 uint32_t field_0x28
// @field UnknownObject +0x2C uint8_t field_0x2C
void fn_00468B10(void* self, uint32_t* out_ecx, uint32_t* out_edx, uint8_t* out_al) {
    void* inner = lift_field<void*>(self, 0x14);
    *out_ecx = lift_field<uint32_t>(inner, 0x24);
    *out_edx = lift_field<uint32_t>(inner, 0x28);
    *out_al = lift_field<uint8_t>(inner, 0x2C);
}
} // namespace lift_00468B10

// [0x0046FBA0] sub_0046FBA0 (27 bytes)
namespace lift_0046FBA0 {
// @name sub_0046FBA0
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_0046FBA0(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x45) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_0046FBA0

// [0x0046C2A0] sub_0046C2A0 (27 bytes)
namespace lift_0046C2A0 {
// @name Unknown::CallSlot1B0OfChildField20
// @class Unknown
// @summary If the object at +0x20 is non-null, calls its vtable slot +0x1B0 with (-1, -1) and returns that result; otherwise returns 0.
// @field Unknown +0x20 void* field_0x20
int32_t fn_0046C2A0(void* self) {
    void* child = lift_field<void*>(self, 0x20);
    if (child == nullptr) {
        return 0;
    }

    using SlotFn = int32_t (__thiscall*)(void* self, int32_t a, int32_t b);
    void* vtbl = lift_field<void*>(child, 0);
    auto slot = reinterpret_cast<SlotFn>(lift_field<void*>(vtbl, 0x1B0));
    return slot(child, -1, -1);
}
} // namespace lift_0046C2A0

// [0x0046FB80] sub_0046FB80 (28 bytes)
namespace lift_0046FB80 {
// @name sub_0046FB80
// @summary Auto-lifted identical-shape clone of 0x005AC820 (Unknown::walkLinkUntilFlagSet_005AC820).
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_0046FB80(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x45) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x45) == 0);
    return eax;
}
} // namespace lift_005AC820
} // namespace lift_0046FB80

// [0x00469C90] sub_00469C90 (30 bytes)
namespace lift_00469C90 {
// @name fn_00469C90 (fillDwordRangeFromSource)
// @summary Writes the DWORD at *src into every 4-byte slot in [dst, end); no-op when dst == end.
// (no @class: free function, no member field access)
void fn_00469C90(uint32_t* dst, uint32_t* end, const uint32_t* src) {
    if (dst == end) {
        return;
    }
    do {
        *dst = *src;
        ++dst;
    } while (dst != end);
}
} // namespace lift_00469C90

// [0x00465ED0] sub_00465ED0 (31 bytes)
namespace lift_00465ED0 {
// Known callee 0x00433FF0: sub_00433FF0 (Auto-lifted identical-shape clone of 0x0045E4A0 (CBase::forwardToMfcOrd6090).)
extern void ext_00433FF0(void* self);
extern uint32_t mem_00ACDB40;  // global object pointer (dword)
extern uint8_t mem_00AD6C6C;   // global enable flag (byte)

// @name ForwardToMfcIfEnabled
// @class UnknownGlobalObject
// @summary Forwards self to 0x00433FF0 when the global object exists, its +0x20 dword is nonzero, and the global flag is set; otherwise returns.
// @field UnknownGlobalObject +0x20 int32_t field_0x20
void fn_00465ED0(void* self) {
    const uint32_t obj = mem_00ACDB40;
    if (obj == 0) {
        return;
    }
    const void* object = reinterpret_cast<const void*>(static_cast<uintptr_t>(obj));
    if (lift_field<int32_t>(object, 0x20) == 0) {
        return;
    }
    if (mem_00AD6C6C == 0) {
        return;
    }
    ext_00433FF0(self);
}
} // namespace lift_00465ED0

// [0x0046FF50] sub_0046FF50 (31 bytes)
namespace lift_0046FF50 {
// @name Unknown::SetValueAndForwardToChild
// @class Unknown
// @summary Stores the 32-bit stack argument at this+0x174, then also stores it at this->+0xcc->+0x26c->+0x1fc.
// @field Unknown +0xcc void* field_0xcc
// @field Unknown +0x174 uint32_t field_0x174
// Nested accesses (object type not recovered): (this+0xcc)+0x26c is a pointer; its +0x1fc is a uint32_t.
void fn_0046FF50(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x174) = value;
    void* inner = lift_field<void*>(self, 0xcc);
    void* target = lift_field<void*>(inner, 0x26c);
    lift_field<uint32_t>(target, 0x1fc) = value;
}
} // namespace lift_0046FF50

// [0x0046FE90]
namespace lift_0046FE90 {
// @name Unknown::requestStopUnlessFlagSet
// @class Unknown
// @summary If the byte at this+0x152 is zero, tail-calls RequestStop; otherwise returns.
// @field Unknown +0x152 uint8_t field_0x152

void fn_0046F930(void* self);

void fn_0046FE90(void* self)
{
    uint8_t flag = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(self) + 0x152);
    if (flag == 0) {
        fn_0046F930(self);
    }
}
} // namespace lift_0046FE90

// [0x00465E80] sub_00465E80 (22 bytes)
namespace lift_00465E80 {
// Known callee 0x00435B30: sub_00435B30 (Auto-lifted identical-shape clone of 0x00642600 (forwardEraseTailRange).)
extern void ext_00435B30(void* self);
// Global pointer at 0x00ACDB40; dereferenced when non-null.
extern void* mem_00ACDB40;

// @name CheckedForwardEraseTail
// @class Unknown
// @summary If the global object pointer is non-null and its +0x20 field is nonzero, tail-forward to sub_00435B30; otherwise return.
// @field Unknown +0x20 int32_t field_0x20
void fn_00465E80(void* self) {
    if (mem_00ACDB40 != nullptr &&
        lift_field<int32_t>(mem_00ACDB40, 0x20) != 0) {
        ext_00435B30(self);
    }
}
} // namespace lift_00465E80

// [0x004694E0]
namespace lift_004694E0 {
// @name checkSubObjectBitFlag
// @summary Checks if the object is enabled at +0x10 and its sub-object at +0x1c has the given bit flag set.
// @field Object +0x10 uint8_t field_0x10
// @field Object +0x1c void* field_0x1c

extern uint8_t mem_read8(const void* base, uint32_t offset);
extern void* mem_read_ptr(const void* base, uint32_t offset);
extern bool __thiscall ext_004B08A0(void* self, uint32_t index);

bool __thiscall fn_004694E0(void* self, uint32_t index) {
    if (mem_read8(self, 0x10) == 0) {
        return false;
    }
    void* sub = mem_read_ptr(self, 0x1c);
    if (sub == nullptr) {
        return false;
    }
    return ext_004B08A0(sub, index);
}
} // namespace lift_004694E0
