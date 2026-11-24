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
