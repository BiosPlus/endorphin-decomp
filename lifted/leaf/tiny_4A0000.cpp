// Lifted C++ translation unit: lifted/leaf/tiny_4A0000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00A35B7C;
extern "C" void __fastcall ext_004E81C0(void* self);
extern "C" int mem_00941484;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name VirtualSlot8Thunk
// @class VTable
// @summary Virtual dispatch thunk: loads the object's vtable and tail-calls slot 8 (offset +0x20) with the same this pointer.
// @field VTable +0x20 void* slot8
void fn_004AA580(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x20]      ; tail-jump to vtable slot 8, this still in ecx
    using SlotFn = void(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[8]);
    target(self);
}
extern "C" void __fastcall ext_00668D80(void* self);
extern "C" void __fastcall ext_00678110(void* self);
extern "C" void __fastcall ext_00676C70(void* self);
extern "C" void __fastcall ext_004E78B0(void* self);
#include <cstdint>
#include <cstddef>
#include <cstring>

#include <cstddef>
#include <cstring>
// @summary Returns global int32 value from mem_00A35B7C.
extern "C" int32_t __cdecl fn_004A2490(void) {
    return mem_00A35B7C;
}

// [0x004A5850] sub_004A5850 (8 bytes)
// @name sub_004A5850
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_004E81C0.
extern "C" void __fastcall fn_004A5850(void* self) {
    ext_004E81C0(static_cast<char*>(self) + 0x4);
}

// [0x004A96A0] sub_004A96A0 (11 bytes)
// @name sub_004A96A0
// @summary Destructor tail-call: restores vtable mem_00941484 and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_004A96A0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00941484;
    ext_0065C660(self);
}

// [0x004AD960] sub_004AD960 (8 bytes)
// @name sub_004AD960
// @summary This-adjustor thunk: adjusts `this` by +0x10 and tail-calls SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>::vfunc_0.
extern "C" void __fastcall fn_004AD960(void* self) {
    ext_00668D80(static_cast<char*>(self) + 0x10);
}

// [0x004AEC70] sub_004AEC70 (8 bytes)
// @name sub_004AEC70
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00678110.
extern "C" void __fastcall fn_004AEC70(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00678110(delegate_obj);
}

// [0x004AEC80] sub_004AEC80 (8 bytes)
// @name sub_004AEC80
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_00676C70.
extern "C" void __fastcall fn_004AEC80(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_00676C70(delegate_obj);
}

// [0x004AF860] sub_004AF860 (8 bytes)
// @name sub_004AF860
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_004E78B0.
extern "C" void __fastcall fn_004AF860(void* self) {
    ext_004E78B0(static_cast<char*>(self) + 0x8);
}

// [0x004AEC90]
namespace lift_004AEC90 {
// @name sub_004AEC90
// @summary Reads a 32-bit value at offset +0x08 and returns it plus 0x30.
// @field Unknown +0x08 uint32_t field_0x08


uint32_t __thiscall sub_004AEC90(void* self) {
    return *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x8) + 0x30;
}
} // namespace lift_004AEC90

// [0x004A24A0] sub_004A24A0 (12 bytes)
namespace lift_004A24A0 {
extern uint32_t mem_00A35B7C;

// @name setGlobalU32FromArg
// @summary Stores its single stack argument (stdcall, callee pops 4 bytes) into the global mem_00A35B7C.
void fn_004A24A0(uint32_t value) {
    // mov eax, [esp+4]     -> eax = first argument
    // mov [0xa35b7c], eax  -> mem_00A35B7C = eax
    mem_00A35B7C = value;
    // ret 4                -> stdcall epilogue; handled by the calling convention
}
} // namespace lift_004A24A0

// [0x004A57F0] sub_004A57F0 (19 bytes)
namespace lift_004A57F0 {
// @name descriptiveName_004A57F0 (storeArgToFields204And210)
// @summary Stores the single stack argument into two DWORD fields of self (+0x204 and +0x210); callee pops 4 bytes.
// @field Unknown +0x204 DWORD field_0x204
// @field Unknown +0x210 DWORD field_0x210
extern void __fastcall fn_004A57F0(void* self, int edx_unused, DWORD value) {
    (void)edx_unused;
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<DWORD*>(base + 0x204) = value;
    *reinterpret_cast<DWORD*>(base + 0x210) = value;
}
} // namespace lift_004A57F0

// [0x004AECC0] sub_004AECC0 (25 bytes)
namespace lift_004AECC0 {
// @name Unknown::getSubobjectElementCount
// @class Unknown
// @summary Returns the number of 8-byte elements in the sub-object's range (end - begin) / 8, or 0 if begin is null.
// @field Unknown +0x08 void* subobject
// @field Subobject +0x24 uint32_t begin
// @field Subobject +0x28 uint32_t end
int fn_004AECC0(void* self) {
    // mov eax, [ecx + 8]  ; eax = this->subobject
    uint32_t sub = lift_field<uint32_t>(self, 0x08);
    // mov ecx, [eax + 24] ; ecx = sub->begin
    uint32_t begin = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)), 0x24);
    // add eax, 20         ; eax = sub + 0x20 (base of the range record)
    // test ecx, ecx ; jne  -> if begin != 0, use range path
    if (begin == 0) {
        // xor eax, eax ; ret
        return 0;
    }
    // mov eax, [eax + 8]  ; eax = (sub + 0x20)->+8 = sub->end
    uint32_t end = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)), 0x28);
    // sub eax, ecx ; sar eax, 3  -> (end - begin) >> 3 (arithmetic)
    int32_t diff = static_cast<int32_t>(end - begin);
    return diff >> 3;
}
} // namespace lift_004AECC0

// [0x004A5900] sub_004A5900 (30 bytes)
namespace lift_004A5900 {
// @name sub_004A5900
// @summary Auto-lifted identical-shape clone of 0x004442C0 (descriptiveName: fn_004442C0 (walk first-link chain until flag at +0xC1 is set)).
namespace lift_004442C0 {
// @name descriptiveName: fn_004A5900 (walk first-link chain until flag at +0xC1 is set)
// @summary Starting from the object at arg, follows the dword at offset 0 of each node (linked chain) until it reaches a node whose byte at +0xC1 is nonzero; returns the node preceding that node (or arg itself if the first node already matches).
// @field field_0xC1 +0xC1 uint8_t flag
void fn_004442C0(void* self) {
    // Mirrors the 32-bit original: nodes are addressed by 32-bit pointers stored at offset 0.
    DWORD eax = (DWORD)(uintptr_t)self;
    DWORD ecx = *reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(eax));
    if (*reinterpret_cast<const BYTE*>(static_cast<uintptr_t>(ecx + 0xAD)) != 0) {
        return;
    }
    do {
        eax = ecx;
        ecx = *reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(eax));
    } while (*reinterpret_cast<const BYTE*>(static_cast<uintptr_t>(ecx + 0xAD)) == 0);
    (void)eax;
}
} // namespace lift_004442C0
} // namespace lift_004A5900

// [0x004A58E0]
namespace lift_004A58E0 {
// @name Unknown::FindFirstFlaggedNextLink
// @summary Starting at arg->+0x08, follows +0x08 links until a node whose byte at +0xAD is nonzero is found.
// @field Node +0x08 Node* next
// @field Node +0xAD uint8_t flag

struct Node {
    uint8_t field_0x00[0x08];
    Node* next;          // +0x08
    uint8_t field_0x0C[0xAD - 0x0C];
    uint8_t flag;        // +0xAD
};

void sub_004A58E0(Node* arg) {
    Node* p = arg->next;
    if (p->flag != 0) {
        return;
    }
    do {
        p = p->next;
    } while (p->flag == 0);
}
} // namespace lift_004A58E0
