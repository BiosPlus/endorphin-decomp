// Lifted C++ translation unit: lifted/leaf/decompiled_490000.cpp
#include "lift_compat.h"

// [0x00495A20] sub_00495A20 (60 bytes)
namespace lift_00495A20 {
extern void (*mem_00925134)();

// @name sub_00495A20
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00596660(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00495A20(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x18;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00596660(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00495A20

// [0x004940D0] sub_004940D0 (8 bytes)
namespace lift_004940D0 {
// Known callee 0x00494050: sub_00491FC0 (MSVC scalar deleting destructor: calls sub_00491A90 and frees memory when (flags & 1) is set.)
extern void ext_00494050();

// @name ForwardToDeletingDtorReturnSelf
// @summary Calls the scalar deleting destructor at 0x00494050 on self and returns self (ecx) unchanged.
void* fn_004940D0(void* self) {
    // The original passes ecx through the call, then returns ecx in eax.
    // The callee's flags argument is not set up by this stub; the call is
    // modeled with no arguments, so the callee's stack-based flags are not
    // reproduced here.
    ext_00494050();
    return self;
}
} // namespace lift_004940D0

// [0x00493E10] sub_00493E10 (20 bytes)
namespace lift_00493E10 {
// @name ForwardByteArgToVirtualSlot5
// @summary Stores the low byte of its argument at this+0x08, then tail-dispatches the same argument to vtable slot 5 (+0x14) of the object referenced by this+0x00.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 uint8_t field_0x08
uint32_t fn_00493E10(void* self, uint32_t arg) {
    // mov byte ptr [self+0x08], al
    lift_field<uint8_t>(self, 0x08) = static_cast<uint8_t>(arg);

    // mov ecx, [self]        ; ecx = object pointer (becomes `this` for the callee)
    void* obj = lift_field<void*>(self, 0x00);

    // mov edx, [ecx]         ; edx = object's vtable
    void* vtable = lift_field<void*>(obj, 0x00);

    // mov [esp+4], eax       ; argument is re-stored unchanged
    // mov eax, [edx+0x14]    ; eax = vtable[5]
    // jmp eax                ; tail call: callee receives (obj, arg) and its result is ours
    using VirtualFn = uint32_t (*)(void* self_obj, uint32_t value);
    auto fn = reinterpret_cast<VirtualFn>(lift_field<void*>(vtable, 0x14));
    return fn(obj, arg);
}
} // namespace lift_00493E10

// [0x004940E0] sub_004940E0 (24 bytes)
namespace lift_004940E0 {
// Known callee 0x00494060: sub_00494060 (XORs a 32-bit value at [ecx] with the first stack argument.)
extern void __thiscall ext_00494060(void* self, uint32_t mask);

// @name Unknown::ToggleMaskIfTestMismatch
// @class Unknown
// @summary Tests whether any bit in mask is set in the dword at [this]; if that boolean differs from the byte flag argument, calls sub_00494060 to XOR mask into the dword.
// @field Unknown +0x00 uint32_t field_0x00
void fn_004940E0(void* self, uint32_t mask, uint8_t flag) {
    // mov eax, [esp+4] ; test [ecx], eax ; setne dl
    uint32_t word = lift_field<uint32_t>(self, 0x00);
    uint8_t set = (word & mask) != 0 ? 1 : 0;

    // cmp dl, [esp+8] ; je ret
    if (set != flag) {
        // push eax ; call sub_00494060 (thiscall: ecx = self, stack = mask)
        ext_00494060(self, mask);
    }

    // ret 8 (callee-cleaned stack arguments; handled by the calling convention)
}
} // namespace lift_004940E0

// [0x00491870] sub_00491870 (27 bytes)
namespace lift_00491870 {
// @name sub_00491870
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00491730(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00491870(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00491730(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00491870

// [0x0049F2E0] sub_0049F2E0 (27 bytes)
namespace lift_0049F2E0 {
// @name sub_0049F2E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0049ECB0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0049F2E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0049ECB0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0049F2E0

// [0x00494FF0]
namespace lift_00494FF0 {
// @name initWithOneAndArg
// @summary Calls ext_00661680 on arg1 with (1, arg2) and returns arg1.


extern uint32_t __thiscall ext_00661680(uint32_t self, uint32_t a1, uint32_t a2);

uint32_t __stdcall sub_00494FF0(uint32_t arg1, uint32_t arg2) {
    ext_00661680(arg1, 1, arg2);
    return arg1;
}
} // namespace lift_00494FF0
